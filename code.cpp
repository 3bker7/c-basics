#include <iostream>
using namespace std;
int main()

// ركز علي الاقواس مهمة جدا //


{                                 //While LOOP//
	/*int counter = 1, sum = 0, num = 0;
	while (counter <= 6 && num != 1)
	{
		cout << "entre num if you cancel entre 1\n";
		cin >> num;
		sum += num;
		counter++;
	}
	cout << sum<< "\n";*/

	//IF && ELSE//

/*int grade;
cout << "Entre grade \n";
cin >> grade;
if (grade >= 50)
{
	cout << "You Succed\n";
}
else
{
	cout << "Sorry, You Failed\n";
}*/
//IF && Else && Else IF//


/*int grade;
cout << "Enter Your Grade\n";
cin >> grade;
if (grade >= 100)
{
	cout << "A\n";
}
else if (grade >= 90)

	cout << "B\n";

else if (grade >= 80)

	cout << "c\n";

else if (grade >= 70)

	cout << "D\n";

else if (grade >= 60)

	cout << "E\n";

else

	cout << "F\n";*/

	//HR WITH IF && ELSE//

/*	char status, sex;
	int age;
	cout << "Whats Your Status Life\n";
	cin >> status;

	cout << "Whats Your Sex\n";
	cin >> sex;

	cout << "How Old are you\n";
	cin >> age;

	if (status == 'm' || (status == 's' && sex == 'm' && age >= 30) || (status == 's' && sex == 'f' && age >= 25))
	{
		cout << "Succedd we will happy to job with me\n";
	}
	else
		cout << "sorry you faild\n"; */

		//While//
/*int num = 0, sum = 0;
while (num >= 0)
{
	cout << "enter possitive number to check it \n";
	cin >> num;
	sum += num;
}
cout << sum <<" " << "this is positive\n";*/

//Switch//
/*int num;
cout << "enter num to know num chose it\n";
cin >> num;
switch (num)
{
case 5:
		cout << "A \n"; break;

case 10:
	cout << "B \n"; break;

case 15:
	cout << "C\n"; break;
default:
	cout << "F \n";

}*/


//FOR LOOP//
/*int grade = 0, sum = 0;
for (int counter = 1; counter <= 6; counter++)
{
	cout << "entre grade\n";
	cin >> grade;
	sum += grade;
}
cout << "grdae is" << sum / 6 << "\n";*/


/*for (int counter =0; counter <= 100; counter ++)
{
	cout << counter << "\n";
}*/

	/*for (int counter = 10; counter >= 0; counter--)
	{
		cout << counter << "\n";
	}*/

/*for ( int counter = 2 ; counter <= 20 ; counter +=2)
{
	cout << counter << "\n";
}*/

								// For Loop && IF //

					
/*int num=0, even=0, odd=0;
for (int counter = 1; counter <= 10; counter++)
{
	cout << "enter number \n";
	cin >> num;
	if (num%2==0)
	{
		even+=num;
	}
	else
	{
		odd += num;
	}
	}
cout << "number even" <<" "<< even << "\n";
cout << "number odd" <<" "<< odd << "\n"; */


int num, factorial = 1;
cout << "entre numbre \n";
cin >> num;
if (num < 0)
	cout << "sorry, write possitive number only \n";
else
for (int counter = 1; counter <= num; counter++)

	factorial = factorial*counter;
cout << "factorial is" << " " << factorial << "\n";

}
