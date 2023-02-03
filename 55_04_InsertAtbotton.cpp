#include <bits/stdc++.h>

using namespace std;

void InsertAtBotton(stack<int> &s, int element){

    if(s.empty()){
        s.push(element);
        return ;
    }

    int num=s.top();
    s.pop();

    InsertAtBotton(s,element);

    s.push(num);

}
int main() {
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

  InsertAtBotton(st,78);
  while (!st.empty())
  {
    cout<<st.top()<<endl;
    st.pop();
  }
    
return 0;
}