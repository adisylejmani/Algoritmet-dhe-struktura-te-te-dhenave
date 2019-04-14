#include <bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	char str[100], word[100];
	gets(str);
	gets(word);

	char *token = strtok(str, " ");

	int cnt = 0;
	while (token != NULL)
	{
		if (strcmp(token, word) == 0)
			cnt++;
		token = strtok(NULL, " ");
	}
	cout << cnt << "\n";
	return 0;
}