StartSystemTy::sub_005DAB30:
005DAB30  56                        PUSH ESI
005DAB31  8B F1                     MOV ESI,ECX
005DAB33  8B 86 8E 06 00 00         MOV EAX,dword ptr [ESI + 0x68e]
005DAB39  85 C0                     TEST EAX,EAX
005DAB3B  74 06                     JZ 0x005dab43
005DAB3D  50                        PUSH EAX
005DAB3E  E8 CD B5 0D 00            CALL 0x006b6110
LAB_005dab43:
005DAB43  C7 86 8E 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x68e],0x0
005DAB4D  C7 86 92 06 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x692],0xffffffff
005DAB57  5E                        POP ESI
005DAB58  C3                        RET
