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

