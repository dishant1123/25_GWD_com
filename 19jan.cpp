/*
structure  : 

array and structure  : 

int  a[5] = {1,2,3,4,5}; 

rollno   name  marks 
1        abc    90
2        xyz    80
3        pqr    70
*/
// ex :1 
/*
#include <iostream>
using namespace std; 
struct student 
{
    int  rollno; 
    string name; 
    int marks;
}s[3];
int main()
{
    for(int  i=0; i<3; i++)
    {
        cout<<"enter rollno : "<<endl;
        cin>>s[i].rollno; 
        cout<<"enter name: "<<endl;
        cin>>s[i].name; 
        cout<<"enter marks : "<<endl;
        cin>>s[i].marks; 
    }
    cout<<"rollno\tname\tmarks\t"<<endl;
    for(int  i=0; i<3; i++)
    {
        cout<<s[i].rollno<<"\t"<<s[i].name<<"\t"<<s[i].marks<<"\t"<<endl;
    }
    return 0; 
}
*/
/*
task :1 rollno even  information   
*/
// ex :2 

#include <iostream>
using namespace std;
struct bank 
{
    int accnum; 
    string name; 
    int  balance; 
}b[3]; 
int main()
{
    for(int i=0; i<3; i++)
    {
        cout<<"enter accnum : "<<endl;
        cin>>b[i].accnum;
        cout<<"enter name : "<<endl;
        cin>>b[i].name;
        cout<<"enter balance : "<<endl;
        cin>>b[i].balance;
    }
    cout<<"accnum\tname\tbalance\t"<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<b[i].accnum<<"\t"<<b[i].name<<"\t"<<b[i].balance<<"\t"<<endl;
    }
    return 0; 
}

/*
output  : 

accnumber    name      balance 
1244          yash       400
123           mahesh     800
2456          surehs     900

condition  : 
1. check balance  and if  balance >500 then add 1000 rs in their  balance  and  print  updated balance . 
    output  : 
    mahesh     1800 
    suresh     1900
2. print  only those cutomer name  whose balance is  less  than  500 rs .
    output  : 
    name  
    yash 
*/
