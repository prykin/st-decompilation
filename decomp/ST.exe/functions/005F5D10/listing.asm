STBHEShellC::sub_005F5D10:
005F5D10  55                        PUSH EBP
005F5D11  8B EC                     MOV EBP,ESP
005F5D13  83 EC 08                  SUB ESP,0x8
005F5D16  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F5D19  56                        PUSH ESI
005F5D1A  85 C0                     TEST EAX,EAX
005F5D1C  8B F1                     MOV ESI,ECX
005F5D1E  0F 84 B0 00 00 00         JZ 0x005f5dd4
005F5D24  83 F8 01                  CMP EAX,0x1
005F5D27  75 46                     JNZ 0x005f5d6f
005F5D29  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
005F5D2C  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
005F5D2F  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
005F5D32  89 86 93 00 00 00         MOV dword ptr [ESI + 0x93],EAX
005F5D38  89 8E 97 00 00 00         MOV dword ptr [ESI + 0x97],ECX
005F5D3E  89 96 9B 00 00 00         MOV dword ptr [ESI + 0x9b],EDX
005F5D44  C7 46 34 00 00 00 00      MOV dword ptr [ESI + 0x34],0x0
LAB_005f5d4b:
005F5D4B  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
005F5D4E  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
005F5D51  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
005F5D54  51                        PUSH ECX
005F5D55  52                        PUSH EDX
005F5D56  50                        PUSH EAX
005F5D57  8B CE                     MOV ECX,ESI
005F5D59  E8 AF F0 E0 FF            CALL 0x00404e0d
005F5D5E  C7 86 04 01 00 00 03 00 00 00  MOV dword ptr [ESI + 0x104],0x3
005F5D68  5E                        POP ESI
005F5D69  8B E5                     MOV ESP,EBP
005F5D6B  5D                        POP EBP
005F5D6C  C2 04 00                  RET 0x4
LAB_005f5d6f:
005F5D6F  83 F8 02                  CMP EAX,0x2
005F5D72  75 60                     JNZ 0x005f5dd4
005F5D74  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
005F5D77  85 C9                     TEST ECX,ECX
005F5D79  74 4F                     JZ 0x005f5dca
005F5D7B  8D 55 F8                  LEA EDX,[EBP + -0x8]
005F5D7E  8B 01                     MOV EAX,dword ptr [ECX]
005F5D80  52                        PUSH EDX
005F5D81  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F5D84  52                        PUSH EDX
005F5D85  8D 55 FE                  LEA EDX,[EBP + -0x2]
005F5D88  52                        PUSH EDX
005F5D89  8D 55 0A                  LEA EDX,[EBP + 0xa]
005F5D8C  52                        PUSH EDX
005F5D8D  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
005F5D90  52                        PUSH EDX
005F5D91  FF 90 E0 00 00 00         CALL dword ptr [EAX + 0xe0]
005F5D97  85 C0                     TEST EAX,EAX
005F5D99  75 2F                     JNZ 0x005f5dca
005F5D9B  0F BF 45 0A               MOVSX EAX,word ptr [EBP + 0xa]
005F5D9F  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
005F5DA3  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
005F5DA7  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
005F5DAA  89 86 93 00 00 00         MOV dword ptr [ESI + 0x93],EAX
005F5DB0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F5DB3  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
005F5DB6  89 56 48                  MOV dword ptr [ESI + 0x48],EDX
005F5DB9  89 8E 97 00 00 00         MOV dword ptr [ESI + 0x97],ECX
005F5DBF  89 96 9B 00 00 00         MOV dword ptr [ESI + 0x9b],EDX
005F5DC5  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
005F5DC8  EB 81                     JMP 0x005f5d4b
LAB_005f5dca:
005F5DCA  C7 86 04 01 00 00 05 00 00 00  MOV dword ptr [ESI + 0x104],0x5
LAB_005f5dd4:
005F5DD4  C7 86 04 01 00 00 05 00 00 00  MOV dword ptr [ESI + 0x104],0x5
005F5DDE  5E                        POP ESI
005F5DDF  8B E5                     MOV ESP,EBP
005F5DE1  5D                        POP EBP
005F5DE2  C2 04 00                  RET 0x4
