FUN_0067b380:
0067B380  56                        PUSH ESI
0067B381  8B F1                     MOV ESI,ECX
0067B383  8B 86 A1 06 00 00         MOV EAX,dword ptr [ESI + 0x6a1]
0067B389  85 C0                     TEST EAX,EAX
0067B38B  74 19                     JZ 0x0067b3a6
0067B38D  50                        PUSH EAX
0067B38E  E8 7D 2D 03 00            CALL 0x006ae110
0067B393  6A 0A                     PUSH 0xa
0067B395  6A 12                     PUSH 0x12
0067B397  6A 0A                     PUSH 0xa
0067B399  6A 00                     PUSH 0x0
0067B39B  E8 F0 2E 03 00            CALL 0x006ae290
0067B3A0  89 86 A1 06 00 00         MOV dword ptr [ESI + 0x6a1],EAX
LAB_0067b3a6:
0067B3A6  5E                        POP ESI
0067B3A7  C3                        RET
