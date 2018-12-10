#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define Max 20

int pos;

int linear_search(int, int[], int);

void main(){
    int n, i, a[Max], k, pos;
    double t;
    //clock_t end, begin;
    printf("\n Enter the number of elements\n");
    scanf("%d", &n);
    printf("\nEnter the number of elements in order! \n");

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("\nEnter the elements to be serached!\n");
    scanf("%d", &k);

    //begin = clock();
    pos = linear_search(n, a, k);
    //end = clock();

    //t = (double)(end - begin)/CLOCKS_PER_SEC;

    if(pos == -1)
        printf("\nThe element was not present!\n");
    else{
        printf("%d %d", k, pos+1);
      //  printf("The time taken is %lf", t);
    }
}

int linear_search(int n, int a[], int k){

    if(n < 1){
        return -1;
    }
    if(k == a[n-1])
        return n-1;
    else    
        return linear_search(n-1, a, k); 

}