FUN_006d4b30:
006D4B30  55                        PUSH EBP
006D4B31  8B EC                     MOV EBP,ESP
006D4B33  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D4B36  F7 41 08 00 00 10 00      TEST dword ptr [ECX + 0x8],0x100000
006D4B3D  74 1B                     JZ 0x006d4b5a
006D4B3F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D4B44  68 D0 01 00 00            PUSH 0x1d0
006D4B49  68 2C E2 7E 00            PUSH 0x7ee22c
006D4B4E  50                        PUSH EAX
006D4B4F  6A D0                     PUSH -0x30
006D4B51  E8 EA 12 FD FF            CALL 0x006a5e40
006D4B56  5D                        POP EBP
006D4B57  C2 08 00                  RET 0x8
LAB_006d4b5a:
006D4B5A  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
006D4B5D  BA AF FF FF FF            MOV EDX,0xffffffaf
006D4B62  85 C0                     TEST EAX,EAX
006D4B64  74 1D                     JZ 0x006d4b83
006D4B66  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D4B69  56                        PUSH ESI
006D4B6A  57                        PUSH EDI
006D4B6B  8B 79 38                  MOV EDI,dword ptr [ECX + 0x38]
006D4B6E  8D 72 04                  LEA ESI,[EDX + 0x4]
006D4B71  3B F7                     CMP ESI,EDI
006D4B73  5F                        POP EDI
006D4B74  5E                        POP ESI
006D4B75  77 07                     JA 0x006d4b7e
006D4B77  8B 04 10                  MOV EAX,dword ptr [EAX + EDX*0x1]
006D4B7A  5D                        POP EBP
006D4B7B  C2 08 00                  RET 0x8
LAB_006d4b7e:
006D4B7E  BA F2 FF FF FF            MOV EDX,0xfffffff2
LAB_006d4b83:
006D4B83  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006D4B89  68 E1 01 00 00            PUSH 0x1e1
006D4B8E  68 2C E2 7E 00            PUSH 0x7ee22c
006D4B93  51                        PUSH ECX
006D4B94  52                        PUSH EDX
006D4B95  E8 A6 12 FD FF            CALL 0x006a5e40
006D4B9A  33 C0                     XOR EAX,EAX
006D4B9C  5D                        POP EBP
006D4B9D  C2 08 00                  RET 0x8
