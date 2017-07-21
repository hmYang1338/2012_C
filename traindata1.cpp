//#include "stdafx.h"
//#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
//#include <time.h>
#define MAX 5
#define SIZE 20
#define SPDSL 10
#define TMSL 10
#define DESSL 10
char *SPD[2]= { {"express"}, {"local"} };
char *TM[2] = { {"morning"}, {"evening"} };
char *DESTINATION[5]= { {"busan"}, {"daejun"}, {"daegu"}, {"ulsan"}, {"kwangju"} };

typedef struct {
	int NUM;
	char trainSPD[SPDSL];
	char trainTM[TMSL];
	char trainDES[DESSL];
	int SEAT[20];
}TRAIN_info;
TRAIN_info *train[60];
TRAIN_info *createTrain(){
	TRAIN_info *ptr;
	int i, s, t, d;
	for(i=0; i<60; i++){
		for(s=0; s<2; s++){
			for(t=0; t<2; t++){
				for(d=0;d<5;d++){
				train[i] = (TRAIN_info *)malloc( sizeof(TRAIN_info));
				train[i]->trainSPD[SPDSL] = *SPD[s];
				train[i]->trainTM[TMSL] = *TM[t];
				train[i]->trainDES[DESSL] = *DESTINATION[d];
				}
			}
		}
	}
	return ptr;
}
				
			


 // time.h 에 있는 함수 몇개를 조합해서 아래와 같은 함수를

// 만들 수 있습니다. ( 요일,  월, 일,  시, 분, 초, 년도 .. 순으로 출력됩니다. )
 
 
 /*
 char* current( void )
 {
      time_t t = time( NULL );
      struct tm* p = localtime( &t );
 

      return asctime( p );
 }
 
 
 
 int main(void)
 {
      printf( "current : %s\n",  current() );
 
      return 0;
 }
 */
int main(void)
{
	createTrain();
	return 0;
}
