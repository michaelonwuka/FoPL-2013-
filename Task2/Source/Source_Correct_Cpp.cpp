/*	Michael Onwuka
 	Cpp correct addition
 	10/2/13
 	Fundamentals of Programming Languages */
 	
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main () {
	int a = 0;
	int b = 0;
	int sum = 0;
	
	cout << "Enter two integers to be added together " << endl;
	cin >> a;
	cout << "  +  ";
	cin >> b;
	sum = a + b;
  ofstream myfile;
  myfile.open ("Correct_cpp.txt");
  myfile << sum;
  myfile.close();
  return 0;
}


