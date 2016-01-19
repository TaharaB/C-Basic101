#include <iostream>
using namespace std;
int main(){
	//Square Pattern of ABAB
	int num;
	cout<<"Enter a Postive Integer: ";
	cin>>num;
	
	for(int row =1; row<=num; row++){
		for(int col=1; col<=num; col++){
			if(col %2 == 0)cout<<'B';
			else cout<<'A';
		}
		cout<<endl;
	}
	cout<<endl;
	
	int x;
	cout<<"Pleae enter a four digit Integer: ";
	cin>>x;
	
	while(x < 1000 || x >9999){
		return 0;
	}

	while(x >0){
		cout<< x <<endl;
		x = x / 10;
	}
	return 0;
}
