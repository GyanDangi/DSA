#include <bits/stdc++.h>
using namespace std; 
void sortInsert(stack<int> &s , int num){
	if(s.empty() || (!s.empty() && s.top()<num)){
		s.push(num);
		return;
	}

	int n=s.top();
	s.pop();

	sortInsert(s,num);
	
	s.push(n);

}
void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return ;
	}

	int num=stack.top();
	stack.pop();

	// Recursion Call

	sortStack(stack);

	sortInsert(stack, num);

}

int main(){

    stack<int> s;
    s.push(89);
    s.push(-2);
    s.push(56);
    s.push(12);
    s.push(23);

    sortStack(s);

    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    

    return 0;
}