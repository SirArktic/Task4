#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>  

using namespace std;

int A[3][3] = {
	{ 1, 2, 3 },
	{ 4, 5, 6 },
	{ 7, 8, 9 }
};



int n=0,turns=0,x=0,k=0;


int turn_360() {
	if (x==1) {
	cout << endl;
	cout << "Rotate "<< k << " degrees:" << endl << endl;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(4) << A[i][j];
		}
		cout << endl << endl;
	}
	x = 0;
	return 0;
}

int turn_90() {
	cout << endl;
	cout << "Rotate "<< k << " degrees:" << endl << endl;

	for (int i = 0; i <3; i++) {
		for (int j = 2; j >=0; j--) {
			cout << setw(4) << A[j][i];
		}
			cout << endl << endl;;
	}

	return 0;
}

int turn_180() {
	cout << endl;
	cout << "Rotate "<< k <<" degrees:" << endl << endl;
	
	
	for (int i = 2; i >= 0; i--) {
		for (int j = 2; j >= 0; j--) {
			cout << setw(4) << A[i][j];
		}
		cout << endl << endl;
	}

	return 0;
}

int turn_270() {
	cout << endl;
	cout << "Rotate "<< k << " degrees:" << endl << endl;
	for (int i = 2; i >= 0; i--) {
		for (int j = 0; j <3; j++) {
			cout << setw(4) << A[j][i];
		}
		cout << endl << endl;
			
	}
	
	return 0;
}

int main()
{
	setlocale(0, "");

	cout << "Original array:" << endl << endl; 
	{turn_360();}
	cout << "Enter number of 90 degrees rotations:" << endl;
	cin >> n;

	for (int i = 0; i < n; i++) {
		turns++;
		if (turns == 5) { turns = 1; }
	}

	k = 90 * turns;

	switch (turns)
	{
		case 1: {turn_90();
			break;}

		case 2: {turn_180();
			break;}

		case 3: {turn_270();
			break;}

		case 4: {x=1; turn_360();
			break;}

		default: {
			break;}
	}

	system("pause");
    return 0;
}
