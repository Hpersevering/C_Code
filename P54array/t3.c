#include<stdio.h>

int main()
{
    //数组名通常情况下都可以视为数组首元素的地址
    //两种特殊情况：1.sizeof后面的数组名，表示整个数组
    //取地址符&后面的数组名，表示的是整个数组的地址

    int arr[10] = {1,2,3,4,5};
    
     
    printf("%p\n", arr);
    printf("&arr[0]的地址:%p\n", &arr[0]);       //假设地址为0x0004  
    printf("&arr[0]+1的地址:%p\n", &arr[0]+1);   //         0x0008  相差4 1个字节
    printf("&arr的地址:%p\n", &arr);      //假设地址为0x0004
    printf("&arr+1的地址:%p\n", &arr+1);  //         0x002c  相差40 10个字节
    printf("%d\n", sizeof arr);
    printf("%d\n", *arr);         
    return 0;
}