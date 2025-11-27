//Project(odd)
#include<stdio.h>
#include<string.h>
int count=0;
typedef struct Player{
	char pname[40];
	int jnum;
	int match;
	int run;
	int wicket;
	
}Player;
void displaylist(Player*);
void addnewplayer(Player*);
void removeplayer(Player*);
void searchPlayer(Player*);
void updateplayerinfo(Player*);
void sortingPlayer(Player*);
int mystrcmp(char*,char*);
void spacemaker(char*);
void spaceremover(char*);
int main(){
	
	
	
}int ch;
	Player p[200]={{"virat_kohali",18,415,23564,4},{"Rohit_Sharma",45,384,22123,0},{"Steve_Smith",49,344,20346,27},{"Kane_Willianson",22,304,18455,10},{"AB_de_Villiers",17,283,20014,7}};
	count=5;
	do{
		printf("\n___________________________________________________________________________\n");
		ch=0;
		printf("See Prasent Player information :1\n");
		printf("Add New Player                 :2 \n");
		printf("Remove Player                  :3 \n");
		printf("Search Player                  :4 \n");
		printf("Update Player data             :5 \n");
		printf("Display Sorted Player          :6 \n");
		printf("Exit                           :0 \n");
		printf("Enter Your Choise :");
		scanf("%d",&ch);
		printf("\n___________________________________________________________________________\n");
		switch(ch!=0){
			case 0:
				if(ch==0){
					break;
				}
			case 1:
				if(ch==1){
				printf("\n\n Prasent Player information \n\n");
				displaylist(p);
				break;
				}
				
			case 2:
				if(ch==2){
					printf("\n\n Add New Player \n\n");
					addnewplayer(p);
					break;
				}
				
			case 3:
				if(ch==3){
					printf("\n\n Remove Player \n\n");
					removeplayer(p);
					break;
				}
			case 4:
				if(ch==4){
					printf("Search Player\n");
					searchPlayer(p);
					break;
				}
				
			case 5:
				if(ch==5){
					printf("Update Player data\n");
					updateplayerinfo(p);
					break;
				}
				
			case 6:
				if(ch==6){
					printf("Display Sorted Player\n");
					sortingPlayer(p);
					break;
				}
				
				
			default:
				printf("Enter a Valid Choise \n");
		}
	}while(ch!=0);
	printf("\n \t Thank You.... ");

void displaylist(Player* p){
	int i;
	for(i=0;i<count;i++){
		
		spacemaker(p[i].pname);
		printf("Jersey Number :%d \n",p[i].jnum);
		printf("Match Played  :%d \n",p[i].match);
		printf("Runs          :%d \n",p[i].run);
		printf("Wickets       :%d \n",p[i].wicket);
		printf("\n-----------------------------------------------\n");
	}
}

void spacemaker(char* p){
	int i,n=1;
	for(i=0;p[i]!='\0';i++){
		n++;
	}
	char q[n];
	for(i=0;p[i]!='\0';i++){
		q[i]=p[i];
	}
	q[i]=p[i];
	for(i=0;q[i]!='\0';i++){
		if(q[i]=='_'){
			q[i]=' ';
		}
	}
	printf("Name          :%s",q);
}

void spaceremover(char* p){
	int i,n=1;
	
	for(i=0;p[i]!='\0';i++){
		if(p[i]==' '){
			p[i]='_';
		}
	}
	
}

