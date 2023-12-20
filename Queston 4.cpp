/*Writing a C++ program that uses a while loop to find the largest prime number less
than a given positive integer N*/

#include <iostream>
using namespace std;
int main (){
	int N;
	cout<<"Enter a Number : "; 
	cin>>N;
	
	int j=N;
	while (j>=2){
		
		int i=2;
        while (i<=N/2) {
            if (j%i==0){
            break;
            }
        i++;
        }  
		if(i==(N/2)+1){
			break;
		}
    j--;
	}
    cout<<j<<" is the largest prime number <= "<<N;
    return 0;
}
