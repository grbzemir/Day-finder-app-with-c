#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main ()
{

int gun,ay,yil;
long xt;

do 
{
    system("cls");
    printf("tarih giriniz \n");
    printf("gun : ");
    scanf("%d",&gun);
    printf("ay : ");
    scanf("%d",&ay);
    printf("yil : ");
    scanf("%d",&yil);

    xt = (yil-1)*365 + (yil-1)/4 - (yil-1)/100 + (yil-1)/400;

    if(ay==1)
    xt = xt + 0;
    else if(ay==2)
    xt = xt + 31;
    else if(ay==3)
    xt = xt + 59;
    else if(ay==4)
    xt = xt + 90;
    else if(ay==5)
    xt = xt + 120;
    else if(ay==6)
    xt = xt + 151;
    else if(ay==7)
    xt = xt + 181;
    else if(ay==8)
    xt = xt + 212;
    else if(ay==9)
    xt = xt + 243;
    else if(ay==10)
    xt = xt + 273;
    else if(ay==11)
    xt = xt + 304;
    else if(ay==12)
    xt = xt + 334;

    xt = xt + gun;
    if(yil%4==0 && yil%100!=0 || yil%400==0)
    xt = xt + 1;
    xt=xt%7;

    switch(xt)
    {
        case 0:
        printf("pazar");
        break;
        case 1:
        printf("pazartesi");
        break;
        case 2:
        printf("sali");
        break;
        case 3:
        printf("carsamba");
        break;
        case 4:
        printf("persembe");
        break;
        case 5:
        printf("cuma");
        break;
        case 6:
        printf("cumartesi");
        break;
    }
    printf("\n");
    puts("\n\n Cikmak icin ESC'ye Devam etmek icin ENTER'e basiniz.");

} 
while(getch()== 'ESC' || getch()== 'ENTER' );

getchar();

return 0;

}
































    return 0;
}