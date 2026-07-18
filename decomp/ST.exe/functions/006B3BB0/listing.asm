FUN_006b3bb0:
006B3BB0  55                        PUSH EBP
006B3BB1  8B EC                     MOV EBP,ESP
006B3BB3  56                        PUSH ESI
006B3BB4  57                        PUSH EDI
006B3BB5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B3BB8  85 FF                     TEST EDI,EDI
006B3BBA  0F 84 D5 00 00 00         JZ 0x006b3c95
006B3BC0  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B3BC3  56                        PUSH ESI
006B3BC4  57                        PUSH EDI
006B3BC5  E8 26 FF FF FF            CALL 0x006b3af0
006B3BCA  3B B7 A0 01 00 00         CMP ESI,dword ptr [EDI + 0x1a0]
006B3BD0  0F 83 BF 00 00 00         JNC 0x006b3c95
006B3BD6  8B 87 B0 01 00 00         MOV EAX,dword ptr [EDI + 0x1b0]
006B3BDC  8B 34 B0                  MOV ESI,dword ptr [EAX + ESI*0x4]
006B3BDF  8B 06                     MOV EAX,dword ptr [ESI]
006B3BE1  F6 C4 80                  TEST AH,0x80
006B3BE4  0F 84 AB 00 00 00         JZ 0x006b3c95
006B3BEA  A9 00 00 08 00            TEST EAX,0x80000
006B3BEF  74 1B                     JZ 0x006b3c0c
006B3BF1  8B 0F                     MOV ECX,dword ptr [EDI]
006B3BF3  81 C1 F0 04 00 00         ADD ECX,0x4f0
006B3BF9  51                        PUSH ECX
006B3BFA  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006B3C00  8D 96 C0 00 00 00         LEA EDX,[ESI + 0xc0]
006B3C06  52                        PUSH EDX
006B3C07  E8 54 74 FF FF            CALL 0x006ab060
LAB_006b3c0c:
006B3C0C  8B 16                     MOV EDX,dword ptr [ESI]
006B3C0E  80 E6 7F                  AND DH,0x7f
006B3C11  8B C2                     MOV EAX,EDX
006B3C13  89 16                     MOV dword ptr [ESI],EDX
006B3C15  A9 00 00 00 06            TEST EAX,0x6000000
006B3C1A  74 62                     JZ 0x006b3c7e
006B3C1C  A9 00 00 00 02            TEST EAX,0x2000000
006B3C21  74 0C                     JZ 0x006b3c2f
006B3C23  8D 86 CC 00 00 00         LEA EAX,[ESI + 0xcc]
006B3C29  50                        PUSH EAX
006B3C2A  E8 31 74 FF FF            CALL 0x006ab060
LAB_006b3c2f:
006B3C2F  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B3C35  85 C0                     TEST EAX,EAX
006B3C37  74 45                     JZ 0x006b3c7e
006B3C39  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006B3C3F  53                        PUSH EBX
006B3C40  33 DB                     XOR EBX,EBX
006B3C42  85 C0                     TEST EAX,EAX
006B3C44  7E 2B                     JLE 0x006b3c71
LAB_006b3c46:
006B3C46  8B 8E D0 00 00 00         MOV ECX,dword ptr [ESI + 0xd0]
006B3C4C  8B 04 99                  MOV EAX,dword ptr [ECX + EBX*0x4]
006B3C4F  85 C0                     TEST EAX,EAX
006B3C51  7C 13                     JL 0x006b3c66
006B3C53  50                        PUSH EAX
006B3C54  57                        PUSH EDI
006B3C55  E8 56 FF FF FF            CALL 0x006b3bb0
006B3C5A  8B 97 B0 01 00 00         MOV EDX,dword ptr [EDI + 0x1b0]
006B3C60  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B3C63  8B 34 82                  MOV ESI,dword ptr [EDX + EAX*0x4]
LAB_006b3c66:
006B3C66  8B 86 C0 00 00 00         MOV EAX,dword ptr [ESI + 0xc0]
006B3C6C  43                        INC EBX
006B3C6D  3B D8                     CMP EBX,EAX
006B3C6F  7C D5                     JL 0x006b3c46
LAB_006b3c71:
006B3C71  8D 8E D0 00 00 00         LEA ECX,[ESI + 0xd0]
006B3C77  51                        PUSH ECX
006B3C78  E8 E3 73 FF FF            CALL 0x006ab060
006B3C7D  5B                        POP EBX
LAB_006b3c7e:
006B3C7E  F7 06 00 00 08 00         TEST dword ptr [ESI],0x80000
006B3C84  74 0F                     JZ 0x006b3c95
006B3C86  8B 17                     MOV EDX,dword ptr [EDI]
006B3C88  81 C2 F0 04 00 00         ADD EDX,0x4f0
006B3C8E  52                        PUSH EDX
006B3C8F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b3c95:
006B3C95  5F                        POP EDI
006B3C96  5E                        POP ESI
006B3C97  5D                        POP EBP
006B3C98  C2 08 00                  RET 0x8
