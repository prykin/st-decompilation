FUN_00696050:
00696050  55                        PUSH EBP
00696051  8B EC                     MOV EBP,ESP
00696053  8B 81 53 58 00 00         MOV EAX,dword ptr [ECX + 0x5853]
00696059  56                        PUSH ESI
0069605A  85 C0                     TEST EAX,EAX
0069605C  74 3F                     JZ 0x0069609d
0069605E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00696061  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00696064  3B CA                     CMP ECX,EDX
00696066  73 35                     JNC 0x0069609d
00696068  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0069606B  0F AF F1                  IMUL ESI,ECX
0069606E  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
00696071  85 F6                     TEST ESI,ESI
00696073  74 28                     JZ 0x0069609d
00696075  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
00696078  85 C0                     TEST EAX,EAX
0069607A  74 0D                     JZ 0x00696089
0069607C  50                        PUSH EAX
0069607D  E8 8E 80 01 00            CALL 0x006ae110
00696082  C7 46 15 00 00 00 00      MOV dword ptr [ESI + 0x15],0x0
LAB_00696089:
00696089  8B 46 19                  MOV EAX,dword ptr [ESI + 0x19]
0069608C  85 C0                     TEST EAX,EAX
0069608E  74 0D                     JZ 0x0069609d
00696090  50                        PUSH EAX
00696091  E8 7A 80 01 00            CALL 0x006ae110
00696096  C7 46 19 00 00 00 00      MOV dword ptr [ESI + 0x19],0x0
LAB_0069609d:
0069609D  5E                        POP ESI
0069609E  5D                        POP EBP
0069609F  C2 04 00                  RET 0x4
