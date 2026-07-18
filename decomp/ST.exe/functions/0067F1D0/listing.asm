FUN_0067f1d0:
0067F1D0  6A 0A                     PUSH 0xa
0067F1D2  6A 0A                     PUSH 0xa
0067F1D4  6A 00                     PUSH 0x0
0067F1D6  C7 05 20 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a20],0x0
0067F1E0  C7 05 24 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a24],0x0
0067F1EA  E8 01 63 03 00            CALL 0x006b54f0
0067F1EF  6A 0A                     PUSH 0xa
0067F1F1  6A 0A                     PUSH 0xa
0067F1F3  6A 00                     PUSH 0x0
0067F1F5  A3 1C 8A 84 00            MOV [0x00848a1c],EAX
0067F1FA  E8 F1 62 03 00            CALL 0x006b54f0
0067F1FF  A3 18 8A 84 00            MOV [0x00848a18],EAX
0067F204  A1 34 D7 79 00            MOV EAX,[0x0079d734]
0067F209  6A 00                     PUSH 0x0
0067F20B  50                        PUSH EAX
0067F20C  E8 B8 36 D8 FF            CALL 0x004028c9
0067F211  83 C4 08                  ADD ESP,0x8
0067F214  85 C0                     TEST EAX,EAX
0067F216  75 18                     JNZ 0x0067f230
0067F218  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0067F21E  68 A6 00 00 00            PUSH 0xa6
0067F223  68 D8 55 7D 00            PUSH 0x7d55d8
0067F228  51                        PUSH ECX
0067F229  6A FE                     PUSH -0x2
0067F22B  E8 10 6C 02 00            CALL 0x006a5e40
LAB_0067f230:
0067F230  C3                        RET
