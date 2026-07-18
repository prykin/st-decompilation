_strcmp:
0073A130  8B 54 24 04               MOV EDX,dword ptr [ESP + 0x4]
0073A134  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
0073A138  F7 C2 03 00 00 00         TEST EDX,0x3
0073A13E  75 3C                     JNZ 0x0073a17c
LAB_0073a140:
0073A140  8B 02                     MOV EAX,dword ptr [EDX]
0073A142  3A 01                     CMP AL,byte ptr [ECX]
0073A144  75 2E                     JNZ 0x0073a174
0073A146  0A C0                     OR AL,AL
0073A148  74 26                     JZ 0x0073a170
0073A14A  3A 61 01                  CMP AH,byte ptr [ECX + 0x1]
0073A14D  75 25                     JNZ 0x0073a174
0073A14F  0A E4                     OR AH,AH
0073A151  74 1D                     JZ 0x0073a170
0073A153  C1 E8 10                  SHR EAX,0x10
0073A156  3A 41 02                  CMP AL,byte ptr [ECX + 0x2]
0073A159  75 19                     JNZ 0x0073a174
0073A15B  0A C0                     OR AL,AL
0073A15D  74 11                     JZ 0x0073a170
0073A15F  3A 61 03                  CMP AH,byte ptr [ECX + 0x3]
0073A162  75 10                     JNZ 0x0073a174
0073A164  83 C1 04                  ADD ECX,0x4
0073A167  83 C2 04                  ADD EDX,0x4
0073A16A  0A E4                     OR AH,AH
0073A16C  75 D2                     JNZ 0x0073a140
0073A16E  8B FF                     MOV EDI,EDI
LAB_0073a170:
0073A170  33 C0                     XOR EAX,EAX
0073A172  C3                        RET
LAB_0073a174:
0073A174  1B C0                     SBB EAX,EAX
0073A176  D1 E0                     SHL EAX,0x1
0073A178  40                        INC EAX
0073A179  C3                        RET
LAB_0073a17c:
0073A17C  F7 C2 01 00 00 00         TEST EDX,0x1
0073A182  74 14                     JZ 0x0073a198
0073A184  8A 02                     MOV AL,byte ptr [EDX]
0073A186  42                        INC EDX
0073A187  3A 01                     CMP AL,byte ptr [ECX]
0073A189  75 E9                     JNZ 0x0073a174
0073A18B  41                        INC ECX
0073A18C  0A C0                     OR AL,AL
0073A18E  74 E0                     JZ 0x0073a170
0073A190  F7 C2 02 00 00 00         TEST EDX,0x2
0073A196  74 A8                     JZ 0x0073a140
LAB_0073a198:
0073A198  66 8B 02                  MOV AX,word ptr [EDX]
0073A19B  83 C2 02                  ADD EDX,0x2
0073A19E  3A 01                     CMP AL,byte ptr [ECX]
0073A1A0  75 D2                     JNZ 0x0073a174
0073A1A2  0A C0                     OR AL,AL
0073A1A4  74 CA                     JZ 0x0073a170
0073A1A6  3A 61 01                  CMP AH,byte ptr [ECX + 0x1]
0073A1A9  75 C9                     JNZ 0x0073a174
0073A1AB  0A E4                     OR AH,AH
0073A1AD  74 C1                     JZ 0x0073a170
0073A1AF  83 C1 02                  ADD ECX,0x2
0073A1B2  EB 8C                     JMP 0x0073a140
