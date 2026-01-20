/*
union : it is user defined data type similar to structure  but  only  one key diffrence. 

===>all members of a union share the same memory location .
===>at a time only one member can store a value. 

*/

// ex :1 : 
/*

#include <iostream>
using namespace std;
union Data
{
    int i; 
    float f ; 
    char c;     
};

int main()
{
    Data d; 
    d.i=10; 
    cout<<"int value : "<<d.i<<endl;
    d.f=10.6; 
    cout<<"float value : "<<d.f<<endl;
    d.c='a';
    cout<<"char value : "<<d.c<<endl;
    return 0; 
}
*/
// ex 2  : union  with array  : 
/*
#include <iostream>
using namespace std; 
union result
{
    int marks[3];
    char grade; 
}r;

int main()
{
    //result  r;

    r.marks[0] =100 ; 
    r.marks[1] =97 ;
    r.marks[2] =72 ;
    cout<<"marks : \n"; 
    for(int i =0; i<3; i++)
    {
        cout<<r.marks[i]<<"\t";
    }
    r.grade ='A';
    cout<<"\ngrade : "<<r.grade<<endl;
    return 0; 
}
 */
/*
note  : 
1. after assigning grade marks data become invalid. 
2.use union  only when one value is needed at a time. 
*/
/*
            structure           union  
memory      separate memory     same memory for all members
            for each member

access     all members usable    only one member at time
            together

size       sum of all members     size of largest member 
use case   store full record      save memory   
*/

// ex : 3  structure and union combine  : 

#include <iostream>
using namespace std;
struct student  
{
    int  rollno; 
    union result 
    {
        int marks; 
        char grade;
    }r;
};
int main()
{
    student s; 
    s.rollno =101; 

    s.r.marks =98 ;
    cout<<"rollno : "<<s.rollno<<endl;
    cout<<"marks : "<<s.r.marks<<endl;

    // now  you store grade so (marks become  invalid)
    s.r.grade ='A';
    cout<<"grade : "<<s.r.grade<<endl;
    return 0; 
}
/*
note  : 
rollno has separate memmory  
marks and  grade share memory 
only one of them should be used at a time . 
*/