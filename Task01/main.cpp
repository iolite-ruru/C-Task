#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cassert>
#include "DataClass.h"
#include "VectorClass.h"
#include "ListClass.h"
/*
2�ܰ� ����
- GetData(int idex) : CallByReference�� ����� ����, index �ʰ��� return false; / ������ ��� return true;
- DataClass �������̽�ȭ - virtual Ű���� Ȱ��
- DataClass�� ������� �ϴ� VectorClass, ListClass ����
- main.cpp���� �������� Ȱ���� �׽�Ʈ
  - c++ Style Casting ��� static_cast, dynamic_cast���
- ������ Ŭ������ ���� namespace �����
*/
int main() {
	int key, number;
	
	//�Ϲ����� ���� ��ü ����
	//VectorClass data;
	//ListClass data;

	
	//DataClass* obj = new VectorClass(); //�Ұ����� ������ �ƴ���? => �׷��� ������ ĳ���� �� �ʿ�Oo
	//DataClass* data = dynamic_cast<VectorClass>(obj);

	DataClass* obj = new list::ListClass();
	vector::VectorClass* data = reinterpret_cast<vector::VectorClass*>(obj);
	//reinterpret_cast�� ����. ���� �� ���� ���� ���� ==> static�̶� dynamic����...


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