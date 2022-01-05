#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cassert>
#include "DataClass.h"
#include "VectorClass.h"
#include "ListClass.h"
/*
2단계 과제
- GetData(int idex) : CallByReference로 만들어 보기, index 초과할 return false; / 성공할 경우 return true;
- DataClass 인터페이스화 - virtual 키워드 활용
- DataClass를 기반으로 하는 VectorClass, ListClass 구현
- main.cpp에서 다형성을 활용한 테스트
  - c++ Style Casting 사용 static_cast, dynamic_cast등등
- 구현된 클래스를 묶는 namespace 만들기
*/
int main() {
	int key, number;
	
	//일반적인 정적 객체 생성
	//VectorClass data;
	//ListClass data;

	
	//DataClass* obj = new VectorClass(); //불가능한 구조가 아닌지? => 그래서 강제로 캐스팅 할 필요Oo
	//DataClass* data = dynamic_cast<VectorClass>(obj);

	DataClass* obj = new list::ListClass();
	vector::VectorClass* data = reinterpret_cast<vector::VectorClass*>(obj);
	//reinterpret_cast의 문제. 오류 못 잡을 수도 있음 ==> static이랑 dynamic으로...


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