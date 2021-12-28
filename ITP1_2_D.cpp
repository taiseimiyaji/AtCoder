#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_2_D
  //Circle in a Rectangle
  int W,H,x,y,r;
  cin >> W;
  cin >> H;
  cin >> x;
  cin >> y;
  cin >> r;
  string ans;
  ans = "No";
  //水平方向と垂直方向で分けて考える
  //水平方向の条件 x - r < 0 and x + r < W
  //垂直方向の条件 y - r < 0 and y + r < H
  if((x - r >= 0) && (x + r <= W) ){
    if((y - r >= 0) && (y + r <= H)){
      ans = "Yes";
    }
  }
  cout << ans << endl;

}

int main(){
  Main();
}
