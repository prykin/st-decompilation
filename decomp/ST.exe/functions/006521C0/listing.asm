FUN_006521c0:
006521C0  55                        PUSH EBP
006521C1  8B EC                     MOV EBP,ESP
006521C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006521C6  53                        PUSH EBX
006521C7  56                        PUSH ESI
006521C8  33 F6                     XOR ESI,ESI
006521CA  33 C9                     XOR ECX,ECX
006521CC  BB 08 00 00 00            MOV EBX,0x8
LAB_006521d1:
006521D1  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
006521D8  75 25                     JNZ 0x006521ff
006521DA  41                        INC ECX
006521DB  83 F9 04                  CMP ECX,0x4
006521DE  7C F1                     JL 0x006521d1
006521E0  66 8B 10                  MOV DX,word ptr [EAX]
006521E3  66 83 FA 05               CMP DX,0x5
006521E7  7D 0E                     JGE 0x006521f7
006521E9  89 70 18                  MOV dword ptr [EAX + 0x18],ESI
LAB_006521ec:
006521EC  66 83 FA 06               CMP DX,0x6
006521F0  7D 13                     JGE 0x00652205
006521F2  89 70 1C                  MOV dword ptr [EAX + 0x1c],ESI
006521F5  EB 1C                     JMP 0x00652213
LAB_006521f7:
006521F7  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
006521FD  74 ED                     JZ 0x006521ec
LAB_006521ff:
006521FF  5E                        POP ESI
00652200  33 C0                     XOR EAX,EAX
00652202  5B                        POP EBX
00652203  5D                        POP EBP
00652204  C3                        RET
LAB_00652205:
00652205  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
0065220B  74 06                     JZ 0x00652213
0065220D  5E                        POP ESI
0065220E  33 C0                     XOR EAX,EAX
00652210  5B                        POP EBX
00652211  5D                        POP EBP
00652212  C3                        RET
LAB_00652213:
00652213  66 83 FA 07               CMP DX,0x7
00652217  7D 10                     JGE 0x00652229
00652219  89 70 20                  MOV dword ptr [EAX + 0x20],ESI
LAB_0065221c:
0065221C  83 C9 FF                  OR ECX,0xffffffff
0065221F  66 3B D3                  CMP DX,BX
00652222  7D 13                     JGE 0x00652237
00652224  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
00652227  EB 1C                     JMP 0x00652245
LAB_00652229:
00652229  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
0065222F  74 EB                     JZ 0x0065221c
00652231  5E                        POP ESI
00652232  33 C0                     XOR EAX,EAX
00652234  5B                        POP EBX
00652235  5D                        POP EBP
00652236  C3                        RET
LAB_00652237:
00652237  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
0065223D  74 06                     JZ 0x00652245
0065223F  5E                        POP ESI
00652240  33 C0                     XOR EAX,EAX
00652242  5B                        POP EBX
00652243  5D                        POP EBP
00652244  C3                        RET
LAB_00652245:
00652245  66 83 FA 09               CMP DX,0x9
00652249  7D 0E                     JGE 0x00652259
0065224B  89 48 28                  MOV dword ptr [EAX + 0x28],ECX
LAB_0065224e:
0065224E  66 83 FA 0A               CMP DX,0xa
00652252  7D 13                     JGE 0x00652267
00652254  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
00652257  EB 1C                     JMP 0x00652275
LAB_00652259:
00652259  38 98 D8 00 00 00         CMP byte ptr [EAX + 0xd8],BL
0065225F  74 ED                     JZ 0x0065224e
00652261  5E                        POP ESI
00652262  33 C0                     XOR EAX,EAX
00652264  5B                        POP EBX
00652265  5D                        POP EBP
00652266  C3                        RET
LAB_00652267:
00652267  38 98 D9 00 00 00         CMP byte ptr [EAX + 0xd9],BL
0065226D  74 06                     JZ 0x00652275
0065226F  5E                        POP ESI
00652270  33 C0                     XOR EAX,EAX
00652272  5B                        POP EBX
00652273  5D                        POP EBP
00652274  C3                        RET
LAB_00652275:
00652275  66 83 FA 0B               CMP DX,0xb
00652279  7D 0E                     JGE 0x00652289
0065227B  89 70 30                  MOV dword ptr [EAX + 0x30],ESI
LAB_0065227e:
0065227E  66 83 FA 0C               CMP DX,0xc
00652282  7D 13                     JGE 0x00652297
00652284  89 70 34                  MOV dword ptr [EAX + 0x34],ESI
00652287  EB 1C                     JMP 0x006522a5
LAB_00652289:
00652289  38 98 DA 00 00 00         CMP byte ptr [EAX + 0xda],BL
0065228F  74 ED                     JZ 0x0065227e
00652291  5E                        POP ESI
00652292  33 C0                     XOR EAX,EAX
00652294  5B                        POP EBX
00652295  5D                        POP EBP
00652296  C3                        RET
LAB_00652297:
00652297  38 98 DB 00 00 00         CMP byte ptr [EAX + 0xdb],BL
0065229D  74 06                     JZ 0x006522a5
0065229F  5E                        POP ESI
006522A0  33 C0                     XOR EAX,EAX
006522A2  5B                        POP EBX
006522A3  5D                        POP EBP
006522A4  C3                        RET
LAB_006522a5:
006522A5  39 70 10                  CMP dword ptr [EAX + 0x10],ESI
006522A8  7D 06                     JGE 0x006522b0
006522AA  5E                        POP ESI
006522AB  33 C0                     XOR EAX,EAX
006522AD  5B                        POP EBX
006522AE  5D                        POP EBP
006522AF  C3                        RET
LAB_006522b0:
006522B0  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
006522B3  33 C9                     XOR ECX,ECX
006522B5  3B D6                     CMP EDX,ESI
006522B7  5E                        POP ESI
006522B8  0F 9D C1                  SETGE CL
006522BB  8B C1                     MOV EAX,ECX
006522BD  5B                        POP EBX
006522BE  5D                        POP EBP
006522BF  C3                        RET
