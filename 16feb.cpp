/*
bank program using class objects : 

*/

#include <iostream>
using namespace std;

class bank 
{
    private :
        string acholder_name; 
        int acc_number; 
        float balance;  // pin  1211 
    protected : 
        string bank_name; 

    public :
        bank(string name,int ac_no, float bal)
        {
            acholder_name=name;
            acc_number=ac_no;
            balance=bal;
            bank_name ="SBI"; 
        }
        void deposit(int amt)
        {
            balance +=amt; 
            cout<<"deposited amount is : "<<amt<<endl;
        }
        void withdraw(int amt)   // balance = 30000   min  10000 
        {
            if(balance -amt >=10000)  // 30000 -2300 >= 10000
            {
                balance -=amt;
                cout<<"withdrawed amount is : "<<amt<<endl;
            } 
            else 
            {
                cout<<"min balance required is : 10000 rs."<<endl;
            }
        }
        void check_balance()
        {
            cout<<"balance is : "<<balance<<endl;
        }
        void display()
        {
            cout<<"bank name  is  : "<<bank_name<<endl;
            cout<<"acholder name  is  : "<<acholder_name<<endl;
            cout<<"account number  is  : "<<acc_number<<endl;
            cout<<"balance  is  : "<<balance<<endl;
        }
};
int main()
{
    bank b1("diya",2345,25000); 

    b1.display();  // 25000 
    b1.deposit(10000);

    b1.withdraw(18000); 
    b1.check_balance();
    return 0; 

}

/*
1. pin generated :   2 options  ==> 1 pin  ==>static  pin  2. dynamic pin
2. deposit  or withdraw ==> enter the  pin  ==> verify  pin   ==> deposit or withdraw
*/