FUN_004d0b90:
004D0B90  55                        PUSH EBP
004D0B91  8B EC                     MOV EBP,ESP
004D0B93  83 EC 4C                  SUB ESP,0x4c
004D0B96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004D0B9B  53                        PUSH EBX
004D0B9C  56                        PUSH ESI
004D0B9D  57                        PUSH EDI
004D0B9E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004D0BA1  33 FF                     XOR EDI,EDI
004D0BA3  8D 55 B8                  LEA EDX,[EBP + -0x48]
004D0BA6  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004D0BA9  57                        PUSH EDI
004D0BAA  52                        PUSH EDX
004D0BAB  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004D0BAE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D0BB4  E8 37 CC 25 00            CALL 0x0072d7f0
004D0BB9  8B F0                     MOV ESI,EAX
004D0BBB  83 C4 08                  ADD ESP,0x8
004D0BBE  3B F7                     CMP ESI,EDI
004D0BC0  0F 85 05 02 00 00         JNZ 0x004d0dcb
004D0BC6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004D0BC9  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004D0BCC  56                        PUSH ESI
004D0BCD  8B CB                     MOV ECX,EBX
004D0BCF  E8 33 43 F3 FF            CALL 0x00404f07
004D0BD4  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
004D0BD7  83 E8 02                  SUB EAX,0x2
004D0BDA  0F 84 F6 00 00 00         JZ 0x004d0cd6
004D0BE0  48                        DEC EAX
004D0BE1  0F 84 B0 00 00 00         JZ 0x004d0c97
004D0BE7  2D 0C 01 00 00            SUB EAX,0x10c
004D0BEC  0F 85 C5 01 00 00         JNZ 0x004d0db7
004D0BF2  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
004D0BF8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D0BFB  8D 0C 85 1C 00 00 00      LEA ECX,[EAX*0x4 + 0x1c]
004D0C02  51                        PUSH ECX
004D0C03  E8 68 A0 1D 00            CALL 0x006aac70
004D0C08  3B DF                     CMP EBX,EDI
004D0C0A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004D0C0D  74 08                     JZ 0x004d0c17
004D0C0F  8D B3 31 02 00 00         LEA ESI,[EBX + 0x231]
004D0C15  EB 02                     JMP 0x004d0c19
LAB_004d0c17:
004D0C17  33 F6                     XOR ESI,ESI
LAB_004d0c19:
004D0C19  B9 07 00 00 00            MOV ECX,0x7
004D0C1E  8B F8                     MOV EDI,EAX
004D0C20  F3 A5                     MOVSD.REP ES:EDI,ESI
004D0C22  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004D0C25  C7 42 0C 02 00 00 00      MOV dword ptr [EDX + 0xc],0x2
004D0C2C  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
004D0C32  85 C0                     TEST EAX,EAX
004D0C34  74 20                     JZ 0x004d0c56
004D0C36  8B B3 4D 02 00 00         MOV ESI,dword ptr [EBX + 0x24d]
004D0C3C  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004D0C3F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004D0C42  C1 E1 02                  SHL ECX,0x2
004D0C45  8B D1                     MOV EDX,ECX
004D0C47  8D 78 1C                  LEA EDI,[EAX + 0x1c]
004D0C4A  C1 E9 02                  SHR ECX,0x2
004D0C4D  F3 A5                     MOVSD.REP ES:EDI,ESI
004D0C4F  8B CA                     MOV ECX,EDX
004D0C51  83 E1 03                  AND ECX,0x3
004D0C54  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_004d0c56:
004D0C56  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
004D0C5C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004D0C5F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D0C62  8D 0C 85 1C 00 00 00      LEA ECX,[EAX*0x4 + 0x1c]
004D0C69  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
004D0C6C  51                        PUSH ECX
004D0C6D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D0C73  52                        PUSH EDX
004D0C74  50                        PUSH EAX
004D0C75  E8 7F 19 F3 FF            CALL 0x004025f9
004D0C7A  8D 4D FC                  LEA ECX,[EBP + -0x4]
004D0C7D  51                        PUSH ECX
004D0C7E  E8 DD A3 1D 00            CALL 0x006ab060
004D0C83  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004D0C86  33 C0                     XOR EAX,EAX
004D0C88  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004D0C8E  5F                        POP EDI
004D0C8F  5E                        POP ESI
004D0C90  5B                        POP EBX
004D0C91  8B E5                     MOV ESP,EBP
004D0C93  5D                        POP EBP
004D0C94  C2 04 00                  RET 0x4
LAB_004d0c97:
004D0C97  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004D0C9D  89 3D CC 0B 80 00         MOV dword ptr [0x00800bcc],EDI
004D0CA3  E8 2D 15 F3 FF            CALL 0x004021d5
004D0CA8  8B 83 4D 02 00 00         MOV EAX,dword ptr [EBX + 0x24d]
004D0CAE  81 C3 4D 02 00 00         ADD EBX,0x24d
004D0CB4  3B C7                     CMP EAX,EDI
004D0CB6  0F 84 FB 00 00 00         JZ 0x004d0db7
004D0CBC  53                        PUSH EBX
004D0CBD  E8 9E A3 1D 00            CALL 0x006ab060
004D0CC2  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004D0CC5  33 C0                     XOR EAX,EAX
004D0CC7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004D0CCD  5F                        POP EDI
004D0CCE  5E                        POP ESI
004D0CCF  5B                        POP EBX
004D0CD0  8B E5                     MOV ESP,EBP
004D0CD2  5D                        POP EBP
004D0CD3  C2 04 00                  RET 0x4
LAB_004d0cd6:
004D0CD6  89 1D CC 0B 80 00         MOV dword ptr [0x00800bcc],EBX
004D0CDC  C7 43 20 EA 03 00 00      MOV dword ptr [EBX + 0x20],0x3ea
004D0CE3  C7 43 28 02 00 00 00      MOV dword ptr [EBX + 0x28],0x2
004D0CEA  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
004D0CED  3B DF                     CMP EBX,EDI
004D0CEF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D0CF2  74 06                     JZ 0x004d0cfa
004D0CF4  8D BB 31 02 00 00         LEA EDI,[EBX + 0x231]
LAB_004d0cfa:
004D0CFA  B9 07 00 00 00            MOV ECX,0x7
004D0CFF  8B F2                     MOV ESI,EDX
004D0D01  F3 A5                     MOVSD.REP ES:EDI,ESI
004D0D03  83 BB 3D 02 00 00 02      CMP dword ptr [EBX + 0x23d],0x2
004D0D0A  0F 85 A7 00 00 00         JNZ 0x004d0db7
004D0D10  8B 83 49 02 00 00         MOV EAX,dword ptr [EBX + 0x249]
004D0D16  85 C0                     TEST EAX,EAX
004D0D18  74 15                     JZ 0x004d0d2f
004D0D1A  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004D0D1D  C1 E2 02                  SHL EDX,0x2
004D0D20  52                        PUSH EDX
004D0D21  E8 4A 9F 1D 00            CALL 0x006aac70
004D0D26  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004D0D29  89 83 4D 02 00 00         MOV dword ptr [EBX + 0x24d],EAX
LAB_004d0d2f:
004D0D2F  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
004D0D35  85 C0                     TEST EAX,EAX
004D0D37  74 7E                     JZ 0x004d0db7
004D0D39  8B BB 4D 02 00 00         MOV EDI,dword ptr [EBX + 0x24d]
004D0D3F  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004D0D42  C1 E1 02                  SHL ECX,0x2
004D0D45  8B C1                     MOV EAX,ECX
004D0D47  8D 72 1C                  LEA ESI,[EDX + 0x1c]
004D0D4A  C1 E9 02                  SHR ECX,0x2
004D0D4D  F3 A5                     MOVSD.REP ES:EDI,ESI
004D0D4F  8B C8                     MOV ECX,EAX
004D0D51  83 E1 03                  AND ECX,0x3
004D0D54  F3 A4                     MOVSB.REP ES:EDI,ESI
004D0D56  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
004D0D5C  33 FF                     XOR EDI,EDI
004D0D5E  85 C0                     TEST EAX,EAX
004D0D60  7E 55                     JLE 0x004d0db7
004D0D62  33 F6                     XOR ESI,ESI
LAB_004d0d64:
004D0D64  8B 8B 4D 02 00 00         MOV ECX,dword ptr [EBX + 0x24d]
004D0D6A  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
004D0D6D  52                        PUSH EDX
004D0D6E  53                        PUSH EBX
004D0D6F  66 8B 54 31 04            MOV DX,word ptr [ECX + ESI*0x1 + 0x4]
004D0D74  8D 04 31                  LEA EAX,[ECX + ESI*0x1]
004D0D77  6A 00                     PUSH 0x0
004D0D79  66 8B 48 08               MOV CX,word ptr [EAX + 0x8]
004D0D7D  66 8B 00                  MOV AX,word ptr [EAX]
004D0D80  51                        PUSH ECX
004D0D81  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004D0D87  52                        PUSH EDX
004D0D88  50                        PUSH EAX
004D0D89  E8 97 05 F3 FF            CALL 0x00401325
004D0D8E  85 C0                     TEST EAX,EAX
004D0D90  74 17                     JZ 0x004d0da9
004D0D92  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D0D98  68 26 03 00 00            PUSH 0x326
004D0D9D  68 9C F3 7B 00            PUSH 0x7bf39c
004D0DA2  51                        PUSH ECX
004D0DA3  50                        PUSH EAX
004D0DA4  E8 97 50 1D 00            CALL 0x006a5e40
LAB_004d0da9:
004D0DA9  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
004D0DAF  47                        INC EDI
004D0DB0  83 C6 0C                  ADD ESI,0xc
004D0DB3  3B F8                     CMP EDI,EAX
004D0DB5  7C AD                     JL 0x004d0d64
LAB_004d0db7:
004D0DB7  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004D0DBA  33 C0                     XOR EAX,EAX
004D0DBC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004D0DC2  5F                        POP EDI
004D0DC3  5E                        POP ESI
004D0DC4  5B                        POP EBX
004D0DC5  8B E5                     MOV ESP,EBP
004D0DC7  5D                        POP EBP
004D0DC8  C2 04 00                  RET 0x4
LAB_004d0dcb:
004D0DCB  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004D0DCE  68 C4 F3 7B 00            PUSH 0x7bf3c4
004D0DD3  68 CC 4C 7A 00            PUSH 0x7a4ccc
004D0DD8  56                        PUSH ESI
004D0DD9  57                        PUSH EDI
004D0DDA  68 41 03 00 00            PUSH 0x341
004D0DDF  68 9C F3 7B 00            PUSH 0x7bf39c
004D0DE4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004D0DE9  E8 E2 C6 1D 00            CALL 0x006ad4d0
004D0DEE  83 C4 18                  ADD ESP,0x18
004D0DF1  85 C0                     TEST EAX,EAX
004D0DF3  74 01                     JZ 0x004d0df6
004D0DF5  CC                        INT3
LAB_004d0df6:
004D0DF6  68 42 03 00 00            PUSH 0x342
004D0DFB  68 9C F3 7B 00            PUSH 0x7bf39c
004D0E00  57                        PUSH EDI
004D0E01  56                        PUSH ESI
004D0E02  E8 39 50 1D 00            CALL 0x006a5e40
004D0E07  8B C6                     MOV EAX,ESI
004D0E09  5F                        POP EDI
004D0E0A  5E                        POP ESI
004D0E0B  5B                        POP EBX
004D0E0C  8B E5                     MOV ESP,EBP
004D0E0E  5D                        POP EBP
004D0E0F  C2 04 00                  RET 0x4
