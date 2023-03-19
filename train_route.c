//Santanu Paik//
//Train Station Finding Utility//
#include<stdio.h>
int main()
{
//Defining All the Variables//
	char * s1,* s2,* s3,* s4,* s5,* s6,* s7,* s8,* s9,* s10,* s11,* s12;
	char * g1,* g2,* g3,* g4,* q1,* q2,* q3,* q4,* q5,* e1,* e2,* e3,* e4,* e5,* i1,* i2,* i3,* i4,* i5;
	int a1,a2,a3,a4,a5;

//Defining Station Names//
	s1="Sealdah";
	s2="Park Circus";
	s3="Ballygunge";
	s4="Lake Gardens";
	s5="Tollygunge";
	s6="New Alipore";
	s7="Majerhat";
	s8="Brace Bridge";
	s9="Sontoshpur";
	s10="Akra";
	s11="Nangi";
	s12="Budge Budge";

//Defining Greetings//
	g1="\nWelcome to Train Assistant Alpha v0.01 !\n";
	g2="\nSTATION LAYOUT:";
	g3="\n ○ Sealdah      (1)\n |\n ○ Park Circus  (2)\n |\n ○ Ballygunge   (3)\n |\n ○ Lake Gardens (4)\n |\n ○ Tollygunge   (5)\n |\n ○ New Alipore  (6)\n |\n ○ Majerhat     (7)\n |\n ○ Brace Bridge (8)\n |\n ○ Sontoshpur   (9)\n |\n ○ Akra         (10)\n |\n ○ Nangi        (11)\n |\n ○ Budge Budge  (12)\n";

//Defining Error Messages//
	e1="Invalid Choice :(";
	
//Defining QnA Templates//
	q1="What do you wish to know ?\n> (1)Transit Info, (2)Train Info, (3)Help\n> ";
	q2="Destination ?\n> ";
	q3="Which Station are you at or closest to right now ?\n> ";
	q4="When do you wish to board ?";

//Functions//
	printf("%s%s%s\n",g1,g2,g3);
	
	printf("%s",q1);
	scanf("%d",&a1);
	if(a1==1)
	printf("%s",q2);
	else if(a1==2)
	printf("%s",q4);
	else
	printf("Error !!");
	
	scanf("%d",&a2);
	if(a2==1)
	printf("Zero Minutes !");
	else
	printf("error!");
	// PROGRAM IS STILL INCOMPLETE !! //
	return 0;
}
