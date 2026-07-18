FUN_0068e910:
0068E910  56                        PUSH ESI
0068E911  8B F1                     MOV ESI,ECX
0068E913  8B 86 BD 00 00 00         MOV EAX,dword ptr [ESI + 0xbd]
0068E919  85 C0                     TEST EAX,EAX
0068E91B  74 19                     JZ 0x0068e936
0068E91D  50                        PUSH EAX
0068E91E  E8 ED F7 01 00            CALL 0x006ae110
0068E923  6A 0A                     PUSH 0xa
0068E925  6A 4A                     PUSH 0x4a
0068E927  6A 0A                     PUSH 0xa
0068E929  6A 00                     PUSH 0x0
0068E92B  E8 60 F9 01 00            CALL 0x006ae290
0068E930  89 86 BD 00 00 00         MOV dword ptr [ESI + 0xbd],EAX
LAB_0068e936:
0068E936  5E                        POP ESI
0068E937  C3                        RET
