#include<iostream>
using namespace std;
main()
{
float bagSize;
float costOfBag;
float area;
float costPerPound;
float costOfAreaPerSqft;
cout<<"bag size in pounds= ";
cin>>bagSize;
cout<<"cost of the bag= ";
cin>>costOfBag;
cout<<" areaof bag in sqft= ";
cin>>area;
costPerPound=costOfBag/bagSize;
costOfAreaPerSqft=bagSize*area;
cout<<" cost of fertlizer per pound= "<<costPerPound<<endl;
cout<<" cost of area per sq ft= "<<costOfAreaPerSqft;
}