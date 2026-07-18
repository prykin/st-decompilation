FUN_005fafb0:
005FAFB0  55                        PUSH EBP
005FAFB1  8B EC                     MOV EBP,ESP
005FAFB3  83 B9 DD 02 00 00 01      CMP dword ptr [ECX + 0x2dd],0x1
005FAFBA  75 16                     JNZ 0x005fafd2
005FAFBC  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005FAFC1  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
005FAFC7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FAFCA  03 D0                     ADD EDX,EAX
005FAFCC  89 91 E1 02 00 00         MOV dword ptr [ECX + 0x2e1],EDX
LAB_005fafd2:
005FAFD2  5D                        POP EBP
005FAFD3  C2 04 00                  RET 0x4
