SoundManagerTy::sub_00566900:
00566900  56                        PUSH ESI
00566901  8B F1                     MOV ESI,ECX
00566903  6A 0B                     PUSH 0xb
00566905  B9 58 76 80 00            MOV ECX,0x807658
0056690A  E8 CB B3 E9 FF            CALL 0x00401cda
0056690F  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00566912  85 C0                     TEST EAX,EAX
00566914  74 09                     JZ 0x0056691f
00566916  50                        PUSH EAX
00566917  E8 54 A8 18 00            CALL 0x006f1170
0056691C  83 C4 04                  ADD ESP,0x4
LAB_0056691f:
0056691F  8D 4E 2C                  LEA ECX,[ESI + 0x2c]
00566922  33 C0                     XOR EAX,EAX
00566924  C7 46 18 00 00 00 00      MOV dword ptr [ESI + 0x18],0x0
0056692B  C7 46 28 00 00 00 00      MOV dword ptr [ESI + 0x28],0x0
00566932  89 01                     MOV dword ptr [ECX],EAX
00566934  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00566937  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0056693A  C7 46 39 FF FF FF FF      MOV dword ptr [ESI + 0x39],0xffffffff
00566941  5E                        POP ESI
00566942  C3                        RET