void addnewplayer(Player* p){
	
	int i=count,j,k;
	printf("\n How many Player you Enterd now :");
	scanf("%d",&j);
	count=count+j;
	
	
	for(;i<count;i++){
		
			
			printf("Enter the PLayer Name :");
			fflush(stdin);
			fgets(p[i].pname,40,stdin);
			
			spaceremover(p[i].pname);	
			printf("Enter the PLayer Jersey Number :");
			scanf("%d",&p[i].jnum);	
			for(k=0;k<count-j;k++){	
					if((p[i].jnum==p[k].jnum)){
						printf("\n Use another jersey number,it is already have in dataset...");
						printf("\n Enter the PLayer Jersey Number :");
						scanf("%d",&p[i].jnum);	
			
					}
				}
				
			printf("Enter the Number of Matches he Played:");
			scanf("%d",&p[i].match);
			printf("Enter the Number Runs:");
			scanf("%d",&p[i].run);
			printf("Enter the Number Wicket he takes :");
			scanf("%d",&p[i].wicket);	
			
		
		}		
		printf("\n Add Players Successfully.....\n");
		
}
int mystrcmp(char* str1,char* str2){
	int i;
	for(i=0;str1[i]=='\0';i++){
		if(str2[i]=='\0'||str1[i]!=str2[i]){
			return 1;	
		}
	}
	if(str1[i]=='\0'||str1[i]==str2[i]){
			return 0;
			
		}
}
void removeplayer(Player* p){
	
	if(count==0){
		printf("\n No any Entries Available now.... ");
		return;
	}
	int i,jnum,check=0;
	char name[40];
	printf("\n Which Player You remove now ");
	printf("\n\t Enter Player Name :");
	fflush(stdin);
	fgets(name,40,stdin);
	spaceremover(name);
	printf("\n %s",name);	
	printf("\n\t Enter Player jersey Number :");
	scanf("%d",&jnum);
	
	for(i=0;i<count;i++){
		if((mystrcmp(p[i].pname,name)==0)&&p[i].jnum==jnum){
			check=1;
			printf("\n Removed Player Successfully.......\n");
		}
		p[i]=p[i+check];
	}
	count=count-1;
	
}



