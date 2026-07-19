STBoatC::CancelLoading:
00492280  55                        PUSH EBP
00492281  8B EC                     MOV EBP,ESP
00492283  8B 81 5D 04 00 00         MOV EAX,dword ptr [ECX + 0x45d]
00492289  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0049228C  83 F8 0F                  CMP EAX,0xf
0049228F  74 05                     JZ 0x00492296
00492291  83 F8 0E                  CMP EAX,0xe
00492294  75 29                     JNZ 0x004922bf
LAB_00492296:
00492296  39 91 8E 05 00 00         CMP dword ptr [ECX + 0x58e],EDX
0049229C  75 21                     JNZ 0x004922bf
0049229E  83 B9 96 05 00 00 02      CMP dword ptr [ECX + 0x596],0x2
004922A5  75 18                     JNZ 0x004922bf
004922A7  C7 81 96 05 00 00 01 00 00 00  MOV dword ptr [ECX + 0x596],0x1
004922B1  C7 81 92 05 00 00 00 00 00 00  MOV dword ptr [ECX + 0x592],0x0
004922BB  5D                        POP EBP
004922BC  C2 04 00                  RET 0x4
LAB_004922bf:
004922BF  83 F8 0F                  CMP EAX,0xf
004922C2  74 05                     JZ 0x004922c9
004922C4  83 F8 0E                  CMP EAX,0xe
004922C7  75 4B                     JNZ 0x00492314
LAB_004922c9:
004922C9  39 91 8E 05 00 00         CMP dword ptr [ECX + 0x58e],EDX
004922CF  75 43                     JNZ 0x00492314
004922D1  83 B9 96 05 00 00 03      CMP dword ptr [ECX + 0x596],0x3
004922D8  75 3A                     JNZ 0x00492314
004922DA  8B 81 9A 05 00 00         MOV EAX,dword ptr [ECX + 0x59a]
004922E0  85 C0                     TEST EAX,EAX
004922E2  74 22                     JZ 0x00492306
004922E4  83 F8 01                  CMP EAX,0x1
004922E7  74 1D                     JZ 0x00492306
004922E9  83 F8 02                  CMP EAX,0x2
004922EC  74 18                     JZ 0x00492306
004922EE  83 F8 03                  CMP EAX,0x3
004922F1  74 05                     JZ 0x004922f8
004922F3  83 F8 04                  CMP EAX,0x4
004922F6  75 41                     JNZ 0x00492339
LAB_004922f8:
004922F8  C7 81 9A 05 00 00 05 00 00 00  MOV dword ptr [ECX + 0x59a],0x5
00492302  5D                        POP EBP
00492303  C2 04 00                  RET 0x4
LAB_00492306:
00492306  C7 81 9A 05 00 00 09 00 00 00  MOV dword ptr [ECX + 0x59a],0x9
00492310  5D                        POP EBP
00492311  C2 04 00                  RET 0x4
LAB_00492314:
00492314  68 C4 BB 7A 00            PUSH 0x7abbc4
00492319  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049231E  6A 00                     PUSH 0x0
00492320  6A 00                     PUSH 0x0
00492322  68 F0 50 00 00            PUSH 0x50f0
00492327  68 3C 9D 7A 00            PUSH 0x7a9d3c
0049232C  E8 9F B1 21 00            CALL 0x006ad4d0
00492331  83 C4 18                  ADD ESP,0x18
00492334  85 C0                     TEST EAX,EAX
00492336  74 01                     JZ 0x00492339
00492338  CC                        INT3
LAB_00492339:
00492339  5D                        POP EBP
0049233A  C2 04 00                  RET 0x4
