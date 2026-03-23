/*
1. vector  
2. template  
3. file  handling  
4. excepational  handling 
5. project  ==> inventory management  system  
*/

// vector  : 
/*
vector  in cpp is  a dynamic array  from the STL that can grow or shrink in size  automatically. 

syntx : 
#inclde<vector> 

vector<data_type> vector_name; 

*/

// ex :1 
/*
#include <iostream>
#include <vector>
using namespace std;
int  main()
{
    vector<int> v;  // empty vector  
    v.push_back(10); 
    v.push_back(20);
    v.push_back(30);

  
    // cout<<"first element  : "<<v[0]<<endl;

    for(int i=0;i<v.size();i++ )
    {
        cout<<v[i]<<endl;
    }
    return 0 ; 

}
*/ 

// ex :2   intializing vector  :
/*
#include <iostream>
#include <vector>
using namespace std;
int  main()
{
    vector<int> y ={1,2,3,4,5}; 

    // for(int i=0;i<y.size();i++ )// start  con inc/dec 
    // {
    //     cout<<y[i]<<endl;
    // }

    for(int x : y)
    {
        cout<<x<<endl;
    }
    return 0; 
}

*/ 

// ex : 3 add ,  remove  : 

#include <iostream>
#include <vector>
using namespace std;
int  main()
{
    vector<int>r={1,2,5};
    
    r.push_back(56); 

    for(int i=0;i<r.size();i++ )
    {
        cout<<r[i]<<endl;
    }
    r.pop_back();   // remove  the  last element

    for(int i=0;i<r.size();i++ )
    {
        cout<<r[i]<<endl;
    }
    cout<<"size : "<<r.size()<<endl;
    cout<<"element  of index 1 : "<<r.at(1)<<endl;

    return 0 ; 

}
