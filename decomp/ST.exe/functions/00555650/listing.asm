FUN_00555650:
00555650  56                        PUSH ESI
00555651  8B F1                     MOV ESI,ECX
00555653  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
00555656  85 C0                     TEST EAX,EAX
00555658  74 10                     JZ 0x0055566a
0055565A  50                        PUSH EAX
0055565B  E8 30 94 1D 00            CALL 0x0072ea90
00555660  83 C4 04                  ADD ESP,0x4
00555663  C7 46 4C 00 00 00 00      MOV dword ptr [ESI + 0x4c],0x0
LAB_0055566a:
0055566A  5E                        POP ESI
0055566B  C3                        RET
