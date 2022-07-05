/*

Question 2
Selection of MPCS exams include a fitness test which is conducted on ground. There will be a batch of 3 trainees, appearing for running test in track for 3 rounds. You need to record their oxygen level after every round. After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select one with highest oxygen level as the most fit trainee. If more than one trainee attains the same highest average level, they all need to be selected.

Display the most fit trainee (or trainees) and the highest average oxygen level.

Note:

The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
If the calculated maximum average oxygen value of trainees is below 70 then declare the trainees as unfit with meaningful message as “All trainees are unfit.
Average Oxygen Values should be rounded.
Example 1:
INPUT VALUES
95
92
95
92
90
92
90
92
90

OUTPUT VALUES
Trainee Number : 1
Trainee Number : 3

Note:
Input should be 9 integer values representing oxygen levels entered in order as

Round 1

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 2

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 3

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Output must be in given format as in above example. For any wrong input final output should display “INVALID INPUT”

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input, a1, a2, a3, t1=0, t2=0, t3=0, count=1;
    while(count<=9){
        cin>>input;
        if(input>=1 && input<=100){
            if(count%3==1){
                t1 += input;
            }else if(count%3==2){
                t2 += input;
            }else{
                t3 += input;
            }
            count++;
        }else{
            printf("INVALID INPUT\n");
        }
    }
    a1 = round(t1/3);
    a2 = round(t2/3);
    a3 = round(t3/3);
    if(a1<=70 && a2<=70 && a3<=70){
        printf("All trainees are unfit\n");
    }else if(a1>a2 && a1>a3){
        printf("Trainee Number : 1\n");
    }else if(a2>a1 && a2>a3){
        printf("Trainee Number : 2\n");
    }else if(a3>a1 && a3>a2){
        printf("Trainee Number : 3\n");
    }else if(a1==a2 && a1>a3){
        printf("Trainee Number : 1\n");
        printf("Trainee Number : 2\n");
    }else if(a1==a3 && a1>a2){
        printf("Trainee Number : 1\n");
        printf("Trainee Number : 3\n");
    }else{
        printf("Trainee Number : 2\n");
        printf("Trainee Number : 3\n");
    }
    return 0;
}
