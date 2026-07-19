FUN_00749cec:
00749CEC  83 7C 24 04 01            CMP dword ptr [ESP + 0x4],0x1
00749CF1  FF 71 58                  PUSH dword ptr [ECX + 0x58]
00749CF4  75 08                     JNZ 0x00749cfe
00749CF6  FF 15 98 BC 85 00         CALL dword ptr [0x0085bc98]
00749CFC  EB 06                     JMP 0x00749d04
LAB_00749cfe:
00749CFE  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
LAB_00749d04:
00749D04  33 C0                     XOR EAX,EAX
00749D06  C2 04 00                  RET 0x4
