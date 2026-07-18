FUN_00650a20:
00650A20  55                        PUSH EBP
00650A21  8B EC                     MOV EBP,ESP
00650A23  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00650A26  33 C0                     XOR EAX,EAX
00650A28  B2 08                     MOV DL,0x8
LAB_00650a2a:
00650A2A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00650A31  75 30                     JNZ 0x00650a63
00650A33  40                        INC EAX
00650A34  83 F8 03                  CMP EAX,0x3
00650A37  7C F1                     JL 0x00650a2a
00650A39  66 83 39 04               CMP word ptr [ECX],0x4
00650A3D  7D 09                     JGE 0x00650a48
00650A3F  C7 41 14 32 00 00 00      MOV dword ptr [ECX + 0x14],0x32
00650A46  EB 08                     JMP 0x00650a50
LAB_00650a48:
00650A48  38 91 D3 00 00 00         CMP byte ptr [ECX + 0xd3],DL
00650A4E  75 13                     JNZ 0x00650a63
LAB_00650a50:
00650A50  8B 49 10                  MOV ECX,dword ptr [ECX + 0x10]
00650A53  85 C9                     TEST ECX,ECX
00650A55  7C 0C                     JL 0x00650a63
00650A57  83 F9 03                  CMP ECX,0x3
00650A5A  7D 07                     JGE 0x00650a63
00650A5C  B8 01 00 00 00            MOV EAX,0x1
00650A61  5D                        POP EBP
00650A62  C3                        RET
LAB_00650a63:
00650A63  33 C0                     XOR EAX,EAX
00650A65  5D                        POP EBP
00650A66  C3                        RET
