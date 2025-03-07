# 🕵️ Steganography Project

The **Steganography** project is a **C-based** application implementing **Least Significant Bit (LSB) steganography** in **BMP images**. It enables **embedding** a secret file into an image without noticeable distortion and **retrieving** the hidden file using **decoding**. The project showcases **bitwise operations**, **file I/O**, and **data validation**.

---

## 🛠 Project Features

- **Encoding:** Hides a **secret file** inside a **BMP image** using **LSB manipulation**.
- **Decoding:** Extracts the hidden file from a **stego BMP image** and restores its original format.
- **Magic String Validation:** Uses a predefined marker to ensure only valid **stego images** are processed.
- **File Type Support:** Handles **text**, **binary**, and **other formats**.
- **Capacity Check:** Confirms that the **BMP image** has enough space for the **secret file**.
- **Error Handling:** Provides informative messages for **invalid files** or **incorrect operations**.

---

## 🧰 Technology Stack

- **Programming Language:** C
- **Steganography Technique:** **Least Significant Bit (LSB)**
- **Image Format:** BMP (Bitmap Image)
- **Key Concepts:** Bitwise Operations, File I/O, Data Validation
- **Error Handling:** Ensures proper processing of **input files** and **image capacity**

---

## 🔄 Project Workflow

1. **User Input:** Choose between **encoding** or **decoding** mode.
2. **Encoding Process:**
   - Validates the **BMP image** for sufficient capacity.
   - Embeds the **secret file** metadata and data into the **image pixels**.
   - Uses **LSB manipulation** for embedding without visual distortion.
3. **Decoding Process:**
   - Extracts **metadata** and **file contents** from **image pixels**.
   - Reconstructs the **hidden file** and restores its original **format**.
4. **Validation:** Uses a **magic string** to verify valid **stego images** before decoding.
5. **Output:** Saves the **extracted file** with its **original format**.

---

## 📂 File Structure

- `test_encode.c` - **Main program** for **encoding** or **decoding** operations.
- `encode.c` - Manages the **encoding process** using **LSB manipulation**.
- `decode.c` - Handles the **decoding process** and **file reconstruction**.
- `common.h` - Defines **shared constants** and **macros**.
- `encode.h` - **Header file** for **encoding functions**.
- `decode.h` - **Header file** for **decoding functions**.
- `types.h` - Defines **custom data types** and **status codes**.

---

## 🚀 Future Enhancements

- **Encryption:** Encrypt **secret files** before embedding to improve **security**.
- **Image Format Support:** Extend functionality to **PNG**, **JPG**, and other formats.
- **GUI Development:** Create a **graphical interface** for easier user interaction.
- **Compression:** Implement **file compression** before embedding to **optimize space**.
- **Error Correction:** Add **redundancy checks** to handle **corruption** or **noise**.

---

## 📧 Contact

For any questions, feel free to reach out:

- **Vivek**
- Email: [gopivivek57@gmail.com](mailto:gopivivek57@gmail.com)
- LinkedIn: [Vivek](https://www.linkedin.com/in/vivek57/)

