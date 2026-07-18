FUN_0062dd00:
0062DD00  55                        PUSH EBP
0062DD01  8B EC                     MOV EBP,ESP
0062DD03  56                        PUSH ESI
0062DD04  57                        PUSH EDI
0062DD05  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0062DD08  8B F1                     MOV ESI,ECX
0062DD0A  8B 44 BE 50               MOV EAX,dword ptr [ESI + EDI*0x4 + 0x50]
0062DD0E  85 C0                     TEST EAX,EAX
0062DD10  74 0E                     JZ 0x0062dd20
0062DD12  50                        PUSH EAX
0062DD13  E8 F8 03 08 00            CALL 0x006ae110
0062DD18  C7 44 BE 50 00 00 00 00   MOV dword ptr [ESI + EDI*0x4 + 0x50],0x0
LAB_0062dd20:
0062DD20  5F                        POP EDI
0062DD21  5E                        POP ESI
0062DD22  5D                        POP EBP
0062DD23  C2 04 00                  RET 0x4
