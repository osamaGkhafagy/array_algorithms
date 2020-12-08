#include <stdio.h>

#define   SIZE    10

void sort_array(int a[], int size);
void print_array(int a[], int size);

int main()
{
  int array[] = {1, 7, 8, 9, 6, -1, 8, 3, 2, 11};
  puts("array a before sorting:");
  print_array(array, SIZE);
  sort_array(array, SIZE);
  puts("array a after sorting:");
  print_array(array, SIZE);

  return 0;
}

void sort_array(int a[], int size)
{
  int temp = 0;
  for(int pass = 1; pass < size; pass++)
  {
    for(int j = 0; j < size - 1; j++)
    {
      if ( a[j] > a[j+1] )
      {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
}

void print_array(int a[], int size)
{
	for(size_t i = 0; i < size; i++)
		printf("%d ", a[i]);
	puts("");
}
