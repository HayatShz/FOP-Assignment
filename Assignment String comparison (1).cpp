/* Writing a C++ program that takes two strings as input from user and compares them.
 If they are equal it will make them unequal by rotating one string*/
 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstring>

int main(){
	string in1, in2;    // where in1 and in2 are input 1 and 2 repectively//
	cout<<"Input First String : ";
	cin>>in1;
	cout<<"Input Second String : ";
	cin>>in2;
	
	if (in1==in2){
		reverse(in1.begin(), in1.end());
		cout<<"First String : "<<in1<<endl<<"Second String : "<<in2;
	}
		cout<<endl<<"The strings are unequal";
	
	return 0;
}

