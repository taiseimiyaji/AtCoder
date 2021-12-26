#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> one_case;
  int N;
  int M;
  cin >> N;
  cin >> M;
  
  vector<pair<int, int>> tak;
  for(int i = 0; i < N; i++){
    cin >> tak.at(i).first;
    cin >> tak.at(i).second;
  }
  vector<pair<int, int>> aok;
  for(int i = 0; i < N; i++){
    cin >> aok.at(i).first;
    cin >> aok.at(i).second;
  }


  for(int i = 0; i < N + 1; i++){
    one_case.emplace_back(i + 1);
  }
  string ans;
  do{
    //条件
    //任意の整数に対して以下が成り立つ
    //高橋のi,jが紐で繋がれている場合、青木のPi,Pjは紐で繋がれている。
    //条件を満たす数列があればYes、なければNo
    
    ans = "Yes";
    for(int i = 0; i < N - 1; i++){
      for(int j = 0; j < N; j++){
        for(int k = 0; k < N; k ++){
          if(tak.at(k).first != (one_case.at(i + 1))){
            if(tak.at(k).second != one_case.at(j + 1)){
            ans = "No";
            }
          }
        }
      }
    }
    if(ans =="Yes"){
      break;
    }

  } while(next_permutation(one_case.begin(), one_case.end()));

  cout << ans << endl;
  return 0;
}
