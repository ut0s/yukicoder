/**
  @file 512.cpp
  @title  No.512 魔法少女の追いかけっこ - yukicoder
  @url https://yukicoder.me/problems/no/512
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

int main() {
  ::iostream_init();

  int X, Y;
  cin >> X >> Y;
  int N;
  cin >> N;
  vector<int> A(N + 1, INT_MAX);
  REP(i, N) {
    cin >> A[i];
  }

  bool flag   = true;
  double time = 0;
  REP(i, N) {
    time = (double)A[i] / double(X);
//    cout << "idx: " << i << " time: " << time << " d_X: " << A[i] << " d_Y: " << double(Y) * time << " A[i+1]: " << A[i + 1] << " Y/N: " << ((double)Y * time > A[i + 1]) << "\n";
    if (((double)Y * time) - 0.000000001 > A[i + 1]) {
      flag = false;
      break;
    }
  }

  if (flag) {
    OUT("YES");
  } else {
    OUT("NO");
  }

  return 0;
}
