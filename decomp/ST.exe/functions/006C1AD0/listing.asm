FUN_006c1ad0:
006C1AD0  55                        PUSH EBP
006C1AD1  8B EC                     MOV EBP,ESP
006C1AD3  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1AD8  53                        PUSH EBX
006C1AD9  33 DB                     XOR EBX,EBX
006C1ADB  56                        PUSH ESI
006C1ADC  85 C0                     TEST EAX,EAX
006C1ADE  75 0B                     JNZ 0x006c1aeb
006C1AE0  5E                        POP ESI
006C1AE1  B8 CC FF FF FF            MOV EAX,0xffffffcc
006C1AE6  5B                        POP EBX
006C1AE7  5D                        POP EBP
006C1AE8  C2 08 00                  RET 0x8
LAB_006c1aeb:
006C1AEB  68 98 68 85 00            PUSH 0x856898
006C1AF0  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C1AF6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C1AF9  3D FF 00 00 00            CMP EAX,0xff
006C1AFE  74 30                     JZ 0x006c1b30
006C1B00  85 C0                     TEST EAX,EAX
006C1B02  7C 25                     JL 0x006c1b29
006C1B04  83 F8 20                  CMP EAX,0x20
006C1B07  7D 20                     JGE 0x006c1b29
006C1B09  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006C1B0C  C1 E1 04                  SHL ECX,0x4
006C1B0F  03 C8                     ADD ECX,EAX
006C1B11  F6 04 8D F8 4F 85 00 01   TEST byte ptr [ECX*0x4 + 0x854ff8],0x1
006C1B19  74 0E                     JZ 0x006c1b29
006C1B1B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C1B1E  50                        PUSH EAX
006C1B1F  52                        PUSH EDX
006C1B20  E8 AB FE FF FF            CALL 0x006c19d0
006C1B25  8B F0                     MOV ESI,EAX
006C1B27  EB 36                     JMP 0x006c1b5f
LAB_006c1b29:
006C1B29  BE FC FF FF FF            MOV ESI,0xfffffffc
006C1B2E  EB 2F                     JMP 0x006c1b5f
LAB_006c1b30:
006C1B30  57                        PUSH EDI
006C1B31  33 F6                     XOR ESI,ESI
006C1B33  BF F8 4F 85 00            MOV EDI,0x854ff8
LAB_006c1b38:
006C1B38  F6 07 01                  TEST byte ptr [EDI],0x1
006C1B3B  74 10                     JZ 0x006c1b4d
006C1B3D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C1B40  56                        PUSH ESI
006C1B41  50                        PUSH EAX
006C1B42  E8 89 FE FF FF            CALL 0x006c19d0
006C1B47  85 DB                     TEST EBX,EBX
006C1B49  75 02                     JNZ 0x006c1b4d
006C1B4B  8B D8                     MOV EBX,EAX
LAB_006c1b4d:
006C1B4D  81 C7 C4 00 00 00         ADD EDI,0xc4
006C1B53  46                        INC ESI
006C1B54  81 FF 78 68 85 00         CMP EDI,0x856878
006C1B5A  7C DC                     JL 0x006c1b38
006C1B5C  8B F3                     MOV ESI,EBX
006C1B5E  5F                        POP EDI
LAB_006c1b5f:
006C1B5F  68 98 68 85 00            PUSH 0x856898
006C1B64  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C1B6A  83 FE FC                  CMP ESI,-0x4
006C1B6D  74 1B                     JZ 0x006c1b8a
006C1B6F  85 F6                     TEST ESI,ESI
006C1B71  74 17                     JZ 0x006c1b8a
006C1B73  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C1B79  68 D9 04 00 00            PUSH 0x4d9
006C1B7E  68 14 DE 7E 00            PUSH 0x7ede14
006C1B83  51                        PUSH ECX
006C1B84  56                        PUSH ESI
006C1B85  E8 B6 42 FE FF            CALL 0x006a5e40
LAB_006c1b8a:
006C1B8A  8B C6                     MOV EAX,ESI
006C1B8C  5E                        POP ESI
006C1B8D  5B                        POP EBX
006C1B8E  5D                        POP EBP
006C1B8F  C2 08 00                  RET 0x8
