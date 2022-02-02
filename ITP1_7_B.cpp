#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){
  //ITP1_7_B
  //How many ways?
  int n,x;
  
  int ans = 0;
  while(1){
    cin >> n >> x;
    if(n == 0 && x == 0)return;
    for(int i = 1; i < n + 1; i++){
      for(int j = i  + 1; j < n + 1; j++){
        for(int k = j + 1; k < n + 1; k++){
          if(i + j + k == x){
            ans += 1;
          }
        }
      }
    }
    cout << ans << endl;
    ans = 0;
  }



  

}
int main(){
  Main();
}
