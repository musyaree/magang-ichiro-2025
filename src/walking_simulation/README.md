# Walking Simulation Package

*Package* ini adalah inti dari proyek simulasi robot berjalan menggunakan MuJoCo dan ROS 2.

## Komponen
- **`simulator.py`**: Skrip Python utama yang berfungsi sebagai jembatan. Ia memuat simulasi MuJoCo dan berkomunikasi dengan *node* ROS 2.
- **`aruku/`**: *Package* C++ yang berisi algoritma inti untuk menghasilkan gerakan berjalan.
- **`aruku_interfaces/`**: *Package* yang mendefinisikan format pesan kustom untuk komunikasi dengan `aruku`.
- **`model/`**: Berisi file model robot dalam format MJCF (XML) untuk MuJoCo.

## Cara Menjalankan
*(Coming Soon)*

1.  **Build Workspace:**
    ```bash
    cd ~/ros2_ws
    colcon build
    ```
2.  **Jalankan Node Aruku (Terminal 1):**
    ```bash
    source install/setup.bash
    # (Perintah untuk menjalankan aruku node akan ditambahkan di sini)
    ```
3.  **Jalankan Simulator (Terminal 2):**
    ```bash
    cd src/walking_simulation
    source venv/bin/activate
    python3 simulator.py
    ```