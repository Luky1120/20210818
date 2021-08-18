#include<stdio.h>

/*주어진 숫자만큼 #을 출력해 보세요*/
void ex1() {
	int num;
	printf("스템프 찍을 숫자를 입력 : ");
	scanf("%d", & num);

	if (num > 100000) {
		printf("허용범위를 넘었습니다.\n");
	}
	else {
		for (int i = 0; i < num; i++) {
			printf("#");
		}
	}

}

void ex2() {
	int p, k;
	int count = 0;
	printf("힌트 값 입력 : ");
	scanf("%d", &k);
	printf("입력할 비밀번호 : ");
	scanf("%d", &p);
	for (int i = k; i <= p; i++) {
		count++;
	}
	printf("비밀번호를 맞추는데 시도한 횟수 : %d ",count);
	

}

void ex3() {
	int n;

	printf("갯수 입력 : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == i) 
				printf("#");
			else
				printf("+");
			
		}
		printf("\n");
	}
}

int main(void) {
	int exnum;
	printf("예제 번호 입력 : ");
	scanf("%d", &exnum);

	switch (exnum)
	{
	case(1):
		ex1();
		break;
	case(2):
		ex2();
		break;
	case(3):
		ex3();
		break;
	}
	return 0;
}
