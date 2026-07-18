FUN_006aaef0:
006AAEF0  55                        PUSH EBP
006AAEF1  8B EC                     MOV EBP,ESP
006AAEF3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006AAEF6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006AAEF9  53                        PUSH EBX
006AAEFA  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006AAEFD  2B C1                     SUB EAX,ECX
006AAEFF  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AAF02  2B CB                     SUB ECX,EBX
006AAF04  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006AAF07  80 E7 9F                  AND BH,0x9f
006AAF0A  56                        PUSH ESI
006AAF0B  8D 73 D3                  LEA ESI,[EBX + -0x2d]
006AAF0E  81 FE E1 00 00 00         CMP ESI,0xe1
006AAF14  77 25                     JA 0x006aaf3b
006AAF16  33 D2                     XOR EDX,EDX
006AAF18  8A 96 7C AF 6A 00         MOV DL,byte ptr [ESI + 0x6aaf7c]
switchD_006aaf1e::switchD:
006AAF1E  FF 24 95 6C AF 6A 00      JMP dword ptr [EDX*0x4 + 0x6aaf6c]
switchD_006aaf1e::caseD_2d:
006AAF25  F7 D9                     NEG ECX
006AAF27  8B D0                     MOV EDX,EAX
006AAF29  8B C1                     MOV EAX,ECX
006AAF2B  EB 0C                     JMP 0x006aaf39
switchD_006aaf1e::caseD_87:
006AAF2D  F7 D8                     NEG EAX
006AAF2F  F7 D9                     NEG ECX
006AAF31  EB 08                     JMP 0x006aaf3b
switchD_006aaf1e::caseD_e1:
006AAF33  8B D0                     MOV EDX,EAX
006AAF35  8B C1                     MOV EAX,ECX
006AAF37  F7 DA                     NEG EDX
LAB_006aaf39:
006AAF39  8B CA                     MOV ECX,EDX
switchD_006aaf1e::caseD_2e:
006AAF3B  5E                        POP ESI
006AAF3C  F6 C3 01                  TEST BL,0x1
006AAF3F  5B                        POP EBX
006AAF40  74 21                     JZ 0x006aaf63
006AAF42  2B C1                     SUB EAX,ECX
006AAF44  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006AAF47  8D 4C 00 01               LEA ECX,[EAX + EAX*0x1 + 0x1]
006AAF4B  B8 55 55 55 55            MOV EAX,0x55555555
006AAF50  F7 E9                     IMUL ECX
006AAF52  2B D1                     SUB EDX,ECX
006AAF54  D1 FA                     SAR EDX,0x1
006AAF56  8B CA                     MOV ECX,EDX
006AAF58  C1 E9 1F                  SHR ECX,0x1f
006AAF5B  03 D1                     ADD EDX,ECX
006AAF5D  8B C2                     MOV EAX,EDX
006AAF5F  5D                        POP EBP
006AAF60  C2 14 00                  RET 0x14
LAB_006aaf63:
006AAF63  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006AAF66  5D                        POP EBP
006AAF67  C2 14 00                  RET 0x14
