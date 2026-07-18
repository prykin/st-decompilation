FUN_00553390:
00553390  55                        PUSH EBP
00553391  8B EC                     MOV EBP,ESP
00553393  56                        PUSH ESI
00553394  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00553397  85 F6                     TEST ESI,ESI
00553399  57                        PUSH EDI
0055339A  74 44                     JZ 0x005533e0
0055339C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055339F  85 C9                     TEST ECX,ECX
005533A1  7C 3D                     JL 0x005533e0
005533A3  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
005533A6  3B CF                     CMP ECX,EDI
005533A8  7D 36                     JGE 0x005533e0
005533AA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005533AD  85 C0                     TEST EAX,EAX
005533AF  7C 2F                     JL 0x005533e0
005533B1  3B 45 18                  CMP EAX,dword ptr [EBP + 0x18]
005533B4  7D 2A                     JGE 0x005533e0
005533B6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005533B9  85 D2                     TEST EDX,EDX
005533BB  7C 23                     JL 0x005533e0
005533BD  83 FA 0F                  CMP EDX,0xf
005533C0  7F 1E                     JG 0x005533e0
005533C2  53                        PUSH EBX
005533C3  8B D8                     MOV EBX,EAX
005533C5  0F AF DF                  IMUL EBX,EDI
005533C8  03 D9                     ADD EBX,ECX
005533CA  88 14 33                  MOV byte ptr [EBX + ESI*0x1],DL
005533CD  8B 15 50 2A 80 00         MOV EDX,dword ptr [0x00802a50]
005533D3  85 D2                     TEST EDX,EDX
005533D5  5B                        POP EBX
005533D6  74 08                     JZ 0x005533e0
005533D8  56                        PUSH ESI
005533D9  50                        PUSH EAX
005533DA  51                        PUSH ECX
005533DB  FF D2                     CALL EDX
005533DD  83 C4 0C                  ADD ESP,0xc
LAB_005533e0:
005533E0  5F                        POP EDI
005533E1  5E                        POP ESI
005533E2  5D                        POP EBP
005533E3  C3                        RET
