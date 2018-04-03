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
	printf("눈을 떠보자.......\n");
	Sleep(1000);
	printf("\n""으으.......""\n\n");
	Sleep(2000);
	printf("누군가가 날 때리고 갔는지, 내동댕이 쳤는지는 모르겠지만 지금 나는 어떤 방에 갇혀있는 것 같다.\n");
	for (int i = 0; i < WAIT; i++)
	{
		Sleep(1000);
		if (wait[i] == 1)
			printf(".");
	}
	Sleep(3000);
	printf("\n\n철컥철컥\n\n");
	Sleep(2000);
	printf("예상대로 문은 잠겨있다.\n");
	Sleep(2000);
	printf("\n주변을 둘러보니 아무래도 이 방 안을 샅샅이 뒤져봐야겠다는 생각이 든다. 어떻게든 뒤적여보자.\n\n\n");
	Sleep(2500);

	while (1)
	{
		printf("1. 책상\n2. 침대\n3. 벽장\n4. 책장\n5. 옷장\n\n어디로 갈까? : ");
		scanf("%d", &sel);
		if (sel == 1)
		{
			
			if (tool_1 == 1 && tool_2 == 2 && tool_3 == 3 && tool_4 == 4)
			{
				KeyFlag = true;
				printf("\n\n여기....... 아무래도 이상하다.\n조각을 다 모아서 맞춰보니 책상홈에 알맞게 들어맞았다.\n\n");
				Sleep(500);
				printf("그렇다면 여기다가 꽂으면 된다. 이 소리겠군.\n\n");
				for (int i = 0; i < WAIT; i++)
				{
					if (wait[i] == 1)
						printf(".");
					Sleep(1000);
				}
				printf("\n\n오오 열쇠가 완성되었다. 당장 문으로 가자!\n\n");
				Sleep(2000);
				break;
			}
			else if (tool_1_Flag==true)
			{
				printf("\n\n이미 찾은 곳이다. 다른 곳을 찾자.\n\n");
			}
			else
			{
				printf("\n\n눈앞에 놓인 작은 책상부터 보기로 했다.\n그나저나 이 집 진짜 작네.\n\n");
				Sleep(2000);
				printf("책상 서랍에서 열쇠조각 1을 찾아냈다!\n\n");
				tool_1 = 1; tool_1_Flag=true;
				Sleep(2000);
				printf("잠깐만, 책상에 이상한 홈이 있는데? 뭔가 조립하는 곳인가?\n\n");
			}
			
		}
		else if (sel == 2)
		{
			if (tool_2 == 2)
			{
				printf("\n\n이미 찾은 곳이다. 다른 곳을 찾자.\n\n");
			}
			else
			{
				printf("\n\n자고 일어난 자리가 가장 수상한 법이지.\n침대 밑을 찾아보기로 하자.\n\n");
				Sleep(2000);
				printf("침대 밑에서 열쇠조각 2를 찾아냈다!\n\n");
				tool_2 = 2;
				Sleep(2000);
			}

		}
		else if (sel == 3)
		{
			Sleep(2000)
			printf("\n\n건진 게 없다.\n아무래도 다른 곳을 찾는 게 낫겟다.\n\n");
		}
		else if (sel == 4)
		{
			if (tool_3 == 3)
			{
				printf("\n\n이미 찾은 곳이다. 다른 곳을 찾자.\n\n");
			}
			else
			{
				printf("\n\n책상도 책상이지만, 책장에도 뭔가가 있겠지.\n책장을 샅샅이 조사해보자.\n\n");
				Sleep(2000);
				printf("국어사전 ㅁ시작 부분에서 열쇠조각 3을 찾아냈다!\n\n");
				tool_3 = 3;
				Sleep(2000);
			}
		}
		else if (sel == 5)
		{
			if (tool_4 == 4)
			{
				printf("\n\n이미 찾은 곳이다. 다른 곳을 찾자.\n\n");
			}
			else
			{
				printf("\n\n그러고 보니 지금 입고 있는 옷차림이 속옷차림이다.\n옷가지 좀 챙길 겸해서 뭐가 나올지도 모르니 조사도 같이 해두자.\n\n");
				Sleep(3000);
				printf("옷장 안의 습기방지제 위에 놓인 열쇠조각 4를 찾아냈다!\n\n");
				tool_4 = 4;
				Sleep(3000);
			}
		}
		else
			printf("\n\n내 주위에 보이지 않는 장소다. 다시 선택하자.\n\n");

	}
	if (KeyFlag == true)
	{
		printf("\n\n열쇠를 가진 당신은 문의 열쇠구멍에 열쇠를 넣어 돌렸다.\n\n");
		printf("딸"); Sleep(2000); printf("칵!\n\n"); Sleep(2000);
		printf("문이 열리자, 동틀녘의 넓은 들판이 눈앞에 펼쳐졌다.\n그렇다. 탈출에 성공한 것이다.");
		Sleep(3000);
		printf("\n\n-Fin-\n\n");
		Sleep(3000);
		exit(1);
	}
	
}