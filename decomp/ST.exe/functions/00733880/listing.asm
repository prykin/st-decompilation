FUN_00733880:
00733880  55                        PUSH EBP
00733881  8B EC                     MOV EBP,ESP
00733883  83 3D E0 71 85 00 01      CMP dword ptr [0x008571e0],0x1
0073388A  75 05                     JNZ 0x00733891
0073388C  E8 3F A7 00 00            CALL 0x0073dfd0
LAB_00733891:
00733891  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00733894  50                        PUSH EAX
00733895  E8 86 A7 00 00            CALL 0x0073e020
0073389A  83 C4 04                  ADD ESP,0x4
0073389D  68 FF 00 00 00            PUSH 0xff
007338A2  FF 15 A0 BC 85 00         CALL dword ptr [0x0085bca0]
