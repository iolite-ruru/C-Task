#include<iostream>
#include<cassert>
#include<algorithm>
#include<optional>
#include "VectorClass.h"

namespace vector {
	template<typename T>
	void VectorClass<T>::Add(const T& param) {
		auto temp = find(numbers.begin(), numbers.end(), param);
		if (temp != numbers.end()) {
			std::cout << param << "은 이미 존재하는 값입니다." << std::endl;
			assert(0);
			return;
		}
		numbers.push_back(param);
	}

	template<typename T>
	void VectorClass<T>::Delete(const T& param) {
		auto temp = find(numbers.begin(), numbers.end(), param);
		if (temp == numbers.end()) {
			std::cout << param << "은 존재하지 않는 값입니다." << std::endl;
			assert(0);
			return;
		}
		numbers.erase(temp);
	}

	template<typename T>
	T VectorClass<T>::GetSize() const {
		return numbers.size();
	}

	template<typename T>
	void VectorClass<T>::Print() const {
		std::cout << "데이터 출력: ";
		for (const auto& e : numbers) {
			std::cout << e << "   ";
		}
		std::cout << std::endl;
	}

	template<typename T>
	bool VectorClass<T>::GetData(const T param) const {
		if (numbers.at(param)) {
			std::cout << param << "번째 값: " << numbers.at(param) << std::endl;
			return true;
		}
		assert(0);
		return false;
	}
}