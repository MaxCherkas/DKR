#include <stdio.h>

void modifyArray(int arr[], int size);
void printArray(int arr[], int size);

int main(){
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  for (int i = 0; i < size; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  modifyArray(arr, size);
  printArray(arr, size);
  return 0;
}
//*********************************************************
void modifyArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] < 0) {
      arr[i] = -1;
    }
    else if (arr[i] > 0) {
      arr[i] = 1;
    }
  }
}
//*********************************************************
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
