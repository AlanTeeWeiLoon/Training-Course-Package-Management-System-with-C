#include <stdio.h>
#include <stdlib.h>
#include  <string.h>
	
struct detail{//struct some detail of participant
		char name[20],gender[20],course[20],vegeornot[20],payment_method[20] , ic[20];
		int total_payment  ,total_fee, receivable ;
	}participant[100];
	
void cannot_open(FILE* f1){//function to detect file that cannot open
	    if ( f1 == NULL ) {
	        printf("File cannot be opened/created.");
	        return;
	    }
	}

void login(){ //some function for admin used only need login required
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="0000";
    do
{
	
    printf("\n  ++++++++++++++++++++++++++++++  LOGIN FIRST  ++++++++++++++++++++++++++++++  ");
    printf(" \n\n                  ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n\n                  ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword); 
		if(strcmp(uname,"user")==0 && strcmp(pword,"0000")==0)
	{
	printf("  \n\n\n\t\t\tLOGIN SUCCESSFULLY");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getch();//holds the screen
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		
		getch();
		
		}
		system("cls");
		
}
		
void write_schedule(){ //function for admin to create schedule
		login(); //login require
	    FILE* f1;
	    f1 = fopen("Training Schedule.txt", "w");
	    char course[100];
	    char day[100];
	    char date[100];
	    char yesorno; 
	    char no[100];
	    char available = 5;
	    cannot_open(f1);
	    fprintf(f1,"\n____________________________________________________________________________________________________________");
		fprintf(f1,"\n| NO |          Course          |     Day     |      Admin      |            Payment Rate Per Day          |");
		fprintf(f1,"\n|    |                          |             |       Fee       |                    (RM)                  |");
		fprintf(f1,"\n|    |                          |             |      (RM)       |------------------------------------------|");
		fprintf(f1,"\n|    |                          |             |                 |  Fee  |     Meal     |       Meal        |");
		fprintf(f1,"\n|    |                          |             |                 |       | (vegetarian) |  (non-vegetarian) |");
		fprintf(f1,"\n|____|__________________________|_____________|_________________|_______|______________|___________________|");
		fprintf(f1,"\n|                                       SOFTWARE SKILL                                                     |");
		fprintf(f1,"\n|__________________________________________________________________________________________________________|");
		fprintf(f1,"\n|  1 |      Team Building       |      3      |       50        |  800  |      75      |        50         |");
		fprintf(f1,"\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		fprintf(f1,"\n|  2 |      Communications      |      3      |       50        |  650  |      50      |        25         |");
		fprintf(f1,"\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		fprintf(f1,"\n|  3 |      Corporate Career    |      3      |       50        |  750  |      50      |        25         |");
		fprintf(f1,"\n|    |           Growth         |             |                 |       |              |                   |");
		fprintf(f1,"\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		fprintf(f1,"\n|  4 |      Conflict Management |      3      |       50        |  600  |      50      |        25         |");
		fprintf(f1,"\n|____|__________________________|_____________|_________________|_______|______________|___________________|");
		fprintf(f1,"\n|                                       COMPUTING SKILL                                                    |");
		fprintf(f1,"\n|__________________________________________________________________________________________________________|");
		fprintf(f1,"\n|  5 |      Software Design     |      5      |       50        |  1000 |      50      |        25         |");
		fprintf(f1,"\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		fprintf(f1,"\n|  6 |      Web Development     |      5      |       50        |  1100 |      75      |        50         |");
		fprintf(f1,"\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		fprintf(f1,"\n|  7 |      Cloud Computing     |      3      |       50        |  1300 |      50      |        25         |");
		fprintf(f1,"\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		fprintf(f1,"\n|  8 |      Mobile Content      |             |                 |       |              |                   |");
		fprintf(f1,"\n|    |   Design and Development |      5      |       50        |  1200 |      75      |        50         |");
		fprintf(f1,"\n|    |         (MCDAD)          |             |                 |       |              |                   |");
		fprintf(f1,"\n|____|__________________________|_____________|_________________|_______|______________|___________________|\n");
		fprintf(f1,"\n\nNo\t\t\tSchedule\n");
	    
	    	
	    printf("\n___________________________________________________________________________________________________________");
		printf("\n| NO |          Course          |     Day     |      Admin      |            Payment Rate Per Day          |");
		printf("\n|    |                          |             |       Fee       |                    (RM)                  |");
		printf("\n|    |                          |             |      (RM)       |------------------------------------------|");
		printf("\n|    |                          |             |                 |  Fee  |     Meal     |       Meal        |");
		printf("\n|    |                          |             |                 |       | (vegetarian) |  (non-vegetarian) |");
		printf("\n|____|__________________________|_____________|_________________|_______|______________|___________________|");
		printf("\n|                                        SOFTWARE SKILL                                                    |");
		printf("\n|__________________________________________________________________________________________________________|");
		printf("\n|  1 |      Team Building       |      3      |       50        |  800  |      75      |        50         |");
		printf("\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		printf("\n|  2 |      Communications      |      3      |       50        |  650  |      50      |        25         |");
		printf("\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		printf("\n|  3 |      Corporate Career    |      3      |       50        |  750  |      50      |        25         |");
		printf("\n|    |           Growth         |             |                 |       |              |                   |");
		printf("\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		printf("\n|  4 |      Conflict Management |      3      |       50        |  600  |      50      |        25         |");
		printf("\n|____|__________________________|_____________|_________________|_______|______________|___________________|");
		printf("\n|                                        COMPUTING SKILL                                                   |");
		printf("\n|__________________________________________________________________________________________________________|");
		printf("\n|  5 |      Software Design     |      5      |       50        |  1000 |      50      |        25         |");
		printf("\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		printf("\n|  6 |      Web Development     |      5      |       50        |  1100 |      75      |        50         |");
		printf("\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		printf("\n|  7 |      Cloud Computing     |      3      |       50        |  1300 |      50      |        25         |");
		printf("\n|----|--------------------------|-------------|-----------------|-------|--------------|-------------------|");
		printf("\n|  8 |      Mobile Content      |             |                 |       |              |                   |");
		printf("\n|    |   Design and Development |      5      |       50        |  1200 |      75      |        50         |");
		printf("\n|    |         (MCDAD)          |             |                 |       |              |                   |");
		printf("\n|____|__________________________|_____________|_________________|_______|______________|___________________|\n\n\n");
		do{
			fflush(stdin);
	    	printf("\t\t\tEnter No. : ");
	        gets(no);
	        fputs(no, f1);
	        fputs("\t\t\t", f1);
	        printf("\t\t\tSchedule : ");
	        gets(date);
	        fputs(date, f1);
	        fputs("\t", f1);
	        fputs("\n", f1);
	        printf("\t\t\tDo you want to continue?(YES = Y , NO = N):");
	        scanf("%c",&yesorno);
	    } while( yesorno != 'n'  );
	    printf(" \n\n\t\t\tYour Schedule Created Successfully!\n\n");
	    fclose(f1);
	    getch();
	    system("cls");
	    return;
	}
	
void read_schedule(){ //function to read and display the schedule create by admin
	    FILE* f1;
	    char schedule;
	    f1 = fopen("Training Schedule.txt", "r");
	    cannot_open(f1);
	    schedule = fgetc(f1);
	    while (schedule != EOF ) {
	       	printf("%c",schedule);
	       	schedule = fgetc(f1);
	    }
	    fclose(f1);
		getch();
	}
	
void booking(){ //function allow user to make booking 
		read_schedule();
	    FILE* f1;
	    f1 = fopen("Participant.txt", "a");
	    struct detail participant;
	    char vyn  , yesorno, decide ;
	   	int no , admin_fee = 50 , meal_fee , course_fee , day ,payment_choice;
	   	participant.total_payment = 0;
	   	participant.receivable = 0;
	   	do{	
		   	fflush(stdin);	
			printf("\n\t\t\tWhich course you want to book(Please Enter The No)? :");
			scanf("%d",&no);
			
			switch(no){
				case  1:
					meal_fee = 75  , course_fee = 800 , day = 3;
					printf("\n\t\t\tCourse : Team Building\n\t\t\tDay : %d\n\t\t\tAdmin Fee(RM) : %d\n\t\t\tFee Per Day(RM) : %d\n\t\t\tMeal(vegetarian) Per Day(RM) : %d\n\t\t\tMeal(non-vegetarian) Per Day(RM) : 50\n",day,admin_fee,course_fee,meal_fee);	
					strcpy(participant.course,"TeamBuilding");
					break;
				case 2 :
					meal_fee = 50  , course_fee = 650 , day = 3;
					printf("\n\t\t\tCourse : Communications\n\t\t\tDay : %d\n\t\t\tAdmin Fee(RM) : %d\n\t\t\tFee Per Day(RM) : %d\n\t\t\tMeal(vegetarian) Per Day(RM) : %d\n\t\t\tMeal(non-vegetarian) Per Day(RM) : 25\n",day,admin_fee,course_fee,meal_fee);			
					strcpy(participant.course,"Communications");
					break;
				case 3:
					meal_fee = 50  , course_fee = 750 , day = 3;
					printf("\n\t\t\tCourse : Corporate Career Growth(CCG)\n\t\t\tDay : %d\n\t\t\tAdmin Fee(RM) : %d\n\t\t\tFee Per Day(RM) : %d\n\t\t\tMeal(vegetarian) Per Day(RM) : %d\n\t\t\tMeal(non-vegetarian) Per Day(RM) : 25\n",day,admin_fee,course_fee,meal_fee);
					strcpy(participant.course,"CCG");
					break;
				case 4:
					meal_fee = 50  , course_fee = 600 , day = 3;
					printf("\n\t\t\tCourse : Conflict Management\n\t\t\tDay : %d\n\t\t\tAdmin Fee(RM) : %d\n\t\t\tFee Per Day(RM) : %d\n\t\t\tMeal(vegetarian) Per Day(RM) : %d\n\t\t\tMeal(non-vegetarian) Per Day(RM) : 25\n",day,admin_fee,course_fee,meal_fee);
					strcpy(participant.course,"ConflictManagement");
					break;
				case 5:
					meal_fee = 50  , course_fee = 1000 , day = 5;
					printf("\n\t\t\tCourse : Software Design\n\t\t\tDay : %d\n\t\t\tAdmin Fee(RM) : %d\n\t\t\tFee Per Day(RM) : %d\n\t\t\tMeal(vegetarian) Per Day(RM) : %d\n\t\t\tMeal(non-vegetarian) Per Day(RM) : 25\n",day,admin_fee,course_fee,meal_fee);
					strcpy(participant.course,"SoftwareDesign");
					break;
				case 6:
					meal_fee = 75  , course_fee = 1100 , day = 5;
					printf("\n\t\t\tCourse : Web Development\n\t\t\tDay : %d\n\t\t\tAdmin Fee(RM) : %d\n\t\t\tFee Per Day(RM) : %d\n\t\t\tMeal(vegetarian) Per Day(RM) : %d\n\t\t\tMeal(non-vegetarian) Per Day(RM) : 50\n",day,admin_fee,course_fee,meal_fee);
					strcpy(participant.course,"WebDevelopment");
					break;
			 	case 7:
					meal_fee = 50  , course_fee = 1300 , day = 3;
					printf("\n\t\t\tCourse : Cloud Computing\n\t\t\tDay : %d\n\t\t\tAdmin Fee(RM) : %d\n\t\t\tFee Per Day(RM) : %d\n\t\t\tMeal(vegetarian) Per Day(RM) : %d\n\t\t\tMeal(non-vegetarian) Per Day(RM) : 25\n",day,admin_fee,course_fee,meal_fee);
					strcpy(participant.course,"CloudComputing");
					break;
				case 8:
					meal_fee = 75  , course_fee = 1200 , day = 5;
					printf("\n\t\t\tCourse : Mobile Content Design And Development(MCDAD)\n\t\t\tDay : %d\n\t\t\tAdmin Fee(RM) : %d\n\t\t\tFee Per Day(RM) : %d\n\t\t\tMeal(vegetarian) Per Day(RM) : %d\n\t\t\tMeal(non-vegetarian) Per Day(RM) : 50\n",day,admin_fee,course_fee,meal_fee);
					strcpy(participant.course,"MCDAD");
					break;
				default:
					fflush(stdin);
					printf("\n\t\t\tInvalid Input! Please Try Again \n");
					booking();
					break;
				}
				fflush(stdin);
				printf("\n\t\t\tEnter Your Name : ");
	   			gets(participant.name);
	   			fputs(" ",f1);
	   			fputs(participant.name,f1);
	   			
	   			printf("\n\t\t\tEnter Your IC Number : ");
	   			scanf("%s",&participant.ic);
	   	 	
	    		printf("\n\t\t\tGender(Male or Female) : ");
	    		scanf("%s",&participant.gender);
	    	
				printf("\n\t\t\tAre you vegetarian ?(Yes = y , No = n):");
				scanf("%s",&vyn);
				if(vyn == 'y'){ 	
					strcpy(participant.vegeornot,"Vegetarian"); //put text"vegetarian" into the file
				} 
				else{ 
					strcpy(participant.vegeornot,"Non-Vegetarian"); //put text"non-vegetarian" into the file
					meal_fee = meal_fee - 25;
				} 
				
				participant.total_fee = course_fee + admin_fee + (meal_fee*day);
				participant.total_payment= participant.total_fee + participant.total_payment;// when a participant book multiple course the total payment will include every course fee he/she booked
				printf("\n\t\t\tTotal Course Fee Is RM%d",participant.total_fee);
				printf("\n\t\t\tYour Total Payment Is RM%d\n",participant.total_payment);//display the total payment to user
				
				printf("\n\t\t\tDo You Want To Make Payment Now?(Yes = Y , No = N) ");//participant either must pay the full payment or outstanding the full payment. 
				scanf("%s",&decide);
				if(decide == 'y'){ // if user enter "y" the full payment of the course is done!
					printf("\n\n\t\t\t< How You Want To Pay Your Payment > ? \n\n\t\t\t 1.Cheque \n\t\t\t 2.Online-Banking \n\t\t\t 3.Cash \n");
					printf("\t\t\tPay With ? : ");
					scanf("%d",&payment_choice);
					if(payment_choice == 1){
						strcpy(participant.payment_method,"Cheque");
						printf("\t\t\tPayment Proceed ! ");
					}
					else if(payment_choice == 2){
						strcpy(participant.payment_method,"Online-Banking");
						printf("\t\t\tPayment Proceed ! ");
					}
					else if(payment_choice == 3 ){
						strcpy(participant.payment_method,"Cash");
						printf("\t\t\tPayment Proceed ! ");
					}
					else{
						printf("\n\t\t\tInvalid Input! Please Try Again !\n\n");
						printf("\t\t\t< How You Want To Pay Your Payment > ? \n\n\t\t\t 1.Cheque \n\t\t\t 2.Online-Banking \n\t\t\t 3. Cash \n");
						printf("\t\t\tPay With ? : ");
						scanf("%d",payment_choice);	
					}
				participant.receivable = 0;//0 outstanding amount from participant who made payment
				}
				else//participant total payment is outstanding
					printf("\n\t\t\tYour Payment is outstanding. Please Proceed During Or After Course !");
					participant.receivable = participant.total_fee;//outstanding amount to participant didnt made payment is equal to total course from every single booking
					strcpy(participant.payment_method,"Outstanding");
				
				fprintf(f1," %s %s %s %s %d %d %d %s\n",participant.ic,participant.gender,participant.course,participant.vegeornot,participant.total_fee,participant.total_payment,participant.receivable,participant.payment_method);
				printf(" \n\t\t\tBooking Successfully ! ");
				printf("\n\t\t\tDo You Want To Continue Booking?(Yes = Y , No = N):");
				scanf("%s",&yesorno);
			}while( yesorno != 'n' ); //if not equal n ,participant continue booking
			fclose(f1);
			getch();
	    	system("cls");
			return;	 		
	}
	
void check_availability(){//function for user to check the availability of each course
		FILE* f1;
		f1 = fopen("Participant.txt", "r");
		char line[99999];
		int C1 = 5 , C2 = 5 , C3 = 5 , C4 = 5 , C5 = 5 , C6 = 5 , C7= 5  , C8 = 5 ;
		while (fgets(line , 99999 , f1 ) != NULL){
			if ((strstr(line , "TeamBuilding"))){
				C1 = C1 - 1;//if scanned line include word "TeamBuilding" then do calculation			
			}
			else if((strstr(line , "Communications"))){
				C2 = C2 - 1;
			}
			else if((strstr(line , "CCG"))){
				C3 = C3 - 1;
			}
			else if((strstr(line , "ConflictManagement"))){
				C4 = C4 - 1;
			}
			else if((strstr(line , "SoftwareDesign"))){
				C5 = C5 - 1;
			}
			else if((strstr(line , "WebDevelopment"))){
				C6 = C6 - 1;
			}
			else if((strstr(line , "CloudComputing"))){
				C7 = C7 - 1;
			}
			else if((strstr(line , "MCDAD"))){
				C8 = C8 - 1;
			}
		}
		printf(" \n\t\t\t< Available Course For Booking > ");//display all the availability of courses to user
		printf("\n____________________________________________________________________________________________________________\n");
		printf("\n\t\t\tTeam Building = %d", C1);
		printf("\n\t\t\tCommunications = %d", C2);
		printf("\n\t\t\tCorporate Career Growth(CCG) = %d", C3);
		printf("\n\t\t\tConflict Management = %d", C4);
		printf("\n\t\t\tSoftware Design = %d", C5);
		printf("\n\t\t\tWeb Development = %d", C6);
		printf("\n\t\t\tCloud Computing = %d", C7);
		printf("\n\t\t\tMobile Content Design And Development(MCDAD) = %d", C8);
		printf("\n____________________________________________________________________________________________________________\n");
		fclose(f1);
		getch();
		system("cls");
	}
	
void search_participant(){//function for admin to search participant
	login();
	FILE* f1;
	f1 = fopen("Participant.txt", "r");
	char searchparticipant[20] ;
	struct detail participant;
	cannot_open(f1);
	printf("\t\t\t####################################################");
	printf("\n\t\t\t#                                                  #");
	printf("\n\t\t\t#                  Search Participant              #");
	printf("\n\t\t\t#                                                  #");
	printf("\n\t\t\t####################################################");
	printf("\n\n\n\t\t\tEnter Participant Name That You Want To Search : "); //enter valid name of participant
	scanf("%s", &searchparticipant);
	do{
		fscanf(f1,"%s %s %s %s %s %d %d %d %s\n",&participant.name,&participant.ic,&participant.gender,&participant.course,&participant.vegeornot,&participant.total_fee,&participant.total_payment,&participant.receivable,&participant.payment_method);
		if(strcmp(participant.name,searchparticipant) == 0){ //if input name and name inside the file matched then display detail
			fflush(stdin);
			printf("\n\t\t\t\t<<<Participant Found !>>> ");
			printf("\n\t\t\t______________________________________________________\n");
			printf("\n\t\t\t|\t Participant Name : %s",participant.name);
			printf("\n\t\t\t|\t               IC : %s",participant.ic);
			printf("\n\t\t\t|\t           Gender : %s",participant.gender);
			printf("\n\t\t\t|\t           Course : %s",participant.course);
			printf("\n\t\t\t|\t Vege Or Non-Vege : %s",participant.vegeornot);
			printf("\n\t\t\t|\t Total Course Fee : RM%d",participant.total_fee);
			printf("\n\t\t\t|\t    Total Payment : RM%d",participant.total_payment);
			printf("\n\t\t\t|\tAmount Receivable : RM%d",participant.receivable);
			printf("\n\t\t\t|\t   Payment Method : %s",participant.payment_method);
			printf("\n\t\t\t|______________________________________________________\n");
		}
	}while(!feof(f1));	
	fclose(f1);
	getch();
	system("cls");
}

void cancellation(){//function allow participant to cancel booked course
	struct detail participant;
	int line=0, line2=0;
	char pname[20], pcourse[30];
	char yesorno;
	FILE*f1, *f2;	
	f1=fopen("Participant.txt","r");
	if(f1 == NULL){
		printf("Error File");
	}
	else{
		printf("\t\t\t####################################################");
		printf("\n\t\t\t#                                                  #");
		printf("\n\t\t\t#                  Cancellation                    #");
		printf("\n\t\t\t#                                                  #");
		printf("\n\t\t\t####################################################");
		printf("\n\t\t\tEnter Your Name:");//input valid name
		scanf("\n%s", &pname);
		printf("\n\t\t\tEnter Course That You Want To Cancel :");//input course booked according the input name
		scanf("\n%s", &pcourse);
		while(!feof(f1)){
			fscanf(f1,"%s %s %s %s %s %d %d %d %s\n",&participant.name,&participant.ic,&participant.gender,&participant.course,&participant.vegeornot,&participant.total_fee,&participant.total_payment,&participant.receivable,&participant.payment_method);
			if((strcmp(participant.name, pname) == 0) && (strcmp(participant.course, pcourse) == 0)){
				printf("\n\t\t\t\t<<<Participant Found !>>> ");
				printf("\n\t\t\t______________________________________________________\n");
				printf("\n\t\t\t|\t Participant Name : %s",participant.name);
				printf("\n\t\t\t|\t               IC : %s",participant.ic);
				printf("\n\t\t\t|\t           Gender : %s",participant.gender);
				printf("\n\t\t\t|\t           Course : %s",participant.course);
				printf("\n\t\t\t|\t Vege Or Non-Vege : %s",participant.vegeornot);
				printf("\n\t\t\t|\t Total Course Fee : RM%d",participant.total_fee);
				printf("\n\t\t\t|\t    Total Payment : RM%d",participant.total_payment);
				printf("\n\t\t\t|\tAmount Receivable : RM%d",participant.receivable);
				printf("\n\t\t\t|\t   Payment Method : %s",participant.payment_method);
				printf("\n\t\t\t|______________________________________________________\n");
				printf("\n\t\t\tConfirm Cancel The Course You Booked ? (Yes = y & No = n): ");
				scanf("%s", &yesorno);
				if(yesorno = 'y'){
					line++;
					printf("\n\t\t\tCancel Successfully !");
					printf("\n\t\t\tPayment Refund Soon !");
					printf("\n\t\t\tThank You ! ");
					break;
				}
				else{
					exit(1);
				}
			}
			line++;
		} 
		fclose(f1);

		f1=fopen("Participant.txt","r");
		f2=fopen("Participant1.txt", "w");//open one temporarily file 
		do{				
			fscanf(f1,"%s %s %s %s %s %d %d %d %s\n",&participant.name,&participant.ic,&participant.gender,&participant.course,&participant.vegeornot,&participant.total_fee,&participant.total_payment,&participant.receivable,&participant.payment_method);
			line2++;
			if(line2!=line){
				fprintf(f2," %s %s %s %s %s %d %d %d %s\n",participant.name,participant.ic,participant.gender,participant.course,participant.vegeornot,participant.total_fee,participant.total_payment,participant.receivable,participant.payment_method);
			}	 
		}while(!feof(f1));
		fclose(f1);
		fclose(f2);
        remove("Participant.txt");//remove file  	
        rename("Participant1.txt","Participant.txt"); //rename file
	}
	getch();
	system("cls");
}
			
void change_course(){//function for participant to change course
	struct detail participant;
	int line2=0, line3=0;
	char pname1[20], pcourse1[20];
	char yon2;
	printf("\t\t\t####################################################");
	printf("\n\t\t\t#                                                  #");
	printf("\n\t\t\t#                  Change Course                   #");
	printf("\n\t\t\t#                                                  #");
	printf("\n\t\t\t####################################################");
	printf("\n\t\t\tEnter Your Name :");
	scanf("%s", &pname1);
	printf("\n\t\t\tEnter Course That You Want To Make Change:");
	scanf("%s", &pcourse1);
	FILE*f1;
	FILE*f2;
	f1 = fopen("Participant.txt", "r");
	if(f1==NULL){
		printf(" FILE ERROR !");
	}
	else{
		do{
			fscanf(f1,"%s %s %s %s %s %d %d %d %s\n",&participant.name,&participant.ic,&participant.gender,&participant.course,&participant.vegeornot,&participant.total_fee,&participant.total_payment,&participant.receivable,&participant.payment_method);
			if( (strcmp(participant.name, pname1) == 0) && (strcmp(participant.course, pcourse1) == 0)){
				printf("\n\t\t\t\t<<<Participant Found !>>> ");
				printf("\n\t\t\t______________________________________________________\n");
				printf("\n\t\t\t|\t Participant Name : %s",participant.name);
				printf("\n\t\t\t|\t               IC : %s",participant.ic);
				printf("\n\t\t\t|\t           Gender : %s",participant.gender);
				printf("\n\t\t\t|\t           Course : %s",participant.course);
				printf("\n\t\t\t|\t Vege Or Non-Vege : %s",participant.vegeornot);
				printf("\n\t\t\t|\t Total Course Fee : RM%d",participant.total_fee);
				printf("\n\t\t\t|\t    Total Payment : RM%d",participant.total_payment);
				printf("\n\t\t\t|\tAmount Receivable : RM%d",participant.receivable);
				printf("\n\t\t\t|\t   Payment Method : %s",participant.payment_method);
				printf("\n\t\t\t|______________________________________________________\n");
				printf("\n\t\t\tAre You Sure You Want To Change The Course ? (Yes = y & No = n): ");
				scanf("%s", &yon2);
				if(yon2 == 'y'){
					line2++;
					break;
				}
				else{
					exit(1);
				}
			}
			line2++;
		}while(!feof(f1));
		fclose(f1);
		
		f1=fopen("Participant.txt","r");
		f2=fopen("Participant1.txt", "w");
		do{				
			fscanf(f1,"%s %s %s %s %s %d %d %d %s\n",&participant.name,&participant.ic,&participant.gender,&participant.course,&participant.vegeornot,&participant.total_fee,&participant.total_payment,&participant.receivable,&participant.payment_method);
			line3++;
			if(line3!=line2){
				fprintf(f2," %s %s %s %s %s %d %d %d %s\n",participant.name, participant.ic,participant.gender,participant.course,participant.vegeornot,participant.total_fee,participant.total_payment,participant.receivable,participant.payment_method);
			}	 
		}while(!feof(f1));
		fclose(f1);
		fclose(f2);
        remove("Participant.txt");  	
        rename("Participant1.txt","Participant.txt"); 
		printf("\n\n\t\t\tYour Previously Paid Course Fees Have Been Automatically Refunded !");
		printf("\n\n\t\t\tPlease Make Your Booking Again !");
		booking();// let user do booking again after previous booked course been deleted      
		printf("\n\n\t\t\tCourse Change Successfully !");
		printf("\n\t\t\tThank You ! ");		
	}
	getch();
	system("cls");				
}

void amount_receivable(){//function for admin to check all the details of receivable and amount 
	login();//login function call
	FILE* f1;
	f1 = fopen("Participant.txt", "r");
	char searchreceivable[20] ;
	struct detail participant;
	cannot_open(f1);
	printf("\t\t\t####################################################");
	printf("\n\t\t\t#                                                  #");
	printf("\n\t\t\t#                  Search Receivable               #");
	printf("\n\t\t\t#                                                  #");
	printf("\n\t\t\t####################################################");
	printf("\n\n\t\t\tEnter Participant Name That You Want To Search : ");//input valid name
	scanf("%s", &searchreceivable);//read searchreceivable
	do{
		fscanf(f1,"%s %s %s %s %s %d %d %d %s\n",&participant.name,&participant.ic,&participant.gender,&participant.course,&participant.vegeornot,&participant.total_fee,&participant.total_payment,&participant.receivable,&participant.payment_method);
		if(strcmp(participant.name,searchreceivable) == 0){
				if(participant.receivable != 0){
					fflush(stdin);
					printf("\n\t\t\t\t<<<Receivable Found !>>> ");
					printf("\n\t\t\t______________________________________________________\n");
					printf("\n\t\t\t|\t Participant Name : %s",participant.name);
					printf("\n\t\t\t|\t               IC : %s",participant.ic);
					printf("\n\t\t\t|\t           Gender : %s",participant.gender);
					printf("\n\t\t\t|\t           Course : %s",participant.course);
					printf("\n\t\t\t|\t Vege Or Non-Vege : %s",participant.vegeornot);
					printf("\n\t\t\t|\t Total Course Fee : RM%d",participant.total_fee);
					printf("\n\t\t\t|\t    Total Payment : RM%d",participant.total_payment);
					printf("\n\t\t\t|\tAmount Receivable : RM%d",participant.receivable);
					printf("\n\t\t\t|\t   Payment Method : %s",participant.payment_method);
					printf("\n\t\t\t|______________________________________________________");
				}
				else
					printf("\n\t\t\tReceivable Not Found !");
		}
	}while(!feof(f1));//if not end of file loop again
	fclose(f1);
	getch();
	system("cls");
}

void total_money(){//function for admin admin to check the total amount of receivable and the total payment received
	login();
	FILE* f1;
	f1 = fopen("Participant.txt", "r");
	int total = 0, totalr = 0, totalp;
	struct detail participant;
	cannot_open(f1);
	do{
		fscanf(f1,"%s %s %s %s %s %d %d %d %s\n",&participant.name,&participant.ic,&participant.gender,&participant.course,&participant.vegeornot,&participant.total_fee,&participant.total_payment,&participant.receivable,&participant.payment_method);
		if((participant.receivable >= 0 ) && (participant.total_fee >= 0 )){
			totalr = participant.receivable + totalr;//total receivable
			total = participant.total_fee + total;//total course fee
		}		
	}while(!feof(f1));
	totalp = total - totalr;//total payment reveived
	printf("\t\t\t####################################################");
	printf("\n\t\t\t#                                                  #");
	printf("\n\t\t\t#                  $ $ $ $ $                       #");
	printf("\n\t\t\t#                                                  #");
	printf("\n\t\t\t####################################################\n\n");
	printf("\n\t\t\tTotal Amount Receivable = RM%d",totalr);
	printf("\n\n\n\t\t\tTotal Payment Received = RM%d",totalp);
	fclose(f1);
	getch();
	system("cls");
}

void menu(){//function as a homepage to display the menu to user and run all the function with valid choice by user
	int choice;
	do{
	printf("\n\t\t**************Welcome To Knowledgebase Academy****************\n\n");
	printf("\t\t|                   Select From Below                        |\n");
	printf("\t\t|------------------------------------------------------------|\n");
	printf("\t\t|       1. Create Schedule For Each Course (Admin)           |\n");
	printf("\t\t|       2. Course Details                                    |\n");
	printf("\t\t|       3. Booking                                           |\n");
	printf("\t\t|       4. Check Availability Of Each Course                 |\n");
	printf("\t\t|       5. Search Participant (Admin)                        |\n");
	printf("\t\t|       6. Cancellation                                      |\n");
	printf("\t\t|       7. Change Course                                     |\n");
	printf("\t\t|       8. Amount Receivable (Admin)                         |\n");
	printf("\t\t|       9. Total Amount Receivable & Payment Received (Admin)|\n");
	printf("\t\t|------------------------------------------------------------|\n");//menu of choice display for user
	printf("\n\n  		Please Enter Your Choice :  ");
	scanf("%d",&choice);
	system("cls");// clear screen function
	
	switch(choice){
		case 1:
			write_schedule();
			break;
		case 2:
			read_schedule();
			break;
		case 3:
			booking();
			break;
		case 4:
			check_availability();
			break;
		case 5:
			search_participant();	
			break;
		case 6:
			cancellation();
			break;
		case 7:
			change_course();
			break;
		case 8:
			amount_receivable();
			break;
		case 9:
			total_money();
			break;
		case 10:
			exit(0);
			break; 
		default:
			printf("Error !");
		}
	}while(choice != 10);
	return;
}

void main(){//main function that call out menu() function
	menu();
}

