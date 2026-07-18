FUN_00631f90:
00631F90  56                        PUSH ESI
00631F91  8B F1                     MOV ESI,ECX
00631F93  8B 46 69                  MOV EAX,dword ptr [ESI + 0x69]
00631F96  85 C0                     TEST EAX,EAX
00631F98  74 0D                     JZ 0x00631fa7
00631F9A  50                        PUSH EAX
00631F9B  E8 70 C1 07 00            CALL 0x006ae110
00631FA0  C7 46 69 00 00 00 00      MOV dword ptr [ESI + 0x69],0x0
LAB_00631fa7:
00631FA7  8B 46 6D                  MOV EAX,dword ptr [ESI + 0x6d]
00631FAA  85 C0                     TEST EAX,EAX
00631FAC  74 0D                     JZ 0x00631fbb
00631FAE  50                        PUSH EAX
00631FAF  E8 5C C1 07 00            CALL 0x006ae110
00631FB4  C7 46 6D 00 00 00 00      MOV dword ptr [ESI + 0x6d],0x0
LAB_00631fbb:
00631FBB  5E                        POP ESI
00631FBC  C3                        RET
