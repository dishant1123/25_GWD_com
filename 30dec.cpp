/*
identity matrix : 

1 0 0   (0,0)1  (0,1)0  (0,2)0
0 1 0   (1,0)0  (1,1)1  (1,2)0
0 0 1   (2,0)0  (2,1)0  (2,2)1

sparse matrix :

3*3 matrix : 

1 2 3 
0 0 0
0 0 9    

zero  = 5 
row * col /2   = 3 *3 /2 = 4 

if zero > row *col/2 :   ==> sparse matrix
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int a[3][3],i,j; 
    cout<<"enter the  elements of the matrix"<<endl;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>a[i][j]; 
        }
    }
    cout<<"the matrix is"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }
    cout<<"identity matrix is"<<endl;

    bool identity =true; 
    for(i=0; i<3; i++)  // i=0  0 <3 
    {
        for(j=0; j<3; j++)
        {
            if(i==j && a[i][j] !=1 )
            {
                identity =false;
                break;
            }
            else if(i!=j && a[i][j] !=0)
            {
                identity =false;
                break;
            }
       }
    }
    if(identity)
    {
        cout<<"identity matrix\n";
    }
    return 0; 

}
*/
/*
2 0 0 
0 2 0
0 0 2   
 
*/

// remove  duplicate  using set and  SLT method :
/*
int  a[] = {1,1,2,2,3,4,6,1}

int  n = sizeof(a) / sizeof(a[0]) 

n = 8 
size  =  total element  = 8
each  data type  int : 

sizeof(int) = 4 bytes  * 8 = 32 bytes  
sizeof(a) = 4 bytes    = 32 /4 =8 bytes 


*/
#include <iostream>
#include<set> 
using namespace std;
int main()
{
    int  a[] = {1,1,2,2,3,4,6,1};
    int  n = sizeof(a) / sizeof(a[0]);
    set<int> s;  // set container  <int> data type  s variable 
    for(int i=0; i<n; i++)
    {
        s.insert(a[i]);
    }
    for(int x : s)
    {
        cout<<x<<" ";
    }
    return 0; 
}

/*

l1= [1,2,3,4]

for i in l1 : 
    print(i)
*/

// hw  : switch case : 1. bubble  2. insert 3.selection 