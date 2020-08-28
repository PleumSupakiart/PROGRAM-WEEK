#include <stdio.h>
int main()
{
	int mid, final, hw;
	printf("Mid-term : ");
	scanf_s("%d", &mid);
	printf("Final : ");
	scanf_s("%d", &final);
	printf("Homework : ");
	scanf_s("%d", &hw);
	int x = (mid * 0.4) + (final * 0.5) + (hw * 0.1);
	printf("x = %d\n\n", x);

	if (x >= 0 && x <= 100)
	{

		if (x >= 90)
		{
			printf("Grade = A");

		}
		else if (x >= 85)
		{
			printf("Grade = B+");
		}
		else if (x >= 80)
		{
			printf("Grade = B");
		}
		else if (x >= 70)
		{
			printf("Grade = C+");
		}
		else if (x >= 60)
		{
			printf("Grade = C");
		}
		else if (x >= 55)
		{
			printf("Grade = D+");
		}
		else if (x >= 50)
		{
			printf("Grade = D");
		}

		else {
			printf("Grade = F");
		}
	}
	return 0;
}
