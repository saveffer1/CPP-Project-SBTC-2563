#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<iostream.h>

char a = 178;
int stock[6] = {10,9,8,5,7,2};
int stcheck[6] = {10,9,8,5,7,2};
long int pricing[6] = {35,6758990,120000,32459,21,35000};
long int pointcing[6] = {35,675899,12000,3245,21,3500};
int lscreen = 0;

int sum0,sum1,sum2,sum3,sum4,sum5;

void prints(int x,int y,char db[100]){
	gotoxy(x,y);
	printf("%s",db);
}

void showtime(){

	time_t rawtime;
	struct tm *timeinfo;
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	gotoxy(3,24);
	strftime(buffer,80," %A %d %B %Y",timeinfo);
	puts(buffer);

}

void print(int b, char a);

void frame(){
	textcolor(15);
	char a = ' ';
	int z;
		printf("%c",201);

		for(int sf = 0;sf <= 74;sf ++){
			cout<<(char)205;
		}

		printf("%c",187);
		cout<<endl;

		for(int savef = 0;savef <= 22; savef++){
		gotoxy(1,2+savef);
		cout<<(char)186<<endl;
		gotoxy(77,2+savef);
		cout<<(char)186<<endl;
		      }

		gotoxy(1,23);
		cout<<(char)204<<endl;
		gotoxy(77,23);
		cout<<(char)185<<endl;

		for(int sgg = 0;sgg <= 74;sgg ++){
			gotoxy(2+sgg,23);
			cout<<(char)205;
		}

		gotoxy(1,24);
		cout<<(char)186<<endl;
		gotoxy(77,24);
		cout<<(char)186<<endl;

		printf("%c",200);
		for(int sgf = 0;sgf <= 74;sgf ++){
			cout<<(char)205;
		}
		printf("%c",188);
}

void frame2(){
	textcolor(15);
	//clrscr();
	char a = ' ';
	int z;
		printf("%c",201);

		for(int sf = 0;sf <= 74;sf ++){
			cout<<(char)205;
		}
		printf("%c",187);
		cout<<endl;
		for(int savef = 0;savef <= 22; savef++){
		gotoxy(1,2+savef);
		cout<<(char)186<<endl;
		gotoxy(77,2+savef);
		cout<<(char)186<<endl;
		      }

		printf("%c",200);
		for(int sgg = 0;sgg <= 74;sgg ++){
			cout<<(char)205;
		}
		printf("%c",188);


}

void loadscr()
{
	textcolor(15);
	clrscr();
	char a = 178;
	int z;
	float l = 1.5;
	for (int i = 0; i<75; i++)
	{
		clrscr();

		//z = 1 + rand() % (30 + 1 - 1) + 30;
		z = 20;
		printf("\n\n\n\n\n\n\n\n\t\t\t\tLoading %.0f %\n\n",l);
		printf("%c",201);
		print(76, 205);
		cout<<(char)187<<endl<<(char)186<<' ';
		print(i, a);
		print(75 - i, ' ');
		cout<<(char)186<<endl;

		for(int savef= 0;savef<=3;savef++){
			cout << (char)186 << ' ';
			print(i, a);
			print(75 - i, ' ');
			cout << (char)186 << endl;
		}

		printf("%c",200);
		print(76, 205);
		printf("%c",188);
		printf("\n\n\t\tTip : After loading press any key to continue.");
		l = l + 1.33333333;
		delay(z);
	}

	getch();
}

void print(int b, char a = ' ')
{
	for (int uuu = 0; uuu<b; ++uuu)
		printf("%c",a);
}

void serch(int col,int del){
	clrscr();
	textcolor(col);
	gotoxy(30,12);
	cprintf("Serching...");

	int load=0;

	for(int i=1;i<=10;i++){
	   gotoxy(30+load,13);
	   delay(del);
	   cprintf("%c%c",219,219);
	   load+=2;
	   gotoxy(52,13);
	   cprintf("%d0%",i);
	}

	gotoxy(35,15);
	cprintf("COMPLETE ");
	delay(200);
	cprintf("!");
	delay(200);
	cprintf("!");
	delay(300);
	gotoxy(55,21);
	cprintf("Press Any Key To Continue");
	textcolor(WHITE);
	getch();
}

void gen_code(char *s, const int len) {
    static const char alphanum[] =
	"0123456789"
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	"abcdefghijklmnopqrstuvwxyz";
    int num,j;
    unsigned int sval;
    time_t t;
    sval = (unsigned)time(&t);
    srand(sval);
	for(j=0;j<5;j++){
		num = (rand()%10)+5;
	}
    for (int i = 0; i < len; ++i) {
	s[i] = alphanum[rand() % num];
    }

    s[len] = 0;
}


