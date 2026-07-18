FUN_0072ff00:
0072FF00  55                        PUSH EBP
0072FF01  8B EC                     MOV EBP,ESP
0072FF03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FF06  50                        PUSH EAX
0072FF07  E8 F4 FE FF FF            CALL 0x0072fe00
0072FF0C  83 C4 04                  ADD ESP,0x4
0072FF0F  5D                        POP EBP
0072FF10  C3                        RET
