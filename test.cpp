#include "main.h"


void CheckChs2Num(NumRepository s) {
	if (s.chs2num["十"] == 10)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.chs2num["二十"] == 20)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.chs2num["零"] == 00)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.chs2num["负五十五"] == -55)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.chs2num["负二十三"] == -23)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.chs2num["负十七"] == -17)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckNum2Chs(NumRepository s) {
	if (s.num2chs[11] == "十一")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.num2chs[-21] == "负二十一")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.num2chs[-17] == "负十七")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.num2chs[30] == "三十")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.num2chs[-50] == "负五十")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	if (s.num2chs[63] == "六十三")
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckVarCreate(VarRepository s) {
	s.Create("摸", 0);
	if (s.IsExist("摸"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Create("五五", 0);
	if (s.IsExist("五五"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Create("斯哈斯哈", 0);
	if (s.IsExist("斯哈斯哈"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Create("爪巴", 0);
	if (s.IsExist("爪巴"))
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckAdd(VarRepository s) {
	s.Create("测试加法", -5);
	if (s.var["测试加法"] == -5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Add("测试加法", 5);
	if (s.var["测试加法"] == 0)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Add("测试加法", 5);
	if (s.var["测试加法"] == 5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckReduce(VarRepository s) {
	s.Create("测试减法", 15);
	if (s.var["测试减法"] == 15)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Reduce("测试减法", 5);
	if (s.var["测试减法"] == 10)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Reduce("测试减法", 5);
	if (s.var["测试减法"] == 5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
	s.Reduce("测试减法", 10);
	if (s.var["测试减法"] == -5)
		std::cout << "pass\n";
	else
		std::cout << "error\n";
}
void CheckParse(Body s) {
	s.Clear();
	s.Parse("整数 钱包 等于 五");
	if (s.part[0] == "整数" && s.part[1] == "钱包" && s.part[2] == "等于" && s.part[3] == "五")
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