///// start store class

class store
{
    char name[100],add[100],y;
    long int balance, amount ,point;
public:
    void open_account ();
    void shopping();
    void deposite_money();
    void redeem_points ();
    void display_account();
	void online_bills();
};

void store::open_account()
{
    char clr;
    clrscr();
    balance = 0;
    amount = 0;
    point = 0;
	frame2();
	gotoxy(3,2);
	printf("Register Account");
	gotoxy(3,3);
    printf("Enter your full name :");
    scanf("%c",&clr);
    scanf("%[^\n]",&name);
	gotoxy(3,4);
    printf("Enter your addess :");
    scanf("%c",&clr);
    scanf("%[^\n]",&add);
	gotoxy(3,5);
    printf("Enter amount for deposite :");
    scanf("%lld",&balance);
	gotoxy(3,6);
    printf("Your account is created ");
	getch();

}

void store::online_bills()
{
	char comp[100];
	char clr;
	char x[36];
	long int billing;
	clrscr();
	frame();
	showtime();
	gotoxy(3,2);
	printf("Pay your bill");
	gotoxy(3,3);
	printf("Company: ");
	scanf("%c",&clr);
	scanf("%[^\n]",&comp);
	gotoxy(3,4);
	printf("Billing amount: ");
	scanf("%lld",&billing);
	serch(15,70);
	clrscr();
	frame();
	showtime();
	if(balance >= billing){
		balance = balance-billing;
		gotoxy(3,2);
		printf("Billing");
		gotoxy(3,3);
		printf("Name: %s",comp);
		gotoxy(3,4);
		printf("Value: %lld",billing);
		gotoxy(3,5);
		printf("Your balance left %lld\n",balance);
		gotoxy(3,6);
		gen_code(x,12);
		printf("REF: %s\n",x);;
	}
	else{
		gotoxy(3,4);
		printf("Yor balance less than bill!!\n");
	}

}

void store::redeem_points()
{
    int sw = 9,change,yn;
    long int price;
    char bn[] = "banana",car[] = "car",watch[] = "watch",phone[] = "phone",cook[] = "cookie",laptop[] = "laptop";
    clrscr();
	frame();
	showtime();
	gotoxy(3,2);
    printf("***choose what you wants***");
	gotoxy(3,3);
    printf("01)%s ",bn);
	gotoxy(3,4);
    printf("02)%s ",car);
	gotoxy(3,5);
    printf("03)%s ",watch);
	gotoxy(3,6);
    printf("04)%s ",phone);
	gotoxy(3,7);
    printf("05)%s",cook);
	gotoxy(3,8);
    printf("06)%s",laptop);
	gotoxy(3,9);
    printf("00)Exit");
	gotoxy(3,10);
    printf("please select the option from above: ");
    scanf("%d",&sw);
    clrscr();

	frame();
	showtime();
    switch(sw){
	case 0:
	    exit(0);
	    break;
	case 1:"01)banana";
	gotoxy(3,2);
	printf("stock %d",stock[0]);
	//printf("\npress anykey to continue");
	    change = 0;
	    price = 35;
		if(stock[0] == 0){
			gotoxy(3,5);
		printf("OUT OF STOCK!!");
		getch();
		store::redeem_points();
	}
	    break;
	case 2:"02)car ";
	gotoxy(3,2);
	printf("stock %d",stock[1]);
	    change = 1;
	    price = 675899;
		if(stock[1] == 0){
			gotoxy(3,5);
		printf("OUT OF STOCK!!");
		getch();
		store::redeem_points();
	}
	    break;
	case 3:"03)watch ";
	gotoxy(3,2);
	printf("stock %d",stock[2]);
	    change = 2;
	    price = 12000;
		if(stock[2] == 0){
			gotoxy(3,5);
		printf("OUT OF STOCK!!");
		getch();
		store::redeem_points();
	}
	    break;
	case 4:"04)phone ";
	gotoxy(3,2);
	printf("stock %d",stock[3]);
	    change = 3;
	    price = 3245;
		if(stock[3] == 0){
			gotoxy(3,5);
		printf("OUT OF STOCK!!");
		getch();
		store::redeem_points();
	}
	    break;
	case 5:"05)cookies ";
	gotoxy(3,2);
	printf("stock %d",stock[4]);
	    change = 4;
	    price = 21;
		if(stock[4] == 0){
			gotoxy(3,5);
		printf("OUT OF STOCK!!");
		getch();
		store::redeem_points();
	}
	    break;
	case 6:"06)laptop ";
	gotoxy(3,2);
	printf("stock %d",stock[5]);
	    change = 5;
	    price = 3500;
		if(stock[5] == 0){
			gotoxy(3,5);
		printf("\n OUT OF STOCK!!");
		getch();
		store::redeem_points();
	}
	    break;
	default:
	    store::redeem_points();

    }
	
	getch();
	gotoxy(3,4);
    printf("price is %lld",price);
	gotoxy(3,5);
    printf("you want to buy this?? 1.)yes::2.)no: ");
    scanf("%d",&yn);
	clrscr();
	frame();
	showtime();
    switch(yn){
	case 1:

	    if(point >= price){
			if(balance >= price){
			for(int i = change+1;i > change;i--){

				stock[i-1] = stock[i-1] - 1;

	    }
			point = point - price;
			gotoxy(3,7);
			printf("succeed your points is left: %lld",point);
	    }

	    else{
			gotoxy(3,7);
			printf("no more points!!");
			getch();
			store::redeem_points();
		}
	    break;
	case 2:
	    store::redeem_points();
	    break;

	default:
	    exit(1);
		}
	}
}

