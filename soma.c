#include <stdio.h>
#include <stdlib.h>

int main()
{

	int v[] = {1,5,10,30,100};
	int i=0;
	int temp=0;
	int cont;


	while(i<5)
	{
		if(i==0)
		{
			temp=v[i];
			cont=1;
			printf("V[i]:%d  |  TEMP:%d \n",v[i],temp);
		}

		else
		{
			v[i] += temp;
			temp=v[i];
			printf("V[i]:%d  |  TEMP:%d \n",v[i],temp);

		}

		i++;
	}


	printf("{");
	for(i=0;i<5;i++)
		printf("%d,",v[i]);


	printf("}\n");




	system("PAUSE");
	return 0;
}