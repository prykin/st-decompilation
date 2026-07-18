FUN_00571c90:
00571C90  55                        PUSH EBP
00571C91  8B EC                     MOV EBP,ESP
00571C93  56                        PUSH ESI
00571C94  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00571C97  56                        PUSH ESI
00571C98  E8 6A 32 E9 FF            CALL 0x00404f07
00571C9D  3D FF FF 00 00            CMP EAX,0xffff
00571CA2  75 05                     JNZ 0x00571ca9
00571CA4  5E                        POP ESI
00571CA5  5D                        POP EBP
00571CA6  C2 04 00                  RET 0x4
LAB_00571ca9:
00571CA9  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00571CAC  5E                        POP ESI
00571CAD  83 E8 02                  SUB EAX,0x2
00571CB0  33 C0                     XOR EAX,EAX
00571CB2  5D                        POP EBP
00571CB3  C2 04 00                  RET 0x4
