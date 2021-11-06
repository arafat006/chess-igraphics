# include "iGraphics.h"

int mposx, mposy;
int loop = 0;
int roomx = 53, roomy = 50, rx = roomx + 23, ry = roomy + 23;
int boardroomselect = 0;
int permission = 0;
int boardvalue1 = 0;
int boardvalue2 = 0;
int selectx1 = 0, selecty1 = 0;
int selectx2 = 0, selecty2 = 0;
int window = 0;
long int windowtab = 50000000;
int winornot = 0;
int boardcolor = 1;
//flag for move
int indexflag = 0;
int newindx;
int showpath = 0;

int eat_indx_white = 780;
int eat_indy_white = 550;

int eat_indx_blue = 780;
int eat_indy_blue = 125;

//
int whitepawn1indx = 50, whitepawn1indy = 125;
int whitepawn2indx = 125, whitepawn2indy = 125;
int whitepawn3indx = 200, whitepawn3indy = 125;
int whitepawn4indx = 275, whitepawn4indy = 125;
int whitepawn5indx = 350, whitepawn5indy = 125;
int whitepawn6indx = 425, whitepawn6indy = 125;
int whitepawn7indx = 500, whitepawn7indy = 125;
int whitepawn8indx = 575, whitepawn8indy = 125;

int whiterock1indx =50 , whiterock1indy =50 ;
int whiterock2indx = 575, whiterock2indy = 50;

int whitebishop1indx = 125, whitebishop1indy = 50;
int whitebishop2indx = 500, whitebishop2indy = 50;

int whiteknight1indx = 200, whiteknight1indy = 50;
int whiteknight2indx = 425, whiteknight2indy = 50;

int whitequeenindx = 350, whitequeenindy = 50;
int whitekingindx = 275, whitekingindy = 50;

int bluepawn1indx = 50, bluepawn1indy = 500;
int bluepawn2indx = 125, bluepawn2indy = 500;
int bluepawn3indx = 200, bluepawn3indy = 500;
int bluepawn4indx = 275, bluepawn4indy = 500;
int bluepawn5indx = 350, bluepawn5indy = 500;
int bluepawn6indx = 425, bluepawn6indy = 500;
int bluepawn7indx = 500, bluepawn7indy = 500;
int bluepawn8indx = 575, bluepawn8indy = 500;

int bluerock1indx = 50, bluerock1indy = 575;
int bluerock2indx = 575, bluerock2indy = 575;

int bluebishop1indx = 125, bluebishop1indy = 575;
int bluebishop2indx = 500, bluebishop2indy = 575;

int blueknight1indx = 200, blueknight1indy = 575;
int blueknight2indx = 425, blueknight2indy = 575;

int bluequeenindx = 350, bluequeenindy = 575;
int bluekingindx = 275, bluekingindy = 575;
//
//str all charectars graph value
// king,queen,rock,bishop,pawn

//:::::::::::::::::::::::::::::
//int whitepawn1 = 1, whitepawn2 = 1, whitepawn3 = 1, whitepawn4 = 1, whitepawn5 = 1, whitepawn6 = 1, whitepawn7 = 1, whitepawn8 = 1;
int whitepawnflag1 = 0, whitepawnflag2 = 0, whitepawnflag3 = 0, whitepawnflag4 = 0, whitepawnflag5 = 0, whitepawnflag6 = 0, whitepawnflag7 = 0, whitepawnflag8 = 0;
//int whiterock1 = 1, whiterock2 = 1, whitebishop1 = 1, whitebishop2 = 1, whiteknight1 = 1, whiteknight2 = 1, whiteking = 1, whitequeen = 1;
int whiterockflag1 = 0, whiterockflag2 = 0, whitebishopflag1 = 0, whitebishopflag2 = 0, whiteknightflag1 = 0, whiteknightflag2 = 0, whitekingflag = 0, whitequeenflag = 0;
//:::::::::::::::::::::::::::::
//int bluepawn1 = 1, bluepawn2 = 1, bluepawn3 = 1, bluepawn4 = 1, bluepawn5 = 1, bluepawn6 = 1, bluepawn7 = 1, bluepawn8 = 1;
int bluepawnflag1 = 0, bluepawnflag2 = 0, bluepawnflag3 = 0, bluepawnflag4 = 0, bluepawnflag5 = 0, bluepawnflag6 = 0, bluepawnflag7 = 0, bluepawnflag8 = 0;
//int bluerock1 = 1, bluerock2 = 1, bluebishop1 = 1, bluebishop2 = 1, blueknight1 = 1, blueknight2 = 1, blueking = 1, bluequeen = 1;
int bluerockflag1 = 0, bluerockflag2 = 0, bluebishopflag1 = 0, bluebishopflag2 = 0, blueknightflag1 = 0, blueknightflag2 = 0, bluekingflag = 0, bluequeenflag = 0;

int whitepawnx[8] = { 10, 11, 12, 13, 14, 15, 16, 17 }, bluepawn[8] = { 30, 31, 32, 33, 34, 35, 36, 37 };
int whiterock[2] = { 18, 19 }, bluerock[2] = { 38, 39 };
int whitebishop[2] = { 20, 21 }, bluebishop[2] = { 40, 41 };
int whiteknight[2] = { 22, 23 }, blueknight[2] = { 42, 43 };
//int whitequeen = 24, whiteking = 25;
//int bluequeen = 44, blueking = 45;

//end all charectars graph value

//Board initialize
int chessboard[8][8] = { { 18, 20, 22, 24, 25, 23, 21, 19 },
						{ 10, 11, 12, 13, 14, 15, 16, 17 },
						{ 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0, 0, 0, 0 },
						{ 30, 31, 32, 33, 34, 35, 36, 37 },
						{ 38, 40, 42, 44, 45, 43, 41, 39 }, };

