/*
vector  with  pointer  : 
*/

// ex :1 
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3};
    
    vector<int>*p = &v;   // int  a=10    int  *p = &a; 

    cout<<"vector  element is  : \n"; 
    for(int  i =0; i<v.size(); i++)
    {
        cout<<(*p)[i]<<'\t';
        // cout<<*(p+i)<<'\t';
    }
     return 0 ;
}
*/ 
/*
int  a[5] = {1,2,3,4,5}; 

int  *p =a; 

for(int i =0 ; i<5; i++)
{
    cout<<*(p+i)  
}
*/

// ex :2 
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int  a= 10,b=20,c=30; 

    vector<int*>v ;

    v.push_back(&a); 
    v.push_back(&b);
    v.push_back(&c);
    cout<<"vector  element is  : \n";

    for(int i=0; i<v.size(); i++)
    {
        cout<<*(v[i])<<'\t';
    }
    return 0; 

}
*/

// ex :3 vector using class and  object  : 
#include <iostream>
#include <vector>
using namespace std;
class student 
{
    public : 
        int  id; 
        string  name; 
    student(int id,string name)
    {
        this->id=id;
        this->name=name;
    }
    void display()
    {
        cout<<"id  : "<<id<<endl;
        cout<<"name  : "<<name<<endl;
    }
};
int main()
{
    vector<student>v; 
    v.push_back(student(10,"john"));
    v.push_back(student(11,"smith"));
    v.push_back(student(12,"harry"));

    for(int i=0;i<v.size();i++)
    {
        v[i].display();
    }
    return 0; 

}