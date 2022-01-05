#pragma once
#include<vector>
#include "DataClass.h"

namespace vector {
	class VectorClass : public DataClass {
	private:
		std::vector<int> numbers;
	public:
		void Add(const int& param);
		void Delete(const int& param);
		int GetSize() const;
		void Print() const;
		bool GetData(const int& param) const;
	};
}