//Board initialize
void allcharectercontrol(int ix, int iy);

void whitepawn1control(int x, int y, int i, int j, int previousi, int previousj);
void whitepawn2control(int x, int y, int i, int j, int previousi, int previousj);
void whitepawn3control(int x, int y, int i, int j, int previousi, int previousj);
void whitepawn4control(int x, int y, int i, int j, int previousi, int previousj);
void whitepawn5control(int x, int y, int i, int j, int previousi, int previousj);
void whitepawn6control(int x, int y, int i, int j, int previousi, int previousj);
void whitepawn7control(int x, int y, int i, int j, int previousi, int previousj);
void whitepawn8control(int x, int y, int i, int j, int previousi, int previousj);
void whiterock1control(int x, int y, int i, int j, int previousi, int previousj);
void whiterock2control(int x, int y, int i, int j, int previousi, int previousj);
void whitebishop1control(int x, int y, int i, int j, int previousi, int previousj);
void whitebishop2control(int x, int y, int i, int j, int previousi, int previousj);
void whiteknight1control(int x, int y, int i, int j, int previousi, int previousj);
void whiteknight2control(int x, int y, int i, int j, int previousi, int previousj);
void whitequeencontrol(int x, int y, int i, int j, int previousi, int previousj);
void whitekingcontrol(int x, int y, int i, int j, int previousi, int previousj);
//
void bluepawn1control(int x, int y, int i, int j, int previousi, int previousj);
void bluepawn2control(int x, int y, int i, int j, int previousi, int previousj);
void bluepawn3control(int x, int y, int i, int j, int previousi, int previousj);
void bluepawn4control(int x, int y, int i, int j, int previousi, int previousj);
void bluepawn5control(int x, int y, int i, int j, int previousi, int previousj);
void bluepawn6control(int x, int y, int i, int j, int previousi, int previousj);
void bluepawn7control(int x, int y, int i, int j, int previousi, int previousj);
void bluepawn8control(int x, int y, int i, int j, int previousi, int previousj);
void bluerock1control(int x, int y, int i, int j, int previousi, int previousj);
void bluerock2control(int x, int y, int i, int j, int previousi, int previousj);
void bluebishop1control(int x, int y, int i, int j, int previousi, int previousj);
void bluebishop2control(int x, int y, int i, int j, int previousi, int previousj);
void blueknight1control(int x, int y, int i, int j, int previousi, int previousj);
void blueknight2control(int x, int y, int i, int j, int previousi, int previousj);
void bluekingcontrol(int x, int y, int i, int j, int previousi, int previousj);
void bluequeencontrol(int x, int y, int i, int j, int previousi, int previousj);

int boardcondinate_to_indexfinderx(int xx);
int boardcondinate_to_indexfindery(int yy);

int indexfinderx_to_boardcondinate(int xx);
int indexfindery_to_boardcondinate(int yy);

void reset_data();