void searchPlayer(Player* p){
	int i,jnum,ch=0;
	char name[40];
	printf("\nWhat You want to search :");
	do{
		printf("\n___________________________________________________________________________\n");
		ch=0;
		printf("Search PLayer by Name                       :1 \n");
		printf("Search PLayer by Jersey                     :2 \n");
		printf("Search Higest runs which Player's           :3 \n");
		printf("Search Highest Wicket Which Player takes    :4 \n");
		printf("Search Player who played Most matches       :5 \n");
		printf("Exit                                        :0 \n");
		printf("Enter Your Choise :");
		scanf("%d",&ch);
		printf("\n___________________________________________________________________________\n");
		switch(ch!=0){
			case 0:
				if(ch==0){
					break;
				}
			case 1:
				if(ch==1){
				printf("\n\n Search PLayer by Name\n");
				printf("______________________________________________________________\n\n");
				printf("\n Which Player You want to search now ");
				printf("\n\t Enter Player Name :");
				fflush(stdin);
				fgets(p[i].pname,40,stdin);
				spaceremover(p[i].pname);	
				for(i=0;i<count;i++){
					
					if((mystrcmp(p[i].pname,name)==0)){
							
						spacemaker(p[i].pname);
						printf("Jersey Number :%d \n",p[i].jnum);
						printf("Match Played  :%d \n",p[i].match);
						printf("Runs          :%d \n",p[i].run);
						printf("Wickets       :%d \n",p[i].wicket);
						printf("\n-----------------------------------------------\n");
					break;
					}
				}
				break;
				}
			
			case 2:
				if(ch==2){
				printf("\n\n Search PLayer by Jersey\n");
				printf("_____________________________________________________________\n\n");
				printf("\n Which Player You want to search now ");
				printf("\n\t Enter Player jersey Number :");
				scanf("%d",&jnum);
				for(i=0;i<count;i++){
					
					if((p[i].jnum==jnum)){
							
						spacemaker(p[i].pname);
						printf("Jersey Number :%d \n",p[i].jnum);
						printf("Match Played  :%d \n",p[i].match);
						printf("Runs          :%d \n",p[i].run);
						printf("Wickets       :%d \n",p[i].wicket);
						printf("\n-----------------------------------------------\n");
					break;
					}
				}
				break;
				}
			
				
			case 3:
				if(ch==3){
					
					int op;
					do{
						printf("\n___________________________________________________________________________\n");
						printf("\n\n Search Higest run's PLayer: 1\n");
						printf("\n\n Search lowest run's PLayer: 2\n");	
						printf("\n\n Exit                      : 0\n");	
						printf("\n-----------------------------------------\n");		
						printf("Enter Your Choise :");
						scanf("%d",&op);
						printf("\n___________________________________________________________________________\n");
						switch(op!=0){
							case 0:
								if(op==0){
									printf("\n Exit...\n");
									break;
								}
							case 1:
								if(op==1){
									printf("________________________________________________________\n\n");
									jnum=p[0].run;
									for(i=0;i<count;i++){
										if(p[i].run>jnum){
											jnum=p[i].run;
										}
									}
									printf("\nHigest Run's Player\n");
									for(i=0;i<count;i++){
										if(p[i].run==jnum){
											spacemaker(p[i].pname);
											printf("Jersey Number :%d \n",p[i].jnum);
											printf("Match Played  :%d \n",p[i].match);
											printf("Runs          :%d \n",p[i].run);
											printf("Wickets       :%d \n",p[i].wicket);
											printf("\n-----------------------------------------------\n");	
										}
									}
								break;				
							}
							case 2:
								if(op==2){
									printf("__________________________\n\n");
									jnum=p[0].run;
									for(i=0;i<count;i++){
										if(p[i].run<jnum){
											jnum=p[i].run;
										}
									}
									printf("\nLowest Run's Player\n");
									for(i=0;i<count;i++){
										if(p[i].run==jnum){
											spacemaker(p[i].pname);
											printf("Jersey Number :%d \n",p[i].jnum);
											printf("Match Played  :%d \n",p[i].match);
											printf("Runs          :%d \n",p[i].run);
											printf("Wickets       :%d \n",p[i].wicket);
											printf("\n-----------------------------------------------\n");	
										}
									}
								break;				
								}	
							default:
							printf("\n Invalid Choise... \n");
							
						}	
				
					}while(op!=0);
					break;
				}
			
			
			case 4:
				if(ch==4){
					
					int op;
					do{
						printf("\n___________________________________________________________________________\n");
						printf("\n\n Search Higest Wicket's PLayer: 1\n");
						printf("\n\n Search lowest Wicket's PLayer: 2\n");	
						printf("\n\n Exit                         : 0\n");
						printf("\n------------------------------------\n");
						printf("\nEnter Your Choise :");
						scanf("%d",&op);
						printf("\n___________________________________________________________________________\n");
						switch(op!=0){
							case 0:
								if(op==0){
									printf("\n Exit...\n");
									break;
								}
							case 1:
								if(op==1){
									printf("__________________________\n\n");
									jnum=p[0].wicket;
									for(i=0;i<count;i++){
										if(p[i].wicket>jnum){
											jnum=p[i].wicket;
										}
									}
									printf("\nHigest Wicket's Player\n");
									for(i=0;i<count;i++){
										if(p[i].wicket==jnum){
											spacemaker(p[i].pname);
											printf("Jersey Number :%d \n",p[i].jnum);
											printf("Match Played  :%d \n",p[i].match);
											printf("Runs          :%d \n",p[i].run);
											printf("Wickets       :%d \n",p[i].wicket);
											printf("\n-----------------------------------------------\n");	
										}
									}
								break;				
							}
							case 2:
								if(op==2){
									printf("__________________________\n\n");
									jnum=p[0].wicket;
									for(i=0;i<count;i++){
										if(p[i].wicket<jnum){
											jnum=p[i].wicket;
										}
									}
									printf("\nLowest Wicket's Player\n");
									for(i=0;i<count;i++){
										if(p[i].wicket==jnum){
											spacemaker(p[i].pname);
											printf("Jersey Number :%d \n",p[i].jnum);
											printf("Match Played  :%d \n",p[i].match);
											printf("Runs          :%d \n",p[i].run);
											printf("Wickets       :%d \n",p[i].wicket);
											printf("\n-----------------------------------------------\n");	
										}
									}
								break;				
								}	
							default:
							printf("\nInvalid Choise... \n");
						}	
					}while(op!=0);
					break;
				}
			
			case 5:
				if(ch==5){
					
					int op;
					do{
						printf("\n___________________________________________________________________________\n");
						printf("\t Search Higest Matches PLayed: 1\n");
						printf("\t Search lowest Matches PLayed: 2\n");	
						printf("\t Exit                        : 0\n");
						printf("Enter Your Choise :");
						scanf("%d",&op);
						printf("\n___________________________________________________________________________\n");
						switch(op!=0){
							case 0:
								if(op==0){
									printf("\n Exit...\n");
									break;
								}
							case 1:
								if(op==1){
									printf("__________________________\n\n");
									jnum=p[0].match;
									for(i=0;i<count;i++){
										if(p[i].match>jnum){
											jnum=p[i].match;
										}
									}
									printf("\nHigest Matches Played\n");
									for(i=0;i<count;i++){
										if(p[i].match==jnum){
											spacemaker(p[i].pname);
											printf("Jersey Number :%d \n",p[i].jnum);
											printf("Match Played  :%d \n",p[i].match);
											printf("Runs          :%d \n",p[i].run);
											printf("Wickets       :%d \n",p[i].wicket);
											printf("\n-----------------------------------------------\n");	
										}
									}
								break;				
							}
							case 2:
								if(op==2){
									printf("__________________________\n\n");
									jnum=p[0].match;
									for(i=0;i<count;i++){
										if(p[i].match<jnum){
											jnum=p[i].match;
										}
									}
									printf("\nLowest Matches Played\n");
									for(i=0;i<count;i++){
										if(p[i].match==jnum){
											spacemaker(p[i].pname);
											printf("Jersey Number :%d \n",p[i].jnum);
											printf("Match Played  :%d \n",p[i].match);
											printf("Runs          :%d \n",p[i].run);
											printf("Wickets       :%d \n",p[i].wicket);
											printf("\n-----------------------------------------------\n");	
										}
									}
								break;				
								}	
							default:
							printf("\n\n Invalid Choise.... \n");
						}	
					}while(op!=0);
					break;
				}
			
			
			}
		
	}while(ch!=0);
	printf("\n\n Exit Searching.... \n");
}


