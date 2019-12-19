<center><b>LAPORAN RESMI FINAL PROJECT </b></center>
<center><b>MATA KULIAH PEMROGRAMAN LANJUT A</b></center>
<center><b>“APLIKASI PENDATAAN RUMAH SAKIT”</b></center>
<p></p>  
<center><b>KELOMPOK  17:</b></center>
<center><b>MELINDA SHILATIL FAUZIYAH	[18081010122]</b></center>
<center><b>IQBAL ALFIANSYAH 	     	[18081010123]</b></center>
<p></p>  
<p></p>  
<center><b>PROGRAM STUDI TEKNIK INFORMATIKA</b></center> 
<center><b>FAKULTAS ILMU KOMPUTER</b></center>
    <center><b>UNIVERSITAS PEMBANGUNAN NASIONAL “VETERAN” </b></center>
    <center><b>JAWA TIMUR</b></center>
    <center><b>2019</b></center>
    <p></p>
    <p></p>
    <p></p>
<center><b>KATA PENGANTAR</b></center>
<p></p>
<div class="text-justify">Puji syukur kepada Tuhan Yang Maha Esa yang telah memberikan segala kenikmatan berupa kesehatan jasmani dan rohani, sehingga kami dapat menyelesaikan laporan resmi final project ini dengan lancar dan sukses. Tidak lupa, kami juga mengucapkan banyak terima kasih atas bantuan dari pihak-pihak yang telah berkontribusi dengan memberikan sumbangan baik materi maupun pemikiran. Kami juga bersyukur atas selesainya laporan ini, sehingga diharapkan Program Aplikasi Pendataan Rumah Sakit dapat berfungsi dengan baik. Dengan minimnya pengetahuan yang kami miliki dalam pembuatan laporan ini, sehingga kami mohon arahan untuk saran dan kesannya agar laporan ini dapat menjadi lebih baik lagi. Terima kasih.</div>
<p></p>
<div class="text-right">Surabaya, 09 Desember 2019</div>
<div class="text-right">Kelompok 17,</div>
<p></p>	
<center><b>DAFTAR  ISI</b></center>

KATA PENGANTAR..........................

DAFTAR ISI..............................

DAFTAR GAMBAR...........................

BAB 1 PENDAHULUAN.......................
	
1.1.	Latar belakang….................

1.2. 	Rumusan masalah.................

1.3.	Tujuan..........................

1.4.	Manfaat.........................

1.5.	Luaran..........................
	
BAB 2 PEMBAHASAN........................

2.1. Bahasa C...........................

2.2. Deskripsi Aplikasi.................

2.3. Bubble Sort........................
	
2.4. Linear Search (Recursive)..........
	
BAB 3 HASIL FINAL PROJECT...............

3.1. Source code........................
	
3.2. Input dan output...................

BAB 4 PENUTUP...........................

BAB 5 DAFTAR PUSTAKA....................









<p></p>
<center><b>DAFTAR GAMBAR</b></center>

Gambar 1. Menu utama................................................

Gambar 1.1. Menu tambah data ke-1...................................

Gambar 1.2. Menu tambah data ke-2...................................

Gambar 1.3. Menu tambah data ke-3...................................

Gambar 2.  Sub menu pengurutan data.................................

Gambar 2.1. Menu pengurutan data berdasarkan id pasien..............

Gambar 2.2. Menu pengurutan data berdasarkan nama pasien............

Gambar 2.3. Menu pengurutan data berdasarkan jenis  penyakit........

Gambar 2.4. Menu pengurutan data berdasarkan jenis kamar............

Gambar 2.5. Menu pengurutan data berdasarkan nomor kamar............

Gambar 3. Menu ubah data............................................

Gambar 4.  Sub menu searching data pasien...........................

Gambar 4.1. Sub menu searching data pasien berdasarkan id pasien....

Gambar 4.2.  Sub menu searching data pasien berdasarkan nama pasien.

Gambar 4.3.  Sub menu searching data pasien berdasarkan nomor kamar.

Gambar 5.  Menu keluar..............................................





<center><b>BAB 1</b></center>
<center><b>PENDAHULUAN</b></center>

1.1.	Latar Belakang
	Final project yang kami kerjakan dengan judul “Aplikasi Pendataan Rumah Sakit” merupakan tugas akhir dari mata kuliah “Pemrograman Lanjut” yang mana menggunakan bahasa C sebagai penyelesaiannya. Untuk pencarian data pasien ketika pasien tersebut ingin berobat, petugas pelayanan akan mencari data pasien tersebut ke dalam arsip tempat penyimpanan data-data rekam medis pasien sehingga dibutuhkan waktu yang cukup lama. Setelah pasien ditemukan barulah dilakukan tindakan medis. Karena itulah Aplikasi Pendataan Rumah Sakit yang kami buat dapat di manfaatkan untuk mengola pendataan pasien agar lebih cepat dan efisien dalam waktu. Aplikasi  Pendataan Rumah Sakit ini menerapkan metode Create, Read, Update dan juga menambahkan metode searching berupa linear search (recursive) serta metode sorting berupa bubble sort. Pengelolaan data di rumah sakit merupakan salah satu komponen yang penting  dalam  mewujudkan  suatu  sistem  informasi  di  rumah  sakit. Pengelolaan  data  secara  manual,  mempunyai  banyak  kelemahan,  selain membutuhkan waktu yang lama, keakuratannya juga kurang  dapat  diterima, karena  kemungkinan  kesalahan  sangat  besar.  Dengan  dukungan  teknologi informasi  yang  ada  sekarang  ini,  pekerjaan  pengelolaan  data  dengan  cara manual dapat digantikan dengan suatu sistem informasi dengan menggunakan komputer. Selain lebih cepat dan mudah, pengelolaan data juga menjadi lebih akurat.

