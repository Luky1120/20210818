#include<stdio.h>

/*�־��� ���ڸ�ŭ #�� ����� ������*/
void ex1() {
	int num;
	printf("������ ���� ���ڸ� �Է� : ");
	scanf("%d", & num);

	if (num > 100000) {
		printf("�������� �Ѿ����ϴ�.\n");
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
	printf("��Ʈ �� �Է� : ");
	scanf("%d", &k);
	printf("�Է��� ��й�ȣ : ");
	scanf("%d", &p);
	for (int i = k; i <= p; i++) {
		count++;
	}
	printf("��й�ȣ�� ���ߴµ� �õ��� Ƚ�� : %d ",count);
	

}

void ex3() {
	int n;

	printf("���� �Է� : ");
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
	printf("���� ��ȣ �Է� : ");
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
