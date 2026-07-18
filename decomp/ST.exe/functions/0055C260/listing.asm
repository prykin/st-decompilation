FUN_0055c260:
0055C260  55                        PUSH EBP
0055C261  8B EC                     MOV EBP,ESP
0055C263  8A 41 08                  MOV AL,byte ptr [ECX + 0x8]
0055C266  84 C0                     TEST AL,AL
0055C268  74 0D                     JZ 0x0055c277
0055C26A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055C26D  C6 41 08 00               MOV byte ptr [ECX + 0x8],0x0
0055C271  50                        PUSH EAX
0055C272  E8 95 9B EA FF            CALL 0x00405e0c
LAB_0055c277:
0055C277  5D                        POP EBP
0055C278  C2 04 00                  RET 0x4
