/*
1.for loop :entry  
2.while loop : exit , entry 
3.do-while : entry  exit 

numbers : 

prime , perfect, amg(any digit), twin , string , reverse,palindrome, fibonacci

twin  : 

number  ==> 123 
each digit ==> 6 
each multiply ==>6 


*/

// ex :1 
/*
Write a cpp Program to Compute the product of the odd digits in a given number, 0 if there are not any odd digits in a given number. 
Example: 
(1) Input: 123456789 Output: 945 
(2) Input: 2468 Output: 0 
(3) Input: 123547 Output: 105


*/
#include <iostream>
using namespace std;
int main()
{
    long int n,num; 
    int  product =1,r;
    bool found =false; 
    
    cout<<"enter the number"<<endl;
    cin>>n; 
    num =n; 
    while(num >0) //1 >0 
    {
        r= num %10; // r= 1 %10 = 1  

        if (r % 2==1)  // 1 %2 ==1 
        {
            product =product *r;  // product =3  
            found =true;  // found =true
        }
        num = num /10; //12 /10 =1 
    }
    if (found)
    {
        cout<<"product is "<<product<<endl;
    }
    else 
    {
        cout<<"no odd digit found"<<endl;
    }
    return 0; 
}

// ex :2 
/*
Write a C++ program to check whether a given number is a Happy Number or not.
A number is called Happy if the repeated sum of the squares of its digits eventually becomes 1.
If it enters a loop and never reaches 1, it is an Unhappy Number.

Example:

Input: 19
Process:
1² + 9² = 1 + 81 = 82
8² + 2² = 64 + 4 = 68
6² + 8² = 36 + 64 = 100
1² + 0² + 0² = 1 → Happy Number

Example:

Input: 4
Process (loops between numbers): 4 → 16 → 37 → 58 → … → 4
Never reaches 1 → Unhappy Number ... 


steps : 
1. while (num >0 )
2. r =  num %10 
3.sum = sum + pow(r,2)
4. num = num /10 
5. if summ ==1 : 
    return true
6. else :
    return false 

*/

