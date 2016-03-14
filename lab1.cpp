/*
   This code can be compiled and run ok.

   After user inputs an integer n,
   if n is odd, n equals to 3*n+1;
   if n is even, then n equals to n/2.
   This code can print the sequence numbers according to n.
   All works will stop when n equals to 1.

   usage (how to run):
     lab1  (then input n)

   input file:
     none

   output files:
     none

   compile (how to compile):
     g++ -o lab1 lab1.cpp

   pseudocode:
     with a given n, printing out the corresponding sequence of numbers

   coded by Chia-Lin Su, ID: H34041149, email: su2952@gmail.com
   date: 2016.03.05
*/

#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	cout << "Please enter an integer: ";
	cin >> n;
	cout << n << " ";
	
	while ( n != 1 ){
		if ( n%2 == 1 )
			n = 3*n+1;
		else 
			n = n/2;
			
		cout << n << " ";
	}
	
	return 0;
}
