#include <bits/stdc++.h>

std::string base_num[11] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九", "十"};
std::string opt[4] = {"整数", "看看", "增加", "减少"};
std::map<std::string, int> name; //variable name

namespace mapping_table {
	std::map<std::string, int>chs2num;
	std::map<int, std::string>num2chs;
	void make_chs2num_table() {
		for (int i = 0; i <= 10; ++i) 
			chs2num[base_num[i]] = i; // deal with 0 ~ 10
		for (int i = 1; i <= 9; ++i) {
			std::string a =  base_num[10];
			a += base_num[i];
			chs2num[a] = 10 + i;
		}// deal with 11 ~ 19
		for (int i = 2; i <= 9; ++i) {
			std:: string a = base_num[i];
			a += base_num[10];
			chs2num[a] = i * 10;
		}// deal with multiples of 10
		for (int i = 2; i <= 9; ++i) {
			std::string a = base_num[i];
			a += base_num[10];
			int num = i * 10;
			for (int j = 1; j <= 9; ++j) 
				chs2num[a + base_num[j]] = num + j;
		}
		return ;
	}
	void make_num2chs_table() {
		make_chs2num_table();
		for (auto it : chs2num) {
			num2chs[it.second] = it.first;
		}// deal with num to chs
		return ;
	}
	void Make_table() {
		make_num2chs_table();
		return ;
	}
} 

using namespace mapping_table;

void exception(int types) {
	if (types == 1)
		puts("请正确输入指令");
	else if (types == 2)
		puts("请勿重复定义相同的变量名");
	else if (types == 3)
		puts("请输入正确的数字");
	else if (types == 4)
		puts("这玩意还没被定义过");
	else if (types == 5)
		puts("请不要用关键词作为变量名");
	else if (types == 6) 
		puts("相加的数字过大");
	else if (types == 7)
		puts("相减的数字过大");
}
void analysis_run_line(std::string s) {
	std::string tmp[5] = "";
	int cnt = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] != ' ') {
			while(s[i] != ' ' && i < s.length()) {
				tmp[cnt] += s[i];
				i++;
			}
			cnt++;
		}
	}
	if (cnt <= 1) {
		exception(1);
		return ;
	}
	if (tmp[0] == opt[0]) {//define variable
		if (name.count(tmp[1])) {//judge duplication
			exception(2);
			return ;
		}
		else if(tmp[1] == opt[0] || tmp[1] == opt[1] || tmp[1] == opt[2] || tmp[1] == opt[3]) {
			exception(5);
			return ;
		}
		else {
			if (!chs2num.count(tmp[3])) {
				exception(3); 
				return ;
			}// judeg if num is correct
			else {
				int initial_num = chs2num[tmp[3]];
				name[tmp[1]] = initial_num;
			}
		}
	}

	else if (tmp[0] == opt[1]) {//look
		if (name.count(tmp[1]))
			std::cout << num2chs[name[tmp[1]]] << std::endl;
		else {
			exception(4);
			return ;
		}
	}

	else {
		if (cnt != 3) {
			exception(1);
			return ;
		}
		if (!name.count(tmp[0])) {
			exception(4);
			return ;
		}
		if (tmp[1] == opt[2]) {//add
			int add = name[tmp[0]];
			if (!chs2num.count(tmp[2])) {
				exception(3);
				return ;
			}
			add += chs2num[tmp[2]];
			if (add >= 100) { //too large
				exception(6);
				return ;
			}
			name[tmp[0]] = add;
		}

		else if (tmp[1] == opt[3]) {//decrease
			int de = name[tmp[0]];
			if (!chs2num.count(tmp[2])) {
				exception(3);
				return ;
			}
			de -= chs2num[tmp[2]];
			if (de < 0) {// too low
				exception(7);
				return ;
			}
			name[tmp[0]] = de;
		}
	}
}
int main() {
	Make_table();
	std::string s;
	while(std::getline(std::cin, s)) {
		analysis_run_line(s);
	}
	return 0;
}