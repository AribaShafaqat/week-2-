#include<iostream>
using namespace std;
main()
{
float megabytes;
float bits;
cout<<"enter value in megabytes"<<endl;
cin>>megabytes;
bits=1024*1024*8*megabytes;
cout<<bits;
}