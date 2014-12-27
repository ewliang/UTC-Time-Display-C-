//UTC/GMT Time Displayer in C++

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	struct tm *local;
	time_t t;

	t = time(NULL);
	local = localtime(&t);
	printf("Local time and date: %s\n", asctime(local));
	local = gmtime(&t);
	printf("UTC time and date: %s\n", asctime(local));

	cin.get();
	return 0;
}