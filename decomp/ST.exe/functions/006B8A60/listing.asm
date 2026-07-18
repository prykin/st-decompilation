FUN_006b8a60:
006B8A60  55                        PUSH EBP
006B8A61  8B EC                     MOV EBP,ESP
006B8A63  83 EC 10                  SUB ESP,0x10
006B8A66  56                        PUSH ESI
006B8A67  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B8A6A  57                        PUSH EDI
006B8A6B  33 FF                     XOR EDI,EDI
006B8A6D  85 F6                     TEST ESI,ESI
006B8A6F  0F 84 8F 00 00 00         JZ 0x006b8b04
006B8A75  8B 06                     MOV EAX,dword ptr [ESI]
006B8A77  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006B8A7A  F6 C5 01                  TEST CH,0x1
006B8A7D  0F 85 81 00 00 00         JNZ 0x006b8b04
006B8A83  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006B8A8A  74 0C                     JZ 0x006b8a98
006B8A8C  05 F0 04 00 00            ADD EAX,0x4f0
006B8A91  50                        PUSH EAX
006B8A92  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b8a98:
006B8A98  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B8A9B  F6 C4 80                  TEST AH,0x80
006B8A9E  75 28                     JNZ 0x006b8ac8
006B8AA0  8D 45 F0                  LEA EAX,[EBP + -0x10]
006B8AA3  50                        PUSH EAX
006B8AA4  56                        PUSH ESI
006B8AA5  E8 66 04 00 00            CALL 0x006b8f10
006B8AAA  8B F8                     MOV EDI,EAX
006B8AAC  85 FF                     TEST EDI,EDI
006B8AAE  75 18                     JNZ 0x006b8ac8
006B8AB0  8D 4D F0                  LEA ECX,[EBP + -0x10]
006B8AB3  51                        PUSH ECX
006B8AB4  56                        PUSH ESI
006B8AB5  E8 F6 07 00 00            CALL 0x006b92b0
006B8ABA  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006B8ABD  8B F8                     MOV EDI,EAX
006B8ABF  80 E6 DF                  AND DH,0xdf
006B8AC2  80 CE 80                  OR DH,0x80
006B8AC5  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
LAB_006b8ac8:
006B8AC8  8B 36                     MOV ESI,dword ptr [ESI]
006B8ACA  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B8AD1  74 0D                     JZ 0x006b8ae0
006B8AD3  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B8AD9  56                        PUSH ESI
006B8ADA  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b8ae0:
006B8AE0  85 FF                     TEST EDI,EDI
006B8AE2  74 20                     JZ 0x006b8b04
006B8AE4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B8AE9  68 D3 00 00 00            PUSH 0xd3
006B8AEE  68 18 DC 7E 00            PUSH 0x7edc18
006B8AF3  50                        PUSH EAX
006B8AF4  57                        PUSH EDI
006B8AF5  E8 46 D3 FE FF            CALL 0x006a5e40
006B8AFA  8B C7                     MOV EAX,EDI
006B8AFC  5F                        POP EDI
006B8AFD  5E                        POP ESI
006B8AFE  8B E5                     MOV ESP,EBP
006B8B00  5D                        POP EBP
006B8B01  C2 04 00                  RET 0x4
LAB_006b8b04:
006B8B04  5F                        POP EDI
006B8B05  33 C0                     XOR EAX,EAX
006B8B07  5E                        POP ESI
006B8B08  8B E5                     MOV ESP,EBP
006B8B0A  5D                        POP EBP
006B8B0B  C2 04 00                  RET 0x4
