FUN_0060a470:
0060A470  56                        PUSH ESI
0060A471  8B F1                     MOV ESI,ECX
0060A473  83 BE F5 01 00 00 4D      CMP dword ptr [ESI + 0x1f5],0x4d
0060A47A  75 09                     JNZ 0x0060a485
0060A47C  6A 01                     PUSH 0x1
0060A47E  E8 0A 98 DF FF            CALL 0x00403c8d
0060A483  5E                        POP ESI
0060A484  C3                        RET
LAB_0060a485:
0060A485  8B CE                     MOV ECX,ESI
0060A487  E8 5F 8F DF FF            CALL 0x004033eb
0060A48C  32 C0                     XOR AL,AL
0060A48E  88 86 25 02 00 00         MOV byte ptr [ESI + 0x225],AL
0060A494  88 86 2E 02 00 00         MOV byte ptr [ESI + 0x22e],AL
0060A49A  5E                        POP ESI
0060A49B  C3                        RET
