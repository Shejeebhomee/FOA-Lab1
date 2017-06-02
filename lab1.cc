// Bubble Sort

#include <iostream>
#include <string>
using namespace std;

void bubbleSort(int array[], int len);
void Bubble_sort(string arr[], int length);
int main()
{
  cout << "My name is Oluwasijibomi and this is lab 1." << endl;
  string usr_input;
  string arr[100];
  int user_length;
  int user_input;
  int array[100];
  
  
  // takes in input for integer array
  int i;
  cout << "How many number do you want to sort: ";
  cin >> user_input;
  int max = user_input;
  cout << "Please enter a list of numbers: ";
  for (int i = 0; i < max; i++){
    cin >> user_input;
    array[i] = user_input;
  
  }
  
  // take in input for string array
  int a;
  cout << "How many names do you want to sort: ";
  cin >> user_length;
  int length = user_length;
  cout << "Please enter a list of names: ";
  for (int a = 0; a < length; a++){
    cin >> usr_input;
    arr[a] = usr_input;
  
  }
  
  // calls void funtions
  Bubble_sort(arr, length);
  bubbleSort(array, max);
  
  // print sorted string array
  cout << "Sorted string array: ";
  for (int a = 0; a < length; a++){
      cout << arr[a] << " ";
  }
  
  // print sorted integer array
  cout << endl << "Sorted Array: ";
   for (int i = 0; i < max; i++){
      cout << array[i] << " ";
      }

  return 0;
}


// sort array of integers
void bubbleSort(int array[], int max)
{
    int i, x, temp;
    for (i = 1; i <= max - 1; i++){
        for(x = 0; x <= max - i - 1; x++){
            if (array[x] > array[x + 1]){
                temp = array[x];
                array[x] = array[x + 1];
                array[x + 1] = temp;
            }
        }
    }
}

// sorts array of strings
void Bubble_sort(string arr[], int length){
    int i, x;
    string temp;
    for (i = 1; i <= length - 1; i++){ //terminates loop
        for(x = 0; x <= length - i - 1; x++){
            if (arr[x] > arr[x + 1]){
                temp = arr[x];
                arr[x] = arr[x + 1];
                arr[x + 1] = temp;
            }
        }
    }
}