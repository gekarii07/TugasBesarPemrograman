#include <stdio.h>
#include <time.h>


// Dekalarasi variable global yang di gunakan pada program pemesanan villa ini :

//Deklarasi prototype fungsi
void header ();
void error_alert();
void menu_program();
void menu_masuk();


int main (){
	
}

// Note : Pada beberapa compiler kode system ("clear") dapat dituliskan system ("cls")
void header (){
    system ("cls");
	printf  ("\t\t\t\t=========================================================\n");
	printf  ("\t\t\t\t||                                                     ||\n");	
	printf  ("\t\t\t\t||                TUGAS BESAR PEMROGRAMAN              ||\n");
	printf  ("\t\t\t\t||            Program Pemesanan Villa Anyelir          ||\n");
	printf  ("\t\t\t\t||                                                     ||\n");
	printf  ("\t\t\t\t=========================================================\n");
	printf  ("\t\t\t\t||          Program disusun dan dibuat oleh :          ||\n");
	printf  ("\t\t\t\t||                                                     ||\n");
	printf  ("\t\t\t\t||  1. Gusti Ayu Wahyu Whurapsari       (2105551042)   ||\n");
	printf  ("\t\t\t\t||  2. Putu Eternalie Prajnani Welaga   (2105551046)   ||\n");
	printf  ("\t\t\t\t||                                                     ||\n");
	printf  ("\t\t\t\t||           Program Studi Teknologi Informasi         ||\n");
	printf  ("\t\t\t\t||                   Fakultas Teknik                   ||\n");
	printf  ("\t\t\t\t||                 Universitas Udayana                 ||\n");
	printf  ("\t\t\t\t||                       2021                          ||\n");
	printf  ("\t\t\t\t=========================================================\n");
	printf  ("\t\t\t\t         Tekan ENTER  untuk melanjutkan....\n");
    printf  ("\t\t\t\t=========================================================\n");
	getchar ();
    system ("cls");
}

void menu (){

    ktgri:

    printf ("\t\t\t\t|=========================================================|\n");
    printf ("\t\t\t\t|                 KATEGORI MENU VILLA ANYELIR             |\n");
    printf ("\t\t\t\t|=========================================================|\n");
    printf ("\t\t\t\t|   No  |    Pilihan Kategori                             |\n");
    printf ("\t\t\t\t|-------|-------------------------------------------------|\n");
    printf ("\t\t\t\t|   1   |    Deskripsi Villa                              |\n");
    printf ("\t\t\t\t|   2   |    Lihat List Villa                             |\n");
    printf ("\t\t\t\t|   3   |    Pesan Villa                                  |\n");
    printf ("\t\t\t\t|   4   |    Lihat Data Tamu                              |\n");
    printf ("\t\t\t\t|   5   |    Hapus Data Tamu                              |\n");
    printf ("\t\t\t\t|   6   |    EXIT                                         |\n");
    printf ("\t\t\t\t|=========================================================|\n");

    printf ("\n\t\t\t\t||Masukkan Pilihan Anda :");
        scanf  ("%d",&kategori);
        system ("cls");
        //pada menu switch case bagian ini , merupakan lanjutan proses dari pilihan user yang di inputkan sebelumnya pada pilihan pada MENU program.
        switch (kategori)
        {
            // pada case 1 ini, karena user milih program transaksi maka program akan menampilkan menu kategori dan user akan diminta untuk memilih kategori untuk transaksi yang di lakukan oleh user.
            case 1:
                deskripsi_villa();
                goto ktgri;
                break;
            //pada case 2 dari menu switch (kategori), karena user memilih menu untuk mengecek saldo maka program akan menampilkan sisa saldo yang dimiliki oleh user saat menu ini di akses
            case 2:
                list_villa();
                goto ktgri;
                break;
            //pada case 3 user akan mengecek saldo yang dimiliki sekarang baik sebelum melakukan input transaksi dan input pemasukan maupun setelahnya
            case 3:
                pesan_villa();
                goto ktgri;
                break;
            case 4:
                lihat_data();
                goto ktgri;
                break;
            case 5:
                hapus_data();
                goto ktgri;
                break;
            case 6:
                exit (0);
                break;
            default:
                printf ("Silahkan ketik ulang pilihan anda");
                goto ktgri;
                break;
        }
    }
}

void deskripsi_villa (){
	printf ("\t\t\t\t|=========================================================|\n");
    printf ("\t\t\t\t|                 DESKRIPSI VILLA ANYELIR                 |\n");
    printf ("\t\t\t\t|=========================================================|\n");
    printf ("\t\t\t\t|Villa  Anyelir  adalah  salah  satu  villa  yang  baru   |\n");
    printf ("\t\t\t\t|beroperasi sejak bulan November 2021. Villa ini berlokasi|\n");
    printf ("\t\t\t\t|di Jalan Anyelir No. ,  Denpasar Timur,  Denpasar,  Bali.|\n");
    printf ("\t\t\t\t|Villa Anyelir memiliki beberapa fasilitas seperti kamar  |\n");
    printf ("\t\t\t\t|yang nyaman,  kamar mandi luas,  ruangan ber AC, dan ada |\n");
    printf ("\t\t\t\t|kolam renang di dalamnya.                                |\n");
    printf ("\t\t\t\t|                                                         |\n");
    printf ("\t\t\t\t|Villa Anyelir memadukan arsitektur Bali dan modern yang  |\n");
    printf ("\t\t\t\t|membuat pengunjung senantiasa nyaman sehingga ingin lagi |\n");
    printf ("\t\t\t\t|menyewa villa ini. Jika ingin melakukan pemesanan segera |\n");
    printf ("\t\t\t\t|hubungi kontak di bawah ini.                             |\n");
    printf ("\t\t\t\t|                        0361000000                       |\n")
    printf ("\t\t\t\t|=========================================================|\n");
}

