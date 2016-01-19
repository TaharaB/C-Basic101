#include <iostream>
using namespace std;
int main ()
{	
	int num1, num2, num3;
	cout << "Enter Three Integers " << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;

	cout<< " The values you've  entered are " << num1 << "," << num2 <<"," << num3 
	<<endl;

	int sum = num1+num2+num3;
	cout << " The sum is "; 
	cout << sum;
	cout << endl;

	cout << " The average for these number is "  <<sum/3;
	cout<< endl;
	if (sum%2 ==1)
	{
		 cout<< " The total sum is an odd number." ;
	}
	else 
	{
		cout << " Total sum is an even number.";
		cout << endl;
	}
	return 0;
} 
