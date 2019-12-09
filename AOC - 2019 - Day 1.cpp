#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	ifstream inputfile;
	inputfile.open("input.txt");
	int numbers;
	int whole = 0;
	int remainder = 0;

	//************Part 1************ 
	/*
	while (inputfile >> numbers) {
		whole += (numbers/3-2);
	}
	inputfile.close();
	cout << whole;
	*/

	//************Part 2************
	while (inputfile >> numbers) {
		remainder = numbers / 3 - 2;
		whole += remainder;
		while(remainder / 3 - 2 > 0) {
			int temp = remainder / 3 - 2;
			whole += temp;
			remainder = temp;
		}
	}
	cout << whole;
}