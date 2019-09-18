/**
  @file 628.cpp
  @title  No.628 Tagの勢い - yukicoder
  @url https://yukicoder.me/problems/no/628
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
#define UNIQ(x) v.erase(unique(ALL(x)), x.end())

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

bool comp(pair<int, string> a, pair<int, string> b) {
  if (a.FI != b.FI) {
    return a.FI > b.FI;
  } else {
    return a.SE < b.SE;
  }
}

int main() {
  ::iostream_init();

  int N;
  cin >> N;

  map<string, int> m;
  REP(i, N) {
    int no;
    int score;
    int tmpM;
    cin >> no >> tmpM >> score;
    REP(j, tmpM) {
      string tmpS;
      cin >> tmpS;
      m[tmpS] += score;
    }
  }

  vector<pair<int, string>> vp;
  for (auto e : m) {
    vp.PB(MP(e.SE, e.FI));
  }
  sort(ALL(vp), comp);

  if (SZ(vp) >= 10) {
    REP(i, 10) {
      cout << vp[i].SE << " " << vp[i].FI << "\n";
    }
  } else {
    REP(i, SZ(vp)) {
      cout << vp[i].SE << " " << vp[i].FI << "\n";
    }
  }

  return 0;
}
