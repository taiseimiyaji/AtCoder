#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_4_D
  //Min,Max and Sum
  int n;
  int min = 1000000;
  int max = -1000000;
  long long sum = 0; //値の取りうる範囲を問題文から推測する
  int val;
  cin >> n;
  for(int i=0;i < n;i++){
    cin >> val;
    if(min > val){
      min = val;
    }
    if(max < val){
      max = val;
    }
    sum += val;
  }
  cout << min << " " << max << " "<< sum << endl;

}

int main(){
  Main();
}
