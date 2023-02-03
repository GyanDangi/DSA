#include<bits/stdc++.h>
using namespace std;
void InsertAtBotton(stack<int> &s, int element){

    if(s.empty()){
        s.push(element);
        return ;
    }

    int num=s.top();
    s.pop();

    // Rercursion
    InsertAtBotton(s,element);

    s.push(num);
}

void ReverseStack(stack<int>& s){
    if(s.empty()){
        return;
    }

    // upper ka element nikal lo aur store krwa lo
    int num=s.top();
    s.pop();

    // Baki recursion sambhal lenga:
    ReverseStack(s);

    InsertAtBotton(s, num);

}
int main() {

    stack<int> str;
    str.push(5);
    str.push(4);
    str.push(3);
    str.push(2);
    str.push(1);

    ReverseStack(str);
    while (!str.empty())
    {
        cout<<str.top()<<endl;
        str.pop();
    }
    


return 0;
}