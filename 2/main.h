#ifndef LANG_H
#define LANG_H


#include <bits/stdc++.h>

class VarRepository {
	public:
		std::map<std::string, int>var;
		bool IsExist(std::string name);
		void Create(std::string name, int val);
		void Add(std::string name, int val);
		void Reduce(std::string name, int val);
};
class NumRepository {
	private:
		std::string base_num[11] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九", "十"};
	public:
		std::map<std::string, int>chs2num;
		std::map<int, std::string>num2chs;
		void MakeTable();
};
class Body {
	public:
	VarRepository Var;
	NumRepository Num;
	std::string part[5];
	int cnt;
	void Look(std::string name);
	bool Parse(std::string line);
	void Clear();
	int GetNum(std::string num);
	void Choose();
	void Define();
	void Add();
	void Reduce();
};
void Exception(int type);
#endif
