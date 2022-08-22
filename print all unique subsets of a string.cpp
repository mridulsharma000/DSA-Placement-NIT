#include <iostream>
#include<string>
#include<set>
using namespace std;

void solve(string ip, string op, set<string>&ans){
    
    if(ip.length()==0){
        ans.insert(op);
        return;
    }
    
    string op1= op;
    string op2= op;
    
    op2.push_back(ip[0]);
    
    ip.erase(ip.begin()+0);
    
    solve(ip,op1,ans);
    solve(ip,op2,ans);
    // return ans;
}

int main() {
	string ip;
	cin>>ip;
	set<string>s;
	string op="";
	solve(ip,op,s);
	 set<string>::iterator it;
  for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
 
	return 0;
}
