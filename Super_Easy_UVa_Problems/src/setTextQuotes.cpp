#include <cstring>
#include <cstdio>
void setTextQuotesUVa()
{
	char c;
	int count = 0;

	while(scanf_s("%c", &c) != EOF)
	{

		if (c == '"' && count == 1) {
			printf("%s", "''");
			count = 0;
		}
		
		else if (c == '"') {
			count++;
			printf("%s", "``");
		}
		else {
		printf("%c", c);
		}

	}
}

void setTextQuotes()
{
const char* str = " \"To be or not to be, \" quoth the Bard, \"that is the question\".The programming contestant replied : \"I must disagree.To `C' or not to `C', that is The Question\" ";

int count = 0;

for (int i = 0; i < strlen(str); i++)
{
	char tempC = str[i];
	if (tempC == 34 && count == 1) {
		printf("%s", "''");
		count = 0;
	}

	else if (tempC == 34) {
		count++;
		printf("%s", "``");
	}
	else {
		printf("%c", str[i]);

	}
}

}


