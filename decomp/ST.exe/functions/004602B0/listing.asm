STBoatC::sub_004602B0:
004602B0  56                        PUSH ESI
004602B1  8B F1                     MOV ESI,ECX
004602B3  8B 06                     MOV EAX,dword ptr [ESI]
004602B5  FF 50 20                  CALL dword ptr [EAX + 0x20]
004602B8  C7 86 F4 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xf4],0x0
004602C2  5E                        POP ESI
004602C3  C3                        RET