void store::deposite_money()
{
    long a ;
    clrscr();
	frame();
	showtime();
	gotoxy(3,2);
    printf("Enter how much money you want to deposit::");
    scanf("%lld",&a);
    balance+=a;
	gotoxy(3,4);
    printf("Your total deposit amount %lld your balance is %lld",a,balance);
}

void store::display_account()
{
    clrscr();
	frame();
	showtime();
	gotoxy(3,2);
    printf("name : %s",name);
	gotoxy(3,3);
    printf("address : %s",add);
	gotoxy(3,4);
    printf("Amount your money : %lld",balance);
	gotoxy(3,5);
    printf("Amount your points : %lld",point);

}

void store::shopping()
{

    int sw = 9,change,yn;
    long price,pp = 0;
    char bn[] = "banana",car[] = "car",watch[] = "watch",phone[] = "phone",cook[] = "cookie",laptop[] = "laptop";
	clrscr();
	frame();
	showtime();
	gotoxy(3,2);
    printf("***choose what you wants***");
	gotoxy(3,3);
    printf("01)%s ",bn);
	gotoxy(3,4);
    printf("02)%s ",car);
	gotoxy(3,5);
    printf("03)%s ",watch);
	gotoxy(3,6);
    printf("04)%s ",phone);
	gotoxy(3,7);
    printf("05)%s",cook);
	gotoxy(3,8);
    printf("06)%s",laptop);
	gotoxy(3,9);
    printf("00)Exit");
	gotoxy(3,10);
    printf("please select the option from above: ");
    scanf("%d",&sw);
    clrscr();

	frame();
	showtime();
    switch(sw){
	case 0:
	    exit(0);
	    break;
	case 1:"01)banana";
	gotoxy(3,2);
	printf("stock %d",stock[0]);
	//printf("\npress anykey to continue");
	    change = 0;
	    price = 35;
		pp = 1;
		if(stock[0] == 0){
			gotoxy(3,5);
		printf("OUT OF STOCK!!");
		getch();
		store::shopping();
	}
	    break;
	case 2:"02)car ";
	gotoxy(3,2);
	printf("stock %d",stock[1]);
	    change = 1;
	    price = 6758999;
		pp = 102535;
		if(stock[1] == 0){
			gotoxy(3,5);
		printf("OUT OF STOCK!!");
		getch();
		store::shopping();
	}
	    break;
	case 3:"03)watch ";
	gotoxy(3,2);
	printf("stock %d",stock[2]);
	    change = 2;
	    price = 120000;
		pp = 35000;
		if(stock[2] == 0){
			gotoxy(3,5);
		printf("OUT OF STOCK!!");
		getch();
		store::shopping();
	}
	    break;
	case 4:"04)phone ";
	gotoxy(3,2);
	printf("stock %d",stock[3]);
	    change = 3;
	    price = 32450;
		pp = 2500;
		if(stock[3] == 0){
			gotoxy(3,5);
		printf("OUT OF STOCK!!");
		getch();
		store::shopping();
	}
	    break;
	case 5:"05)cookies ";
	gotoxy(3,2);
	printf("stock %d",stock[4]);
	    change = 4;
	    price = 21;
		pp = 1;
		if(stock[4] == 0){
			gotoxy(3,5);
		printf("OUT OF STOCK!!");
		getch();
		store::shopping();
	}
	    break;
	case 6:"06)laptop ";
	gotoxy(3,2);
	printf("stock %d",stock[5]);
	    change = 5;
	    price = 35000;
		pp = 2130;
		if(stock[5] == 0){
			gotoxy(3,5);
		printf("\n OUT OF STOCK!!");
		getch();
		store::shopping();
	}
	    break;
	default:
	    store::shopping();

    }
	
	getch();
	gotoxy(3,4);
    printf("price is %lld",price);
	gotoxy(3,5);
    printf("you want to buy this?? 1.)yes::2.)no: ");
    scanf("%d",&yn);
	clrscr();

	frame();
	showtime();
    switch(yn){
	case 1:

	    if(balance >= price){
			for(int i = change+1;i > change;i--){

				stock[i-1] = stock[i-1] - 1;

	    }
			balance = balance - price;
			point += pp;
			gotoxy(3,7);
			printf("succeed your balance is left: %lld",balance);
			gotoxy(3,8);
			printf("you earn %lld points || your points is %lld",pp,point);
	    }

	    else{
			gotoxy(3,7);
			printf("balance less than price!!");
			getch();
			store::shopping();
		}
	    break;
	case 2:
	    store::shopping();
	    break;

	default:
	    exit(1);
    }


}
/////// end of store class

