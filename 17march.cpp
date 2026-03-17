/*
abtraction  :means  hiding implementation details and showing only the essentials feature of user. 

real life example  : 

you use steering ,brake , acceleration , and so on.
but you don't know how they work.

abstraction in c ++ : 

1.using classes (access modifier)
2.using abtracting class (pure virtual function)

pure virtual function  : 

1.no implementation in base class. 
2. declaring using =0 

*/

// ex :1 
/*
#include <iostream>
using namespace std;
class shape
{
    public : 
        virtual void area()=0; 
};
class circle : public shape 
{
    public : 
        void area()
        {
            cout<<"area of circle is  : <<3.14*r*r"<<endl;
        }
};
class rectangle : public shape
{
    public : 
        void area() override
        {
            cout<<"area of rectangle is  : <<l*w"<<endl;
        }
};
int main()
{
    shape *s; 

    circle c; 
    rectangle r;

    s=&c; 
    s->area(); 

    s=&r; 
    s->area();
    return 0; 
}
*/

// ex :2 using constructor : 

#include <iostream>
using namespace std;
class bankaccount
{
    protected : 
        string name; 
        int  accno; 
        float balance; 
    public : 
        bankaccount(string name,int accno,float balance)
        {
            this->name=name;
            this->accno=accno;
            this->balance=balance;
        }
    virtual void cal_interest()=0; 

    void  display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"accno : "<<accno<<endl;
        cout<<"balance : "<<balance<<endl;
    }
};

class savingaccount : public bankaccount
{
    public :
        int  interest;
        savingaccount(string name,int accno,float balance) :bankaccount(name,accno,balance)
        {
        }
    void cal_interest()
    {
        interest = balance*0.04;  // 4 %
        cout<<"saving account interest : "<<interest<<endl;
    }
};
class currentaccount : public bankaccount
{
    public : 
        int  interest;
        currentaccount(string name,int accno,float balance) :bankaccount(name,accno,balance)
        {
        }
    void cal_interest()
    {
        interest = balance * 0.08; 
        cout<<"current account interest : "<<interest<<endl;
    }
};
class fixeddeposit : public bankaccount
{
    public :
        int  interest;
        fixeddeposit(string name,int accno,float balance) :bankaccount(name,accno,balance)
        {
        }
    void cal_interest()
    {
        interest = balance * 0.05;
        cout<<"fixed deposit account interest : "<<interest<<endl;
    }
};
int main()
{
    int  choice; 
    string name; 
    int  accno; 
    float  balance;

    do
    {
        cout<<"BANK MENU"<<endl;
        cout<<"1.saving account"<<endl;
        cout<<"2.current account"<<endl;
        cout<<"3.fixed deposit account"<<endl;
        cout<<"4.exit"<<endl;
        cin>>choice;

        if(choice>=1 && choice<=3)
        {
            cout<<"enter name : ";
            cin>>name;
            cout<<"enter accno : ";
            cin>>accno;
            cout<<"enter balance : ";
            cin>>balance;
        }
        bankaccount *b;

        switch(choice)
        {
            case 1 :
            {
                savingaccount s(name,accno,balance);
                b= &s; 
                b->display(); 
                b->cal_interest(); // savnig account interest
                break;
            }
            case 2 :
            {
                currentaccount c(name,accno,balance);
                b= &c;
                b->display();
                b->cal_interest();
                break;
            }
            case 3: 
            {
                fixeddeposit f(name,accno,balance);
                b= &f;
                b->display();
                b->cal_interest();
                break;
            }
            case 4: 
            {
                cout<<"bye"<<endl;
                break;
            }
            default :
            {
                cout<<"invalid choice"<<endl;
            }

        }
    } while (choice !=4);
    return 0; 
}
/*
1. interest  deducted balance  .  ==> show balance  ==> 35000 int  ==>3600 
2. deposit withdraw .

*/