#include <stdio.h>
#define MAX 100
void Scored(int N)
{
  int arr[4]={1,2,4,6};
  int V;
  printf("Enter Total Run: ");
  scanf("%d", &V);
  int NList[MAX] = {0};
  int i, j = 0;
  for(i = N - 1; i>=0; --i)
  {
    while(V >= arr[i])
    {
      V -= arr[i];
      NList[j++] = arr[i];
    }
  }
	printf("Minimum of %d Balls\n", j);
  for(i=0; i<j; ++i)
    printf("%d  ", NList[i]);
}
int main(void) 
{
  int N=4;
  Scored(N)
  return 0;
}
