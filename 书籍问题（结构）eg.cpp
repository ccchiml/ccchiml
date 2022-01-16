//查找书籍类问题
//输入第一行给出一个正整数n(<10），随后给出n本书的信息。
//每本书在一行中给出书名，即长度不超过30的字符串，随后一行中给出正实数价格。题目保证没有同样价格的书。
//输出：在一行中按照“价格、书名”的格式先后输出价格最高和最低的书。价格保留两位小数。 
#include<stdio.h>
struct book
{
	char name[32];
	double price;
}s[10],high,low;
int main(  )
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("\n");//每次输入数字后都会有一个‘\n’，用scanf吞掉它；
		gets(s[i].name);
		scanf("%lf",&s[i].price);
	}
	high=low=s[0];
	for(int i=1;i<n;i++)
	{
		if(s[i].price>high.price)
		high=s[i];
		if(s[i].price<low.price)
		low=s[i];
	 } 
	 printf("%.2lf,%s\n",high.price,high.name);
	 printf("%.2lf,%s\n",low.price,low.name);
	 return 0;
}
 
