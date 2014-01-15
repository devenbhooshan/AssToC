#include<stdio.h>
#include<stdlib.h> // for exit()
#include<string.h>
static long long p=0, q=0, r=0, s=0, t=0; // memory locations available for storing and retrieving values.

// place the pointer at XY position
void goToXY(int line,int spac)
{
	int i;
	for(i=1;i<=line;i++)
		printf("\n");
	for(i=1;i<=spac;i++)
		printf("\t");

}
// prints supported commands
void print_supported_commands(){
	printf("Supported Instructions\n");
	goToXY(0,2);
	printf("________________\n");
	goToXY(1,2);
	char commands[][50]=
			{
			{"MOV [value]"},
			{"Move [value]  into acc."},
			{"ADD X"},
			{"Add memory location x into acc."},
			{"SUB X"},
			{"Substract X from Acc."},
			{"MUL X"},
			{"Multiply X with Acc."},
			{"DIV X"},
			{"Divide acc. by X."},
			{"AND X"},
			{"And X with Acc."},
			{"NOT"},
			{"Complement Acc."},
			{"OR X"},
			{"Or X with Acc."},
			{"LD X"},
			{"Load memory location X at Acc."},
			{"ST X"},
			{"Store acc. at memory location X"},
			{"HLT"},
			{"Exit the program"},
			{"X ={'p','q','r','s','t'}"}
	};
	int i=0;
	while(i<22)
	{
		printf("%s  ", commands[i]);
		if(i%2!=0) {  goToXY(1,2); }
		i++;
	}
	goToXY(1,2);
	printf("________________\n");
	goToXY(1,2);
	printf("%s  ", commands[i]);


}


void command();
typedef long long ll;
static ll a=0;

// This function moves value specified into the accumulator.
void MOV(ll x){
	a=x;
	goToXY(1,2);
	printf("\033[22;36m");
	printf("ACC:%lld\n",a);
	printf("\033[22;37m");
	
	command();
}

// This function adds the value of the memory location specified into the accumulator
void ADD(char c){
	int error=0;
	if(c=='p'){
		a+=p;
	}
	else if(c=='q'){
		a+=q;
	}
	else if(c=='r'){
		a+=r;
	}
	else if(c=='s'){
		a+=s;
	}
	else if(c=='t'){
		a+=t;
	}
	else{
		error=1;
		printf("\033[22;31m");
		goToXY(1,2);
		printf("Unavailable memory location\n");
		printf("\033[22;37m");
	}
	goToXY(1,2);
	printf("\033[22;36m");
	if(!error) printf("ACC:%lld\n",a);
	printf("\033[22;37m");
	command();
}

// This function subtracts the value of the memory location specified from the accumulator
void SUB(char c){
	int error=0;
	if(c=='p'){
		a-=p;
	}
	else if(c=='q'){
		a-=q;
	}
	else if(c=='r'){
		a-=r;
	}
	else if(c=='s'){
		a-=s;
	}
	else if(c=='t'){
		a-=t;
		
	}
	else{
		error=1;
		printf("\033[22;31m");
		goToXY(1,2);
		printf("Unavailable memory location\n");
		printf("\033[22;37m");
	}
	goToXY(1,2);
	printf("\033[22;36m");
	if(!error) printf("ACC:%lld\n",a);
	printf("\033[22;37m");
	command();
}

// This function loads the value of the memory location specified into the accumulator
void LD(char c){
	int error=0;

	if(c=='p'){
		a=p;
	}
	else if(c=='q'){
		a=q;
	}
	else if(c=='r'){
		a=r;
	}
	else if(c=='s'){
		a=s;
	}
	else if(c=='t'){
		a=t;
	}
	else{
		error=1;
		printf("\033[22;31m");
		goToXY(1,2);
		printf("Unavailable memory location\n");
		printf("\033[22;37m");
	}
	goToXY(1,2);
	printf("\033[22;36m");
	if(!error) printf("ACC:%lld\n",a);
	printf("\033[22;37m");
	command();
}

// This function stores the value of the accumulator into the memory location specified.
void ST(char c){
	int error=0;
	if(c=='p'){
		p=a;
		a=0;
	}
	else if(c=='q'){
		q=a;
		a=0;
	}
	else if(c=='r'){
		r=a;
		a=0;
	}
	else if(c=='s'){
		s=a;
		a=0;
	}
	else if(c=='t'){
		t=a;
		a=0;
	}
	else{
		error=1;
		printf("\033[22;31m");
		goToXY(1,2);
		printf("Unavailable memory location\n");
		printf("\033[22;37m");
	}
	goToXY(1,2);
	printf("\033[22;36m");
	if(!error) printf("ACC:%lld\n",a);
	printf("\033[22;37m");
	command();
}

//This function multiplies the values stored in accumulator and memory and stores it in the accumulator.
void MUL(char c){

	int error=0;
	if(c=='p'){
		a*=p;
	}
	else if(c=='q'){
		a*=q;
	}
	else if(c=='r'){
		a*=r;
	}
	else if(c=='s'){
		a*=s;
	}
	else if(c=='t'){
		a*=t;
	}
	else{
		error=1;
		printf("\033[22;31m");
		goToXY(1,2);
		printf("Unavailable memory location\n");
		printf("\033[22;37m");
	}
	goToXY(1,2);
	printf("\033[22;36m");
	if(!error) printf("ACC:%lld\n",a);
	printf("\033[22;37m");
	command();
}

