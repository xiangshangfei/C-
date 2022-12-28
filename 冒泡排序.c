#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	int tmp=0;
	int j=0,i=0;
	for(i=0;i<sz-1;i++)                  //确定冒泡排序的次数 
	{
		int flag=1;           //假设这一趟要排序的数据已经有序 
		for(j=0;j<sz-1-i;j++)                    //每一趟冒泡排序 
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0;            //本趟排序的数据其实不完全有序 
			}
		}
		if(flag==1)               //针对数组是0,1,2,3,4,5,6,7,8,9时，加上这句，能提升效率 
		{
			break;                //当条件满足时，用break跳出for循环 
		}
	}
}
int main()
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
