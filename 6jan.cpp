/*
employees management system  :  array function  : 

1. add employee
2. delete employee
3. update employee
4. search employee
5. display employee 
6. exit 
*/
/*
#include <iostream>
using namespace std;

const int SIZE =100; 

int  empid[SIZE];
string empname[SIZE]; 
int empsalary[SIZE];
int  countemp =0 ; 

void addemp();
void delemp();
void updateemp();
void searchemp();
void display();

int main()
{
    int  choice; 
    do{
        cout<<"EMPLOYEE MANAGEMENT SYSTEM"<<endl;
        cout<<"1. add employee"<<endl;
        cout<<"2. delete employee"<<endl;
        cout<<"3. update employee"<<endl;
        cout<<"4. search employee"<<endl;
        cout<<"5. display employee"<<endl;
        cout<<"6. exit"<<endl;
        cout<<"enter your choice : "<<endl;
        cin>>choice; 
        switch (choice)
        {
            case 1 :
                addemp();
                break; 
            case 2 :
                delemp();
                break; 
            case 3 :
                updateemp();
                break; 
            case 4 :
                searchemp();
                break;
            case 5 :
                display();
                break;
            case 6 :
                cout<<"bye bye"<<endl;
                break;
            default :
                cout<<"enter valid choice"<<endl;
                break;

        }
    }while(choice!=6);
    return 0; 
}
void addemp()
{
    cout<<"enter the  id : "; 
    cin>>empid[countemp];
    cout<<"name : ";
    cin>>empname[countemp];
    cout<<"salary : ";
    cin>>empsalary[countemp];
    countemp++;
    cout<<"employee added successfully"<<endl;
}
void updateemp()
{
    int id,found =0;
    cout<<"enter the  id  you want  to update : "; 
    cin>>id; //102 
    for(int i =0; i<=countemp; i++)
    {
        if(id==empid[i])
        {
            cout<<"enter the  new name  : "; 
            cin>>empname[i];
            cout<<"enter the new salary : ";
            cin>>empsalary[i];
            cout<<"employee updated successfully"<<endl;
            found =1; 
            break;
        }
    } 
    if(found ==0)
    {
        cout<<"employee not found"<<endl;
    }  
}
void delemp()
{

}
void searchemp()
{
    int id ,found =0; 
    cout<<"enter the  id you want to search : "; 
    cin>>id; 
    for(int i =0; i<=countemp; i++)
    {
        if(id==empid[i])
        {
            cout<<"emp found"<<endl;
            cout<<"id : "<<empid[i]<<endl ; 
            cout<<"name : "<<empname[i]<<endl ; 
            cout<<"salary : "<<empsalary[i]<<endl ; 
            found =1 ;
            break;
        }
    }
    if(found ==0)
    {
        cout<<"emp not found"<<endl;
    }
}
void display()
{
    cout<<"employee list"<<endl;

    for(int i =0; i<=countemp; i++)
    {
        cout<<"id : "<<empid[i]<<endl ;
        cout<<"name : "<<empname[i]<<endl ;
        cout<<"salary : "<<empsalary[i]<<endl ;
    }
}
*/
/*

1. add  :
    enter the  id : 101  102
    name : jashu          dipti
    salary :  90000        89000 
2. update :     ==>  id 
3. delete  ==> id  
4. search  ==> id  
5 .display  ==> 
*/

