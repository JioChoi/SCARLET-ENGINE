#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>

class Function {

};

class ScarletEngine {
public:
	ScarletEngine();
	ScarletEngine(const std::vector<std::wstring>& code);

	void run(std::wstring code);
	void update();
private:
	std::vector<std::wstring> code;
	std::unordered_map<std::wstring, Function> functions;

	void process();
	void processFunctions();
};