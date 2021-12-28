#include <bits/stdc++.h>
using namespace std;

void Main(){
  //ITP1_4_A
  //A/B Problem
  int a,b;
  cin >> a >> b;
  int d,r;
  double f;
  d = a / b;
  r = a % b;
  //1.0をかけることで、出力が精度の高い方へ変換される。（型変換)
  //C言語っぽくprintf("%.8lf¥n", f);みたいに出力桁数や形式を指定する方法でもいい。両方覚えておく。
  f = 1.0 * a / b;
  cout << d << " " << r << " " << f << endl;

}

int main(){
  Main();
}
