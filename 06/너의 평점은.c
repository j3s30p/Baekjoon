/*
#include <stdio.h>

int main()
{
	float credit, total_credit, grade, total_grade;
	char str_subject[51], str_grade[3];

	total_credit = 0;
	total_grade = 0;
	for (int i = 0; i < 20; i++)
	{
		scanf("%s %f %s", str_subject, &credit, str_grade);
		if (!(str_grade[0] == 'P'))
		{
			total_credit += credit;
			if (str_grade[0] == 'F')
				grade = 0;
			else
				grade = 'E' - str_grade[0];
			if (str_grade[1] == '+')
				grade += 0.5;
			total_grade += credit * grade;
		}
	}
	printf("%f", total_grade / total_credit);
	return (0);
}
*/

#include <stdio.h>

float cal_grade(char *sub, float *t_grade)
{
	float credit, grade;

	while (*sub != ' ')
		sub++;
	sub++;
	credit = *sub - '0';
	while (*sub != ' ')
		sub++;
	sub++;
	if (*sub == 'P')
		return (0);
	if (*sub == 'F')
		grade = 0;
	else
		grade = 'E' - *sub;
	sub++;
	if (*sub == '+')
		grade += 0.5;
	*t_grade += grade * credit;
	return (credit);
}

int main()
{
	float credit, grade;
	char sub[100];

	credit = 0;
	grade = 0;
	for (int i = 0; i < 20; i++)
	{
		fgets(sub, 100, stdin);
		credit += cal_grade(sub, &grade);
	}
	printf("%f", grade / credit);
	return (0);
}
