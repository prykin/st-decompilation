FUN_006c1ce0:
006C1CE0  55                        PUSH EBP
006C1CE1  8B EC                     MOV EBP,ESP
006C1CE3  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1CE8  57                        PUSH EDI
006C1CE9  33 FF                     XOR EDI,EDI
006C1CEB  85 C0                     TEST EAX,EAX
006C1CED  75 0A                     JNZ 0x006c1cf9
006C1CEF  B8 CC FF FF FF            MOV EAX,0xffffffcc
006C1CF4  5F                        POP EDI
006C1CF5  5D                        POP EBP
006C1CF6  C2 08 00                  RET 0x8
LAB_006c1cf9:
006C1CF9  56                        PUSH ESI
006C1CFA  68 98 68 85 00            PUSH 0x856898
006C1CFF  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C1D05  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C1D08  85 C0                     TEST EAX,EAX
006C1D0A  7C 39                     JL 0x006c1d45
006C1D0C  83 F8 20                  CMP EAX,0x20
006C1D0F  7D 34                     JGE 0x006c1d45
006C1D11  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
006C1D14  C1 E6 04                  SHL ESI,0x4
006C1D17  03 F0                     ADD ESI,EAX
006C1D19  C1 E6 02                  SHL ESI,0x2
006C1D1C  F6 86 F8 4F 85 00 01      TEST byte ptr [ESI + 0x854ff8],0x1
006C1D23  74 20                     JZ 0x006c1d45
006C1D25  8B 86 04 50 85 00         MOV EAX,dword ptr [ESI + 0x855004]
006C1D2B  53                        PUSH EBX
006C1D2C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006C1D2F  85 C0                     TEST EAX,EAX
006C1D31  74 09                     JZ 0x006c1d3c
006C1D33  8B 08                     MOV ECX,dword ptr [EAX]
006C1D35  53                        PUSH EBX
006C1D36  50                        PUSH EAX
006C1D37  FF 51 3C                  CALL dword ptr [ECX + 0x3c]
006C1D3A  8B F8                     MOV EDI,EAX
LAB_006c1d3c:
006C1D3C  89 9E 28 50 85 00         MOV dword ptr [ESI + 0x855028],EBX
006C1D42  5B                        POP EBX
006C1D43  EB 05                     JMP 0x006c1d4a
LAB_006c1d45:
006C1D45  BF FC FF FF FF            MOV EDI,0xfffffffc
LAB_006c1d4a:
006C1D4A  68 98 68 85 00            PUSH 0x856898
006C1D4F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C1D55  83 FF FC                  CMP EDI,-0x4
006C1D58  5E                        POP ESI
006C1D59  74 1B                     JZ 0x006c1d76
006C1D5B  85 FF                     TEST EDI,EDI
006C1D5D  74 17                     JZ 0x006c1d76
006C1D5F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C1D65  68 26 05 00 00            PUSH 0x526
006C1D6A  68 14 DE 7E 00            PUSH 0x7ede14
006C1D6F  52                        PUSH EDX
006C1D70  57                        PUSH EDI
006C1D71  E8 CA 40 FE FF            CALL 0x006a5e40
LAB_006c1d76:
006C1D76  8B C7                     MOV EAX,EDI
006C1D78  5F                        POP EDI
006C1D79  5D                        POP EBP
006C1D7A  C2 08 00                  RET 0x8
