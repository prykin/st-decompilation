FUN_0074d042:
0074D042  56                        PUSH ESI
0074D043  8B F1                     MOV ESI,ECX
0074D045  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074D049  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
0074D04F  8B 01                     MOV EAX,dword ptr [ECX]
0074D051  FF 50 28                  CALL dword ptr [EAX + 0x28]
0074D054  85 C0                     TEST EAX,EAX
0074D056  75 21                     JNZ 0x0074d079
0074D058  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
0074D05E  8B 80 8C 00 00 00         MOV EAX,dword ptr [EAX + 0x8c]
0074D064  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
0074D067  85 C0                     TEST EAX,EAX
0074D069  74 0C                     JZ 0x0074d077
0074D06B  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074D06F  8B 08                     MOV ECX,dword ptr [EAX]
0074D071  50                        PUSH EAX
0074D072  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
0074D075  EB 02                     JMP 0x0074d079
LAB_0074d077:
0074D077  33 C0                     XOR EAX,EAX
LAB_0074d079:
0074D079  5E                        POP ESI
0074D07A  C2 04 00                  RET 0x4
