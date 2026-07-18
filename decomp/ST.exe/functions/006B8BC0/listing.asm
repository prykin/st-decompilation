FUN_006b8bc0:
006B8BC0  55                        PUSH EBP
006B8BC1  8B EC                     MOV EBP,ESP
006B8BC3  56                        PUSH ESI
006B8BC4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B8BC7  85 F6                     TEST ESI,ESI
006B8BC9  0F 84 89 00 00 00         JZ 0x006b8c58
006B8BCF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B8BD2  57                        PUSH EDI
006B8BD3  85 C0                     TEST EAX,EAX
006B8BD5  7D 12                     JGE 0x006b8be9
006B8BD7  8B 7E 28                  MOV EDI,dword ptr [ESI + 0x28]
006B8BDA  83 F8 FF                  CMP EAX,-0x1
006B8BDD  75 01                     JNZ 0x006b8be0
006B8BDF  47                        INC EDI
LAB_006b8be0:
006B8BE0  3B 7E 2C                  CMP EDI,dword ptr [ESI + 0x2c]
006B8BE3  7C 0A                     JL 0x006b8bef
006B8BE5  33 FF                     XOR EDI,EDI
006B8BE7  EB 06                     JMP 0x006b8bef
LAB_006b8be9:
006B8BE9  99                        CDQ
006B8BEA  F7 7E 2C                  IDIV dword ptr [ESI + 0x2c]
006B8BED  8B FA                     MOV EDI,EDX
LAB_006b8bef:
006B8BEF  8B 06                     MOV EAX,dword ptr [ESI]
006B8BF1  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006B8BF8  74 0C                     JZ 0x006b8c06
006B8BFA  05 F0 04 00 00            ADD EAX,0x4f0
006B8BFF  50                        PUSH EAX
006B8C00  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b8c06:
006B8C06  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B8C09  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006B8C0C  3B C8                     CMP ECX,EAX
006B8C0E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B8C11  75 0A                     JNZ 0x006b8c1d
006B8C13  39 4E 0C                  CMP dword ptr [ESI + 0xc],ECX
006B8C16  75 05                     JNZ 0x006b8c1d
006B8C18  39 7E 28                  CMP dword ptr [ESI + 0x28],EDI
006B8C1B  74 22                     JZ 0x006b8c3f
LAB_006b8c1d:
006B8C1D  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006B8C20  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B8C23  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
006B8C26  8B C8                     MOV ECX,EAX
006B8C28  81 E1 00 A0 00 00         AND ECX,0xa000
006B8C2E  89 7E 28                  MOV dword ptr [ESI + 0x28],EDI
006B8C31  81 F9 00 80 00 00         CMP ECX,0x8000
006B8C37  75 06                     JNZ 0x006b8c3f
006B8C39  80 CC 10                  OR AH,0x10
006B8C3C  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_006b8c3f:
006B8C3F  8B 36                     MOV ESI,dword ptr [ESI]
006B8C41  5F                        POP EDI
006B8C42  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B8C49  74 0D                     JZ 0x006b8c58
006B8C4B  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B8C51  56                        PUSH ESI
006B8C52  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b8c58:
006B8C58  5E                        POP ESI
006B8C59  5D                        POP EBP
006B8C5A  C2 10 00                  RET 0x10
