FUN_0072ef40:
0072EF40  55                        PUSH EBP
0072EF41  8B EC                     MOV EBP,ESP
0072EF43  83 3D F8 10 7F 00 00      CMP dword ptr [0x007f10f8],0x0
0072EF4A  74 06                     JZ 0x0072ef52
0072EF4C  FF 15 F8 10 7F 00         CALL dword ptr [0x007f10f8]
LAB_0072ef52:
0072EF52  68 40 45 7A 00            PUSH 0x7a4540
0072EF57  68 28 43 7A 00            PUSH 0x7a4328
0072EF5C  E8 7F 01 00 00            CALL 0x0072f0e0
0072EF61  83 C4 08                  ADD ESP,0x8
0072EF64  68 24 42 7A 00            PUSH 0x7a4224
0072EF69  68 00 40 7A 00            PUSH 0x7a4000
0072EF6E  E8 6D 01 00 00            CALL 0x0072f0e0
0072EF73  83 C4 08                  ADD ESP,0x8
0072EF76  5D                        POP EBP
0072EF77  C3                        RET
