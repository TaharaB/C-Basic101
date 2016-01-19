#include <iostream>
using namespace std;

//1.
void print2DArray(char Array[][3], int row, int col){
	for(int r=0; r < row; r++){
		for(int c=0; c < col; c++){
			cout<<Array[r][c];
		}
		cout<<endl; 
	}

}

//2.
void STRINGCOPY(char &a, char b){
	char box = a;
	a = b;
	b = box;

	cout<< b <<endl;
}

//3.
void STRINGCONCAT(char x, char y){
	char word  = x + y;
	cout << word  <<endl;
}

//4.
void print2DstringOnly(char array[3][3], int row){
	for(int i=0; i<row; i++){
		cout<<array[i]<<endl;
	}
} 
//5.
void calculate2DintegerArray(int x[][3], int row, int col){
	int min = x[0][0];
	int max = x[0][0];
	for(int r=0; r <= row; r++){
		for(int c=0; c <=col; c++){
			cout<< x[r][c] / (r*c) <<endl;
	
			if ( x[r][c] < min){
				min = x[r][c];
				cout << min;
			}

			if ( x[r][c] > max){
				max = x[r][c];
				cout << max;
			}
		}
	}
	cout<<endl;
}
int main(){
	
	//part1.
	char names[3][3] = { "Ti", "Li", "Su"};
	print2DArray(names, 3, 3);
	cout<<endl;	

	//part2.
	char first[] = "First";
	char last[6] = "Last";
	STRINGCOPY(first[5], last[5]);
	cout<<endl;

	//part3.
	STRINGCONCAT(first[5], last[5]);
	cout<<endl;

	//part4.
	print2DstringOnly(names, 6);
	cout<<endl;
	
	//part5.
	int x[][3] = { {1,2,3}, {4,5,6},{7,8,9} };
	calculate2DintegerArray(x, 2, 2);
	cout<<endl;

	cout<<endl;
	return 0;

}