void transaction(){
	sum0 = 10-stock[0];
	sum1 = 9-stock[1];
	sum2 = 8-stock[2];
	sum3 = 5-stock[3];
	sum4 = 7-stock[4];
	sum5 = 2-stock[5];
	clrscr();
	frame();
	showtime();
	gotoxy(3,2);
	printf("Transaction History");
	gotoxy(3,3);
	printf("you buy banana    : %d ea",sum0);
	gotoxy(3,4);
	printf("you buy car       : %d ea",sum1);
	gotoxy(3,5);
	printf("you buy watch     : %d ea",sum2);
	gotoxy(3,6);
	printf("you buy phone     : %d ea",sum3);
	gotoxy(3,7);
	printf("you buy cookie    : %d ea",sum4);
	gotoxy(3,8);
	printf("you buy laptop    : %d ea",sum5);
}

class hallofframe
{
    char name[100],add[100];
public:
    void credit ();
};

void hallofframe::credit()
{
	clrscr();
	frame2();
	gotoxy(22,5);
    printf("Online store C++ mini project");
	gotoxy(27,7);
    printf("Wiraphat Prasomphong");
	gotoxy(7,9);
    printf("Curriculum for High Vocational Certificate in Computer Software");

}

int main()
{
    int ch,x,n,ttime = 99,dxbydx = 1;
    store obj;
	hallofframe cr;
    clrscr();

	if(lscreen == 0){
		loadscr();
		lscreen = 1;
		x = 'y';
	}
	clrscr();
	gotoxy(35,35);////////////
	textcolor(WHITE);
	obj.open_account();
    do
    {

	clrscr();
	frame();
    showtime();
	gotoxy(3,3);
    printf("	01)Deposite money ");
	gotoxy(3,4);
    printf("	02)Shopping ");
	gotoxy(3,5);
    printf("	03)Redeem points ");
	gotoxy(3,6);
    printf("	04)Online bills");
	gotoxy(3,7);
    printf("	05)Display account");
	gotoxy(3,8);
    printf("	06)Transaction history");
	gotoxy(3,9);
    printf("	07)Delete account!!");
	gotoxy(3,10);
    printf("	08)Credit");
	gotoxy(3,11);
    printf("	00)Exit");
	gotoxy(3,13);
    printf("	please select the option from above: ");
	scanf("%d",&ch);

    clrscr();
	dxbydx = 1;
    switch(ch)
    {
	case 1:"01)deposite money \n";
		obj.deposite_money();
		break;
	case 2:"02)shopping\n";
		obj.shopping();
		break;
	case 3:"03)Redeem points \n";
		obj.redeem_points ();
		break;
	case 4:"04)online bills \n";
		obj.online_bills();
		break;
	case 5:"05)display account\n";
		obj.display_account();
		break;
	case 6:"06)transaction history\n";
		transaction();
		break;
	case 7:"07)delete account\n";
		obj.open_account();
		break;
	case 8:"08)credit\n";
		cr.credit();
		break;
	case 0:
	    if(ch==0)
	    {
	       printf("exit");
	    }
	    exit(0);
	    break;
	default:
	    printf("This is not exit please try again ");

    }
	gotoxy(3,18);
    printf("do you want to select next step then please press:y");
	gotoxy(3,19);
    printf("if you want to exit then please press: N ");

	x=getch();
	gotoxy(3,20);
	//printf("x = %c",x);
    if(x=='n' || x=='N'){
	printf("exit");
		}
    }
    while (x=='y' || x=='Y');


 getch();
 return 0;




}
