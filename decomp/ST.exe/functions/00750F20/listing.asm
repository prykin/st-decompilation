FUN_00750f20:
00750F20  55                        PUSH EBP
00750F21  8B EC                     MOV EBP,ESP
00750F23  56                        PUSH ESI
00750F24  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00750F27  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00750F2A  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00750F2D  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
00750F30  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
00750F33  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
00750F36  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00750F39  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00750F3C  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
00750F3F  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00750F42  33 C0                     XOR EAX,EAX
00750F44  89 41 40                  MOV dword ptr [ECX + 0x40],EAX
00750F47  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00750F4A  C7 42 44 FF FF FF FF      MOV dword ptr [EDX + 0x44],0xffffffff
00750F51  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00750F54  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
00750F57  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00750F5A  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00750F5D  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
00750F60  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
00750F63  8B 40 34                  MOV EAX,dword ptr [EAX + 0x34]
00750F66  03 41 24                  ADD EAX,dword ptr [ECX + 0x24]
00750F69  83 C0 04                  ADD EAX,0x4
00750F6C  83 38 FF                  CMP dword ptr [EAX],-0x1
00750F6F  74 32                     JZ 0x00750fa3
LAB_00750f71:
00750F71  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00750F74  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00750F77  42                        INC EDX
00750F78  89 51 1C                  MOV dword ptr [ECX + 0x1c],EDX
00750F7B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00750F7E  8B 00                     MOV EAX,dword ptr [EAX]
00750F80  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00750F83  52                        PUSH EDX
00750F84  50                        PUSH EAX
00750F85  56                        PUSH ESI
00750F86  E8 F5 2B 00 00            CALL 0x00753b80
00750F8B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00750F8E  83 C0 04                  ADD EAX,0x4
00750F91  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00750F94  C7 44 D1 44 FF FF FF FF   MOV dword ptr [ECX + EDX*0x8 + 0x44],0xffffffff
00750F9C  8B 08                     MOV ECX,dword ptr [EAX]
00750F9E  83 F9 FF                  CMP ECX,-0x1
00750FA1  75 CE                     JNZ 0x00750f71
LAB_00750fa3:
00750FA3  5E                        POP ESI
00750FA4  5D                        POP EBP
00750FA5  C2 0C 00                  RET 0xc
