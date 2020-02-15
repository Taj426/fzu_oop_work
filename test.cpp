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
	if (my.Num.chs2num["负五十五"] == -55)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["负二十三"] == -23)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.chs2num["负十七"] == -17)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckNum2Chs() {
	if (my.Num.num2chs[11] == "十一")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[-21] == "负二十一")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[-17] == "负十七")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[30] == "三十")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[-50] == "负五十")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (my.Num.num2chs[63] == "六十三")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckVarCreate() {
	my.Var.Create("摸", 0);
	if (my.Var.IsExist("摸"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Create("五五", 0);
	if (my.Var.IsExist("五五"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Create("斯哈斯哈", 0);
	if (my.Var.IsExist("斯哈斯哈"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Create("爪巴", 0);
	if (my.Var.IsExist("爪巴"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckAdd() {
	my.Var.Create("测试加法", -5);
	if (my.Var.var["测试加法"] == -5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Add("测试加法", 5);
	if (my.Var.var["测试加法"] == 0)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Add("测试加法", 5);
	if (my.Var.var["测试加法"] == 5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckReduce() {
	my.Var.Create("测试减法", 15);
	if (my.Var.var["测试减法"] == 15)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Reduce("测试减法", 5);
	if (my.Var.var["测试减法"] == 10)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Reduce("测试减法", 5);
	if (my.Var.var["测试减法"] == 5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	my.Var.Reduce("测试减法", 10);
	if (my.Var.var["测试减法"] == -5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckParse() {
	Body tmp;
	tmp.Clear();
	tmp.Parse("整数 钱包 等于 五");
	if (tmp.part[0] == "整数" && tmp.part[1] == "钱包" && tmp.part[2] == "等于" && tmp.part[3] == "五")
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
