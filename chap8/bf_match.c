#include <stdio.h>

int bf_match(const char *txt, const char *pat){
	int pt = 0;
	int pp = 0;
	
	while(txt[pt] && pat[pp]){
		if(txt[pt] == pat[pp]){
			pt++;
			pp++;
		}else{
			pt = pt-pp+1;
			pp = 0;
		}
	}
	if(!pat[pp])
		return pt-pp;
		return -1;
	
	
}

int main (){
	int idx;
	char s1[256], s2[256];
	printf("텍스트: ");
	scanf("%s", s1);
	printf("패턴: ");
	scanf("%s", s2);
	
	idx = bf_match(s1,s2);
	
	if(idx == -1){
		printf("텍스트 패턴에 실패했습니다.");
	}
	else{
		printf("%d번째 문자부터 match합니다",idx+1);
	}
}