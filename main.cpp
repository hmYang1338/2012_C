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
	printf("\t== korail ���ø����̼ǿ� �����ϽŰ��� ȯ���մϴ� ==\n");
	printf("\t===================================================\n\n");
	while (1){
	printf("\tȸ���̽ø� (1) ��ȸ�� �̽ø� (2)�� �Է����ֽʽÿ�.\n\t : ");
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
		printf("\t �߸� �Է��ϼ̽��ϴ�.\n");
	}
	}
}