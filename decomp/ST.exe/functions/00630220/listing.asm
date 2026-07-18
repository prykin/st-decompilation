FUN_00630220:
00630220  55                        PUSH EBP
00630221  8B EC                     MOV EBP,ESP
00630223  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00630226  8B 84 81 E5 01 00 00      MOV EAX,dword ptr [ECX + EAX*0x4 + 0x1e5]
0063022D  85 C0                     TEST EAX,EAX
0063022F  74 16                     JZ 0x00630247
00630231  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00630234  83 F8 03                  CMP EAX,0x3
00630237  74 05                     JZ 0x0063023e
00630239  83 F8 06                  CMP EAX,0x6
0063023C  75 09                     JNZ 0x00630247
LAB_0063023e:
0063023E  B8 01 00 00 00            MOV EAX,0x1
00630243  5D                        POP EBP
00630244  C2 04 00                  RET 0x4
LAB_00630247:
00630247  33 C0                     XOR EAX,EAX
00630249  5D                        POP EBP
0063024A  C2 04 00                  RET 0x4
