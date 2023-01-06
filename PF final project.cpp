#include <iostream>
#include <unistd.h>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

void fireworkTrailRight(int,int);
void fireworkTrailRight(int offset);
//new parameters 
void multiexplosion1(int xOffset);
void multiexplosion2(int xOffset);
void multiexplosion3(int xOffset);
void multiexplosion4(int xOffset);
void multiexplosion5(int xOffset);
void multiexplosion6(int xOffset);
void multiexplosion7(int xOffset);
void multiexplosion8(int xOffset);
// xOffset acts as a pointer 
void delay()
{
sleep(2);
}
//global variable
int h=0,h1=0,h2=0,h3=0,h4=0,h5=0,h6=0,h7=0,h8=0;
//global variable
int s1,s2,s3,s4,s5,s6,s7,s8;
int main()
{//main
char choice;
do
{
//welcoming the user and asking for an option.
cout<<"Welcome to The Firework Show\n";
cout<<"To display a glorious crosette firework, press 1\n";
cout<<"To display a randomly exploding firework, press 2\n";
cout<<"To generate a firework of your choice, press 3\n";
cout<<"To exit The Firework Show, press 0\n";
cin>>choice;

switch(choice)
{//switch
case '1':
{//case1

	int xPos = 50;
	
	
	for (int y = 0; y <= 7; y++)
	{
	
		// Move y number of lines down
		
		for (int y = 5+3; y > 0; y--)
		{	
			cout << endl;
		}
		
		for (int x = 5+3; x > y; x--)
		{	
			cout << endl;
		}
			// Move xPos spaces to the right
			for (int x = 0; x < xPos; x++)
			{
				cout << " ";
			}
			cout << "*"<<flush<<endl;
		
		usleep(500000);
		system("clear");
		
		
		
	}
	//end of line 
	fireworkTrailRight(50);
	system("clear");
	delay();
	multiexplosion1(25);
	multiexplosion1(50);
	multiexplosion1(75);
	multiexplosion2(10);
	multiexplosion2(85);
	multiexplosion3(25);
	multiexplosion4(50);
	multiexplosion5(75);
	system("clear");
	
	
	cout<<"To restart The Firework Show, press Y\nTo exit The Firework show, press N \n";
cin>>choice;
	
	
	}//case1
	
	break;
	
	case '2':
	{//case2
	int xPos = 50;
	
	
	for (int y = 0; y <= 7; y++)
	{
	
		// Move y number of lines down
		
		for (int y = 5+3; y > 0; y--)
		{	
			cout << endl;
		}
		
		for (int x = 5+3; x > y; x--)
		{	
			cout << endl;
		}
			// Move xPos spaces to the right
			for (int x = 0; x < xPos; x++)
			{
				cout << " ";
			}
			cout << "*"<<flush<<endl;
		
		usleep(500000);
		system("clear");
		
		
		
	}
	//end of line 
	fireworkTrailRight(50);
	system("clear");
	srand(time(0));
	for(int i=1;i<=6;i++)
	{//for
	int random1=rand()%76+10;
	int random2=rand()%10+1;
	fireworkTrailRight(random1,random2);
	system("clear");
	}//for
	
	
	
	
	
	
	
	cout<<"To restart The Firework Show, press Y\nTo exit The Firework show, press N \n";
cin>>choice;
	
	}//case2
	
	break;
	
	case '3':
	
	{//case3
	int xPos = 50;
	//input for height
	cout<<"Enter 8  values for the height of explosion\nThe values for the height should be between 0 and 10 inclusively"<<endl;
	cin>>h>>h1>>h2>>h3>>h4>>h5>>h6>>h7;
	if (h>10 || h<0 ||h1>10 || h1<0 || h2>10 || h2<0 || h3>10 || h3<0 || h4>10 || h4<0 || h5>10 || h5<0 || h6>10 || h6<0 || h7>10 || h7<0)
	{
	cout<<"error!Enter values between 0 and 10 inclusively"<<endl;
	//return 0;    here
	}
	//input for space
	cout<<"Please enter 8 values for the spacing beweem the explosions\nThe values should be between 10 and 85 inclusively."<<endl;
	cin>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8;
	if (s1>85 || s1<10 ||s2>85 || s2<10 || s3>85 || s3<10 || s4>85 || s4<10 || s5>85 || s5<10 || s6>85 || s6<10 || s7>85 || s7<10 || s8>85 || s8<10)
	{
	cout<<"Error!Enter values between 10 and 85 inclusively"<<endl;
	//return 0;    here
	}
	
	for (int y = 0; y <= 7; y++)
	{
	
		// Move y number of lines down
		
		for (int y = 5+3; y > 0; y--)
		{	
			cout << endl;
		}
		
		for (int x = 5+3; x > y; x--)
		{	
			cout << endl;
		}
			// Move xPos spaces to the right
			for (int x = 0; x < xPos; x++)
			{
				cout << " ";
			}
			cout << "*"<<flush<<endl;
		
		usleep(500000);
		system("clear");
		
		
		
	}
	//end of line 
	fireworkTrailRight(50);
	system("clear");
	delay();
	//new functions called 
	multiexplosion1(s1);
	multiexplosion2(s2);
	multiexplosion3(s3);
	multiexplosion4(s4);
	multiexplosion5(s5);
	multiexplosion6(s6);
	multiexplosion7(s7);
	multiexplosion8(s8);
system("clear");
cout<<"To restart The Firework Show, press Y\nTo exit The Firework show, press N \n";
cin>>choice;



	}//case3
	break;
	case '0':
	{//case0
	cout<<"The firework show has been ended;\n";
	}//case0
	break;
	default:
	cout<<"You have entered an invalid number. Try again\n";
}//switch
if(choice=='N'||(choice=='n'))
{
cout<<"The Firework Show has ended.Thank you for being part of it!\n";
break;
}
}while(!((choice=='0')||(choice=='1')||(choice=='2')||(choice=='3'))||(choice=='Y')||(choice=='y'));



}//main

