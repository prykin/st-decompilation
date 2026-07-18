FUN_0064ea10:
0064EA10  55                        PUSH EBP
0064EA11  8B EC                     MOV EBP,ESP
0064EA13  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EA16  33 C0                     XOR EAX,EAX
0064EA18  B2 08                     MOV DL,0x8
LAB_0064ea1a:
0064EA1A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EA21  75 1B                     JNZ 0x0064ea3e
0064EA23  40                        INC EAX
0064EA24  83 F8 03                  CMP EAX,0x3
0064EA27  7C F1                     JL 0x0064ea1a
0064EA29  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0064EA2C  85 C0                     TEST EAX,EAX
0064EA2E  7C 0E                     JL 0x0064ea3e
0064EA30  3D 00 01 00 00            CMP EAX,0x100
0064EA35  7D 07                     JGE 0x0064ea3e
0064EA37  B8 01 00 00 00            MOV EAX,0x1
0064EA3C  5D                        POP EBP
0064EA3D  C3                        RET
LAB_0064ea3e:
0064EA3E  33 C0                     XOR EAX,EAX
0064EA40  5D                        POP EBP
0064EA41  C3                        RET