void list_villa (){
	
}

void error_alert(){
    printf   ("\t\t\t\t========================================================\n");
    printf   ("\t\t\t\t||           Pilihan yang Anda masukan Salah!!!        ||\n");
    printf   ("\t\t\t\t||         Silahkan Memilih Pilihan yang Sudah ada     ||\n");
    printf   ("\t\t\t\t\t======================================================\n");
}



void menu_program(){
    menuprogram :

    printf ("\n");
    printf ("\t\t\t\t|=========================================================|\n");
    printf ("\t\t\t\t|                       MENU PROGRAM                      |\n");
    printf ("\t\t\t\t|=========================================================|\n");
    printf ("\t\t\t\t|   No  |    Pilihan Menu Program                         |\n");
    printf ("\t\t\t\t|-------|-------------------------------------------------|\n");
    printf ("\t\t\t\t|   1   |    MENU                                         |\n");
    printf ("\t\t\t\t|   2   |    EXIT                                         |\n");
    printf ("\t\t\t\t|=========================================================|\n"); 
    printf ("\t\t\t\t|=========================================================|\n");
    printf ("\n\t\t\t\t Masukan Pilihan Anda => ");
    scanf  ("%d",&pilihanmenu);
    printf ("\t\t\t\t|=========================================================|\n");
    system ("cls");

    // pada switch case bagian ini , disini akan memproses dari inputan yang sudah dimasukkan oleh user pada proses pemiihan pemilihan menu sebelumnya dan mengantarkan program pada fungsi yang merupakan panggilan dari pilihan yang di inputkan oleh user.
    switch (pilihanmenu)
    {
        //pada case 1 ini, program akan memanggil fungsi yang sudah dibuat yaitu fungsi yang bernama void menu();
        case 1:
            menu ();
            break;
        case 2:
            system (EXIT_SUCCESS);
            break;
        //Jika user menginput pilihan yang salah, atau menginput nilai yang tidak ada pada tampilan menu maka program akan mengesekusi pada bagian default seperti di bawah ini:
        default:
            error_alert();
            //goto pilih; dimana syntax ini akan membawa user kembali ke menu pemilihan program untuk menginputkan pilihan yang benar, ini akan terus berulang hingga user menginputkan pilihan yang benar sesaui apa yang sudah ditampilkan pada menu pilihan.
            goto menuprogram;
            break;
    }
}


void menu_masuk(){
    // Variabel pilihan yang digunakan untuk menyimpan pilihan pengguna antara Masuk dengan Registrasi
    int pilihan;

    // Instruksi yang diberikan kepada pengguna
    menumasuk:
    printf ("\t\t\t\t|=========================================================|\n");
    printf ("\t\t\t\t|                     PILIHAN MENU MASUK                  |\n");
    printf ("\t\t\t\t|=========================================================|\n");
    printf ("\t\t\t\t|   No  |    Menu Masuk                                   |\n");
    printf ("\t\t\t\t|-------|-------------------------------------------------|\n");
    printf ("\t\t\t\t|   1   |    Masuk                                        |\n");
    printf ("\t\t\t\t|   2   |    Registrasi                                   |\n");
    printf ("\t\t\t\t|   3   |    Exit                                         |\n");
    printf ("\t\t\t\t|=========================================================|\n");
    printf ("\t\t\t\t|=========================================================|\n");
    printf ("\t\t\t\t|| Masukkan pilihan Anda => ");
    scanf  ("%d", &pilihan);
    printf ("\t\t\t\t|=========================================================|\n");
    // Membersihkan Layar terminal 
    system ("cls");

    /* Percabangan Switch dengan kondisi nilai yang disimpan pada variabel
       pilihan jika pengguna menuliskan 1 maka akan dipanggil fungsi masuk()
       jika pengguna menuliskna 2 maka akan dipanggil fungsi registrasi()    */
    switch (pilihan){
    case 1:
        // Jika pengguna menginput angka 1 maka dipanggil fungsi masuk
        masuk();
        break;
    case 2:
        // Jika pengguna menginput angka 2 maka dipanggil fungsi registrasi
        daftar();
        break;
    case 3:
        exit(1);
        break;
    default:
        error_alert();
        // Kembali ke label instruksi jika terjadi kesalahan dalam menginput pilihan
        goto menumasuk;
        break;
    }
}



