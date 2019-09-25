/**
  @file 432.cpp
  @title  No.432 占い(Easy) - yukicoder
  @url https://yukicoder.me/problems/no/432
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

int my_plus(int a, int b) {
  int sum = a + b;
  if (sum > 9) {
    return my_plus(sum % 10, (sum % 100) / 10);
  } else {
    return sum;
  }
}

int op(string S) {
  vector<int> ret(SZ(S), 0);
  REP(i, SZ(S)) {
    ret[i] = stoi(S.substr(i, 1));
  }

  vector<int> tmp = ret;
  while (SZ(tmp) != 1) {
    vector<int> next(SZ(tmp) - 1);
    REP(i, SZ(tmp) - 1) {
      next[i] = my_plus(tmp[i], tmp[i + 1]);
    }
    tmp = next;
  }
  return tmp[0];
}

int main() {
  ::iostream_init();

  int T;
  cin >> T;

  vector<string> S(T, "");
  REP(i, T) {
    cin >> S[i];
  }

  REP(i, T) {
    OUT(op(S[i]));
  }

  return 0;
}
