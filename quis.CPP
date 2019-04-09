#include <iostream.h>
#include <conio.h>

main()
{
	int V, A, L, E, R, I, C, TONT, TOT, NK, NM, NQ, NF, NA;
   char Nama [20],Jurusan [25];
   cout << "Nama Mahasiswa = "; cin >>Nama;
   cout << "Jurusan Mahasiswa = "; cin >>Jurusan;
   cout << "Nilai Tugas 1 = "; cin >>V;
   cout << "Nilai Tugas 2 = "; cin >>A;
   cout << "Nilai Tugas 3 = "; cin >>L;
   cout << "Nilai Kehadiran = "; cin >>E;
   cout << "Nilai Mid = "; cin >>R;
   cout << "Nilai Quis = "; cin >>I;
   cout << "Nilai Final = "; cin >>C;
   TONT = (V+A+L)/3;
   TOT =TONT*20/100;
   NK = E*20/100;
   NM = R*20/100;
   NQ = I*20/100;
   NF = C*20/100;
   NA = TOT+NK+NM+NQ+NF;
   cout << "\n Nama mahasiswa = "<<Nama;
   cout << "\n Jurusan Mahasiswa = "<<Jurusan;
   cout << "\n Nilai Akhir = "<<NA;
   getch();
}