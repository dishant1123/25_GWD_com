/*
method overriding  : 

*/

// ex :1  without  using  virtual function
/*
#include <iostream>
using namespace std;
class animal 
{
    public : 
        void  sound()
        {
            cout<<"animal sound"<<endl;
        }
};
class dog: public animal
{
    public : 
        void  sound()
        {
            cout<<"dog sound"<<endl;
        }
}; 
class cat : public animal
{
    public : 
        void  sound()
        {
            cout<<"cat sound"<<endl;
        }
};
int main()
{
    animal *a;
    
    dog d; 
    a=&d;
    a->sound(); 
    
    cat c; 
    a=&c; 
    a->sound();
    return 0;
}
*/

// ex : 2 using  virtual function
/*
#include <iostream>
using namespace std;
class animal
{
    public : 
        virtual void  sound()
        {
            cout<<"animal sound"<<endl;
        }
};
class dog: public animal
{
    public : 
        void  sound()
        {
            cout<<"dog sound"<<endl;
        }
};

class cat : public animal 
{
    public :
        void  sound()
        {
            cout<<"cat sound"<<endl;
        }
}; 
int main()
{
    animal *a; 

    dog d; 
    a=&d; 
    a->sound(); 
    
    cat c; 
    a=&c; 
    a->sound();
    return 0; 
}
*/
/*
diff between  method overloading(compile time) and  method overriding (run time )
                method overloading(compile time)         method overriding (run time )

1. inheritance :       not require                               require 
2. virtual function :  not   require                             require
3.  definition  :       same function  diff parameter            same function  same parameter  
 

*/

// ex :3   combine loading  + riding  

#include <iostream>
using namespace std;
class animal 
{
    private : 
        int  age; 
    protected:
        string color; 
    public : 
        animal()
        {
            age =5; 
            color = "white";
        }
        void eat()
        {
            cout<<"animal eating"<<endl;
        }
        void eat(string food)
        {
            cout<<"animal eating "<<food<<endl;
        }
        virtual void sound()
        {
            cout<<"animal sound"<<endl;
        }
        void show()
        {
            cout<<"animal age : "<<age<<" color : "<<color<<endl;
        }
};
class dog : public animal 
{
    public : 
        dog()
        {
            color="black";
        }
        void sound()
        {
            cout<<"dog sound"<<endl;
        }
};

int main()
{
    animal *a; 

    dog d; 
    a=&d; 

    a->eat();   //
    a->eat("pedegree"); 

    a->sound(); 

    a->show(); 

    return 0; 

}

