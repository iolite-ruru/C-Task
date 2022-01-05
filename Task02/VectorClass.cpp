#include<iostream>
#include<cassert>
#include<algorithm>
#include "VectorClass.h"

namespace vector {
	void VectorClass::Add(const int& param) {
		auto temp = find(numbers.begin(), numbers.end(), param);
		if (temp != numbers.end()) {
			std::cout << param << "�� �̹� �����ϴ� ���Դϴ�." << std::endl;
			assert(0);
			return;
		}
		numbers.push_back(param);
	}

	void VectorClass::Delete(const int& param) {
		auto temp = find(numbers.begin(), numbers.end(), param);
		if (temp == numbers.end()) {
			std::cout << param << "�� �������� �ʴ� ���Դϴ�." << std::endl;
			assert(0);
			return;
		}
		numbers.erase(temp);
	}

	int VectorClass::GetSize() const {
		return numbers.size();
	}

	void VectorClass::Print() const {
		std::cout << "������ ���: ";
		for (const auto& e : numbers) {
			std::cout << e << "   ";
		}
		std::cout << std::endl;
	}

	bool VectorClass::GetData(const int& param) const {
		if (numbers.at(param)) {
			std::cout << param << "��° ��: " << numbers.at(param) << std::endl;
			return true;
		}
		assert(0);
		return false;
	}
}