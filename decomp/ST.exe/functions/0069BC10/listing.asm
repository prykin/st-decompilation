FUN_0069bc10:
0069BC10  55                        PUSH EBP
0069BC11  8B EC                     MOV EBP,ESP
0069BC13  83 EC 20                  SUB ESP,0x20
0069BC16  57                        PUSH EDI
0069BC17  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0069BC1A  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0069BC1D  8B C7                     MOV EAX,EDI
0069BC1F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069BC22  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0069BC29  C1 E0 06                  SHL EAX,0x6
0069BC2C  85 FF                     TEST EDI,EDI
0069BC2E  8B 44 08 EC               MOV EAX,dword ptr [EAX + ECX*0x1 + -0x14]
0069BC32  B9 FF FF 00 00            MOV ECX,0xffff
0069BC37  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0069BC3A  0F 8E 00 01 00 00         JLE 0x0069bd40
0069BC40  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069BC43  53                        PUSH EBX
0069BC44  56                        PUSH ESI
0069BC45  BE 01 00 00 00            MOV ESI,0x1
0069BC4A  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0069BC4D  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0069BC50  EB 03                     JMP 0x0069bc55
LAB_0069bc52:
0069BC52  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_0069bc55:
0069BC55  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069BC58  8B 11                     MOV EDX,dword ptr [ECX]
0069BC5A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069BC5D  C1 E2 06                  SHL EDX,0x6
0069BC60  03 CA                     ADD ECX,EDX
0069BC62  8B 51 2C                  MOV EDX,dword ptr [ECX + 0x2c]
0069BC65  03 C2                     ADD EAX,EDX
0069BC67  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
0069BC6A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0069BC6D  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
0069BC70  2B C2                     SUB EAX,EDX
0069BC72  99                        CDQ
0069BC73  2B C2                     SUB EAX,EDX
0069BC75  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
0069BC78  8B D8                     MOV EBX,EAX
0069BC7A  8B 41 3C                  MOV EAX,dword ptr [ECX + 0x3c]
0069BC7D  D1 FB                     SAR EBX,0x1
0069BC7F  03 DA                     ADD EBX,EDX
0069BC81  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
0069BC84  2B C2                     SUB EAX,EDX
0069BC86  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0069BC89  99                        CDQ
0069BC8A  2B C2                     SUB EAX,EDX
0069BC8C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0069BC8F  D1 F8                     SAR EAX,0x1
0069BC91  03 C2                     ADD EAX,EDX
0069BC93  3B F7                     CMP ESI,EDI
0069BC95  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0069BC98  7D 6A                     JGE 0x0069bd04
0069BC9A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069BC9D  83 C2 04                  ADD EDX,0x4
0069BCA0  2B FE                     SUB EDI,ESI
0069BCA2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069BCA5  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_0069bca8:
0069BCA8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069BCAB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0069BCAE  8B 08                     MOV ECX,dword ptr [EAX]
0069BCB0  C1 E1 06                  SHL ECX,0x6
0069BCB3  03 CA                     ADD ECX,EDX
0069BCB5  8B 79 30                  MOV EDI,dword ptr [ECX + 0x30]
0069BCB8  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
0069BCBB  2B C7                     SUB EAX,EDI
0069BCBD  99                        CDQ
0069BCBE  2B C2                     SUB EAX,EDX
0069BCC0  8B F0                     MOV ESI,EAX
0069BCC2  8B 41 3C                  MOV EAX,dword ptr [ECX + 0x3c]
0069BCC5  D1 FE                     SAR ESI,0x1
0069BCC7  03 F7                     ADD ESI,EDI
0069BCC9  8B 79 34                  MOV EDI,dword ptr [ECX + 0x34]
0069BCCC  2B C7                     SUB EAX,EDI
0069BCCE  99                        CDQ
0069BCCF  2B C2                     SUB EAX,EDX
0069BCD1  D1 F8                     SAR EAX,0x1
0069BCD3  03 C7                     ADD EAX,EDI
0069BCD5  50                        PUSH EAX
0069BCD6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0069BCD9  56                        PUSH ESI
0069BCDA  50                        PUSH EAX
0069BCDB  53                        PUSH EBX
0069BCDC  E8 AF 12 01 00            CALL 0x006acf90
0069BCE1  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
0069BCE4  7D 03                     JGE 0x0069bce9
0069BCE6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0069bce9:
0069BCE9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069BCEC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069BCEF  83 C1 04                  ADD ECX,0x4
0069BCF2  48                        DEC EAX
0069BCF3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0069BCF6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0069BCF9  75 AD                     JNZ 0x0069bca8
0069BCFB  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0069BCFE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0069BD01  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_0069bd04:
0069BD04  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0069BD07  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0069BD0A  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0069BD0D  8B 09                     MOV ECX,dword ptr [ECX]
0069BD0F  52                        PUSH EDX
0069BD10  51                        PUSH ECX
0069BD11  50                        PUSH EAX
0069BD12  53                        PUSH EBX
0069BD13  E8 78 12 01 00            CALL 0x006acf90
0069BD18  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0069BD1B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069BD1E  03 D8                     ADD EBX,EAX
0069BD20  83 C2 04                  ADD EDX,0x4
0069BD23  46                        INC ESI
0069BD24  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0069BD27  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0069BD2A  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0069BD2D  8D 56 FF                  LEA EDX,[ESI + -0x1]
0069BD30  3B D7                     CMP EDX,EDI
0069BD32  0F 8C 1A FF FF FF         JL 0x0069bc52
0069BD38  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0069BD3B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0069BD3E  5E                        POP ESI
0069BD3F  5B                        POP EBX
LAB_0069bd40:
0069BD40  0F AF CF                  IMUL ECX,EDI
0069BD43  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0069BD46  5F                        POP EDI
0069BD47  03 CA                     ADD ECX,EDX
0069BD49  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0069BD4C  0F AF 4D 14               IMUL ECX,dword ptr [EBP + 0x14]
0069BD50  89 0A                     MOV dword ptr [EDX],ECX
0069BD52  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0069BD55  89 02                     MOV dword ptr [EDX],EAX
0069BD57  03 C1                     ADD EAX,ECX
0069BD59  8B E5                     MOV ESP,EBP
0069BD5B  5D                        POP EBP
0069BD5C  C2 18 00                  RET 0x18
