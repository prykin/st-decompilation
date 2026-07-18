FUN_0075bf40:
0075BF40  55                        PUSH EBP
0075BF41  8B EC                     MOV EBP,ESP
0075BF43  83 EC 10                  SUB ESP,0x10
0075BF46  53                        PUSH EBX
0075BF47  56                        PUSH ESI
0075BF48  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075BF4B  33 D2                     XOR EDX,EDX
0075BF4D  57                        PUSH EDI
0075BF4E  8B 86 7E 01 00 00         MOV EAX,dword ptr [ESI + 0x17e]
0075BF54  8B 9E AA 01 00 00         MOV EBX,dword ptr [ESI + 0x1aa]
0075BF5A  85 C0                     TEST EAX,EAX
0075BF5C  0F 94 C2                  SETZ DL
0075BF5F  33 C9                     XOR ECX,ECX
0075BF61  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075BF64  85 D2                     TEST EDX,EDX
0075BF66  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0075BF69  74 0C                     JZ 0x0075bf77
0075BF6B  8B 86 82 01 00 00         MOV EAX,dword ptr [ESI + 0x182]
0075BF71  85 C0                     TEST EAX,EAX
0075BF73  74 24                     JZ 0x0075bf99
0075BF75  EB 1D                     JMP 0x0075bf94
LAB_0075bf77:
0075BF77  8B 96 82 01 00 00         MOV EDX,dword ptr [ESI + 0x182]
0075BF7D  3B C2                     CMP EAX,EDX
0075BF7F  7F 05                     JG 0x0075bf86
0075BF81  83 FA 40                  CMP EDX,0x40
0075BF84  7C 05                     JL 0x0075bf8b
LAB_0075bf86:
0075BF86  B9 01 00 00 00            MOV ECX,0x1
LAB_0075bf8b:
0075BF8B  83 BE 36 01 00 00 01      CMP dword ptr [ESI + 0x136],0x1
0075BF92  74 05                     JZ 0x0075bf99
LAB_0075bf94:
0075BF94  B9 01 00 00 00            MOV ECX,0x1
LAB_0075bf99:
0075BF99  8B 86 86 01 00 00         MOV EAX,dword ptr [ESI + 0x186]
0075BF9F  85 C0                     TEST EAX,EAX
0075BFA1  74 10                     JZ 0x0075bfb3
0075BFA3  8B 96 8A 01 00 00         MOV EDX,dword ptr [ESI + 0x18a]
0075BFA9  48                        DEC EAX
0075BFAA  3B D0                     CMP EDX,EAX
0075BFAC  74 05                     JZ 0x0075bfb3
0075BFAE  B9 01 00 00 00            MOV ECX,0x1
LAB_0075bfb3:
0075BFB3  83 BE 8A 01 00 00 0D      CMP dword ptr [ESI + 0x18a],0xd
0075BFBA  7F 04                     JG 0x0075bfc0
0075BFBC  85 C9                     TEST ECX,ECX
0075BFBE  74 14                     JZ 0x0075bfd4
LAB_0075bfc0:
0075BFC0  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0075BFC5  6A 7E                     PUSH 0x7e
0075BFC7  68 10 2E 7F 00            PUSH 0x7f2e10
0075BFCC  50                        PUSH EAX
0075BFCD  6A 0E                     PUSH 0xe
0075BFCF  E8 6C 9E F4 FF            CALL 0x006a5e40
LAB_0075bfd4:
0075BFD4  8B 86 36 01 00 00         MOV EAX,dword ptr [ESI + 0x136]
0075BFDA  33 FF                     XOR EDI,EDI
0075BFDC  85 C0                     TEST EAX,EAX
0075BFDE  7E 4E                     JLE 0x0075c02e
0075BFE0  8D 96 3A 01 00 00         LEA EDX,[ESI + 0x13a]
LAB_0075bfe6:
0075BFE6  8B 0A                     MOV ECX,dword ptr [EDX]
0075BFE8  8B 86 98 00 00 00         MOV EAX,dword ptr [ESI + 0x98]
0075BFEE  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
0075BFF1  C1 E1 08                  SHL ECX,0x8
0075BFF4  03 C8                     ADD ECX,EAX
0075BFF6  8B 86 7E 01 00 00         MOV EAX,dword ptr [ESI + 0x17e]
0075BFFC  3B 86 82 01 00 00         CMP EAX,dword ptr [ESI + 0x182]
0075C002  7F 1C                     JG 0x0075c020
0075C004  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
LAB_0075c007:
0075C007  8B 9E 8A 01 00 00         MOV EBX,dword ptr [ESI + 0x18a]
0075C00D  40                        INC EAX
0075C00E  89 19                     MOV dword ptr [ECX],EBX
0075C010  8B 9E 82 01 00 00         MOV EBX,dword ptr [ESI + 0x182]
0075C016  83 C1 04                  ADD ECX,0x4
0075C019  3B C3                     CMP EAX,EBX
0075C01B  7E EA                     JLE 0x0075c007
0075C01D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0075c020:
0075C020  8B 86 36 01 00 00         MOV EAX,dword ptr [ESI + 0x136]
0075C026  47                        INC EDI
0075C027  83 C2 04                  ADD EDX,0x4
0075C02A  3B F8                     CMP EDI,EAX
0075C02C  7C B8                     JL 0x0075bfe6
LAB_0075c02e:
0075C02E  8B 86 86 01 00 00         MOV EAX,dword ptr [ESI + 0x186]
0075C034  33 D2                     XOR EDX,EDX
0075C036  3B C2                     CMP EAX,EDX
0075C038  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075C03B  75 16                     JNZ 0x0075c053
0075C03D  3B C2                     CMP EAX,EDX
0075C03F  74 09                     JZ 0x0075c04a
0075C041  C7 43 04 80 C1 75 00      MOV dword ptr [EBX + 0x4],0x75c180
0075C048  EB 1D                     JMP 0x0075c067
LAB_0075c04a:
0075C04A  C7 43 04 40 C4 75 00      MOV dword ptr [EBX + 0x4],0x75c440
0075C051  EB 14                     JMP 0x0075c067
LAB_0075c053:
0075C053  3B C2                     CMP EAX,EDX
0075C055  74 09                     JZ 0x0075c060
0075C057  C7 43 04 80 C6 75 00      MOV dword ptr [EBX + 0x4],0x75c680
0075C05E  EB 07                     JMP 0x0075c067
LAB_0075c060:
0075C060  C7 43 04 90 C7 75 00      MOV dword ptr [EBX + 0x4],0x75c790
LAB_0075c067:
0075C067  8B 86 36 01 00 00         MOV EAX,dword ptr [ESI + 0x136]
0075C06D  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0075C070  3B C2                     CMP EAX,EDX
0075C072  0F 8E DE 00 00 00         JLE 0x0075c156
0075C078  8D 43 18                  LEA EAX,[EBX + 0x18]
0075C07B  8D 8E 3A 01 00 00         LEA ECX,[ESI + 0x13a]
0075C081  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0075C084  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0075c087:
0075C087  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075C08A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075C08D  3B CA                     CMP ECX,EDX
0075C08F  8B 00                     MOV EAX,dword ptr [EAX]
0075C091  74 4E                     JZ 0x0075c0e1
0075C093  39 96 86 01 00 00         CMP dword ptr [ESI + 0x186],EDX
0075C099  0F 85 8C 00 00 00         JNZ 0x0075c12b
0075C09F  8B 78 14                  MOV EDI,dword ptr [EAX + 0x14]
0075C0A2  3B FA                     CMP EDI,EDX
0075C0A4  7C 0E                     JL 0x0075c0b4
0075C0A6  83 FF 04                  CMP EDI,0x4
0075C0A9  7D 09                     JGE 0x0075c0b4
0075C0AB  39 94 BE AC 00 00 00      CMP dword ptr [ESI + EDI*0x4 + 0xac],EDX
0075C0B2  75 18                     JNZ 0x0075c0cc
LAB_0075c0b4:
0075C0B4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0075C0BA  68 A7 00 00 00            PUSH 0xa7
0075C0BF  68 10 2E 7F 00            PUSH 0x7f2e10
0075C0C4  51                        PUSH ECX
0075C0C5  6A 31                     PUSH 0x31
0075C0C7  E8 74 9D F4 FF            CALL 0x006a5e40
LAB_0075c0cc:
0075C0CC  8B 84 BE AC 00 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0xac]
0075C0D3  8D 54 BB 2C               LEA EDX,[EBX + EDI*0x4 + 0x2c]
0075C0D7  52                        PUSH EDX
0075C0D8  50                        PUSH EAX
0075C0D9  56                        PUSH ESI
0075C0DA  E8 61 F4 FF FF            CALL 0x0075b540
0075C0DF  EB 4A                     JMP 0x0075c12b
LAB_0075c0e1:
0075C0E1  8B 78 18                  MOV EDI,dword ptr [EAX + 0x18]
0075C0E4  3B FA                     CMP EDI,EDX
0075C0E6  7C 0E                     JL 0x0075c0f6
0075C0E8  83 FF 04                  CMP EDI,0x4
0075C0EB  7D 09                     JGE 0x0075c0f6
0075C0ED  39 94 BE BC 00 00 00      CMP dword ptr [ESI + EDI*0x4 + 0xbc],EDX
0075C0F4  75 18                     JNZ 0x0075c10e
LAB_0075c0f6:
0075C0F6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0075C0FC  68 AF 00 00 00            PUSH 0xaf
0075C101  68 10 2E 7F 00            PUSH 0x7f2e10
0075C106  51                        PUSH ECX
0075C107  6A 31                     PUSH 0x31
0075C109  E8 32 9D F4 FF            CALL 0x006a5e40
LAB_0075c10e:
0075C10E  8B 94 BE BC 00 00 00      MOV EDX,dword ptr [ESI + EDI*0x4 + 0xbc]
0075C115  8D 5C BB 2C               LEA EBX,[EBX + EDI*0x4 + 0x2c]
0075C119  53                        PUSH EBX
0075C11A  52                        PUSH EDX
0075C11B  56                        PUSH ESI
0075C11C  E8 1F F4 FF FF            CALL 0x0075b540
0075C121  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075C124  8B 03                     MOV EAX,dword ptr [EBX]
0075C126  8B D9                     MOV EBX,ECX
0075C128  89 41 3C                  MOV dword ptr [ECX + 0x3c],EAX
LAB_0075c12b:
0075C12B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0075C12E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075C131  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0075C134  33 D2                     XOR EDX,EDX
0075C136  89 11                     MOV dword ptr [ECX],EDX
0075C138  83 C1 04                  ADD ECX,0x4
0075C13B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0075C13E  8B 8E 36 01 00 00         MOV ECX,dword ptr [ESI + 0x136]
0075C144  40                        INC EAX
0075C145  83 C7 04                  ADD EDI,0x4
0075C148  3B C1                     CMP EAX,ECX
0075C14A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0075C14D  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0075C150  0F 8C 31 FF FF FF         JL 0x0075c087
LAB_0075c156:
0075C156  89 53 0C                  MOV dword ptr [EBX + 0xc],EDX
0075C159  89 53 08                  MOV dword ptr [EBX + 0x8],EDX
0075C15C  89 53 10                  MOV dword ptr [EBX + 0x10],EDX
0075C15F  89 53 14                  MOV dword ptr [EBX + 0x14],EDX
0075C162  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
0075C168  5F                        POP EDI
0075C169  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
0075C16C  5E                        POP ESI
0075C16D  5B                        POP EBX
0075C16E  8B E5                     MOV ESP,EBP
0075C170  5D                        POP EBP
0075C171  C2 04 00                  RET 0x4
