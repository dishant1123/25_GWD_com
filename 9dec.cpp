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

*/
/*
#include <iostream>
using namespace std;
int main()
{
    int n,temp,sum,r,i,num; 
    cout<<"enter the  number  : "<<endl;
    cin>>n;  // 14 
    num = n;   // num =14 
    for(i=0; i<50; i++)  // 1  1 <50 
    {
        sum =0;    // sum = 0 
        temp = num;  // temp =14 
        
        while (temp >0) // 0 > 0 
        {
            r =  temp %10;  // r = 1 
            sum =sum +r*r;  // sum =17  
            temp = temp /10; // temp =0  
        }
        num =sum;  //  num =17
        if (num ==1)
        {
            cout<<"happy number"<<n<<endl;
            return 0;
        } 
    }
    cout<<"unhappy number"<<endl;
    return 0; 
}
*/

/*
ex :3 
C++ Program to Print All Harshad Numbers Between 1 and 100

A Harshad number is divisible by the sum of its digits.

Example:
18 → digits sum = 1 + 8 = 9
18 % 9 == 0 → Harshad number

steps  : 

1. while (num >0 )
2. r = num %10 
3. sum =sum +r 
4. num = num /10 
if num % sum ==0 :  
    cout<<"harshad number"<<endl;
*/ 
/*
#include <iostream>
using namespace std;
int main()
{
    int  n,temp,r,sum=0; 
    cout<<"enter the number"<<endl;
    cin>>n; 

    temp =n ;  //
  // n =18 
    while(temp > 0)  // 0 > 0 
    {
        r= temp %10;  // r= 1 
        sum =sum +r;  // sum = 9
        temp = temp /10 ;  // n =0 
    }
    if (n % sum ==0)
    {
        cout<<"harshad number"<<endl;
    }
    return 0; 
}
*/

// ex :3 
/*
C++ Program to Print All Disarium Numbers Between 1 and 100

A number is Disarium if:
sum of each digit raised to the power of its position = number
Example: 175 → 1¹ + 7² + 5³ = 175

*/
