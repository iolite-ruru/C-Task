#pragma once

template<typename T>
class DataClass {
protected:
	virtual void Add(const T& param) = 0;
	virtual void Delete(const T& param) = 0;
	virtual T GetSize() const = 0;
	virtual void Print() const = 0;
	virtual bool GetData(const T param) const = 0;
};