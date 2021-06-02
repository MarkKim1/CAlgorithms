#include <stdio.h>
#include <string.h>

int kmp_match(const char txt[], const char pat[]){
	int pt = 1;
	int pp = 0;
	int skip[1024];
	
	skip[pt] = 0;
	
	while(!pat[pt]){
		if(pat[pt] == pat[pp])
			skip[++pt] = ++pp;
		else if(pp = 0)
			skip[++pt] = pp;
		else
			pp = skip[pp];
	}
	pt = pp = 0;
	while(txt[pt]&&pat[pp]){
		if(txt[pt] == pat[pp]){
			pt++; pp++;
		} else if(pp == 0)
			pt++;
		else
			pp = skip[pp];
	}
	if(!pat[pp])
		return pt-pp;
}

int main () {
	int idx;
	char s1[100];
	char s2[100];
	
	puts("KMP법");
	
	printf("텍스트 : ");
	scanf("%s",s1);
	
	printf("패턴: ");
	scanf("%s", s2);
	idx = kmp_match(s1,s2);
	if(idx == -1){
		printf("텍스트 페턴이 없습니다. ");
	}
	else{
		printf("%d번째 문자부터 match합니다", idx+1);
	}
	
	
}