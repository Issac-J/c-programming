#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int getkey();
void display(int,int,int,int[]);
void calendar(int,int);

char *month[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
char *week[] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

// GoToXY Function : Console Cursor �̵��ϴ� �Լ� 
void gotoxy(int x,int y) {
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

// SetColor Function : Console Text ������ �����ϴ� �� 
void SetColor(int ForgC)
{
    WORD wColor;
    
	// We will need this handle to get the current background attribute
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    // We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi)) {
	    //Mask out all but the background attribute, and add in the forgournd color
	    wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
	    SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

int main(int argc, char *argv[]) {
	
	// �Է¹޴� ���� ���� 
	int inputYear, inputMonth, ch;
	
    enteryear:
    while(1) {
    	printf("���� �Է�(Year) �� Enter : ");
    	scanf("%d", &inputYear);
    	
    	printf("�� �Է�(Month) �� Enter : ");
        scanf("%d", &inputMonth);
        
        // �Էµ� ������ 1945�� ���� ���� ���: Continue 
        if(inputYear < 1945) {
            printf("\n\t 1945�� ���� ������ �Է����ּ���.\n\n");
            continue;
        }
        
        // 1945 ���� ũ�ų� ���� ���: calendar �Լ� ȣ�� 
        else calendar(inputYear, inputMonth);
        
        while(1) {
	        gotoxy(40,22);
			printf("(*) Use LEFT, RIGHT, UP and DOWN arrow.");
			
	        gotoxy(40,24);
			printf("(*) Press P to go to particular year and month.");
			
	        gotoxy(40,26);
			printf("(*) Press ESC to Exit.");
	        
			ch = getkey();
			
			switch(ch) {
				case 80:
//					printf("Down Arrow");
					break;
					
				case 77:
//					printf("Right Arrow");
					break;
					
				case 72:
//					printf("Up Arrow");
					break;
					
				case 75:
//					printf("Left Arrow");
					break;
				
				// ESC Key
				case 27:
					system("cls");
					gotoxy(50,14);
					printf("Exiting program.\n\n\n\n\n");
                	exit(0);
                
				// P Key	
                case 112:
                	system("cls");
                	goto enteryear;
			}
		}
	
	}
	return 0;
}

void display(int inputYear, int inputMonth, int totalDays, int days[]) {
	
	int i, j;
	int position;
	int startDay = 0;
	
	SetColor(12); // Color red
	gotoxy(56, 3);	printf("%s %d", month[inputMonth-1], inputYear);
	
	for(i = 0, position = 30; i < 7; i++, position += 10) {
		if(i == 5) SetColor(9);			// Saturday Color Blue
		else if(i == 6) SetColor(12);	// Sunday Color Red
		else SetColor(10);				// Others day Color green
		
		gotoxy(position, 6); printf("%s", week[i]);
	}
	SetColor(15);	// Setting Color White
	
	startDay = (totalDays % 7) + 1;
	
	// �Ͽ��� ���� 
	if(startDay == 0 || startDay == 7) position = 91; 
	
	// ������ ���� 
	if(startDay == 1) position = 31;
	
	// ȭ���� ���� 
	if(startDay == 2) position = 41;
	
	// ������ ���� 
	if(startDay == 3) position = 51;
	
	// ����� ���� 
	if(startDay == 4) position = 61;
	
	// �ݿ��� ���� 
	if(startDay == 5) position = 71;
	 
	// ����� ���� 
	if(startDay == 6) position = 81;
	
	
	for(i=0, j=8; i < days[inputMonth - 1]; i++, position += 10) {
		if(position == 91)
			SetColor(8);
//		else if (position == 81) 
//			SetColor(9);
		else
			SetColor(7);
		
		gotoxy(position, j); printf("%d", i+1);
		
		if(position == 91) {
			position = 21;
			j = j + 2;
		}
	}
	
	

//	gotoxy(31, 10); printf("a");
//	gotoxy(41, 10); printf("b");
//	gotoxy(51, 10); printf("c");
//	gotoxy(61, 10); printf("d");
	
}

int getkey()
{
    int ch;
    ch=getch();
     if(ch==0)
    {
        printf("zero");
        ch=getch();

        return ch;
    }
    return ch;
}

// Calendar Function : Calculating
void calendar(int inputYear,int inputMonth) {
	
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// �Ŵ� ��(days)�� �� 
    int totalDays = 0;													// �� �ϼ�
	int countLeafYear = 0, countCommonYear = 0, count = 0;				// 
	int i, myear;														// 
    
    // Clear window 
    system("cls");
    
    // �Ķ���ͷκ��� ���� ������ ����Ͽ� ������ �޼��� ���ϱ� ���� 
    myear = inputYear - 1;
	
	// 1945����� �ų��� ���������� �Ǵ� (�Է¹��� ���� - 1 ����)
	// �� �ϼ��� ���ϱ� ���� 
	if(myear >= 1945) {
		
		// 1945�� ���� (�Է¹��� ����-1) ���� ������ �? 
		for(i = 1945; i<=myear; i++) {
			// �����̸� ���ϼ��� 366�� ���Ѵ�. 
			if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
				countLeafYear++;
			}
		}
	}
	
	// ������ ���� 
//	printf("%d\n", countLeafYear);
	
	// �ش� �⵵ ���� �⵵�� ���� : (ex. 2000�� �Է� ���� ���  => 1999 - 1945 + 1 => 55)
	// ����� ����
	countCommonYear = myear - 1945 + 1 - countLeafYear;
//	printf("%d\n", countCommonYear);
	
	totalDays = 365 * countCommonYear + 366 * countLeafYear;

	// ���� Ȯ��
	if(inputYear % 4 == 0 && inputYear % 100 != 0 || inputYear % 400 == 0)  {
		// ������ ��� 2���� �ϼ��� 29�� ���� 
		days[1] = 29;
		//printf("%d�� �����Դϴ�. �׷��Ƿ� 2���� %d�� �Դϴ�. \n", inputYear, days[1]);
	}
	else {
		// ������ �ƴ� ��� 2���� �ϼ��� 29�Ϸ� �� 
		days[1] = 28;
		//printf("%d�� ������ �ƴմϴ�. �׷��Ƿ� 2���� %d�� �Դϴ�. \n", inputYear, days[1]);
	}
	
	// �Է¹��� �� ���������� ��� 
	for(i = 0; i < inputMonth-1; i++ ) {
		totalDays = totalDays + days[i];
	}
	
	display(inputYear, inputMonth, totalDays, days);
} 
