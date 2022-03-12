#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){
  //ITP1_8_D
  //Ring
  //リングってことは二回繰り返せば判定できるってところに気づけば余裕
  string s;
  string p;
  cin >> s >> p;
  s += s;
  if(s.find(p) == s.npos)cout << "No" << endl;
  else cout << "Yes" << endl;;

}
int main(){
  Main();
}
