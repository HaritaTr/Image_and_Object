#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	int x, y;
	double xEp, yNp, Zp, xEo, yNo, f, Xo, Yo, Zo, r11, r12, r13, r21, r22, r23, r31, r32, r33;

	// Ne tür bir değişim yapılacağını soralım.
	printf("\n#=== Lütfen aşağıda belirtildiği gibi değişimin türünü seçiniz! ===#\n");
	printf("'Resim koordinatlarından cisim koordinatlarının hesaplanması' için 1, \n");
	printf("'Cisim koordinatlarından resim koordinatlarının hesaplanması' için 2, tuşlayınız: \n");
	scanf("%d", &x);
	//Resim Koordinatlarından Cisim Koordinatlarının Hesaplanması!
	if (x == 1)
	{
			/// Bilinenleri isteyelim.
		// xξp, yηp; Resim Koordinatları
		scanf("xξp değerini giriniz: %lf\n", &xEp);
		scanf("yηp değerini giriniz: %lf\n", &yNp);
		// Zp; P noktasının yüksekliği
		scanf("Zp değerini giriniz: %lf\n", &Zp);
		/* İç yöneltme elemanları; Bunlar uzaysal ışın demetinin izdüşüm merkezini resim düzlemine göre sabitlerler.
		xξo, yηo; Resim ana noktasının resim koordinatları
		f; Resim çekme makinesi sabiti */
		scanf("xξo değerini giriniz: %lf\n", &xEo);
		scanf("yηo değerini giriniz: %lf\n", &yNo);
		scanf("f değerini giriniz: %lf\n", &f);
		/* Dış yöneltme elemanları; Bu elemanlar, resmin konumunun ve izdüşüm merkezinin yardımıyla uzaysal ışın demetini cisim koordinat sisteminde sabitlerler.
		Xo, Yo, Zo; Resim Çekme Merkezinin Cisim Koordinatları
		ω, φ, κ; Resmin üç dönmesi (Dönüklük Matrisi; r11, r12, r13, r21, r22, r23, r31, r32, r33) */
		scanf("Xo değerini giriniz: %lf\n", &Xo);
		scanf("Yo değerini giriniz: %lf\n", &Yo);
		scanf("Zo değerini giriniz: %lf\n", &Zo);
		scanf("r11 değerini giriniz: %lf\n", &r11);
		scanf("r12 değerini giriniz: %lf\n", &r12);
		scanf("r13 değerini giriniz: %lf\n", &r13);
		scanf("r21 değerini giriniz: %lf\n", &r21);
		scanf("r22 değerini giriniz: %lf\n", &r22);
		scanf("r23 değerini giriniz: %lf\n", &r23);
		scanf("r31 değerini giriniz: %lf\n", &r31);
		scanf("r32 değerini giriniz: %lf\n", &r32);
		scanf("r33 değerini giriniz: %lf\n", &r33);
		/* NOT: Toplam olarak iç yöneltme ve dış yöneltme elemanları olan 9 parametre merkezi iz düşürülmüş resmi tanımlarlar. */

		// Bilinmeyenlerin hesaplanması.
		/* Cisim koordinatlarının hesaplanması
		Xp = Xo + ((Zp - Zo) * ((r11 * (xEp - xEo) + r12 * (yNp - yNo) - r13 * f) / (r31 * (xEp - xEo) + r32 * (yNp - yNo) - r33 * f)));
		Yp = Yo + ((Zp - Zo) * ((r21 * (xEp - xEo) + r22 * (yNp - yNo) - r23 * f) / (r31 * (xEp - xEo) + r32 * (yNp - yNo) - r33 * f))); */
	}

	return 0;
}
