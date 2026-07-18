FUN_00419d30:
00419D30  55                        PUSH EBP
00419D31  8B EC                     MOV EBP,ESP
00419D33  56                        PUSH ESI
00419D34  8B F1                     MOV ESI,ECX
00419D36  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00419D3A  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00419D3D  50                        PUSH EAX
00419D3E  51                        PUSH ECX
00419D3F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00419D45  6A 00                     PUSH 0x0
00419D47  E8 02 AC FE FF            CALL 0x0040494e
00419D4C  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00419D50  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00419D53  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00419D59  52                        PUSH EDX
00419D5A  50                        PUSH EAX
00419D5B  6A 00                     PUSH 0x0
00419D5D  E8 44 7C FE FF            CALL 0x004019a6
00419D62  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00419D65  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00419D69  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
00419D6D  51                        PUSH ECX
00419D6E  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00419D71  56                        PUSH ESI
00419D72  52                        PUSH EDX
00419D73  50                        PUSH EAX
00419D74  51                        PUSH ECX
00419D75  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00419D7B  E8 2E 83 FE FF            CALL 0x004020ae
00419D80  5E                        POP ESI
00419D81  5D                        POP EBP
00419D82  C2 04 00                  RET 0x4
