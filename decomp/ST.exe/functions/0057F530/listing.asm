FUN_0057f530:
0057F530  55                        PUSH EBP
0057F531  8B EC                     MOV EBP,ESP
0057F533  8B 81 59 02 00 00         MOV EAX,dword ptr [ECX + 0x259]
0057F539  50                        PUSH EAX
0057F53A  68 E0 00 00 00            PUSH 0xe0
0057F53F  E8 B7 24 E8 FF            CALL 0x004019fb
0057F544  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0057F547  83 E9 00                  SUB ECX,0x0
0057F54A  74 0A                     JZ 0x0057f556
0057F54C  49                        DEC ECX
LAB_0057f54d:
0057F54D  A1 A4 B0 7C 00            MOV EAX,[0x007cb0a4]
0057F552  5D                        POP EBP
0057F553  C2 08 00                  RET 0x8
LAB_0057f556:
0057F556  85 C0                     TEST EAX,EAX
0057F558  7E F3                     JLE 0x0057f54d
0057F55A  83 F8 05                  CMP EAX,0x5
0057F55D  7D EE                     JGE 0x0057f54d
0057F55F  8B 04 85 A4 B0 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7cb0a4]
0057F566  5D                        POP EBP
0057F567  C2 08 00                  RET 0x8
