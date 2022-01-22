#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("date.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//
//	return 0;
//}

int main1()
{
	FILE* pf = fopen("date.txt", "r+");
	if (pf == NULL)
	{
		perror("fopen");
		return -1;
	}
	char ch[100];
	fgets(ch, 100, pf); //NULL
	int a1, a2, a3, a;
	scanf(ch, "%d.%d.%d.%d//32", &a, &a1, &a2, &a3);
	printf("%d %d %d %d\n", a, a1, a2, a3);

	rewind(pf);

	fgets(ch, 100, pf);
	sscanf(ch, "%d.%d.%d.%d//32", &a, &a1, &a2, &a3);
	printf("%d %d %d %d", a, a1, a2, a3);
	
	fclose(pf);
	pf = NULL;

	return 0;
}
