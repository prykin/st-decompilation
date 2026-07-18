FUN_00555880:
00555880  55                        PUSH EBP
00555881  8B EC                     MOV EBP,ESP
00555883  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00555886  56                        PUSH ESI
00555887  66 8B 71 1C               MOV SI,word ptr [ECX + 0x1c]
0055588B  66 85 F6                  TEST SI,SI
0055588E  7C 44                     JL 0x005558d4
00555890  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
00555897  7D 3B                     JGE 0x005558d4
00555899  66 8B 51 1E               MOV DX,word ptr [ECX + 0x1e]
0055589D  66 85 D2                  TEST DX,DX
005558A0  7C 32                     JL 0x005558d4
005558A2  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005558A9  7D 29                     JGE 0x005558d4
005558AB  66 8B 41 20               MOV AX,word ptr [ECX + 0x20]
005558AF  66 85 C0                  TEST AX,AX
005558B2  7C 20                     JL 0x005558d4
005558B4  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005558BB  7D 17                     JGE 0x005558d4
005558BD  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005558C3  50                        PUSH EAX
005558C4  52                        PUSH EDX
005558C5  56                        PUSH ESI
005558C6  E8 70 F4 EA FF            CALL 0x00404d3b
005558CB  85 C0                     TEST EAX,EAX
005558CD  75 13                     JNZ 0x005558e2
005558CF  5E                        POP ESI
005558D0  5D                        POP EBP
005558D1  C2 04 00                  RET 0x4
LAB_005558d4:
005558D4  66 83 79 20 00            CMP word ptr [ECX + 0x20],0x0
005558D9  7D 07                     JGE 0x005558e2
005558DB  33 C0                     XOR EAX,EAX
005558DD  5E                        POP ESI
005558DE  5D                        POP EBP
005558DF  C2 04 00                  RET 0x4
LAB_005558e2:
005558E2  B8 01 00 00 00            MOV EAX,0x1
005558E7  5E                        POP ESI
005558E8  5D                        POP EBP
005558E9  C2 04 00                  RET 0x4
