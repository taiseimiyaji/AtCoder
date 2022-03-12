#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_4_C
  //Simple Calculator
  int a,b;
  string op;
  
  int ans = 0;
  for(int i = 0; i < 20000; i++){
    cin >> a >> op >> b;
    if(op == "?"){
      break;
    }
    if(op == "+"){
      ans = a + b;
    }
    if(op == "-"){
      ans = a - b;
    }
    if(op == "*"){
      ans = a * b;
    }
    if(op == "/"){
      ans = a / b;
    }
    cout << ans << endl;
  }


}

int main(){
  Main();
}
