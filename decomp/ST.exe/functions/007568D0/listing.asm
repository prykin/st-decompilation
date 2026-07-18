FUN_007568d0:
007568D0  55                        PUSH EBP
007568D1  8B EC                     MOV EBP,ESP
007568D3  56                        PUSH ESI
007568D4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007568D7  81 7E 0C CD 00 00 00      CMP dword ptr [ESI + 0xc],0xcd
007568DE  74 17                     JZ 0x007568f7
007568E0  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007568E5  68 A0 00 00 00            PUSH 0xa0
007568EA  68 50 2D 7F 00            PUSH 0x7f2d50
007568EF  50                        PUSH EAX
007568F0  6A 12                     PUSH 0x12
007568F2  E8 49 F5 F4 FF            CALL 0x006a5e40
LAB_007568f7:
007568F7  8B 8E 84 00 00 00         MOV ECX,dword ptr [ESI + 0x84]
007568FD  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00756900  3B C8                     CMP ECX,EAX
00756902  72 07                     JC 0x0075690b
00756904  33 C0                     XOR EAX,EAX
00756906  5E                        POP ESI
00756907  5D                        POP EBP
00756908  C2 0C 00                  RET 0xc
LAB_0075690b:
0075690B  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0075690E  85 C0                     TEST EAX,EAX
00756910  74 12                     JZ 0x00756924
00756912  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00756915  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00756918  8B 56 6C                  MOV EDX,dword ptr [ESI + 0x6c]
0075691B  56                        PUSH ESI
0075691C  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0075691F  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00756922  FF 10                     CALL dword ptr [EAX]
LAB_00756924:
00756924  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00756927  8B 8E 96 01 00 00         MOV ECX,dword ptr [ESI + 0x196]
0075692D  52                        PUSH EDX
0075692E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00756931  8D 45 08                  LEA EAX,[EBP + 0x8]
00756934  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0075693B  50                        PUSH EAX
0075693C  52                        PUSH EDX
0075693D  56                        PUSH ESI
0075693E  FF 51 04                  CALL dword ptr [ECX + 0x4]
00756941  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00756944  8B 8E 84 00 00 00         MOV ECX,dword ptr [ESI + 0x84]
0075694A  03 C8                     ADD ECX,EAX
0075694C  89 8E 84 00 00 00         MOV dword ptr [ESI + 0x84],ECX
00756952  5E                        POP ESI
00756953  5D                        POP EBP
00756954  C2 0C 00                  RET 0xc
