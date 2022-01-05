#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cassert>
#include "DataClass.h"
#include "VectorClass.h"
#include "ListClass.h"
/*
3단계 과제
- 구현한 클래스 템플릿화
- GetData(int index) - std::optional 사용해서 개선해보기, call by reference 방식 제거
- 'auto'키워드 적극 활용해보기
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
			std::cout << "프로그램 종료" << std::endl;
			return 0;
			break;
		case 1:
			std::cout << "추가할 정수 입력: ";
			std::cin >> number;
			data->Add(number);
			break;
		case 2:
			std::cout << "삭제할 정수 입력: ";
			std::cin >> number;
			data->Delete(number);
			break;
		case 3:
			std::cout << "현재 데이터 수: " << data->GetSize() << "개" << std::endl;
			break;
		case 4:
			data->Print();
			break;
		case 5:
			std::cout << "조회할 인덱스 입력: ";
			std::cin >> number;
			if (data->GetData(number)) {
				std::cout << "해당 인덱스에 값이 존재합니다." << std::endl;
				break;
			}
			std::cout << "해당 인덱스에 값이 존재하지 않습니다." << std::endl;
			break;
		default:
			std::cout << "입력 오류" << std::endl;
			assert(0);
			break;
		}
		std::cout << std::endl;
	}
	return 0;
}