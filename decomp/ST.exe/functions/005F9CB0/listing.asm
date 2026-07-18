FUN_005f9cb0:
005F9CB0  55                        PUSH EBP
005F9CB1  8B EC                     MOV EBP,ESP
005F9CB3  51                        PUSH ECX
005F9CB4  53                        PUSH EBX
005F9CB5  56                        PUSH ESI
005F9CB6  8B B1 E6 02 00 00         MOV ESI,dword ptr [ECX + 0x2e6]
005F9CBC  83 C8 FF                  OR EAX,0xffffffff
005F9CBF  85 F6                     TEST ESI,ESI
005F9CC1  57                        PUSH EDI
005F9CC2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005F9CC5  0F 84 1A 01 00 00         JZ 0x005f9de5
005F9CCB  0F BF 46 32               MOVSX EAX,word ptr [ESI + 0x32]
005F9CCF  83 F8 FF                  CMP EAX,-0x1
005F9CD2  74 34                     JZ 0x005f9d08
005F9CD4  83 F8 01                  CMP EAX,0x1
005F9CD7  74 0B                     JZ 0x005f9ce4
005F9CD9  5F                        POP EDI
005F9CDA  5E                        POP ESI
005F9CDB  33 C0                     XOR EAX,EAX
005F9CDD  5B                        POP EBX
005F9CDE  8B E5                     MOV ESP,EBP
005F9CE0  5D                        POP EBP
005F9CE1  C2 10 00                  RET 0x10
LAB_005f9ce4:
005F9CE4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005F9CE7  8B 5E 68                  MOV EBX,dword ptr [ESI + 0x68]
005F9CEA  2B FB                     SUB EDI,EBX
005F9CEC  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
005F9CEF  0F AF 7E 64               IMUL EDI,dword ptr [ESI + 0x64]
005F9CF3  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
005F9CF6  03 FA                     ADD EDI,EDX
005F9CF8  3B F8                     CMP EDI,EAX
005F9CFA  7C 2C                     JL 0x005f9d28
005F9CFC  C7 45 08 03 00 00 00      MOV dword ptr [EBP + 0x8],0x3
005F9D03  8D 78 FF                  LEA EDI,[EAX + -0x1]
005F9D06  EB 27                     JMP 0x005f9d2f
LAB_005f9d08:
005F9D08  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F9D0B  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
005F9D0E  2B C2                     SUB EAX,EDX
005F9D10  8B 7E 60                  MOV EDI,dword ptr [ESI + 0x60]
005F9D13  0F AF 46 64               IMUL EAX,dword ptr [ESI + 0x64]
005F9D17  2B F8                     SUB EDI,EAX
005F9D19  85 FF                     TEST EDI,EDI
005F9D1B  7F 0B                     JG 0x005f9d28
005F9D1D  C7 45 08 03 00 00 00      MOV dword ptr [EBP + 0x8],0x3
005F9D24  33 FF                     XOR EDI,EDI
005F9D26  EB 07                     JMP 0x005f9d2f
LAB_005f9d28:
005F9D28  C7 45 08 01 00 00 00      MOV dword ptr [EBP + 0x8],0x1
LAB_005f9d2f:
005F9D2F  8B 4E 58                  MOV ECX,dword ptr [ESI + 0x58]
005F9D32  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
005F9D35  0F BF 5C B9 02            MOVSX EBX,word ptr [ECX + EDI*0x4 + 0x2]
005F9D3A  8D 04 B9                  LEA EAX,[ECX + EDI*0x4]
005F9D3D  0F AF D3                  IMUL EDX,EBX
005F9D40  0F BF 08                  MOVSX ECX,word ptr [EAX]
005F9D43  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F9D48  F7 EA                     IMUL EDX
005F9D4A  C1 FA 0C                  SAR EDX,0xc
005F9D4D  8B C2                     MOV EAX,EDX
005F9D4F  C1 E8 1F                  SHR EAX,0x1f
005F9D52  03 D0                     ADD EDX,EAX
005F9D54  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
005F9D57  03 D0                     ADD EDX,EAX
005F9D59  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F9D5C  F7 D9                     NEG ECX
005F9D5E  89 10                     MOV dword ptr [EAX],EDX
005F9D60  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F9D63  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F9D68  8B B2 E6 02 00 00         MOV ESI,dword ptr [EDX + 0x2e6]
005F9D6E  8B 56 54                  MOV EDX,dword ptr [ESI + 0x54]
005F9D71  0F AF D3                  IMUL EDX,EBX
005F9D74  F7 EA                     IMUL EDX
005F9D76  8B 5E 38                  MOV EBX,dword ptr [ESI + 0x38]
005F9D79  C1 FA 0C                  SAR EDX,0xc
005F9D7C  8B C2                     MOV EAX,EDX
005F9D7E  C1 E8 1F                  SHR EAX,0x1f
005F9D81  03 D0                     ADD EDX,EAX
005F9D83  03 D3                     ADD EDX,EBX
005F9D85  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
005F9D88  89 13                     MOV dword ptr [EBX],EDX
005F9D8A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F9D8D  8B B2 E6 02 00 00         MOV ESI,dword ptr [EDX + 0x2e6]
005F9D93  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
005F9D96  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005F9D99  3B C2                     CMP EAX,EDX
005F9D9B  74 11                     JZ 0x005f9dae
005F9D9D  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
005F9DA0  2B C2                     SUB EAX,EDX
005F9DA2  0F AF C7                  IMUL EAX,EDI
005F9DA5  99                        CDQ
005F9DA6  F7 7E 5C                  IDIV dword ptr [ESI + 0x5c]
005F9DA9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005F9DAC  01 02                     ADD dword ptr [EDX],EAX
LAB_005f9dae:
005F9DAE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F9DB1  8B B0 E6 02 00 00         MOV ESI,dword ptr [EAX + 0x2e6]
005F9DB7  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
005F9DBA  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005F9DBD  3B C2                     CMP EAX,EDX
005F9DBF  74 0E                     JZ 0x005f9dcf
005F9DC1  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
005F9DC4  2B C2                     SUB EAX,EDX
005F9DC6  0F AF C7                  IMUL EAX,EDI
005F9DC9  99                        CDQ
005F9DCA  F7 7E 5C                  IDIV dword ptr [ESI + 0x5c]
005F9DCD  01 03                     ADD dword ptr [EBX],EAX
LAB_005f9dcf:
005F9DCF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005F9DD2  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005F9DD8  8B 50 3C                  MOV EDX,dword ptr [EAX + 0x3c]
005F9DDB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005F9DDE  03 D1                     ADD EDX,ECX
005F9DE0  89 10                     MOV dword ptr [EAX],EDX
005F9DE2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_005f9de5:
005F9DE5  5F                        POP EDI
005F9DE6  5E                        POP ESI
005F9DE7  5B                        POP EBX
005F9DE8  8B E5                     MOV ESP,EBP
005F9DEA  5D                        POP EBP
005F9DEB  C2 10 00                  RET 0x10
