//�����鼮������
//�����һ�и���һ��������n(<10����������n�������Ϣ��
//ÿ������һ���и��������������Ȳ�����30���ַ��������һ���и�����ʵ���۸���Ŀ��֤û��ͬ���۸���顣
//�������һ���а��ա��۸��������ĸ�ʽ�Ⱥ�����۸���ߺ���͵��顣�۸�����λС���� 
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
		scanf("\n");//ÿ���������ֺ󶼻���һ����\n������scanf�̵�����
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
 
