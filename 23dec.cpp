/*
1. bubble sort : 
2. selection sort 
3. insertation sort
*/

// selection  sort  : 

/*   
int  a[5] = {2,4,78,1,67}
 ==> find  min element . 
 ==> position  
*/


#include <iostream>
using namespace std;
int main()
{
    int  a[50],num,i,j,temp; 
    cout<<"enter the array size :"<<endl;
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"array  element is  : "<<endl ;   
    for(i=0; i<num; i++)
    {                               // 0 1 2  3  4 
        cout<<a[i]<<"\n";   // a[5] = {2,4,78,1,67}
    }
    // selection  sort  : 

    for(i=0; i<num-1; i++) //1   1 < 4 
    {
        int minindex=i; // minindex  =1
        for(j=i+1; j<num;j++) //  j= 4   4  < 5 
        {
            if(a[j] < a[minindex])   // a[4] <a[0]   = 67  < 2 
            {
                    minindex=j;  //  minindex =3 
            }
        }
        temp =a[i];  //  temp=2
        a[i] =a[minindex];  //   a[0]=1
        a[minindex] = temp; //  a[3]=2 // {1,4,78,2,67}
    }
    cout<<"after selection sort  array element is  : "<<endl ;
    for(i=0;i<num; i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0; 
}
 

// insertion  sort :  

/*
pick one  elemnet  
insert in  correct position 
like arranging playing  card
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int  a[50],num,i,j,temp; 
    cout<<"enter the array size :"<<endl;
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"array  element is  : "<<endl ;   
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<"\n";   // a[5] = {2,4,78,1,67}
    }
    // insertion  sort  : 
    for(i=1; i<num; i++) // i=4 4 < 5 
    {
        int key =a[i];  // key = 67  
        int j =i-1;  // j =3    

        while (j>=0 && a[j] >key) // 3 >=0 &&   78 >67     
        {
            a[j+1] =a[j]; // a[2] = a[1]  = 4  // 1 2 4 78 67 
            j--; // 0 
        }
        a[j+1] =key;  //a[0] = 1
    }
    cout<<"after selection sort  array element is  : "<<endl ;
    for(i=0;i<num; i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0; 
}
    */ 

// STL : function   ==> alogorithm 
/*
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int  a[50],num, i,j ; 

    cout<<"enter the array size :"<<endl;
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i];
    }

    cout<<"before  sorting  array  element is  : "<<endl ;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<"\n";
    }
    sort(a,a+num); 
    cout<<"after  sorting  array  element is  : "<<endl ;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0; 
}
    */