FUN_006f5c60:
006F5C60  55                        PUSH EBP
006F5C61  8B EC                     MOV EBP,ESP
006F5C63  51                        PUSH ECX
006F5C64  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F5C67  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F5C71  48                        DEC EAX
006F5C72  0F 88 FD 00 00 00         JS 0x006f5d75
006F5C78  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F5C7B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F5C7E  53                        PUSH EBX
006F5C7F  40                        INC EAX
006F5C80  56                        PUSH ESI
006F5C81  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F5C84  57                        PUSH EDI
006F5C85  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006f5c88:
006F5C88  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006F5C8B  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006F5C8E  33 C0                     XOR EAX,EAX
006F5C90  8A 07                     MOV AL,byte ptr [EDI]
006F5C92  47                        INC EDI
006F5C93  85 C0                     TEST EAX,EAX
006F5C95  89 7D 24                  MOV dword ptr [EBP + 0x24],EDI
006F5C98  0F 84 B8 00 00 00         JZ 0x006f5d56
LAB_006f5c9e:
006F5C9E  A8 80                     TEST AL,0x80
006F5CA0  74 78                     JZ 0x006f5d1a
006F5CA2  8B F8                     MOV EDI,EAX
006F5CA4  83 E7 3F                  AND EDI,0x3f
006F5CA7  2B DF                     SUB EBX,EDI
006F5CA9  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006F5CAC  A8 40                     TEST AL,0x40
006F5CAE  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
006F5CB1  74 33                     JZ 0x006f5ce6
006F5CB3  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006F5CB6  47                        INC EDI
006F5CB7  89 7D 24                  MOV dword ptr [EBP + 0x24],EDI
006F5CBA  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006F5CBD  4F                        DEC EDI
006F5CBE  78 66                     JS 0x006f5d26
006F5CC0  47                        INC EDI
LAB_006f5cc1:
006F5CC1  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006F5CC4  33 C0                     XOR EAX,EAX
006F5CC6  66 8B 01                  MOV AX,word ptr [ECX]
006F5CC9  3B D8                     CMP EBX,EAX
006F5CCB  77 0C                     JA 0x006f5cd9
006F5CCD  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006F5CD0  33 C0                     XOR EAX,EAX
006F5CD2  8A 06                     MOV AL,byte ptr [ESI]
006F5CD4  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
006F5CD7  88 02                     MOV byte ptr [EDX],AL
LAB_006f5cd9:
006F5CD9  83 C1 02                  ADD ECX,0x2
006F5CDC  42                        INC EDX
006F5CDD  46                        INC ESI
006F5CDE  4F                        DEC EDI
006F5CDF  75 E0                     JNZ 0x006f5cc1
006F5CE1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F5CE4  EB 40                     JMP 0x006f5d26
LAB_006f5ce6:
006F5CE6  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006F5CE9  4F                        DEC EDI
006F5CEA  78 3A                     JS 0x006f5d26
006F5CEC  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006F5CEF  47                        INC EDI
006F5CF0  03 C7                     ADD EAX,EDI
006F5CF2  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
LAB_006f5cf5:
006F5CF5  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006F5CF8  33 C0                     XOR EAX,EAX
006F5CFA  66 8B 01                  MOV AX,word ptr [ECX]
006F5CFD  3B D8                     CMP EBX,EAX
006F5CFF  77 0C                     JA 0x006f5d0d
006F5D01  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006F5D04  33 C0                     XOR EAX,EAX
006F5D06  8A 06                     MOV AL,byte ptr [ESI]
006F5D08  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
006F5D0B  88 02                     MOV byte ptr [EDX],AL
LAB_006f5d0d:
006F5D0D  83 C1 02                  ADD ECX,0x2
006F5D10  42                        INC EDX
006F5D11  46                        INC ESI
006F5D12  4F                        DEC EDI
006F5D13  75 E0                     JNZ 0x006f5cf5
006F5D15  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F5D18  EB 0C                     JMP 0x006f5d26
LAB_006f5d1a:
006F5D1A  83 E0 7F                  AND EAX,0x7f
006F5D1D  2B D8                     SUB EBX,EAX
006F5D1F  03 D0                     ADD EDX,EAX
006F5D21  03 F0                     ADD ESI,EAX
006F5D23  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
LAB_006f5d26:
006F5D26  85 DB                     TEST EBX,EBX
006F5D28  7E 10                     JLE 0x006f5d3a
006F5D2A  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006F5D2D  33 C0                     XOR EAX,EAX
006F5D2F  8A 07                     MOV AL,byte ptr [EDI]
006F5D31  47                        INC EDI
006F5D32  89 7D 24                  MOV dword ptr [EBP + 0x24],EDI
006F5D35  E9 64 FF FF FF            JMP 0x006f5c9e
LAB_006f5d3a:
006F5D3A  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006F5D3D  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006F5D40  2B F8                     SUB EDI,EAX
006F5D42  03 D7                     ADD EDX,EDI
006F5D44  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006F5D47  2B F8                     SUB EDI,EAX
006F5D49  03 C0                     ADD EAX,EAX
006F5D4B  03 F7                     ADD ESI,EDI
006F5D4D  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F5D50  2B F8                     SUB EDI,EAX
006F5D52  03 CF                     ADD ECX,EDI
006F5D54  EB 0F                     JMP 0x006f5d65
LAB_006f5d56:
006F5D56  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006F5D59  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006F5D5C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F5D5F  03 D3                     ADD EDX,EBX
006F5D61  03 F7                     ADD ESI,EDI
006F5D63  03 C8                     ADD ECX,EAX
LAB_006f5d65:
006F5D65  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F5D68  48                        DEC EAX
006F5D69  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F5D6C  0F 85 16 FF FF FF         JNZ 0x006f5c88
006F5D72  5F                        POP EDI
006F5D73  5E                        POP ESI
006F5D74  5B                        POP EBX
LAB_006f5d75:
006F5D75  8B E5                     MOV ESP,EBP
006F5D77  5D                        POP EBP
006F5D78  C2 2C 00                  RET 0x2c
