FUN_00725680:
00725680  55                        PUSH EBP
00725681  8B EC                     MOV EBP,ESP
00725683  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00725686  83 38 00                  CMP dword ptr [EAX],0x0
00725689  74 06                     JZ 0x00725691
0072568B  50                        PUSH EAX
0072568C  E8 CF 59 F8 FF            CALL 0x006ab060
LAB_00725691:
00725691  5D                        POP EBP
00725692  C3                        RET
