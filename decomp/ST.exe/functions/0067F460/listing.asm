FUN_0067f460:
0067F460  A1 28 8A 84 00            MOV EAX,[0x00848a28]
0067F465  85 C0                     TEST EAX,EAX
0067F467  74 06                     JZ 0x0067f46f
0067F469  50                        PUSH EAX
0067F46A  E8 A1 EC 02 00            CALL 0x006ae110
LAB_0067f46f:
0067F46F  A1 2C 8A 84 00            MOV EAX,[0x00848a2c]
0067F474  C7 05 28 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a28],0x0
0067F47E  85 C0                     TEST EAX,EAX
0067F480  74 06                     JZ 0x0067f488
0067F482  50                        PUSH EAX
0067F483  E8 E8 60 03 00            CALL 0x006b5570
LAB_0067f488:
0067F488  C7 05 2C 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a2c],0x0
0067F492  C3                        RET
