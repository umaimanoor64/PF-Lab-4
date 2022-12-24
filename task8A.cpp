#include<iostream>
using namespace std;
main()
{
int num;
int rem1;
int rem2;
int rem3;
int rem4;
int div1;
int div2;
int div3;
int div4;
int sum;
cout<<"enter four digit number=";
cin>>num;
rem1=num%10;
div1=num/10;
rem2=div1%10;
div2=div1/10;
rem3=div2%10;
div3=div2/10;
rem4=div3%10;
div4=div3/10;
sum=rem1+rem2+rem3+rem4;
cout<<" sum of individual digits of a 4digit number="<<sum;
}

