#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int arr[10];
	int num;
	int i;
	
	while(1)
	{
		printf("1, 2, 3 �� �Է��ϼ��� : ");
		scanf("%d", &num);
		switch (num)
		{
			case 1:
				for (i = 0;  i < 10; i++)
				{
					scanf("%d", &arr[i]);
				}
				break;
	
			case 2:
				for (i = 0; i < 10; i++)
				{
					printf("%d\n", arr[i]);
				}
				
				break;
	
			case 3:
				printf("�Է�����\n");
				return 0;
		}
	}

	return 0;
}
