FUN_00505070:
00505070  55                        PUSH EBP
00505071  8B EC                     MOV EBP,ESP
00505073  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00505076  56                        PUSH ESI
00505077  8B F1                     MOV ESI,ECX
00505079  50                        PUSH EAX
0050507A  E8 FE EC EF FF            CALL 0x00403d7d
0050507F  85 C0                     TEST EAX,EAX
00505081  7C 0C                     JL 0x0050508f
00505083  8D 8C 40 09 06 00 00      LEA ECX,[EAX + EAX*0x2 + 0x609]
0050508A  33 C0                     XOR EAX,EAX
0050508C  8A 04 4E                  MOV AL,byte ptr [ESI + ECX*0x2]
LAB_0050508f:
0050508F  5E                        POP ESI
00505090  5D                        POP EBP
00505091  C2 04 00                  RET 0x4
