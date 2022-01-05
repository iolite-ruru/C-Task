#include<iostream>
#include<cassert>
#include<algorithm>
#include "VectorClass.h"

namespace vector {
	void VectorClass::Add(const int& param) {
		auto temp = find(numbers.begin(), numbers.end(), param);
		if (temp != numbers.end()) {
			std::cout << param << "은 이미 존재하는 값입니다." << std::endl;
			assert(0);
			return;
		}
		numbers.push_back(param);
	}

	void VectorClass::Delete(const int& param) {
		auto temp = find(numbers.begin(), numbers.end(), param);
		if (temp == numbers.end()) {
			std::cout << param << "은 존재하지 않는 값입니다." << std::endl;
			assert(0);
			return;
		}
		numbers.erase(temp);
	}

	int VectorClass::GetSize() const {
		return numbers.size();
	}

	void VectorClass::Print() const {
		std::cout << "데이터 출력: ";
		for (const auto& e : numbers) {
			std::cout << e << "   ";
		}
		std::cout << std::endl;
	}

	bool VectorClass::GetData(const int& param) const {
		if (numbers.at(param)) {
			std::cout << param << "번째 값: " << numbers.at(param) << std::endl;
			return true;
		}
		assert(0);
		return false;
	}
}