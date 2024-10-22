#include<iostream>
using namespace std;

void Print1(int n)
{
    if(n%2==0){
        cout<<"\n Even Number";
    }
    else{ 
        cout<<"\n Odd Number";
    }
}
int main(){
 int n;
 cout<<"\n Enter a Number:";
 cin>>n;
 Print1(n);
 return 0;
}