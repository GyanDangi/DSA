# include <iostream>
using namespace std;

int main(){
  // int var='9';
  // cout<<var;
 char userinput;
 char lowerchar=96; char upperchar=64;
 char numeric=47;
 cout<<"write the character:";
 cin>>userinput;   
 int i=1;
//  int j=1
 while(i<=26){
    lowerchar=lowerchar+1;
    // cout<<lowerchar<<" ";
    upperchar=upperchar+1;
    numeric=numeric+1;
  
     if(lowerchar==userinput){
    cout<<userinput<<" is lowercase:"<<endl;
    
    break;
 }
  else if(upperchar==userinput){
    cout<<userinput<<" is uppercase:"<<endl;
    
    break;
  }
  else if(numeric==userinput){
    cout<<userinput<<" is numeric value"<<endl;
 
    break;
  }
     i=i+1;

 }



   return 0;
    
}