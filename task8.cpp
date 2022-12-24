#include<iostream>
using namespace std;
main()
{
int vegetables;
int vegPricePerKg;
int fruits;
int fruitPerKg;
int vegRs;
int fruitsRs;
int total_earning;
cout<<"total vegetables in kg= ";
cin>>vegetables;
cout<<"total fruits in kg= ";
cin>>fruits;
cout<<" price of veg per 1kg=";
cin>>vegPricePerKg;
cout<<"price of fruit per 1kg=";
cin>>fruitPerKg;
fruitsRs=fruits*fruitPerKg*1.94;
vegRs=vegetables*vegPricePerKg*1.94;
total_earning=fruitsRs+vegRs;
cout<<"total earning of all fruits and veg in rs="<<total_earning;
}

