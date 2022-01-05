#include<iostream>
#include<cassert>
#include<algorithm>
#include "DataClass.h"
/*
2단계 과제
- GetData(int idex) : CallByReference로 만들어 보기, index 초과할 return false; / 성공할 경우 return true;
- DataClass 인터페이스화 - virtual 키워드 활용
- DataClass를 기반으로 하는 VectorClass, ListClass 구현
- main.cpp에서 다형성을 활용한 테스트
  - c++ Style Casting 사용 static_cast, dynamic_cast등등
- 구현된 클래스를 묶는 namespace 만들기
*/