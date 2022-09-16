#include <iostream>
using namespace std;

int main(){
   double ferh_value=0;
   cout<<" Enter the farhenite value: ";
//    cin>>ferh_value;
int i=1;
while(i<=300){
   cout<<"the celcius value at:"<<ferh_value<<" ferhenite is:"<<(ferh_value-32)*5/9<<endl;
    ferh_value++;
   i++;
}
    return 0;
}