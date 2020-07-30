#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	int x;
	double xEp, yNp, Zp, xEo, yNo, f, Xo, Yo, Zo, r11, r12, r13, r21, r22, r23, r31, r32, r33, Xp, Yp;

	// Ne tür bir değişim yapılacağını soralım.
	printf("\n#=== Lütfen aşağıda belirtildiği gibi değişimin türünü seçiniz! ===#\n");
	printf("'Resim koordinatlarından cisim koordinatlarının hesaplanması' için 1, \n");
	printf("'Cisim koordinatlarından resim koordinatlarının hesaplanması' için 2, tuşlayınız: ");
	scanf("%d", &x);
	// Resim Koordinatlarından Cisim Koordinatlarının Hesaplanması!
	if (x == 1)
	{
			/// Bilinenleri isteyelim.
		// xξp, yηp; Resim Koordinatları
		printf("xξp değerini giriniz: ");
		scanf("%lf", &xEp);
		printf("yηp değerini giriniz: ");
		scanf("%lf", &yNp);
		// Zp; P noktasının yüksekliği
		printf("Zp değerini giriniz: ");
		scanf("%lf", &Zp);
		/* İç yöneltme elemanları; Bunlar uzaysal ışın demetinin izdüşüm merkezini resim düzlemine göre sabitlerler.
		xξo, yηo; Resim ana noktasının resim koordinatları
		f; Resim çekme makinesi sabiti */
		printf("xξo değerini giriniz: ");
		scanf("%lf", &xEo);
		printf("yηo değerini giriniz: ");
		scanf("%lf", &yNo);
		printf("f değerini giriniz: ");
		scanf("%lf", &f);
		/* Dış yöneltme elemanları; Bu elemanlar, resmin konumunun ve izdüşüm merkezinin yardımıyla uzaysal ışın demetini cisim koordinat sisteminde sabitlerler.
		Xo, Yo, Zo; Resim çekme merkezinin cisim koordinatları
		ω, φ, κ; Resmin üç dönmesi (Dönüklük Matrisi; r11, r12, r13, r21, r22, r23, r31, r32, r33) */
		printf("Xo değerini giriniz: ");
		scanf("%lf", &Xo);
		printf("Yo değerini giriniz: ");
		scanf("%lf", &Yo);
		printf("Zo değerini giriniz: ");
		scanf("%lf", &Zo);
		printf("r11 değerini giriniz: ");
		scanf("%lf", &r11);
		printf("r12 değerini giriniz: ");
		scanf("%lf", &r12);
		printf("r13 değerini giriniz: ");
		scanf("%lf", &r13);
		printf("r21 değerini giriniz: ");
		scanf("%lf", &r21);
		printf("r22 değerini giriniz: ");
		scanf("%lf", &r22);
		printf("r23 değerini giriniz: ");
		scanf("%lf", &r23);
		printf("r31 değerini giriniz: ");
		scanf("%lf", &r31);
		printf("r32 değerini giriniz: ");
		scanf("%lf", &r32);
		printf("r33 değerini giriniz: ");
		scanf("%lf", &r33);
		/* NOT: Toplam olarak iç yöneltme ve dış yöneltme elemanları olan 9 parametre merkezi iz düşürülmüş resmi tanımlarlar. */
		// Bilinmeyenlerin hesaplanması.
		printf("\n\t=== Hesap sonuçları! === \n");
		/* Cisim koordinatlarının hesaplanması
		Xp = Xo + ((Zp - Zo) * ((r11 * (xEp - xEo) + r12 * (yNp - yNo) - r13 * f) / (r31 * (xEp - xEo) + r32 * (yNp - yNo) - r33 * f)));
		Yp = Yo + ((Zp - Zo) * ((r21 * (xEp - xEo) + r22 * (yNp - yNo) - r23 * f) / (r31 * (xEp - xEo) + r32 * (yNp - yNo) - r33 * f))); */
		Xp = Xo + ((Zp - Zo) * ((r11 * (xEp - xEo) + r12 * (yNp - yNo) - r13 * f) / (r31 * (xEp - xEo) + r32 * (yNp - yNo) - r33 * f)));
		Yp = Yo + ((Zp - Zo) * ((r21 * (xEp - xEo) + r22 * (yNp - yNo) - r23 * f) / (r31 * (xEp - xEo) + r32 * (yNp - yNo) - r33 * f)));
		printf("Xp değeri: %f\n", Xp);
		printf("Yp değeri: %f\n", Yp);
	}
	// Cisim koordinatlarından resim koordinatlarının hesaplanması!
	else if (x == 2)
	{
			/// Bilinenleri isteyelim.
		//Xp, Yp, Zp; P noktasının Cisim Koordinatları
		printf("Xp değerini giriniz: ");
		scanf("%lf", &Xp);
		printf("Yp değerini giriniz: ");
		scanf("%lf", &Yp);
		printf("Zp değerini giriniz: ");
		scanf("%lf", &Zp);
		/* İç yöneltme elemanları; Bunlar uzaysal ışın demetinin izdüşüm merkezini resim düzlemine göre sabitlerler.
		xξo, yηo; Resim ana noktasının resim koordinatları
		f; Resim çekme makinesi sabiti */
		printf("xξo değerini giriniz: ");
		scanf("%lf", &xEo);
		printf("yηo değerini giriniz: ");
		scanf("%lf", &yNo);
		printf("f değerini giriniz: ");
		scanf("%lf", &f);
		/* Dış yöneltme elemanları; Bu elemanlar, resmin konumunun ve izdüşüm merkezinin yardımıyla uzaysal ışın demetini cisim koordinat sisteminde sabitlerler.
		Xo, Yo, Zo; Resim çekme merkezinin cisim koordinatları
		ω, φ, κ; Resmin üç dönmesi (Dönüklük Matrisi; r11, r12, r13, r21, r22, r23, r31, r32, r33) */
		printf("Xo değerini giriniz: ");
		scanf("%lf", &Xo);
		printf("Yo değerini giriniz: ");
		scanf("%lf", &Yo);
		printf("Zo değerini giriniz: ");
		scanf("%lf", &Zo);
		printf("r11 değerini giriniz: ");
		scanf("%lf", &r11);
		printf("r12 değerini giriniz: ");
		scanf("%lf", &r12);
		printf("r13 değerini giriniz: ");
		scanf("%lf", &r13);
		printf("r21 değerini giriniz: ");
		scanf("%lf", &r21);
		printf("r22 değerini giriniz: ");
		scanf("%lf", &r22);
		printf("r23 değerini giriniz: ");
		scanf("%lf", &r23);
		printf("r31 değerini giriniz: ");
		scanf("%lf", &r31);
		printf("r32 değerini giriniz: ");
		scanf("%lf", &r32);
		printf("r33 değerini giriniz: ");
		scanf("%lf", &r33);
		// Bilinmeyenlerin hesaplanması.
		printf("\n\t=== Hesap sonuçları! === \n");
		/* NOT: Toplam olarak iç yöneltme ve dış yöneltme elemanları olan 9 parametre merkezi iz düşürülmüş resmi tanımlarlar. */
		/* Resim koordinatlarının hesaplanması
		xEp = xEo - (f * (r11 * (Xp - Xo) + r21 * (Yp - Yo) + r31 * (Zp - Zo)) / (r13 * (Xp - Xo) + r23 * (Yp - Yo) + r33 * (Zp - Zo)));
		yNp = yNo - (f * (r12 * (Xp - Xo) + r22 * (Yp - Yo) + r32 * (Zp - Zo)) / (r13 * (Xp - Xo) + r23 * (Yp - Yo) + r33 * (Zp - Zo))); */
		xEp = xEo - (f * (r11 * (Xp - Xo) + r21 * (Yp - Yo) + r31 * (Zp - Zo)) / (r13 * (Xp - Xo) + r23 * (Yp - Yo) + r33 * (Zp - Zo)));
		yNp = yNo - (f * (r12 * (Xp - Xo) + r22 * (Yp - Yo) + r32 * (Zp - Zo)) / (r13 * (Xp - Xo) + r23 * (Yp - Yo) + r33 * (Zp - Zo)));
		printf("xEp değeri: %f\n", xEp);
		printf("yNp değeri: %f\n", yNp);
	}
	else
	{
		printf("Yanlış bir değer tuşladınız lütfen baştan yapınız!\n");
	}

	return 0;
}
