#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int i,j,start,end;

    int n;
    scanf("%d", &n);
    int size=2*n-1;
    
    start=0;
    
    int arr[size][size];
    end=size-1;
    while(n!=0){
         for(i=start;i<=end;i++){
            for(j=start;j<=end;j++){
            if(i==start||i==end||j==start||j==end){
                    arr[i][j]=n;
                }
            }
         }
    --end;
    ++start;
    --n;
    }
    
    

        for(i=0;i<size;i++){
            for(j=0;j<size;j++){
                printf("%d ",arr[i][j]);
                
                }
            printf("\n");
            }
       
        
              
    
  	 
    return 0;
} 
