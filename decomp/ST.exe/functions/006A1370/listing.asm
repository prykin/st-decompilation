FUN_006a1370:
006A1370  55                        PUSH EBP
006A1371  8B EC                     MOV EBP,ESP
006A1373  83 EC 08                  SUB ESP,0x8
006A1376  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A1379  33 C0                     XOR EAX,EAX
006A137B  56                        PUSH ESI
006A137C  57                        PUSH EDI
006A137D  89 01                     MOV dword ptr [ECX],EAX
006A137F  66 89 41 04               MOV word ptr [ECX + 0x4],AX
006A1383  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A1386  83 F8 06                  CMP EAX,0x6
006A1389  7D 5B                     JGE 0x006a13e6
006A138B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A138E  53                        PUSH EBX
006A138F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006A1392  8B 3E                     MOV EDI,dword ptr [ESI]
006A1394  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006A1397  8B D7                     MOV EDX,EDI
006A1399  0F AF D1                  IMUL EDX,ECX
006A139C  0F AF C8                  IMUL ECX,EAX
006A139F  03 CB                     ADD ECX,EBX
006A13A1  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
006A13A4  0F AF CF                  IMUL ECX,EDI
006A13A7  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A13AA  5B                        POP EBX
006A13AB  D1 E2                     SHL EDX,0x1
006A13AD  03 CF                     ADD ECX,EDI
006A13AF  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006A13B2  8D 4C 4E 08               LEA ECX,[ESI + ECX*0x2 + 0x8]
LAB_006a13b6:
006A13B6  8B F9                     MOV EDI,ECX
006A13B8  8B 37                     MOV ESI,dword ptr [EDI]
006A13BA  66 8B 7F 04               MOV DI,word ptr [EDI + 0x4]
006A13BE  66 89 7D FC               MOV word ptr [EBP + -0x4],DI
006A13C2  F6 45 FD 0F               TEST byte ptr [EBP + -0x3],0xf
006A13C6  75 11                     JNZ 0x006a13d9
006A13C8  40                        INC EAX
006A13C9  03 CA                     ADD ECX,EDX
006A13CB  83 F8 06                  CMP EAX,0x6
006A13CE  7C E6                     JL 0x006a13b6
006A13D0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A13D3  5F                        POP EDI
006A13D4  5E                        POP ESI
006A13D5  8B E5                     MOV ESP,EBP
006A13D7  5D                        POP EBP
006A13D8  C3                        RET
LAB_006a13d9:
006A13D9  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A13DC  85 C9                     TEST ECX,ECX
006A13DE  74 06                     JZ 0x006a13e6
006A13E0  89 31                     MOV dword ptr [ECX],ESI
006A13E2  66 89 79 04               MOV word ptr [ECX + 0x4],DI
LAB_006a13e6:
006A13E6  5F                        POP EDI
006A13E7  5E                        POP ESI
006A13E8  8B E5                     MOV ESP,EBP
006A13EA  5D                        POP EBP
006A13EB  C3                        RET
