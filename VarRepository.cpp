#include "main.h"

bool VarRepository::IsExist(std::string name) {
	return var.count(name) != 0;
}
void VarRepository::Create(std::string name, int val) {
	if (IsExist(name)) {
		Exception(2);
		return ;
	}
	if (name == "看看" || name == "增加" || name == "减少" || name == "整数") {\
		Exception(5);
		return ;
	}
	var[name] = val;
}
void VarRepository::Add(std::string name, int val) {
	int now = var[name];
	now += val;
	if (now > 99) {
		Exception(6);
		return ;
	}
	var[name] = now;
}
void VarRepository::Reduce(std::string name, int val) {
	int now = var[name];
	now -= val;
	if (now < -99) {
		Exception(7);
		return ;
	}
	var[name] = now;
}
