FUN_0074cf58:
0074CF58  56                        PUSH ESI
0074CF59  8B F1                     MOV ESI,ECX
0074CF5B  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074CF5F  8B 8E E0 00 00 00         MOV ECX,dword ptr [ESI + 0xe0]
0074CF65  8B 01                     MOV EAX,dword ptr [ECX]
0074CF67  FF 50 28                  CALL dword ptr [EAX + 0x28]
0074CF6A  85 C0                     TEST EAX,EAX
0074CF6C  75 21                     JNZ 0x0074cf8f
0074CF6E  8B 86 E0 00 00 00         MOV EAX,dword ptr [ESI + 0xe0]
0074CF74  8B 80 90 00 00 00         MOV EAX,dword ptr [EAX + 0x90]
0074CF7A  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
0074CF7D  85 C0                     TEST EAX,EAX
0074CF7F  74 0C                     JZ 0x0074cf8d
0074CF81  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074CF85  8B 08                     MOV ECX,dword ptr [EAX]
0074CF87  50                        PUSH EAX
0074CF88  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
0074CF8B  EB 02                     JMP 0x0074cf8f
LAB_0074cf8d:
0074CF8D  33 C0                     XOR EAX,EAX
LAB_0074cf8f:
0074CF8F  5E                        POP ESI
0074CF90  C2 04 00                  RET 0x4