1.2.	Rumusan Masalah
	Permasalahan yang akan diselesaikan dari final project ini adalah :
1.	Bagaimana cara mencari data pasien dengan lebih mudah?
2.	Bagaimana menciptakan program yang gampang digunakan ?
3.	Bagaimana cara menuliskan source code yang efisien ?
4.	Bagaimana cara membuat program yang memiliki lebih fungsional ?

1.3.	Tujuan
	Tujuan yang akan dicapai dari final project ini adalah :	
1.	Menciptakan program yang gampang digunakan.
2.	Dapat menuliskan source code yang efisien.
3.	Dapat mendapatkan informasi pasien dengan lebih mudah dan cepat. 
4.	Dapat membuat program yang memiliki lebih fungsional.

1.4.	Manfaat
	Manfaat dari final project ini adalah :
1.	Program dapat digunakan sesuai dengan fitur yang telah tersedia pada program.
2.	Memberikan kemudahan untuk mendata pasien. 
3.	Program bermanfaat untuk mempermudah pengguna dalam pendataan pasien.
4.	Bagi mahasiswa, final project ini dapat mengasah daya logika serta sebagai sarana penerapan dari teori yang telah didapat untuk diimplementasikan langsung berupa praktek.

1.5.	Luaran
	Luaran yang diharapkan dari final project ini adalah :
1.	Terciptanya Aplikasi Pendataan Rumah Sakit dalam bentuk file yang berekstensi (.c).
2.	Program Aplikasi Pendataan Rumah Sakit dapat berfungsi dengan baik sesuai harapan.
3.	Program dapat bermanfaat untuk mempermudah dalam pencarian data. 
4.	Program dapat bermanfaat bagi para pengguna dengan fitur yang telah tersedia.
5.	Menyelesaikan tugas Program Pendataan Rumah Sakit sebagai final project dari mata kuliah pemrograman lanjut dengan baik.


<center><b>BAB 2</b></center>
<center><b>PEMBAHASAN</b></center>

2.1. Bahasa C
	Bahasa C merupakan perkembangan dari bahasa BCPL yang dikembangkan oleh Martin Richards pada tahun 1967. Bahasa C pertama kali digunakan di computer Digital Equipment Corporation PDP-11 yang menggunakan system operasi UNIX. (Solichin, 2003).

2.2. Deskripsi Aplikasi
	Program kali ini adalah Aplikasi Pendataan Rumah Sakit dimana pada program aplikasi ini terdapat menu untuk menambahkan data pasien, mengubah data pasien, dan menampilkan data pasien dengan pengurutan berdasarkan no.id, nama, jenis penyakit, jenis kamar, dan nomor kamar. Program juga dapat mencari data pasien berdasarkan no.id, nama pasien, ataupun nomor kamar pasien. Pengurutan yang dilakukan oleh program adalah metode bubble sort dan pencarian data yang dilakukan menggunakan metode linear search (recursive). Data pasien yang dapat di tampilkan oleh program meliputi id pasien, nama pasien, jenis penyakit, jenis kamar, nomor kamar, dan tanggal masuk.

2.3. Bubble Sort 
	Bubble sort (metode gelembung) adalah metode/algoritma pengurutan dengan dengan cara melakukan penukaran data dengan tepat disebelahnya secara terus menerus sampai bisa dipastikan dalam satu iterasi tertentu tidak ada lagi perubahan. Jika tidak ada perubahan berarti data sudah terurut.
Algoritma bubble sort adalah salah satu algoritma pengurutan yang paling simple, baik dalam hal pengertian maupun penerapannya. Ide dari algoritma ini adalah mengulang proses pembandingan antara tiap-tiap elemen array dan menukarnya apabila urutannya salah. Pembandingan elemen-elemen ini akan terus diulang hingga tidak perlu dilakukan penukaran lagi.


2.4.Linear Search (Recursive)
Dalam ilmu komputer, pencarian linear adalah sebuah algoritme pencarian, juga dikenal sebagai pencarian sekuensial, yang cocok untuk mencari sebuah nilai tertentu pada sebuah himpunan data. 
Algoritma pencarian linear sangat sederhana: Untuk setiap elemen di list, jika elemen itu cocok, hentikan pencarian (ketemu), jika tidak cocok, lihat elemen berikutnya, hingga akhir list. Jika akhir list dicapai dan tidak ada yang cocok, berarti elemen tidak ditemukan. Disini linear search yang di terapkan dengan recursive yaitu fungsi yang memanggil dirinya sendiri secara langsung ataupun tidak, dan proses pemanggilannya itu disebut rekursi. 