void iDraw()
{
	iClear();
	//First / start window ::::::::::::::::::::::
	if (window == 0)
	{
		
		iShowBMP2(0, 0, "pic//startwindow.bmp", 0);
		if (windowtab%5 == 0)
		{
			reset_data();
			iSetColor(0, 255, 25);
			iRectangle(523, 443, 190, 46);
			iRectangle(523 + 1, 443 + 1, 190 - 1, 46 - 1);

		}
		if (windowtab %5== 1)
		{
			iSetColor(0, 255, 25);
			iRectangle(521, 372, 193, 46);
			iRectangle(521 + 1, 372 + 1, 193 - 1, 46 - 1);
		}
		if (windowtab%5 == 2)
		{
			iSetColor(0, 255, 25);
			iRectangle(559, 291, 127, 55);
			iRectangle(559 + 1, 291 + 1, 127 - 1, 55 - 1);
		}
		
		if (windowtab%5 == 3)
		{
			iSetColor(0, 255, 25);
			iRectangle(569, 233, 108, 45);
			iRectangle(569 + 1, 233 + 1, 108 - 1, 45 - 1);
		}
		if (windowtab%5 == 4)
		{
			iSetColor(0, 255, 25);
			iRectangle(586, 163, 73, 45);
			iRectangle(586 + 1, 163 + 1, 73 - 1, 45 - 1);
		}

		

		
	}
	if (window == 2)
	{
		iShowBMP(0, 0, "pic//loadgame.bmp");
	}
	if (window == 3)
	{
		iShowBMP(0, 0, "pic//optionimage.bmp");
	}
	if (window == 4)
	{
		
		iShowBMP(0, 0, "pic//creditwindow.bmp");
	}
	if (window == 5)
	{

		iShowBMP(0, 0, "pic//exitgame.bmp");
	}

	if (window == 1)
	{
		if (boardcolor == 1)
			iShowBMP(3, 0, "pic//blueboard.bmp");
		if (boardcolor == 2)
			iShowBMP(3, 0, "pic//blurblueboard.bmp");
		if (boardcolor == 3)
			iShowBMP(3, 0, "pic//redboard.bmp");
		if (boardcolor == 4)
			iShowBMP(3, 0, "pic//greenboard.bmp");
		//
		//initial axises for all charecters strt:
		//white:::::::::::::::::::::::::::::::::::
		//whitepawn
		//if (chessboard[((whitepawn1indy-50)/75)][((whitepawn1indx-50)/75)] == 10)
		whitepawnflag1 = 0, whitepawnflag2 = 0, whitepawnflag3 = 0, whitepawnflag4 = 0, whitepawnflag5 = 0, whitepawnflag6 = 0, whitepawnflag7 = 0, whitepawnflag8 = 0;
		whiterockflag1 = 0, whiterockflag2 = 0, whitebishopflag1 = 0, whitebishopflag2 = 0, whiteknightflag1 = 0, whiteknightflag2 = 0, whitekingflag = 0, whitequeenflag = 0;

		bluepawnflag1 = 0, bluepawnflag2 = 0, bluepawnflag3 = 0, bluepawnflag4 = 0, bluepawnflag5 = 0, bluepawnflag6 = 0, bluepawnflag7 = 0, bluepawnflag8 = 0;
		bluerockflag1 = 0, bluerockflag2 = 0, bluebishopflag1 = 0, bluebishopflag2 = 0, blueknightflag1 = 0, blueknightflag2 = 0, bluekingflag = 0, bluequeenflag = 0;

		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (chessboard[i][j] == 30)
				{
					whitepawnflag1++;
				}
				if (chessboard[i][j] == 31)
				{
					whitepawnflag2++;
				}
				if (chessboard[i][j] == 32)
				{
					whitepawnflag3++;
				}
				if (chessboard[i][j] == 33)
				{
					whitepawnflag4++;
				}
				if (chessboard[i][j] == 34)
				{
					whitepawnflag5++;
				}
				if (chessboard[i][j] == 35)
				{
					whitepawnflag6++;
				}
				if (chessboard[i][j] == 36)
				{
					whitepawnflag7++;
				}
				if (chessboard[i][j] == 37)
				{
					whitepawnflag8++;
				}
				if (chessboard[i][j] == 38)
				{
					whiterockflag1++;
				}
				if (chessboard[i][j] == 39)
				{
					whiterockflag2++;
				}
				if (chessboard[i][j] == 40)
				{
					whitebishopflag1++;
				}
				if (chessboard[i][j] == 41)
				{
					whitebishopflag2++;
				}
				if (chessboard[i][j] == 42)
				{
					whiteknightflag1++;
				}
				if (chessboard[i][j] == 43)
				{
					whiteknightflag2++;
				}
				if (chessboard[i][j] == 44)
				{
					whitekingflag++;
				}
				if (chessboard[i][j] == 45)
				{
					whitequeenflag++;
				}
				//blue pawn vanish//
				if (chessboard[i][j] == 10)
				{
					bluepawnflag1++;
				}
				if (chessboard[i][j] == 11)
				{
					bluepawnflag2++;
				}
				if (chessboard[i][j] == 12)
				{
					bluepawnflag3++;
				}
				if (chessboard[i][j] == 13)
				{
					bluepawnflag4++;
				}
				if (chessboard[i][j] == 14)
				{
					bluepawnflag5++;
				}
				if (chessboard[i][j] == 15)
				{
					bluepawnflag6++;
				}
				if (chessboard[i][j] == 16)
				{
					bluepawnflag7++;
				}
				if (chessboard[i][j] == 17)
				{
					bluepawnflag8++;
				}
				if (chessboard[i][j] == 18)
				{
					bluerockflag1++;
				}
				if (chessboard[i][j] == 19)
				{
					bluerockflag2++;
				}
				if (chessboard[i][j] == 20)
				{
					bluebishopflag1++;
				}
				if (chessboard[i][j] == 21)
				{
					bluebishopflag2++;
				}
				if (chessboard[i][j] == 22)
				{
					blueknightflag1++;
				}
				if (chessboard[i][j] == 23)
				{
					blueknightflag2++;
				}
				if (chessboard[i][j] == 25)
				{
					bluequeenflag++;
				}
				if (chessboard[i][j] == 24)
				{
					bluekingflag++;
				}

			}
		}

		if (whitepawnflag1 > 0)
		{
			iShowBMP2(whitepawn1indx, whitepawn1indy, "pic//whitepawn1.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_white, eat_indy_white, "pic//whitepawn1.bmp", 0);
		}

		if (whitepawnflag2 > 0)
		{
			iShowBMP2(whitepawn2indx, whitepawn2indy, "pic//whitepawn2.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_white + 50, eat_indy_white, "pic//whitepawn2.bmp", 0);
		}
		if (whitepawnflag3 > 0)
		{
			iShowBMP2(whitepawn3indx, whitepawn3indy, "pic//whitepawn3.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_white + 100, eat_indy_white, "pic//whitepawn3.bmp", 0);
		}
		if (whitepawnflag4 > 0)
		{
			iShowBMP2(whitepawn4indx, whitepawn4indy, "pic//whitepawn4.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_white + 150, eat_indy_white, "pic//whitepawn4.bmp", 0);
		}
		if (whitepawnflag5 > 0)
		{
			iShowBMP2(whitepawn5indx, whitepawn5indy, "pic//whitepawn5.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_white + 200, eat_indy_white, "pic//whitepawn5.bmp", 0);
		}
		if (whitepawnflag6 > 0)
		{
			iShowBMP2(whitepawn6indx, whitepawn6indy, "pic//whitepawn6.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_white + 250, eat_indy_white, "pic//whitepawn6.bmp", 0);
		}
		if (whitepawnflag7 > 0)
		{
			iShowBMP2(whitepawn7indx, whitepawn7indy, "pic//whitepawn7.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_white + 300, eat_indy_white, "pic//whitepawn7.bmp", 0);
		}
		if (whitepawnflag8 > 0)
		{
			iShowBMP2(whitepawn8indx, whitepawn8indy, "pic//whitepawn8.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_white + 350, eat_indy_white, "pic//whitepawn8.bmp", 0);
		}

		//white rock
		if (whiterockflag1 > 0)
		{
			iShowBMP2(whiterock1indx, whiterock1indy, "pic//whiterock1.bmp", 0); //1

		}
		else
		{
			iShowBMP2(eat_indx_white, eat_indy_white -75, "pic//whiterock1.bmp", 0);
		}

		if (whiterockflag2 > 0)
		{
			iShowBMP2(whiterock2indx, whiterock2indy, "pic//whiterock2.bmp", 0); //2
		}
		else
		{
			iShowBMP2(eat_indx_white + 50, eat_indy_white - 75, "pic//whiterock2.bmp", 0);
		}
		//whitebishop
		if (whitebishopflag1 > 0)
		{
			iShowBMP2(whitebishop1indx, whitebishop1indy, "pic//whitebishop1.bmp", 0); //1
		}
		else
		{
			iShowBMP2(eat_indx_white + 100, eat_indy_white - 75, "pic//whitebishop1.bmp", 0);
		}

		if (whitebishopflag2 > 0)
		{
			iShowBMP2(whitebishop2indx, whitebishop2indy, "pic//whitebishop2.bmp", 0); //2
		}
		else
		{
			iShowBMP2(eat_indx_white + 150, eat_indy_white - 75, "pic//whitebishop2.bmp", 0);
		}
		//whiteknight
		if (whiteknightflag1 > 0)
		{
			iShowBMP2(whiteknight1indx, whiteknight1indy, "pic//whiteknight1.bmp", 0); //1
		}
		else
		{
			iShowBMP2(eat_indx_white + 200, eat_indy_white - 75, "pic//whiteknight1.bmp", 0);
		}

		if (whiteknightflag2 > 0)
		{
			iShowBMP2(whiteknight2indx, whiteknight2indy, "pic//whiteknight2.bmp", 0); //2
		}
		else
		{
			iShowBMP2(eat_indx_white + 250, eat_indy_white - 75, "pic//whiteknight2.bmp", 0);
		}
		//whitequeen
		if (whitequeenflag > 0)
		{
			iShowBMP2(whitequeenindx, whitequeenindy, "pic//whitequeen.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_white + 300, eat_indy_white - 75, "pic//whitequeen.bmp", 0);
		}
		//whiteking
		if (whitekingflag > 0)
		{
			iShowBMP2(whitekingindx, whitekingindy, "pic//whiteking.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_white + 350, eat_indy_white - 75, "pic//whiteking.bmp", 0);
		}

		//blue::::::::::::::::::::::::::::::::::::::::::::::

		//bluepawn
		if (bluepawnflag1 > 0)
		{
			iShowBMP2(bluepawn1indx, bluepawn1indy, "pic//bluepawn1.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue, eat_indy_blue, "pic//bluepawn1.bmp", 0);
		}

		if (bluepawnflag2 > 0)
		{
			iShowBMP2(bluepawn2indx, bluepawn2indy, "pic//bluepawn2.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue+50, eat_indy_blue, "pic//bluepawn2.bmp", 0);
		}
		if (bluepawnflag3 > 0)
		{
			iShowBMP2(bluepawn3indx, bluepawn3indy, "pic//bluepawn3.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 100, eat_indy_blue, "pic//bluepawn3.bmp", 0);
		}
		if (bluepawnflag4 > 0)
		{
			iShowBMP2(bluepawn4indx, bluepawn4indy, "pic//bluepawn4.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 150, eat_indy_blue, "pic//bluepawn4.bmp", 0);
		}

		if (bluepawnflag5 > 0)
		{
			iShowBMP2(bluepawn5indx, bluepawn5indy, "pic//bluepawn5.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 200, eat_indy_blue, "pic//bluepawn5.bmp", 0);
		}

		if (bluepawnflag6 > 0)
		{
			iShowBMP2(bluepawn6indx, bluepawn6indy, "pic//bluepawn6.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 250, eat_indy_blue, "pic//bluepawn6.bmp", 0);
		}

		if (bluepawnflag7 > 0)
		{
			iShowBMP2(bluepawn7indx, bluepawn7indy, "pic//bluepawn7.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 300, eat_indy_blue, "pic//bluepawn7.bmp", 0);
		}

		if (bluepawnflag8 > 0)
		{
			iShowBMP2(bluepawn8indx, bluepawn8indy, "pic//bluepawn8.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 350, eat_indy_blue, "pic//bluepawn8.bmp", 0);
		}

		//bluerock
		if (bluerockflag1 > 0)
		{
			iShowBMP2(bluerock1indx, bluerock1indy, "pic//bluerock1.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue , eat_indy_blue-75, "pic//bluerock1.bmp", 0);
		}

		if (bluerockflag2 > 0)
		{
			iShowBMP2(bluerock2indx, bluerock2indy, "pic//bluerock2.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue+50, eat_indy_blue - 75, "pic//bluerock2.bmp", 0);
		}
		//bluebishop
		if (bluebishopflag1 > 0)
		{
			iShowBMP2(bluebishop1indx, bluebishop1indy, "pic//bluebishop1.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 100, eat_indy_blue - 75, "pic//bluebishop1.bmp", 0);
		}

		if (bluebishopflag2 > 0)
		{
			iShowBMP2(bluebishop2indx, bluebishop2indy, "pic//bluebishop2.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 150, eat_indy_blue - 75, "pic//bluebishop2.bmp", 0);
		}
		//blueknight
		if (blueknightflag1 > 0)
		{
			iShowBMP2(blueknight1indx, blueknight1indy, "pic//blueknight1.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 200, eat_indy_blue - 75, "pic//blueknight1.bmp", 0);
		}

		if (blueknightflag2 > 0)
		{
			iShowBMP2(blueknight2indx, blueknight2indy, "pic//blueknight2.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 250, eat_indy_blue - 75, "pic//blueknight2.bmp", 0);
		}
		//bluequeen
		if (bluequeenflag > 0)
		{
			iShowBMP2(bluequeenindx, bluequeenindy, "pic//bluequeen.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 300, eat_indy_blue - 75, "pic//bluequeen.bmp", 0);
		}
		//blueking
		if (bluekingflag > 0)
		{
			iShowBMP2(bluekingindx, bluekingindy, "pic//blueking.bmp", 0);
		}
		else
		{
			iShowBMP2(eat_indx_blue + 350, eat_indy_blue - 75, "pic//blueking.bmp", 0);
		}

		//
		//initial axises for all charecters ends:
		if (boardroomselect % 3 == 0)
		{
			//showpath = 0;
			selectx1 = 0;
			selecty1 = 0;
			selectx2 = 0;
			selecty2 = 0;
			permission = 0;
			iSetColor(255, 0, 0);
			iRectangle(roomx, roomy + 75, rx, ry);
			iRectangle(roomx + 1, roomy + 1 + 75, rx, ry);
			iRectangle(roomx + 2, roomy + 2 + 75, rx, ry);
			iRectangle(roomx + 3, roomy + 3 + 75, rx, ry);
			iRectangle(roomx + 4, roomy + 4 + 75, rx, ry);
		}
		else if (boardroomselect % 3 == 1)
		{
			//showpath = 1;
			permission = 1;
			iSetColor(255, 255, 0);
			iRectangle(roomx, roomy + 75, rx, ry);
			iRectangle(roomx + 1, roomy + 1 + 75, rx, ry);
			iRectangle(roomx + 2, roomy + 2 + 75, rx, ry);
			iRectangle(roomx + 3, roomy + 3 + 75, rx, ry);
			iRectangle(roomx + 4, roomy + 4 + 75, rx, ry);
		}
		else if (boardroomselect % 3 == 2)
		{

			permission = 2;
			iSetColor(0, 255, 0);
			iRectangle(roomx, roomy + 75, rx, ry);
			iRectangle(roomx + 1, roomy + 1 + 75, rx, ry);
			iRectangle(roomx + 2, roomy + 2 + 75, rx, ry);
			iRectangle(roomx + 3, roomy + 3 + 75, rx, ry);
			iRectangle(roomx + 4, roomy + 4 + 75, rx, ry);
		}
		//After Crush blue white
		iSetColor(0, 0, 255);
		iText(800, 650, "Player Blue : ");

		iSetColor(255, 255, 255);
		iText(800, 225, "Player White : ");

		/*
		for (loop = 0, newindx = 780; loop < 8; loop++, newindx += 50)
		{
			iShowBMP2(newindx, 550, "pic//whitepawn1.bmp", 0);
		}
		iShowBMP2(newindx=780, 475, "pic//whiterock1.bmp", 0);
		iShowBMP2(newindx = 780+50, 475, "pic//whiterock2.bmp", 0);
		iShowBMP2(newindx = 780+100, 475, "pic//whitebishop1.bmp", 0);
		iShowBMP2(newindx = 780 + 150, 475, "pic//whitebishop2.bmp", 0);
		iShowBMP2(newindx = 780 + 200, 475, "pic//whiteknight1.bmp", 0);
		iShowBMP2(newindx = 780 + 250, 475, "pic//whiteknight2.bmp", 0);
		iShowBMP2(newindx = 780 + 300, 475, "pic//whitequeen.bmp", 0);
		iShowBMP2(newindx = 780 + 350, 475, "pic//whiteking.bmp", 0);

		//After Crush white blue

		iSetColor(255, 255, 255);
		iText(800, 225, "Player White : ");

		for (loop = 0, newindx = 780; loop < 8; loop++, newindx += 50)
		{
			iShowBMP2(newindx, 125, "pic//bluepawn1.bmp", 0);
		}
		iShowBMP2(newindx = 780, 50, "pic//bluerock1.bmp", 0);
		iShowBMP2(newindx = 780 + 50, 50, "pic//bluerock2.bmp", 0);
		iShowBMP2(newindx = 780 + 100, 50, "pic//bluebishop1.bmp", 0);
		iShowBMP2(newindx = 780 + 150, 50, "pic//bluebishop2.bmp", 0);
		iShowBMP2(newindx = 780 + 200, 50, "pic//blueknight1.bmp", 0);
		iShowBMP2(newindx = 780 + 250, 50, "pic//blueknight2.bmp", 0);
		iShowBMP2(newindx = 780 + 300, 50, "pic//bluequeen.bmp", 0);
		iShowBMP2(newindx = 780 + 350, 50, "pic//blueking.bmp", 0);
		*/
		//:::::::::::::::::::::::::::
		iShowBMP2(803, 250, "pic//space.bmp", 0);

		if (whitekingflag == 0)
		{	
			winornot = 1;
			iShowBMP2(150, 110, "pic//bluekingwin.bmp", 0); //white king wins
			iShowBMP2(110, 50, "pic//bluewinswriten.bmp", 0);
		}
		if (bluekingflag == 0)
		{
			winornot = 1;
			iShowBMP2(150, 110, "pic//whitekingwin.bmp", 0); //blue king wins
			iShowBMP2(110, 50, "pic//whitewinswriten.bmp", 0);
		}
	}
}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf("%d",mx);
		printf("\t%d \n", my);

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx, int my)
{
	//place your code here

	mposx = mx;
	mposy = my;
	//printf("m %d   %d\n",mx,my);
	//printf("mp %d   %d\n", mposx, mposy);

	if (mx == 2){}        /*Something to do with mx*/
	else if (my == 2){}   /*Something to do with my*/

}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key)
	{
		if (window == 5)
		{
			exit(0);
		}
	}
	if (key==27)
	{
		if (window == 1)
		{
			window = 0;
		}
	}
	if (key == 'b')
	{
		if (window != 1)
		{
			window = 0;
		}
	}
	if (key == '1')
	{
		boardcolor = 1;
	}
	if (key == '2')
	{
		boardcolor = 2;
	}
	if (key == '3')
	{
		boardcolor = 3;
	}
	if (key == '4')
	{
		boardcolor = 4;
	}

	int ii1, ii2;
	int jj1, jj2;
	if ((window == 0) && (windowtab % 5 == 0))
	{
		if (key == '\r')
		{
			window = 1;
			boardroomselect--;
		}
	}

	if (key == '\r')
	{

		
		if (window == 0)
		{
			if (windowtab % 5 == 0)
			{
				//window = 1;
			}
			else if (windowtab % 5 == 1)
			{
				window = 2;
			}
			else if (windowtab % 5 == 2)
			{
				window = 3;
			}
			else if (windowtab % 5 == 3)
			{
				window = 4;
			}
			else if (windowtab % 5 == 4)
			{
				window = 5;

			}
		}
		if ((window == 1)&&(winornot==0))
		{
			boardroomselect++;
			if (permission == 1)
			{
				//showpath = 0;
				selectx1 = roomx;
				selecty1 = roomy;
				printf("\np1 : %d   %d\n", selectx1, selecty1);
				ii1 = boardcondinate_to_indexfinderx(selectx1);
				jj1 = boardcondinate_to_indexfindery(selecty1);
				boardvalue1 = chessboard[jj1][ii1];
				printf("\nboard : %d\n", boardvalue1);
				}
				if (permission == 2)
				{
				//showpath = 1;
				selectx2 = roomx;
				selecty2 = roomy;
				printf("\np2 : %d   %d\n", selectx2, selecty2);
				ii2 = boardcondinate_to_indexfindery(selectx2);
				jj2 = boardcondinate_to_indexfinderx(selecty2);
				//boardvalue1 = chessboard[ii][jj];
				if (boardvalue1 == 30)
				{
					whitepawn1control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 31)
				{
					whitepawn2control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 32)
				{
					whitepawn3control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 33)
				{
					whitepawn4control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 34)
				{
					whitepawn5control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 35)
				{
					whitepawn6control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 36)
				{
					whitepawn7control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 37)
				{
					whitepawn8control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 38)
				{
					whiterock1control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 39)
				{
					whiterock2control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 40)
				{
					whitebishop1control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 41)
				{
					whitebishop2control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 42)
				{
					whiteknight1control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 43)
				{
					whiteknight2control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 45)
				{
					whitequeencontrol(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 44)
				{
					whitekingcontrol(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 10)
				{
					bluepawn1control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 11)
				{
					bluepawn2control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 12)
				{
					bluepawn3control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 13)
				{
					bluepawn4control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 14)
				{
					bluepawn5control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 15)
				{
					bluepawn6control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 16)
				{
					bluepawn7control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 17)
				{
					bluepawn8control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 18)
				{
					bluerock1control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 19)
				{
					bluerock2control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 20)
				{
					bluebishop1control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 21)
				{
					bluebishop2control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 22)
				{
					blueknight1control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 23)
				{
					blueknight2control(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 24)
				{
					bluekingcontrol(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
				if (boardvalue1 == 25)
				{
					bluequeencontrol(selectx2 - 3, selecty2 + 75, selectx2, selecty2, selectx1, selecty1);
				}
			}
			
		}
		
		

	}
	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_UP)
	{
		if (window == 0)
		{
			windowtab--;
		}
		else if ((window == 1) && (winornot == 0))
		{
			if (roomy < 500)
			{
				roomy += 75;
			}
				
		}
		printf("%d  %d\n", roomx, roomy);
	}
	if (key == GLUT_KEY_DOWN)
	{
		if (window == 0)
		{
			windowtab++;
		}
		else if ((window == 1) && (winornot == 0))
		{
			if (roomy >= 0)
			{
				roomy -= 75;
			}
		}
		printf("%d  %d\n", roomx, roomy);
	}
	if (key == GLUT_KEY_RIGHT)
	{
		if ((window == 1) && (winornot == 0))
		{
			if (roomx < 550)
			{
				roomx += 75;
			}
		}
		printf("%d  %d\n", roomx, roomy);
	}
	if (key == GLUT_KEY_LEFT)
	{
		if ((window == 1) && (winornot == 0))
		{
			if (roomx>75)
			{
				roomx -= 75;
			}
		}
		printf("%d  %d\n", roomx, roomy);
	}
	/*
	if (key == 30)
	{
		boardroomselect++;
	}*/
	//place your codes for other keys here
}
//

void whitepawn1control(int x, int y, int i, int j,int previousi,int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitepawn1indx = x;
		whitepawn1indy = y;
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 30;
	}
	
}

void whitepawn2control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitepawn2indx = x;
		whitepawn2indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 31;
	}
}
void whitepawn3control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitepawn3indx = x;
		whitepawn3indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 32;
	}
}
void whitepawn4control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitepawn4indx = x;
		whitepawn4indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 33;
	}
}
void whitepawn5control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitepawn5indx = x;
		whitepawn5indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 34;
	}
}
void whitepawn6control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitepawn6indx = x;
		whitepawn6indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 35;
	}
}
void whitepawn7control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitepawn7indx = x;
		whitepawn7indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 36;
	}
}
void whitepawn8control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitepawn8indx = x;
		whitepawn8indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 37;
	}
}

void whiterock1control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whiterock1indx = x;
		whiterock1indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 38;
	}
}
void whiterock2control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whiterock2indx = x;
		whiterock2indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 39;
	}
}
void whitebishop1control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitebishop1indx = x;
		whitebishop1indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 40;
	}
}
void whitebishop2control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitebishop2indx = x;
		whitebishop2indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 41;
	}
}
void whiteknight1control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whiteknight1indx = x;
		whiteknight1indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 42;
	}
}
void whiteknight2control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whiteknight2indx = x;
		whiteknight2indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 43;
	}
}
void whitequeencontrol(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitequeenindx = x;
		whitequeenindy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 45;
	}
}
void whitekingcontrol(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 30) || (chessboard[ii][jj] > 47))
	{
		whitekingindx = x;
		whitekingindy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 44;
	}
}
void bluepawn1control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluepawn1indx = x;
		bluepawn1indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 10;
	}
}
void bluepawn2control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluepawn2indx = x;
		bluepawn2indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 11;
	}
}
void bluepawn3control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluepawn3indx = x;
		bluepawn3indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 12;
	}
}
void bluepawn4control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluepawn4indx = x;
		bluepawn4indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 13;
	}
}
void bluepawn5control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluepawn5indx = x;
		bluepawn5indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 14;
	}
}
void bluepawn6control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluepawn6indx = x;
		bluepawn6indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 15;
	}
}
void bluepawn7control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluepawn7indx = x;
		bluepawn7indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 16;
	}
}
void bluepawn8control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluepawn8indx = x;
		bluepawn8indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 17;
	}
}
void bluerock1control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluerock1indx = x;
		bluerock1indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 18;
	}
}
void bluerock2control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluerock2indx = x;
		bluerock2indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 19;
	}
}
void bluebishop1control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluebishop1indx = x;
		bluebishop1indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 20;
	}
}
void bluebishop2control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluebishop2indx = x;
		bluebishop2indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 21;
	}
}
void blueknight1control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		blueknight1indx = x;
		blueknight1indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 22;
	}
}
void blueknight2control(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		blueknight2indx = x;
		blueknight2indy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 23;
	}
}
void bluekingcontrol(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluekingindx = x;
		bluekingindy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 24;
	}
}
void bluequeencontrol(int x, int y, int i, int j, int previousi, int previousj)
{
	int jj = boardcondinate_to_indexfinderx(i);
	int ii = boardcondinate_to_indexfindery(j);
	if ((chessboard[ii][jj] < 10) || (chessboard[ii][jj] > 27))
	{
		bluequeenindx = x;
		bluequeenindy = y;
		int jj = boardcondinate_to_indexfinderx(i);
		int ii = boardcondinate_to_indexfindery(j);
		int pjj = boardcondinate_to_indexfinderx(previousi);
		int pii = boardcondinate_to_indexfindery(previousj);
		chessboard[pii][pjj] = 0;
		chessboard[ii][jj] = 25;
	}
}

