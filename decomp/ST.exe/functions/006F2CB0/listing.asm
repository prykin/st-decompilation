FUN_006f2cb0:
006F2CB0  55                        PUSH EBP
006F2CB1  8B EC                     MOV EBP,ESP
006F2CB3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F2CB6  56                        PUSH ESI
006F2CB7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F2CBA  50                        PUSH EAX
006F2CBB  56                        PUSH ESI
006F2CBC  E8 CF D8 03 00            CALL 0x00730590
006F2CC1  83 C4 08                  ADD ESP,0x8
006F2CC4  85 C0                     TEST EAX,EAX
006F2CC6  75 06                     JNZ 0x006f2cce
006F2CC8  83 C8 FF                  OR EAX,0xffffffff
006F2CCB  5E                        POP ESI
006F2CCC  5D                        POP EBP
006F2CCD  C3                        RET
LAB_006f2cce:
006F2CCE  33 C9                     XOR ECX,ECX
006F2CD0  3B C6                     CMP EAX,ESI
006F2CD2  0F 95 C1                  SETNZ CL
006F2CD5  8B C1                     MOV EAX,ECX
006F2CD7  5E                        POP ESI
006F2CD8  5D                        POP EBP
006F2CD9  C3                        RET
