FUN_006484f0:
006484F0  55                        PUSH EBP
006484F1  8B EC                     MOV EBP,ESP
006484F3  56                        PUSH ESI
006484F4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006484F7  8B 06                     MOV EAX,dword ptr [ESI]
006484F9  85 C0                     TEST EAX,EAX
006484FB  74 1F                     JZ 0x0064851c
006484FD  80 78 05 02               CMP byte ptr [EAX + 0x5],0x2
00648501  75 13                     JNZ 0x00648516
00648503  8B 48 4E                  MOV ECX,dword ptr [EAX + 0x4e]
00648506  83 C0 4E                  ADD EAX,0x4e
00648509  85 C9                     TEST ECX,ECX
0064850B  74 09                     JZ 0x00648516
0064850D  50                        PUSH EAX
0064850E  E8 24 90 DB FF            CALL 0x00401537
00648513  83 C4 04                  ADD ESP,0x4
LAB_00648516:
00648516  56                        PUSH ESI
00648517  E8 44 2B 06 00            CALL 0x006ab060
LAB_0064851c:
0064851C  5E                        POP ESI
0064851D  5D                        POP EBP
0064851E  C3                        RET
