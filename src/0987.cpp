/**
  @file 0987.cpp
  @title No.987 N×Mマス計算（基本） - yukicoder
  @url https://yukicoder.me/problems/no/987
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

  int N, M;
  cin >> N >> M;
  string op;
  cin >> op;
  vector<LL> B(M, 0);
  REP(i, M) {
    cin >> B[i];
  }

  vector<LL> A(N, 0);
  REP(i, N) {
    cin >> A[i];
  }

  vector<LL> C(N * M, 0);
  REP(i, N) {
    REP(j, M) {
      if (op == "+") {
        C[i * M + j] = A[i] + B[j];
      } else {
        C[i * M + j] = A[i] * B[j];
      }
      cout << C[i * M + j];
      if (j != M - 1) {
        cout << " ";
      } else {
        cout << "\n";
      }
    }
  }

  return 0;
}
