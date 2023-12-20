/*writing a code which will remove duplicate characters and display te string*/

#include <iostream> 
#include <cstring> 
using namespace std; 

int main()  
{ 
    string str; 
    cout << "Enter a string : "; 
    cin >> str; 

    for (int i=0; i<str.length(); ++i)  
    { 
        char x = str[i]; 
        for (int j=i+1; j<str.length();  ++j)  
        { 
            if (str[j] == x)  
                       { 
                str.erase(j, 1); 
            }  
        }

    }

    cout << "Resultant string after removing duplicates: " << str << endl; 
    return 0;
}