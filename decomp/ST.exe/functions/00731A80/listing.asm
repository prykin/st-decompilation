FUN_00731a80:
00731A80  55                        PUSH EBP
00731A81  8B EC                     MOV EBP,ESP
00731A83  68 40 01 00 00            PUSH 0x140
00731A88  6A 00                     PUSH 0x0
00731A8A  A1 C4 A5 85 00            MOV EAX,[0x0085a5c4]
00731A8F  50                        PUSH EAX
00731A90  FF 15 A8 BC 85 00         CALL dword ptr [0x0085bca8]
00731A96  A3 C0 A5 85 00            MOV [0x0085a5c0],EAX
00731A9B  83 3D C0 A5 85 00 00      CMP dword ptr [0x0085a5c0],0x0
00731AA2  75 04                     JNZ 0x00731aa8
00731AA4  33 C0                     XOR EAX,EAX
00731AA6  EB 2F                     JMP 0x00731ad7
LAB_00731aa8:
00731AA8  8B 0D C0 A5 85 00         MOV ECX,dword ptr [0x0085a5c0]
00731AAE  89 0D B4 A5 85 00         MOV dword ptr [0x0085a5b4],ECX
00731AB4  C7 05 B8 A5 85 00 00 00 00 00  MOV dword ptr [0x0085a5b8],0x0
00731ABE  C7 05 BC A5 85 00 00 00 00 00  MOV dword ptr [0x0085a5bc],0x0
00731AC8  C7 05 A0 A5 85 00 10 00 00 00  MOV dword ptr [0x0085a5a0],0x10
00731AD2  B8 01 00 00 00            MOV EAX,0x1
LAB_00731ad7:
00731AD7  5D                        POP EBP
00731AD8  C3                        RET
