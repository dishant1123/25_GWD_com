/*
every instance  is object  and every object is  not  instance. 
*/

// ex :1 
/*
#include <iostream>
using namespace std;
class student
{
    public : 
        int  rollno ;
        string name;  //  nishitpatel
        
    void  show()
    {
        cout<<"rollno is  :"<<rollno<<endl;
        cout<<"name is  :"<<name<<endl;
    }
};
int main()
{
    student s1; 
    student s2;

    s1.name ="diya";
    s1.rollno =1; 

    s2.name ="sami"; 
    s2.rollno =2; 

    s1.show(); 
    s2.show();
    return 0; 
}
*/
/*
student is  class : 
    define  :   name  rollno ==> data member 

s1 and s2 are instance (objects)
both are created from class student 
both have seprate memory 
both follow same structure . 

one class ===> many objects


*/

// ex :2 
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int  rollno ; 
        string name; 
    
    void input()
    {
        cout<<"enter  rollno  : ";
        cin>>rollno;
        cout<<"enter  name  : ";
        cin>>name; 
    }
    void show()
    {
        cout<<"rollno is  :"<<rollno<<endl;
        cout<<"name is  :"<<name<<endl;
    }
};
int main()
{
    student s1; 
    student s2;
    cout<<"before  update : "<<endl;  
    s1.input();
    // s2.input(); 
    s1.show();
    // s2.show();
    cout<<"after  update : "<<endl;
    s1.rollno = 23; 
    s1.name ="nishitpatel";

    s1.show(); 

    return 0; 
}
*/

// ex : 3  private   ==> only accessible from inside class

#include <iostream>
using namespace std;
class vehicle 
{
    private :
        string model="hero_honda"; 
        int speed=220; 
    public :
        void  show()
        {
            cout<<"model is : "<<model<<endl;
            cout<<"speed is : "<<speed<<endl;
        }  
}; 

int main()
{
    vehicle v1; 
    //cout<<"model is : "<<v1.model<<endl;   not  accessible though object bcz of  private
    //cout<<"speed is : "<<v1.speed<<endl;
    v1.show();

   // v1.model ="shine"; 
    //v1.speed =250;
    v1.show();
    return 0; 
}

