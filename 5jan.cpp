/*
function  : 
4 type  

1. no arg  no return 
2. no arg  with return   
3. with arg no return 
4. with arg with return
*/

/*
ROYAL KIDS BANK 

1.  user name  password  create  . 
2.   options  : 
    1. log in  
    2. deposit  
    3. withdraw  : min balance  10000 rs. 
    4. check balance  
    5. exit  

condition : 
    1.  login compulsory   ==> user name  password  create    ---> mathch 
            ex : create  user   = grisha 
                         pass   = g@123  
                    user =ghji 
                    pass =123    ==> if not  match user name and password then exit 
            if user nad password  match then  ==> directly deposit 25000 rs in your acc. 
    2. withdraw : 
        1. balance  after deposit  : 35000 rs. 
                withdraw ==> 28000 
                balance   ==> 7000   min req  = 10000 rs.
        2. balance after  deposit  : 35000 rs . 
                withdraw ==> 20000 
                15000
    3. check balance  
    4. menu driven 
*/ 

#include <iostream>
#include <string>
using namespace std; 

bool login(string u ,string p ,string cu ,string cp)
{
    if(u==cu && p==cp)
    {
        return true;
    }
    else 
    {
        return false; 
    }

}
int deposit(int balance)
{
    int amt; 
    cout<<"enter the deposit amount : ";
    cin>>amt;
    balance =balance +amt; 
    return balance; 
}
int withdraw(int balance)
{
    int amt ;  // 2800 
    cout<<"enter the withdraw amount : ";  // after deposit  balance  : 35000 
    cin>>amt;  //2800
    if(balance -amt >=10000 )  // 35000 -2800 >=10000 
    {
        balance =  balance -amt;
        cout<<"withdraw success"<<endl;
    }
    else 
    {
        cout<<"withdraw fail you have to maintain  min balance  of 10000 rs. "<<endl;
    }
    return balance; 
}
void check_balance(int balance)
{
    cout<<"your balance : "<<balance<<endl;
}
int main()
{
    string creatuser,creatpass; 
    string user ,pass; 
    int choice; 
    int balance =25000; 
    cout<<"enter the create user  name  : "; 
    cin>>creatuser;
    cout<<"enter the create passowrd  : "; 
    cin>>creatpass;
    // login compulsory

    cout<<"enter the user name : ";
    cin>>user;
    cout<<"enter the passowrd : ";
    cin>>pass;

    if(!login(creatuser,creatpass,user,pass))
    {
        cout<<"login fail"<<endl;
        return 0;
    }
    cout<<"login success"<<endl;

    do{
        cout<<"\nROYAL KID BANK"<<endl;
        cout<<"1. deposit"<<endl;
        cout<<"2. withdraw"<<endl;
        cout<<"3. check balance"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1: 
                balance = deposit(balance);
                break;
            case 2 :
                balance =withdraw(balance);
                break;
            case 3: 
                check_balance(balance);
                break;
            case 4: 
                cout<<"bye bye"<<endl;
                break; 
            default :
                cout<<"invalid choice"<<endl;

        }
        
        
    }while (choice!=4);
    
    return 0;

}
/*
task  1 
1. user   ==> min 4 attempt 
    ex : create  user   = grisha  pass   = g@123
    1 attempt : u = ghjhj  pass =2345 
    2 attempt : u = grisha  pass =2345
    3 attempt : u = grisha  pass =g@12
    4 attempt : u = grisha  pass =g@123
         exit  
*/