#include <iostream>
using namespace std;

int power(int a, int b){
   //Base case
   if(b==0){
       return 1;
   }
   //Recursive relation
   return a*power(a,b-1);
}

int main() {
	cout<<endl;
	
	int ans = power(5,3);
    cout<<ans;
	return 0;
}


//MORE OPTIMIZED APPROACH

#include<iostream>
using namespace std;

int power(int a, int b) {
    //base case
    if( b == 0 )
        return 1;

    if(b == 1)
        return a;

    //RECURSIVE CALL
    int ans = power(a, b/2);

    //if b is even
    if(b%2 == 0) {
        return ans * ans;  //even toh return (a^ b/2)* (a^ b/2)
    }
    else {
        //if b is odd
        return a * ans * ans; //odd toh return a* (a^ b/2)* (a^ b/2)
    }
}

int main() {

    int a,b;
    cin >> a >> b;
    cout << endl;
    int ans = power(a,b);

    cout << "Answer is " << ans << endl;

    return 0;
}
