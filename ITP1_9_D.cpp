#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){ 
  //ITP1_9_D
  //Transformation
  //replaceメソッドとかの引数の意味とイテレータの操作
  string str;
  int q;
  cin >> str >> q;
  string order;
  for(int i = 0; i < q; i++){
    cin >> order;
    int a,b;
    if(order == "replace"){
      string c;
      cin >> a >> b >> c;
      str.replace(a,b-a+1,c);
    }else if(order == "reverse"){
      cin >> a >> b;
      string tmp = str.substr(a,b - a + 1);
      reverse(tmp.begin(), tmp.end());
      str.replace(a,b-a+1,tmp);
    }else if(order == "print"){
      cin >> a >> b;
      cout << str.substr(a,b - a + 1) << endl;
    }else{}

  }





}
int main(){
  Main();
}
