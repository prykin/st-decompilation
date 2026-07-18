FUN_006bfb70:
006BFB70  55                        PUSH EBP
006BFB71  8B EC                     MOV EBP,ESP
006BFB73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BFB76  85 C0                     TEST EAX,EAX
006BFB78  75 05                     JNZ 0x006bfb7f
006BFB7A  B8 01 00 00 00            MOV EAX,0x1
LAB_006bfb7f:
006BFB7F  50                        PUSH EAX
006BFB80  E8 9C 2F D4 FF            CALL 0x00402b21
006BFB85  83 C4 04                  ADD ESP,0x4
006BFB88  5D                        POP EBP
006BFB89  C2 04 00                  RET 0x4
