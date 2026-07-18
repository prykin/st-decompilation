FUN_004dbcc0:
004DBCC0  55                        PUSH EBP
004DBCC1  8B EC                     MOV EBP,ESP
004DBCC3  53                        PUSH EBX
004DBCC4  56                        PUSH ESI
004DBCC5  57                        PUSH EDI
004DBCC6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004DBCC9  8B F1                     MOV ESI,ECX
004DBCCB  8B 84 BE D0 04 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x4d0]
004DBCD2  85 C0                     TEST EAX,EAX
004DBCD4  0F 84 D9 00 00 00         JZ 0x004dbdb3
004DBCDA  8B 84 BE E8 04 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x4e8]
004DBCE1  85 C0                     TEST EAX,EAX
004DBCE3  0F 84 CA 00 00 00         JZ 0x004dbdb3
004DBCE9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004DBCEC  83 F8 64                  CMP EAX,0x64
004DBCEF  89 84 BE E0 04 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x4e0],EAX
004DBCF6  7E 0B                     JLE 0x004dbd03
004DBCF8  C7 84 BE E0 04 00 00 64 00 00 00  MOV dword ptr [ESI + EDI*0x4 + 0x4e0],0x64
LAB_004dbd03:
004DBD03  8B 84 BE E0 04 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x4e0]
004DBD0A  85 C0                     TEST EAX,EAX
004DBD0C  7D 0B                     JGE 0x004dbd19
004DBD0E  C7 84 BE E0 04 00 00 00 00 00 00  MOV dword ptr [ESI + EDI*0x4 + 0x4e0],0x0
LAB_004dbd19:
004DBD19  8B 8C BE D0 04 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x4d0]
004DBD20  8D 45 08                  LEA EAX,[EBP + 0x8]
004DBD23  50                        PUSH EAX
004DBD24  51                        PUSH ECX
004DBD25  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DBD2B  E8 A0 A5 20 00            CALL 0x006e62d0
004DBD30  85 C0                     TEST EAX,EAX
004DBD32  75 19                     JNZ 0x004dbd4d
004DBD34  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DBD37  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004DBD3A  8B 94 BE E0 04 00 00      MOV EDX,dword ptr [ESI + EDI*0x4 + 0x4e0]
004DBD41  89 91 C0 04 00 00         MOV dword ptr [ECX + 0x4c0],EDX
004DBD47  89 81 C4 04 00 00         MOV dword ptr [ECX + 0x4c4],EAX
LAB_004dbd4d:
004DBD4D  B8 35 01 00 00            MOV EAX,0x135
004DBD52  2B C7                     SUB EAX,EDI
004DBD54  8B 0C 86                  MOV ECX,dword ptr [ESI + EAX*0x4]
004DBD57  8D 04 86                  LEA EAX,[ESI + EAX*0x4]
004DBD5A  85 C9                     TEST ECX,ECX
004DBD5C  74 55                     JZ 0x004dbdb3
004DBD5E  B9 39 01 00 00            MOV ECX,0x139
004DBD63  BA 64 00 00 00            MOV EDX,0x64
004DBD68  2B CF                     SUB ECX,EDI
004DBD6A  8D 1C 8E                  LEA EBX,[ESI + ECX*0x4]
004DBD6D  8B 8C BE E0 04 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x4e0]
004DBD74  2B D1                     SUB EDX,ECX
004DBD76  B9 3B 01 00 00            MOV ECX,0x13b
004DBD7B  2B CF                     SUB ECX,EDI
004DBD7D  89 13                     MOV dword ptr [EBX],EDX
004DBD7F  83 3C 8E 00               CMP dword ptr [ESI + ECX*0x4],0x0
004DBD83  74 2E                     JZ 0x004dbdb3
004DBD85  8B 00                     MOV EAX,dword ptr [EAX]
004DBD87  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DBD8D  8D 55 08                  LEA EDX,[EBP + 0x8]
004DBD90  52                        PUSH EDX
004DBD91  50                        PUSH EAX
004DBD92  E8 39 A5 20 00            CALL 0x006e62d0
004DBD97  85 C0                     TEST EAX,EAX
004DBD99  75 18                     JNZ 0x004dbdb3
004DBD9B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DBD9E  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004DBDA1  8B 88 C4 04 00 00         MOV ECX,dword ptr [EAX + 0x4c4]
004DBDA7  3B CA                     CMP ECX,EDX
004DBDA9  75 08                     JNZ 0x004dbdb3
004DBDAB  8B 13                     MOV EDX,dword ptr [EBX]
004DBDAD  89 90 C0 04 00 00         MOV dword ptr [EAX + 0x4c0],EDX
LAB_004dbdb3:
004DBDB3  5F                        POP EDI
004DBDB4  5E                        POP ESI
004DBDB5  33 C0                     XOR EAX,EAX
004DBDB7  5B                        POP EBX
004DBDB8  5D                        POP EBP
004DBDB9  C2 08 00                  RET 0x8
