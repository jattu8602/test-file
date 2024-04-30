#include<iostream>
#include<stdio.h>
using namespace std;
   
int main(){
    //fobonacci series code
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    int t1=0;
    int t2=1;
    cout<<"The fibonacci series is: "<<endl;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        int nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }

    return 0;
}