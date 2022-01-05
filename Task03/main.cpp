#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cassert>
#include "DataClass.h"
#include "VectorClass.h"
#include "ListClass.h"
/*
3�ܰ� ����
- ������ Ŭ���� ���ø�ȭ
- GetData(int index) - std::optional ����ؼ� �����غ���, call by reference ��� ����
- 'auto'Ű���� ���� Ȱ���غ���
*/
int main() {
	int key, number;
	
	DataClass<int>* obj = new list::ListClass<int>();
	vector::VectorClass<int>* data = reinterpret_cast<vector::VectorClass<int>*>(obj);

	if (data == nullptr) {
		assert(0);
		return 0;
	}

	while (true) {
		std::cout << "====================================================" << std::endl;
		std::cout << "1.Add, 2.Delete, 3.GetSize, 4.Print, 5.GetData, 0.exit   ==>  ";
		std::cin >> key;
		switch (key){
		case 0:
			std::cout << "���α׷� ����" << std::endl;
			return 0;
			break;
		case 1:
			std::cout << "�߰��� ���� �Է�: ";
			std::cin >> number;
			data->Add(number);
			break;
		case 2:
			std::cout << "������ ���� �Է�: ";
			std::cin >> number;
			data->Delete(number);
			break;
		case 3:
			std::cout << "���� ������ ��: " << data->GetSize() << "��" << std::endl;
			break;
		case 4:
			data->Print();
			break;
		case 5:
			std::cout << "��ȸ�� �ε��� �Է�: ";
			std::cin >> number;
			if (data->GetData(number)) {
				std::cout << "�ش� �ε����� ���� �����մϴ�." << std::endl;
				break;
			}
			std::cout << "�ش� �ε����� ���� �������� �ʽ��ϴ�." << std::endl;
			break;
		default:
			std::cout << "�Է� ����" << std::endl;
			assert(0);
			break;
		}
		std::cout << std::endl;
	}
	return 0;
}