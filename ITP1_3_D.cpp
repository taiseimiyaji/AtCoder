#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_3_D
  //How Many Divisors?
  int a,b,c;
  cin >> a >> b >> c;
  int ans = 0;
  for(int i = a; i <= b; i++){
    if(c % i == 0){
      ans++;
    }
  }
  cout << ans << endl;

}

int main(){
  Main();
}
