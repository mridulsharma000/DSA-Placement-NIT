#include<iostream>
using namespace std;

void reverse(string& str, int i, int j ) {
/* void reverse(string& str, int i, int j ) 
hota toh koi change nahi aata kyuki reverse fn mein jo str hai woh main wale str ki copy hai...iske liye ya toh &str lagao ya phir void function mein hi cout krke op de
*/

    cout << "call recieved for " << str << endl;

    //base case
    if(i>j)
        return ;

    swap(str[i], str[j]);
    i++;
    j--;

    //Recursive call
    reverse(str,i,j);

}

int main() {

    string name = "abcde";
    cout << endl;
    reverse(name, 0 , name.length()-1 );
    cout << endl;
    cout << name << endl;

    return 0;
}
