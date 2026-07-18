__amsg_exit:
00733850  55                        PUSH EBP
00733851  8B EC                     MOV EBP,ESP
00733853  83 3D E0 71 85 00 01      CMP dword ptr [0x008571e0],0x1
0073385A  75 05                     JNZ 0x00733861
0073385C  E8 6F A7 00 00            CALL 0x0073dfd0
LAB_00733861:
00733861  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00733864  50                        PUSH EAX
00733865  E8 B6 A7 00 00            CALL 0x0073e020
0073386A  83 C4 04                  ADD ESP,0x4
0073386D  68 FF 00 00 00            PUSH 0xff
00733872  FF 15 CC 14 7F 00         CALL dword ptr [0x007f14cc]
