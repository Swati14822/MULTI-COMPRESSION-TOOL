# MULTITHREAD FILE-COMPRESSION-TOOL

*COMPANY* : CODTECH IT SOLUTIONS

*NAME* : SWATI KUMARI

*INTERN ID* : CTO4DF966

*DOMAIN* : C++ PROGRAMMING

*DURATION* : 4 WEEKS

*MENTOR* : NEELA SANTOSH


*Project Report: Simple File Compression and Decompression Tool in C++*

*Internship Title*: Multithreaded File Compression Tool Development


---

### *1. Project Overview*

This project focuses on developing a simple file compression and decompression tool using the C++ programming language. The goal is to reduce the size of a file using a basic compression algorithm and restore the original file via decompression, demonstrating core concepts of file handling and string processing in C++.

---

### *2. Objective*

* To implement a basic file compression technique (Run-Length Encoding - RLE).
* To perform decompression and validate the result against the original file.
* To ensure correct file input/output handling in C++.
* To provide a simple solution suitable for platforms like Code::Blocks.

---

### *3. Technologies Used*

* *Programming Language*: C++ (Standard: C++11)
* *IDE*: Code::Blocks 25.03
* *Compiler*: MinGW GCC
* *Algorithm*: Run-Length Encoding (RLE)

---

### *4. Methodology*

1. *Input*: Read original data from input.txt.
2. *Compression*:

   * Use RLE to compress sequences of repeated characters.
   * Example: aaaabbbcc becomes a4b3c2.
   * Save compressed output to compressed.txt.
3. *Decompression*:

   * Parse character-count pairs from the compressed file.
   * Reconstruct the original string.
   * Save output to decompressed.txt.
4. *Validation*:

   * Match decompressed.txt with input.txt to ensure accuracy.

---

### *5. Output Files*

* *input.txt*: Original file to compress
* *compressed.txt*: Compressed output using RLE
* *decompressed.txt*: Reconstructed original file

---

### *6. Sample Input/Output*

* **Input (input.txt):  aaaabbbcc
* *Compressed Output*:  a4b3c2
* *Decompressed Output*:  aaaabbbcc

### *7. CONCLUSION*

The project successfully demonstrates a functional and efficient file compression and decompression utility using C++. The use of RLE keeps the logic simple and verifiable, while file handling and string manipulation highlight foundational programming skills.

OUTPUT
![Image](https://github.com/user-attachments/assets/fb77823e-a6bc-4f3c-ad6e-f9525226d385)
