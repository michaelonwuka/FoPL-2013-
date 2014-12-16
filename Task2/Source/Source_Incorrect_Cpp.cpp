/*	Michael Onwuka
 	Cpp incorrect addition
 	10/2/13
 	Fundamentals of Programming Languages */
 	
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main () {
	int a = 0;
	int b = 0;
	int sum = 0;
	
	cout << "Enter two integers to be added together " << endl;
	cin >> a;
	cout << "  +  ";
	cin >> b;
	a = abs(a);
	b = abs(b);
	sum = a + b;
  ofstream myfile;
  myfile.open ("Incorrect_cpp.txt");
  myfile << sum;
  myfile.close();
  return 0;
}
