/**
  @file 0792.cpp
  @title  No.792 真理関数をつくろう - yukicoder
  @url https://yukicoder.me/problems/no/792
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef unsigned int uint;

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

  int N;
  cin >> N;

  vector<int> tmpQ(N, 0);
  vector<vector<int>> Q;
  vector<int> R(pow(2, N), 0);

  REP(i, pow(2, N)) {
    REP(j, N) {
      cin >> tmpQ[j];
    }
    cin >> R[i];
    Q.PB(tmpQ);
  }

  string str_and = "∧";
  string str_or  = "∨";
  string str_not = "¬";
  string str_top = "⊤"; // all true
  string str_btm = "⊥"; // all false

  int c = 0;
  vector<string> buf;
  REP(i, (int)pow(2, N)) {
    string tmp = "";
    if (R[i] == 1) {
      c++;

      tmp += "(";
      REP(j, N) {
        if (Q[i][j] == 1) {
          tmp += ("P_" + to_string(j + 1));
        } else {
          tmp += str_not;
          tmp += ("P_" + to_string(j + 1));
        }

        if (j != N - 1) {
          tmp += str_and;
        }
      }
      tmp += ")";
      buf.PB(tmp);
    }
  }

  string ans = "A=";
  REP(i, SZ(buf)) {
    ans += buf[i];
    if (i != (SZ(buf) - 1)) {
      ans += str_or;
    }
  }

  if (c == pow(2, N)) {
    ans = "A=" + str_top;
  } else if (c == 0) {
    ans = "A=" + str_btm;
  }

  OUT(ans);
  return 0;
}
