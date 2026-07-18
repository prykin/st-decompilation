FUN_00759120:
00759120  55                        PUSH EBP
00759121  8B EC                     MOV EBP,ESP
00759123  56                        PUSH ESI
00759124  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00759127  8B 86 8E 01 00 00         MOV EAX,dword ptr [ESI + 0x18e]
0075912D  85 C0                     TEST EAX,EAX
0075912F  75 0F                     JNZ 0x00759140
00759131  56                        PUSH ESI
00759132  E8 59 EC FF FF            CALL 0x00757d90
00759137  85 C0                     TEST EAX,EAX
00759139  75 05                     JNZ 0x00759140
0075913B  5E                        POP ESI
0075913C  5D                        POP EBP
0075913D  C2 04 00                  RET 0x4
LAB_00759140:
00759140  8B 86 A6 01 00 00         MOV EAX,dword ptr [ESI + 0x1a6]
00759146  8B 96 8E 01 00 00         MOV EDX,dword ptr [ESI + 0x18e]
0075914C  8B 40 58                  MOV EAX,dword ptr [EAX + 0x58]
0075914F  8D 88 D0 00 00 00         LEA ECX,[EAX + 0xd0]
00759155  3B D1                     CMP EDX,ECX
00759157  75 24                     JNZ 0x0075917d
00759159  C7 86 8E 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x18e],0x0
LAB_00759163:
00759163  8B B6 A6 01 00 00         MOV ESI,dword ptr [ESI + 0x1a6]
00759169  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
0075916C  40                        INC EAX
0075916D  83 E0 07                  AND EAX,0x7
00759170  89 46 58                  MOV dword ptr [ESI + 0x58],EAX
00759173  B8 01 00 00 00            MOV EAX,0x1
00759178  5E                        POP ESI
00759179  5D                        POP EBP
0075917A  C2 04 00                  RET 0x4
LAB_0075917d:
0075917D  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
00759180  50                        PUSH EAX
00759181  56                        PUSH ESI
00759182  FF 52 14                  CALL dword ptr [EDX + 0x14]
00759185  85 C0                     TEST EAX,EAX
00759187  75 DA                     JNZ 0x00759163
00759189  5E                        POP ESI
0075918A  5D                        POP EBP
0075918B  C2 04 00                  RET 0x4
