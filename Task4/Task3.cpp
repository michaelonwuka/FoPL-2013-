
/*      Michael Onwuka
        Cpp Goto Statement
        11/17/13
        Fundamentals of Programming Languages */

#include <iostream>
using namespace std;

int main () {
	int n = 0;
	int j = 0;
	int i = 0;
	int x [4][4] ={0};

        for(i=1; i<=n; i++){
		for(j = 1; j <= n; j++)
			if (x [i][j] == 0){
			cout <<"First all-zero row is: " + i;
			break;}
			}
	  return 0;
}
