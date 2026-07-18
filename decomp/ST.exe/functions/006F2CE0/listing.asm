FUN_006f2ce0:
006F2CE0  55                        PUSH EBP
006F2CE1  8B EC                     MOV EBP,ESP
006F2CE3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F2CE6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F2CE9  8A 00                     MOV AL,byte ptr [EAX]
006F2CEB  8A 09                     MOV CL,byte ptr [ECX]
006F2CED  3A C1                     CMP AL,CL
006F2CEF  74 0F                     JZ 0x006f2d00
006F2CF1  81 E1 FF 00 00 00         AND ECX,0xff
006F2CF7  25 FF 00 00 00            AND EAX,0xff
006F2CFC  2B C1                     SUB EAX,ECX
006F2CFE  5D                        POP EBP
006F2CFF  C3                        RET
LAB_006f2d00:
006F2D00  33 C0                     XOR EAX,EAX
006F2D02  5D                        POP EBP
006F2D03  C3                        RET
