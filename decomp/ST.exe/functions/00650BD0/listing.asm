FUN_00650bd0:
00650BD0  55                        PUSH EBP
00650BD1  8B EC                     MOV EBP,ESP
00650BD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00650BD6  56                        PUSH ESI
00650BD7  33 C9                     XOR ECX,ECX
00650BD9  BA 08 00 00 00            MOV EDX,0x8
LAB_00650bde:
00650BDE  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00650BE5  0F 85 BA 00 00 00         JNZ 0x00650ca5
00650BEB  41                        INC ECX
00650BEC  83 F9 03                  CMP ECX,0x3
00650BEF  7C ED                     JL 0x00650bde
00650BF1  66 8B 08                  MOV CX,word ptr [EAX]
00650BF4  83 CE FF                  OR ESI,0xffffffff
00650BF7  66 83 F9 04               CMP CX,0x4
00650BFB  7D 12                     JGE 0x00650c0f
00650BFD  89 70 14                  MOV dword ptr [EAX + 0x14],ESI
LAB_00650c00:
00650C00  66 83 F9 05               CMP CX,0x5
00650C04  7D 16                     JGE 0x00650c1c
00650C06  C7 40 18 00 00 00 00      MOV dword ptr [EAX + 0x18],0x0
00650C0D  EB 1A                     JMP 0x00650c29
LAB_00650c0f:
00650C0F  38 90 D3 00 00 00         CMP byte ptr [EAX + 0xd3],DL
00650C15  74 E9                     JZ 0x00650c00
00650C17  5E                        POP ESI
00650C18  33 C0                     XOR EAX,EAX
00650C1A  5D                        POP EBP
00650C1B  C3                        RET
LAB_00650c1c:
00650C1C  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
00650C22  74 05                     JZ 0x00650c29
00650C24  5E                        POP ESI
00650C25  33 C0                     XOR EAX,EAX
00650C27  5D                        POP EBP
00650C28  C3                        RET
LAB_00650c29:
00650C29  66 83 F9 06               CMP CX,0x6
00650C2D  7D 16                     JGE 0x00650c45
00650C2F  C7 40 1C 00 00 00 00      MOV dword ptr [EAX + 0x1c],0x0
LAB_00650c36:
00650C36  66 83 F9 07               CMP CX,0x7
00650C3A  7D 16                     JGE 0x00650c52
00650C3C  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
00650C43  EB 1A                     JMP 0x00650c5f
LAB_00650c45:
00650C45  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
00650C4B  74 E9                     JZ 0x00650c36
00650C4D  5E                        POP ESI
00650C4E  33 C0                     XOR EAX,EAX
00650C50  5D                        POP EBP
00650C51  C3                        RET
LAB_00650c52:
00650C52  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
00650C58  74 05                     JZ 0x00650c5f
00650C5A  5E                        POP ESI
00650C5B  33 C0                     XOR EAX,EAX
00650C5D  5D                        POP EBP
00650C5E  C3                        RET
LAB_00650c5f:
00650C5F  66 3B CA                  CMP CX,DX
00650C62  7D 0E                     JGE 0x00650c72
00650C64  89 70 24                  MOV dword ptr [EAX + 0x24],ESI
LAB_00650c67:
00650C67  66 83 F9 09               CMP CX,0x9
00650C6B  7D 12                     JGE 0x00650c7f
00650C6D  89 70 28                  MOV dword ptr [EAX + 0x28],ESI
00650C70  EB 1A                     JMP 0x00650c8c
LAB_00650c72:
00650C72  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
00650C78  74 ED                     JZ 0x00650c67
00650C7A  5E                        POP ESI
00650C7B  33 C0                     XOR EAX,EAX
00650C7D  5D                        POP EBP
00650C7E  C3                        RET
LAB_00650c7f:
00650C7F  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
00650C85  74 05                     JZ 0x00650c8c
00650C87  5E                        POP ESI
00650C88  33 C0                     XOR EAX,EAX
00650C8A  5D                        POP EBP
00650C8B  C3                        RET
LAB_00650c8c:
00650C8C  66 83 F9 0A               CMP CX,0xa
00650C90  7D 0B                     JGE 0x00650c9d
00650C92  89 70 2C                  MOV dword ptr [EAX + 0x2c],ESI
LAB_00650c95:
00650C95  5E                        POP ESI
00650C96  B8 01 00 00 00            MOV EAX,0x1
00650C9B  5D                        POP EBP
00650C9C  C3                        RET
LAB_00650c9d:
00650C9D  38 90 D9 00 00 00         CMP byte ptr [EAX + 0xd9],DL
00650CA3  74 F0                     JZ 0x00650c95
LAB_00650ca5:
00650CA5  5E                        POP ESI
00650CA6  33 C0                     XOR EAX,EAX
00650CA8  5D                        POP EBP
00650CA9  C3                        RET
