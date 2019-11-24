/**
  @file 893.cpp
  @title  No.893 お客様を誘導せよ - yukicoder
  @url https://yukicoder.me/problems/no/893
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
  // vector<queue<int>> vq(N);
  queue<int> vq[N];
  int sum = 0;
  int tmpP, tmpA;
  REP(i, N) {
    cin >> tmpP;
    REP(j, tmpP) {
      cin >> tmpA;
      vq[i].push(tmpA);
    }
    sum += tmpP;
  }

  int count = 0;
  while (1 && count != N) {
    count = 0;
    REP(i, N) {
      if (!vq[i].empty()) {
        cout << vq[i].front();
        cout << " ";
        vq[i].pop();
      } else {
        count++;
      }
    }
  }
  cout << "\n";

  return 0;
}
