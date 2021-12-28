#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_3_B
  //Print Test Cases
  for(int i = 1; i < 10001; i++){
    int ans = 0;
    cin >> ans;
    if(ans != 0){
      cout << "Case " << i << ": " << ans << endl;
    }
    else{
      break;
    }
  }

}

int main(){
  Main();
}
