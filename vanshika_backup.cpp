/*
array  : 

int a[5] = {10,20,30,40};
// index :  0   1  2  3  4 
cout<<a[0]   ==> index start ==> 0 
cout<<a[4]   ==> 0 
scan : 
    for()
    {
        cin>>a[i]
    }
print 
    for()
    {
    cout<<a[i]
    }

sort  : 
int a[5] = {1,6,2,5,4} 
array  sort  asc to desc ==>  {1,2,4,5,6} 
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int a[50], num, i, j ,temp ; 
    cout<<"enter the size of array  : ";
    cin>>num; 
    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before  sorting  array element is  : "<<endl ; 
    for(i=0; i<num; i++)
    {                       //           0   1  2   3   4 
        cout<<a[i]<<endl;  //int a[5] = {1, 6,  2,  5, 4} 
    }                       
    cout<<"bubble sorting :"<<endl;
    for(i=0; i<num; i++) // 1  1 < 5  
    {
        for(j=i+1; j<num; j++) // j=2  2  < 5 
        {
            if (a[i] > a[j])  // a[1] > a[2]  6 > 2
            {
                temp = a[i];  //    temp=6 
                a[i] = a[j]; // a[0] =6 
                a[j] = temp; //     a[1]=1
            }
        }
    }
    cout<<"after  sorting  array element is  : "<<endl ;
    for(i=0; i<num; i++)
    {                       //           0   1  2   3   4 
        cout<<a[i]<<endl;  //int a[5] = {1, 6,  2,  5, 4} 
    }
    return 0; 
}
*/ 
// int a[5] ={11,34,56,78,90}
/*
user  = 45 ==> out search  
*/

/*
 loop  : 

 1. for   : entry  
 2. while : entry 
 3. do while  : exit 

prime amg perfect twin  reverse pelindrome strong 

*/

// perfect  :
/*
6 factors : 1,2,3,6 
sum = 1+2+3 =6

28 factors : 1 2 4 7 14 28 
sum = 1+2+4+7+14 =28    
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int num, sum=0,i; 
    cout<<"enter the number :"<<endl;
    cin>>num;  // 6 
    for(i=1; i<num; i++) // 6  6 <6 
    {
        if (num %i==0) // 6 % 5 == 0
        {
                sum =sum +i;  // sum =6
        }
    }
    if (sum==num) // 6 == 6 
    {
        cout<<"perfect number"<<endl;
    }
}
*/
// reverse : 

/*
logic : 
num =123   ans :321    
rev=0
while num > 0   0 > 0 
r = num %10   == > r = 1 %10 ==> r= 1 
rev = rev *10 +r  ==> rev = 0 *10 +3  ==> rev = 3 * 10 +2  == >rev =32 *10 +1 ==>321 
num  = num /10    ==> num = 123 /10 ==> num = 1  /10 =\0

*/
#include <iostream>
using namespace std;
int main()
{
    int num , rev=0,r ;
    cout<<"enter the number :"<<endl;
    cin>>num; 

    while(num >0)
    {
        r= num %10; 
        rev = rev *10 +r; 
        num = num /10;
    }
    cout<<"reverse number is  : "<<rev<<endl;
    return 0; 
}

// pelindrome  number  :  121 131 