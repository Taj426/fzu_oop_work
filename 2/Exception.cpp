#include "main.h"

void Exception(int types) {
	if (types == 1)
		puts("����ȷ����ָ��");
	else if (types == 2)
		puts("�����ظ�������ͬ�ı�����");
	else if (types == 3)
		puts("��������ȷ������");
	else if (types == 4)
		puts("�����⻹û�������");
	else if (types == 5)
		puts("�벻Ҫ�ùؼ�����Ϊ������");
	else if (types == 6) 
		puts("��ӵ����ֹ���");
	else if (types == 7)
		puts("��������ֹ���");
}