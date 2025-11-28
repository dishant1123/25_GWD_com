/*
varibale declaration rules  : 

int @a= 10    incorrect 
int  a12 =90  correct 
int 12a =78   incorrect 
int _=89   correct 
int a@a=10 incorrect 
int A =90 

1. variable start number ,special character , end  special character , 
2 . except : _ 

data type  : 
1. int  
2. float 
3. double  
4. long int 
5. char/ string  


*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a=10; 
    float b=12.34;
    char c='r'; 
    long int d=1231234;
    double e=123456.7890;
    cout<<"value of  a is :"<<a<<endl; 
    cout<<"value of  b is :"<<b<<endl; 
    cout<<"value of  c is :"<<c<<endl; 
    cout<<"value of  d is :"<<d<<endl; 
    cout<<"value of  e is :"<<e<<endl; 

    return 0; 

}
*/ 
/*
operator  : 

1. airthematic operator  : + - * / %    : 1 %10 =1  2 %10 =2 3 %10 =3 
2. relational  operator  : > < <= >= == != 

ex :float  a =12.34 
    float  b =12.340   cout<<a==b<<endl;
3. assignment operator  : = += -= *= /= %= 
    ex : a=a +b   a+=b i=i+1  i+=1

4. increment operator  :  ++ --   decrement operator  : --

    ex : pre inc : ++a    post inc :a++  pre dec : --a  post dec :a-- 
     
    a=10 
    a++ + ++a  + a--  - --a  
5. bitwise operator  : & | ^ << >>
6. logical operstor  : && || !
    ex : a=10  b=20   a>b ||  a!=b    
7. ternary operator  : ?:
*/

#include<iostream>
using namespace std;
int main()
{
    float a=12.34;
    float b=12.340; 
    
    cout<<"relational operator  : "<<(a==b)<<endl;
    return 0; 

}