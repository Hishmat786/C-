#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i=1;
	
	string numbers = "0123456789";
	string lower_case = "abcdefghijklmnopqrstuvwxyz";
	string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string special_characters = "!@#$%^&*()-+";
	string password;
	
	bool isLower = false, isUpper = false;
    bool isDigit = false, specialChar = false;
    
     for (int i = 0; i < n; i++) 
	 {
        if (islower(password[i]))
            isLower = true;
        if (isupper(password[i]))
            isUpper = true;
        if (isdigit(password[i]))
            isDigit = true;
            
        size_t special = password.find_first_not_of(special_characters);
        if (special != string::npos)
            specialChar = true;
    }
    
    if (isLower && isUpper && isDigit && specialChar && (n >= 6))
        cout << "Strong" << endl;
        
    else
    	cout<<"not strong";
 
	
	 
	

	
	
	
	
}
