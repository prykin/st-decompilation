FUN_00690610:
00690610  55                        PUSH EBP
00690611  8B EC                     MOV EBP,ESP
00690613  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00690616  56                        PUSH ESI
00690617  8B F1                     MOV ESI,ECX
00690619  50                        PUSH EAX
0069061A  E8 C5 48 D7 FF            CALL 0x00404ee4
0069061F  85 C0                     TEST EAX,EAX
00690621  7C 0D                     JL 0x00690630
00690623  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
00690629  50                        PUSH EAX
0069062A  51                        PUSH ECX
0069062B  E8 40 06 02 00            CALL 0x006b0c70
LAB_00690630:
00690630  5E                        POP ESI
00690631  5D                        POP EBP
00690632  C2 04 00                  RET 0x4
