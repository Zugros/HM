#include <iostream>

using namespace std;

 main() {
 	
 	int salary;
 	
 	cout<<"please entre your salary to deduct the tax \n";
 	cin>>salary;
 	
 	if(salary<6*1000000){
 		cout<<"Your final salary is :"<<salary;
	 }
	 
	 else if(salary>=6*1000000 && salary<8*1000000){
	 	cout<<"Your final salary is :"<<salary-((5*salary)/100);
	 }
	 
	 else if(salary>=8*1000000 && salary<10000000){
	 	cout<<"Your final salary is :"<<salary-((10*salary)/100);
	 }
    
    else if(salary>=10000000 && salary<14000000){
    	cout<<"Your final salary is :"<<salary-((15*salary)/100);
	}
	
	else if(salary>=14000000 && salary<18000000){
		cout<<"Your final salary is :"<<salary-((20*salary)/100);
	}
	
	else if(salary>=18000000 && salary<25000000){
		cout<<"Your final salary is :"<<salary-((25*salary)/100);
	}
	
	else{
		cout<<"Your final salary is :"<<salary-((35*salary)/100);
	}
}