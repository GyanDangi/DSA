// code studio Question:
// Note: Array should be sorted.  
// find First and last occurance of the element in the array.
// {1,2,2,3,4,2,5} -> find occurance of the two
// first occurance of 2 is 1 and last occurance of 2 is 6

#include <iostream>
using namespace std;

int firstOccr(int arr[], int size, int key) {
  int s = 0;
  int e = size - 1;
  int midle = s + (e - s) / 2;
  int ans = -1;

  while (s <= e) {
    if (arr[midle] == key) {
      ans = midle;
      e = midle - 1;
    } else if (key > arr[midle]) {
      s = midle + 1;
    } else if (key < arr[midle]) {
      e = midle - 1;
    }
    midle = s + (e - s) / 2;
  }
  return ans;
}
int lastOccr(int arr[], int size, int key) {
  int s = 0;
  int e = size - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e) {
    if (arr[mid] == key) {
      ans = mid;
      s = mid + 1;
    } else if (key > arr[mid]) {
      s = mid + 1;
    } else if (key < arr[mid]) {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main() {

  int oddarr[7] = {1, 2, 4, 4, 4, 5, 6};
  int evenarr[6] = {2, 5, 3, 5, 3, 2};
  int test[15]={1,2,2,2,3,3,3,3,3,3,3,3,3,3,3};
  cout << "first occurance at " << firstOccr(oddarr, 7, 3) << endl;
  cout << "last occurance at " << lastOccr(oddarr, 7, 3)<<endl;
  cout << "first occurance at " << firstOccr(test, 15, 3) << endl;
  cout << "last occurance at " << lastOccr(test, 15, 3);

  return 0;
}