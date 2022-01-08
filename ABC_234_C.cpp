#include <bits/stdc++.h>
using namespace std;
int toBinary(int bina){
    unsigned long long ans = 0;
    for (int i = 0; bina>0 ; i++)
    {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return ans;
}
void Main(){
  long long int K;
  cin >> K;
  //unsigned long long int ans;
  //ans = toBinary(K) * 2;
  stringstream ss;
  ss << bitset<sizeof(long long int ) * CHAR_BIT>(K);
  string ans = "";
  ans = ss.str();
  //printf("%d", ans);
  regex re(R"((0+)(.*))");
  smatch m;
  regex_match(ans, m, re);
  ans = regex_replace(m[2].str(), regex("1"), "2");
  cout << ans;
}

int main(){
  Main();
}
