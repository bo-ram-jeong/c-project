#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main2() {
	
	// ����1 ����
	int num1, pos1, wtime_sec1, wtime_min1, sec1, wtime_upmin1,extra_min1,
	in_time_h1, in_time_m1, out_time_h1, out_time_m1, out_time_s1, befo_pay1, aft_pay1, tax1;
	// ����2 ����
	int num2, pos2, wtime_sec2, wtime_min2, sec2, wtime_upmin2, extra_min2,
	in_time_h2, in_time_m2, out_time_h2, out_time_m2, out_time_s2, befo_pay2, aft_pay2, tax2;
	char dept1, dept2;

	printf("����1�� ����� �Է��ϼ��� : ");
	scanf("%d", &num1);
	printf("����1�� �ٹ��μ��� �Է��ϼ���(A-�����κ�, B-���ߺ�, C-�λ��) : ");
	scanf("\n%c", &dept1);
	printf("����1�� ������ �Է��ϼ���(1-���, 2-�븮, 3-����) : ");
	scanf("%d", &pos1);
	printf("����1�� ��ٽð��� �Է��ϼ���(ex.09 00) : ");
	scanf("%d %d", &in_time_h1, &in_time_m1);
	printf("����1�� �ٹ��ð�(��)�� �Է��ϼ��� : \n");
	scanf("%d", &wtime_sec1);

	/*printf("����2�� ����� �Է��ϼ��� : ");
	scanf("%d", &num2);
	printf("����2�� �ٹ��μ��� �Է��ϼ���(A-�����κ�, B-���ߺ�, C-�λ��) : ");
	scanf("\n%c", &dept2);
	printf("����2�� ������ �Է��ϼ���(1-���, 2-�븮, 3-����) : ");
	scanf("%d", &pos2);
	printf("����2�� ��ٽð��� �Է��ϼ���(ex.09 00) : ");
	scanf("%d %d", &in_time_h2, &in_time_m2);
	printf("����2�� �ٹ��ð�(��)�� �Է��ϼ��� : ");
	scanf("%d", &wtime_sec2);*/
	
	printf("\n================================\n");
	printf("����1\n���:%d\n", num1);
	if (dept1 == 'A') {
		printf("�ٹ��μ�:�����κ�\n");
	} else if(dept1 == 'B') {
		printf("�ٹ��μ�:���ߺ�\n");
	} else if (dept1 == 'C') {
		printf("�ٹ��μ�:�λ��\n");
	}
	
	wtime_min1 = wtime_sec1 / 60;
	sec1 = wtime_sec1 % 60;
	printf("�ٹ��ð�:%d�� %d��\n", wtime_min1, sec1);

	out_time_h1 = ((wtime_sec1 + 3600) / 3600)+in_time_h1;
	out_time_m1 = ((wtime_sec1 + 3600) % 3600)+in_time_m1;
	out_time_s1 = ((wtime_sec1 + 3600) % 3600);
	if (out_time_s1 > 60) {
		out_time_m1 + 1;
		out_time_s1 -= 60;
	}
	if (out_time_m1 > 60) {
		out_time_h1 + 1;
		out_time_m1 -= 60;
	}	
	printf("��ٽð�: %d�� %d�� %d��\n", out_time_h1, out_time_m1, out_time_s1);

	extra_min1 = wtime_min1 % 10;
	if (1 <= extra_min1 && extra_min1 <= 9) {
		wtime_upmin1 = wtime_min1 - extra_min1 + 10;
	}
	befo_pay1 = wtime_upmin1/10 * 10000;

	if (0 <= befo_pay1 && befo_pay1 <= 30000)
		tax1 = befo_pay1 * 0;
	else if (30000 <= befo_pay1 && befo_pay1 <= 70000)
		tax1 = 30000*0+((befo_pay1-30000) * 0.1);
	else if (70000 <= befo_pay1 && befo_pay1 <= 100000)
		tax1 = 30000 * 0 + (40000*0.1)+((befo_pay1 - 70000) * 0.2);
	else if (100000 <= befo_pay1)
		tax1 = 30000 * 0 + (40000 * 0.1) + (30000 * 0.2) + ((befo_pay1 - 100000) * 0.3);
	aft_pay1 = befo_pay1 - tax1;
	printf("�����ϱ޿�:%d\n", aft_pay1);


	/*printf("\n================================\n");
	printf("����2\n���:%d\n", num1);
	if (dept2 == 'A') {
		printf("�ٹ��μ�:�����κ�\n");
	}
	else if (dept2 == 'B') {
		printf("�ٹ��μ�:���ߺ�\n");
	}
	else if (dept2 == 'C') {
		printf("�ٹ��μ�:�λ��\n");
	}

	wtime_min2 = wtime_sec2 / 60;
	sec2 = wtime_sec2 % 60;
	printf("�ٹ��ð�:%d�� %d��\n", wtime_min2, sec2);

	out_time_h2 = ((wtime_sec2 + 3600) / 3600) + in_time_h2;
	out_time_m2 = ((wtime_sec2 + 3600) % 3600) + in_time_m2;
	out_time_s2 = ((wtime_sec2 + 3600) % 3600);
	if (out_time_s2 > 60) {
		out_time_m2 + 1;
		out_time_s2 -= 60;
	}
	if (out_time_m2 > 60) {
		out_time_h2 + 1;
		out_time_m2 -= 60;
	}
	printf("��ٽð�: %d�� %d�� %d��\n", out_time_h2, out_time_m2, out_time_s2);

	extra_min2 = wtime_min2 % 10;
	if (1 <= extra_min2 && extra_min2 <= 9) {
		wtime_upmin2 = wtime_min2 - extra_min2 + 10;
	}
	befo_pay2 = wtime_upmin2 / 10 * 10000;

	if (0 <= befo_pay2 && befo_pay2 <= 30000)
		tax2 = befo_pay2 * 0;
	else if (30000 <= befo_pay2 && befo_pay2 <= 70000)
		tax2 = 30000 * 0 + ((befo_pay2 - 30000) * 0.1);
	else if (70000 <= befo_pay2 && befo_pay2 <= 100000)
		tax2 = 30000 * 0 + (40000 * 0.1) + ((befo_pay2 - 70000) * 0.2);
	else if (100000 <= befo_pay2)
		tax2 = 30000 * 0 + (40000 * 0.1) + (30000 * 0.2) + ((befo_pay2 - 100000) * 0.3);
	aft_pay2 = befo_pay2 - tax2;
	printf("�����ϱ޿�:%d\n", aft_pay2);

	if (aft_pay2 < aft_pay2)
		printf("�޿��� �� ���� ������ ����� %d�̰� �����ϱ޿��� %d�̴�.\n", num2, aft_pay2);
		else
			printf("�޿��� �� ���� ������ ����� %d�̰� �����ϱ޿��� %d�̴�.\n", num1, aft_pay1);*/


	system("pause");
	return 0;
}
