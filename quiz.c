#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int question(int ,int *);
void main()
{
int n,r,uq,x,scr=0,q=0;
char name[20];
printf("do you want to play the quiz press 1\n");
scanf("%d",&n);
if(n==1)
{
printf("Enter your Name\n");
fflush(stdin);
scanf("%[^\n]s",name);
printf("Roll no.\n");
scanf("%d",&r);
printf("start the quiz\n");
printf("your name - %s\n",name);
printf("your score %d\n",scr);
srand(time(0));
for(x=1;x<=10;x++)
{
uq=rand()%20+1;
q=q+1;
printf("Q.no %d",q);
question(uq,&scr);
}
}
printf("\nyour name - %s\n",name);
printf("\nyour score %d\n",scr);
if(scr<=10&&scr>=8)
{
printf("Results - Pass with O grade");
}
else if(scr<8&&scr>=6)
{
printf("Results - Pass with A grade");
}
else if(scr<6&&scr>=4)
{
printf("Results - just pass");
}
else 
{
printf("Results - fail");
}
getch();
}
int question(int w,int *h)
{
int op;
if(w==1)
{
printf("\nLearn from yesterday, live for today, hope for tomorrow. The important thing is not to stop ____________.’ Fill in the blank to complete this quotation by Albert Einstein.\n 1. Wishing\n 2. Questioning\n 3. Thinking\n ");
printf("put your option\t");
scanf("%d",&op);
if(op==2)
{
printf("\n correct answer\n");
printf("\n you score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 2\n");
}
}
if(w==2)
{
printf("\n The name of which spice comes from the French word for NAIL?\n 1. Cinnamon\n 2. Cardamom\n 3. Clove\n ");
printf("put your option\t");
scanf("%d",&op);
if(op==3)
{
printf("\n correct answer\n");
printf("\n you score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 3\n");
}
}
if(w==3)
{
printf("\n In India, the train Lifeline Express is a…\n 1. Hospital\n 2. Bank\n 3. Primary School\n ");
printf("put your option\t");
scanf("%d",&op);
if(op==1)
{
printf("\n correct answer\n");
printf("\n you score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 1\n");
}
}
if(w==4)
{
printf("\n Which is the longest bone of human body \n 1.Fumer 2.Radius 3.Ulna \n");
printf("put your option\t");
scanf("%d",&op);
if(op==1)
{
printf("\ correct answer\n");
printf("\n you score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 1\n");
}
}
if(w==1)
{ printf("\n Which Asian mountain is also known as the Savage Mountain due to the extreme difficulty of ascent?\n 1. Kanchenjunga\n 2. K2\n 3. Lhotse\n ");
printf("put your option\t");
scanf("%d",&op);
if(op==2)
{
printf("\n correct answer\n");
printf("\n you score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 2\n");
}
}
if(w==5)
{
printf("\n In 1964, which portfolio was given to Indira Gandhi in the government of Lal Bahadur Shastri?\n 1. Defence\n 2. Home\n 3. Information and Broadcasting\n");
printf("put your option\t");
scanf("%d",&op);
if(op==3)
{
printf("\n correct answer\n");
printf("\n you score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 3\n");
}
}
if(w==6)
{
printf("\n In Alice’s Adventures in Wonderland, which game was played by the Queen of Hearts using hedgehogs as balls?\n 1. Quintet\n 2. Quidditch\n 3. Croquet\n");
printf("put your option\t");
scanf("%d",&op);
if(op==3)
{
printf("\n correct answer\n");
printf("\n you score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 3\n");
}
}
if(w==7)
{
printf("\n With which unfortunate incident would you associate the warplane Enola Gay?\n 1. Sinking of the ship Bismark\n 2. The Hiroshima bombing\n 3. Storming of Bastille\n");
printf("put your option\t");
scanf("%d",&op);
if(op==2)
{
printf("\n correct answer\n");
printf("\n you score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 2\n");
}
}
if(w==8)
{
printf("\n Odhra Magadha is the precursor to which Indian dance form?\n 1. Kuchipudi\n 2. Kathak\n 3. Odissi\n ");
printf("put your option\t");
scanf("%d",&op);
if(op==3)
{
printf("\n correct answer\n");
printf("\n you score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 3\n");
}
}
if(w==9)
{
printf("\n Who composed music for the 1969 film Goopy Gyne Bagha Byne?\n 1. Satyajit Ray\n 2. Ravi Shankar\n 3. Shiv-Hari\n ");
printf("put your option\t");
scanf("%d",&op);
if(op==1)
{
printf("\n correct answer\n");
printf("\n you score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 1\n");
}
}
if(w==10)
{
printf("\n Where in the human body is the stapedius muscle situated?\n 1. Nose\n 2. Ears\n 3. Leg\n");
printf("put your option\t");
scanf("%d",&op);
if(op==2)
{
printf("\n correct answer\n");
printf("\nyou score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 2\n");
}
}
if(w==11)
{
printf("\n Apart from Venus, which planet rotates from east to west\n 1. Jupiter\n 2. Mars\n 3. Uranus\n");
printf("put your option\t");
scanf("%d",&op);
if(op==3)
{
printf("\n correct answer\n");
printf("\nyou score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 3\n");
}
}
if(w==12)
{
printf("\n Which country was Herodotus referring to when he said: ‘There is no country that possesses so many wonders, nor any, that such a number of works that defy description’?\n 1. Egypt\n 2. China\n 3.Germany\n");
printf("put your option\t");
scanf("%d",&op);
if(op==1)
{
printf("\n correct answer\n");
printf("\nyou score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 1\n");
}
}
if(w==13)
{
printf("\n Which famous world leader was accused at the Rivonia Trial?\n 1. Martin Luther King\n 2. Subhas Chandra Bose\n 3.Nelson Mandela\n");
printf("put your option\t");
scanf("%d",&op);
if(op==3)
{
printf("\n correct answer\n");
printf("\nyou score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 3\n");
}
}
if(w==14)
{
printf("\n In Hindu mythology, who has a mansion named Vaijayanta and a sword named Paranjaya?\n 1. Vishnu\n 2. Indra\n 3.Shiva\n");
printf("put your option\t");
scanf("%d",&op);
if(op==2)
{
printf("\n correct answer\n");
printf("\nyou score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 2\n");
}
}
if(w==15)
{
printf("\n What is parasol a kind of?\n 1. Umbrella\n 2. Footwear\n 3.Bracelet\n");
printf("put your option\t");
scanf("%d",&op);
if(op==1)
{
printf("\n correct answer\n");
printf("\nyou score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 1\n");
}
}
if(w==16)
{
printf("\n What was the pen name of William Sydney Porter?\n 1. Mark Twain\n 2. Oscar Wilde\n 3. O’ Henry\n");
printf("put your option\t");
scanf("%d",&op);
if(op==3)
{
printf("\n correct answer\n");
printf("\nyou score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 3\n");
}
}
if(w==17)
{
printf("\n Which spice consists of the seed of the Myristica fragrans, a tropical evergreen tree?\n 1. Cardamom\n 2. Nutmeg\n 3.Clove\n");
printf("put your option\t");
scanf("%d",&op);
if(op==2)
{
printf("\n correct answer\n");
printf("\nyou score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 2\n");
}
}
if(w==18)
{
printf("\n Which leader wrote the Srimad Bhagavad Gita Rahasya while he was jailed in Myanmar?\n 1. Bal Gangadhar Tilak\n 2. Motilal Nehru\n 3.Gopal Krishna Gokhale\n");
printf("put your option\t");
scanf("%d",&op);
if(op==1)
{
printf("\n correct answer\n");
printf("\nyou score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 1\n");
}
}
if(w==19)
{
printf("\n Who was born in Gwalior in 1945 to Haafiz Ali Khan?\n 1. Amjad Ali Khan\n 2. Bismillah Khan\n 3.Ali Akbar Khan\n");
printf("put your option\t");
scanf("%d",&op);
if(op==1)
{
printf("\n correct answer\n");
printf("\nyou score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 1\n");
}
}
if(w==20)
{
printf("\n Which is the largest internal organ in the human body?\n 1. Liver\n 2.Heart \n 3.Lung\n");
printf("put your option\t");
scanf("%d",&op);
if(op==1)
{
printf("\n correct answer\n");
printf("\nyou score is %d\n",*h+1);
*h=*h+1;
return(0,*h);
}
else
{
printf("incorrect option correct is 1\n");
}
}
}


     
