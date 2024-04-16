#include<iostream>
using namespace std;

int main(){
    // int a,i=1;
    // cin>>a;

    // while(i<=a){
    //     cout<<i<<endl;
    //     i=i+1;
    // }
    

    //code for sum of n numbers
    // int a,sum=0,i=1;
    // cin>>a;
    // while(i<=a){
    //     sum=sum+i;
    //     i=i+1;
    // }
    // cout<<sum;

    //sum of even no
    // int n,sum=0,i=2;
    // cin>>n;
    // while (i<=n)
    // {
    //     sum=sum+i;
    //     i=i+2;
    // }
    // cout<<sum<<endl;
    
    //prime or not
    int a,i=1;
    cin>>a;
    while(i<a){
        if(a%i==0){
            cout<<"Not prime for"<<i<<endl;
        }
        else{
            cout<<"Prime for"<<i<<endl;
        }
        i=i+1;
    }


}