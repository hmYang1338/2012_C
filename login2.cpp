#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

static struct idpw{  
	char *nid[10];
	char *npw[12];
	char id[10];
	char pw[12];
	char rootid[10];
	char rootpw[12];
} member[100];                 //����ü 

char adminid[6]="admin";
char adminpw[5]="1234";        //�����

void New(){       //ȸ������, ����ü�μ� �Է¹޾� ����. ����ü�ȿ��� �����͸��̿��Ͽ� ���������͸� �����Ұ��� ����Ų��.
	int i=0;
	//FILE *clients;

	printf("new���̵�:");
	gets(member[i].nid);
	printf("new��й�ȣ:");
	gets(member[i].npw);
	i++;

	printf("������ ���ϵ帳�ϴ�!\n\n");
}
    //fopen=("c:\\client", "w");

                                               //��ȹ : fprintf�� �̿�, ����ü�� ������ ���Ͽ� �����Ѵ�.

void Login(){      //�α���, for���ȿ��� if���� ���� ȸ������ �����Ϳ� ��Ī. Ʋ������� �� �Է�ȭ������ ���ư����� �ۼ�, ��ġ�Ұ�� ����ȭ�������̵�
	int matchid, matchpw;
	int i=0, j;

	printf("���̵�: ");
	gets(member[i].id);
	printf("��й�ȣ: ");
	gets(member[i].pw);
	i++;

	for(i=0; i<101; i++){
		for(j=0; j<101; j++){
		matchid = strcmp(member[j].id, member[i].nid);
		matchpw = strcmp(member[j].pw, member[i].npw);
		}
	}

	
		if(matchpw==0&&matchid==0){
			printf("�α��� ����!\n");
			//system("cls");
			                             
   		
		
		}
 
		else if(matchpw==!0 || matchid==!0) {
			printf("�ٽ� �Է��ϼ���.\n\n");
		}
	}
	


void Check(){ //���⳻��Ȯ��:Ư�� ����/���� ������ �߱� ��Ȳ �� �� ���⳻���� Ȯ���Ѵ�.
	          //�ش�file�̿� 
	printf("���⳻��Ȯ��\n");
}

void Lost(){ //�нǹ� ��Ȳ:�нǽŰ����� ��������(����), �н�ǰ��, �н���ġ ����� ������ ��ȸ�Ѵ�.
	         //�ش� file�̿� 
	printf("�нǹ� ��Ȳ\n");
}

void Price(){ //�ܰ�����:Ư����ݿ����� ������ �����ϴ�.
	printf("�ܰ�����\n");
}

int rootMenu(){
	int choice;
	int C;

	while(1){
		printf("1. ���⳻��Ȯ��\n");
		printf("2. �нǹ� ��Ȳ\n");
		printf("3. �ܰ�����\n");
		printf("4. �α׾ƿ�\n");  
		printf("����: ");
		C=scanf("%d", &choice);
		fflush(stdin);
		
		if(C!=1) printf("���ڸ� �Է��ϼ���.\n\n");
		else {
			if(choice>=1 && choice<=4) break;
			else printf("1���� 4������ ���� �Է��ϼ���.\n\n");
		}
	}
	return choice;
}

void Root(){ 
	int menu;
	int i=0;
	int matchid, matchpw;
	
	printf("���̵� : ");
	gets(member[i].rootid);
	printf("��й�ȣ : ");
	gets(member[i].rootpw);
	i++;

	for(i=0; i<101; i++){
		matchid=strcmp(member[i].rootid, adminid);
		matchpw=strcmp(member[i].rootpw, adminpw);
	}

	if(matchid==0)
		if(matchpw==0){
			printf("�α��� ����!\n\n");
			while(1){
				menu=rootMenu();
		
				if(menu==4){
					printf("�α׾ƿ� �Ǿ����ϴ�.\n\n");
					break;
				}
				switch(menu){
				case 1:
					Check();
					break;
				case 2:
					Lost();
					break;
				case 3:
					Price();
					break;
				}
			}
		}
		else printf("��й�ȣ�� �ٽ� �Է��ϼ���.\n\n");
	else printf("���̵� �ٽ� �Է��ϼ���.\n\n");
}

int getMenu(){
	int choice;
	int C;

	while(1){
		printf("1. ȸ������\n");
		printf("2. �α���\n");
		printf("3. ������ �α���\n");
		printf("4. ����\n");
		printf("����: ");
		C=scanf("%d", &choice);
		fflush(stdin);
		
		if(C!=1) printf("���ڸ� �Է��ϼ���.\n");
		else {
			if(choice>=1 && choice<=4) break;
			else printf("1���� 4������ ���� �Է��ϼ���.\n");
		}
	}
	return choice;
}

void main(){
	int menu;

	while(1){
		menu=getMenu();
		
		if(menu==4) break;
		switch(menu){
		case 1:
			New();
			break;
		case 2:
			Login();
			break;
		case 3:
			Root();
			break;
		}
	}
}