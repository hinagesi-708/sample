/*#define *c JAN
#define **cp FEB
#define ***cpp MAR
#define ****cppp APR
#define *****cpppp MAY

#define ******cppppp JUN
#define *******cpppppp JUL
#define ********cppppppp AUG
#define *********cpppppppp SEP
#define **********cppppppppp OCT

#define ***********cpppppppppp NOV
//#define ************cppppppppppp DEC
*/
#define PR(format,value) printf(#value"%"#format"\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,x1),NL

#include <stdio.h>
#include <string.h>
#include "defs.h"
//#include <shlobj.h>

/*
struct S1{
	char *s;
//	int hoge;
	struct S1 *slp;
};

int main(void){
	int check;
	char ans;
	//1�Ԃ̎���
	while (check == 0){
		printf("�y��f�f�`!!�Y�o��!���Ȃ��̃L�����ǂ̊y��?\n�͂���y ��������n �œ����Ă˂�!!\n");
		printf("�q���̂���搶�Ɍ��ȗp������������ꂽ\nyes??no??");
		ans = getchar();
		if (ans == 'y'){
			check = 1;
			static struct S1 a[] = {
				{ "", a + 1 }
			};
		}
		else if (ans == 'n'){
			check = 1;
			static struct S1 a[] = {
				{ "�ٰ�", a + 1 }
			};
		else{
			printf("y��n�œ����Ă�!!\n");
			check = 0;
		}
	}
	static struct S1 a[0] = {
		{ "�ٰ�" }
	};


}
*/

/*char *c[] = {
	"�ٰ�",
	"���޴",
	"���ȯ�",
	"���̫�",
	"̧�ޯ�",

	"���",
	"����߯�",
	"����ް�",
	"í��ޥ�����޽",
	"հ̫Ʊ�",

	"�߰�����",
	"����",
};

char **cp[] = { c, c + 1, c + 2, c + 3, c + 4, c + 5, c + 6, c + 7, c + 8, c + 9, c + 10, c + 11 };
char ***cpp[] = { cp, cp + 1, cp + 2, cp + 3, cp + 4, cp + 5, cp + 6, cp + 7, cp + 8, cp + 9, cp + 10, cp + 11 };
char ****cppp[] = { cpp, cpp + 1, cpp + 2, cpp + 3, cpp + 4, cpp + 5, cpp + 6, cpp + 7, cpp + 8, cpp + 9, cpp + 10, cpp + 11 };
char *****cpppp[] = { cppp, cppp + 1, cppp + 2, cppp + 3, cppp + 4, cppp + 5, cppp + 6, cppp + 7, cppp + 8, cppp + 9, cppp + 10, cppp + 11 };

char ******cppppp[] = { cpppp, cpppp + 1, cpppp + 2, cpppp + 3, cpppp + 4, cpppp + 5, cpppp + 6, cpppp + 7, cpppp + 8, cpppp + 9, cpppp + 10, cpppp + 11 };
char *******cpppppp[] = { cppppp, cppppp + 1, cppppp + 2, cppppp + 3, cppppp + 4, cppppp + 5, cppppp + 6, cppppp + 7, cppppp + 8, cppppp + 9, cppppp + 10, cppppp + 11 };
char ********cppppppp[] = { cpppppp, cpppppp + 1, cpppppp + 2, cpppppp + 3, cpppppp + 4, cpppppp + 5, cpppppp + 6, cpppppp + 7, cpppppp + 8, cpppppp + 9, cpppppp + 10, cpppppp + 11 };
char *********cpppppppp[] = { cppppppp, cppppppp + 1, cppppppp + 2, cppppppp + 3, cppppppp + 4, cppppppp + 5, cppppppp + 6, cppppppp + 7, cppppppp + 8, cppppppp + 9, cppppppp + 10, cppppppp + 11 };
char **********cppppppppp[] = { cpppppppp, cpppppppp + 1, cpppppppp + 2, cpppppppp + 3, cpppppppp + 4, cpppppppp + 5, cpppppppp + 6, cpppppppp + 7, cpppppppp + 8, cpppppppp + 9, cpppppppp + 10, cpppppppp + 11 };

//char ***********cpppppppppp[] = { cppppppppp, cppppppppp + 1, cppppppppp + 2, cppppppppp + 3, cppppppppp + 4, cppppppppp + 5, cppppppppp + 6, cppppppppp + 7, cppppppppp + 8, cppppppppp + 9, cppppppppp + 10, cppppppppp + 11 };
char ***********cpppppppppp = cppppppppp;

*/

