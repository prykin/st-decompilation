FUN_00435820:
00435820  55                        PUSH EBP
00435821  8B EC                     MOV EBP,ESP
00435823  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00435826  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00435829  6A 01                     PUSH 0x1
0043582B  6A 0E                     PUSH 0xe
0043582D  50                        PUSH EAX
0043582E  51                        PUSH ECX
0043582F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00435835  E8 16 5B 2B 00            CALL 0x006eb350
0043583A  5D                        POP EBP
0043583B  C2 08 00                  RET 0x8
