FUN_006b8b10:
006B8B10  55                        PUSH EBP
006B8B11  8B EC                     MOV EBP,ESP
006B8B13  56                        PUSH ESI
006B8B14  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B8B17  57                        PUSH EDI
006B8B18  33 FF                     XOR EDI,EDI
006B8B1A  85 F6                     TEST ESI,ESI
006B8B1C  0F 84 88 00 00 00         JZ 0x006b8baa
006B8B22  8B 06                     MOV EAX,dword ptr [ESI]
006B8B24  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006B8B27  F6 C5 01                  TEST CH,0x1
006B8B2A  75 7E                     JNZ 0x006b8baa
006B8B2C  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006B8B33  74 0C                     JZ 0x006b8b41
006B8B35  05 F0 04 00 00            ADD EAX,0x4f0
006B8B3A  50                        PUSH EAX
006B8B3B  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b8b41:
006B8B41  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B8B44  F6 C4 80                  TEST AH,0x80
006B8B47  74 26                     JZ 0x006b8b6f
006B8B49  F6 C4 40                  TEST AH,0x40
006B8B4C  74 0C                     JZ 0x006b8b5a
006B8B4E  56                        PUSH ESI
006B8B4F  E8 DC 02 00 00            CALL 0x006b8e30
006B8B54  8B F8                     MOV EDI,EAX
006B8B56  85 FF                     TEST EDI,EDI
006B8B58  75 15                     JNZ 0x006b8b6f
LAB_006b8b5a:
006B8B5A  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006B8B5D  8D 46 10                  LEA EAX,[ESI + 0x10]
006B8B60  80 E6 6F                  AND DH,0x6f
006B8B63  50                        PUSH EAX
006B8B64  56                        PUSH ESI
006B8B65  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
006B8B68  E8 43 07 00 00            CALL 0x006b92b0
006B8B6D  8B F8                     MOV EDI,EAX
LAB_006b8b6f:
006B8B6F  8B 36                     MOV ESI,dword ptr [ESI]
006B8B71  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B8B78  74 0D                     JZ 0x006b8b87
006B8B7A  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B8B80  56                        PUSH ESI
006B8B81  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b8b87:
006B8B87  85 FF                     TEST EDI,EDI
006B8B89  74 1F                     JZ 0x006b8baa
006B8B8B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B8B91  68 EF 00 00 00            PUSH 0xef
006B8B96  68 18 DC 7E 00            PUSH 0x7edc18
006B8B9B  51                        PUSH ECX
006B8B9C  57                        PUSH EDI
006B8B9D  E8 9E D2 FE FF            CALL 0x006a5e40
006B8BA2  8B C7                     MOV EAX,EDI
006B8BA4  5F                        POP EDI
006B8BA5  5E                        POP ESI
006B8BA6  5D                        POP EBP
006B8BA7  C2 04 00                  RET 0x4
LAB_006b8baa:
006B8BAA  5F                        POP EDI
006B8BAB  33 C0                     XOR EAX,EAX
006B8BAD  5E                        POP ESI
006B8BAE  5D                        POP EBP
006B8BAF  C2 04 00                  RET 0x4
