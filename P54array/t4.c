#include<stdio.h>

void Bubblesort(int* arr,int sz)  //将数组中的元素升序排列
{
   int i=0;
   for ( i = 0; i < sz; i++)
   {
        int j=0;
        for (j = 0; j < (sz-1-i); j++)
        {
            if (arr[j]>arr[j+1])
            {  
                int temp=0;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
   }
   
}

int main()
{
    int arr[]={9,23,4,2,5,6,22,1,14};
    int n=sizeof arr/sizeof arr[0];  
    
    Bubblesort(arr, n);//是否可以正常排序？
    int i=0;
    for(i=0; i<n; i++)
   {
        printf("%d ", arr[i]);
   }
    return 0;
}