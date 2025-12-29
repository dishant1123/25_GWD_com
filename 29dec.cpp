/*
matrix : 

*/

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
/*
1 2 3  
4 5 6
7 8 9

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

*/