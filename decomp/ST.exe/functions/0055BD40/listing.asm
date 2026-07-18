FUN_0055bd40:
0055BD40  55                        PUSH EBP
0055BD41  8B EC                     MOV EBP,ESP
0055BD43  56                        PUSH ESI
0055BD44  8B F1                     MOV ESI,ECX
0055BD46  C7 06 FC AE 79 00         MOV dword ptr [ESI],0x79aefc
0055BD4C  FF 15 4C C0 85 00         CALL dword ptr [0x0085c04c]
0055BD52  F6 45 08 01               TEST byte ptr [EBP + 0x8],0x1
0055BD56  74 09                     JZ 0x0055bd61
0055BD58  56                        PUSH ESI
0055BD59  E8 52 25 1D 00            CALL 0x0072e2b0
0055BD5E  83 C4 04                  ADD ESP,0x4
LAB_0055bd61:
0055BD61  8B C6                     MOV EAX,ESI
0055BD63  5E                        POP ESI
0055BD64  5D                        POP EBP
0055BD65  C2 04 00                  RET 0x4
