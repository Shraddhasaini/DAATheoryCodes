
#include <stdio.h>
#include <time.h>
struct k
{
  char item;
  int W;
  float profit,pbw;
};

void swap(struct k *xp, struct k *yp)
{
    struct k temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(struct k *arr, int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (*arr[j] > *arr[j+1])
              swap(arr[j], arr[j+1]);
}


int main()
{
  int n,W,i;
  float profit,fraction
  printf("Enter no if items\n" );
  scanf(" %d\n",&n );
  printf("Enter the weight of knapsack\n" );
  scanf("%d\n",&W );
  struct k k1[n];
  for (size_t i = 0; i < n; i++) {
    printf("enter item name,profit and weight respectively\n");
    scanf("%c\n",&k1[i].item);
    scanf("%f\n",&k1[i].profit );
    scanf("%d\n",&k1[i].W);
    k1[i].pbw=k1[i].profit/k1[i].W;
  }
  bubbleSort( struct k &k1, n);
  i=0;
  while (W!=0) {
    if (k1[i].W<=W) {
      profit+=W/k1[i].W;
      W-=k1[i].W;

    }
    else{
      fraction = W/k1[i].W;
      profit+= (fraction*k1[i].profit);
    }
  }

    return 0;
}
