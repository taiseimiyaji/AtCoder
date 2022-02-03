#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){
  //ITP1_8_A
  //Toggling Cases
  string s;
  getline(cin, s);
  //cin >> s;
  for(int i = 0; i < s.length(); i++){
    if(islower(s[i])){
      s[i] = toupper(s[i]);
    }else if(isupper(s[i])){
      s[i] = tolower(s[i]);
    }else{
    }
  }
  cout << s << endl;
}
int main(){
  Main();
}