void sortingPlayer(Player* p){
	int i,j,jnum,ch=0;
	Player temp;
	char name[40];
	printf("\nWhat You want to search :");
	do{
		printf("\n___________________________________________________________________________\n");
		ch=0;
		printf("Sorting PLayer by Joursey                               :1 \n");
		printf("Sorting PLayer by runs                                  :2 \n");
		printf("Sorting PLayer by Wicket                                :3 \n");
		printf("Sorting PLayer by matches                               :4 \n");
		printf("Exit                                                    :0 \n");
		printf("Enter Your Choise :");
		scanf("%d",&ch);
		printf("\n___________________________________________________________________________\n");
		switch(ch!=0){
			case 0:
				if(ch==0){
					printf("\n Exit Sorting...\n");
					break;
				}
			case 1:
				if(ch==1){
					int op;
					do{
					printf("\n___________________________________________________________________________\n");
					printf("\n\n Sort Highest to Lowest by Jersey: 1\n");
					printf("\n\n Sort Lowest to Highest by Jersey: 2\n");	
					printf("Enter Your Choise :");
						scanf("%d",&op);
						printf("\n___________________________________________________________________________\n");
						switch(op!=0){
							case 0:
								if(op==0){
									printf("\n Exit...\n");
									break;
								}
							case 1:
								if(op==1){
									printf("\n\n Sorting PLayer Highest to Lowest by Jersey \n");
									printf("____________________________________________________________________________\n\n");
									for(i=0;i<count-1;i++){
										for(j=i+1;j<count;j++){
											if(p[i].jnum<p[j].jnum){
												temp=p[i];
												p[i]=p[j];
												p[j]=temp;
											}
										}
									}
								displaylist(p);
								break;				
							}
							case 2:
								if(op==2){
									printf("\n\n Sorting PLayer Lowest to Highest by Jersey \n");
									printf("____________________________________________________________________________\n\n");
									for(i=0;i<count-1;i++){
										for(j=i+1;j<count;j++){
											if(p[i].jnum>p[j].jnum){
												temp=p[i];
												p[i]=p[j];
												p[j]=temp;
											}
										}
									}
								displaylist(p);
								break;				
								}	
							default:
							printf("Enter a Valid Choise \n");
						}	
					}while(op!=0);
				
				break;
				}
				
			case 2:
				if(ch==2){
					
					int op;
					do{
						printf("\n___________________________________________________________________________\n");
						printf("\n\n Sorting PLayer by Higest to Lowest run's PLayer: 1\n");
						printf("\n\n Sorting PLayer by Lowest to Higest run's PLayer: 2\n");	
						printf("Enter Your Choise :");
						scanf("%d",&op);
						printf("\n___________________________________________________________________________\n");
						switch(op!=0){
							case 0:
								if(op==0){
									printf("\n Exit...\n");
									break;
								}
							
							case 1:
								if(op==1){
									printf("\n\n Sorting PLayer by Higest to Lowest run's PLayer: 1\n");
									printf("__________________________________________________________\n\n");
									for(i=0;i<count-1;i++){
										for(j=i+1;j<count;j++){
											if(p[i].run<p[j].run){
												temp=p[i];
												p[i]=p[j];
												p[j]=temp;
											}
										}	
									}
								displaylist(p);
								break;				
							}
							case 2:
								if(op==2){
									printf("\n\n Sorting PLayer by Lowest to Higest run's PLayer: 2\n");
									printf("_______________________________________________________________\n\n");
									for(i=0;i<count-1;i++){
										for(j=i+1;j<count;j++){
											if(p[i].run>p[j].run){
												temp=p[i];
												p[i]=p[j];
												p[j]=temp;
											}
										}	
									}
								displaylist(p);
								break;				
								}	
							default:
							printf("Enter a Valid Choise \n");
							
						}	
				
					}while(op!=0);
					break;
				}
			
			
			case 3:
				if(ch==3){
					
					int op;
					do{
						printf("\n___________________________________________________________________________\n");
						printf("\n\n Sort by Highest to Lowest Wicket's PLayer: 1\n");
						printf("\n\n Sort by Lowest to Highest Wicket's PLayer: 2\n");	
						printf("Enter Your Choise :");
						scanf("%d",&op);
						printf("\n___________________________________________________________________________\n");
						switch(op!=0){
							case 0:
								if(op==0){
									break;
								}
							
							case 1:
								if(op==1){
									printf("\n\n Sort by Highest to Lowest Wicket's PLayer: 1\n");
									printf("________________________________________________________________\n\n");
									for(i=0;i<count-1;i++){
										for(j=i+1;j<count;j++){
											if(p[i].wicket<p[j].wicket){
												temp=p[i];
												p[i]=p[j];
												p[j]=temp;
											}
										}	
									}
								displaylist(p);
								break;				
							}
							case 2:
								if(op==2){
									printf("\n\n Sort by Lowest to Highest Wicket's PLayer: 2\n");	
									printf("________________________________________________________________\n\n");
									for(i=0;i<count-1;i++){
										for(j=i+1;j<count;j++){
											if(p[i].wicket>p[j].wicket){
												temp=p[i];
												p[i]=p[j];
												p[j]=temp;
											}
										}	
									}
								displaylist(p);
								break;				
								}	
							default:
							printf("Enter a Valid Choise \n");
						}	
					}while(op!=0);
					printf("\n Exit...\n");
					break;
				}
			
			case 4:
				if(ch==4){
					
					int op;
					do{
						printf("\n___________________________________________________________________________\n");
						printf("\n\n Search Highest to Lowest Matches PLayed: 1\n");
						printf("\n\n Search Lowest to Highest Matches PLayed: 2\n");	
						printf("Enter Your Choise :");
						scanf("%d",&op);
						printf("\n___________________________________________________________________________\n");
						switch(op!=0){
							case 0:
								if(op==0){
									break;
								}
							
							case 1:
								if(op==1){
									printf("\n\n Search Highest to Lowest Matches PLayed: 1\n");
									printf("__________________________________________________________\n\n");
									for(i=0;i<count-1;i++){
										for(j=i+1;j<count;j++){
											if(p[i].match<p[j].match){
												temp=p[i];
												p[i]=p[j];
												p[j]=temp;
											}
										}	
									}
								displaylist(p);
								break;				
							}
							case 2:
								if(op==2){
									printf("\n\n Search Lowest to Highest Matches PLayed: 2\n");
									printf("______________________________________________________________\n\n");
									for(i=0;i<count-1;i++){
										for(j=i+1;j<count;j++){
											if(p[i].match>p[j].match){
												temp=p[i];
												p[i]=p[j];
												p[j]=temp;
											}
										}	
									}
								displaylist(p);
								break;				
								}	
							default:
							printf("Enter a Valid Choise \n");
						}	
					}while(op!=0);
					printf("\n Exit...\n");
					break;
				}
			
			
			}
		
	}while(ch!=0);
}




void updateplayerinfo(Player* p){
	int i,jnum,pass;
	char name[40];
	printf("\nWhich Player Information You want to update :");
		
		printf("\n___________________________________________________________________________\n");
		
		printf("\n\t Enter Your Password Number :");
		scanf("%d",&pass);
		
		
		if(pass==123){
			printf("\n\t Enter Player Name :");
			fflush(stdin);
			fgets(p[i].pname,40,stdin);
			spaceremover(p[i].pname);	
			printf("\n\t Enter Player jersey Number :");
			scanf("%d",&jnum);
			
				
			for(i=0;i<count;i++){
				if((strcmp(p[i].pname,name)==0)&&p[i].jnum==jnum){
					
					printf("\n-----------------------------------------------\n");
				}
			}
		}
}
