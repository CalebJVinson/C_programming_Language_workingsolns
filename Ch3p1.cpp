#include <stdio.h>
#include <time.h>

int binsearch1(int a, int arr[], int x);
int binsearch2(int a, int arr[], int x);

#define MAX 20000

int main(void) {
  int test[MAX];
  int l, i, x = 100;
  clock_t elapsed_time, curr_time;
  for(i = 0; i < MAX; i++) {
    test[i] = i;
  }
  curr_time = clock();
  for(i = 0; i < 60000; i++) {
    l = binsearch1(x, test, MAX);
  }
  elapsed_time = clock() - curr_time;
  if(l < 0) {
    printf("Element %d not found.\n", x);
  }
  else {
    printf("Element %d found at %d position.\n", x, l);
  }
  printf("First binary search take %lu clocks (%.5f seconds).\n",(unsigned long)elapsed_time, (double)elapsed_time/CLOCKS_PER_SEC);

  curr_time = clock();

  for(i = 0; i < 60000; i++) {
    l = binsearch2(x,test,MAX);
  }
    elapsed_time = clock() - curr_time;

    if(l < 0){
      printf("Element %d not found.\n",x);
    } else {
      printf("Element %d found at %d position.\n",x,l);
    }
    printf("Second binary search take %lu clocks (%lu seconds) \n", (unsigned long)elapsed_time,
      elapsed_time/CLOCKS_PER_SEC); 
}

int binsearch1(int a, int arr[], int x) {
  int start, end, m;
  start = 0;
  end = x-1;
  while(start <= end){
    m = (start+end)/2;
    if(a < arr[m]){
      end = m - 1;
    } else if (a > arr[m]) {
      start = m + 1;
    } else {
      return m;
    }
  }
  return -1;
}

int binsearch2(int a, int arr[], int x) {
  int start, end, m;
  start = 0;
  end = x-1;
  m = (start + end) / 2;
  while (start <= end && a != arr[m]) {
    if (a < arr[m]){
      end = m-1;
    } else {
      start = m + 1;
    }
    m = (start + end) / 2;
  }
  if(a == arr[m]){
    return m;
  } else {
    return -1;
  }
}
