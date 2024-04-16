#include <iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;
    cout<<"The given char is "<<ch << endl;
    if('a'<=ch && ch<='z'){
        cout<<"Lowercase";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Upper case";
    }
    else{
        cout<<"Number";
    }

}