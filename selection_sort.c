//Selection Sort

#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
 
  int n=32000;
  int a[n];
  int i,j,y,s,k;
  
  for(i=0;i<n;i++)
  {
      //for random data
     a[i]=rand();
     
     //for asc data
      //a[i]=i;
      
     // for desc data
     //a[i]=n-i;
  }
  
  struct timeval e;
  gettimeofday(&e, NULL);
  long start = e.tv_sec *1000 + e.tv_usec/1000;
  
  for(i=0;i<n-1;i++)
  {
    
    for(j=i+1;j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            //swapping
            s=a[j];
            a[j]=a[j+1];
            a[j+1]=s;
        }
    }
    
  }
  
  gettimeofday(&e, NULL);
  long end = e.tv_sec *1000 + e.tv_usec/1000;
  printf("%ld",end-start);
  
 

    return 0;
}
