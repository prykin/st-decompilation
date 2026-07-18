FUN_00544940:
00544940  56                        PUSH ESI
00544941  8B F1                     MOV ESI,ECX
00544943  6A 00                     PUSH 0x0
00544945  6A 00                     PUSH 0x0
00544947  8B 86 D6 04 00 00         MOV EAX,dword ptr [ESI + 0x4d6]
0054494D  C7 86 DA 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4da],0x0
00544957  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0054495D  50                        PUSH EAX
0054495E  51                        PUSH ECX
0054495F  E8 9C DE 16 00            CALL 0x006b2800
00544964  8B 96 D6 04 00 00         MOV EDX,dword ptr [ESI + 0x4d6]
0054496A  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0054496F  52                        PUSH EDX
00544970  50                        PUSH EAX
00544971  E8 7A F1 16 00            CALL 0x006b3af0
00544976  5E                        POP ESI
00544977  C3                        RET
