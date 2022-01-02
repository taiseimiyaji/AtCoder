#include <bits/stdc++.h>
using namespace std;

void BubbleSort(){
  vector<int> nums = {9,1,8,2,7,3,6,4,5,11};  //入力配列
  int tmp;  //入れ替え用一時変数
  //先頭の要素をループ
  for(int i=0; i < nums.size()-1; i++){
    //i以降の数値を比較するループ
    for(int j=i+1; j < nums.size(); j++){
      //iとi以降の値を比較してiの方が大きければ入れ替え(昇順並び替え)
      if(nums.at(i) > nums.at(j)){
        tmp = nums.at(i);
        nums.at(i) = nums.at(j);
        nums.at(j) = tmp;
      }
    }
  }
  //結果を出力
  for(int i = 0; i < nums.size(); i++){
    cout << nums.at(i) << endl;
  }

}

int main(){
  BubbleSort();
}
