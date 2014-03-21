#pragma warning(disable:4996)

#define PR(format,value) printf(#value"%"#format"\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,x1),NL

#include <stdio.h>
#include <direct.h>
#include <string.h>

typedef struct sanp{
	const char s[110];		/* 質問→問題文、終端→終端楽器の名前 */
//	struct sanp *yes;	/* 質問→YES選択後の次の問題へのポインタ */
//	struct sanp *no;		/* 質問→NO選択後の次の問題へのポインタ */
	int yes;
	int no;
//	char n;			/* 質問/終端判定フラグ (質問→0、終端→終端楽器の番号) */
	int f;
} mondai;


int main(void){
	int check = 0;
	char ans;
	int i = 0;

/*	char szCurDir[1024];
	char szOldFile[1024];
	char szNewFile[1024];

/* 初期化 
	memset(szCurDir, 0, 1024);
	memset(szOldFile, 0, 1024);
	memset(szNewFile, 0, 1024);
*/
	FILE *fp;
	char *fname22 = "gakki_22.txt";
	char *fname23 = "gakki_23.txt";
	char *fname24 = "gakki_24.txt";

	char *fname25 = "gakki_25.txt";
	char *fname26 = "gakki_26.txt";
	char *fname27 = "gakki_27.txt";
	char *fname28 = "gakki_28.txt";
	char *fname29 = "gakki_29.txt";

	char *fname30 = "gakki_30.txt";
	char *fname31 = "gakki_31.txt";
	char *fname32 = "gakki_32.txt";
	char *fname33 = "gakki_33.txt";
	int c;


	static struct sanp a[] = {
		{ "子供のころ先生に嫌な用事を言いつけられた。"									, 1		, 2		, 0 },
		{ "それを愛想よく引き受けて実はほかの子供にやらせてしまうような自分だった。"	, 33	, 32	, 0 },//yes33 no32
		{ "ＴＶなどで紹介している駅弁などを食べてみたい。"								, 4		, 5		, 0 },
		{ "マラソンが大嫌い。"															, 32	, 15	, 0 },//yes32
		{ "ジェットコースターが大好き。"												, 3		, 15	, 0 },

		{ "ドラマや映画は主役に感情移入してみることが多い。"							, 11	, 6		, 0 },
		{ "ガソリンスタンドでアルバイトをしてみたいと思ったことがある。"				, 10	, 12	, 0 },
		{ "デジタル時計は嫌い。"														, 9		, 14	, 0 },
		{ "ソフトボールや軟式野球に一生をかける人がいてもいいと思う。"					, 31	, 30	, 0 },//yse31 no30
		{ "新発売のジュースは一度試してみたいと思う。"									, 13	, 20	, 0 },

		{ "よく道に迷う。"																, 7		, 9		, 0 },
		{ "アイスクリームよりアイスキャンディのほうが好き。"							, 12	, 17	, 0 },
		{ "留守番電話にメッセージを入れるのが苦手。"									, 9		, 21	, 0 },
		{ "スマホゲームよりカードゲームのほうが楽しそうだと思う。"						, 29	, 8		, 0 },//yes29
		{ "スキーかスケートができる。"													, 7		, 8		, 0 },

		{ "友情に熱いほうだと思う。"													, 28	, 6		, 0 },//yes28
		{ "鉛筆に不思議と愛着がある。"													, 19	, 3		, 0 },
		{ "待ち合わせ時間には必ず10分前に行く。"										, 22	, 18	, 0 },//yes22
		{ "些細なことでよくイライラする。"												, 23	, 16	, 0 },//yes23
		{ "幸福も不幸も一人で噛みしめて味わうことにしている。"							, 26	, 24	, 0 },//yes26 no24

		{ "探し物を見つけるのが早い。"													, 27	, 19	, 0 },//yes27
		{ "ビーフンや焼きそばより日本蕎麦やそうめんのほうがずっと好き。"				, 24	, 18	, 0 },//yes24

		//**0~21,22~33***************************************************

		{ "フルートがあなたのキャラっ(かも??)"					, 22	, 22	, 1 },
		{ "オーボエがあなたのキャラっ(かも??)"					, 23	, 23	, 1 },
		{ "クラリネットがあなたのキャラっ(かも??)"				, 24	, 24	, 1 },

		{ "サクソフォンがあなたのキャラっ(かも??)"				, 25	, 25	, 1 },
		{ "ファゴットがあなたのキャラっ(かも??)"				, 26	, 26	, 1 },
		{ "ホルンがあなたのキャラっ(かも??)"					, 27	, 27	, 1 },
		{ "トランペットがあなたのキャラっ(かも??)"				, 28	, 28	, 1 },
		{ "トロンボーンがあなたのキャラっ(かも??)"				, 29	, 29	, 1 },
		
		{ "テューバorコントラバスがあなたのキャラっ(かも??)"	, 30	, 30	, 1 },
		{ "ユーフォニアムがあなたのキャラっ(かも??)"			, 31	, 31	, 1 },
		{ "パーカッションがあなたのキャラっ(かも??)"			, 32	, 32	, 1 },
		{ "ずばり!指揮者があなたのキャラっ(かも??)"				, 33	, 33	, 1 },
	};

	struct sanp *now = a;

	printf("楽器診断!ズバリ!!あなたのキャラどの楽器??\nはい→y いいえ→n で答えてねっ!!\n");
	//	int count = 0;
	
	do{
//	while (a[i].f == 0){
		check = 0;
//		printf("ばーか\n");
		while (check == 0){
			//		if (check == 0){
			PRINT1(s, (a[i].s));
			//		PRINT1(s, now->s);
			ans = getchar(); while (getchar() != '\n');
			if (ans == 'y'){
				check = 1;
				i = (a[i].yes);
				printf("OK: YESですね。\n");
//				printf("%d\n", i);
//				printf("%d\n", a[i].f);
			}
			else if (ans == 'n'){
				check = 1;
				i = (a[i].no);
				printf("OK: NOですね。\n");
			}
			else{
				printf("yかnで答えてね！！\n");
				check = 0;
			}
		}
		} while ((a[i].f) == 0);
//	}

	PRINT1(s, a[i].s);

//	szCurDir = gakki_(a[i].yes).txt
//**********
	if (a[i].yes == 22){
		fp = fopen(fname22, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname22);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}
	else if (a[i].yes == 23){
		fp = fopen(fname23, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname23);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}
	else if (a[i].yes == 24){
		fp = fopen(fname24, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname24);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}

	else if (a[i].yes == 25){
		fp = fopen(fname25, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname25);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}
	else if (a[i].yes == 26){
		fp = fopen(fname26, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname26);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}
	else if (a[i].yes == 27){
		fp = fopen(fname27, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname27);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}
	else if (a[i].yes == 28){
		fp = fopen(fname28, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname28);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}
	else if (a[i].yes == 29){
		fp = fopen(fname29, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname29);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}

	else if (a[i].yes == 30){
		fp = fopen(fname30, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname30);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}
	else if (a[i].yes == 31){
		fp = fopen(fname31, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname31);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}
	else if (a[i].yes == 32){
		fp = fopen(fname32, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname32);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}
	else if (a[i].yes == 33){
		fp = fopen(fname33, "r");
		if (fp == NULL){
			printf("%sファイルが開けません\n", fname33);
			return -1;
		}

		printf("\n-- fgetc() --\n");
		while ((c = fgetc(fp)) != EOF){
			printf("%c", c);
		}

		fclose(fp);
		return 0;
	}

	else printf("エラーです\n");
//**********

	return 0;
}
