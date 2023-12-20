/* Writing a code that will take load factor and velocity of aircraft as input from user 
and generate the desired manuevers*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float n, v, g=9.8;
	
	cout<<"Enter load factor in g's : ";
	cin>>n;
	cout<<"Enter the velocity of plane in m/s : ";
	cin>>v;
	n=n*g;
	
	cout<<endl<<"This plane can do a level turn"<<endl<<"At anguar velocity = ";
	cout<< g*(sqrt(n*n-1))/v <<" rev/s"<<endl<<"At radius of curve = "<< v*v/(g*(sqrt(n*n-1)))<<" m"<<endl;
	cout<<endl;
	
	cout<<"This plane can do pull up manuever "<<endl<<"At angular velocity = ";
	cout<<g*(n-1)/v<<" rev/s"<<endl<<"At radius of curve = "<<v*v/(g*(n-1))<<" m"<<endl;
	cout<<endl;
	
	cout<<"This Plane can do pull down manuever "<<endl<<"At angular velocity = ";
	cout<<g*(n+1)/v<<" rev/s"<<endl<<"At radius of curve = "<<v*v/(g*(n+1))<<" m"<<endl;
	 
	 return 0;
}