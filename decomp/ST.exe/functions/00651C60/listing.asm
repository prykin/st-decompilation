FUN_00651c60:
00651C60  55                        PUSH EBP
00651C61  8B EC                     MOV EBP,ESP
00651C63  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00651C66  33 C0                     XOR EAX,EAX
00651C68  B2 08                     MOV DL,0x8
LAB_00651c6a:
00651C6A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00651C71  75 37                     JNZ 0x00651caa
00651C73  40                        INC EAX
00651C74  83 F8 04                  CMP EAX,0x4
00651C77  7C F1                     JL 0x00651c6a
00651C79  66 83 39 05               CMP word ptr [ECX],0x5
00651C7D  7D 09                     JGE 0x00651c88
00651C7F  C7 41 18 FF FF FF 3F      MOV dword ptr [ECX + 0x18],0x3fffffff
00651C86  EB 08                     JMP 0x00651c90
LAB_00651c88:
00651C88  38 91 D4 00 00 00         CMP byte ptr [ECX + 0xd4],DL
00651C8E  75 1A                     JNZ 0x00651caa
LAB_00651c90:
00651C90  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
00651C93  85 C0                     TEST EAX,EAX
00651C95  7C 13                     JL 0x00651caa
00651C97  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
00651C9A  85 C9                     TEST ECX,ECX
00651C9C  7C 0C                     JL 0x00651caa
00651C9E  83 F9 02                  CMP ECX,0x2
00651CA1  7F 07                     JG 0x00651caa
00651CA3  B8 01 00 00 00            MOV EAX,0x1
00651CA8  5D                        POP EBP
00651CA9  C3                        RET
LAB_00651caa:
00651CAA  33 C0                     XOR EAX,EAX
00651CAC  5D                        POP EBP
00651CAD  C3                        RET
