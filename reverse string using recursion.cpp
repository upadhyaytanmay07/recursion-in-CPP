/* Tanmay Upadhyay
PRN 2407123120
ENTC B2 */

#include <iostream>
using namespace std;

int length(char *str) 
{
    int l = 0;
    while (str[l] != '\0') 
    {
        l++;
    }
    return l;
}

void reverse(char *str, int i, int n)  
{ 
    if (i == n) 
        return;  
    reverse(str, i + 1, n);  
    cout << str[i]; 
}

int main() 
{ 
    char str[50]; 
    cout << "Enter a string: ";
    cin>>str;

    int n = length(str);  
    reverse(str, 0, n); 
    return 0; 
}

/* Output
Enter a string:
Tanmay
yamnaT */
