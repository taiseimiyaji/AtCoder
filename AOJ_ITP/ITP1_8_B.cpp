#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){
  //ITP1_8_B
  //Sum of Numbers
  string s;
  while(1){
    cin >> s;
    if (s == "0")break;
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
      sum += s[i] - '0';
    }
    cout << sum << endl;
  }
}
int main(){
  Main();
}
