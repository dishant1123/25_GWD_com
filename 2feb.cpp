/*
pointer  :  a pointer  is variable  that stores address of  another  variable. 

ex : 
int  a =10; 
// int *p;     ===> pointer  decalration
// p =&a;      ===> pointer  intialization 

int *p =&a;   ==> pointer  decalration with initialization

direct memory access. 
efficient memory access.
dynamic memory allocation.
*/

// dynamic memory allocation : 
/*
    dynmaic  memory  allocation  :meaning allocating memory at run time. 
    memory is allocated in heap. 
    size can be decided during execution. 
    uses pointers. 
*/

// ex :1 
/*
#include <iostream>
using namespace std; 
int main()
{
    int *p; 
    p = new int; // dynmaic  memory  allocation
    
    *p =25;  // assingn value  to pointer 

    cout<<"value  is  : "<<*p<<endl;
    cout<<"address is  : "<<p<<endl;

    delete p;  // deallocation memory 
    return 0;
}
*/ 
// ex :2  dynamic memory allocation in array  : 

/*
int  a[5] = {1,2,3,4,5};
int *p  =a;    
*p +3


*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"enter the  size  of  array : "; 
    cin>>n; 

    int  *p =new  int [n]; // dynamic  memory  allocation

    for(int i =0; i<n; i++)
    {
        cin>>p[i]; 
    }
    cout<<"array  element is  : \n"; 
    for(int i =0; i<n; i++)
    {
        cout<<p[i]<<"\t"; 
    }
    delete[] p; 
    return 0 ;

}
*/ 

// malloc : 
/*
malloc : memory  allocation  
==> allocated memory at run time. 
==> returns *void . 
memory is  not initialized.
must be using free()
*/
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int  *p; 
    p = (int*) malloc(sizeof(int)); // allocate  memory 

    if(p ==NULL)
    {
        cout<<"memory  not  allocated"<<endl;
        return 0; 
    }
    *p =24; 
    cout<<"value  is  : "<<*p<<endl;

    free(p);

    return 0;

}
*/

/*
malloc(sizeof(int)) ==>allocated memory for one int . 

(int*) ==> type casting  . 
*p =25  ==> assign value  to pointer

free(p) ==> deallocation memory

*/

/*
oops :  object  oriented  programming

1. inheritance 
2. polymorphism
3. encapsulation
4. abstraction

class : bule  print  of  object 

object : instance of class 

ex : fruits 
            mango kiwi banana  chiku 

type  of class : 

1. public  : accessible from anywhere
2. private : accessible from inside class
3. protected : accessible from inside class and derived class
*/

// ex :1 

#include <iostream>
using namespace std;
class student   // class 
{   
    public :
        int rollno=1;   // rollno  name  ===> data member  ==> public 
        string name="nishit"; 
    
}; 
int main()
{
    student s;  // student ==>class   ==> object  ==>s 
    cout<<"rollno is  : "<<s.rollno<<endl; 
    cout<<"name is  : "<<s.name<<endl;

    s.rollno =2;
    s.name ="aman"; 

    cout<<"rollno is  : "<<s.rollno<<endl; 
    cout<<"name is  : "<<s.name<<endl;
    return 0; 
}