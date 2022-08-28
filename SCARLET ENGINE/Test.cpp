#include <iostream>
#include <fstream>
#include <string>
#include "ScarletEngine.h"

int main(void) {
	std::vector<std::wstring> code;

	std::wifstream input("Test\\test.scarlet");
	std::wstring buffer;

	while (std::getline(input, buffer)) {
		code.push_back(buffer);
	}

	ScarletEngine engine(code);
	engine.update();

	engine.run(L"a = 34");

	return 0;
}