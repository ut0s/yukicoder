/**
  @file 354.cpp
  @title  No.354 メルセンヌ素数 - yukicoder
  @url https://yukicoder.me/problems/no/354
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

// string superlong_pow(string S, int cnt) {
//   string ret = S;
//   REP(i, cnt) {
//     ret = superlong_pro(ret, "2");
//   }
//   return ret;
// }

string convert_base(LL N, int base) {
  vector<LL> ans;
  int tmp;
  while (true) {
    tmp = N % base;
    ans.PB(tmp);
    N /= base;
    if (N == 0) {
      break;
    }
  }

  reverse(ALL(ans));
  string S;
  REP(i, SZ(ans)) {
    S += to_string(ans[i]);
  }

  return S;
}

int main() {
  ::iostream_init();

  LL p;
  cin >> p;

  // naive
  // string mer = "10";
  // REP(i, p) {
  //   mer += "1";
  // }
  // OUT(count(ALL(mer), '1')-1);

  OUT(p);

  return 0;
}
