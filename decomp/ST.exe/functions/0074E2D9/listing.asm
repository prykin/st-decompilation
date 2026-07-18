FUN_0074e2d9:
0074E2D9  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0074E2DC  3B 01                     CMP EAX,dword ptr [ECX]
0074E2DE  7D 12                     JGE 0x0074e2f2
0074E2E0  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074E2E4  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0074E2E7  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0074E2EA  FF 41 04                  INC dword ptr [ECX + 0x4]
0074E2ED  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0074E2F0  EB 0A                     JMP 0x0074e2fc
LAB_0074e2f2:
0074E2F2  FF 74 24 04               PUSH dword ptr [ESP + 0x4]
0074E2F6  E8 B5 FF FD FF            CALL 0x0072e2b0
0074E2FB  59                        POP ECX
LAB_0074e2fc:
0074E2FC  C2 04 00                  RET 0x4
