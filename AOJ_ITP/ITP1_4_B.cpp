#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_4_B
  //Circle
  double r;
  cin >> r;
  double menseki, ensyu;
  menseki = r * r * 3.141592653589;
  ensyu = 2 * r * 3.141592653589;
  //coutの場合はe+0xのような表記になることがある。printfの書き方を覚える。
  //cout << menseki << " " << ensyu << endl;
  printf("%lf %lf\n", menseki, ensyu);

}

int main(){
  Main();
}
