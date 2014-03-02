#define PR(format,value) printf(#value"%"#format"\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,x1),NL

#include <stdio.h>

typedef struct sanp{
	char s[55];		/* 質問→問題文、終端→終端楽器の名前 */
//	struct sanp *yes;	/* 質問→YES選択後の次の問題へのポインタ */
//	struct sanp *no;		/* 質問→NO選択後の次の問題へのポインタ */
	int yes;
	int no;
//	char n;			/* 質問/終端判定フラグ (質問→0、終端→終端楽器の番号) */
	int f;
} mondai;


int main(void){

	static struct sanp a[] = {
		{ "ｺﾄﾞﾓﾉｺﾛ ｾﾝｾｲﾆ ｲﾔﾅﾖｳｼﾞｦ ｲｲﾂｹﾗﾚﾀ"							, 1		, 2		, 0 },
		{ "ｿﾚｦ ｱｲｿｳﾖｸ ﾋｷｳｹﾃ ｼﾞﾂﾊ ﾎｶﾉｺﾄﾞﾓﾆ ﾔﾗｾﾃｼﾏｳﾖｳﾅ ｼﾞﾌﾞﾝﾀﾞｯﾀ"		, 33	, 32	, 0 },//yes33 no32
		{ "TVﾅﾄﾞﾃﾞ ｼｮｳｶｲｼﾃｲﾙ ｴｷﾍﾞﾝﾅﾄﾞｦ ﾀﾍﾞﾃﾐﾀｲ"						, 4		, 5		, 0 },
		{ "ﾏﾗｿﾝ ｶﾞ ﾀﾞｲｷﾗｲ"											, 32	, 15	, 0 },//yes32
		{ "ｼﾞｪｯﾄｺｰｽﾀｰｶﾞ ﾀﾞｲｽｷ"										, 3		, 15	, 0 },

		{ "ﾄﾞﾗﾏ ﾔ ｴｲｶﾞ ﾊ ｼｭﾔｸ ﾆ ｶﾝｼﾞｮｳｲﾆｭｳ ｼﾃ ﾐﾙｺﾄｶﾞ ｵｵｲ"			, 11	, 6		, 0 },
		{ "ｶﾞｿﾘﾝｽﾀﾝﾄﾞ ﾃﾞ ｱﾙﾊﾞｲﾄｦ ｼﾃﾐﾀｲ ﾄ ｵﾓｯﾀｺﾄｶﾞ ｱﾙ"				, 10	, 12	, 0 },
		{ "ﾃﾞｼﾞﾀﾙﾄｹｲ ﾊ ｷﾗｲ"											, 9		, 14	, 0 },
		{ "ｿﾌﾄﾎﾞｰﾙﾔ ﾅﾝｼｷﾔｷｭｳﾆ ｲｯｼｮｳｦ ｶｹﾙﾋﾄｶﾞ ｲﾃﾓｲｲ ﾄ ｵﾓｳ"			, 31	, 30	, 0 },//yse31 no30
		{ "ｼﾝﾊﾂﾊﾞｲ ﾉ ﾋﾞｰﾙ ﾊ ｲﾁﾄﾞ ﾀﾒｼﾃﾐﾖｳ ﾄ ｵﾓｳ"						, 13	, 20	, 0 },

		{ "ﾖｸ ﾐﾁ ﾆ ﾏﾖｳ"												, 7		, 9		, 0 },
		{ "ｱｲｽｸﾘｰﾑ ﾖﾘ ｱｲｽｷｬﾝﾃﾞｨｰ ﾉ ﾎｳｶﾞ ｽｷ"							, 12	, 17	, 0 },
		{ "ﾙｽﾊﾞﾝﾃﾞﾝﾊ ﾆ ﾒｯｾｰｼﾞｦ ｲﾚﾙﾉｶﾞ ﾆｶﾞﾃ"							, 9		, 21	, 0 },
		{ "ﾊﾟﾁﾝｺ ﾖﾘ ﾏｰｼﾞｬﾝ ﾉ ﾎｳｶﾞ ﾀﾉｼｿｳﾀﾞ ﾄ ｵﾓｳ"					, 29	, 8		, 0 },//yes29
		{ "ｽｷｰ ｶ ｽｹｰﾄ ｶﾞ ﾃﾞｷﾙ"										, 7		, 8		, 0 },

		{ "ﾕｳｼﾞｮｳ ﾆ ｱﾂｲ ﾎｳﾀﾞﾄ ｵﾓｳ"									, 28	, 6		, 0 },//yes28
		{ "ｴﾝﾋﾟﾂﾆ ﾌｼｷﾞﾄ ｱｲﾁｬｸｶﾞ ｱﾙ"									, 19	, 3		, 0 },
		{ "ﾏﾁｱﾜｾｼﾞｶﾝ ﾆﾊ ｶﾅﾗｽﾞ 10ﾌﾟﾝﾏｴ ﾆ ｲｸ"							, 22	, 18	, 0 },//yes22
		{ "ｻｻｲﾅｺﾄﾃﾞ ﾖｸ ｲﾗｲﾗｽﾙ"										, 23	, 16	, 0 },//yes23
		{ "ｺｳﾌｸﾓ ﾌｺｳﾓ ﾋﾄﾘﾃﾞ ｶﾐｼﾒﾃ ｱｼﾞﾜｳ ｺﾄﾆ ｼﾃｲﾙ"					, 26	, 24	, 0 },//yes26 no24

		{ "ｻｶﾞｼﾓﾉｦ ﾐﾂｹﾙﾉｶﾞ ﾊﾔｲ"										, 27	, 19	, 0 },//yes27
		{ "ﾋﾞｰﾌﾝ ﾔ ﾔｷｿﾊﾞ ﾖﾘﾓ ﾆﾎﾝｿﾊﾞ ﾔ ｿｳﾒﾝ ﾉ ﾎｳｶﾞ ｽﾞｯﾄｽｷ"			, 24	, 18	, 0 },//yes24

		//**0~21,22~33***************************************************

		{ "ﾌﾙｰﾄ"			, 22	, 22	, 1 },
		{ "ｵｰﾎﾞｴ"			, 23	, 23	, 1 },
		{ "ｸﾗﾘﾈｯﾄ"			, 24	, 24	, 1 },

		{ "ｻｸｿﾌｫﾝ"			, 25	, 25	, 1 },
		{ "ﾌｧｺﾞｯﾄ"			, 26	, 26	, 1 },
		{ "ﾎﾙﾝ"				, 27	, 27	, 1 },
		{ "ﾄﾗﾝﾍﾟｯﾄ"			, 28	, 28	, 1 },
		{ "ﾄﾛﾝﾎﾞｰﾝ"			, 29	, 29	, 1 },
		
		{ "ﾃｭｰﾊﾞ･ｺﾝﾄﾗﾊﾞｽ"	, 30	, 30	, 1 },
		{ "ﾕｰﾌｫﾆｱﾑ"			, 31	, 31	, 1 },
		{ "ﾊﾟｰｶｯｼｮﾝ"		, 32	, 32	, 1 },
		{ "ｼｷｼｬ"			, 33	, 33	, 1 },
	};

	struct sanp *now = a;

	printf("楽器診断!ズバリ!!あなたのキャラどの楽器??\nはい→y いいえ→n で答えてねっ!!\n");
	//	int count = 0;
	int check = 0;
	char ans;
	int i = 0;

	
	do{
		while (check == 0){
			PRINT1(s, (a[i].s));
			//		PRINT1(s, now->s);
			ans = getchar();
			if (ans == 'y'){
				//			count += 1;
				check = 1;
				i = (a[i].yes);
			}
			else if (ans == 'n'){
				check = 1;
				i = (a[i].no);
			}
			else{
				printf("yかnで答えてね！！\n");
				check = 0;
			}
		}
	} while (a[i].f == 0);

	PRINT1(s, a[i].s);

	return 0;
}
