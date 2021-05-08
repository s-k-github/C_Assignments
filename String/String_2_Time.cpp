/*2: Define a structure to represent time in hours (0-23), minutes
(0-59), and seconds (0-59), and then write a function that accepts an argument of type
time represented by this structure and updates it by one second & 30 seconds. */
#include <stdio.h>

typedef struct Time{
	int hours;
	int minutes;
	int seconds;
}Time;

void updateMin(int,Time*);
void updateSec(int,Time*);
void setTime(Time*);
void setHr(Time**);
void setMin(Time**);
void setSeconds(Time**);

int main()
{
	int hr = 0,mm = 0, ss = 0;
	printf(" hours: ");
	scanf("%d",&hr);
	printf(" miutes: ");
	scanf("%d",&mm);
	printf(" seconds: ");
	scanf("%d",&ss);
	Time t1  = {hr,mm,ss};
	setTime(&t1);
	printf("%d %d  %d \n",t1.hours,t1.minutes,t1.seconds );
	updateMin(1,&t1);
	updateSec(30,&t1);
	printf("%d %d  %d \n",t1.hours,t1.minutes,t1.seconds );
}
void setTime(Time *temp)
{
	setHr(&temp);
	setMin(&temp);
	setSeconds(&temp);
}
void setHr(Time **temp)
{
	int hr = (*temp) -> hours;
	if(hr >=0 && hr <24)
		(*temp) -> hours = hr;
	else
		(*temp) -> hours = 0;
	
}
void setMin(Time **temp)
{
	int mm = (*temp) -> minutes;
	int r1 = 0;
	if(mm >=0 && mm <60)
		(*temp)->minutes = mm;
	else
	{
		r1 = mm/60;

		if((*temp)->hours < 24)
		{
			(*temp)->hours += r1;
			(*temp)->minutes = mm % 60;
		}
		if((*temp)->hours > 23)
		{
			(*temp)->hours = 0;
		}
	}
}
void setSeconds(Time **temp)
{
	int ss = (*temp) ->seconds;
	int r2 = 0;
	if(ss >=0 && ss < 60)
		(*temp)->seconds = ss;
	else
	{
		r2 = ss /60;
		if((*temp)->minutes <= 59)
		{
			(*temp)->minutes += r2;
			(*temp)->seconds = ss % 60;
		}
		if((*temp)->minutes > 59)
		{
			(*temp)->hours+=((*temp)->minutes/60);
			(*temp)->minutes = 0;
		}
		if((*temp)->hours > 23)
			(*temp)->hours = 0;
	}
}

void updateMin(int mm, Time *temp)
{
	int iTemp = (temp) -> minutes;
	(temp) -> minutes = iTemp+ mm;
	if((temp)->minutes > 59)
		setHr(&temp);
}

void updateSec(int ss, Time *temp)
{
	int iTemp = temp -> seconds;
	temp -> seconds = iTemp + ss;
	int iMin = (temp -> seconds) / 60;
	if(temp -> seconds > 59)
		updateMin(iMin,temp);
}
