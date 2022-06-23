#include <iostream>
using namespace std;

void print(int arr[], int s, int e) {
//To show how it's working
	cout<<"array is:"<<endl;
    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int BinSch(int arr[], int s, int e, int key){
    print(arr,s,e);
    //Base case
    
    if(s>e){
        return -1;
    }
    int mid= s+(e-s)/2;
    
    //Element Fond
    
    if(arr[mid]==key){
        return mid;
    }
    //Recursive Relation
    if(arr[mid]<key){
        return BinSch(arr,mid+1,e,key);
    }
    else{
        return BinSch(arr,s,mid-1,key);
    }
}
int main() {
	int n=5;
	int arr[5]={2,4,6,8,9};
	int key;
	cin>>key;
	int ans= BinSch(arr,0,n-1,key);
	cout<<ans;
	return 0;
}


// ip: 1
//op: 
// array is:
// 2 4 6 8 9 
// array is:
// 2 4 
// array is:

// -1  (Not Found Matlb)
