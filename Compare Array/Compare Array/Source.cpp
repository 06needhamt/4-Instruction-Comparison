#include<iostream>
#include<random>
#include<time.h>

extern "C" int cmpArray16(char* a, char* b);
int main()
{
	char* a = (char*)malloc(sizeof(char) * 16);
	char* b = (char*)malloc(sizeof(char) * 16);

	srand(time(0));
	for (int i = 0; i < 17; i++)
	{
		a[i] = rand() % 5;
		b[i] = rand() % 5;
	}
	int result = cmpArray16(a, b);

	std::cout << "The Two Arrays have " << result << " Equal bytes" << std::endl;
	system("PAUSE");
	return 0;
}