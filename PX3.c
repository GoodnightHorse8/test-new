#include<stdio.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;

};
int cmp_stu(const void* e1, const void* e2)
{
	return (strcmp(((struct Stu*)e1)->age, ((struct Stu*)e2)->age));
	//strcmp���ķ���ֵ��֮ǰһ����������ھͷ��ش���0����
}

int main()//��qsort���Žṹ������
{
	struct Stu s[] = {{"zhang",15},{"ling", 17},{"hua", 18}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu);
	return 0;
}