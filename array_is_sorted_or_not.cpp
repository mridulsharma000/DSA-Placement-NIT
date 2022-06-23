//// Using RECURSION

#include<iostream>
using namespace std;

bool isSorted(int *arr/* ya int arr[]*/,int n){
    // base case
    
/*agar size 0/1 hai...toh sorted manege, baaki agar 1st ele < 0th, false; else
mein pher recursive call kra arr+1 se mtlb size ek kam ho jaayega */

if(n==0 || n==1)
  return 1;
if(arr[1]<arr[0])
  return 0;

// recursive call
else{
    isSorted(arr+1, n-1);
 }
}


int main(){
    int arr[5]={2,4,7,12,31};
  bool ans= isSorted(arr, 5);
  if(ans)
   cout<<"Sorted Hai";
  else
   cout<<"Sorted Nhi Hai";
}
