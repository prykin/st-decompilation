FUN_006b69b0:
006B69B0  55                        PUSH EBP
006B69B1  8B EC                     MOV EBP,ESP
006B69B3  83 EC 44                  SUB ESP,0x44
006B69B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006B69BB  56                        PUSH ESI
006B69BC  57                        PUSH EDI
006B69BD  8D 55 C0                  LEA EDX,[EBP + -0x40]
006B69C0  8D 4D BC                  LEA ECX,[EBP + -0x44]
006B69C3  6A 00                     PUSH 0x0
006B69C5  52                        PUSH EDX
006B69C6  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006B69C9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B69CF  E8 1C 6E 07 00            CALL 0x0072d7f0
006B69D4  8B F0                     MOV ESI,EAX
006B69D6  83 C4 08                  ADD ESP,0x8
006B69D9  85 F6                     TEST ESI,ESI
006B69DB  75 39                     JNZ 0x006b6a16
006B69DD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B69E0  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B69E3  50                        PUSH EAX
006B69E4  68 98 EC 79 00            PUSH 0x79ec98
006B69E9  56                        PUSH ESI
006B69EA  E8 61 F9 FF FF            CALL 0x006b6350
006B69EF  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B69F2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B69F5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B69F8  51                        PUSH ECX
006B69F9  8B 0E                     MOV ECX,dword ptr [ESI]
006B69FB  52                        PUSH EDX
006B69FC  50                        PUSH EAX
006B69FD  51                        PUSH ECX
006B69FE  E8 4D FD FF FF            CALL 0x006b6750
006B6A03  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006B6A06  33 C0                     XOR EAX,EAX
006B6A08  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B6A0E  5F                        POP EDI
006B6A0F  5E                        POP ESI
006B6A10  8B E5                     MOV ESP,EBP
006B6A12  5D                        POP EBP
006B6A13  C2 14 00                  RET 0x14
LAB_006b6a16:
006B6A16  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006B6A19  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B6A1C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006B6A21  8B 0F                     MOV ECX,dword ptr [EDI]
006B6A23  51                        PUSH ECX
006B6A24  E8 17 0D 00 00            CALL 0x006b7740
006B6A29  68 50 02 00 00            PUSH 0x250
006B6A2E  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6A33  6A 00                     PUSH 0x0
006B6A35  56                        PUSH ESI
006B6A36  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
006B6A3C  E8 FF F3 FE FF            CALL 0x006a5e40
006B6A41  8B C6                     MOV EAX,ESI
006B6A43  5F                        POP EDI
006B6A44  5E                        POP ESI
006B6A45  8B E5                     MOV ESP,EBP
006B6A47  5D                        POP EBP
006B6A48  C2 14 00                  RET 0x14
