#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){
  //ITP1_8_C
  //Counting Characters
  //EOFまでを読み込むのはできるけど動作確認の時EOFってどうやるんやろ
  char ch;
  int counter[26] = {0};
  while(cin >> ch){
    if(isupper(ch))ch = tolower(ch);
    int num = ch - 'a';
    counter[num]++;
  }
  for(int i = 0; i < 26; i++){
    printf("%c : %d\n", 'a' + i,counter[i]);
  }
}
int main(){
  Main();
}
