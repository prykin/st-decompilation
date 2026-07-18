FUN_007318a0:
007318A0  55                        PUSH EBP
007318A1  8B EC                     MOV EBP,ESP
007318A3  51                        PUSH ECX
007318A4  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
007318A8  75 02                     JNZ 0x007318ac
007318AA  EB 3A                     JMP 0x007318e6
LAB_007318ac:
007318AC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007318AF  50                        PUSH EAX
007318B0  E8 2B 02 00 00            CALL 0x00731ae0
007318B5  83 C4 04                  ADD ESP,0x4
007318B8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007318BB  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
007318BF  74 12                     JZ 0x007318d3
007318C1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007318C4  51                        PUSH ECX
007318C5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007318C8  52                        PUSH EDX
007318C9  E8 D2 02 00 00            CALL 0x00731ba0
007318CE  83 C4 08                  ADD ESP,0x8
007318D1  EB 13                     JMP 0x007318e6
LAB_007318d3:
007318D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007318D6  50                        PUSH EAX
007318D7  6A 00                     PUSH 0x0
007318D9  8B 0D C4 A5 85 00         MOV ECX,dword ptr [0x0085a5c4]
007318DF  51                        PUSH ECX
007318E0  FF 15 D4 BB 85 00         CALL dword ptr [0x0085bbd4]
LAB_007318e6:
007318E6  8B E5                     MOV ESP,EBP
007318E8  5D                        POP EBP
007318E9  C3                        RET
