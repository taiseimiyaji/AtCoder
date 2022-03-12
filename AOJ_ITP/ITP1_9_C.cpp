#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){ 
  //ITP1_9_C
  //Card Game
  // C++ では文字列の比較で辞書順に比較できるらしい。
  int n;
  cin >> n;
  string taro;
  string hanako;
  int t = 0;
  int h = 0;
  for(int i = 0; i < n; i++){
    cin >> taro;
    cin >> hanako;
    if(taro > hanako)t+=3;
    else if(taro < hanako)h+=3;
    else{
      t+=1;
      h+=1;
    }
  }
  cout << t << " " << h << endl;


}
int main(){
  Main();
}
