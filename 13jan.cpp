/*

1. add movie 
2. book  ticket    
    ==> price    ==> glod  silver  platinum
*/
/*
#include <iostream>
using  namespace std; 
#define MAX 100 

int  isunique_id(int id[] , int count ,int mid)
{
    for(int  i =0 ; i<count ;i++)
    {
        if(id[i] ==mid)
        {
            return 0;
        }
    }
    return 1;
}
void  addmovie(int  id[] ,string name[],int seats[], string timings[], int &count)
{
    int  mid; 
    cout<<"enter the movie id : "<<endl;
    cin>>mid; 

    if(!isunique_id(id,count,mid))
    {
        cout<<"movie id already exists"<<endl;
        return; 
    }
    id[count] =mid; // 
    
    cout<<"enter the movie name : "<<endl;
    cin>>name[count]; 
    cout<<"enter the movie seats: "<<endl;
    cin>>seats[count]; 
    cout<<"enter the movie timings : "<<endl; // 9pm ,10am
    cin>>timings[count]; 
    count++; 
    cout<<"movie added successfully"<<endl;
}

void book_ticket(int  id[] , string name[], int seats[], string timings[], int count )
{
    int mid,qty,choice,price =0; 
    cout<<"enter the movie id : "<<endl;
    cin>>mid; 

    for(int i =0; i<count ; i++)
    {
        if(mid ==id[i])
        {
            cout<<"movie name : "<<name[i]<<endl;
            cout<<"seats : "<<seats[i]<<endl;
            cout<<"timings : "<<timings[i]<<endl;

            cout<<"Tickets Category : "<<endl;
            cout<<"1. Gold   -  450 /- rs"<<endl;
            cout<<"2. Silver -  600 /- rs"<<endl;
            cout<<"3. Platinum- 800 /- rs"<<endl;

            cout<<"enter your choice for ticket category : "<<endl;
            cin>>choice;
            if (choice ==1)
            {
                price =450;
            }
            else if(choice ==2)
            {
                price =600;
            }
            else if(choice ==3)
            {
                price =800;
            }
            else 
            {
                cout<<"invalid choice"<<endl;
                return;
            }
            cout<<"enter the quantity : "<<endl;
            cin>>qty;

            if(qty > seats[i])
            {
                cout<<"not enough seats available"<<endl;
                return;
            }
            seats[i] -=qty;   // seats =40   book tickets  ==> 20 seats  ==>remaining 20 seats
            int  total = price *qty; 

            cout<<"Bill For Tickets Booking : "<<endl;
            cout<<"Movie Name : "<<name[i]<<endl;
            cout<<"timings slots : "<<timings[i]<<endl;
            cout<<"tickets seats : \n";
            if (choice ==1)
            {
                cout<<"Gold   -  "<<qty<<" tickets  "<<total<<" rs"<<endl;
            }
            else if(choice ==2)
            {
                cout<<"Silver -  "<<qty<<" tickets  "<<total<<" rs"<<endl;
            }
            else if(choice ==3)
            {
                cout<<"Platinum-  "<<qty<<" tickets  "<<total<<" rs"<<endl;
            }
        }
        else 
        {
            cout<<"enter valid movie id"<<endl;
        }
    }

}
int main()
{
    int movieid[MAX],mseats[MAX],count =0;
    string moviename[MAX],mtimings[MAX];
    int choice =0;

    do
    {
        cout<<"1. add movie"<<endl;
        cout<<"2. book tickets"<<endl;
        cout<<"3. search movie"<<endl;
        cout<<"4. delete movie"<<endl;
        cout<<"5. display movie"<<endl;
        cout<<"6. exit"<<endl;
        cout<<"enter your choice : "<<endl;
        cin>>choice;

        switch (choice)
        {
            case 1: addmovie(movieid,moviename,mseats,mtimings,count);
            break;
            case 2: book_ticket(movieid,moviename,mseats,mtimings,count);
            break;

            default:
                cout<<"enter valid choice"<<endl;
                break;
        }
    }while(choice !=6);
    return 0; 
}

*/ 
/*
5 add  movies   ===> add_movie   ==>5 call 
*/ 
#include <iostream>
using namespace std;
main()
{
  int a = 10, b, c;
  b  = a++;
//   c = a;
  cout << a << endl;  // 11 
  cout<<b<<endl;   // 10  
} 

// a =10 
 // 10   +12
//  a++  +  ++a 