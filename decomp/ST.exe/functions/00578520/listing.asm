FUN_00578520:
00578520  55                        PUSH EBP
00578521  8B EC                     MOV EBP,ESP
00578523  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00578526  66 8B 41 41               MOV AX,word ptr [ECX + 0x41]
0057852A  66 89 02                  MOV word ptr [EDX],AX
0057852D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00578530  66 8B 41 43               MOV AX,word ptr [ECX + 0x43]
00578534  66 89 02                  MOV word ptr [EDX],AX
00578537  66 8B 41 45               MOV AX,word ptr [ECX + 0x45]
0057853B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0057853E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00578541  66 89 01                  MOV word ptr [ECX],AX
00578544  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
0057854A  33 C0                     XOR EAX,EAX
0057854C  5D                        POP EBP
0057854D  C2 14 00                  RET 0x14
