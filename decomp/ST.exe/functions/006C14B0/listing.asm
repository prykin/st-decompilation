FUN_006c14b0:
006C14B0  55                        PUSH EBP
006C14B1  8B EC                     MOV EBP,ESP
006C14B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C14B6  50                        PUSH EAX
006C14B7  68 D0 13 6C 00            PUSH 0x6c13d0
006C14BC  E8 E5 C1 06 00            CALL 0x0072d6a6
006C14C1  85 C0                     TEST EAX,EAX
006C14C3  74 1E                     JZ 0x006c14e3
006C14C5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C14CB  68 0E 04 00 00            PUSH 0x40e
006C14D0  68 14 DE 7E 00            PUSH 0x7ede14
006C14D5  51                        PUSH ECX
006C14D6  50                        PUSH EAX
006C14D7  E8 64 49 FE FF            CALL 0x006a5e40
006C14DC  83 C8 FF                  OR EAX,0xffffffff
006C14DF  5D                        POP EBP
006C14E0  C2 04 00                  RET 0x4
LAB_006c14e3:
006C14E3  33 C0                     XOR EAX,EAX
006C14E5  5D                        POP EBP
006C14E6  C2 04 00                  RET 0x4
