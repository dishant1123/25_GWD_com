/*
employees  management system  ==> using structure with function  , array : 

1. add emp 
2. delete emp 
3. display emp 
4. update emp 
5. search emp
*/

#include <iostream>
using namespace std;
const int size =100; 

struct employee 
{
    int  id; 
    string name; 
    int salary; 
};

employee emp[size]; 
int  countemp =0; 

void addemp()
{
    if(countemp>=size)
    {
        cout<<"emp list full"<<endl;
        return;
    }
    cout<<"enter emp id : ";
    cin>>emp[countemp].id; 
    cout<<"enter emp name : ";
    cin>>emp[countemp].name;
    cout<<"enter emp salary : ";
    cin>>emp[countemp].salary;
    countemp++; 
    cout<<"emp added \n"<<endl;

}
void  updateemp()
{
    int id,found =0 ;
    cout<<"enter emp id to update : ";
    cin>>id; 

    for(int i=0; i<countemp; i++)
    {
        if(emp[i].id ==id)
        {
            cout<<"enter emp new name : ";
            cin>>emp[i].name;
            cout<<"enter emp new salary : ";
            cin>>emp[i].salary;
            cout<<"emp updated \n"<<endl;
            found =1;
            break;
        }
    }
    if(found ==0)
    {
        cout<<"emp not found"<<endl;
    }
}
void deleteemp()
{
    int id,found =0; 
    cout<<"enter the  emp id to delete : "; 
    cin>>id; 
    for(int i=0; i<countemp; i++)
    {
        if(emp[i].id ==id)
        {
            for(int j=i; j<countemp-1; j++)
            {
                emp[j]=emp[j+1];
            }
            countemp--;
            found =1;
            break;
        }
    }
    if(found ==0)
    {
        cout<<"emp not found"<<endl;
    }
}
void searchemp()
{
    int  id,found =0; 
    cout<<"enter the emp id to search : ";
    cin>>id; 

    for(int i=0; i<countemp; i++)
    {
        if(emp[i].id ==id)
        {
            cout<<"Employees details are : \n";
            cout<<"id : "<<emp[i].id<<endl;
            cout<<"name : "<<emp[i].name<<endl;
            cout<<"salary : "<<emp[i].salary<<endl;
            found =1;
            break;
        }
    }
    if (found ==0)
    {
        cout<<"emp not found"<<endl;
    }
}
void display()
{
    if(countemp ==0)
    {
        cout<<"emp list is empty"<<endl;
        return ;
    }
    cout<<"emp list is : \n";
    for(int i=0; i<countemp; i++)
    {
        cout<<"-----------------\n";
        cout<<"id : "<<emp[i].id<<endl;
        cout<<"name : "<<emp[i].name<<endl;
        cout<<"salary : "<<emp[i].salary<<endl;
    }
}

int main()
{
    int  choice; 
    do{
        cout<<"EMP MANAGEMENT SYSTEM"<<endl;
        cout<<"1. add emp"<<endl;
        cout<<"2. delete emp"<<endl;
        cout<<"3. display emp"<<endl;
        cout<<"4. update emp"<<endl;
        cout<<"5. search emp"<<endl;
        cout<<"6. exit"<<endl;
        cout<<"enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                addemp(); 
                break;
            case 2: 
                deleteemp();
                break;
            case 3:
                display();
                break;
            case 4: 
                updateemp();
                break;
            case 5: 
                searchemp();
                break;
            case 6 :
                cout<<"BYE BYE"<<endl;
                break;
            default :
                cout<<"enter valid choice"<<endl;
                break;
        }
    }while(choice !=6);
    return 0; 
}

/*
task  :1  you can't add repeated emp id  . 
    ex : 3 add emp 
    id   name  salary 
    1    ram   10000 
    2    shyam  12000 
    3    vijay  15000

task :2 min salary  and  max salary print of this emp list 
    min salary = 10000  name  : ram 
    max salary =15000   name  : vijay

*/