FUN_007484dd:
007484DD  8B 81 98 00 00 00         MOV EAX,dword ptr [ECX + 0x98]
007484E3  85 C0                     TEST EAX,EAX
007484E5  75 06                     JNZ 0x007484ed
007484E7  B8 0A 02 04 80            MOV EAX,0x8004020a
007484EC  C3                        RET
LAB_007484ed:
007484ED  8B 08                     MOV ECX,dword ptr [EAX]
007484EF  50                        PUSH EAX
007484F0  FF 51 14                  CALL dword ptr [ECX + 0x14]
007484F3  C3                        RET
