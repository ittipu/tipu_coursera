/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Stats> 
 * @brief <print some statistics on the given data >
 *
 * <Add Extended Description Here>
 *
 * @author <Md. Kamruzzaman Tipu>
 * @date <30/06/2020 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {
	int i=0;

  	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              	     114, 88,   45,  76, 123,  87,  25,  23,
                                     200, 122, 150, 90,   92,  87, 177, 244,
                                     201,   6,  12,  60,   8,   2,   5,  67,
                                     7,  87, 250, 230,  99,   3, 100,  90};
	print_array(test ,SIZE);
	sort_array(test ,SIZE);
	printf("array sorted\n");
	print_array(test ,SIZE);
	print_statistics(test ,SIZE);
	
}

void print_statistics(unsigned char *a , int n)
{

 printf("median=%f\n",find_median(a,n));
 printf("mean=%f\n",find_mean(a,n));
 printf("maximum=%d\n",find_maximum(a,n));
 printf("minimum=%d\n",find_minimum(a,n)); 

}

void print_array(unsigned char *a , int n)
{
 int i;
printf("Array values: ");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}

float find_median(unsigned char *a , int n)
{
sort_array(a ,SIZE);
 if(n%2==0)
 {
  return (a[n/2]+a[n/2-1])/2;
 }
 else
 {
  return a[n/2];
 }
}


float find_mean(unsigned char *a , int n)
{
 int i;
 float avg=0; 
for(int i=0;i<n;i++)
  {
    avg=avg+a[i];
   }

return avg/n;
}


unsigned char find_maximum(unsigned char *a , int n)
{
//printf("find_maximum");
 int i;
 unsigned char max=0; 
for(int i=0;i<n;i++)
  {
   if (a[i]>max)
       max=a[i]; 
   }

return max;
}

unsigned char find_minimum(unsigned char *a , int n)
{
//printf("find_minimum");
 int i;
 unsigned char min=255; 
for(int i=0;i<n;i++)
  {
   if (a[i]<min)
       min=a[i]; 
   }
return min;
}

void sort_array(unsigned char *a , int n)
{
int c,d,t;  
for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (a[d] < a[d+1])
      {
        /* Swapping */
 
        t         = a[d];
        a[d]   = a[d+1];
        a[d+1] = t;
      }
    }
  
}
}


