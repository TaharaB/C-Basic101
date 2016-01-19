#include <iostream>
using namespace std;
int main(){
	
	double money = 3000;
	bool countinue_shopping = true;

	int amount_spent;
	cout<<"How much are you willing to spend? ";
	cin>>amount_spent;

	while(amount_spent <0.0){
		cout<<"Invalid Amount, Try Again: ";
		cin>>amount_spent;
	}
	
	cout<<"Alright"<<endl;

	if(amount_spent <= 200){
		cout<<"Are You kidding, thats not enought to buy those shoes.";
		cout<<endl;
	
	}
	else cout<<"Thank You big spender, You wont regret this!";

	int balance = money;
	if( amount_spent >0.0 ){
		balance = money - amount_spent;
		cout<<"You have spent " <<amount_spent<<" and your  new current balance is "<<balance<<"."<<endl;
	}
	

	if(amount_spent == 3000){
		countinue_shopping = false;
		cout<<"You reached negative balance, They cut your card."<<endl;
	}

	return 0;

}
