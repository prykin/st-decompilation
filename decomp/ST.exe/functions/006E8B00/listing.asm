FUN_006e8b00:
006E8B00  55                        PUSH EBP
006E8B01  8B EC                     MOV EBP,ESP
006E8B03  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E8B06  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E8B0C  3B D0                     CMP EDX,EAX
006E8B0E  56                        PUSH ESI
006E8B0F  73 7F                     JNC 0x006e8b90
006E8B11  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E8B17  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E8B1A  C1 E0 03                  SHL EAX,0x3
006E8B1D  2B C2                     SUB EAX,EDX
006E8B1F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E8B22  8D 34 81                  LEA ESI,[ECX + EAX*0x4]
006E8B25  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006E8B28  F6 C4 80                  TEST AH,0x80
006E8B2B  74 63                     JZ 0x006e8b90
006E8B2D  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006E8B30  F6 C5 10                  TEST CH,0x10
006E8B33  74 5B                     JZ 0x006e8b90
006E8B35  53                        PUSH EBX
006E8B36  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006E8B39  0C 0C                     OR AL,0xc
006E8B3B  57                        PUSH EDI
006E8B3C  89 06                     MOV dword ptr [ESI],EAX
006E8B3E  89 9E 98 00 00 00         MOV dword ptr [ESI + 0x98],EBX
006E8B44  B9 00 CA 9A 3B            MOV ECX,0x3b9aca00
006E8B49  BF 0A 00 00 00            MOV EDI,0xa
LAB_006e8b4e:
006E8B4E  8B C3                     MOV EAX,EBX
006E8B50  33 D2                     XOR EDX,EDX
006E8B52  F7 F1                     DIV ECX
006E8B54  85 C0                     TEST EAX,EAX
006E8B56  75 12                     JNZ 0x006e8b6a
006E8B58  B8 CD CC CC CC            MOV EAX,0xcccccccd
006E8B5D  F7 E1                     MUL ECX
006E8B5F  C1 EA 03                  SHR EDX,0x3
006E8B62  8B CA                     MOV ECX,EDX
006E8B64  4F                        DEC EDI
006E8B65  83 F9 0A                  CMP ECX,0xa
006E8B68  73 E4                     JNC 0x006e8b4e
LAB_006e8b6a:
006E8B6A  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
006E8B6D  5F                        POP EDI
006E8B6E  D1 E0                     SHL EAX,0x1
006E8B70  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
006E8B73  C7 46 38 07 00 00 00      MOV dword ptr [ESI + 0x38],0x7
006E8B7A  99                        CDQ
006E8B7B  2B C2                     SUB EAX,EDX
006E8B7D  C7 86 88 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0x88],0x3
006E8B87  D1 F8                     SAR EAX,0x1
006E8B89  89 86 84 00 00 00         MOV dword ptr [ESI + 0x84],EAX
006E8B8F  5B                        POP EBX
LAB_006e8b90:
006E8B90  5E                        POP ESI
006E8B91  5D                        POP EBP
006E8B92  C2 08 00                  RET 0x8
