#include "Header.h"

	//서식지정자
		 //문장안에서 데이터을인식합니다
		 //%d:정수 %f 실수 %c 문자 %s 문자
	 //변수 데이터을저장하는공간
	 //만드는방법
	//int 정수 float 실수 char 문자[]문장
int main() {
	//만약에 현재50분이라면 "쉬는시간"을 출력합니다
	//50분인경우

	int minute;
	scanf("%d",&minute);
	//scanf는stdio 전용 사용

	if (minute == 50);
	printf("쉬는시간은\n, %d분마다쉰다", minute);

	return 0;

}