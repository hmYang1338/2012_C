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
} member[100];                 //구조체 

char adminid[6]="admin";
char adminpw[5]="1234";        //사용자

void New(){       //회원가입, 구조체로서 입력받아 저장. 구조체안에서 포인터를이용하여 열차데이터를 저장할곳을 가리킨다.
	int i=0;
	//FILE *clients;

	printf("new아이디:");
	gets(member[i].nid);
	printf("new비밀번호:");
	gets(member[i].npw);
	i++;

	printf("가입을 축하드립니다!\n\n");
}
    //fopen=("c:\\client", "w");

                                               //계획 : fprintf문 이용, 구조체의 내용을 파일에 저장한다.

void Login(){      //로그인, for문안에서 if문을 통해 회원정보 데이터와 매칭. 틀렸을경우 각 입력화면으로 돌아가도록 작성, 일치할경우 다음화면으로이동
	int matchid, matchpw;
	int i=0, j;

	printf("아이디: ");
	gets(member[i].id);
	printf("비밀번호: ");
	gets(member[i].pw);
	i++;

	for(i=0; i<101; i++){
		for(j=0; j<101; j++){
		matchid = strcmp(member[j].id, member[i].nid);
		matchpw = strcmp(member[j].pw, member[i].npw);
		}
	}

	
		if(matchpw==0&&matchid==0){
			printf("로그인 성공!\n");
			//system("cls");
			                             
   		
		
		}
 
		else if(matchpw==!0 || matchid==!0) {
			printf("다시 입력하세요.\n\n");
		}
	}
	


void Check(){ //매출내역확인:특정 일자/열차 기종별 발권 현황 및 총 매출내역을 확인한다.
	          //해당file이용 
	printf("매출내역확인\n");
}

void Lost(){ //분실물 현황:분실신고자의 인적사항(성별), 분실품목, 분실위치 등에대한 정보를 조회한다.
	         //해당 file이용 
	printf("분실물 현황\n");
}

void Price(){ //단가설정:특정요금에대한 변경이 가능하다.
	printf("단가설정\n");
}

int rootMenu(){
	int choice;
	int C;

	while(1){
		printf("1. 매출내역확인\n");
		printf("2. 분실물 현황\n");
		printf("3. 단가설정\n");
		printf("4. 로그아웃\n");  
		printf("선택: ");
		C=scanf("%d", &choice);
		fflush(stdin);
		
		if(C!=1) printf("숫자를 입력하세요.\n\n");
		else {
			if(choice>=1 && choice<=4) break;
			else printf("1부터 4사이의 값을 입력하세요.\n\n");
		}
	}
	return choice;
}

void Root(){ 
	int menu;
	int i=0;
	int matchid, matchpw;
	
	printf("아이디 : ");
	gets(member[i].rootid);
	printf("비밀번호 : ");
	gets(member[i].rootpw);
	i++;

	for(i=0; i<101; i++){
		matchid=strcmp(member[i].rootid, adminid);
		matchpw=strcmp(member[i].rootpw, adminpw);
	}

	if(matchid==0)
		if(matchpw==0){
			printf("로그인 성공!\n\n");
			while(1){
				menu=rootMenu();
		
				if(menu==4){
					printf("로그아웃 되었습니다.\n\n");
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
		else printf("비밀번호를 다시 입력하세요.\n\n");
	else printf("아이디를 다시 입력하세요.\n\n");
}

int getMenu(){
	int choice;
	int C;

	while(1){
		printf("1. 회원가입\n");
		printf("2. 로그인\n");
		printf("3. 관리자 로그인\n");
		printf("4. 종료\n");
		printf("선택: ");
		C=scanf("%d", &choice);
		fflush(stdin);
		
		if(C!=1) printf("숫자를 입력하세요.\n");
		else {
			if(choice>=1 && choice<=4) break;
			else printf("1부터 4사이의 값을 입력하세요.\n");
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