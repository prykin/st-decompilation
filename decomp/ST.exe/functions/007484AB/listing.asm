FUN_007484ab:
007484AB  8B 81 9C 00 00 00         MOV EAX,dword ptr [ECX + 0x9c]
007484B1  85 C0                     TEST EAX,EAX
007484B3  75 07                     JNZ 0x007484bc
007484B5  B8 09 02 04 80            MOV EAX,0x80040209
007484BA  EB 0A                     JMP 0x007484c6
LAB_007484bc:
007484BC  FF 74 24 04               PUSH dword ptr [ESP + 0x4]
007484C0  8B 08                     MOV ECX,dword ptr [EAX]
007484C2  50                        PUSH EAX
007484C3  FF 51 18                  CALL dword ptr [ECX + 0x18]
LAB_007484c6:
007484C6  C2 04 00                  RET 0x4
