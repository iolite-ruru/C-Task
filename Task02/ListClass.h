#pragma once
#include<list>
#include "DataClass.h"

namespace list {
	template<typename T>
	class ListClass : public DataClass {
	private:
		std::list<T> numbers;
	public:
		void Add(const T& param);
		void Delete(const T& param);
		T GetSize() const;
		void Print() const;
		bool GetData(const T& param) const;
	};
}