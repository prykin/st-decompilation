FUN_0067f7d0:
0067F7D0  A1 30 8A 84 00            MOV EAX,[0x00848a30]
0067F7D5  85 C0                     TEST EAX,EAX
0067F7D7  74 06                     JZ 0x0067f7df
0067F7D9  50                        PUSH EAX
0067F7DA  E8 31 E9 02 00            CALL 0x006ae110
LAB_0067f7df:
0067F7DF  A1 34 8A 84 00            MOV EAX,[0x00848a34]
0067F7E4  C7 05 30 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a30],0x0
0067F7EE  85 C0                     TEST EAX,EAX
0067F7F0  74 06                     JZ 0x0067f7f8
0067F7F2  50                        PUSH EAX
0067F7F3  E8 78 5D 03 00            CALL 0x006b5570
LAB_0067f7f8:
0067F7F8  C7 05 34 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a34],0x0
0067F802  C3                        RET
