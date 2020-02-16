#include "main.h"


void CheckChs2Num(NumRepository s) {
	if (s.chs2num["ʮ"] == 10)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.chs2num["��ʮ"] == 20)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.chs2num["��"] == 00)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.chs2num["����ʮ��"] == -55)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.chs2num["����ʮ��"] == -23)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.chs2num["��ʮ��"] == -17)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckNum2Chs(NumRepository s) {
	if (s.num2chs[11] == "ʮһ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.num2chs[-21] == "����ʮһ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.num2chs[-17] == "��ʮ��")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.num2chs[30] == "��ʮ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.num2chs[-50] == "����ʮ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.num2chs[63] == "��ʮ��")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckVarCreate(VarRepository s) {
	s.Create("��", 0);
	if (s.IsExist("��"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Create("����", 0);
	if (s.IsExist("����"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Create("˹��˹��", 0);
	if (s.IsExist("˹��˹��"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Create("צ��", 0);
	if (s.IsExist("צ��"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckAdd(VarRepository s) {
	s.Create("���Լӷ�", -5);
	if (s.var["���Լӷ�"] == -5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Add("���Լӷ�", 5);
	if (s.var["���Լӷ�"] == 0)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Add("���Լӷ�", 5);
	if (s.var["���Լӷ�"] == 5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckReduce(VarRepository s) {
	s.Create("���Լ���", 15);
	if (s.var["���Լ���"] == 15)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Reduce("���Լ���", 5);
	if (s.var["���Լ���"] == 10)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Reduce("���Լ���", 5);
	if (s.var["���Լ���"] == 5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Reduce("���Լ���", 10);
	if (s.var["���Լ���"] == -5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckParse(Body s) {
	s.Clear();
	s.Parse("���� Ǯ�� ���� ��");
	if (s.part[0] == "����" && s.part[1] == "Ǯ��" && s.part[2] == "����" && s.part[3] == "��")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}

int main() {
	Body my;
	my.Num.MakeTable();
	my.Clear();
	std::cout << "Now is checking num2chs\n";
	CheckNum2Chs(my.Num);
	std::cout << "check end\n\n";

	std::cout << "Now is checking chs2num\n";
	CheckChs2Num(my.Num);
	std::cout << "check end\n\n";

	std::cout << "Now is checking Create\n";
	CheckVarCreate(my.Var);
	std::cout << "check end\n\n";

	std::cout << "Now is checking Add\n";
	CheckAdd(my.Var);
	std::cout << "check end\n\n";

	std::cout << "Now is checking Reduce\n";
	CheckReduce(my.Var);
	std::cout << "check end\n\n";

	std::cout << "Now is checking Parse\n";
	CheckParse(my);
	std::cout << "check end\n\n";
	system("pause");
	return 0;
}
