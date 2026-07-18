FUN_0056f930:
0056F930  A0 64 73 80 00            MOV AL,[0x00807364]
0056F935  56                        PUSH ESI
0056F936  84 C0                     TEST AL,AL
0056F938  8B F1                     MOV ESI,ECX
0056F93A  0F 85 D7 00 00 00         JNZ 0x0056fa17
0056F940  8A 86 2E 11 00 00         MOV AL,byte ptr [ESI + 0x112e]
0056F946  3C 01                     CMP AL,0x1
0056F948  74 0C                     JZ 0x0056f956
0056F94A  3C 02                     CMP AL,0x2
0056F94C  74 08                     JZ 0x0056f956
0056F94E  3C 03                     CMP AL,0x3
0056F950  0F 85 C1 00 00 00         JNZ 0x0056fa17
LAB_0056f956:
0056F956  8B 8E 0A 4F 00 00         MOV ECX,dword ptr [ESI + 0x4f0a]
0056F95C  41                        INC ECX
0056F95D  83 F9 63                  CMP ECX,0x63
0056F960  0F 87 B1 00 00 00         JA 0x0056fa17
0056F966  80 BE 63 11 00 00 01      CMP byte ptr [ESI + 0x1163],0x1
0056F96D  0F 85 A4 00 00 00         JNZ 0x0056fa17
0056F973  8A 8E 80 11 00 00         MOV CL,byte ptr [ESI + 0x1180]
0056F979  80 F9 08                  CMP CL,0x8
0056F97C  74 09                     JZ 0x0056f987
0056F97E  80 F9 09                  CMP CL,0x9
0056F981  0F 85 90 00 00 00         JNZ 0x0056fa17
LAB_0056f987:
0056F987  3C 01                     CMP AL,0x1
0056F989  57                        PUSH EDI
0056F98A  75 07                     JNZ 0x0056f993
0056F98C  BF 88 26 00 00            MOV EDI,0x2688
0056F991  EB 0F                     JMP 0x0056f9a2
LAB_0056f993:
0056F993  33 D2                     XOR EDX,EDX
0056F995  3C 02                     CMP AL,0x2
0056F997  0F 95 C2                  SETNZ DL
0056F99A  81 C2 89 26 00 00         ADD EDX,0x2689
0056F9A0  8B FA                     MOV EDI,EDX
LAB_0056f9a2:
0056F9A2  A1 34 B0 79 00            MOV EAX,[0x0079b034]
0056F9A7  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0056F9AD  50                        PUSH EAX
0056F9AE  51                        PUSH ECX
0056F9AF  68 8B 26 00 00            PUSH 0x268b
0056F9B4  E8 87 07 14 00            CALL 0x006b0140
0056F9B9  8B 96 0A 4F 00 00         MOV EDX,dword ptr [ESI + 0x4f0a]
0056F9BF  50                        PUSH EAX
0056F9C0  A1 18 76 80 00            MOV EAX,[0x00807618]
0056F9C5  42                        INC EDX
0056F9C6  52                        PUSH EDX
0056F9C7  50                        PUSH EAX
0056F9C8  57                        PUSH EDI
0056F9C9  E8 72 07 14 00            CALL 0x006b0140
0056F9CE  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0056F9D4  50                        PUSH EAX
0056F9D5  51                        PUSH ECX
0056F9D6  68 87 26 00 00            PUSH 0x2687
0056F9DB  E8 60 07 14 00            CALL 0x006b0140
0056F9E0  8B 15 50 B0 79 00         MOV EDX,dword ptr [0x0079b050]
0056F9E6  8B 0D 2C B0 79 00         MOV ECX,dword ptr [0x0079b02c]
0056F9EC  50                        PUSH EAX
0056F9ED  8D 86 BD 07 00 00         LEA EAX,[ESI + 0x7bd]
0056F9F3  52                        PUSH EDX
0056F9F4  50                        PUSH EAX
0056F9F5  8D 56 60                  LEA EDX,[ESI + 0x60]
0056F9F8  51                        PUSH ECX
0056F9F9  52                        PUSH EDX
0056F9FA  81 C6 02 7A 00 00         ADD ESI,0x7a02
0056FA00  68 0C A2 7C 00            PUSH 0x7ca20c
0056FA05  56                        PUSH ESI
0056FA06  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056FA0C  83 C4 2C                  ADD ESP,0x2c
0056FA0F  B8 01 00 00 00            MOV EAX,0x1
0056FA14  5F                        POP EDI
0056FA15  5E                        POP ESI
0056FA16  C3                        RET
LAB_0056fa17:
0056FA17  33 C0                     XOR EAX,EAX
0056FA19  5E                        POP ESI
0056FA1A  C3                        RET
