FUN_00751fc0:
00751FC0  55                        PUSH EBP
00751FC1  8B EC                     MOV EBP,ESP
00751FC3  56                        PUSH ESI
00751FC4  57                        PUSH EDI
00751FC5  6A 76                     PUSH 0x76
00751FC7  E8 44 8C F5 FF            CALL 0x006aac10
00751FCC  8B F0                     MOV ESI,EAX
00751FCE  85 F6                     TEST ESI,ESI
00751FD0  75 06                     JNZ 0x00751fd8
00751FD2  5F                        POP EDI
00751FD3  5E                        POP ESI
00751FD4  5D                        POP EBP
00751FD5  C2 04 00                  RET 0x4
LAB_00751fd8:
00751FD8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00751FDB  56                        PUSH ESI
00751FDC  89 46 32                  MOV dword ptr [ESI + 0x32],EAX
00751FDF  C7 46 42 30 20 75 00      MOV dword ptr [ESI + 0x42],0x752030
00751FE6  C7 46 4A 60 20 75 00      MOV dword ptr [ESI + 0x4a],0x752060
00751FED  C7 46 4E 80 20 75 00      MOV dword ptr [ESI + 0x4e],0x752080
00751FF4  E8 E7 4A F7 FF            CALL 0x006c6ae0
00751FF9  8B F8                     MOV EDI,EAX
00751FFB  85 FF                     TEST EDI,EDI
00751FFD  74 22                     JZ 0x00752021
00751FFF  56                        PUSH ESI
00752000  E8 BB 4F F7 FF            CALL 0x006c6fc0
00752005  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0075200B  6A 44                     PUSH 0x44
0075200D  68 78 2B 7F 00            PUSH 0x7f2b78
00752012  51                        PUSH ECX
00752013  57                        PUSH EDI
00752014  E8 27 3E F5 FF            CALL 0x006a5e40
00752019  5F                        POP EDI
0075201A  33 C0                     XOR EAX,EAX
0075201C  5E                        POP ESI
0075201D  5D                        POP EBP
0075201E  C2 04 00                  RET 0x4
LAB_00752021:
00752021  8B C6                     MOV EAX,ESI
00752023  5F                        POP EDI
00752024  5E                        POP ESI
00752025  5D                        POP EBP
00752026  C2 04 00                  RET 0x4
