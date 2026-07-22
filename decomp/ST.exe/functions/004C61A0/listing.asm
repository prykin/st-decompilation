TLOBldMark::sub_004C61A0:
004C61A0  56                        PUSH ESI
004C61A1  8B F1                     MOV ESI,ECX
004C61A3  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004C61A6  85 C0                     TEST EAX,EAX
004C61A8  75 14                     JNZ 0x004c61be
004C61AA  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C61AD  E8 23 C0 F3 FF            CALL 0x004021d5
004C61B2  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
004C61B5  50                        PUSH EAX
004C61B6  E8 F5 80 26 00            CALL 0x0072e2b0
004C61BB  83 C4 04                  ADD ESP,0x4
LAB_004c61be:
004C61BE  C7 05 AC B2 7F 00 00 00 00 00  MOV dword ptr [0x007fb2ac],0x0
004C61C8  33 C0                     XOR EAX,EAX
004C61CA  5E                        POP ESI
004C61CB  C3                        RET
