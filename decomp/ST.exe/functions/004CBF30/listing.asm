TLOBaseTy::sub_004CBF30:
004CBF30  56                        PUSH ESI
004CBF31  8B F1                     MOV ESI,ECX
004CBF33  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004CBF39  85 C9                     TEST ECX,ECX
004CBF3B  74 1E                     JZ 0x004cbf5b
004CBF3D  E8 93 62 F3 FF            CALL 0x004021d5
004CBF42  8B 86 FF 05 00 00         MOV EAX,dword ptr [ESI + 0x5ff]
004CBF48  50                        PUSH EAX
004CBF49  E8 62 23 26 00            CALL 0x0072e2b0
004CBF4E  83 C4 04                  ADD ESP,0x4
004CBF51  C7 86 FF 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x5ff],0x0
LAB_004cbf5b:
004CBF5B  5E                        POP ESI
004CBF5C  C3                        RET
