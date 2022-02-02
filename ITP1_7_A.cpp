#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void Main(){
  //ITP1_7_A
  //Grading
  int m,f,r;
  char grade = ' ';
  while(1){
    cin >> m >> f >> r;
    if(m == -1 && f == -1 && r == -1){
      break;
    }
    if(m == -1 || f == -1){
      grade = 'F';
    }else if(m + f >= 80){
      grade = 'A';
    }else if(m + f >= 65 && m + f < 80){
      grade = 'B';
    }else if((m + f >= 50 && m + f < 65) || r >= 50){
      grade = 'C';
    }else if((m + f >= 30 && m + f < 50)){
      grade = 'D';
    }else{
      grade = 'F';
    }
    cout << grade << endl;
  }


  

}
int main(){
  Main();
}
