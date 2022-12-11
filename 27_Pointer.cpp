#include <iostream> 
using namespace std;

int main(){


/*
float f=10.5;
float p=2.5;
float *ptr=&f;
(*ptr)++;
*ptr=p;
cout<<*ptr<<" "<<f<<" "<<p<<endl;
*/

/*
int a[]={1,2,3,4};
int *pt=a++;
cout<<*pt<<endl;*/

// char s[]="hello";
// char *ptr1=s;
// cout<<s[0]<<" "<<ptr1[0];


// char *ptr3;
// char str[]="abcdefg";
// ptr3=str; 
// ptr3+=5;
// cout<<ptr3;

// int val=5;
// int *q;
// q=&val;
// q=val;  // This will throws an error.
// cout<<q<<endl;


int num[5];
int *p;
p=num;
*p=10;
// cout<<p<<endl;
cout<<num[0]<<endl;
cout<<num[1]<<endl;
cout<<"before:"<<*p<<endl;
p=&num[2];
*p=20;
cout<<"after:"<<*p<<endl;

p--;
*p=30;
cout<<num[1];
p=num+3;
*p=40;
p=num;
*(p+4)=50;
for (int i = 0; i < 5; i++)
{
    cout<<num[i]<<endl;
}

/*
int *ptr4=78;
cout<<*ptr4<<endl;
this  bad practice.. 
*/


    return 0;
}