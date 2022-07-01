#include <iostream>
using namespace std;
int
peakInmountainArray(int arr[], int n){
    int s=0, e=n-1;
    int mid= s+(e-s)/2;
    while(s<e)/*(s<=e) se end mein jaake unwanted comparison ho raha tha)*/{
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return arr[s];
}
int main() {
    int n=6;
	int arr[6]= {2,4,6,8,3,1};
	cout<<peakInmountainArray(arr, 6);
	return 0;
}
