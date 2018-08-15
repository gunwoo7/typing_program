#include "main_header.h"
#include "Windows_API.h"


void clear_lines(int y, int strlength) {
	int i;

	Con::gotoxy(0, y);
	for (i = 0; i < strlength; i++) {
		printf(" ");
	}
}

void print_start_screen() {
	using namespace Con;
	CursorView(0);

	int i;
	int space_x, space_y;
	space_x = 7;
	space_y = 1;

	while (1)
	{
		system("cls");
		for (i = 0; i < space_y; i++) printf("\n");
		gotoxy(space_x * 2, space_y + 1); printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
		gotoxy(space_x * 2, space_y + 2); printf("  ◆◆◆◆◆◆  ◆              ◆◆◆◆◆◆  ◆\n");
		gotoxy(space_x * 2, space_y + 3); printf("  ●            ●                  ●●      ●\n");
		gotoxy(space_x * 2, space_y + 4); printf("  ●            ●                  ●●      ●\n");
		gotoxy(space_x * 2, space_y + 5); printf("  ★★★★★★  ★★★★★        ★    ★    ★★★★★\n");
		gotoxy(space_x * 2, space_y + 6); printf("  ■            ■                ■    ■    ■\n");
		gotoxy(space_x * 2, space_y + 7); printf("  ◆            ◆              ◆        ◆  ◆\n");
		gotoxy(space_x * 2, space_y + 8); printf("  ●●●●●●  ●              ●        ●  ●\n");
		gotoxy(space_x * 2, space_y + 9); printf("○○○○○○○○○○○○○○○○○○○○○○○○○○○○○\n");
		gotoxy(space_x * 2, space_y + 10); printf("☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
		gotoxy(space_x * 2, space_y + 11); printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
		gotoxy(space_x * 2, space_y + 12); printf("     ◆◆          ◆                ◆◆◆\n");
		gotoxy(space_x * 2, space_y + 13); printf("    ●   ●    ●●●                ●  ●\n");
		gotoxy(space_x * 2, space_y + 14); printf("  ●       ●      ●              ●      ●\n");
		gotoxy(space_x * 2, space_y + 15); printf("  ★       ★      ★            ★          ★\n");
		gotoxy(space_x * 2, space_y + 16); printf("    ■   ■    ■■■          ■              ■\n");
		gotoxy(space_x * 2, space_y + 17); printf("     ◆◆          ◆        ●●●●●●●●●●●\n");
		gotoxy(space_x * 2, space_y + 18); printf("                               ●              ●\n");
		gotoxy(space_x * 2, space_y + 19); printf("    ●                         ★              ★\n");
		gotoxy(space_x * 2, space_y + 20); printf("    ★                         ■■■■■■■■■\n");
		gotoxy(space_x * 2, space_y + 21); printf("    ■                         ◆              ◆\n");
		gotoxy(space_x * 2, space_y + 22); printf("    ◆◆◆◆◆◆◆◆           ●●●●●●●●●\n");
		gotoxy(space_x * 2, space_y + 23); printf("◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎\n");
		gotoxy(space_x * 2, space_y + 24); printf("○○○○○○○○○○○○○○○○○○○○○○○○○○○○○\n");
		gotoxy(space_x * 2, space_y + 25); printf("              press any key to start program!\n");

		for (i = 0; i < 24; i++) {
			int time_now = time(NULL);
			while (time(NULL) - time_now == 0 && !kbhit());
			if (time(NULL) - time_now == 0) return;
			clear_lines(i + space_y, 58 + space_x * 2);
		}
	}
	system("cls");
}

void main_print(int case_print) {
	printf("     ┏━━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("     ┃                        ┃                         ┃    자주 사용하는 긴 글   ┃\n");
	printf("     ┃ 자주 사용하는 낱말 연습┃      자주 쓰는 문구     ┃     또는  유명한 문학    ┃\n");
	printf("     ┃                        ┃                         ┃                          ┃\n");
	printf("     ┣━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("     ┃                                                                             ┃\n");
	printf("     ┃                                                                             ┃\n");
	printf("     ┃                                                                             ┃\n");
	printf("     ┣━━━━━━━━━━━━━━━━━━━━┓                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┃                    ┃                                                        ┃\n");
	printf("     ┣━━━━━━━━━━━━━━━━━━━━┛                                                        ┃\n");
	printf("     ┃                                                                             ┃\n");
	printf("     ┃                                                                             ┃\n");
	printf("     ┃                                                                             ┃\n");
	printf("     ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	Sleep(50000);
}