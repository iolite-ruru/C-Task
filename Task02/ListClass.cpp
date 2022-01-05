#include<iostream>
#include<cassert>
#include<algorithm>
#include "ListClass.h"

namespace list {
	void ListClass::Add(const int& param) {
		auto temp = find(numbers.begin(), numbers.end(), param);
		if (temp != numbers.end()) {
			std::cout << param << "�� �̹� �����ϴ� ���Դϴ�." << std::endl;
			assert(0);
			return;
		}
		numbers.push_back(param);
	}

	void ListClass::Delete(const int& param) {
		auto temp = find(numbers.begin(), numbers.end(), param);
		if (temp == numbers.end()) {
			std::cout << param << "�� �������� �ʴ� ���Դϴ�." << std::endl;
			assert(0);
			return;
		}
		numbers.erase(temp);
	}

	int ListClass::GetSize() const {
		return numbers.size();
	}

	void ListClass::Print() const {
		std::cout << "������ ���: ";
		for (const auto& e : numbers) {
			std::cout << e << "   ";
		}
		std::cout << std::endl;
	}

	bool ListClass::GetData(const int& param) const {

		std::list<int>::const_iterator iter = numbers.begin(); //const
		std::advance(iter, param - 1);
		/*
		for (; iter != numbers.end(); iter++) {
			if (*iter == param) { //iterator�� ��� ������ ���ΰ�?
				std::cout << param << "��° ��: " << *iter << std::endl;
				return true;
			}
		}
		*/
		if (iter == numbers.end()) {
			assert(0);
			return false;
		}
		return true;
	}
}