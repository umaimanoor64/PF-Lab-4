#include<iostream>
using namespace std;
main()
{
string movieName;
int adRs;
int chRs;
int no_adTi;
int no_chTi;
int total_amount;
int donated;
int rem_amount;
float percentage;
cout<<"movie name: ";
cin>>movieName;
cout<<"Adults ticket price= ";
cin>>adRs;
cout<<"child ticket price= ";
cin>>chRs;
cout<<"Adult tickets sold: ";
cin>>no_adTi;
cout<<"child tickets sold: ";
cin>>no_chTi;
total_amount=(adRs*no_adTi)+(chRs*no_chTi);
donated=total_amount-10000;
rem_amount=total_amount-donated;
cout<<"total amount= "<<total_amount<<endl;
cout<<"donated amount= "<<donated<<endl;
cout<<"rem_amount= "<<rem_amount<<endl;

percentage=(donated*100)/total_amount;
cout<<"percentage of donated amount= "<<percentage;
}