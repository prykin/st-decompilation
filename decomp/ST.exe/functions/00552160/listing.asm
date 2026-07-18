FUN_00552160:
00552160  55                        PUSH EBP
00552161  8B EC                     MOV EBP,ESP
00552163  53                        PUSH EBX
00552164  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00552167  56                        PUSH ESI
00552168  8B F1                     MOV ESI,ECX
0055216A  33 C0                     XOR EAX,EAX
0055216C  57                        PUSH EDI
0055216D  38 9E 84 01 00 00         CMP byte ptr [ESI + 0x184],BL
00552173  74 22                     JZ 0x00552197
00552175  53                        PUSH EBX
00552176  8B CE                     MOV ECX,ESI
00552178  E8 CF FC EA FF            CALL 0x00401e4c
0055217D  84 DB                     TEST BL,BL
0055217F  8B F8                     MOV EDI,EAX
00552181  74 12                     JZ 0x00552195
00552183  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00552186  8B CE                     MOV ECX,ESI
00552188  50                        PUSH EAX
00552189  E8 BD 1B EB FF            CALL 0x00403d4b
0055218E  8B CE                     MOV ECX,ESI
00552190  E8 88 17 EB FF            CALL 0x0040391d
LAB_00552195:
00552195  8B C7                     MOV EAX,EDI
LAB_00552197:
00552197  5F                        POP EDI
00552198  5E                        POP ESI
00552199  5B                        POP EBX
0055219A  5D                        POP EBP
0055219B  C2 08 00                  RET 0x8
