#include<iostream>
using namespace std;
main()
{
string name;
float matricMarks;
float interMarks;
float ecatMarks;
float aggregate;
float matricresult;
float interResult;
float ecatResult;
cout<<"enter your name"<<endl;
cin>>name;
cout<<"enter your matric marks"<<endl;
cin>>matricMarks;
matricresult=(matricMarks/1100.0)* 100 * 0.10;
cout << matricresult;
cout<<"enter your inter marks"<<endl;
cin>>interMarks;
interResult=(interMarks/1100.0)*100*0.4;
cout<<interResult;
cout<<"enter your ecat marks"<<endl;
cin>>ecatMarks;
ecatResult=(ecatMarks/400)*100*0.5;
cout<<ecatResult;
aggregate=matricresult+interResult+ecatResult;
cout<<"aggregate is"<<aggregate<<endl;
}
