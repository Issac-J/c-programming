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

// GoToXY Function : Console Cursor 이동하는 함수 
void gotoxy(int x,int y) {
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

// SetColor Function : Console Text 색상을 변경하는 함 
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
	
	// 입력받는 변수 선언 
	int inputYear, inputMonth, ch;
	
    enteryear:
    while(1) {
    	printf("연도 입력(Year) 후 Enter : ");
    	scanf("%d", &inputYear);
    	
    	printf("월 입력(Month) 후 Enter : ");
        scanf("%d", &inputMonth);
        
        // 입력된 연도가 1945년 보다 작은 경우: Continue 
        if(inputYear < 1945) {
            printf("\n\t 1945년 이후 연도를 입력해주세요.\n\n");
            continue;
        }
        
        // 1945 보다 크거나 같은 경우: calendar 함수 호출 
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
	
	// 일요일 시작 
	if(startDay == 0 || startDay == 7) position = 91; 
	
	// 월요일 시작 
	if(startDay == 1) position = 31;
	
	// 화요일 시작 
	if(startDay == 2) position = 41;
	
	// 수요일 시작 
	if(startDay == 3) position = 51;
	
	// 목요일 시작 
	if(startDay == 4) position = 61;
	
	// 금요일 시작 
	if(startDay == 5) position = 71;
	 
	// 토요일 시작 
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
	
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// 매달 일(days)의 수 
    int totalDays = 0;													// 총 일수
	int countLeafYear = 0, countCommonYear = 0, count = 0;				// 
	int i, myear;														// 
    
    // Clear window 
    system("cls");
    
    // 파라미터로부터 받은 변수를 사용하여 윤년의 햇수를 구하기 위함 
    myear = inputYear - 1;
	
	// 1945년부터 매년이 윤년인지를 판단 (입력받은 연도 - 1 까지)
	// 총 일수를 구하기 위함 
	if(myear >= 1945) {
		
		// 1945년 부터 (입력받은 연도-1) 까지 윤년은 몇개? 
		for(i = 1945; i<=myear; i++) {
			// 윤년이면 총일수에 366을 더한다. 
			if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
				countLeafYear++;
			}
		}
	}
	
	// 윤년의 개수 
//	printf("%d\n", countLeafYear);
	
	// 해당 년도 까지 년도의 개수 : (ex. 2000를 입력 받은 경우  => 1999 - 1945 + 1 => 55)
	// 평년의 개수
	countCommonYear = myear - 1945 + 1 - countLeafYear;
//	printf("%d\n", countCommonYear);
	
	totalDays = 365 * countCommonYear + 366 * countLeafYear;

	// 윤년 확인
	if(inputYear % 4 == 0 && inputYear % 100 != 0 || inputYear % 400 == 0)  {
		// 윤년인 경우 2월의 일수를 29로 설정 
		days[1] = 29;
		//printf("%d는 윤년입니다. 그러므로 2월은 %d일 입니다. \n", inputYear, days[1]);
	}
	else {
		// 윤년이 아닌 경우 2월의 일수를 29일로 설 
		days[1] = 28;
		//printf("%d는 윤년이 아닙니다. 그러므로 2월은 %d일 입니다. \n", inputYear, days[1]);
	}
	
	// 입력받은 달 이전까지만 계산 
	for(i = 0; i < inputMonth-1; i++ ) {
		totalDays = totalDays + days[i];
	}
	
	display(inputYear, inputMonth, totalDays, days);
} 
