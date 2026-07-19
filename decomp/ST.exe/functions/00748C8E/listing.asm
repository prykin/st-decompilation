FUN_00748c8e:
00748C8E  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
00748C92  F6 41 04 20               TEST byte ptr [ECX + 0x4],0x20
00748C96  75 07                     JNZ 0x00748c9f
00748C98  B8 51 02 04 80            MOV EAX,0x80040251
00748C9D  EB 28                     JMP 0x00748cc7
LAB_00748c9f:
00748C9F  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
00748CA3  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
00748CA6  56                        PUSH ESI
00748CA7  89 10                     MOV dword ptr [EAX],EDX
00748CA9  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
00748CAC  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00748CAF  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
00748CB2  99                        CDQ
00748CB3  8B F0                     MOV ESI,EAX
00748CB5  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
00748CB9  03 71 30                  ADD ESI,dword ptr [ECX + 0x30]
00748CBC  13 51 34                  ADC EDX,dword ptr [ECX + 0x34]
00748CBF  89 30                     MOV dword ptr [EAX],ESI
00748CC1  5E                        POP ESI
00748CC2  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00748CC5  33 C0                     XOR EAX,EAX
LAB_00748cc7:
00748CC7  C2 0C 00                  RET 0xc
