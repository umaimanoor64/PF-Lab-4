#include<iostream>
using namespace std;
main()
{
string name;
float subject_1;
float subject_2;
float subject_3;
float subject_4;
float subject_5;
float percentage;
cout<<" enter subject_1 marks out of 100= ";
cin>>subject_1;
cout<<"enter subject_2 marks out of 100= ";
cin>>subject_2;
cout<<" enter subject+3 marks out of 100= ";
cin>>subject_3;
cout<<" enter subject+4 marks out of 100= ";
cin>>subject_4;
cout<<" enter subject_5 marks out of 100= ";
cin>>subject_5;
percentage=(subject_1+subject_2+subject_3+subject_4+subject_5)*100/500;
cout<<" percentage of 5 subjects= "<<percentage;
}