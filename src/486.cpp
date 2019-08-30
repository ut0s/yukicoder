/**
  @file 486.cpp
  @title  No.486 3 Straight Win(3連勝) - yukicoder
  @url https://yukicoder.me/problems/no/486
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  auto win_east = S.find("OOO");
  auto win_west = S.find("XXX");

  if (win_east == string::npos && win_west == string::npos) {
    cout << "NA" << endl;
  } else if (win_east == string::npos && win_west != string::npos) {
    cout << "West" << endl;
  } else if (win_east != string::npos && win_west == string::npos) {
    cout << "East" << endl;
  } else if (win_east != string::npos && win_west != string::npos) {
    if (win_west < win_east) {
      cout << "West" << endl;
    } else {
      cout << "East" << endl;
    }
  }

  return 0;
}
