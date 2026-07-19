FUN_007484c9:
007484C9  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
007484CC  85 C0                     TEST EAX,EAX
007484CE  75 06                     JNZ 0x007484d6
007484D0  B8 09 02 04 80            MOV EAX,0x80040209
007484D5  C3                        RET
LAB_007484d6:
007484D6  8B 08                     MOV ECX,dword ptr [EAX]
007484D8  50                        PUSH EAX
007484D9  FF 51 38                  CALL dword ptr [ECX + 0x38]
007484DC  C3                        RET
