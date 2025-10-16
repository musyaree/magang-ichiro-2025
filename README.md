## Struktur Repositori

Repositori ini berisi beberapa *package* di dalam folder `src/`, yaitu:

- **`walking_simulation/`**: Package utama untuk proyek simulasi. Berisi skrip Python untuk kontrol MuJoCo dan package C++ `aruku` untuk algoritma berjalan.
- **`my_cpp_pkg/`**: Package latihan berisi berbagai node C++ yang saya buat untuk belajar (misalnya: `robot_news_station` sebagai publisher).
- **`my_py_pkg/`**: Package latihan berisi berbagai node Python yang saya buat untuk belajar (misalnya: `smartphone` sebagai subscriber).

---
# Laporan Kemajuan Magang (7-15 Oktober 2025)

Berikut adalah rangkuman dari apa yang telah saya pelajari dan kerjakan selama tanggal 7 Oktober - 15 Oktober 2025:

### **Konsep Fundamental ROS 2**
- [x] **Workspace & Packages:** Membuat dan mengelola *workspace* ROS 2 serta membuat *package* C++ dan Python.
- [x] **Nodes & Topics:** Memahami arsitektur *node* dan komunikasi data melalui *topics* (Publisher/Subscriber).
- [x] **Pemrograman ROS 2:** Membuat *node* fungsional menggunakan OOP di C++ dan Python.
- [x] **Tools:** Menggunakan `rqt_graph` untuk visualisasi dan `turtlesim` untuk eksperimen dasar.

### **Implementasi Proyek**
- [x] **Membuat Setup Proyek Utama:** Menyiapkan *package* `walking_simulation` sebagai fondasi proyek.
- [x] **Mengintegrasi Simulator:** Mengkonfigurasi `simulator.py` untuk memuat model robot di MuJoCo.
- [x] **Menganalisis Kode Eksternal:** Meng-kloning dan melakukan analisis awal pada *package* `aruku` dan `aruku_interfaces` untuk memahami arsitektur dan alur datanya.

---
## Rencana Selanjutnya

Langkah berikutnya adalah saya akan mulai mengintegrasikan *package* `aruku` dengan `simulator.py`. Tujuannya adalah untuk membuat skrip simulator dapat mengirim perintah `SetWalking` ke *node* `aruku` dan menerima data posisi sendi untuk menggerakkan robot di MuJoCo.