/*sturuct sanp {
	char *s;
	struct S2 *yes;		//yes
	struct S2 *no;		//no
	int i;
};
*/
struct S1{
//	char *s;
//	char *s;
	char *s;
	struct S2 *yes;		//yes
	struct S2 *no;		//no
	int i;
};
struct S2{
	char *ssl;
	struct S1 *hai;		//�͂�
	struct S1 *iie;		//������
	int j;
};


/*
struct S3{
	char *s;
};
*/

/*struct sanp{
	char *s;
	struct S2 *yes;		//yes
	struct S2 *no;		//no
	int i;
};
*/
int main(void){
/*	static struct S1 a[] = {
		{ "QUESTION:1", "�ٰ�", a + 1, a + 2 },			//a[0]
		{ "QUESTION:2", "���޴", a + 11, a + 10 },		//a[1]
		{ "QUESTION:3", "���ȯ�", a + 4, a + 5 },		//a[2]
		{ "QUESTION:4", "���̫�", a + 10, a + 15 },		//a[3]
		{ "QUESTION:5", "̧�ޯ�", a + 3, a + 15 },		//a[4]

		{ "QUESTION:6", "���", a + 11, a + 6 },			//a[5]
		{ "QUESTION:7", "����߯�", a + 10, a + 12 },		//a[6]
		{ "QUESTION:8", "����ް�", a + 9, a + 14 },		//a[7]
		{ "QUESTION:9", "í��ޥ�����޽", a + 9, a + 8 },	//a[8]
		{ "QUESTION:10", "հ̫Ʊ�", a + 13, a + 20 },		//a[9]

		{ "QUESTION:11", "�߰�����", a + 7, a + 9 },		//a[10]
		{ "QUESTION:12", "����", a + 12, a + 17 },		//a[11]
		{ "QUESTION:13", NULL, a + 9, a + 21 },			//a[12]
		{ "QUESTION:14", NULL, a + 7, a + 8 },			//a[13]
		{ "QUESTION:15", NULL, a + 7, a + 8 }, 			//a[14]

		{ "QUESTION:16", NULL, a + 6, a + 6 },			//a[15]
		{ "QUESTION:17", NULL, a + 19, a + 3 },			//a[16]
		{ "QUESTION:18", NULL, a + 0, a + 18 },			//a[17]
		{ "QUESTION:19", NULL, a + 1, a + 16 },			//a[18]
		{ "QUESTION:20", NULL, a + 4, a + 2 },			//a[19]

		{ "QUESTION:21", NULL, a + 5, a + 19 },			//a[20]
		{ "QUESTION:22", NULL, a + 2, a + 18 }, 		//a[21]
	};
*/
	/*
	static struct S1 a[] = {
		{  a + 1, a + 2 },			//a[0] ����P
		{  a + 11, a + 10 },			//a[1]
		{  a + 4, a + 5 },			//a[2]
		{  a + 10, a + 15 },			//a[3]
		{  a + 3, a + 15 },			//a[4]

		{  a + 11, a + 6 },			//a[5]
		{  a + 10, a + 12 },			//a[6]
		{  a + 9, a + 14 },			//a[7]
		{  a + 9, a + 8 },			//a[8]
		{  a + 13, a + 20 },			//a[9]

		{  a + 7, a + 9 },			//a[10]
		{  a + 12, a + 17 },			//a[11]
	};
	*/
	/*
	static struct S1 a[] = {
		{ "QUESTION:1", a + 1, a + 2 },				//a[0]
		{ "QUESTION:2", a + 11, a + 10 },			//a[1]
		{ "QUESTION:3", a + 4, a + 5 },				//a[2]
		{ "QUESTION:4", a + 10, a + 15 },			//a[3]
		{ "QUESTION:5", a + 3, a + 15 },			//a[4]

		{ "QUESTION:6", a + 11, a + 6 },			//a[5]
		{ "QUESTION:7", a + 10, a + 12 },			//a[6]
		{ "QUESTION:8", a + 9, a + 14 },			//a[7]
		{ "QUESTION:9", a + 9, a + 8 },				//a[8]
		{ "QUESTION:10", a + 13, a + 20 },			//a[9]

		{ "QUESTION:11", a + 7, a + 9 },			//a[10]
		{ "QUESTION:12", a + 12, a + 17 },			//a[11]
		{ "QUESTION:13", a + 9, a + 21 },			//a[12]
		{ "QUESTION:14", a + 7, a + 8 },			//a[13]
		{ "QUESTION:15", a + 7, a + 8 }, 			//a[14]
		
		{ "QUESTION:16", a + 6, a + 6 },			//a[15]
		{ "QUESTION:17", a + 19, a + 3 },			//a[16]
		{ "QUESTION:18", a + 0, a + 18 },			//a[17]
		{ "QUESTION:19", a + 1, a + 16 },			//a[18]
		{ "QUESTION:20", a + 4, a + 2 },			//a[19]

		{ "QUESTION:21", a + 5, a + 19 },			//a[20]
		{ "QUESTION:22", a + 2, a + 18 }, 			//a[21]
	};
	*/
	/*
	static struct S2 a[] = {
		{ "����ɺ� �ݾ�� ���ֳ�ަ ��¹���", },
		{ "�ڦ ����ָ ˷��� ���� ζɺ���� �׾üϳֳ� ������ޯ�", },//yes no
		{ "TV����� ������ò� �������ަ �������", },
		{ "�׿� �� �޲�ײ", },//yes
		{ "�ު�ĺ������ �޲��", },

		{ "���� � ���� � ��Ը � �ݼޮ��ƭ� �� �ٺĶ� ���", },
		{ "�޿�ݽ���� �� ���޲Ħ ����� � �ӯ��Ķ� ��", },
		{ "�޼���Ĺ� � �ײ", },
		{ "����ް�� �ݼ�Է��� ������ ����Ķ� ��Ӳ� � �ӳ", },//yse no
		{ "�����޲ � �ް� � ���� �Ҽ��ֳ � �ӳ", },

		{ "ָ �� � �ֳ", },
		{ "����ذ� �� �������ި� � γ�� ��", },
		{ "ٽ������� � ү���ަ ���ɶ� ƶ��", },
		{ "���ݺ �� ϰ�ެ� � γ�� �ɼ���� � �ӳ", },//yes
		{ "��� � ���� �� �޷�", },

		{ "ճ�ޮ� � �² γ��� �ӳ", },//yes
		{ "������ ̼��� ������� ��", },
		{ "���ܾ�޶� �� ��׽� 10���ϴ � ��", },//yes
		{ "���ź��� ָ �ײ׽�", },//yes
		{ "��̸� ̺�� ����� �м�� ���ܳ ��� �ò�", },//yes no

		{ "��޼�ɦ �¹�ɶ� �Բ", },//yes
		{ "�ް�� � Է��� ��� ��ݿ�� � ���� � γ�� �ޯĽ�", },//yes
	};
	*/

//	static struct S1 a[] = {
	static struct sanp S1 a[] = {
		{ "����ɺ� �ݾ�� ���ֳ�ަ ��¹���",					 a + 1,		a + 2,		0	},
		{ "�ڦ ����ָ ˷��� ���� ζɺ���� �׾üϳֳ� ������ޯ�",		 a + 33,	a + 32,		1	},//yes33 no32
		{ "TV����� ������ò� �������ަ �������",				 a + 4,		a + 5,		2 	},
		{ "�׿� �� �޲�ײ",							 a + 32,	a + 15,		3	},//yes32
		{ "�ު�ĺ������ �޲��",							 a + 3,		a + 15,		4	},

		{ "���� � ���� � ��Ը � �ݼޮ��ƭ� �� �ٺĶ� ���",			 a + 11,	a + 6,		5	},
		{ "�޿�ݽ���� �� ���޲Ħ ����� � �ӯ��Ķ� ��",				 a + 10,	a + 12,		6	},
		{ "�޼���Ĺ� � �ײ",							 a + 9,		a + 14,		7	},
		{ "����ް�� �ݼ�Է��� ������ ����Ķ� ��Ӳ� � �ӳ",			 a + 31,	a + 30,		8	},//yse31 no30
		{ "�����޲ � �ް� � ���� �Ҽ��ֳ � �ӳ",				 a + 13,	a + 20,		9	},

		{ "ָ �� � �ֳ",							 a + 7,		a + 9,		10	},
		{ "����ذ� �� �������ި� � γ�� ��",					 a + 12,	a + 17,		11	},
		{ "ٽ������� � ү���ަ ���ɶ� ƶ��",					 a + 9,		a + 21,		12	},
		{ "���ݺ �� ϰ�ެ� � γ�� �ɼ���� � �ӳ",				 a + 29,	a + 8,		13	},//yes29
		{ "��� � ���� �� �޷�",							 a + 7,		a + 8,		14	},

		{ "ճ�ޮ� � �² γ��� �ӳ",						 a + 28,	a + 6,		15	},//yes28
		{ "������ ̼��� ������� ��",						 a + 19,	a + 3,		16	},
		{ "���ܾ�޶� �� ��׽� 10���ϴ � ��",					 a + 22,	a + 18,		17	},//yes22
		{ "���ź��� ָ �ײ׽�",							 a + 23,	a + 16,		18	},//yes23
		{ "��̸� ̺�� ����� �м�� ���ܳ ��� �ò�",				 a + 26,	a + 24,		19	},//yes26 no24

		{ "��޼�ɦ �¹�ɶ� �Բ",						 a + 27,	a + 19,		20	},//yes27
		{ "�ް�� � Է��� ��� ��ݿ�� � ���� � γ�� �ޯĽ�",			 a + 24,	a + 18,		21	},//yes24

		//**0~21,22~33***************************************************

		{ "�ٰ�",		 a + 22, a + 22, 23 },
		{ "���޴",		 a + 23, a + 23, 24 },
		{ "���ȯ�",		 a + 24, a + 24, 25 },

		{ "���̫�",		 a + 25, a + 25, 26 },
		{ "̧�ޯ�",		 a + 26, a + 26, 27 },
		{ "���",		 a + 27, a + 27, 28 },
		{ "����߯�",		 a + 28, a + 28, 29 },
		{ "����ް�",		 a + 29, a + 29, 30 },

		{ "í��ޥ�����޽",	 a + 30, a + 30, 31 },
		{ "հ̫Ʊ�",		 a + 31, a + 31, 32 },
		{ "�߰�����",		 a + 32, a + 32, 33 },
		{ "����",			 a + 33, a + 33, 34 },
	};

	static struct S2 a[] = {
		{ "����ɺ� �ݾ�� ���ֳ�ަ ��¹���",					 a + 1,		a + 2,		0	},
		{ "�ڦ ����ָ ˷��� ���� ζɺ���� �׾üϳֳ� ������ޯ�",		 a + 33,	a + 32,		1	},//yes33 no32
		{ "TV����� ������ò� �������ަ �������",				 a + 4,		a + 5,		2	},
		{ "�׿� �� �޲�ײ",							 a + 32,	a + 15,		3	},//yes32
		{ "�ު�ĺ������ �޲��",							 a + 3,		a + 15,		4	},

		{ "���� � ���� � ��Ը � �ݼޮ��ƭ� �� �ٺĶ� ���",			 a + 11,	a + 6,		5	},
		{ "�޿�ݽ���� �� ���޲Ħ ����� � �ӯ��Ķ� ��",				 a + 10,	a + 12,		6	},
		{ "�޼���Ĺ� � �ײ",							 a + 9,		a + 14,		7	},
		{ "����ް�� �ݼ�Է��� ������ ����Ķ� ��Ӳ� � �ӳ",			 a + 31,	a + 30,		8	},//yse31 no30
		{ "�����޲ � �ް� � ���� �Ҽ��ֳ � �ӳ",				 a + 13,	a + 20,		9	},

		{ "ָ �� � �ֳ",							 a + 7,		a + 9,		10	},
		{ "����ذ� �� �������ި� � γ�� ��",					 a + 12,	a + 17,		11	},
		{ "ٽ������� � ү���ަ ���ɶ� ƶ��",					 a + 9,		a + 21,		12	},
		{ "���ݺ �� ϰ�ެ� � γ�� �ɼ���� � �ӳ",				 a + 29,	a + 8,		13	},//yes29
		{ "��� � ���� �� �޷�",							 a + 7,		a + 8,		14	},

		{ "ճ�ޮ� � �² γ��� �ӳ",						 a + 28,	a + 6,		15	},//yes28
		{ "������ ̼��� ������� ��",						 a + 19,	a + 3,		16	},
		{ "���ܾ�޶� �� ��׽� 10���ϴ � ��",					 a + 22,	a + 18,		17	},//yes22
		{ "���ź��� ָ �ײ׽�",							 a + 23,	a + 16,		18	},//yes23
		{ "��̸� ̺�� ����� �м�� ���ܳ ��� �ò�",				 a + 26,	a + 24,		19	},//yes26 no24

		{ "��޼�ɦ �¹�ɶ� �Բ",						 a + 27,	a + 19,		20	},//yes27
		{ "�ް�� � Է��� ��� ��ݿ�� � ���� � γ�� �ޯĽ�",			 a + 24,	a + 18,		21	},//yes24

		//**0~21,22~33***************************************************

		{ "�ٰ�",		a + 22, a + 22,	23	},
		{ "���޴",		a + 23, a + 23,	24	},
		{ "���ȯ�",		a  +24, a + 24,	25	},

		{ "���̫�",		a + 25, a + 25,	26	},
		{ "̧�ޯ�",		a + 26, a + 26,	27	},
		{ "���",		a + 27, a + 27,	28	},
		{ "����߯�",		a + 28, a + 28,	29	},
		{ "����ް�",		a + 29, a + 29,	30	},

		{ "í��ޥ�����޽",	a + 30, a + 30,	31	},
		{ "հ̫Ʊ�",		a + 31, a + 31,	32	},
		{ "�߰�����",		a + 32, a + 32,	33	},
		{ "����",			a + 33, a + 33,	34	},
	};
	struct S1 *p = a;
	struct S2 *p = a;

//	int count = 0;
	int check = 0;
	char ans;

	printf("�y��f�f�`!!�Y�o��!���Ȃ��̃L�����ǂ̊y��?\n�͂���y ��������n �œ����Ă˂�!!\n");

	while (check == 0){
		PRINT1(s, *s1.s);
		ans = getchar();
		if (ans == 'y'){
//			count += 1;
			check = 1;
		}
		else if (ans == 'n'){
			check = 1;
		}
		else{
			printf("y��n�œ����Ă�!!\n");
			check = 0;
		}
	}


}
