/*print2.c--����printf()������*/
#include<stdio.h>
int main(void) {
	unsigned int un = 3000000000;/*intΪ32λ��shortΪ16λ��ϵͳ*/
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("very = %lld nad not %ld\n", verybig, verybig);

	return 0;
}
//���н��:
//un = 3000000000 and not - 1294967296
//end = 200 and 200
//big = 65537 and not 1
//very = 12345678908642 nad not 1942899938