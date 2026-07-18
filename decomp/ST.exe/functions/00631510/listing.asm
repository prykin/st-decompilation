FUN_00631510:
00631510  55                        PUSH EBP
00631511  8B EC                     MOV EBP,ESP
00631513  8B 41 71                  MOV EAX,dword ptr [ECX + 0x71]
00631516  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00631519  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0063151F  05 39 30 00 00            ADD EAX,0x3039
00631524  56                        PUSH ESI
00631525  89 41 71                  MOV dword ptr [ECX + 0x71],EAX
00631528  52                        PUSH EDX
00631529  C1 E8 10                  SHR EAX,0x10
0063152C  33 D2                     XOR EDX,EDX
0063152E  BE 03 00 00 00            MOV ESI,0x3
00631533  F7 F6                     DIV ESI
00631535  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00631538  52                        PUSH EDX
00631539  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0063153C  50                        PUSH EAX
0063153D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00631540  52                        PUSH EDX
00631541  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00631544  50                        PUSH EAX
00631545  52                        PUSH EDX
00631546  E8 DB 24 DD FF            CALL 0x00403a26
0063154B  5E                        POP ESI
0063154C  5D                        POP EBP
0063154D  C2 18 00                  RET 0x18
