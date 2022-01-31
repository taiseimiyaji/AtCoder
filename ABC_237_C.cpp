#include <bits/stdc++.h>
using namespace std;
//上位の人の回答を理解するために適宜コメントを追加

void Main(){
  const int N = (int)2e6 + 7;
  char s[N];
  int n; //文字列の長さ

  scanf("%s", s);
  n = strlen(s);
  int p = 0;
  while(p < n && s[p] == 'a') p++; //頭からaが続く限りループ
  if(p == n){
    printf("Yes\n");
    return;
  }
  int q = n;
  while(s[q - 1] == 'a')q--;//後からaが続く限りループ
  if(p > n - q) {
    printf("No\n");
    return;
  }
  q--;
  while(p < q){ //同時にp++,q--して文字が異なっていればNoそうでなければYess
    if(s[p] != s[q]){
      printf("No\n");
      return;
    }
    p++;
    q--;
  }
  printf("Yes\n");
  return;

}
int main(){
  Main();
}
