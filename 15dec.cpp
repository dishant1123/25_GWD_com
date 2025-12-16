/*
array  : 

int  a[5] ={1,2,3,4,5}; 
index : 0  ==> a[0] 

*/
// update  : 
/*
#include<iostream>
using namespace std;
int main()
{
    int  a[5] ={1,2,3,4,5};
    int i ; 

    a[3]=90; 
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0; 
}
*/

// insert : 
/*
a[50] 

5   ==> {1,2,3,4,5}
user insert : 89 
user index : 2  
after  inserting new element in  array  : 

output  : {1,2,89,3,4,5}

*/
/*
#include<iostream> 
using namespace std;
int main()
{
    int a[50],num,i,ins,pos; 
    cout<<"enter the size of array"<<endl;
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }

    cout<<"before inserting  new element in array : \n";
    for(i=0; i<num; i++)
    {                       //       0    1   2  3   4  5
        cout<<a[i]<<"\n";  // a[5] ={10, 20, 30, 6   40,50}
    }                       //  
    cout<<"enter the element  you want  to insert : "; 
    cin>>ins;  // 6 
    cout<<"enter the  position where you want to insert : "; 
    cin>>pos;  //3 

    for(i=num; i>pos; i--) // i=3   3 >3 
    {
        a[i] =a[i-1];   //a[4] = a[3]
    }
    a[pos] =ins;   //a[3] = 6
    num++; 

    cout<<"after inserting new element in array : \n";
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0; 

}
*/

// delete :
/*
a[5] ={1,2,3,4,5} 
user  delete  : 4 
after deleting  :  {1,2,3,5}
or 
index : 2 

*/

// hw : remove  duplicate  element  from  array 
/*
input  : a[7] ={1,1,2,3,3,4,5}
output  :a[5] ={1,2,3,4,5}
*/

#include<iostream> 
using namespace std;
int main()
{
    int a[50],num,i,ele,pos; 
    cout<<"enter the size of array"<<endl;
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }

    cout<<"before deleting  : \n";
    for(i=0; i<num; i++)
    {                       //       0    1   2   3    4 
        cout<<a[i]<<"\n"; // a[4] = {10,  20, 40, 50}
    }
    cout<<"enter the  postion of element  you want  to delete : "; 
    cin>>pos;   //2 

    if (pos <0 || pos >= num)
    {
        cout<<"position is out of range"<<endl;
    } 
    else 
    {
        for(i=pos; i<num-1; i++) // i=4   4< 4
        {
            a[i] =a[i+1];   //a[3] =a[4]
        }
        num--;
    }
    cout<<"after deleting  : \n";
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0; 
}


