/*
sorting  /  bubble sort  : 
            0  1  2  3  4
int a[5] = {1, 5, 2, 7, 3}

sort asc to desc : {1,2,3,5,7}  
    desc to asc : {7,5,3,2,1}

logic : 

*/
/*
#include <iostream>
using namespace std; 
int main()
{
    int a[50],num,i,j,temp; 
    cout<<"enter the array size :"<<endl;
    cin>>num;
    for(i=0;i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before sorting array element is  : "<<endl ; 
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<" "<<endl; // int a[5] = {1, 5, 2, 7, 3}
    }
    cout<<"sorting array  asc to desc : "<<endl ; 
    for(i=0; i<num; i++) // i=0   0 <5 
    {
        for(j=i+1;j<num;j++) // j= 1   1 < 5 
        {
            if (a[j] < a[i]) //a[1] > a[0]  5 > 1 
            {
                temp =a[i];  //    temp=1 
                a[i] =a[j]; //      a[0]=5
                a[j] = temp;//    a[1] =1
            }
        }
    }
    cout<<"after sorting array element is  : "<<endl ;
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<" "<<endl; // int a[5] = {1, 5, 2, 7, 3}
    }
    return 0; 
}
*/ 

#include <iostream>
using namespace std; 
int main()
{
    int a[50],num,i,j,temp,index=-1 ,ele; 
    cout<<"enter the array size :"<<endl;
    cin>>num;
    for(i=0;i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<" array element is  : "<<endl ; 
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<" "<<endl; // int a[5] = {1, 5, 2,2, 7}
    }
    // 2 : index: 2   ==> position  : 3 
    cout<<"enter the  element  you want to search : "<<endl;
    cin>>ele;  //2

    for(i=0;i<num; i++) // 3  3   <5 
    {
        if(a[i] ==ele)  // a[3] 7 ==7
        {
            index=i;  // index :3 
            break;
        }
    }
    cout<<" element found at position : "<<index<<endl;
    return 0; 
}

// int a[5] = {1,2,3,4,5}
/*
cout<<a[3]
*/

#include <iostream>
using namespace std;
int main()
{
    int a[5] ={10,20,30,40,50}; 
  //           0  1  2  3  4 
    cout<<a[0];
    cout<<a[3];
    return 0;
}

/*
a[5] ={10,3,5,7,8}

min = 3 
max = 10 
*/

