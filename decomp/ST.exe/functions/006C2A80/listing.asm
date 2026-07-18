FUN_006c2a80:
006C2A80  55                        PUSH EBP
006C2A81  8B EC                     MOV EBP,ESP
006C2A83  56                        PUSH ESI
006C2A84  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C2A87  68 B8 00 00 00            PUSH 0xb8
006C2A8C  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
006C2A92  E8 79 81 FE FF            CALL 0x006aac10
006C2A97  85 C0                     TEST EAX,EAX
006C2A99  75 0A                     JNZ 0x006c2aa5
006C2A9B  B8 FE FF FF FF            MOV EAX,0xfffffffe
006C2AA0  5E                        POP ESI
006C2AA1  5D                        POP EBP
006C2AA2  C2 08 00                  RET 0x8
LAB_006c2aa5:
006C2AA5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C2AA8  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006C2AAB  89 06                     MOV dword ptr [ESI],EAX
006C2AAD  33 C0                     XOR EAX,EAX
006C2AAF  5E                        POP ESI
006C2AB0  5D                        POP EBP
006C2AB1  C2 08 00                  RET 0x8
