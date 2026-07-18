FUN_00746f77:
00746F77  56                        PUSH ESI
00746F78  8B F1                     MOV ESI,ECX
00746F7A  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00746F7D  85 C0                     TEST EAX,EAX
00746F7F  74 07                     JZ 0x00746f88
00746F81  50                        PUSH EAX
00746F82  E8 29 73 FE FF            CALL 0x0072e2b0
00746F87  59                        POP ECX
LAB_00746f88:
00746F88  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00746F8B  85 C0                     TEST EAX,EAX
00746F8D  74 0A                     JZ 0x00746f99
00746F8F  8B 08                     MOV ECX,dword ptr [EAX]
00746F91  50                        PUSH EAX
00746F92  FF 51 08                  CALL dword ptr [ECX + 0x8]
00746F95  83 66 18 00               AND dword ptr [ESI + 0x18],0x0
LAB_00746f99:
00746F99  8B CE                     MOV ECX,ESI
00746F9B  83 C6 04                  ADD ESI,0x4
00746F9E  F7 D9                     NEG ECX
00746FA0  1B C9                     SBB ECX,ECX
00746FA2  23 CE                     AND ECX,ESI
00746FA4  E8 CE 47 00 00            CALL 0x0074b777
00746FA9  5E                        POP ESI
00746FAA  C3                        RET
