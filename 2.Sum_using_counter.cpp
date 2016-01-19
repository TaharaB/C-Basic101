#include <iostream>
using namespace std;
int main(){
	
	//part1
	int num;
	cout<<"Enter a Positive Integer: ";
	cin>>num;

	//part2
	if(num > 0)cout<<"You entered a Positive Interger."<<endl;

	//part3
	while(num < 0){
		cout<<"You entered a non-Postive Integer, Try Again: ";
		cin>>num;
	}
	
	//part4
	int counter = 0;
	while(counter <= num ){
		cout<<counter<<" ";
		counter = counter + 1;
	}
	cout<<endl;

	//part5
	int even_count  =0;
	cout<<"Even Integers: ";
	while(even_count<= num){
		if(even_count %2 == 0){
			cout<<even_count<<" ";
			even_count = even_count +2;
			cout<<endl;
		}
	}

	//part6
	int odd_count =0;
	cout<<"Odd Integers: ";
	while(odd_count <= num){
		odd_count = odd_count+1;
		cout<<odd_count<<" ";
		odd_count = odd_count+1;
		cout<<endl;
	}
	
	//part7
	int sum = 0;
	int count = 0;
	while(count<= num){
		sum = sum +count;
		count = count +1;
	}
	cout<<"The Sum of all the numbers is "<<sum<<".";
	cout<<endl;

	//part8 
	char symbol;
	cout<<"Enter Your Favorite Symbol: ";
	cin>>symbol;
	
	//part9
	int printer1 = 1;
	while(printer1 <= num){
		cout<<symbol<<" ";
		printer1 ++;
	}
	cout<<endl;

	//part 10
	int printer2 = 1;
	while(printer2 <= num){
		cout<<symbol<<endl;
		printer2 ++;
	}
	cout<<endl;
	
	//part 11
	int printer3 = 1;
	while(printer3 <= num){
		printer3 ++;
		cout<<symbol;
		printer3 ++;
	}
	cout<<endl;

	//part 12
	int printer4 =1;
	while(printer4 <= num){
		printer4 ++;
		cout<<symbol<<endl;
		printer4 ++;
	}
	return 0;

}
