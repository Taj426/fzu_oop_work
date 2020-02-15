#include "main.h"

void Body::Look(std::string name) {
	if (!Var.IsExist(name)) {
		Exception(4);
		return ;
	}
	std::cout << Num.num2chs[Var.var[name]] << "\n";
}
bool Body::Parse(std::string line) {
	for (int i = 0; i < line.length(); ++i) {
		if (line[i] != ' ') {
			while(line[i] != ' ' && i < line.length()) {
				part[cnt] += line[i];
				i++;
			}
			cnt++;
		}
	}
	if (cnt <= 1) {
		Exception(1);
		return false;
	}
	return true;
}
void Body::Clear() {
	cnt = 0;
	for (int i = 0; i < 5; ++i)
		part[i] = "";
}
int Body::GetNum(std::string num) {
	if (Num.chs2num.count(num)) 
		return int(Num.chs2num[num]);
	return -1;
}
void Body::Define() {
	int GetedNum = GetNum(part[3]);
	if (GetedNum == -1) {
		Exception(3);
		return ;
	}
	Var.Create(part[1], GetedNum);
}

void Body::Add() {
	if (cnt != 3) {
		Exception(1);
		return ;
	}
	if (!Var.IsExist(part[0])) {
		Exception(4);
		return ;
	}
	int GetedNum = GetNum(part[2]);
	if (GetedNum == -1) {
		Exception(3);
		return ;
	}
	Var.Add(part[0], GetedNum);
}

void Body::Reduce() {
	if (cnt != 3) {
		Exception(1);
		return ;
	}
	if (!Var.IsExist(part[0])) {
		Exception(4);
		return ;
	}
	int GetedNum = GetNum(part[2]);
	if (GetedNum == -1) {
		Exception(3);
		return ;
	}
	Var.Reduce(part[0], GetedNum);
}
void Body::Choose() {
	if (part[0] == "整数")
		Define();
	else if (part[0] == "看看")
		Look(part[1]);
	else if (part[1] == "增加")
		Add();
	else if (part[1] == "减少")
		Reduce();
	else 
		Exception(1);
}

