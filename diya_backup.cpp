/*

#include <iostream>
using namespace std;   ==> std library   ==> namespace ==> container 
cout<<   ==> printf   <<  ==> left shift  
cin >>   ==> scanf   >>  ==> right shift


*/

// ex :1 
/*
#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello World"<<endl;
    return 0;
}
*/
// ex :2 
/*
#include <iostream>
int main()
{   
    int a;
    std::cout<<"Hello World"<<"\n";  // ==> ::  means  ==> scope 
    std::cout<<"diya"<<"\n"; 
    std::cin>>a;
    return 0;
}
*/ 

// ex :3 
/*
#include <iostream>
using namespace std;
int main()
{
    int a; 
    float b; 
    string name; 
    cin>>a; 
    cin>>b;
    cin>>name;
    cout<<"name value is  : "<<name<<"\n";
    cout<<"a value is  : "<<a<<"\n";
    cout<<"b value is  : "<<b<<"\n";

    return 0;
}
*/

// ex :4 
/*
1.airthematic operator : + - * / %
2.relational operator : == != > < >= <=
3.logical operator : && || !
4.bitwise operator : & | ^ ~ << >>

*/
/*
#include <iostream>
using namespace std;
int main()
{                   //     &              |              xor(^)       bitwise not(~)
//    int a=5,b=3;  // 5 ==> 0101           0101           0101         
//    cout<<(a&b);  // 3 ==> 0011           0011           0011
//    return 0;    //        0001  ===> 1   0111 ==> 7     0110 ==>  

    int  a=5; 
    cout<<~a; 
    return 0;

}
*/

// amg : 
/*
1634 : 4 digit 

pow = 1*1*1*1   6*6*6*6  3*3*3*3    4*4*4*4  
        1        1296      81         256  
sum = 1+1296 +81 +256  = 1634 


*/
/*
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int  num,sum=0,count =0,temp; 
    cout<<"enter the number of digits : ";
    cin>>num;  // 1634 
    temp =num;  // temp =1634 

    while(temp >0) // 0 > 0 
    {
        temp = temp /10 ;  // 1/10 
        count ++;     // 4 
    }
    temp =num; 
    while(temp > 0) // 0 >0 
    {
        int r= temp %10 ; // r= 1%10 =1 
        sum =sum + pow(r,count); // sum =1634
        temp =  temp /10 ; // 1 /10 
    }
    if(sum==num)
    {
        cout<<"amg";
    }
    return 0;
}
*/

/*
C++ Program to Print All Harshad Numbers Between 1 and 100

A Harshad number is divisible by the sum of its digits.

Example:
18 → digits sum = 1 + 8 = 9
18 % 9 == 0 → Harshad number

21  => each digit sum  : 3 
21 % 3 ==0

19  => each digit sum  : 10 

step : 1 ask use to enter the number   45  
2 : while(num >0)
3 : r = num %10   // r =4 
4 : sum =sum +r   // sum = 9  
5 : num = num /10 // 0   
6 : if(num % sum ==0)

*/

/*
C++ Program to Print All Disarium Numbers Between 1 and 100

A number is Disarium if:
sum of each digit raised to the power of its position = number
Example: 175 → 1¹ + 7² + 5³ = 175

145 : 
first digit :num /10  == >145/100  ==> 1  
middle digit : (num /10) %10   ==> 145 /10  = 14 %10  ==>4  
last digit : num %10 ==> 145 %10 ==>5

result = pow(firstdigit,1) + pow(middledigit,2) + pow(lastdigit,3)
1234 : 
first digit : num /1000 ==>1234 /1000 ==> 1 
second digit: num /100 ==> 12 % 10 ==>2
third digit : (num /10) % 10 ==> 3 
last digit : num %10 ==> 1234 %10 ==>4 

*/