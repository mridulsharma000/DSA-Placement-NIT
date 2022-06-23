#include<iostream>
using namespace std;

void saydig(int n, string *arr){
    //Base case
    if(n==0)
     return;
    
    int dig= n%10;
    n/=10;
    
    //Recursive call
    
    saydig(n, arr);
     cout<<arr[dig]<<" ";
    
}

int main(){
    int n; 
    cin>>n;
    string arr[10]= {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        saydig(n, arr);
        
    }
    
   // ip: 211918
  //  op: two one one nine one eight
    
// Agar bhai ye tujhe ulta print karna hai toh cout wale statemwnt ko recursion call ke pehle laga

    #include<iostream>
using namespace std;

void saydig(int n, string *arr){
    //Base case
    if(n==0)
     return;
    
    int dig= n%10;
    n/=10;
    
     cout<<arr[dig]<<" ";
    //Recursive call
    
    saydig(n, arr);
    
    
}

int main(){
    int n; 
    cin>>n;
    string arr[10]= {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        saydig(n, arr);
        
    }
    
 //   ip: 211918
 //   op: eight one nine one one two
