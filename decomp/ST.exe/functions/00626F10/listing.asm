FUN_00626f10:
00626F10  55                        PUSH EBP
00626F11  8B EC                     MOV EBP,ESP
00626F13  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00626F16  33 C0                     XOR EAX,EAX
00626F18  81 C1 5A FF FF FF         ADD ECX,0xffffff5a
00626F1E  83 F9 17                  CMP ECX,0x17
00626F21  77 2C                     JA 0x00626f4f
00626F23  33 D2                     XOR EDX,EDX
00626F25  8A 91 68 6F 62 00         MOV DL,byte ptr [ECX + 0x626f68]
switchD_00626f2b::switchD:
00626F2B  FF 24 95 54 6F 62 00      JMP dword ptr [EDX*0x4 + 0x626f54]
switchD_00626f2b::caseD_a6:
00626F32  33 C0                     XOR EAX,EAX
00626F34  5D                        POP EBP
00626F35  C2 04 00                  RET 0x4
switchD_00626f2b::caseD_a7:
00626F38  B8 01 00 00 00            MOV EAX,0x1
00626F3D  5D                        POP EBP
00626F3E  C2 04 00                  RET 0x4
switchD_00626f2b::caseD_bd:
00626F41  B8 02 00 00 00            MOV EAX,0x2
00626F46  5D                        POP EBP
00626F47  C2 04 00                  RET 0x4
switchD_00626f2b::caseD_af:
00626F4A  B8 03 00 00 00            MOV EAX,0x3
switchD_00626f2b::caseD_a8:
00626F4F  5D                        POP EBP
00626F50  C2 04 00                  RET 0x4
