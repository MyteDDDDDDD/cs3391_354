#include <iostream>

using namespace std;

int calDouble(int i) { // calculate doubled digits of each section, return sum
	int sum;
	int a=(i/1000)*2; 
	int b=((i%100)/10)*2;
	
	sum = a / 10 + a % 10 + b / 10 + b % 10;

	return sum;
}

int calUnDouble(int i) { // calculate undoubled digits of each section, return sum
	int sum;
	int a = i % 1000 / 100;
	int b = i % 10;

	sum = a / 10 + a % 10 + b / 10 + b % 10;

	return sum;
}

int main(){

	int numC; //number of cases

	cin >> numC;
	for (int i = 0; i < numC; i++) {
		int section1,section2,section3,section4; // 4 sections of credit card number
		int sumD; //sum of doubled digits
		int sumUnD; // sum of undoubled digits

		cin >> section1 >> section2 >> section3 >> section4;
		sumD = calDouble(section1) + calDouble(section2) + calDouble(section3) + calDouble(section4);
		sumUnD = calUnDouble(section1) + calUnDouble(section2) + calUnDouble(section3) + calUnDouble(section4);
		
		if ((sumD + sumUnD) % 10 == 0)
			cout << "Valid"<<endl;
		else
			cout << "Invalid"<<endl;
		
	}

	return 0;
}