//Insertion Sort


//google sheet link for chart and data - https://docs.google.com/spreadsheets/d/1KBFr1eOTE9lfLDBBlUPDazTho9Geq7BKE7eyj5paLFc/edit?usp=sharing

#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
 
  int n=32000;
  int a[n];
  int i,j,key;
  
  for(i=0;i<n;i++)
  {
      
      //for random data
     a[i]=rand();
     
     //for asc data
      //a[i]=i;
      
     // for desc data
    // a[i]=n-i;
  }
  
  struct timeval e;
  gettimeofday(&e, NULL);
  long start = e.tv_sec *1000 + e.tv_usec/1000;
  
  for(i=1;i<n;i++)
  {
    key=a[i];
    j=i-1;
    
    while(j>=0 && a[j]>key)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=key;
  }    

  
  gettimeofday(&e, NULL);
  long end = e.tv_sec *1000 + e.tv_usec/1000;
  printf("%ld",end-start);
  
 

    return 0;
}
