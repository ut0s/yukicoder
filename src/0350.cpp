/**
  @file 350.cpp
  @title  No.350 d=vt - yukicoder
  @url https://yukicoder.me/problems/no/350
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

vector<string> split(string S, string separator) {
  auto separator_length = separator.length();

  auto list = vector<string>();

  auto offset = string::size_type(0);
  while (1) {
    auto pos = S.find(separator, offset);
    if (pos == string::npos) {
      list.push_back(S.substr(offset));
      break;
    }
    list.push_back(S.substr(offset, pos - offset));
    offset = pos + separator_length;
  }

  return list;
}

int main() {
  ::iostream_init();

  string v;
  int t;
  cin >> v >> t;

  v = split(v, ".")[1];
  OUT(stoi(v) * t / 10000);

  // string S = to_string(v * t);
  // REP(i, SZ(S)) {
  //   if (S.substr(i, 1) == ".") {
  //     cout << "\n";
  //     break;
  //   }
  //   cout << S.substr(i, 1);
  // }

  return 0;
}
