FUN_0074c115:
0074C115  55                        PUSH EBP
0074C116  8B EC                     MOV EBP,ESP
0074C118  51                        PUSH ECX
0074C119  53                        PUSH EBX
0074C11A  56                        PUSH ESI
0074C11B  8B F1                     MOV ESI,ECX
0074C11D  57                        PUSH EDI
0074C11E  8B 86 8C 00 00 00         MOV EAX,dword ptr [ESI + 0x8c]
0074C124  83 B8 C8 00 00 00 00      CMP dword ptr [EAX + 0xc8],0x0
0074C12B  74 17                     JZ 0x0074c144
0074C12D  8B 86 90 00 00 00         MOV EAX,dword ptr [ESI + 0x90]
0074C133  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074C136  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
0074C13C  50                        PUSH EAX
0074C13D  8B 08                     MOV ECX,dword ptr [EAX]
0074C13F  FF 51 18                  CALL dword ptr [ECX + 0x18]
0074C142  EB 4D                     JMP 0x0074c191
LAB_0074c144:
0074C144  8D 45 FC                  LEA EAX,[EBP + -0x4]
0074C147  8B CE                     MOV ECX,ESI
0074C149  50                        PUSH EAX
0074C14A  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074C14D  E8 6D FE FF FF            CALL 0x0074bfbf
0074C152  85 C0                     TEST EAX,EAX
0074C154  7C 3B                     JL 0x0074c191
0074C156  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0074C159  8B 06                     MOV EAX,dword ptr [ESI]
0074C15B  8B CE                     MOV ECX,ESI
0074C15D  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074C160  FF 50 24                  CALL dword ptr [EAX + 0x24]
0074C163  8B D8                     MOV EBX,EAX
0074C165  85 DB                     TEST EBX,EBX
0074C167  7C 1D                     JL 0x0074c186
0074C169  75 2D                     JNZ 0x0074c198
0074C16B  8B 86 90 00 00 00         MOV EAX,dword ptr [ESI + 0x90]
0074C171  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0074C174  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
0074C17A  50                        PUSH EAX
0074C17B  8B 08                     MOV ECX,dword ptr [EAX]
0074C17D  FF 51 18                  CALL dword ptr [ECX + 0x18]
0074C180  83 66 54 00               AND dword ptr [ESI + 0x54],0x0
0074C184  8B D8                     MOV EBX,EAX
LAB_0074c186:
0074C186  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074C189  50                        PUSH EAX
0074C18A  8B 08                     MOV ECX,dword ptr [EAX]
0074C18C  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074C18F  8B C3                     MOV EAX,EBX
LAB_0074c191:
0074C191  5F                        POP EDI
0074C192  5E                        POP ESI
0074C193  5B                        POP EBX
0074C194  C9                        LEAVE
0074C195  C2 04 00                  RET 0x4
LAB_0074c198:
0074C198  6A 01                     PUSH 0x1
0074C19A  5F                        POP EDI
0074C19B  3B DF                     CMP EBX,EDI
0074C19D  75 E7                     JNZ 0x0074c186
0074C19F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074C1A2  50                        PUSH EAX
0074C1A3  8B 08                     MOV ECX,dword ptr [EAX]
0074C1A5  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074C1A8  33 C0                     XOR EAX,EAX
0074C1AA  89 7E 54                  MOV dword ptr [ESI + 0x54],EDI
0074C1AD  39 46 58                  CMP dword ptr [ESI + 0x58],EAX
0074C1B0  75 0E                     JNZ 0x0074c1c0
0074C1B2  50                        PUSH EAX
0074C1B3  50                        PUSH EAX
0074C1B4  6A 0B                     PUSH 0xb
0074C1B6  8B CE                     MOV ECX,ESI
0074C1B8  E8 49 B2 FF FF            CALL 0x00747406
0074C1BD  89 7E 58                  MOV dword ptr [ESI + 0x58],EDI
LAB_0074c1c0:
0074C1C0  33 C0                     XOR EAX,EAX
0074C1C2  EB CD                     JMP 0x0074c191
