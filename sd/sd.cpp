#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int N;
	unsigned char *arr, buf;
	scanf("%u", &N);
	arr=(unsigned char*)malloc(N*sizeof(unsigned int));
	for (unsigned int i=0; i<N; i++)
	{
		scanf("%u", &arr[i]);
	}

	for (unsigned int j=0; j<N; j++)
	{
		for (unsigned int i=0; i<N-1; i++)
		{
			if (arr[i+1]<arr[i])
			{
				buf=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=buf;
			}
		}
	}

	for (unsigned int i=0; i<N; i++)
	{
		printf ("%u ", arr[i]);
	}
	free(arr);
	system("pause");
	return 0;
}