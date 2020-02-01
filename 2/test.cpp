#include "main.h"

Body my;
void CheckChs2Num() {
	if (my.Num.chs2num["十"] == 10)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["二十"] == 20)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["零"] == 00)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["五十五"] == 55)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["二十三"] == 23)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["十七"] == 17)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckNum2Chs() {
	if (my.Num.num2chs[11] == "十一")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[21] == "二十一")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[17] == "十七")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[30] == "三十")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[50] == "五十")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[63] == "六十三")
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
