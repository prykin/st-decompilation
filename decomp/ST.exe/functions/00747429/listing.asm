FUN_00747429:
00747429  55                        PUSH EBP
0074742A  8B EC                     MOV EBP,ESP
0074742C  51                        PUSH ECX
0074742D  56                        PUSH ESI
0074742E  8B F1                     MOV ESI,ECX
00747430  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
00747433  85 C0                     TEST EAX,EAX
00747435  74 3E                     JZ 0x00747475
00747437  8B 08                     MOV ECX,dword ptr [EAX]
00747439  8D 55 FC                  LEA EDX,[EBP + -0x4]
0074743C  52                        PUSH EDX
0074743D  68 F0 1A 7A 00            PUSH 0x7a1af0
00747442  50                        PUSH EAX
00747443  FF 11                     CALL dword ptr [ECX]
00747445  85 C0                     TEST EAX,EAX
00747447  7C 1E                     JL 0x00747467
00747449  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074744C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074744F  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00747452  8B 08                     MOV ECX,dword ptr [EAX]
00747454  50                        PUSH EAX
00747455  FF 51 4C                  CALL dword ptr [ECX + 0x4c]
00747458  8B F0                     MOV ESI,EAX
0074745A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074745D  50                        PUSH EAX
0074745E  8B 08                     MOV ECX,dword ptr [EAX]
00747460  FF 51 08                  CALL dword ptr [ECX + 0x8]
00747463  8B C6                     MOV EAX,ESI
00747465  EB 13                     JMP 0x0074747a
LAB_00747467:
00747467  8B 76 40                  MOV ESI,dword ptr [ESI + 0x40]
0074746A  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074746D  8B 06                     MOV EAX,dword ptr [ESI]
0074746F  56                        PUSH ESI
00747470  FF 50 20                  CALL dword ptr [EAX + 0x20]
00747473  EB 05                     JMP 0x0074747a
LAB_00747475:
00747475  B8 02 40 00 80            MOV EAX,0x80004002
LAB_0074747a:
0074747A  5E                        POP ESI
0074747B  C9                        LEAVE
0074747C  C2 08 00                  RET 0x8
