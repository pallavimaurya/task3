#include<iostream>
using namespace std;
int main(){
  int arr[5]={1,2,3,4,5,6,7,8,9,10};
  int *p=&arr[0];
  cout<<"the value in the array are:";
  for(int i=0,i<10;i++){
    cout<<*p<<" ";
    p++;
  }
  return 0;
}
