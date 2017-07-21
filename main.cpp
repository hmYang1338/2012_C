#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#define RECSIZE 20

void main()
{
	FILE *infile;
	char buf[RECSIZE];
	int check, a=100, b;
	printf("\t===================================================\n");
	printf("\t== korail 어플리케이션에 접속하신것을 환영합니다 ==\n");
	printf("\t===================================================\n\n");
	while (1){
	printf("\t회원이시면 (1) 비회원 이시면 (2)를 입력해주십시오.\n\t : ");
	scanf("%d", &check);
	if(check == 1){
		infile=fopen("c:\\data.txt", "r");
		fgets(string, a,infile);
		fprintf(stdout, "%s", string );
		fclose(infile);
	}
	else if(check == 2){
		break;
	}
	else {
		printf("\t 잘못 입력하셨습니다.\n");
	}
	}
}