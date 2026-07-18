FUN_00650240:
00650240  55                        PUSH EBP
00650241  8B EC                     MOV EBP,ESP
00650243  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00650246  56                        PUSH ESI
00650247  83 CE FF                  OR ESI,0xffffffff
0065024A  66 8B 08                  MOV CX,word ptr [EAX]
0065024D  BA 08 00 00 00            MOV EDX,0x8
00650252  66 83 F9 01               CMP CX,0x1
00650256  7D 12                     JGE 0x0065026a
00650258  89 70 08                  MOV dword ptr [EAX + 0x8],ESI
LAB_0065025b:
0065025B  66 83 F9 02               CMP CX,0x2
0065025F  7D 16                     JGE 0x00650277
00650261  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
00650268  EB 1B                     JMP 0x00650285
LAB_0065026a:
0065026A  38 90 D0 00 00 00         CMP byte ptr [EAX + 0xd0],DL
00650270  74 E9                     JZ 0x0065025b
00650272  5E                        POP ESI
00650273  33 C0                     XOR EAX,EAX
00650275  5D                        POP EBP
00650276  C3                        RET
LAB_00650277:
00650277  80 B8 D1 00 00 00 0A      CMP byte ptr [EAX + 0xd1],0xa
0065027E  74 05                     JZ 0x00650285
00650280  5E                        POP ESI
00650281  33 C0                     XOR EAX,EAX
00650283  5D                        POP EBP
00650284  C3                        RET
LAB_00650285:
00650285  66 83 F9 03               CMP CX,0x3
00650289  7D 0E                     JGE 0x00650299
0065028B  89 70 10                  MOV dword ptr [EAX + 0x10],ESI
LAB_0065028e:
0065028E  66 83 F9 04               CMP CX,0x4
00650292  7D 12                     JGE 0x006502a6
00650294  89 70 14                  MOV dword ptr [EAX + 0x14],ESI
00650297  EB 1A                     JMP 0x006502b3
LAB_00650299:
00650299  38 90 D2 00 00 00         CMP byte ptr [EAX + 0xd2],DL
0065029F  74 ED                     JZ 0x0065028e
006502A1  5E                        POP ESI
006502A2  33 C0                     XOR EAX,EAX
006502A4  5D                        POP EBP
006502A5  C3                        RET
LAB_006502a6:
006502A6  38 90 D3 00 00 00         CMP byte ptr [EAX + 0xd3],DL
006502AC  74 05                     JZ 0x006502b3
006502AE  5E                        POP ESI
006502AF  33 C0                     XOR EAX,EAX
006502B1  5D                        POP EBP
006502B2  C3                        RET
LAB_006502b3:
006502B3  66 83 F9 05               CMP CX,0x5
006502B7  7D 0E                     JGE 0x006502c7
006502B9  89 70 18                  MOV dword ptr [EAX + 0x18],ESI
LAB_006502bc:
006502BC  66 83 F9 06               CMP CX,0x6
006502C0  7D 12                     JGE 0x006502d4
006502C2  89 70 1C                  MOV dword ptr [EAX + 0x1c],ESI
006502C5  EB 1A                     JMP 0x006502e1
LAB_006502c7:
006502C7  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
006502CD  74 ED                     JZ 0x006502bc
006502CF  5E                        POP ESI
006502D0  33 C0                     XOR EAX,EAX
006502D2  5D                        POP EBP
006502D3  C3                        RET
LAB_006502d4:
006502D4  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
006502DA  74 05                     JZ 0x006502e1
006502DC  5E                        POP ESI
006502DD  33 C0                     XOR EAX,EAX
006502DF  5D                        POP EBP
006502E0  C3                        RET
LAB_006502e1:
006502E1  66 83 F9 07               CMP CX,0x7
006502E5  7D 0D                     JGE 0x006502f4
006502E7  89 70 20                  MOV dword ptr [EAX + 0x20],ESI
LAB_006502ea:
006502EA  66 3B CA                  CMP CX,DX
006502ED  7D 12                     JGE 0x00650301
006502EF  89 70 24                  MOV dword ptr [EAX + 0x24],ESI
006502F2  EB 1A                     JMP 0x0065030e
LAB_006502f4:
006502F4  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
006502FA  74 EE                     JZ 0x006502ea
006502FC  5E                        POP ESI
006502FD  33 C0                     XOR EAX,EAX
006502FF  5D                        POP EBP
00650300  C3                        RET
LAB_00650301:
00650301  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
00650307  74 05                     JZ 0x0065030e
00650309  5E                        POP ESI
0065030A  33 C0                     XOR EAX,EAX
0065030C  5D                        POP EBP
0065030D  C3                        RET
LAB_0065030e:
0065030E  66 83 F9 09               CMP CX,0x9
00650312  7D 0F                     JGE 0x00650323
00650314  C7 40 28 01 00 00 00      MOV dword ptr [EAX + 0x28],0x1
LAB_0065031b:
0065031B  5E                        POP ESI
0065031C  B8 01 00 00 00            MOV EAX,0x1
00650321  5D                        POP EBP
00650322  C3                        RET
LAB_00650323:
00650323  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
00650329  74 F0                     JZ 0x0065031b
0065032B  5E                        POP ESI
0065032C  33 C0                     XOR EAX,EAX
0065032E  5D                        POP EBP
0065032F  C3                        RET