int boardcondinate_to_indexfinderx(int xx)
{
	if (xx == 53)
		return 0;
	else if (xx == 128)
		return 1;
	else if (xx == 203)
		return 2;
	else if (xx == 278)
		return 3;
	else if (xx == 353)
		return 4;
	else if (xx == 428)
		return 5;
	else if (xx == 503)
		return 6;
	else if (xx == 578)
		return 7;
}
int boardcondinate_to_indexfindery(int yy)
{
	if (yy == -25)
	{
		return 7;
	}
		
	else if (yy == 50)
	{
		return 6;
	}
		
	else if (yy == 125)
	{
		return 5;
	}
		
	else if (yy == 200)
	{
		return 4;
	}
		
	else if (yy == 275)
	{
		return 3;
	}
		
	else if (yy == 350)
	{
		return 2;
	}
		
	else if (yy == 425)
	{
		return 1;
	}
		
	else if (yy == 500)
	{
		return 0;
	}
		
}
int indexfinderx_to_boardcondinate(int xx)
{
	if (xx == 0)
		return 53;
	else if (xx == 1)
		return 128;
	else if (xx == 2)
		return 203;
	else if (xx == 3)
		return 278;
	else if (xx == 4)
		return 353;
	else if (xx == 5)
		return 428;
	else if (xx == 6)
		return 503;
	else if (xx == 7)
		return 578;
}

