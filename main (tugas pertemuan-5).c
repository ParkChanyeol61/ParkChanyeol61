#include <stdio.h>
#include <stdlib.h>

int main()
{

    int harga_barang,diskon,harga_diskon,jumlah_yang_dibayar;
    printf("==============================sansan_shop_148============================== \n");
    printf ("masukkan total belanja anda : ");
    scanf ("%d",&harga_barang);

    if (harga_barang<100000)
    {
        diskon=0;
        harga_diskon=0*harga_barang;
    }
    else if (harga_barang>100000 && harga_barang<250000)
    {
        diskon=10;
        harga_diskon=0.1*harga_barang;
    }
    else if (harga_barang>250000)
    {
        diskon=15;
        harga_diskon=0.15*harga_barang;
    }
    jumlah_yang_dibayar=harga_barang-harga_diskon;
    printf ("selamat anda mendapatkan diskon sebesar : %d\n ", diskon);
    printf ("total potongan belanjaan anda adalah : %d\n ", harga_diskon);
    printf ("======================================================================== \n");
    printf ("total belanjaan yang harus dibayar adalah : %d\n ", jumlah_yang_dibayar);



    return 0;
}
