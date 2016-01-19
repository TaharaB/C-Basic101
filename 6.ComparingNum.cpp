#include <iostream>
using namespace std;

int areVeryDifferent(int a, int b);

int main() {
	int x = 4, y = 10, z = -4;
	if (areVeryDifferent(x, y)) cout << "x and y are very different" << endl;
	if (areVeryDifferent(x, z)) cout << "x and z are very different" << endl;
	if (areVeryDifferent(y, z)) cout << "y and z are very different" << endl;
	return 0;
}

int areVeryDifferent(int a, int b){
	int diff = a-b;
	return ((diff<-10) || (diff >10));


}


