FUN_0070ce00:
0070CE00  55                        PUSH EBP
0070CE01  8B EC                     MOV EBP,ESP
0070CE03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070CE06  56                        PUSH ESI
0070CE07  80 38 00                  CMP byte ptr [EAX],0x0
0070CE0A  74 21                     JZ 0x0070ce2d
0070CE0C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0070CE0F  80 3E 00                  CMP byte ptr [ESI],0x0
0070CE12  74 19                     JZ 0x0070ce2d
0070CE14  53                        PUSH EBX
0070CE15  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0070CE18  56                        PUSH ESI
0070CE19  50                        PUSH EAX
0070CE1A  C6 46 01 00               MOV byte ptr [ESI + 0x1],0x0
0070CE1E  E8 6D 37 02 00            CALL 0x00730590
0070CE23  83 C4 08                  ADD ESP,0x8
0070CE26  88 5E 01                  MOV byte ptr [ESI + 0x1],BL
0070CE29  5B                        POP EBX
0070CE2A  5E                        POP ESI
0070CE2B  5D                        POP EBP
0070CE2C  C3                        RET
LAB_0070ce2d:
0070CE2D  33 C0                     XOR EAX,EAX
0070CE2F  5E                        POP ESI
0070CE30  5D                        POP EBP
0070CE31  C3                        RET