void fireworkTrailRight(int xOffset)
{
	const int rows = 5;
	const int columns = 5;

	int posarr[rows][columns];
	int count = 0;
	for (int y = rows; y > 0; y--)
	{
		// Go y-number of rows down
		for (int i = 0; i < y; i++)
		{
			cout << endl;
		}
		// Start from the max left column
		for (int x = y; x <= columns; x++)
		{
			for (int space = 0; space < (x + xOffset - rows); space++)
			{
				cout << " ";
			}
			cout << "*"; //left diagonal

			for (int space = 0; space < (columns - x); space++)
			{
				cout << " ";
			}
			cout << "*"; //middle line

			for (int space = 0; space < (columns - x); space++)
			{
				cout << " ";
			}
			cout << "*" << endl; // right diagonal

		}
		//cout << endl;
		for (int i = 0; i < xOffset - 8; i++)
		{
			cout << " ";
		}
		for (int i = rows; i > 0; i--)
		{
			cout << "* ";
		}
		for (int i = rows; i > 0; i--)
		{
			cout << "* ";
		}
		cout << endl;
		for (int x = columns; x >= y; x--)
		{
			for (int space = 0; space < (x + xOffset - rows); space++)
			{
				cout << " ";
			}
			cout << "*"; // lowerleft diagonal

			for (int space = (columns - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*"; // bottom middle line

			for (int space = (columns - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*" << endl; // bottom right diagonal
		}

		usleep(100000);
		if (y > 1)
		{
			system("clear");
		}

	}

}
//multi explosion 
void multiexplosion1(int xOffset)
{

	const int rows1 = 5;
	const int columns1 = 5;

	int posarray[rows1][columns1];
	int count = 0;
	for (int y = rows1; y > 0; y--)
	{
		// Go y-number of rows down
		for (int i = 0; i < y; i++)
		{
			cout << endl;
		}
		// Start from the max left column
		for (int x = y; x <= columns1; x++)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; //left diagonal

			for (int space = 0; space < (columns1 - x); space++)
			{
				cout << " ";
			}
			cout << "*"; //middle line

			for (int space = 0; space < (columns1 - x); space++)
			{
				cout << " ";
			}
			cout << "*" << endl; // right diagonal

		}
		for (int i = 0; i < xOffset - 8; i++)
		{
			cout << " ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		cout << endl;
		for (int x = columns1; x >= y; x--)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; // lowerleft diagonal

			for (int space = (columns1 - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*"; // bottom middle line

			for (int space = (columns1 - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*" << endl; // bottom right diagonal
		}
		usleep(100000);
		if (y > 1)
		{
			system("clear");
		}//sleep functio origional position 
	}


}
//multi explosion with hight difference
void multiexplosion2(int xOffset)
{
	const int rows1 = 5;
	const int columns1 = 5;

	int posarray[rows1][columns1];
	int count = 0;
	for (int y = rows1; y > 0; y--)
	{
		// Go y-number of rows down
		for (int i = 0; i < y+3; i++)
		{
			cout << endl;
		}
		// Start from the max left column
		for (int x = y; x <= columns1; x++)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; //left diagonal

			for (int space = 0; space < (columns1 - x); space++)
			{
				cout << " ";
			}
			cout << "*"; //middle line

			for (int space = 0; space < (columns1 - x); space++)
			{
				cout << " ";
			}
			cout << "*" << endl; // right diagonal

		}
		for (int i = 0; i < xOffset - 8; i++)
		{
			cout << " ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		cout << endl;
		for (int x = columns1; x >= y; x--)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; // lowerleft diagonal

			for (int space = (columns1 - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*"; // bottom middle line

			for (int space = (columns1 - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*" << endl; // bottom right diagonal
		}
		usleep(100000);
		if (y > 1)
		{
			system("clear");
		}//sleep functio origional position 
	}

}

//multi explosion with hight difference
void multiexplosion3(int xOffset)
{
	const int rows1 = 5;
	const int columns1 = 5;

	int posarray[rows1][columns1];
	int count = 0;
	for (int y = rows1; y > 0; y--)
	{
		// Go y-number of rows down
		for (int i = 0; i < y+10; i++)
		{
			cout << endl;
		}
		// Start from the max left column
		for (int x = y; x <= columns1; x++)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; //left diagonal

			for (int space = 0; space < (columns1 - x); space++)
			{
				cout << " ";
			}
			cout << "*"; //middle line

			for (int space = 0; space < (columns1 - x); space++)
			{
				cout << " ";
			}
			cout << "*" << endl; // right diagonal

		}
		for (int i = 0; i < xOffset - 8; i++)
		{
			cout << " ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		cout << endl;
		for (int x = columns1; x >= y; x--)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; // lowerleft diagonal

			for (int space = (columns1 - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*"; // bottom middle line

			for (int space = (columns1 - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*" << endl; // bottom right diagonal
		}
		usleep(100000);
		if (y > 1)
		{
			system("clear");
		}//sleep functio origional position 
	}
}
//multiexplosion with hight difference and radius difference 
void multiexplosion4(int xOffset)
{
	const int rows1 = 5;
	const int columns1 = 5;

	int posarray[rows1][columns1];
	int count = 0;
	for (int y = rows1; y > 0; y--)
	{
		// Go y-number of rows down
		for (int i = 0; i < y+10; i++)
		{
			cout << endl;
		}
		// Start from the max left column
		for (int x = y; x <= columns1; x++)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; //left diagonal

			for (int space = 0; space < ((columns1) - x); space++)
			{
				cout << " ";
			}
			cout << "*"; //middle line

			for (int space = 0; space < ((columns1) - x); space++)
			{
				cout << " ";
			}
			cout << "*" << endl; // right diagonal

		}
		for (int i = 0; i < xOffset - 8; i++)
		{
			cout << " ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		cout << endl;
		for (int x = columns1; x >= y; x--)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; // lowerleft diagonal

			for (int space = ((columns1) - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*"; // bottom middle line

			for (int space = ((columns1) - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*" << endl; // bottom right diagonal
		}
		usleep(100000);
		if (y > 1)
		{
			system("clear");
		}//sleep functio origional position 
	}
}
//multiexplosion with hight difference and radius difference 
void multiexplosion5(int xOffset)
{
	const int rows1 = 5;
	const int columns1 = 5;

	int posarray[rows1][columns1];
	int count = 0;
	for (int y = rows1; y > 0; y--)
	{
		// Go y-number of rows down
		for (int i = 0; i < y+10; i++)
		{
			cout << endl;
		}
		// Start from the max left column
		for (int x = y; x <= columns1; x++)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; //left diagonal

			for (int space = 0; space < ((columns1) - x); space++)
			{
				cout << " ";
			}
			cout << "*"; //middle line

			for (int space = 0; space < ((columns1) - x); space++)
			{
				cout << " ";
			}
			cout << "*" << endl; // right diagonal

		}
		for (int i = 0; i < xOffset - 8; i++)
		{
			cout << " ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		cout << endl;
		for (int x = columns1; x >= y; x--)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; // lowerleft diagonal

			for (int space = ((columns1) - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*"; // bottom middle line

			for (int space = ((columns1) - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*" << endl; // bottom right diagonal
		}
		usleep(100000);
		if (y > 1)
		{
			system("clear");
		}//sleep functio origional position 
	}
}	
void fireworkTrailRight(int random1,int random2)
{//random

{
int xOffset=random1;
	const int rows1 = 5;
	const int columns1 = 5;

	int posarray[rows1][columns1];
	int count = 0;
	for (int y = rows1; y > 0; y--)
	{
		// Go y-number of rows down
		for (int i = 0; i < y+random2; i++)
		{
			cout << endl;
		}
		// Start from the max left column
		for (int x = y; x <= columns1; x++)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; //left diagonal

			for (int space = 0; space < ((columns1) - x); space++)
			{
				cout << " ";
			}
			cout << "*"; //middle line

			for (int space = 0; space < ((columns1) - x); space++)
			{
				cout << " ";
			}
			cout << "*" << endl; // right diagonal

		}
		for (int i = 0; i < xOffset - 8; i++)
		{
			cout << " ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		cout << endl;
		for (int x = columns1; x >= y; x--)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; // lowerleft diagonal

			for (int space = ((columns1) - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*"; // bottom middle line

			for (int space = ((columns1) - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*" << endl; // bottom right diagonal
		}
		usleep(100000);
		if (y > 1)
		{
			system("clear");
		}//sleep functio origional position 
	}
}

}//random

void multiexplosion6(int xOffset)
{
	const int rows1 = 5;
	const int columns1 = 5;

	int posarray[rows1][columns1];
	int count = 0;
	for (int y = rows1; y > 0; y--)
	{
		// Go y-number of rows down
		for (int i = 0; i < y+h5; i++)
		{
			cout << endl;
		}
		// Start from the max left column
		for (int x = y; x <= columns1; x++)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; //left diagonal

			for (int space = 0; space < (columns1 - x); space++)
			{
				cout << " ";
			}
			cout << "*"; //middle line

			for (int space = 0; space < (columns1 - x); space++)
			{
				cout << " ";
			}
			cout << "*" << endl; // right diagonal

		}
		for (int i = 0; i < xOffset - 8; i++)
		{
			cout << " ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		cout << endl;
		for (int x = columns1; x >= y; x--)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; // lowerleft diagonal

			for (int space = (columns1 - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*"; // bottom middle line

			for (int space = (columns1 - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*" << endl; // bottom right diagonal
		}
		usleep(100000);
		if (y > 1)
		{
			system("clear");
		}//sleep functio origional position 
	}
}
//multiexplosion with hight difference and radius difference 
void multiexplosion7(int xOffset)
{
	const int rows1 = 5;
	const int columns1 = 5;

	int posarray[rows1][columns1];
	int count = 0;
	for (int y = rows1; y > 0; y--)
	{
		// Go y-number of rows down
		for (int i = 0; i < y+h6; i++)
		{
			cout << endl;
		}
		// Start from the max left column
		for (int x = y; x <= columns1; x++)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; //left diagonal

			for (int space = 0; space < ((columns1) - x); space++)
			{
				cout << " ";
			}
			cout << "*"; //middle line

			for (int space = 0; space < ((columns1) - x); space++)
			{
				cout << " ";
			}
			cout << "*" << endl; // right diagonal

		}
		for (int i = 0; i < xOffset - 8; i++)
		{
			cout << " ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		cout << endl;
		for (int x = columns1; x >= y; x--)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; // lowerleft diagonal

			for (int space = ((columns1) - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*"; // bottom middle line

			for (int space = ((columns1) - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*" << endl; // bottom right diagonal
		}
		usleep(100000);
		if (y > 1)
		{
			system("clear");
		}//sleep functio origional position 
	}
}
//multiexplosion with hight difference and radius difference 
void multiexplosion8
(int xOffset)
{
	const int rows1 = 5;
	const int columns1 = 5;

	int posarray[rows1][columns1];
	int count = 0;
	for (int y = rows1; y > 0; y--)
	{
		// Go y-number of rows down
		for (int i = 0; i < y+h7; i++)
		{
			cout << endl;
		}
		// Start from the max left column
		for (int x = y; x <= columns1; x++)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; //left diagonal

			for (int space = 0; space < ((columns1) - x); space++)
			{
				cout << " ";
			}
			cout << "*"; //middle line

			for (int space = 0; space < ((columns1) - x); space++)
			{
				cout << " ";
			}
			cout << "*" << endl; // right diagonal

		}
		for (int i = 0; i < xOffset - 8; i++)
		{
			cout << " ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		for (int i = rows1; i > 0; i--)
		{
			cout << "* ";
		}
		cout << endl;
		for (int x = columns1; x >= y; x--)
		{
			for (int space = 0; space < (x + xOffset - rows1); space++)
			{
				cout << " ";
			}
			cout << "*"; // lowerleft diagonal

			for (int space = ((columns1) - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*"; // bottom middle line

			for (int space = ((columns1) - x); space > 0; space--)
			{
				cout << " ";
			}
			cout << "*" << endl; // bottom right diagonal
		}
		usleep(100000);
		if (y > 1)
		{
			system("clear");
		}//sleep functio origional position 
	}
}




