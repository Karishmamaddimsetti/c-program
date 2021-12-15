#include<stdio.h>
void main()
{
	int main_choice,sub_choice;
	int x,y;
	printf("enter two number :");
	scanf("%d%d",&x,&y);
	printf("choose one of the following options\n1.Arithmatic\n2.Relational\n3.bitwise");
	scanf("%d",&main_choice);
	switch(main_choice)
	{
		case 1:
			printf("choose one of the following options\n1.+\n2.-\n3.*\n4./\n5.%% ");
			scanf("%d",&sub_choice);
			switch(sub_choice)
			{
				case 1:
					printf("%d + %d =%d",x,y,x+y);
					break;
				case 2:
					printf("%d - %d =%d",x,y,x-y);
					break;
				case 3:
					printf("%d * %d =%d",x,y,x*y);
					break;
				case 4:
					printf("%d / %d =%d",x,y,x/y);
					break;
				case 5:
					printf("%d %% %d =%d",x,y,x%y);
					break;
			}
			break;
			case 2:
			printf("choose one of the following options\n1.<=\n2.>=\n3.<\n4.==\n5.!=\n6.>");
			scanf("%d",&sub_choice);
			switch(sub_choice)
			{
				
				case 1:
					printf("%d <= %d %d",x,y,x<=y);
					break;
				case 2:
					printf("%d >= %d %d",x,y,x>=y);
					break;
				case 3:
					printf("%d < %d %d",x,y,x<y);
					break;
				case 4:
					printf("%d == %d %d",x,y,x==y);
					break;
				case 5:
					printf("%d != %d %d",x,y,x!=y);
					break;
				case 6:
					printf("%d > %d %d",x,y,x>y);
					break;
			}
			break;
			case 3:
			printf("choose one of the following options\n1.&\n2.|\n3.^");
			scanf("%d",&sub_choice);
			switch(sub_choice)
			{
				case 1:
					printf("%d & %d %d",x,y,x&y);
					break;
				case 2:
					printf("%d | %d %d",x,y,x|y);
					break;
				case 3:
					printf("%d ^ %d %d",x,y,x^y);
					break;
			}
			break;
			
	}
}
