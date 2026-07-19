FUN_00493250:
00493250  56                        PUSH ESI
00493251  8B B1 5D 04 00 00         MOV ESI,dword ptr [ECX + 0x45d]
00493257  33 C0                     XOR EAX,EAX
00493259  83 FE 14                  CMP ESI,0x14
0049325C  57                        PUSH EDI
0049325D  BA 03 00 00 00            MOV EDX,0x3
00493262  75 0D                     JNZ 0x00493271
00493264  39 91 C0 05 00 00         CMP dword ptr [ECX + 0x5c0],EDX
0049326A  75 05                     JNZ 0x00493271
0049326C  B8 01 00 00 00            MOV EAX,0x1
LAB_00493271:
00493271  8B B9 CA 07 00 00         MOV EDI,dword ptr [ECX + 0x7ca]
00493277  85 FF                     TEST EDI,EDI
00493279  74 02                     JZ 0x0049327d
0049327B  0C 02                     OR AL,0x2
LAB_0049327d:
0049327D  83 FE 04                  CMP ESI,0x4
00493280  75 0B                     JNZ 0x0049328d
00493282  83 B9 80 05 00 00 05      CMP dword ptr [ECX + 0x580],0x5
00493289  75 02                     JNZ 0x0049328d
0049328B  0C 04                     OR AL,0x4
LAB_0049328d:
0049328D  8B B9 3A 07 00 00         MOV EDI,dword ptr [ECX + 0x73a]
00493293  85 FF                     TEST EDI,EDI
00493295  7E 02                     JLE 0x00493299
00493297  0C 08                     OR AL,0x8
LAB_00493299:
00493299  83 FE 09                  CMP ESI,0x9
0049329C  75 0A                     JNZ 0x004932a8
0049329E  39 91 11 06 00 00         CMP dword ptr [ECX + 0x611],EDX
004932A4  75 02                     JNZ 0x004932a8
004932A6  0C 10                     OR AL,0x10
LAB_004932a8:
004932A8  83 FE 0C                  CMP ESI,0xc
004932AB  75 0F                     JNZ 0x004932bc
004932AD  8B 91 D5 04 00 00         MOV EDX,dword ptr [ECX + 0x4d5]
004932B3  83 FA 05                  CMP EDX,0x5
004932B6  74 12                     JZ 0x004932ca
004932B8  3B D6                     CMP EDX,ESI
004932BA  74 0E                     JZ 0x004932ca
LAB_004932bc:
004932BC  83 FE 0D                  CMP ESI,0xd
004932BF  75 0B                     JNZ 0x004932cc
004932C1  83 B9 4C 05 00 00 05      CMP dword ptr [ECX + 0x54c],0x5
004932C8  75 02                     JNZ 0x004932cc
LAB_004932ca:
004932CA  0C 20                     OR AL,0x20
LAB_004932cc:
004932CC  85 FF                     TEST EDI,EDI
004932CE  5F                        POP EDI
004932CF  5E                        POP ESI
004932D0  7E 02                     JLE 0x004932d4
004932D2  0C 08                     OR AL,0x8
LAB_004932d4:
004932D4  8B 91 F7 06 00 00         MOV EDX,dword ptr [ECX + 0x6f7]
004932DA  83 EA 16                  SUB EDX,0x16
004932DD  74 17                     JZ 0x004932f6
004932DF  83 EA 0D                  SUB EDX,0xd
004932E2  74 06                     JZ 0x004932ea
004932E4  83 EA 02                  SUB EDX,0x2
004932E7  74 0D                     JZ 0x004932f6
004932E9  C3                        RET
LAB_004932ea:
004932EA  83 B9 2E 07 00 00 01      CMP dword ptr [ECX + 0x72e],0x1
004932F1  75 0E                     JNZ 0x00493301
004932F3  0C 80                     OR AL,0x80
004932F5  C3                        RET
LAB_004932f6:
004932F6  83 B9 32 07 00 00 01      CMP dword ptr [ECX + 0x732],0x1
004932FD  75 02                     JNZ 0x00493301
004932FF  0C 80                     OR AL,0x80
LAB_00493301:
00493301  C3                        RET
