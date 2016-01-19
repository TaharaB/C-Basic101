#include <iostream>
using namespace std;

int main (){
	//Q.1
	int size;
	cout<<"Please Enter an Odd Positive Integer: ";
	cin>>size;

	if(size <0 || size %2 ==0 ){
	 cout<<"Illegal Value, Please Try Again: ";
	 cin>>size;
	}
	cout<<endl;
	cout<<"Picture One: ";
	cout<<endl;

	for(int row=1; row<=size; row++){
	 for(int col=1; col<=size; col++){
	  if (col ==row || col == (size+1 -row)) cout<<"*";
	  else if (col == (size +1)/2 || row == (size+1)/2) cout<<"+";
	  else cout<<" ";
	 }
	 cout<<endl;
	}
	cout<<endl;

	//Q2.
	cout<<"Picture Two: ";
	cout<<endl;

	for(int c1=1; c1<=size; c1++)cout<<"*";
	cout<<endl;

	for(int r=1; r<=size; r++){
	 for(int c=1; c<=size; c++){
	  if(c == (size+1)/2) cout<<"*";
	  else cout<<" ";  
	 }
	 cout<<endl;
	}
	cout<<endl;

	//Q.3
	cout<<"Picture Three: ";
	cout<<endl;

	int num;
	cout<<"Please Enter any  Postive Number: ";
	cin>>num;

	while(num <=0){
	 cout<<"Enter a postive number: ";
	 cin>>num;
	}

	for(int therow=1; therow<=num; therow++){
	 for(int thecol=1; thecol<=num; thecol++){
	  if(therow==1 || therow==num || thecol==1 || thecol==num)cout<<"*";
	  else cout <<" ";
	 }
	 cout<<endl;
	}
	return 0;
}
