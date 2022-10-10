#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* wish1 = "工作累了，就听听周杰伦的歌";
char* wish2 = "心情烦了，就看看疯狂小阳哥的视频";
char* wish3 = "All is well";
char* wish4 = "送你一颗小爱心:";
char* wish5 = "送你九朵玫瑰:";

void heart() {
	printf("     # # #          #  #     \n");
	printf("   #       #     #       #    \n");
	printf("  #            #            #  \n");
	printf(" #                            # \n");
	printf(" #      you are the best      # \n");
	printf(" #                            # \n");
	printf(" #      I love you forever    #  \n");
	printf("  #                          #  \n");
	printf("   #                        #   \n");
	printf("    #                      #    \n");
	printf("      #                  #      \n");
	printf("        #             #        \n");
	printf("          #         #          \n");
	printf("             #   #             \n");
	printf("               #               \n");
}

void rose()
{
	printf("   {@}      {@}     {@}    {@}     {@}     {@}     {@}    {@}    {@}         \n");
	printf("    |        |       |      |       |       |       |      |      |          \n");
	printf("   \\|/      \\|/     \\|/    \\|/     \\|/     \\|/     \\|/    \\|/    \\|/         \n");
	printf("    |        |       |      |       |       |       |      |      |          \n");
	printf("    |        |       |      |       |       |       |      |      |          \n");
}


int main()
{
	int i = 0;
	long time;

	for(i=0; i<strlen(wish1); i++)
	{
		printf("%c", *(wish1+i));
		for (time = 0; time<99999999; time++);
	}
	printf("\n");
	for(i=0; i<strlen(wish2); i++)
	{
		printf("%c", *(wish2+i));
		for (time = 0; time<99999999; time++);
	}
	printf("\n");
	for(i=0; i<strlen(wish3); i++)
	{
		printf("%c", *(wish3+i));
		for (time = 0; time<99999999; time++);
	}
	printf("\n");

	for(i=0; i<strlen(wish4); i++)
	{
		printf("%c", *(wish4+i));
		for (time = 0; time<99999999; time++);
	}
	printf("\n");
	heart();

	for(i=0; i<strlen(wish5); i++)
	{
		printf("%c", *(wish5+i));
		for (time = 0; time<99999999; time++);
	}
	printf("\n");
	rose();

	printf("\n精心制作,愿你开心每一天！！！\n");

	for (;;)
	{
		system("color a");
		for (time = 0; time<99999999; time++);
		system("color b");
		for (time = 0; time<99999999; time++);
		system("color c");
		for (time = 0; time<99999999; time++);
		system("color d");
		for (time = 0; time<99999999; time++);
		system("color e");
		for (time = 0; time<99999999; time++);
		system("color f");
		for (time = 0; time<99999999; time++);
		system("color 0");
		for (time = 0; time<99999999; time++);
		system("color 1");
		for (time = 0; time<99999999; time++);
		system("color 2");
		for (time = 0; time<99999999; time++);
		system("color 3");
		for (time = 0; time<99999999; time++);
		system("color 4");
		for (time = 0; time<99999999; time++);
		system("color 5");
		for (time = 0; time<99999999; time++);
		system("color 6");
		for (time = 0; time<99999999; time++);
		system("color 7");
		for (time = 0; time<99999999; time++);
		system("color 8");
		for (time = 0; time<99999999; time++);
		system("color 9");
	}
    return 0;
}

