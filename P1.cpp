#include <iostream>
#include <cmath>

using namespace std;

main() {

float num1,num2;

cout<<"please entre one number \n";
cin>>num1;

cout<<"please entre second number \n";
cin>>num2;

cout<<"sum :"<<num1+num2<<"\n";
cout<<"subtraction :"<<num1-num2<<"\n";
cout<<"product :"<<num1*num2<<"\n";
cout<<"remainder :"<<fmod(num1,num2)<<"\n";
}