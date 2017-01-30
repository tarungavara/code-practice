#include<iostream>

//insertion sort function
void insertionsort(int array[], int n)
{
  int i, j, k, l, key;
  for (i=1; i<n; i++)
  {
    key = array[i];
    j=i-1;
    while (j>=0 && array[j]>key)
    {
      array[j+1]=array[j];
      j--;
    }
    array[j+1]=key;
  }
}

//driver program
int main()
{
  int i;
  int array[10] = {2, 3, 3, 1, -1, 67, 35, -15, 0, 10};
  insertionsort(array, 10);
  for (i=0; i<10; i++)
    std::cout << array[i] << ' ';
  std::cout << '\n';
  return 0;
}
