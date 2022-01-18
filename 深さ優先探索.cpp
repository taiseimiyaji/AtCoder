#include <bits/stdc++.h>
using namespace std;

void Main(){
  int H,W;
  cin >> H >> W;
  int Map[W+1][H+1];
  vector<pair<int,int>> position;
  string ans = "NO";
  //地図の作成
  string tmp;
  char cmap;
  for(int i = 1; i < H + 1;i++){
    cin >> tmp;
    for(int j = 1; j < W + 1;j++){
      cmap = tmp.at(j-1);
      if(cmap == '#'){
        Map[j][i] = 0;
      }else if(cmap == '.'){
        Map[j][i] = 1;
      }else if(cmap == 'S'){
        Map[j][i] = 0;
        position.push_back({j,i});
      }
      else{
        cout << "error" << endl;
      }
    }
  }
  //探索
  //深さ優先探索で実装してみる
  int i = 0;//スタックの深さカウント
  while(1){
    // cout << position.at(i).first << ":" << position.at(i).second << endl;
    if(position.at(i).first == W  || position.at(i).first == 1 || position.at(i).second == H || position.at(i).second == 1){
      //出口に来たら終了
      ans ="YES";
      break;
    }//進める場所を探索
    else if(Map[position.at(i).first + 1][position.at(i).second] == 1){
      position.push_back({position.at(i).first + 1, position.at(i).second});
      i++;
    }else if(Map[position.at(i).first][position.at(i).second - 1] == 1){
      position.push_back({position.at(i).first, position.at(i).second - 1});
      i++;
    }else if(Map[position.at(i).first - 1][position.at(i).second] == 1){
      position.push_back({position.at(i).first - 1, position.at(i).second});
      i++;
    }else if(Map[position.at(i).first][position.at(i).second + 1] == 1){
      position.push_back({position.at(i).first, position.at(i).second + 1});
      i++;
    }else{
      //進める場所がない場合は一つ戻る
      
      position.pop_back();
      i--;
      if(position.size() == 0){
        break;
      }
    }
    Map[position.at(i).first][position.at(i).second] = 0;
  }
  cout << ans << endl;
  
}

int main(){
  Main();
}
