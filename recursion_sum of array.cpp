#include <iostream>
using namespace std;
int sum(int arr[], int n){
  //base
  if(n==0){
      return 0;
  }
  if(n==1){
      return arr[0];
  }
 
 //ek case solve
 int small= arr[0]+arr[1];
 
 //baaki ka recursion kakre laya
 int rem= sum(arr+2,n-2);
 
 //net sum= chhotu + baaki sum
 int ans= small+rem;
 return ans;
}
int main() {
int n=5;
int arr[5]={0,2,6,6,7};
cout<<sum(arr,n);
return 0;
}
