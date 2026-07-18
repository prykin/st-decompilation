FUN_0071e040:
0071E040  56                        PUSH ESI
0071E041  8B F1                     MOV ESI,ECX
0071E043  E8 68 7F FC FF            CALL 0x006e5fb0
0071E048  C7 06 94 E2 79 00         MOV dword ptr [ESI],0x79e294
0071E04E  C7 46 20 00 00 00 00      MOV dword ptr [ESI + 0x20],0x0
0071E055  C7 46 24 FF FF FF FF      MOV dword ptr [ESI + 0x24],0xffffffff
0071E05C  8B C6                     MOV EAX,ESI
0071E05E  5E                        POP ESI
0071E05F  C3                        RET
