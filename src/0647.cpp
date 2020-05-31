/**
  @file 647.cpp
  @title  No.647 明太子 - yukicoder
  @url https://yukicoder.me/problems/no/647
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

#define UNIQ(x) v.erase(unique(ALL(x)), x.end());

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
void show(vector<T>& v) {
  for (uint i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

bool DEBUG = true;

int main() {
  ::iostream_init();

  int N;
  cin >> N;
  vector<pair<LL, LL>> AB(N);
  REP(i, N) {
    cin >> AB[i].FI >> AB[i].SE;
  }

  int M;
  cin >> M;
  vector<pair<LL, LL>> XY(M);
  REP(i, M) {
    cin >> XY[i].FI >> XY[i].SE;
  }

  vector<int> cnt(M, 0);
  REP(i, M) {
    REP(j, N) {
      if (XY[i].FI <= AB[j].FI && XY[i].SE >= AB[j].SE) {
        cnt[i]++;
      }
    }
  }

  int max_elem = 0;
  REP(i, M) {
    max_elem = max(max_elem, cnt[i]);
  }
  if (max_elem == 0) {
    OUT("0");
  } else {
    REP(i, M) {
      if (cnt[i] == max_elem) {
        OUT(i + 1);
      }
    }
  }

  return 0;
}