//This function divides the values stored in accumulator by that stored in memory and stores it in the accumulator.
void DIV(char c){
	int error=0;
	if(c=='p'){
		a/=p;
	}
	else if(c=='q'){
		a/=q;
	}
	else if(c=='r'){
		a/=r;
	}
	else if(c=='s'){
		a/=s;
	}
	else if(c=='t'){
		a/=t;
		
	}
	else{
		error=1;
		printf("\033[22;31m");
		goToXY(1,2);
		printf("Unavailable memory location\n");
		printf("\033[22;37m");
	}
	goToXY(1,2);
	printf("\033[22;36m");
	if(!error) printf("ACC:%lld\n",a);
	printf("\033[22;37m");
	command();
}

//This function takes bitwise OR of the accumulator and value stored in memory and stores it in the accumulator.
void OR(char c){
	int error=0;
	if(c=='p'){
		a=a|p;
	}
	else if(c=='q'){
		a=a|q;		
	}
	else if(c=='r'){
		a=a|r;
	}
	else if(c=='s'){
		a=a|s;
	}
	else if(c=='t'){
		a=a|t;
	}
	else{
		error=1;
		printf("\033[22;31m");
		goToXY(1,2);
		printf("Unavailable memory location\n");
		printf("\033[22;37m");
	}
	goToXY(1,2);
	printf("\033[22;36m");
	if(!error) printf("ACC:%lld\n",a);
	printf("\033[22;37m");
	command();
}

// This function takes bitwise not of the value stored in accumulator and replaces it in the accumulator.
void NOT(){
	a=~a;
	goToXY(1,2);
	printf("\033[22;36m");
	printf("ACC:%lld\n",a);
	printf("\033[22;37m");
	command();
}

//This function takes bitwise AND of the accumulator and value stored in memory and stores it in the accumulator.
void AND(char c){
	int error=0;
	if(c=='p'){
		a=a&p;
	}
	else if(c=='q'){
		a=a&q;
	}
	else if(c=='r'){
		a=a&r;
	}
	else if(c=='s'){
		a=a&s;
	}
	else if(c=='t'){
		a=a&t;
	}
	else{
		error=1;
		printf("\033[22;31m");
		goToXY(1,2);
		printf("Unavailable memory location\n");
		printf("\033[22;37m");
	}
	goToXY(1,2);
	printf("\033[22;36m");
	if(!error) printf("ACC:%lld\n",a);
	printf("\033[22;37m");
	command();
}
// This function takes the command to be executed and then performs the action to be taken.
// ** for MOV into accumulator will work exactly

void command(){
	char com[4];
	ll x=0; // unsigned long long
	char y;
	goToXY(1,2);
	printf("Your Instruction Here");
	goToXY(0,1);
	scanf("%s", com);
	//printf("%s\n",com);
	//printf("%lld",x);

	if(!strcmp(com,"MOV")){
		int h=0;
		h=scanf("%lld", &x);
		if(h){
			MOV(x);
		}
		else{
			goToXY(1,2);
			printf("\033[22;31m");
			printf("Enter Valid Command");
			printf("\033[22;37m");
			char c;
			while((c = getchar()) != '\n' && c != EOF);
			command();
		}
	}

	else if(!strcmp(com,"ADD")){
		char space;
		scanf("%c %c",&space,&y);
		//printf("%c",y);
		ADD(y);
		
	}

	else if(!strcmp(com,"SUB")){
		char space;
		scanf("%c %c",&space,&y);
		//printf("%c",y);
		SUB(y);
		
	}

	else if(!strcmp(com,"LD")){
		char space;
		scanf("%c %c",&space,&y);
		//printf("%c",y);
		LD(y);
		
	}

	else if(!strcmp(com,"ST")){
		char space;
		scanf("%c %c",&space,&y);
		//printf("%c",y);
		ST(y);
		
	}

	else if(!strcmp(com,"MUL")){
		char space;
		scanf("%c %c",&space,&y);
		//printf("%c",y);
		MUL(y);
		
	}

	else if(!strcmp(com,"DIV")){
		char space;
		scanf("%c %c",&space,&y);
		//printf("%c",y);
		DIV(y);
		
	}

	else if(!strcmp(com,"NOT")){
		NOT();
	}

	else if(!strcmp(com,"OR")){
		char space;
		scanf("%c %c",&space,&y);
		//printf("%c",y);
		OR(y);
		
	}

	else if(!strcmp(com,"AND")){
		char space;
		scanf("%c %c",&space,&y);
		//printf("%c",y);
		AND(y);
		
	}

	else if(!strcmp(com,"HLT")){
		exit(0);
	}
	else {
		printf("\033[22;31m");
		goToXY(1,2);
		printf("Enter Valid Command\n");
		printf("\033[22;37m");
		
		command();

	}

}

int main()
{
	

	char  c[100];
	
	while(1){
		printf("\033[22;37m");
		system("clear");
		goToXY(10,2);
		printf("1) Supported Instructions\n");
		goToXY(0,2);
		printf("2) Enter \n");
		goToXY(0,2);
		printf("3) Quit\n");
		goToXY(0,2);
		scanf("%s", c);
		if(strlen(c)==1 && (strcmp(c,"1")==0 || strcmp(c,"2")==0 || strcmp(c,"3")==0) ){	
		char ch=c[0];	
		switch(ch)
			{
			case '1':
				system("clear");
				goToXY(1,2);
				print_supported_commands();
				goToXY(1,2);
				printf("Press Enter To continue...");
				getchar();
				getchar();
				continue;
				break;

			case '2': // Start implementing the commands
					system("clear");
					goToXY(1,2);
					print_supported_commands();
					goToXY(1,2);
					command();
			case '3': // quit the program
					goToXY(0,2);
					printf("\033[22;31m");			
					printf("Exiting... \n");
					printf("\033[22;37m");				
					sleep(2);	
					exit(0);
			}
		}
		goToXY(0,2);
		printf("\033[22;31m");
		printf("Enter valid choice : \n");	
		sleep(1);

	}
	return 0;
}
