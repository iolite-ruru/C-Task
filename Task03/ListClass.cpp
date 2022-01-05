#include<iostream>
#include<cassert>
#include<algorithm>
#include<optional>
#include "ListClass.h"

namespace list {
	template<typename T>
	void ListClass<T>::Add(const T& param) {
		auto temp = find(numbers.begin(), numbers.end(), param);
		if (temp != numbers.end()) {
			std::cout << param << "�� �̹� �����ϴ� ���Դϴ�." << std::endl;
			assert(0);
			return;
		}
		numbers.push_back(param);
	}

	template<typename T>
	void ListClass<T>::Delete(const T& param) {
		auto temp = find(numbers.begin(), numbers.end(), param);
		if (temp == numbers.end()) {
			std::cout << param << "�� �������� �ʴ� ���Դϴ�." << std::endl;
			assert(0);
			return;
		}
		numbers.erase(temp);
	}

	template<typename T>
	T ListClass<T>::GetSize() const {
		return numbers.size();
	}

	template<typename T>
	void ListClass<T>::Print() const {
		std::cout << "������ ���: ";
		for (const auto& e : numbers) {
			std::cout << e << "   ";
		}
		std::cout << std::endl;
	}

	template<typename T>
	bool ListClass<T>::GetData(const T param) const {
		std::list<int>::const_iterator iter = numbers.begin(); //const
		std::advance(iter, param - 1);
		
		if (iter == numbers.end()) {
			assert(0);
			return false;
		}
		return true;
	}
}