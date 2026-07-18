FUN_0067ef20:
0067EF20  55                        PUSH EBP
0067EF21  8B EC                     MOV EBP,ESP
0067EF23  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067EF26  50                        PUSH EAX
0067EF27  E8 06 35 D8 FF            CALL 0x00402432
0067EF2C  83 C4 04                  ADD ESP,0x4
0067EF2F  85 C0                     TEST EAX,EAX
0067EF31  7C 16                     JL 0x0067ef49
0067EF33  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067EF36  85 C9                     TEST ECX,ECX
0067EF38  74 02                     JZ 0x0067ef3c
0067EF3A  89 01                     MOV dword ptr [ECX],EAX
LAB_0067ef3c:
0067EF3C  50                        PUSH EAX
0067EF3D  E8 00 57 D8 FF            CALL 0x00404642
0067EF42  83 C4 04                  ADD ESP,0x4
0067EF45  5D                        POP EBP
0067EF46  C2 08 00                  RET 0x8
LAB_0067ef49:
0067EF49  33 C0                     XOR EAX,EAX
0067EF4B  5D                        POP EBP
0067EF4C  C2 08 00                  RET 0x8
