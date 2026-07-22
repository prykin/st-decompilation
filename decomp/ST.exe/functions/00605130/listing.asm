STExplosion::sub_00605130:
00605130  8B 91 F1 01 00 00         MOV EDX,dword ptr [ECX + 0x1f1]
00605136  33 C0                     XOR EAX,EAX
00605138  89 91 8A 02 00 00         MOV dword ptr [ECX + 0x28a],EDX
0060513E  8B 91 F5 01 00 00         MOV EDX,dword ptr [ECX + 0x1f5]
00605144  89 91 8E 02 00 00         MOV dword ptr [ECX + 0x28e],EDX
0060514A  8B 91 F9 01 00 00         MOV EDX,dword ptr [ECX + 0x1f9]
00605150  89 81 82 02 00 00         MOV dword ptr [ECX + 0x282],EAX
00605156  89 81 86 02 00 00         MOV dword ptr [ECX + 0x286],EAX
0060515C  89 91 92 02 00 00         MOV dword ptr [ECX + 0x292],EDX
00605162  89 81 96 02 00 00         MOV dword ptr [ECX + 0x296],EAX
00605168  8B 15 44 EE 7C 00         MOV EDX,dword ptr [0x007cee44]
0060516E  89 91 9A 02 00 00         MOV dword ptr [ECX + 0x29a],EDX
00605174  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0060517A  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
00605180  89 81 AB 02 00 00         MOV dword ptr [ECX + 0x2ab],EAX
00605186  89 91 A7 02 00 00         MOV dword ptr [ECX + 0x2a7],EDX
0060518C  C3                        RET
