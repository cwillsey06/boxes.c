/*
 * This is free and unencumbered software released into the public domain.

 * Anyone is free to copy, modify, publish, use, compile, sell, or
 * distribute this software, either in source code form or as a compiled
 * binary, for any purpose, commercial or non-commercial, and by any
 * means.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void);
int show_menu_prompt(void);
int scan_input(void);
int start_box(void);
int read_box(void);
int write_box(void);

int main(void)
{
	int r;

	/* print menu */
	show_menu_prompt();

	/* init stdin scan */
	r = scan_input();

	/* read choice and */
	/* exec a function */
	if (r == 1) {
		start_box();
	} else if (r == 2) {
		read_box();
	} else if (r == 3) {
		write_box();
	} else return 1;
}

int show_menu_prompt(void)
{
	/* sends boxes information */
	printf("Boxes v1.0.0\n");
	printf("1) Create a new box\n");
	printf("2) Read from a box\n");
	printf("3) Update a box\n");
	return 0;
}

int scan_input(void)
{
	int response;

	/* prints the scanf prefix */
	printf(": ");

	/* flush stdout so the prefix */
	/* can be displayed correctly */
	fflush(stdout);

	/* get stdinput */
	scanf("%d", &response);
	/* flush stdinput */
	fflush(stdin);

	/* return response */
	return response;
}

int start_box(void)
{

	return 0;
}

int read_box(void)
{

	return 0;
}

int write_box(void)
{

	return 0;
}

