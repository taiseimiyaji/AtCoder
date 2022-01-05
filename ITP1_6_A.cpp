#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_6_A
  //Reversing Numbers

  int n;
  cin >> n;
  vector<int> vals;
  int tmp;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    vals.push_back(tmp);
  }
  for(int i = vals.size() - 1; i >= 0; i--){
    cout << vals.at(i);
    if(i != 0){
      cout << " ";
    }
    else{
      cout << endl; //最後改行が必要ってことに気づかず詰まった
    }
  }
}

int main(){
  Main();
}
