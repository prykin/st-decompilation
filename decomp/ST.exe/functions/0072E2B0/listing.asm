FUN_0072e2b0:
0072E2B0  55                        PUSH EBP
0072E2B1  8B EC                     MOV EBP,ESP
0072E2B3  51                        PUSH ECX
0072E2B4  53                        PUSH EBX
0072E2B5  56                        PUSH ESI
0072E2B6  57                        PUSH EDI
0072E2B7  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072E2BB  75 02                     JNZ 0x0072e2bf
0072E2BD  EB 74                     JMP 0x0072e333
LAB_0072e2bf:
0072E2BF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072E2C2  83 E8 20                  SUB EAX,0x20
0072E2C5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0072e2c8:
0072E2C8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072E2CB  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0072E2CE  81 E2 FF FF 00 00         AND EDX,0xffff
0072E2D4  83 FA 04                  CMP EDX,0x4
0072E2D7  74 41                     JZ 0x0072e31a
0072E2D9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072E2DC  83 78 14 01               CMP dword ptr [EAX + 0x14],0x1
0072E2E0  74 38                     JZ 0x0072e31a
0072E2E2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072E2E5  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0072E2E8  81 E2 FF FF 00 00         AND EDX,0xffff
0072E2EE  83 FA 02                  CMP EDX,0x2
0072E2F1  74 27                     JZ 0x0072e31a
0072E2F3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072E2F6  83 78 14 03               CMP dword ptr [EAX + 0x14],0x3
0072E2FA  74 1E                     JZ 0x0072e31a
0072E2FC  68 58 C6 7E 00            PUSH 0x7ec658
0072E301  6A 00                     PUSH 0x0
0072E303  6A 2F                     PUSH 0x2f
0072E305  68 E8 FD 79 00            PUSH 0x79fde8
0072E30A  6A 02                     PUSH 0x2
0072E30C  E8 8F 2C 00 00            CALL 0x00730fa0
0072E311  83 C4 14                  ADD ESP,0x14
0072E314  83 F8 01                  CMP EAX,0x1
0072E317  75 01                     JNZ 0x0072e31a
0072E319  CC                        INT3
LAB_0072e31a:
0072E31A  33 C9                     XOR ECX,ECX
0072E31C  85 C9                     TEST ECX,ECX
0072E31E  75 A8                     JNZ 0x0072e2c8
0072E320  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072E323  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
0072E326  50                        PUSH EAX
0072E327  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072E32A  51                        PUSH ECX
0072E32B  E8 DC 61 CD FF            CALL 0x0040450c
0072E330  83 C4 08                  ADD ESP,0x8
LAB_0072e333:
0072E333  5F                        POP EDI
0072E334  5E                        POP ESI
0072E335  5B                        POP EBX
0072E336  8B E5                     MOV ESP,EBP
0072E338  5D                        POP EBP
0072E339  C3                        RET
