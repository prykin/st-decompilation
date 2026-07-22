CreateButton:
0071E000  56                        PUSH ESI
0071E001  68 EC 01 00 00            PUSH 0x1ec
0071E006  E8 C5 24 F9 FF            CALL 0x006b04d0
0071E00B  8B F0                     MOV ESI,EAX
0071E00D  85 F6                     TEST ESI,ESI
0071E00F  74 25                     JZ 0x0071e036
0071E011  8B CE                     MOV ECX,ESI
0071E013  E8 E8 D6 00 00            CALL 0x0072b700
0071E018  C7 06 88 E2 79 00         MOV dword ptr [ESI],0x79e288
0071E01E  C7 86 D4 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1d4],0x1
0071E028  C7 86 74 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x174],0x0
0071E032  8B C6                     MOV EAX,ESI
0071E034  5E                        POP ESI
0071E035  C3                        RET
LAB_0071e036:
0071E036  33 C0                     XOR EAX,EAX
0071E038  5E                        POP ESI
0071E039  C3                        RET
