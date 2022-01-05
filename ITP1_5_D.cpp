#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_5_D
  //Structured Programming

  int n;
  cin >> n;
  for(int i = 1; i <= n; i ++){
  int x = i;
  if(x % 3 == 0){
    cout << " " << i;
    continue;
  }
  for(x;x != 0; x /=10){
    if(x % 10 == 3){
      cout << " " << i;
      break;
    }
  }
  }
}

int main(){
  Main();
}
