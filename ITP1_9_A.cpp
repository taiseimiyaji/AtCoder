#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){ 
  //ITP1_9_A
  //Finding a Word
  //文字列操作のライブラリを覚える。正規表現も使いこなせればなおいい
  string W;
  string T;
  cin >> W;
  int count = 0;
  while(1){
    cin >> T;
    if(strcasecmp(T.c_str(),W.c_str()) == 0){
      count++;
    }
    if(T == "END_OF_TEXT"){
      break;
    }
  }
  cout << count << endl;

}
int main(){
  Main();
}
