/*
Write a C++ program to calculate the monthly gross pay, annual income, and income tax of an employee using the following rules: 
ask user to enter the grade and  type  of  city  (Tier 1, Tier 2, Tier 3).
1. Salary Components
Gross Pay =
Basic Pay + House Rent Allowance (HRA) + Dearness Allowance (DRA) + Other Allowances + Transport Allowance (TA) – Professional Tax – Provident Fund (PF)

| Grade | Basic Pay (₹) | Other Allowances (₹) |
| ----- | ------------- | -------------------- |
| A     | 60000         | 8000                 |
| B     | 50000         | 7000                 |
| C     | 40000         | 6000                 |
| D     | 30000         | 5000                 |
| E     | 20000         | 4000                 |
| F     | 10000         | 3000                 |

2. Constants & Formulas

Professional Tax = ₹200
Transport Allowance TA = ₹900
Provident Fund PF = 0.11 × Basic Pay
Dearness Allowance DRA = 0.5 × Basic Pay

HRA depends on city type:
City 1 (Tier 1) → HRA = 0.30 × Basic Pay
City 2 (Tier 2) → HRA = 0.20 × Basic Pay
City 3 (Tier 3) → HRA = 0.10 × Basic Pay 

3. Annual Income
Annual Income = Gross Pay × 12     800000 

4. Income Tax Slabs (AY 2022–23)
| Annual Income           | Tax                                    |
| ----------------------- | -------------------------------------- |
| Up to ₹2,50,000         | 0%                                     |  
| ₹2,50,001 – ₹5,00,000   | 5% of (Income – 2,50,000)              |  // 12500 
| ₹5,00,001 – ₹7,50,000   | 10% of (Income – 5,00,000) + 12,500    | // 25000 
| ₹7,50,001 – ₹10,00,000  | 15% of (Income – 7,50,000) + 37,500    | //7500 
| ₹10,00,001 – ₹12,50,000 | 20% of (Income – 10,00,000) + 75,000   |
| ₹12,50,001 – ₹15,00,000 | 25% of (Income – 12,50,000) + 1,25,000 |  // 8lpa : 45000  
| Above ₹15,00,001        | 30% of (Income – 15,00,000) + 1,87,500 |

*/
#include <iostream>
using namespace std;
int main()
{
    char grade; 
    int city ; 
    float basic =0,other =0;

    cout<<"Enter the Grade :(A,B,C,D,E,F)"<<endl;
    cin>>grade;
    cout<<"Enter the City :(1,2,3)"<<endl;
    cin>>city; 

    switch(grade)
    {
        case 'A':
            basic =60000;
            other =8000; 
            break;
        case 'B':
            basic =50000;
            other =7000; 
            break;
        case 'C':
            basic =40000;
            other =6000; 
            break;
        case 'D':
            basic =30000;
            other =5000;
            break; 
        case 'E':
            basic =20000;
            other =4000;
            break;
        case 'F':
            basic =10000;
            other =3000;
            break;
        
    }
    float hra;
    switch(city)
    {
        case 1 :
            hra = 0.30 *basic ;
            break;
        case 2 :
            hra = 0.20 *basic ;
            break; 
        case 3 :
            hra = 0.10 *basic ;
            break;

    }
    float da = 0.5 *basic; 
    float ta =900; 
    float prof_tax =200; 
    float pf = 0.11 *basic;

    float gross_pay = basic + hra + da + other + ta - prof_tax - pf;
    long annual_income = gross_pay *12;

    // income tax  calculation  : 
    
    
    cout<<"Gross Pay : "<<gross_pay<<endl;
    cout<<"Annual Income : "<<annual_income<<endl;

    return 0; 

}
/*
que :2 

A hotel offers two types of rooms: Studio and Apartment.
Write a C++ program to calculate the total price of the stay for both room types.
The price depends on:
   ==> The month of stay
   ==> The number of nights (up to 30)
   ==> Applicable discounts

Room Prices Per Night :
| Month Range          | Studio Price | Apartment Price |
| -------------------- | ------------ | --------------- |
| January – April      | $50 / night  | $60 / night     |
| May – August         | $70 / night  | $80 / night     |
| September – December | $80 / night  | $90 / night     |

Discount Rules : 

For Studio Rooms :
January–April
    ==>More than 3 nights → 20% discount
    ==>More than 7 nights → 30% discount
May–August
    ==>More than 3 nights → 10% discount
    ==>More than 7 nights → 20% discount
September–December
    ==>More than 3 nights → 5% discount
    ==>More than 7 nights → 10% discount

For Apartment Rooms
    ==>More than 7 nights, any month → 10% discount

Input:
    Month of stay (e.g., January, May, September)
    Number of nights (1–30)

Output:
    Total studio rent after discount
    Total apartment rent after discount

Example:
Input:
Month: May
Nights: 5

Output:
Studio Rent for 5 Nights is $315
Apartment Rent for 5 Nights is $400
    */
