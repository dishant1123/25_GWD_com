/*
switch  : 

switch(choice)
{
    case 1:
        cout<<
        break; 
    default :
        cout<<
        break;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int  choice; 
    int  a,b,n,rev=0,r;
    cout<<"select the  operation  : "<<endl;
    cout<<"1.addition"<<endl; 
    cout<<"2.sub"<<endl; 
    cout<<"3.mul"<<endl; 
    cout<<"4.div"<<endl; 
    cout<<"5.modlus"<<endl; 
    cout<<"6.rev"<<endl; 
    cin>>choice; 

    switch (choice)
    {
        case 1:
            cout<<"enter the  two  number  : "<<endl; 
            cin>>a;
            cin>>b;
            cout<<a+b<<endl; 
            break;
        case 2:
            cout<<"enter the  two  number  : "<<endl; 
            cin>>a;
            cin>>b;
            cout<<a-b<<endl; 
            break;
        case 3:
            cout<<"enter the  two  number  : "<<endl; 
            cin>>a;
            cin>>b;
            cout<<a*b<<endl; 
            break;
        case 4:
            cout<<"enter the  two  number  : "<<endl; 
            cin>>a;
            cin>>b;
            cout<<a/b<<endl; 
            break;
        case 5:
            cout<<"enter the  two  number  : "<<endl; 
            cin>>a;
            cin>>b;
            cout<<a%b<<endl; 
            break;
        case 6 :
            cout<<"enter the  number  : "<<endl;
            cin>>n;
            while (n!=0)
            {
                r = n %10;      // rev =  (rev *10) + (n%10) 
                rev = rev *10 +r ; 
                n = n /10 ; 
            }
            cout<<rev<<endl;
            break; 
        default :
            cout<<"wrong choice"<<endl;
            break; 

    }

    return 0;
}

/*

123 : 
rev = 0 
while (n!=0)  0 !=0 
    r=  n %10   // 1 %10 = 1  
    rev = rev *10 +r   // rev = 321 
    n = n /10   12 /10 = 1 /10 =0
*/