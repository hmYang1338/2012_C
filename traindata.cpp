//#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#define DATE 3
#define TOTAL 60
#define MAX 20

static struct TRAIN {
	int NUM;
	char SPD[10];
	char TM[10];
	char DESTINATION[10];
	int SEAT[20];
}train;
struct TRAIN train1 = {0, "express", "morning", "busan", 0 };
struct TRAIN train2 = {0, "express", "morning", "daejun", 0 };
struct TRAIN train3 = {0, "express", "morning", "daegu", 0 };
struct TRAIN train4 = {0, "express", "morning", "incheon", 0 };
struct TRAIN train5 = {0, "express", "morning", "kwangju", 0 };

struct TRAIN train6 = {0, "express", "afternoon", "busan", 0 };
struct TRAIN train7 = {0, "express", "afternoon", "daejun", 0 };
struct TRAIN train8 = {0, "express", "afternoon", "daegu", 0 };
struct TRAIN train9 = {0, "express", "afternoon", "incheon", 0 };
struct TRAIN train10 = {0, "express", "afternoon", "kwangju", 0 };

struct TRAIN train11 = {0, "local", "morning", "busan", 0 };
struct TRAIN train12 = {0, "local", "morning", "daejun", 0 };
struct TRAIN train13 = {0, "local", "morning", "daegu", 0 };
struct TRAIN train14 = {0, "local", "morning", "incheon", 0 };
struct TRAIN train15 = {0, "local", "morning", "kwangju", 0 };

struct TRAIN train16 = {0, "local", "afternoon", "busan", 0 };
struct TRAIN train17 = {0, "local", "afternoon", "daejun", 0 };
struct TRAIN train18 = {0, "local", "afternoon", "daegu", 0 };
struct TRAIN train19 = {0, "local", "afternoon", "incheon", 0 };
struct TRAIN train20 = {0, "local", "afternoon", "kwangju", 0 };

typedef struct{
	char *selectdate[TOTAL][DATE];
	struct TRAIN *train;
	//struct Date *next;
	//struct Date *prev;
	int next, prev;
} total;
total *createDate()
{
	total *Q;
 Q =(total *)malloc(sizeof(total));
 Q->next=-1;
 Q->prev=-1;
 return Q;
}
//void main(){
