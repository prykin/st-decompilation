FUN_004c5de0:
004C5DE0  C7 81 D0 04 00 00 00 00 00 00  MOV dword ptr [ECX + 0x4d0],0x0
004C5DEA  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C5DEF  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
004C5DF5  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
004C5DFB  83 C2 7D                  ADD EDX,0x7d
004C5DFE  83 F8 01                  CMP EAX,0x1
004C5E01  89 91 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EDX
004C5E07  74 05                     JZ 0x004c5e0e
004C5E09  83 F8 03                  CMP EAX,0x3
004C5E0C  75 05                     JNZ 0x004c5e13
LAB_004c5e0e:
004C5E0E  E8 7A F7 F3 FF            CALL 0x0040558d
LAB_004c5e13:
004C5E13  33 C0                     XOR EAX,EAX
004C5E15  C3                        RET
