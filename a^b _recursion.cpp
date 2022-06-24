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
