FUN_00650760:
00650760  55                        PUSH EBP
00650761  8B EC                     MOV EBP,ESP
00650763  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00650766  33 C0                     XOR EAX,EAX
00650768  B2 08                     MOV DL,0x8
LAB_0065076a:
0065076A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00650771  75 41                     JNZ 0x006507b4
00650773  40                        INC EAX
00650774  83 F8 03                  CMP EAX,0x3
00650777  7C F1                     JL 0x0065076a
00650779  66 83 39 04               CMP word ptr [ECX],0x4
0065077D  7D 09                     JGE 0x00650788
0065077F  C7 41 14 01 00 00 00      MOV dword ptr [ECX + 0x14],0x1
00650786  EB 08                     JMP 0x00650790
LAB_00650788:
00650788  38 91 D3 00 00 00         CMP byte ptr [ECX + 0xd3],DL
0065078E  75 24                     JNZ 0x006507b4
LAB_00650790:
00650790  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
00650793  3D 9B 00 00 00            CMP EAX,0x9b
00650798  73 1A                     JNC 0x006507b4
0065079A  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0065079D  85 C9                     TEST ECX,ECX
0065079F  7E 13                     JLE 0x006507b4
006507A1  33 D2                     XOR EDX,EDX
006507A3  8A 90 D8 8F 79 00         MOV DL,byte ptr [EAX + 0x798fd8]
006507A9  3B CA                     CMP ECX,EDX
006507AB  7F 07                     JG 0x006507b4
006507AD  B8 01 00 00 00            MOV EAX,0x1
006507B2  5D                        POP EBP
006507B3  C3                        RET
LAB_006507b4:
006507B4  33 C0                     XOR EAX,EAX
006507B6  5D                        POP EBP
006507B7  C3                        RET
