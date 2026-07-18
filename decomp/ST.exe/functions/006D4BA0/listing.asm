FUN_006d4ba0:
006D4BA0  55                        PUSH EBP
006D4BA1  8B EC                     MOV EBP,ESP
006D4BA3  53                        PUSH EBX
006D4BA4  56                        PUSH ESI
006D4BA5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D4BA8  57                        PUSH EDI
006D4BA9  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006D4BAC  A9 00 00 10 00            TEST EAX,0x100000
006D4BB1  74 1E                     JZ 0x006d4bd1
006D4BB3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D4BB8  68 EC 01 00 00            PUSH 0x1ec
006D4BBD  68 2C E2 7E 00            PUSH 0x7ee22c
006D4BC2  50                        PUSH EAX
006D4BC3  6A D0                     PUSH -0x30
006D4BC5  E8 76 12 FD FF            CALL 0x006a5e40
006D4BCA  5F                        POP EDI
006D4BCB  5E                        POP ESI
006D4BCC  5B                        POP EBX
006D4BCD  5D                        POP EBP
006D4BCE  C2 0C 00                  RET 0xc
LAB_006d4bd1:
006D4BD1  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006D4BD4  BF AF FF FF FF            MOV EDI,0xffffffaf
006D4BD9  85 C9                     TEST ECX,ECX
006D4BDB  74 53                     JZ 0x006d4c30
006D4BDD  A9 00 00 80 00            TEST EAX,0x800000
006D4BE2  74 43                     JZ 0x006d4c27
006D4BE4  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006D4BE7  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006D4BEA  8D 43 04                  LEA EAX,[EBX + 0x4]
006D4BED  3B C1                     CMP EAX,ECX
006D4BEF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D4BF2  76 20                     JBE 0x006d4c14
006D4BF4  8B C3                     MOV EAX,EBX
006D4BF6  2B C1                     SUB EAX,ECX
006D4BF8  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
006D4BFB  83 C0 04                  ADD EAX,0x4
006D4BFE  3B C1                     CMP EAX,ECX
006D4C00  73 02                     JNC 0x006d4c04
006D4C02  8B C1                     MOV EAX,ECX
LAB_006d4c04:
006D4C04  50                        PUSH EAX
006D4C05  56                        PUSH ESI
006D4C06  E8 35 FB FF FF            CALL 0x006d4740
006D4C0B  8B F8                     MOV EDI,EAX
006D4C0D  85 FF                     TEST EDI,EDI
006D4C0F  75 1F                     JNZ 0x006d4c30
006D4C11  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006d4c14:
006D4C14  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006D4C17  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D4C1A  89 14 19                  MOV dword ptr [ECX + EBX*0x1],EDX
006D4C1D  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006D4C20  3B C8                     CMP ECX,EAX
006D4C22  73 03                     JNC 0x006d4c27
006D4C24  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
LAB_006d4c27:
006D4C27  5F                        POP EDI
006D4C28  5E                        POP ESI
006D4C29  33 C0                     XOR EAX,EAX
006D4C2B  5B                        POP EBX
006D4C2C  5D                        POP EBP
006D4C2D  C2 0C 00                  RET 0xc
LAB_006d4c30:
006D4C30  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D4C35  68 03 02 00 00            PUSH 0x203
006D4C3A  68 2C E2 7E 00            PUSH 0x7ee22c
006D4C3F  50                        PUSH EAX
006D4C40  57                        PUSH EDI
006D4C41  E8 FA 11 FD FF            CALL 0x006a5e40
006D4C46  8B C7                     MOV EAX,EDI
006D4C48  5F                        POP EDI
006D4C49  5E                        POP ESI
006D4C4A  5B                        POP EBX
006D4C4B  5D                        POP EBP
006D4C4C  C2 0C 00                  RET 0xc
