/*Writing a program add more elements in an array a[5] = {1,2,3,4,5} and display it*/

#include <iostream>
using namespace std;

int main(){
	int length=5, a[length]={1,2,3,4,5};
	
	cout<<"Enter the new length of Array which should be 6 or more : ";
	cin>>length; 
	cout<<endl<<"Enter the new Elements\n";
	for(int i=5; i<length; i++){
		cin>>a[i];
	}
	cout<<"The New Array : ";
	for (int j=0; j<length;j++){
		cout<<"  "<<a[j];
	}
	return 0;
}