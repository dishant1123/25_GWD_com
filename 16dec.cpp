/* pelindrome in string  using 1 d array  : 
string a[] ={"maam","php","c++","java","python"}

*/

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a[]={"maam","php","c++","java","python"},s,rev;
    int  n=5,i,j;
    
    for(i=0; i<n; i++) // 0  0 <5 
    {
        s=a[i];   // s="maam"
        rev="";
        for(j=s.length()-1; j>=0; j--) // j=4-1 ; 3 >0 
        {
            rev = rev +s[j]; // rev = "" + s[3]
        }
        if (s==rev)
        {
            cout<<s<<" is a pelindrome"<<endl;
        }
    }
    return 0; 
}
*/ 

/*
diagerium : 

175 :  1 pow 1  7 pow 2 5 pow 3 
           1     49     125  =1+49+125 =175 
           
175 :
int  num 
a = num /100 = 175 /100  =1 
b= (num /10) %10 = 175 /10 =17 = 17 %10 =7 
c = num %10 =175 %10 =5  

sum = pow(a,1) + pow(b,2) + pow(c,3)
*/

// hw  : 
/*
switch  : 
    1. insert 
    2. delete 
    3. update 
    4. duplicate 
    5. search 
*/