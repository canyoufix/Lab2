#include <iostream>

using namespace std;
const int N = 80;

int main() {
	int i, j = 0;

	char str_1[N], str_2[N], str[N * 2];
	cout << "Enter first string: ";
	gets_s(str_1);
	cout << "Enter second string: ";
	gets_s(str_2);

	for (i = 0; i <= N; i++) {
		if (str_1[i] == '\0') {
			cout << "String (1) length: " << i << endl;
			break;
		}
	}
	for (i = 0; i <= N; i++) {
		if (str_2[i] == '\0') {
			cout << "String (2) length: " << i << endl;
			break;
		}
	}

	i = 0;
	while (str_1[i] != '\0' ) {
		(str_1[i] != ' ') ? str[i] = str_1[i] : NULL;
		i++;
	}
	while (str_2[j] != '\0') {
		(str_2[j] != ' ') ? str[i] = str_2[j] : NULL;
		j++;
		i++;
	}
	str[i] = '\0';

	cout << "New string: ";
	puts(str);

	i = 0;
	int changes = 1;
	do {
		if (changes <= 4) {
			if (str[i] > 48) {
				str[i] = ' ';
			}
			switch (str[i]) {
				case '$': {
					str[i] = 'U';
					break;
				}
				case '%': {
					str[i] = 'R';
					break;
				}
				case '&': {
					str[i] = 'L';
					break;
				}
				case '#': {
					str[i] = 'X';
					break;
				}
			}
			changes++;
		}
		i++;
	} while (str[i] != '\0');

	cout << "Result string: ";
	puts(str);

	return 0;
}