int indexfindery_to_boardcondinate(int yy)
{
	if (yy == 7)
	{
		return -25;
	}

	else if (yy == 6)
	{
		return 50;
	}

	else if (yy == 5)
	{
		return 125;
	}

	else if (yy == 4)
	{
		return 200;
	}

	else if (yy == 3)
	{
		return 275;
	}

	else if (yy == 2)
	{
		return 350;
	}

	else if (yy == 1)
	{
		return 425;
	}

	else if (yy == 0)
	{
		return 500;
	}
}

void chessboardindexfind(int random)
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (chessboard[i][j] == random)
			{
				printf("Yes\n");
				break;
			}
		}
		//printf("\n");
	}

}
void reset_data()
{
	if (window == 0)
	{
		mposx, mposy;
		loop = 0;
		roomx = 53, roomy = 50, rx = roomx + 23, ry = roomy + 23;
		boardroomselect = 0;
		//permission = 0;
		boardvalue1 = 0;
		boardvalue2 = 0;
		selectx1 = 0, selecty1 = 0;
		selectx2 = 0, selecty2 = 0;
		//window = 0;
		//windowtab = 50000000;
		winornot = 0;
		boardcolor = 1;
		//flag for move
		indexflag = 0;
		newindx;
		showpath = 0;
		//
		whitepawn1indx = 50, whitepawn1indy = 125;
		whitepawn2indx = 125, whitepawn2indy = 125;
		whitepawn3indx = 200, whitepawn3indy = 125;
		whitepawn4indx = 275, whitepawn4indy = 125;
		whitepawn5indx = 350, whitepawn5indy = 125;
		whitepawn6indx = 425, whitepawn6indy = 125;
		whitepawn7indx = 500, whitepawn7indy = 125;
		whitepawn8indx = 575, whitepawn8indy = 125;

		whiterock1indx = 50, whiterock1indy = 50;
		whiterock2indx = 575, whiterock2indy = 50;

		whitebishop1indx = 125, whitebishop1indy = 50;
		whitebishop2indx = 500, whitebishop2indy = 50;

		whiteknight1indx = 200, whiteknight1indy = 50;
		whiteknight2indx = 425, whiteknight2indy = 50;

		whitequeenindx = 350, whitequeenindy = 50;
		whitekingindx = 275, whitekingindy = 50;

		bluepawn1indx = 50, bluepawn1indy = 500;
		bluepawn2indx = 125, bluepawn2indy = 500;
		bluepawn3indx = 200, bluepawn3indy = 500;
		bluepawn4indx = 275, bluepawn4indy = 500;
		bluepawn5indx = 350, bluepawn5indy = 500;
		bluepawn6indx = 425, bluepawn6indy = 500;
		bluepawn7indx = 500, bluepawn7indy = 500;
		bluepawn8indx = 575, bluepawn8indy = 500;

		bluerock1indx = 50, bluerock1indy = 575;
		bluerock2indx = 575, bluerock2indy = 575;

		bluebishop1indx = 125, bluebishop1indy = 575;
		bluebishop2indx = 500, bluebishop2indy = 575;

		blueknight1indx = 200, blueknight1indy = 575;
		blueknight2indx = 425, blueknight2indy = 575;

		bluequeenindx = 350, bluequeenindy = 575;
		bluekingindx = 275, bluekingindy = 575;
		//
		//str all charectars graph value
		// king,queen,rock,bishop,pawn

		//:::::::::::::::::::::::::::::
		//int whitepawn1 = 1, whitepawn2 = 1, whitepawn3 = 1, whitepawn4 = 1, whitepawn5 = 1, whitepawn6 = 1, whitepawn7 = 1, whitepawn8 = 1;
		whitepawnflag1 = 0, whitepawnflag2 = 0, whitepawnflag3 = 0, whitepawnflag4 = 0, whitepawnflag5 = 0, whitepawnflag6 = 0, whitepawnflag7 = 0, whitepawnflag8 = 0;
		//int whiterock1 = 1, whiterock2 = 1, whitebishop1 = 1, whitebishop2 = 1, whiteknight1 = 1, whiteknight2 = 1, whiteking = 1, whitequeen = 1;
		whiterockflag1 = 0, whiterockflag2 = 0, whitebishopflag1 = 0, whitebishopflag2 = 0, whiteknightflag1 = 0, whiteknightflag2 = 0, whitekingflag = 0, whitequeenflag = 0;
		//:::::::::::::::::::::::::::::
		//int bluepawn1 = 1, bluepawn2 = 1, bluepawn3 = 1, bluepawn4 = 1, bluepawn5 = 1, bluepawn6 = 1, bluepawn7 = 1, bluepawn8 = 1;
		bluepawnflag1 = 0, bluepawnflag2 = 0, bluepawnflag3 = 0, bluepawnflag4 = 0, bluepawnflag5 = 0, bluepawnflag6 = 0, bluepawnflag7 = 0, bluepawnflag8 = 0;
		//int bluerock1 = 1, bluerock2 = 1, bluebishop1 = 1, bluebishop2 = 1, blueknight1 = 1, blueknight2 = 1, blueking = 1, bluequeen = 1;
		bluerockflag1 = 0, bluerockflag2 = 0, bluebishopflag1 = 0, bluebishopflag2 = 0, blueknightflag1 = 0, blueknightflag2 = 0, bluekingflag = 0, bluequeenflag = 0;

		//int whitequeen = 24, whiteking = 25;
		//int bluequeen = 44, blueking = 45;

		//end all charectars graph value

		//Board initialize
		chessboard[0][0] = 18;
		chessboard[0][1] = 20;
		chessboard[0][2] = 22;
		chessboard[0][3] = 24;
		chessboard[0][4] = 25;
		chessboard[0][5] = 23;
		chessboard[0][6] = 21;
		chessboard[0][7] = 19;
		chessboard[1][0] = 10;
		chessboard[1][1] = 11;
		chessboard[1][2] = 12;
		chessboard[1][3] = 13;
		chessboard[1][4] = 14;
		chessboard[1][5] = 15;
		chessboard[1][6] = 16;
		chessboard[1][7] = 17;
		int iiii, jjjj;
		for (iiii = 2; iiii <= 5; iiii++)
		{
			for (jjjj = 0; jjjj < 8; jjjj++)
			{
				chessboard[iiii][jjjj] = 0;
			}
		}
		chessboard[6][0] = 30;
		chessboard[6][1] = 31;
		chessboard[6][2] = 32;
		chessboard[6][3] = 33;
		chessboard[6][4] = 34;
		chessboard[6][5] = 35;
		chessboard[6][6] = 36;
		chessboard[6][7] = 37;
		chessboard[7][0] = 38;
		chessboard[7][1] = 40;
		chessboard[7][2] = 42;
		chessboard[7][3] = 44;
		chessboard[7][4] = 45;
		chessboard[7][5] = 43;
		chessboard[7][6] = 41;
		chessboard[7][7] = 39;
	}
}

void checkvalue()
{
	printf("%d  %d\n", roomx, roomy);
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%d\t", chessboard[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	
	//iSetTimer(1000,checkvalue);
	//iSetTimer(100, allcharectercontrol);
	//iSetTimer(100, roomselection);
	/*
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%d\t", chessboard[i][j]);
		}
		printf("\n");
	}
	*/
	//place your own initialization codes here.
	iInitialize(1350, 700, "chess");
	return 0;
}
