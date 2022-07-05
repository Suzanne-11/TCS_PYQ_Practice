/*

Question 5
Problem Statement

We want to estimate the cost of painting a property. Interior wall painting cost is Rs.18 per sq.ft. and exterior wall painting cost is Rs.12 per sq.ft.

Take input as
1. Number of Interior walls
2. Number of Exterior walls
3. Surface Area of each Interior 4. Wall in units of square feet
Surface Area of each Exterior Wall in units of square feet

If a user enters zero  as the number of walls then skip Surface area values as User may don’t  want to paint that wall.

Calculate and display the total cost of painting the property
Example 1:
6
3
12.3
15.2
12.3
15.2
12.3
15.2
10.10
10.10
10.00
Total estimated Cost : 1847.4 INR
Note: Follow in input and output format as given in above example

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int in, ex;
    float sum_in=0.0, sum_ex=0.0, total;
    cin>>in>>ex;
    float inw[in], exw[ex];
    for(int i=0;i<in;i++){
        cin>>inw[i];
        sum_in += inw[i];
    }
    for(int i=0;i<ex;i++){
        cin>>exw[i];
        sum_ex += exw[i];
    }
    total = sum_in*18 + sum_ex*12;
    //Total estimated Cost : 1847.4 INR
    printf("Total estimated Cost : %0.1f INR",total);
    return 0;
}