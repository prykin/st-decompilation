FUN_004c6070:
004C6070  83 B9 45 02 00 00 05      CMP dword ptr [ECX + 0x245],0x5
004C6077  75 0F                     JNZ 0x004c6088
004C6079  8B 01                     MOV EAX,dword ptr [ECX]
004C607B  68 FB 03 00 00            PUSH 0x3fb
004C6080  6A 03                     PUSH 0x3
004C6082  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
LAB_004c6088:
004C6088  33 C0                     XOR EAX,EAX
004C608A  C3                        RET
