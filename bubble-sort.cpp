#include<iostream>

//swap function
void swap(int array[], int i, int j)
{
  int temp;
  temp=array[i];
  array[i]=array[j];
  array[j]=temp;
}

//bubblesort function
void bubblesort(int array[], int n)
{
  int i, j;
  bool swapped=false;
  for (j=0; j<n-1; j++)
  {
    for (i=0; i<n-1-j; i++)
      if (array[i]>array[i+1])
      {
        swap(array, i, i+1);
        swapped=true;
      }
    if (swapped==false)
      break;
  }
}

//driver program
int main()
{
  int i;
  int array[10] = {2, 3, 3, 1, -1, 67, 35, -15, 0, 10};
  bubblesort(array, 10);
  for (i=0; i<10; i++)
    std::cout << array[i] << ' ';
  std::cout << '\n';
  return 0;
}
