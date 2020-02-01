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
	if (my.Num.chs2num["��ʮ��"] == 55)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["��ʮ��"] == 23)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["ʮ��"] == 17)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckNum2Chs() {
	if (my.Num.num2chs[11] == "ʮһ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[21] == "��ʮһ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[17] == "ʮ��")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[30] == "��ʮ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[50] == "��ʮ")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[63] == "��ʮ��")
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
	std::cout << "check end";
	system("pause");
	return 0;
}
