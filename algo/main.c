#include <stdio.h>

void swap_ptr(char **s1, char **s2){
	char *tmp = *s1;
	*s1 = *s2;
	*s2 = tmp
}

int main ()
{
	char *s1 = "ABCD";
	char *s2 = "EFGH";
	
	printf("포인터 s1 은 \"%s\"를 가리킵니다\n", s1);
	printf("포인터 s2 은 \"%s\"를 가리킵니다\n", s2);
	
	swap_ptr(&s1, &s2);
	
	puts("\n포인터 s1과 s2 의 갑ㄳ을 서로 교환합니다.\n");
	
	printf("포인터 s1 은 \"%s\"를 가리킵니다\n", s1);
	printf("포인터 s2 은 \"%s\"를 가리킵니다\n", s2);
}