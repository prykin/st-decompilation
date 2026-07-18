FUN_00650f50:
00650F50  55                        PUSH EBP
00650F51  8B EC                     MOV EBP,ESP
00650F53  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00650F56  33 C0                     XOR EAX,EAX
00650F58  B2 08                     MOV DL,0x8
LAB_00650f5a:
00650F5A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00650F61  75 19                     JNZ 0x00650f7c
00650F63  40                        INC EAX
00650F64  83 F8 04                  CMP EAX,0x4
00650F67  7C F1                     JL 0x00650f5a
00650F69  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
00650F6C  85 C0                     TEST EAX,EAX
00650F6E  7C 0C                     JL 0x00650f7c
00650F70  83 F8 02                  CMP EAX,0x2
00650F73  7F 07                     JG 0x00650f7c
00650F75  B8 01 00 00 00            MOV EAX,0x1
00650F7A  5D                        POP EBP
00650F7B  C3                        RET
LAB_00650f7c:
00650F7C  33 C0                     XOR EAX,EAX
00650F7E  5D                        POP EBP
00650F7F  C3                        RET
