#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int n)
/*  bool checkPalindrome(string & str, int i, int n) krke bhi same hi aa rha hai..kyu */
{
    //Base case
    if(i>(n-1-i)){
      return true; //matlb sab check kar liya equal hai
    }
    if(str[i]!=str[n-1-i]){
        return false;
    }
    
    else{
        return checkPalindrome(str,i+1,n);
    }
}
int main() {
	string name ="OYO";
    int n= name.length();
	cout<<endl;
	
	bool ans = checkPalindrome(name,0,3);
	if(ans){
	    cout<<"Yes";
	}
	else{
	    cout<<"No";
	}
	return 0;
}
