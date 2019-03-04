#include "student.h"

student :: student()
{
	counter++;
	ID=counter;
	quizCapacity=3;
	GPA=0;
	quizScore=new float[quizCapacity];
	quizTaken=0;
	for(int i=0;i<quizCapacity;i++)
	{
		quizScore[i]=0;
	}
	cout<<"                               constructor was invoked for id          "<<ID<<endl;
}

student :: student(int quiz,float PA)
{
	counter++;
	ID=counter;
	quizCapacity=quiz;
	GPA=PA;
	quizScore=new float[quizCapacity];
	for(int i=0;i<quizCapacity;i++)
	{
		quizScore[i]=0;
	}
	quizTaken=0;
	cout<<"                                constructor was invoked for id            "<<ID<<endl;
}

student :: student(const student &polar)
{
	ID=polar.ID;
	GPA=polar.GPA;
	quizTaken=polar.quizTaken;
	quizCapacity=polar.quizCapacity;
	quizScore=new float[quizCapacity];
	for(int i=0;i<quizCapacity;i++)
	{
		quizScore[i]=polar.quizScore[i];
	}
	cout<<"constructor was invoked for id "<<ID<<endl;
}

student :: ~student()
{
	delete []quizScore;
	quizScore=nullptr;
	cout<<"                                 destructor was invoked for ID "<<ID<<endl;
}

void student :: addQuizScore(int sd)
{
	if(quizTaken<quizCapacity)
		{
			
					quizScore[quizTaken]=sd;
					quizTaken++;
		}
	else
	{
		cout<<"quiz capacity reached."<<endl;
		cout<<"can't enter maore quiz scores "<<endl;
	}
}

void student :: setGPA(float s)
{
      GPA=s;	
}

float student :: getGPA() const
{
	return GPA;
}

void student :: print() const
{
	cout<<"Student ID is : "<<ID<<endl;
	cout<<"student GPA is : "<<GPA<<endl;
	cout<<"Quiz Taken by student are : "<<quizTaken<<endl;
	for(int i=0;i<quizCapacity;i++)
	{
		cout<<"test score for quiz "<<i<<" of student with ID "<<ID<<" is "<<quizScore[i]<<endl;
	}

}

bool student :: compare(student pole)
{
	if(pole.GPA>GPA)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

void student :: updateScore(int number, int Score)
{
	if(quizScore[number]!=0)
	{
		quizScore[number]=Score;
	}
	else 
		cout<<"you have not given the quiz"<<endl;
}

/*void student :: moregpa(student sd,int s)
{

	student **temp;
	temp=new student *[4];
	for(int i=0;i<4;i++)
	{
		if(student.sa[0]->GPA>2.00)
		{

		*/


int student::counter=0;