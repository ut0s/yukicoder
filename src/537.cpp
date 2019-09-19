/**
  @file 537.cpp
  @title  No.537 ユーザーID - yukicoder
  @url https://yukicoder.me/problems/no/537
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x) ((int)(x).size())

#define REPI(i, a, b) for (LL i = LL(a); i < LL(b); ++i)
#define REP(i, N) for (LL i = LL(0); i < LL(N); ++i)
#define REPS(i, N) for (int i = 1; i <= (int)(N); i++)
#define RREP(i, N) for (int i = ((int)(N)-1); i >= 0; i--)
#define RREPS(i, N) for (int i = ((int)(N)); i > 0; i--)

#define chmax(ret, x) ret = max(ret, x)
#define chmin(ret, x) ret = min(ret, x)

#define FILL(x, e) memset(x, e, sizeof(x))
#define ZEROS(x) fill(x, 0)

#define SORT(x) sort(ALL(x))
#define UNIQ(x) x.erase(unique(ALL(x)), x.end())

#define BIT(n) (1LL << (n))

#define OUT(x) cout << (x) << "\n"
#define DEBUG(x) cerr << #x << " : " << x << "\n"
#define DEBUG2(x, y) cerr << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")\n";

#define PB push_back
#define EB emplace_back
#define MP make_pair
#define MT make_tuple
#define FI first
#define SE second

const int MOD = 1e9 + 7;

void iostream_init() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(12);
}

template <class T>
std::vector<T> mk_divs(T n) {
  std::vector<T> divs;
  for (T i = 1; i <= sqrt(n) + 1; i++) {
    if (n % i == 0) {
      divs.push_back(i);
      divs.push_back(n / i);
    }
  }
  sort(ALL(divs));
  divs.erase(unique(divs.begin(), divs.end()), divs.end());
  return divs;
}

int main() {
  ::iostream_init();

  LL N;
  cin >> N;

  auto divs = mk_divs(N);
  vector<string> ans;
  REP(i, SZ(divs)) {
    ans.PB(to_string(divs[i]) + to_string(N / divs[i]));
    ans.PB(to_string(N / divs[i]) + to_string(divs[i]));
  }
  SORT(ans);
  UNIQ(ans);

  OUT(SZ(ans));
  return 0;
}
