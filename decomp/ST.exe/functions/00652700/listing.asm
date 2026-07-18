FUN_00652700:
00652700  55                        PUSH EBP
00652701  8B EC                     MOV EBP,ESP
00652703  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00652706  33 C9                     XOR ECX,ECX
00652708  BA 08 00 00 00            MOV EDX,0x8
LAB_0065270d:
0065270D  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00652714  75 50                     JNZ 0x00652766
00652716  41                        INC ECX
00652717  83 F9 07                  CMP ECX,0x7
0065271A  7C F1                     JL 0x0065270d
0065271C  66 8B 08                  MOV CX,word ptr [EAX]
0065271F  66 3B CA                  CMP CX,DX
00652722  7D 16                     JGE 0x0065273a
00652724  C7 40 24 64 00 00 00      MOV dword ptr [EAX + 0x24],0x64
LAB_0065272b:
0065272B  66 83 F9 09               CMP CX,0x9
0065272F  7D 15                     JGE 0x00652746
00652731  C7 40 28 00 00 00 00      MOV dword ptr [EAX + 0x28],0x0
00652738  EB 18                     JMP 0x00652752
LAB_0065273a:
0065273A  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
00652740  74 E9                     JZ 0x0065272b
00652742  33 C0                     XOR EAX,EAX
00652744  5D                        POP EBP
00652745  C3                        RET
LAB_00652746:
00652746  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
0065274C  74 04                     JZ 0x00652752
0065274E  33 C0                     XOR EAX,EAX
00652750  5D                        POP EBP
00652751  C3                        RET
LAB_00652752:
00652752  66 83 F9 0A               CMP CX,0xa
00652756  7D 12                     JGE 0x0065276a
00652758  C7 40 2C 00 00 00 00      MOV dword ptr [EAX + 0x2c],0x0
LAB_0065275f:
0065275F  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00652762  85 C9                     TEST ECX,ECX
00652764  7D 10                     JGE 0x00652776
LAB_00652766:
00652766  33 C0                     XOR EAX,EAX
00652768  5D                        POP EBP
00652769  C3                        RET
LAB_0065276a:
0065276A  38 90 D9 00 00 00         CMP byte ptr [EAX + 0xd9],DL
00652770  74 ED                     JZ 0x0065275f
00652772  33 C0                     XOR EAX,EAX
00652774  5D                        POP EBP
00652775  C3                        RET
LAB_00652776:
00652776  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00652779  85 C9                     TEST ECX,ECX
0065277B  7D 07                     JGE 0x00652784
0065277D  C7 40 24 00 00 00 00      MOV dword ptr [EAX + 0x24],0x0
LAB_00652784:
00652784  83 78 24 64               CMP dword ptr [EAX + 0x24],0x64
00652788  7E 07                     JLE 0x00652791
0065278A  C7 40 24 64 00 00 00      MOV dword ptr [EAX + 0x24],0x64
LAB_00652791:
00652791  B8 01 00 00 00            MOV EAX,0x1
00652796  5D                        POP EBP
00652797  C3                        RET
