#pragma once
#include<vector>
#include "DataClass.h"

namespace vector {
	template<typename T>
	class VectorClass : public DataClass<T> {
	private:
		std::vector<T> numbers;
	public:
		void Add(const T& param);
		void Delete(const T& param);
		T GetSize() const;
		void Print() const;
		bool GetData(const T param) const;
	};
}