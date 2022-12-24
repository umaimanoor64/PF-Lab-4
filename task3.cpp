#include<iostream>
using namespace std;
main()
{
int vi;
int vf;
int time;
int acceleration;
cout<<" acceleration is=";
cin >> acceleration;
cout<<"initial velocity=";
cin>> vi;
cout <<" time = ";
cin>>time;
vf=acceleration*time + vi;
cout<<" final velocity is= "<<vf;
}