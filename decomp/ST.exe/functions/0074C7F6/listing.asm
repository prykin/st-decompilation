FUN_0074c7f6:
0074C7F6  8B 89 A0 00 00 00         MOV ECX,dword ptr [ECX + 0xa0]
0074C7FC  8B 81 8C 00 00 00         MOV EAX,dword ptr [ECX + 0x8c]
0074C802  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074C806  75 07                     JNZ 0x0074c80f
0074C808  B8 57 00 07 80            MOV EAX,0x80070057
0074C80D  EB 0D                     JMP 0x0074c81c
LAB_0074c80f:
0074C80F  FF 74 24 04               PUSH dword ptr [ESP + 0x4]
0074C813  8B 11                     MOV EDX,dword ptr [ECX]
0074C815  83 C0 1C                  ADD EAX,0x1c
0074C818  50                        PUSH EAX
0074C819  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
LAB_0074c81c:
0074C81C  C2 04 00                  RET 0x4
