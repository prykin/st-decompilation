FUN_006b1b10:
006B1B10  55                        PUSH EBP
006B1B11  8B EC                     MOV EBP,ESP
006B1B13  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B1B16  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B1B19  53                        PUSH EBX
006B1B1A  56                        PUSH ESI
006B1B1B  8B B2 A0 01 00 00         MOV ESI,dword ptr [EDX + 0x1a0]
006B1B21  57                        PUSH EDI
006B1B22  3B CE                     CMP ECX,ESI
006B1B24  B8 FD FF FF FF            MOV EAX,0xfffffffd
006B1B29  0F 83 8B 00 00 00         JNC 0x006b1bba
006B1B2F  8B B2 B0 01 00 00         MOV ESI,dword ptr [EDX + 0x1b0]
006B1B35  8B 34 8E                  MOV ESI,dword ptr [ESI + ECX*0x4]
006B1B38  8B 0E                     MOV ECX,dword ptr [ESI]
006B1B3A  8B F9                     MOV EDI,ECX
006B1B3C  81 E7 00 80 08 00         AND EDI,0x88000
006B1B42  81 FF 00 80 00 00         CMP EDI,0x8000
006B1B48  75 70                     JNZ 0x006b1bba
006B1B4A  8B 7E 4C                  MOV EDI,dword ptr [ESI + 0x4c]
006B1B4D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B1B50  F6 C1 20                  TEST CL,0x20
006B1B53  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
006B1B56  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
006B1B59  74 0A                     JZ 0x006b1b65
006B1B5B  C7 82 B4 01 00 00 01 00 00 00  MOV dword ptr [EDX + 0x1b4],0x1
LAB_006b1b65:
006B1B65  56                        PUSH ESI
006B1B66  52                        PUSH EDX
006B1B67  E8 A4 D2 01 00            CALL 0x006cee10
006B1B6C  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
006B1B6F  8B 06                     MOV EAX,dword ptr [ESI]
006B1B71  A9 00 00 00 04            TEST EAX,0x4000000
006B1B76  74 40                     JZ 0x006b1bb8
006B1B78  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
006B1B7E  85 C0                     TEST EAX,EAX
006B1B80  74 36                     JZ 0x006b1bb8
006B1B82  8B 9E C0 00 00 00         MOV EBX,dword ptr [ESI + 0xc0]
006B1B88  33 FF                     XOR EDI,EDI
006B1B8A  85 DB                     TEST EBX,EBX
006B1B8C  7E 20                     JLE 0x006b1bae
LAB_006b1b8e:
006B1B8E  8B 8E D0 00 00 00         MOV ECX,dword ptr [ESI + 0xd0]
006B1B94  8B 04 B9                  MOV EAX,dword ptr [ECX + EDI*0x4]
006B1B97  85 C0                     TEST EAX,EAX
006B1B99  7C 0E                     JL 0x006b1ba9
006B1B9B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B1B9E  52                        PUSH EDX
006B1B9F  50                        PUSH EAX
006B1BA0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B1BA3  50                        PUSH EAX
006B1BA4  E8 67 FF FF FF            CALL 0x006b1b10
LAB_006b1ba9:
006B1BA9  47                        INC EDI
006B1BAA  3B FB                     CMP EDI,EBX
006B1BAC  7C E0                     JL 0x006b1b8e
LAB_006b1bae:
006B1BAE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B1BB1  5F                        POP EDI
006B1BB2  5E                        POP ESI
006B1BB3  5B                        POP EBX
006B1BB4  5D                        POP EBP
006B1BB5  C2 0C 00                  RET 0xc
LAB_006b1bb8:
006B1BB8  8B C7                     MOV EAX,EDI
LAB_006b1bba:
006B1BBA  5F                        POP EDI
006B1BBB  5E                        POP ESI
006B1BBC  5B                        POP EBX
006B1BBD  5D                        POP EBP
006B1BBE  C2 0C 00                  RET 0xc
