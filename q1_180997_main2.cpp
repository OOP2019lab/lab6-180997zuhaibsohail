#include <iostream>
#include "student.h"
using namespace std;


int main()
{
	student array[3]={ student(3,2), student(3,3), student(4,2.33)};
	array[0].addQuizScore(1);
	array[0].addQuizScore(4);
	array[0].addQuizScore(10);
	array[1].addQuizScore(10);
	array[1].addQuizScore(4);
	array[1].addQuizScore(9);
	array[2].addQuizScore(9);
	array[2].addQuizScore(8);
	array[2].addQuizScore(7);
	array[0].print();
	array[1].print();
	array[2].print();

	student **sa=new student *[4];
	sa[0]=new student(3,2);
	sa[1]=new student(3,3);
	sa[2]=new student(4,2.33);
	sa[3]=new student(4,1);

	sa[0]->addQuizScore(1);
	sa[0]->addQuizScore(4);
	sa[0]->addQuizScore(10);
	sa[1]->addQuizScore(10);
	sa[1]->addQuizScore(4);
	sa[1]->addQuizScore(9);
	sa[2]->addQuizScore(9);
	sa[2]->addQuizScore(8);
	sa[2]->addQuizScore(7);
	sa[3]->addQuizScore(2);
	sa[3]->addQuizScore(3);
	for(int k=0;k<4;k++)
	{
		sa[k]->print();
	}
	for(int i=0;i<4;i++)
	{
		if(sa[i].getGPA>2.00)
		{
			sa[0]->print();
			sa[1]->print();
			sa[2]->print();
			array[0].print();
			array[1].print();
			array[2].print();
		}
	}
	student **temp=new student *[4];;

	for(int i=0;i<4;i++)
	{
		if(sa[i].getGPa>sa[i+1])
		{
			temp[i]=sa[i];
		}
	}
    delete []temp;
    temp=nullptr;
    delete []sa;
    sa=nullptr

	system("pause");


}
/* constructor was invoked for id            1
   constructor was invoked for id            2
   constructor was invoked for id            3
    constructor was invoked for id            4
                                constructor was invoked for id            5
                                constructor was invoked for id            6
                                constructor was invoked for id            7*/
