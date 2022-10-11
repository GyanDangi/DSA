#include <iostream> 
using namespace std;
// Vector Library:
#include <vector>

void PrintVector(vector<pair<int,int>>&vec){

    cout<<"size:"<<vec.size()<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
      cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }

    
}

int main(){

//  vector<int> v;
//  cout<<"Capcity of vector:"<<v.capacity()<<endl;

//  v.push_back(2);
//  cout<<"Capcity of vector:"<<v.capacity()<<endl;

//  v.push_back(3);
//  cout<<"Capcity of vector:"<<v.capacity()<<endl;
 
//  // 3 ko push krne ke baad capacity double ho gai..
//  v.push_back(4);
//  cout<<"Capcity of vector:"<<v.capacity()<<endl;
//  cout<<"Size of the vector:"<<v.size()<<endl;

//  cout<<"element at index:"<<v.at(2);
//  cout<<"first element of the vector->"<<v.front()<<endl;
//  cout<<"last element of the vector->"<<v.back()<<endl;

//  // Way print vector:
//  for (int i = 0; i < v.size(); i++)
//  {
//    cout<< v[i]<<" ";
//  }
//  cout<<endl;
 
//  cout<<"before pop:"<<endl;
//  for (int i :v)
//  {
//   cout<<i<<" ";
//  }
//  cout<<endl;
//  v.pop_back();
 
//  for (int i :v)
//  {
//   cout<<i<<" ";
//  }
//  cout<<endl;

// cout<<"Before clear capacity is:"<<v.capacity()<<endl;
// cout<<"Before clear size is:"<<v.size()<<endl;

// v.clear();

// cout<<"After clear capacity is:"<<v.capacity()<<endl;
// cout<<"after clear size is:"<<v.size()<<endl;

// // Initilizing all the element of the vector by some value:
// vector<int> a(5,3);
// for(int i:a){
//     cout<<i<<" ";
// }cout<<endl;



  // Vector Pair:
  // vector<pair<int,int>>vec={{1,2},{3,4},{4,5}};
  // PrintVector(vec);
  vector<pair<int,int>>vec;
  // user Input vector pair:
  int n;
  cin>>n;
  for(int i=0; i<n; i++ ){
    int x,y;
    cin>>x>>y;
    vec.push_back({x,y});
  }
  PrintVector(vec);

  // Vector of Array:
  int N;
  cin>>N;
  vector<int> v[N];
    for(int i=0; i<N; i++){
      int cols;
      for (int j = 0; j < cols; j++)
      {
        int x;
        cin>>x;
        v[i].push_back(x);
      }
      
    }
    
    return 0;
}