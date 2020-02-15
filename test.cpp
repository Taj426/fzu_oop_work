#include "main.h"

Body my;
void CheckChs2Num() {
	if (my.Num.chs2num["ʮ"] == 10)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["��ʮ"] == 20)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["��"] == 00)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["����ʮ��"] == -55)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["����ʮ��"] == -23)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["��ʮ��"] == -17)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckNum2Chs() {
	if (my.Num.num2chs[11] == "ʮһ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[-21] == "����ʮһ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[-17] == "��ʮ��")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[30] == "��ʮ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[-50] == "����ʮ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[63] == "��ʮ��")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckVarCreate() {
	my.Var.Create("��", 0);
	if (my.Var.IsExist("��"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Create("����", 0);
	if (my.Var.IsExist("����"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Create("˹��˹��", 0);
	if (my.Var.IsExist("˹��˹��"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Create("צ��", 0);
	if (my.Var.IsExist("צ��"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckAdd() {
	my.Var.Create("���Լӷ�", -5);
	if (my.Var.var["���Լӷ�"] == -5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Add("���Լӷ�", 5);
	if (my.Var.var["���Լӷ�"] == 0)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Add("���Լӷ�", 5);
	if (my.Var.var["���Լӷ�"] == 5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckReduce() {
	my.Var.Create("���Լ���", 15);
	if (my.Var.var["���Լ���"] == 15)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Reduce("���Լ���", 5);
	if (my.Var.var["���Լ���"] == 10)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Reduce("���Լ���", 5);
	if (my.Var.var["���Լ���"] == 5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Reduce("���Լ���", 10);
	if (my.Var.var["���Լ���"] == -5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckParse() {
	Body tmp;
	tmp.Clear();
	tmp.Parse("���� Ǯ�� ���� ��");
	if (tmp.part[0] == "����" && tmp.part[1] == "Ǯ��" && tmp.part[2] == "����" && tmp.part[3] == "��")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}

int main() {
	
	my.Num.MakeTable();
	my.Clear();
	std::cout << "Now is checking num2chs\n";
	CheckNum2Chs();
	std::cout << "check end\n";
	std::cout << "Now is checking chs2num\n";
	CheckChs2Num();
	std::cout << "check end\n";
	std::cout << "Now is checking Add\n";
	CheckAdd();
	std::cout << "check end\n";
	std::cout << "Now is checking Reduce\n";
	CheckReduce();
	std::cout << "check end\n";
	std::cout << "Now is checking Parse\n";
	CheckParse();
	std::cout << "check end\n";
	system("pause");
	return 0;
}
