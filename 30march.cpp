/*
template  : a template allows you to write generic code that can be used with different data types.
ex :  function  

int  add(int  a , int  b)
{
    return a+b; 
}
void main()
{
    add(12,56);
}
template <typename T>
T  add(T  a , T  b)
{
    return a+b; 
}
*/

// ex :1 
/*
#include <iostream>
using namespace std;
template <typename T>
T  add(T  a , T  b)
{
    return a+b; 
}

int main()
{
    cout<< " sum  of int  value is  : "<<add(12,45)<<endl;
    cout<< " sum  of float  value is  : "<<add(12.5,45.6)<<endl;
    cout<< " sum  of char  value is  : "<<add('a','b')<<endl;
    // cout<< " sum  of string  value is  : "<<add("hello","world")<<endl;
    // cout<< " sum  of double  value is  : "<<add('a',1)<<endl;
    return 0 ;
}
*/
//  ex :2 find max  number : 
/*
#include <iostream>
using namespace std;
template <typename T> 

T max_value(T a , T b)
{
    return (a>b) ? a: b;  // if(a>b) return a; else return b 
}
int  main()
{
    cout<<"int  type  : "<<max_value(12,45)<<endl;
    cout<<"float  type  : "<<max_value(12.67,45.8)<<endl;
    cout<<"char  type  : "<<max_value('a','b')<<endl;
    return 0 ; 
}
*/ 

// ex :3 using  template   in  class object : 
/*
#include <iostream>
using namespace std;
template <class T> 

class calculations 
{
    T  a,b; 
    public : 
    calculations(T  x , T  y) // string  a ,  int  b 
    {
        a=x; 
        b=y;
    }
    void  show()
    {
        cout<<"addition  : "<<a+b<<endl;
        cout<<"multiplication  : "<<a*b<<endl;
    }
};
int main()
{
    calculations<int> c(12,45);
    c.show();

    calculations<float> d(12.5,45.6);
    d.show();

    calculations<char> e('a','b');
    e.show();
    
    return 0 ;
}
*/ 

// ex :4  default  value  of  template  :

#include <iostream>
using namespace std;

template <typename v = int>

class demo
{
    v a; 
    public : 
    demo(v  x)
    {
        a=x;
    }
    void show()
    {
        cout<<"value  of  a  is  : "<<a<<endl;
    }
};
int  main()
{
    demo<> d(12); 
    d.show();

    demo<float> e(12.5);
    e.show();
    return 0 ; 
}
/*
swap value  using  template : 
*/