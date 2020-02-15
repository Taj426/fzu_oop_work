#include "main.h"

int main(int argc, char *argv[])
{
	if (argc != 1) {
		freopen(argv[1], "r", stdin);
	}
	std::string s;
	Body my;
	my.Clear();
	my.Num.MakeTable();

	while(std::getline(std::cin, s)) {
		if (my.Parse(s)) {
			my.Choose();
			my.Clear();
		}
	}
	return 0;
}