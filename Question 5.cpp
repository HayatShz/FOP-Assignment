/*writing a code which will bubble sort an array of 6 integers in ascending order*/

#include <iostream>
using namespace std;
int main(){
	int intarray[5]={3,89,243,43,2,};
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if (intarray[i]>intarray[j]){
				swap(intarray[i], intarray[j]);
			}
		}
	}
	cout<<"Sorted Array : ";
	for(int i=0; i<5; i++){
	    cout<<intarray[i]<<" ";
	}
	return 0;
}