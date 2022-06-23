#include <iostream>
using namespace std;
//Print function is to show how things are working
void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}
bool lnrS(int *arr, int n, int key){
    print(arr,n);//Just to show kese work kar raha hai
    
   //Base case
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
   //recursive relation
   else{
  bool m= lnrS(arr+1,n-1,key);
   return m;
   }
}
int main() {
	int n=5;
	int arr[5]={11,32,74,6,33};
	int key;
	cin>>key;
	bool ans= lnrS(arr,5,key);
	if(ans){
	    cout<<"Found";
	}
	else{
	    cout<<"Not Found";
	}
	return 0;
}


//Input : 3
//Output:
/*
Size of array is 5
11 32 74 6 33 
Size of array is 4
32 74 6 33 
Size of array is 3
74 6 33 
Size of array is 2
6 33 
Size of array is 1
33 
Size of array is 0

Not Found
*/
