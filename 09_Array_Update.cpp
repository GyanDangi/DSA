#include <iostream>
using namespace std;

void UpdateArray(int arr[], int size) {
  cout << "In update function :" << endl;
  arr[0] = 123;
  for (int i = 0; i < 4; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << " Going to main function:" << endl;
}

int main() {

  int num[4] = {1, 2, 3, 4};
  UpdateArray(num, 4);
  for (int i = 0; i < 4; i++) {
    cout << num[i] << " ";
  }
  cout << endl;

  return 0;
}