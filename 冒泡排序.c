#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	int tmp=0;
	int j=0,i=0;
	for(i=0;i<sz-1;i++)                  //ȷ��ð������Ĵ��� 
	{
		int flag=1;           //������һ��Ҫ����������Ѿ����� 
		for(j=0;j<sz-1-i;j++)                    //ÿһ��ð������ 
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0;            //���������������ʵ����ȫ���� 
			}
		}
		if(flag==1)               //���������0,1,2,3,4,5,6,7,8,9ʱ��������䣬������Ч�� 
		{
			break;                //����������ʱ����break����forѭ�� 
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
