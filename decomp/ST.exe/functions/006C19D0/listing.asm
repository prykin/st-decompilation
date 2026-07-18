FUN_006c19d0:
006C19D0  55                        PUSH EBP
006C19D1  8B EC                     MOV EBP,ESP
006C19D3  8B 0D B4 68 85 00         MOV ECX,dword ptr [0x008568b4]
006C19D9  33 C0                     XOR EAX,EAX
006C19DB  85 C9                     TEST ECX,ECX
006C19DD  75 09                     JNZ 0x006c19e8
006C19DF  B8 CC FF FF FF            MOV EAX,0xffffffcc
006C19E4  5D                        POP EBP
006C19E5  C2 08 00                  RET 0x8
LAB_006c19e8:
006C19E8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C19EB  56                        PUSH ESI
006C19EC  85 C9                     TEST ECX,ECX
006C19EE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C19F1  8D 34 49                  LEA ESI,[ECX + ECX*0x2]
006C19F4  74 35                     JZ 0x006c1a2b
006C19F6  C1 E6 04                  SHL ESI,0x4
006C19F9  03 F1                     ADD ESI,ECX
006C19FB  C1 E6 02                  SHL ESI,0x2
006C19FE  F6 86 F8 4F 85 00 02      TEST byte ptr [ESI + 0x854ff8],0x2
006C1A05  75 10                     JNZ 0x006c1a17
006C1A07  8B 8E 04 50 85 00         MOV ECX,dword ptr [ESI + 0x855004]
006C1A0D  85 C9                     TEST ECX,ECX
006C1A0F  74 06                     JZ 0x006c1a17
006C1A11  8B 01                     MOV EAX,dword ptr [ECX]
006C1A13  51                        PUSH ECX
006C1A14  FF 50 48                  CALL dword ptr [EAX + 0x48]
LAB_006c1a17:
006C1A17  8B 8E F8 4F 85 00         MOV ECX,dword ptr [ESI + 0x854ff8]
006C1A1D  83 C9 02                  OR ECX,0x2
006C1A20  89 8E F8 4F 85 00         MOV dword ptr [ESI + 0x854ff8],ECX
006C1A26  5E                        POP ESI
006C1A27  5D                        POP EBP
006C1A28  C2 08 00                  RET 0x8
LAB_006c1a2b:
006C1A2B  C1 E6 04                  SHL ESI,0x4
006C1A2E  03 F1                     ADD ESI,ECX
006C1A30  C1 E6 02                  SHL ESI,0x2
006C1A33  F6 86 F8 4F 85 00 02      TEST byte ptr [ESI + 0x854ff8],0x2
006C1A3A  74 77                     JZ 0x006c1ab3
006C1A3C  8B 8E 04 50 85 00         MOV ECX,dword ptr [ESI + 0x855004]
006C1A42  85 C9                     TEST ECX,ECX
006C1A44  74 6D                     JZ 0x006c1ab3
006C1A46  8B 86 B8 50 85 00         MOV EAX,dword ptr [ESI + 0x8550b8]
006C1A4C  57                        PUSH EDI
006C1A4D  85 C0                     TEST EAX,EAX
006C1A4F  7F 39                     JG 0x006c1a8a
006C1A51  F6 86 FC 4F 85 00 01      TEST byte ptr [ESI + 0x854ffc],0x1
006C1A58  75 30                     JNZ 0x006c1a8a
006C1A5A  8B 11                     MOV EDX,dword ptr [ECX]
006C1A5C  8D 45 08                  LEA EAX,[EBP + 0x8]
006C1A5F  50                        PUSH EAX
006C1A60  8D 45 0C                  LEA EAX,[EBP + 0xc]
006C1A63  50                        PUSH EAX
006C1A64  51                        PUSH ECX
006C1A65  33 FF                     XOR EDI,EDI
006C1A67  FF 52 10                  CALL dword ptr [EDX + 0x10]
006C1A6A  8B 8E 0C 50 85 00         MOV ECX,dword ptr [ESI + 0x85500c]
006C1A70  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C1A73  D1 E9                     SHR ECX,0x1
006C1A75  3B C1                     CMP EAX,ECX
006C1A77  76 28                     JBE 0x006c1aa1
006C1A79  8B 86 FC 4F 85 00         MOV EAX,dword ptr [ESI + 0x854ffc]
006C1A7F  80 CC 80                  OR AH,0x80
006C1A82  89 86 FC 4F 85 00         MOV dword ptr [ESI + 0x854ffc],EAX
006C1A88  EB 17                     JMP 0x006c1aa1
LAB_006c1a8a:
006C1A8A  8B 86 FC 4F 85 00         MOV EAX,dword ptr [ESI + 0x854ffc]
006C1A90  8B F8                     MOV EDI,EAX
006C1A92  F7 D7                     NOT EDI
006C1A94  C1 EF 0E                  SHR EDI,0xe
006C1A97  83 E7 01                  AND EDI,0x1
006C1A9A  A8 01                     TEST AL,0x1
006C1A9C  74 03                     JZ 0x006c1aa1
006C1A9E  83 CF 01                  OR EDI,0x1
LAB_006c1aa1:
006C1AA1  8B 86 04 50 85 00         MOV EAX,dword ptr [ESI + 0x855004]
006C1AA7  57                        PUSH EDI
006C1AA8  6A 00                     PUSH 0x0
006C1AAA  6A 00                     PUSH 0x0
006C1AAC  8B 10                     MOV EDX,dword ptr [EAX]
006C1AAE  50                        PUSH EAX
006C1AAF  FF 52 30                  CALL dword ptr [EDX + 0x30]
006C1AB2  5F                        POP EDI
LAB_006c1ab3:
006C1AB3  8B 8E F8 4F 85 00         MOV ECX,dword ptr [ESI + 0x854ff8]
006C1AB9  83 E1 FD                  AND ECX,0xfffffffd
006C1ABC  89 8E F8 4F 85 00         MOV dword ptr [ESI + 0x854ff8],ECX
006C1AC2  5E                        POP ESI
006C1AC3  5D                        POP EBP
006C1AC4  C2 08 00                  RET 0x8
