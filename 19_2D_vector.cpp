#include <iostream>
#include <vector>
using namespace std;

vector<int> printVector(vector<vector<int>> matrix, int rows, int cols){

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
       cout<<  matrix[i][j]<<" ";
    }
    cout<<endl;
    
}

}


int main(){

    int N;
    cout<<"Enter the size of rows:";
    cin>>N;
    vector<vector<int>> v;
    cout<<"enter the 2d vector elements:"<<endl;
    for (int i = 0; i < N; i++)
    {
        vector<int> temp;
        for (int j = 0; j < N; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
        
    }
    printVector(v, N, N);

    return 0;
}