FUN_005f0470:
005F0470  55                        PUSH EBP
005F0471  8B EC                     MOV EBP,ESP
005F0473  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005F0476  33 C0                     XOR EAX,EAX
005F0478  83 FA 1B                  CMP EDX,0x1b
005F047B  74 0A                     JZ 0x005f0487
005F047D  83 FA 07                  CMP EDX,0x7
005F0480  74 05                     JZ 0x005f0487
005F0482  83 FA 13                  CMP EDX,0x13
005F0485  75 0E                     JNZ 0x005f0495
LAB_005f0487:
005F0487  83 B9 3A 02 00 00 01      CMP dword ptr [ECX + 0x23a],0x1
005F048E  75 05                     JNZ 0x005f0495
005F0490  B8 01 00 00 00            MOV EAX,0x1
LAB_005f0495:
005F0495  5D                        POP EBP
005F0496  C2 04 00                  RET 0x4
