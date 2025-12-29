/*
matrix : 

*/
/*
#include <iostream>
using namespace std; 
int main()
{
    int  a[3][3],i,j; 
    cout<<"enter the  matrix : ";

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>a[i][j]; 
        }
    }
    cout<<"3*3 matrix is  : "<<endl ;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }
    cout<<"transpose matrix is  : "<<endl ;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<a[j][i]<<" "; 
        }
        cout<<endl;
    }
    return 0; 
}
*/ 
#include <iostream>
using namespace std; 
int main()
{
    int  a[2][2],b[2][2],mul[2][2],i,j; 
    cout<<"enter the  matrix : ";

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>a[i][j]; 
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>b[i][j]; 
        }
    }
    cout<<" A :2*2 matrix is  : "<<endl ;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<a[i][j]<<" ";    //  1 3      (0,0)1   (0,1)3
        }                           //  4 5     (1,0)4   (1,1)5 
        cout<<endl;
    }
    cout<<" B :2*2 matrix is  : "<<endl ;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<b[i][j]<<" ";  // 8 9      (0,0)8  (0,1) 9
         }                       // 10 11    (1,0)10  (1,1)11
        cout<<endl;
    }
    cout<<"multiplication  : "<<endl ;
    for(i=0; i<2; i++) // i=0  0 <2 
    {
        for(j=0; j<2; j++) // 1  1 <2 
        {
            mul[i][j]=0;  // mul[0][1] = 0 
            for(int  k=0; k<2; k++) // k =1  1 < 2 
            {
                mul[i][j] += a[i][k] * b[k][j]; // mul[i][j]= mul[i][j]+ (a[i][k] * b[k][j])
            }                                  // mul[0][1] = mul[0][1] +(a[0][1] * b[1][1])
        }                                     //   mul[0][1] = 42         
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}

/*
1 2 3     (0,0)1  (0,1)2  (0,2)3
4 5 6     (1,0)4  (1,1)5  (1,2)6
7 8 9     (2,0)7  (2,1)8  (2,2)9

=================
transpose matrix :
original matrix :

1 2 3 
4 5 6 
7 8 9 

transpose matrix :
1 4 7 
2 5 8
3 6 9

==================
original matrix :
1 2 3 
4 5 6 
7 8 9 

1 row sum  : 6
2 row sum  : 15
3 row sum  : 24
1 col sum  : 12 
2 col sum  : 15
3 col sum  : 18
=======================================

matrix multiplication  : 

matrix  : a  (2*2)     
1 3 
4 5 

matrix  : b  (2*2)
8 9 
10 11 

multiplication  :  

1*8  + 3*10   = 38     38 42 
1*8  + 4*9     = 42    82 91
*/
