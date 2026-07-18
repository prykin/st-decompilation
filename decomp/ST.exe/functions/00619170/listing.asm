FUN_00619170:
00619170  56                        PUSH ESI
00619171  8B F1                     MOV ESI,ECX
00619173  E8 68 CF 0C 00            CALL 0x006e60e0
00619178  C7 06 D0 CE 79 00         MOV dword ptr [ESI],0x79ced0
0061917E  C7 86 97 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x97],0xffffffff
00619188  8B C6                     MOV EAX,ESI
0061918A  5E                        POP ESI
0061918B  C3                        RET
