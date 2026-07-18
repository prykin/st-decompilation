FUN_00492510:
00492510  55                        PUSH EBP
00492511  8B EC                     MOV EBP,ESP
00492513  8B 81 CA 07 00 00         MOV EAX,dword ptr [ECX + 0x7ca]
00492519  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0049251C  3B C2                     CMP EAX,EDX
0049251E  75 12                     JNZ 0x00492532
00492520  33 C0                     XOR EAX,EAX
00492522  89 81 CA 07 00 00         MOV dword ptr [ECX + 0x7ca],EAX
00492528  89 81 C6 07 00 00         MOV dword ptr [ECX + 0x7c6],EAX
0049252E  5D                        POP EBP
0049252F  C2 04 00                  RET 0x4
LAB_00492532:
00492532  E8 93 02 F7 FF            CALL 0x004027ca
00492537  5D                        POP EBP
00492538  C2 04 00                  RET 0x4
