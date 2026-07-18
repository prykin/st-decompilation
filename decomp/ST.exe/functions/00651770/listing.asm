FUN_00651770:
00651770  55                        PUSH EBP
00651771  8B EC                     MOV EBP,ESP
00651773  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00651776  33 C0                     XOR EAX,EAX
00651778  B2 08                     MOV DL,0x8
LAB_0065177a:
0065177A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00651781  75 20                     JNZ 0x006517a3
00651783  40                        INC EAX
00651784  83 F8 04                  CMP EAX,0x4
00651787  7C F1                     JL 0x0065177a
00651789  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0065178C  85 C0                     TEST EAX,EAX
0065178E  7C 13                     JL 0x006517a3
00651790  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
00651793  85 C9                     TEST ECX,ECX
00651795  7C 0C                     JL 0x006517a3
00651797  83 F9 02                  CMP ECX,0x2
0065179A  7F 07                     JG 0x006517a3
0065179C  B8 01 00 00 00            MOV EAX,0x1
006517A1  5D                        POP EBP
006517A2  C3                        RET
LAB_006517a3:
006517A3  33 C0                     XOR EAX,EAX
006517A5  5D                        POP EBP
006517A6  C3                        RET
