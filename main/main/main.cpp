#include <stdio.h>
#include<time.h>
#include<Windows.h> //
#define WAIT 7
int main()
{
	int sel = 0;
	int tool_1=0, tool_2=0, tool_3=0, tool_4=0;
	int wait[WAIT];
	for (int i = 0; i < WAIT; i++)
		wait[i] = 1;
	bool KeyFlag = false, tool_1_Flag=false;
	printf("���� ������.......\n");
	Sleep(1000);
	printf("\n""����.......""\n\n");
	Sleep(2000);
	printf("�������� �� ������ ������, �������� �ƴ����� �𸣰����� ���� ���� � �濡 �����ִ� �� ����.\n");
	for (int i = 0; i < WAIT; i++)
	{
		Sleep(1000);
		if (wait[i] == 1)
			printf(".");
	}
	Sleep(3000);
	printf("\n\nö��ö��\n\n");
	Sleep(2000);
	printf("������ ���� ����ִ�.\n");
	Sleep(2000);
	printf("\n�ֺ��� �ѷ����� �ƹ����� �� �� ���� ������ �������߰ڴٴ� ������ ���. ��Ե� ����������.\n\n\n");
	Sleep(2500);

	while (1)
	{
		printf("1. å��\n2. ħ��\n3. ����\n4. å��\n5. ����\n\n���� ����? : ");
		scanf("%d", &sel);
		if (sel == 1)
		{
			
			if (tool_1 == 1 && tool_2 == 2 && tool_3 == 3 && tool_4 == 4)
			{
				KeyFlag = true;
				printf("\n\n����....... �ƹ����� �̻��ϴ�.\n������ �� ��Ƽ� ���纸�� å��Ȩ�� �˸°� ���¾Ҵ�.\n\n");
				Sleep(500);
				printf("�׷��ٸ� ����ٰ� ������ �ȴ�. �� �Ҹ��ڱ�.\n\n");
				for (int i = 0; i < WAIT; i++)
				{
					if (wait[i] == 1)
						printf(".");
					Sleep(1000);
				}
				printf("\n\n���� ���谡 �ϼ��Ǿ���. ���� ������ ����!\n\n");
				Sleep(2000);
				break;
			}
			else if (tool_1_Flag==true)
			{
				printf("\n\n�̹� ã�� ���̴�. �ٸ� ���� ã��.\n\n");
			}
			else
			{
				printf("\n\n���տ� ���� ���� å����� ����� �ߴ�.\n�׳����� �� �� ��¥ �۳�.\n\n");
				Sleep(2000);
				printf("å�� �������� �������� 1�� ã�Ƴ´�!\n\n");
				tool_1 = 1; tool_1_Flag=true;
				Sleep(2000);
				printf("���, å�� �̻��� Ȩ�� �ִµ�? ���� �����ϴ� ���ΰ�?\n\n");
			}
			
		}
		else if (sel == 2)
		{
			if (tool_2 == 2)
			{
				printf("\n\n�̹� ã�� ���̴�. �ٸ� ���� ã��.\n\n");
			}
			else
			{
				printf("\n\n�ڰ� �Ͼ �ڸ��� ���� ������ ������.\nħ�� ���� ã�ƺ���� ����.\n\n");
				Sleep(2000);
				printf("ħ�� �ؿ��� �������� 2�� ã�Ƴ´�!\n\n");
				tool_2 = 2;
				Sleep(2000);
			}

		}
		else if (sel == 3)
		{
			Sleep(2000)
			printf("\n\n���� �� ����.\n�ƹ����� �ٸ� ���� ã�� �� ���ٴ�.\n\n");
		}
		else if (sel == 4)
		{
			if (tool_3 == 3)
			{
				printf("\n\n�̹� ã�� ���̴�. �ٸ� ���� ã��.\n\n");
			}
			else
			{
				printf("\n\nå�� å��������, å�忡�� ������ �ְ���.\nå���� ������ �����غ���.\n\n");
				Sleep(2000);
				printf("������� ������ �κп��� �������� 3�� ã�Ƴ´�!\n\n");
				tool_3 = 3;
				Sleep(2000);
			}
		}
		else if (sel == 5)
		{
			if (tool_4 == 4)
			{
				printf("\n\n�̹� ã�� ���̴�. �ٸ� ���� ã��.\n\n");
			}
			else
			{
				printf("\n\n�׷��� ���� ���� �԰� �ִ� �������� �ӿ������̴�.\n�ʰ��� �� ì�� ���ؼ� ���� �������� �𸣴� ���絵 ���� �ص���.\n\n");
				Sleep(3000);
				printf("���� ���� ��������� ���� ���� �������� 4�� ã�Ƴ´�!\n\n");
				tool_4 = 4;
				Sleep(3000);
			}
		}
		else
			printf("\n\n�� ������ ������ �ʴ� ��Ҵ�. �ٽ� ��������.\n\n");

	}
	if (KeyFlag == true)
	{
		printf("\n\n���踦 ���� ����� ���� ���豸�ۿ� ���踦 �־� ���ȴ�.\n\n");
		printf("��"); Sleep(2000); printf("Ĭ!\n\n"); Sleep(2000);
		printf("���� ������, ��Ʋ���� ���� ������ ���տ� ��������.\n�׷���. Ż�⿡ ������ ���̴�.");
		Sleep(3000);
		printf("\n\n-Fin-\n\n");
		Sleep(3000);
		exit(1);
	}
	
}