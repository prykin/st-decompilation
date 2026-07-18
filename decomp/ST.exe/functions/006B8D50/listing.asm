FUN_006b8d50:
006B8D50  55                        PUSH EBP
006B8D51  8B EC                     MOV EBP,ESP
006B8D53  53                        PUSH EBX
006B8D54  56                        PUSH ESI
006B8D55  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B8D58  57                        PUSH EDI
006B8D59  85 F6                     TEST ESI,ESI
006B8D5B  0F 84 9F 00 00 00         JZ 0x006b8e00
006B8D61  8B 06                     MOV EAX,dword ptr [ESI]
006B8D63  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006B8D66  F6 C5 01                  TEST CH,0x1
006B8D69  0F 85 91 00 00 00         JNZ 0x006b8e00
006B8D6F  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006B8D76  74 0C                     JZ 0x006b8d84
006B8D78  05 F0 04 00 00            ADD EAX,0x4f0
006B8D7D  50                        PUSH EAX
006B8D7E  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b8d84:
006B8D84  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B8D87  F6 C4 40                  TEST AH,0x40
006B8D8A  74 5C                     JZ 0x006b8de8
006B8D8C  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006B8D8F  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006B8D92  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B8D95  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006B8D98  03 D0                     ADD EDX,EAX
006B8D9A  3B D1                     CMP EDX,ECX
006B8D9C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B8D9F  7E 1C                     JLE 0x006b8dbd
006B8DA1  8D 1C 39                  LEA EBX,[ECX + EDI*0x1]
006B8DA4  3B C3                     CMP EAX,EBX
006B8DA6  7D 15                     JGE 0x006b8dbd
006B8DA8  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006B8DAB  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
006B8DAE  03 D8                     ADD EBX,EAX
006B8DB0  3B DA                     CMP EBX,EDX
006B8DB2  7E 09                     JLE 0x006b8dbd
006B8DB4  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006B8DB7  03 DA                     ADD EBX,EDX
006B8DB9  3B C3                     CMP EAX,EBX
006B8DBB  7C 13                     JL 0x006b8dd0
LAB_006b8dbd:
006B8DBD  85 C9                     TEST ECX,ECX
006B8DBF  75 27                     JNZ 0x006b8de8
006B8DC1  85 D2                     TEST EDX,EDX
006B8DC3  75 23                     JNZ 0x006b8de8
006B8DC5  85 FF                     TEST EDI,EDI
006B8DC7  75 1F                     JNZ 0x006b8de8
006B8DC9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B8DCC  85 C0                     TEST EAX,EAX
006B8DCE  75 18                     JNZ 0x006b8de8
LAB_006b8dd0:
006B8DD0  56                        PUSH ESI
006B8DD1  E8 5A 00 00 00            CALL 0x006b8e30
006B8DD6  8B F8                     MOV EDI,EAX
006B8DD8  85 FF                     TEST EDI,EDI
006B8DDA  75 2D                     JNZ 0x006b8e09
006B8DDC  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B8DDF  80 E4 EF                  AND AH,0xef
006B8DE2  80 CC 20                  OR AH,0x20
006B8DE5  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_006b8de8:
006B8DE8  8B 36                     MOV ESI,dword ptr [ESI]
006B8DEA  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B8DF1  74 0D                     JZ 0x006b8e00
006B8DF3  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B8DF9  56                        PUSH ESI
006B8DFA  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b8e00:
006B8E00  5F                        POP EDI
006B8E01  5E                        POP ESI
006B8E02  33 C0                     XOR EAX,EAX
006B8E04  5B                        POP EBX
006B8E05  5D                        POP EBP
006B8E06  C2 14 00                  RET 0x14
LAB_006b8e09:
006B8E09  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B8E0F  68 5E 01 00 00            PUSH 0x15e
006B8E14  68 18 DC 7E 00            PUSH 0x7edc18
006B8E19  51                        PUSH ECX
006B8E1A  57                        PUSH EDI
006B8E1B  E8 20 D0 FE FF            CALL 0x006a5e40
006B8E20  8B C7                     MOV EAX,EDI
006B8E22  5F                        POP EDI
006B8E23  5E                        POP ESI
006B8E24  5B                        POP EBX
006B8E25  5D                        POP EBP
006B8E26  C2 14 00                  RET 0x14
