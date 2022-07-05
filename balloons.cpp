/*

TCS Coding Question Day 2 Slot 1 – Question 2
At a fun fair, a street vendor is selling different colours of balloons. He sells N number of different colours of balloons (B[]). The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.

Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. The colours of the balloons can all be either upper case or lower case in the array. If all the inputs are even in number, display the message “All are even”.

Example 1:

7  -> Value of N
[r,g,b,b,g,y,y]  -> B[] Elements B[0] to B[N-1], where each input element is sepārated by ṉew line.
Output :

r -> [r,g,b,b,g,y,y]  -> “r” colour balloon is present odd number of times in the bunch.
Explanation:
From the input array above:

r: 1 balloon 
g: 2 balloons
b:  2 balloons
y : 2 balloons
Hence , r is only the balloon which is odd in number.
Example 2:
Input:

10 -> Value of N
[a,b,b,b,c,c,c,a,f,c] -> B[], elements B[0] to B[N-1] where input each element is separated by new line.
Output :
b-> ‘b’ colour balloon is present odd number of times in the bunch.

Explanation:
From the input array above:

a: 2 balloons
b: 3 balloons 
c: 4 balloons 
f: 1 balloons 
Here, both ‘b’ and ‘f’ have odd number of balloons. But ‘b’ colour balloon occurs first.
Hence , b is the output.

Input Format for testing
The candidate has to write the code to accept: 2 input 

First input: Accept value for number of N(Positive integer number).
Second Input : Accept N number of character values (B[]), where each value is separated by a new line.
Output format for testing
The output should be a single literal (Check the output in example 1 and example 2)

Constraints:

3<=N<=50
B[i]={{a-z} or {A-Z}}

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=1;
    cin>>n;
    char input[n];
    char lower[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
        lower[i] = tolower(input[i]);
    }
    
    for(int i=0;i<n;i++){
        char curr = lower[i];
        for(int j=1;j<n;j++){
            if(lower[j] == curr){
                count++;
            }
        }
        if(count%2==1){
            cout<<curr<<endl;
            break;
        }
        else if(count== 1){
            cout<<curr<<endl;
            break;
        }
        else{
            cout<<"All are even"<<endl;
            break;
        }
        count = 0;
    }
    return 0;
}
