FUN_004cc330:
004CC330  56                        PUSH ESI
004CC331  8B F1                     MOV ESI,ECX
004CC333  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC339  85 C9                     TEST ECX,ECX
004CC33B  74 1E                     JZ 0x004cc35b
004CC33D  E8 93 5E F3 FF            CALL 0x004021d5
004CC342  8B 86 03 06 00 00         MOV EAX,dword ptr [ESI + 0x603]
004CC348  50                        PUSH EAX
004CC349  E8 62 1F 26 00            CALL 0x0072e2b0
004CC34E  83 C4 04                  ADD ESP,0x4
004CC351  C7 86 03 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x603],0x0
LAB_004cc35b:
004CC35B  33 C0                     XOR EAX,EAX
004CC35D  5E                        POP ESI
004CC35E  C3                        RET
