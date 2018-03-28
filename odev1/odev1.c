//14253014  ZEHRA BETÜL BOYNUEÐRÝ

#include<stdio.h> 
#include<conio.h>  



int main()


{
	int x,basamakdegeri,toplam= 0;
	printf("Sayiyi girin:");
	scanf_s("%d", &x);


	while (x!=0)
	{
		while (x!=0) {

			basamakdegeri = x % 10;
			x = x / 10;
			basamakdegeri = basamakdegeri*basamakdegeri;
			toplam += basamakdegeri;
		}
		if (toplam != 1 && toplam != 4 && toplam != 16 && toplam != 37 && toplam != 58 && toplam != 89 && toplam != 145 && toplam != 42 && toplam != 20)
		{
			printf("%d, ", toplam);
		}
		  else if (toplam == 1)
		{
			printf("\n1 ile dongu basladi.\n");
			break;

		}
		else if (toplam == 4)
		{
			printf("\n4 ile dongu basladi.\n");
			break;
		}
		else if (toplam == 16)
		{
			printf("\n16 ile dongu basladi.\n");
			break;
		}
		else if (toplam == 37)
		{
			printf("\n37 ile dongu basladi.\n");
			break;
		}
		else if (toplam == 58)
		{
			printf("\n58 ile dongu basladi.\n");
			break;
		}
		else if (toplam == 89)
		{
			printf("\n89 ile dongu basladi.\n");
			break;
		}

		else if (toplam == 145)
		{
			printf("\n145 ile dongu basladi.\n");
			break;
		}
		else if (toplam == 42)
		{
			printf("\n42 ile dongu basladi.\n");
			break;
		}
		else if (toplam == 20)
		{
			printf("\n20 ile dongu basladi.\n");
			break;
		}
		
		x=toplam;
		toplam = 0;
		
	}
	

}
