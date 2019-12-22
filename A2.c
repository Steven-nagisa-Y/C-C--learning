#include <stdio.h>
#include <string.h>
#include <time.h>

void ascii() {
	int i;
	char ch = 33;
	i = 33;
	printf("ASCII code table:\n");
	printf("int \tchar \t\n");
	while (ch <= '~') {
		if (i < 100) {
			printf("0%d  |\t %c   |\n",ch, ch);
		} else {
			printf("%d  |\t %c   |\n",ch, ch);
		}
		ch++;
		i++;
	}
}
int main(int argc, char *argv[]) {
	int i, j;
	ascii();
}