#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){
  //ITP1_7_C
  //Spreadsheet
  int r,c;
  cin >> r >> c;
  int ss[102][102] = {0};
  for (int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin >> ss[i][j];
      ss[i][c] += ss[i][j];
      ss[r][j] += ss[i][j];
    }
    ss[r][c] += ss[i][c];
  }
  for(int i = 0; i <= r; i++){
    for(int j = 0; j <= c; j++){
      cout << ss[i][j];
      if(j != c){
        cout << " ";
      }
    }
    cout << endl;
  }

}
int main(){
  Main();
}
