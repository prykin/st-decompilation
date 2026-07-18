FUN_0074c45b:
0074C45B  56                        PUSH ESI
0074C45C  8B F1                     MOV ESI,ECX
0074C45E  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C462  8B 8E D8 00 00 00         MOV ECX,dword ptr [ESI + 0xd8]
0074C468  8B 01                     MOV EAX,dword ptr [ECX]
0074C46A  FF 50 28                  CALL dword ptr [EAX + 0x28]
0074C46D  85 C0                     TEST EAX,EAX
0074C46F  75 27                     JNZ 0x0074c498
0074C471  8B 8E D8 00 00 00         MOV ECX,dword ptr [ESI + 0xd8]
0074C477  8B 81 90 00 00 00         MOV EAX,dword ptr [ECX + 0x90]
0074C47D  85 C0                     TEST EAX,EAX
0074C47F  74 15                     JZ 0x0074c496
0074C481  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074C485  74 0F                     JZ 0x0074c496
0074C487  8B 11                     MOV EDX,dword ptr [ECX]
0074C489  83 C0 1C                  ADD EAX,0x1c
0074C48C  50                        PUSH EAX
0074C48D  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074C491  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0074C494  EB 02                     JMP 0x0074c498
LAB_0074c496:
0074C496  33 C0                     XOR EAX,EAX
LAB_0074c498:
0074C498  5E                        POP ESI
0074C499  C2 04 00                  RET 0x4
