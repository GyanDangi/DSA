#include <iostream>
#include <iomanip>
using namespace std;


bool isPalindrome(int x){
  
  //Base Case for negative Numbers
  if (x<0)
  {
    return false;
  }
  
  // Store nubmber in variable.
  int number=x;

  // store reversed number.
  long long int reverse=0;

  while (number!=0 )
  {
    // int digit=number%10;
    reverse=reverse*10 +number%10;
    number /=10;
  }
  return x==reverse;
}
int main() {
int n;
cout <<"enter the number:"<<endl;
cin>>n;
int ans=isPalindrome(n);
cout<<ans;
return 0;
}