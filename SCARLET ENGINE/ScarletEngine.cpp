#include "ScarletEngine.h"

ScarletEngine::ScarletEngine() {

}

ScarletEngine::ScarletEngine(const std::vector<std::wstring>& code) {
	this->code.assign(code.begin(), code.end());
	process();
}

void ScarletEngine::run(std::wstring code) {
	int pos = code.find(L'=');
	if () {

	}
	else {

	}
}

void ScarletEngine::update() {

}

void ScarletEngine::process() {
	processFunctions();
}

void ScarletEngine::processFunctions() {
	bool reading = false;

	for (std::wstring line : code) {
		if (reading && line.substr(0, 1) != L"\t") {
			reading = false;
		}

		if (reading) {
			std::wcout << line.substr(1) << std::endl;
		}

		if (!reading && line.substr(0, 4) == L"func") {
			reading = true;
		}
	}
}
