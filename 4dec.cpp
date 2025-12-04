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
Annual Income = Gross Pay × 12 

4. Income Tax Slabs (AY 2022–23)
| Annual Income           | Tax                                    |
| ----------------------- | -------------------------------------- |
| Up to ₹2,50,000         | 0%                                     |
| ₹2,50,001 – ₹5,00,000   | 5% of (Income – 2,50,000)              |
| ₹5,00,001 – ₹7,50,000   | 10% of (Income – 5,00,000) + 12,500    |
| ₹7,50,001 – ₹10,00,000  | 15% of (Income – 7,50,000) + 37,500    |
| ₹10,00,001 – ₹12,50,000 | 20% of (Income – 10,00,000) + 75,000   |
| ₹12,50,001 – ₹15,00,000 | 25% of (Income – 12,50,000) + 1,25,000 |
| Above ₹15,00,001        | 30% of (Income – 15,00,000) + 1,87,500 |

*/