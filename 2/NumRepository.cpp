#include "main.h"

void NumRepository::MakeTable() {
	for (int i = 0; i <= 10; ++i) 
		chs2num[base_num[i]] = i; // deal with 0 ~ 10
	for (int i = 1; i <= 9; ++i) {
		std::string a =  base_num[10];
		a += base_num[i];
		chs2num[a] = 10 + i;
	}// deal with 11 ~ 19
	for (int i = 2; i <= 9; ++i) {
		std::string a = base_num[i];
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
	for (auto it : chs2num) {
		num2chs[it.second] = it.first;
	}// deal with num to chs
}