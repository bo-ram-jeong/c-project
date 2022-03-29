#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main() {

	// 직원1 정보
	int num1, pos1, wtime_sec1, wtime_min1, sec1, wtime_upmin1, extra_min1,
		in_time_h1, in_time_m1, out_time_h1, out_time_m1, out_time_s1, befo_pay1;
	double aft_pay1, tax1;
	char dept1;
	// 직원2 정보
	int num2, pos2, wtime_sec2, wtime_min2, sec2, wtime_upmin2, extra_min2,
		in_time_h2, in_time_m2, out_time_h2, out_time_m2, out_time_s2, befo_pay2;
	double aft_pay2, tax2;
	char dept2;

	printf("직원1의 사번을 입력하세요 : ");
	scanf("%d", &num1);
	printf("직원1의 근무부서를 입력하세요(A-디자인부, B-개발부, C-인사부) : ");
	scanf("\n%c", &dept1);
	printf("직원1의 직급을 입력하세요(1-사원, 2-대리, 3-과장) : ");
	scanf("%d", &pos1);
	printf("직원1의 출근시간을 입력하세요(ex.09 00) : ");
	scanf("%d %d", &in_time_h1, &in_time_m1);
	printf("직원1의 근무시간(초)을 입력하세요 : ");
	scanf("%d", &wtime_sec1);

	printf("\n직원2의 사번을 입력하세요 : ");
	scanf("%d", &num2);
	printf("직원2의 근무부서를 입력하세요(A-디자인부, B-개발부, C-인사부) : ");
	scanf("\n%c", &dept2);
	printf("직원2의 직급을 입력하세요(1-사원, 2-대리, 3-과장) : ");
	scanf("%d", &pos2);
	printf("직원2의 출근시간을 입력하세요(ex.09 00) : ");
	scanf("%d %d", &in_time_h2, &in_time_m2);
	printf("직원2의 근무시간(초)을 입력하세요 : ");
	scanf("%d", &wtime_sec2);

	printf("\n================================\n");
	printf("직원1\n사번:%d\n", num1);
	if (dept1 == 'A') {
		printf("근무부서:디자인부\n");
	}
	else if (dept1 == 'B') {
		printf("근무부서:개발부\n");
	}
	else if (dept1 == 'C') {
		printf("근무부서:인사부\n");
	}

	wtime_min1 = wtime_sec1 / 60;
	wtime_sec1 = wtime_sec1 % 60;
	printf("근무시간:%d분 %d초\n", wtime_min1, wtime_sec1);

	out_time_h1 = wtime_min1 / 60 + in_time_h1;
	out_time_m1 = wtime_min1 % 60 + in_time_m1;
	out_time_s1 = wtime_sec1;

	if (out_time_m1 > 60) {
		out_time_h1 = out_time_m1 / 60 + out_time_h1;
		out_time_m1 = out_time_m1 % 60;
	}
	
	printf("퇴근시간: %d시 %d분 %d초\n", out_time_h1, out_time_m1, out_time_s1);

	extra_min1 = wtime_min1 % 10;
	if (extra_min1 <= 4) {
		wtime_upmin1 = wtime_min1 - extra_min1;
	}
	else {
		wtime_upmin1 = wtime_min1 + (10 - extra_min1);
	}
	
	befo_pay1 = wtime_upmin1 / 10 * 10000;
	tax1 = 0;
	if (30000 <= befo_pay1 && befo_pay1 <= 70000) {
		tax1 = (befo_pay1 - 30000) * 0.1;
	}
	else if (70000 <= befo_pay1 && befo_pay1 <= 100000) {
		tax1 = 4000 + (befo_pay1 - 70000) * 0.2;
	}
	else if (100000 <= befo_pay1) {
		tax1 = 10000 + ((befo_pay1 - 100000) * 0.3);
	}
	
	aft_pay1 = befo_pay1 - tax1;
	printf("세후일급여:%.3f\n", aft_pay1);


	printf("\n================================\n");
	printf("직원2\n사번:%d\n", num1);
	if (dept2 == 'A') {
		printf("근무부서:디자인부\n");
	}
	else if (dept2 == 'B') {
		printf("근무부서:개발부\n");
	}
	else if (dept2 == 'C') {
		printf("근무부서:인사부\n");
	}

	wtime_min2 = wtime_sec2 / 60;
	wtime_sec2 = wtime_sec2 % 60;
	printf("근무시간:%d분 %d초\n", wtime_min2, wtime_sec2);

	out_time_h2 = wtime_min2 / 60 + in_time_h2;
	out_time_m2 = wtime_min2 % 60 + in_time_m2;
	out_time_s2 = wtime_sec2;

	if (out_time_m2 > 60) {
		out_time_h2 = out_time_m2 / 60 + out_time_h2;
		out_time_m2 = out_time_m2 % 60;
	}

	printf("퇴근시간: %d시 %d분 %d초\n", out_time_h2, out_time_m2, out_time_s2);

	extra_min2 = wtime_min2 % 10;
	if (extra_min2 <= 4) {
		wtime_upmin2 = wtime_min2 - extra_min2;
	}
	else {
		wtime_upmin2 = wtime_min2 + (10 - extra_min2);
	}

	befo_pay2 = wtime_upmin2 / 10 * 10000;
	tax2 = 0;
	if (30000 <= befo_pay2 && befo_pay2 <= 70000) {
		tax2 = (befo_pay2 - 30000) * 0.1;
	}
	else if (70000 <= befo_pay2 && befo_pay2 <= 100000) {
		tax2 = 4000 + (befo_pay2 - 70000) * 0.2;
	}
	else if (100000 <= befo_pay2) {
		tax2 = 10000 + ((befo_pay2 - 100000) * 0.3);
	}

	aft_pay2 = befo_pay2 - tax2;
	printf("세후일급여:%.3f\n", aft_pay2);

	if (aft_pay1 < aft_pay2)
		printf("\n급여가 더 높은 직원의 사번은 %d이고 세후일급여는 %.3f이다.\n", num2, aft_pay2);
	else
		printf("\n급여가 더 높은 직원의 사번은 %d이고 세후일급여는 %.3f이다.\n", num1, aft_pay1);
	 
	system("pause");
	return 0;
}