/**
  @file 825.cpp
  @title  No.825 賢いお買い物 - yukicoder
  @url https://yukicoder.me/problems/no/825
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
#define ALL(obj) (obj).begin(), (obj).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SZ(x) ((int)(x).size())

#define REPI(i, a, b) for (LL i = LL(a); i < LL(b); ++i)
#define REP(i, N) for (LL i = LL(0); i < LL(N); ++i)
#define REPS(i, N) for (LL i = 1; i <= LL(N); i++)
#define RREP(i, N) for (int i = ((int)(N)-1); i >= 0; i--)
#define RREPS(i, N) for (int i = ((int)(N)); i > 0; i--)

#define chmax(ret, x) ret = max(ret, x)
#define chmin(ret, x) ret = min(ret, x)

#define FILL(x, e) memset(x, e, sizeof(x))
#define ZEROS(x) fill(x, 0)

#define SORT(x) sort(ALL(x))
#define RSORT(x) sort(RALL(x))

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
  // cout.fill('0');
  // cout.width(3);
}

int main() {
  ::iostream_init();

  int A, B, C;
  cin >> A >> B >> C;

  LL ans = 5000;
  LL pay = 0;
  REPS(price, A + 10 * B) {
    REP(a, A + 1) {
      REP(b, B + 1) {
        pay = a + 10 * b;
        if (pay < price) continue;
        LL change = 0;
        if (pay != price) {
          change += (pay - price) / 10L;
          change += (pay - price) % 10L;
        }

        // cout << "a:\t" << a << "\nb:\t" << b << "\npay:\t" << pay << "\nprice:\t" << price << "\n";
        // cout << "change:\t" << change << "\n";
        // OUT("================================");

        if ((A - a) + (B - b) + change == C) {
          ans = min(ans, price);
        }
      }
    }
  }

  if (ans == 0 || ans == 5000) {
    OUT("Impossible");
  } else {
    OUT(ans);
  }

  return 0;
}
