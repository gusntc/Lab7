#include<iostream>

using namespace std;

int adiff(int A,int B){
  if(A >= 360 or B >= 360){
    A = A%360;
    B = B%360;
  }
  int C = A-B;
  if(C%360 == 0){
    return 0;
  }else{
    if(C > 0){
      if(C >= 180){
        return 360-C;
      }
    return C;
    }else{
      if(C < -180){
        return C+360;
      }
    return -C;
    }
  }
}
 

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244);
}
