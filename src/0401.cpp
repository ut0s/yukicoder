/**
  @file 401.cpp
  @title  No.401 数字の渦巻き - yukicoder
  @url https://yukicoder.me/problems/no/401
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

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int i = 0, j = 0, d = 1;
vector<vector<int>> grid(30, vector<int>(30, -1));

void next(const int N) {
  int nextX = j + dx[d];
  int nextY = i + dy[d];

  if (nextX < 0 || N <= nextX) {
    d     = (d + 1) % 4;
    nextX = j + dx[d];
    nextY = i + dy[d];
  } else if (nextY < 0 || N <= nextY) {
    d     = (d + 1) % 4;
    nextX = j + dx[d];
    nextY = i + dy[d];
  } else if (grid[nextY][nextX] != -1) {
    d     = (d + 1) % 4;
    nextX = j + dx[d];
    nextY = i + dy[d];
  }

  j = nextX;
  i = nextY;
}

void show(int N) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << setfill('0') << setw(3) << grid[i][j];
      if (j != N - 1) {
        cout << " ";
      }
    }
    cout << "\n";
  }
}

int main() {
  ::iostream_init();

  int N;
  cin >> N;

  REP(k, N * N) {
    grid[i][j] = k + 1;
    next(N);
  }

  show(N);
  return 0;
}
