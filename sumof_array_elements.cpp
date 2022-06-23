//Using RECURSION

#include <iostream>
using namespace std;

int sumArr(int arr[], int n){
    //Base case
    if(n==0){
     return 0;}
    if(n==1){
     return arr[0];}
     
    //Recursive call
        int remainingPart = sumArr(arr+1, n-1);
        int sum = arr[0] + remainingPart;
        
        return sum;
}
int main() {
    int n=5;
	int arr[5]={2,4,6,8,1};
	int ans= sumArr(arr, n);
	cout<<ans;
	return 0;
}
