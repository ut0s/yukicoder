/**
  @file 870.cpp
  @title  No.870 無敵囲い - yukicoder
  @url https://yukicoder.me/problems/no/870
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;

  vector<string> xy(N, "");
  string tmp0, tmp1, tmp2, tmp3;
  REP(i, N) {
    cin >> tmp0 >> tmp1 >> tmp2 >> tmp3;
    xy[i] = tmp0 + tmp1 + tmp2 + tmp3;
  }

  pair<bool, string> grid[10][10];

  REP(i, 10) {
    REP(j, 10) {
      grid[i][j].first  = false;
      grid[i][j].second = "";
    }
  }

  grid[2][8].first  = true;
  grid[2][8].second = "A";
  grid[3][9].first  = true;
  grid[3][9].second = "B";
  grid[7][9].first  = true;
  grid[7][9].second = "C";

  REP(i, N) {
    int x1 = stoi(xy[i].substr(0, 1));
    int y1 = stoi(xy[i].substr(1, 1));
    int x2 = stoi(xy[i].substr(2, 1));
    int y2 = stoi(xy[i].substr(3, 1));

    grid[x1][y1].first  = false;
    grid[x2][y2].first  = true;
    grid[x2][y2].second = grid[x1][y1].second;
    grid[x1][y1].second = "";
  }

  if (grid[5][8].first && grid[5][8].second == "A"
      && grid[4][8].first && grid[4][8].second == "B"
      && grid[6][8].first && grid[6][8].second == "C") {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
