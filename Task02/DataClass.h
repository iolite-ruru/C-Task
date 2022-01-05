#pragma once
class DataClass {
protected:
	virtual void Add(const int& param) = 0;
	virtual void Delete(const int& param) = 0;
	virtual int GetSize() const = 0;
	virtual void Print() const = 0;
	virtual bool GetData(const int& param) const = 0;
};