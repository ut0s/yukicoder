/**
  @file 211.cpp
  @title  No.211 素数サイコロと合成数サイコロ (1) - yukicoder
  @url https://yukicoder.me/problems/no/211
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

template <class T>
void show(vector<T>& v) {
  for (uint i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

int main() {
  int K;
  cin >> K;

  vector<int> a = {2, 3, 5, 7, 11, 13};
  vector<int> b = {4, 6, 8, 9, 10, 12};

  vector<int> L;
  map<int, double> m;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      L.push_back(a[i] * b[j]);
      m[a[i] * b[j]]++;
    }
  }

  auto itr = find(ALL(L), K);
  if (itr != L.end()) {
    cout << fixed << setprecision(20) << m[K] / 36.0 << endl;
  } else {
    cout << 0.0 << endl;
  }

  return 0;
}
