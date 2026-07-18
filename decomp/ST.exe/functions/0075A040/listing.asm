FUN_0075a040:
0075A040  55                        PUSH EBP
0075A041  8B EC                     MOV EBP,ESP
0075A043  83 EC 0C                  SUB ESP,0xc
0075A046  53                        PUSH EBX
0075A047  56                        PUSH ESI
0075A048  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075A04B  57                        PUSH EDI
0075A04C  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0075A04F  8B 9E 96 01 00 00         MOV EBX,dword ptr [ESI + 0x196]
0075A055  8B 06                     MOV EAX,dword ptr [ESI]
0075A057  8B BE 2A 01 00 00         MOV EDI,dword ptr [ESI + 0x12a]
0075A05D  C1 E1 03                  SHL ECX,0x3
0075A060  51                        PUSH ECX
0075A061  6A 01                     PUSH 0x1
0075A063  56                        PUSH ESI
0075A064  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0075A067  FF 10                     CALL dword ptr [EAX]
0075A069  89 43 38                  MOV dword ptr [EBX + 0x38],EAX
0075A06C  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0075A06F  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
0075A072  89 43 3C                  MOV dword ptr [EBX + 0x3c],EAX
0075A075  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0075A078  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
0075A07E  33 DB                     XOR EBX,EBX
0075A080  85 C9                     TEST ECX,ECX
0075A082  7E 61                     JLE 0x0075a0e5
0075A084  83 C7 04                  ADD EDI,0x4
0075A087  8D 48 0C                  LEA ECX,[EAX + 0xc]
0075A08A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0075A08D  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075A090  EB 03                     JMP 0x0075a095
LAB_0075a092:
0075A092  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_0075a095:
0075A095  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0075A098  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0075A09B  0F AF 01                  IMUL EAX,dword ptr [ECX]
0075A09E  99                        CDQ
0075A09F  F7 BE 2A 01 00 00         IDIV dword ptr [ESI + 0x12a]
0075A0A5  8B 0E                     MOV ECX,dword ptr [ESI]
0075A0A7  0F AF F8                  IMUL EDI,EAX
0075A0AA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075A0AD  8D 14 FD 00 00 00 00      LEA EDX,[EDI*0x8 + 0x0]
0075A0B4  52                        PUSH EDX
0075A0B5  6A 01                     PUSH 0x1
0075A0B7  56                        PUSH ESI
0075A0B8  FF 11                     CALL dword ptr [ECX]
0075A0BA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075A0BD  43                        INC EBX
0075A0BE  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
0075A0C1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0075A0C4  8B 51 38                  MOV EDX,dword ptr [ECX + 0x38]
0075A0C7  89 44 9A FC               MOV dword ptr [EDX + EBX*0x4 + -0x4],EAX
0075A0CB  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
0075A0CE  8D 04 B8                  LEA EAX,[EAX + EDI*0x4]
0075A0D1  89 44 99 FC               MOV dword ptr [ECX + EBX*0x4 + -0x4],EAX
0075A0D5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075A0D8  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0075A0DB  83 C1 54                  ADD ECX,0x54
0075A0DE  3B D8                     CMP EBX,EAX
0075A0E0  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075A0E3  7C AD                     JL 0x0075a092
LAB_0075a0e5:
0075A0E5  5F                        POP EDI
0075A0E6  5E                        POP ESI
0075A0E7  5B                        POP EBX
0075A0E8  8B E5                     MOV ESP,EBP
0075A0EA  5D                        POP EBP
0075A0EB  C2 04 00                  RET 0x4
