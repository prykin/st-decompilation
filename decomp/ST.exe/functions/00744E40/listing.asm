FUN_00744e40:
00744E40  55                        PUSH EBP
00744E41  8B EC                     MOV EBP,ESP
00744E43  83 3D F0 74 85 00 00      CMP dword ptr [0x008574f0],0x0
00744E4A  75 1B                     JNZ 0x00744e67
00744E4C  83 3D F0 74 85 00 00      CMP dword ptr [0x008574f0],0x0
00744E53  75 12                     JNZ 0x00744e67
00744E55  E8 16 00 00 00            CALL 0x00744e70
00744E5A  A1 F0 74 85 00            MOV EAX,[0x008574f0]
00744E5F  83 C0 01                  ADD EAX,0x1
00744E62  A3 F0 74 85 00            MOV [0x008574f0],EAX
LAB_00744e67:
00744E67  5D                        POP EBP
00744E68  C3                        RET
