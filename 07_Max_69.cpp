#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int max69(int num){

    int temp= num;
    int i=0;
    int index=0;
    while (temp>0)
    {   
        int digit=temp%10;
        temp /=10;
        i++;
        if(digit==6){
            index=i;
        }
    }
    return num+ 3*pow(10, index-1);
    
}
int main() {
    
    cout<<max69(9669);
return 0;
}