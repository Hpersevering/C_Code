#include<stdio.h>

int main()
{
    //������ͨ������¶�������Ϊ������Ԫ�صĵ�ַ
    //�������������1.sizeof���������������ʾ��������
    //ȡ��ַ��&���������������ʾ������������ĵ�ַ

    int arr[10] = {1,2,3,4,5};
    
     
    printf("%p\n", arr);
    printf("&arr[0]�ĵ�ַ:%p\n", &arr[0]);       //�����ַΪ0x0004  
    printf("&arr[0]+1�ĵ�ַ:%p\n", &arr[0]+1);   //         0x0008  ���4 1���ֽ�
    printf("&arr�ĵ�ַ:%p\n", &arr);      //�����ַΪ0x0004
    printf("&arr+1�ĵ�ַ:%p\n", &arr+1);  //         0x002c  ���40 10���ֽ�
    printf("%d\n", sizeof arr);
    printf("%d\n", *arr);         
    return 0;
}