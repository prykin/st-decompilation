FUN_007454f0:
007454F0  55                        PUSH EBP
007454F1  8B EC                     MOV EBP,ESP
007454F3  83 EC 14                  SUB ESP,0x14
007454F6  83 7D 0C 01               CMP dword ptr [EBP + 0xc],0x1
007454FA  0F 85 CC 00 00 00         JNZ 0x007455cc
00745500  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00745503  83 E0 03                  AND EAX,0x3
00745506  85 C0                     TEST EAX,EAX
00745508  75 0F                     JNZ 0x00745519
0074550A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0074550D  8B 14 8D EC 1E 7F 00      MOV EDX,dword ptr [ECX*0x4 + 0x7f1eec]
00745514  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00745517  EB 0D                     JMP 0x00745526
LAB_00745519:
00745519  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074551C  8B 0C 85 20 1F 7F 00      MOV ECX,dword ptr [EAX*0x4 + 0x7f1f20]
00745523  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00745526:
00745526  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00745529  83 C2 01                  ADD EDX,0x1
0074552C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0074552F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00745532  83 E8 46                  SUB EAX,0x46
00745535  69 C0 6D 01 00 00         IMUL EAX,EAX,0x16d
0074553B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0074553E  03 C8                     ADD ECX,EAX
00745540  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00745543  83 EA 01                  SUB EDX,0x1
00745546  C1 FA 02                  SAR EDX,0x2
00745549  8D 44 11 F3               LEA EAX,[ECX + EDX*0x1 + -0xd]
0074554D  99                        CDQ
0074554E  B9 07 00 00 00            MOV ECX,0x7
00745553  F7 F9                     IDIV ECX
00745555  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00745558  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074555B  3B 55 1C                  CMP EDX,dword ptr [EBP + 0x1c]
0074555E  7D 19                     JGE 0x00745579
00745560  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00745563  2B 45 FC                  SUB EAX,dword ptr [EBP + -0x4]
00745566  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00745569  83 E9 01                  SUB ECX,0x1
0074556C  6B C9 07                  IMUL ECX,ECX,0x7
0074556F  03 4D F8                  ADD ECX,dword ptr [EBP + -0x8]
00745572  03 C8                     ADD ECX,EAX
00745574  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00745577  EB 14                     JMP 0x0074558d
LAB_00745579:
00745579  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0074557C  2B 55 FC                  SUB EDX,dword ptr [EBP + -0x4]
0074557F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00745582  6B C0 07                  IMUL EAX,EAX,0x7
00745585  03 45 F8                  ADD EAX,dword ptr [EBP + -0x8]
00745588  03 C2                     ADD EAX,EDX
0074558A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0074558d:
0074558D  83 7D 18 05               CMP dword ptr [EBP + 0x18],0x5
00745591  75 37                     JNZ 0x007455ca
00745593  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00745596  83 E1 03                  AND ECX,0x3
00745599  85 C9                     TEST ECX,ECX
0074559B  75 0F                     JNZ 0x007455ac
0074559D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007455A0  8B 04 95 F0 1E 7F 00      MOV EAX,dword ptr [EDX*0x4 + 0x7f1ef0]
007455A7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007455AA  EB 0D                     JMP 0x007455b9
LAB_007455ac:
007455AC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007455AF  8B 14 8D 24 1F 7F 00      MOV EDX,dword ptr [ECX*0x4 + 0x7f1f24]
007455B6  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_007455b9:
007455B9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007455BC  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
007455BF  7E 09                     JLE 0x007455ca
007455C1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007455C4  83 E9 07                  SUB ECX,0x7
007455C7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_007455ca:
007455CA  EB 35                     JMP 0x00745601
LAB_007455cc:
007455CC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007455CF  83 E2 03                  AND EDX,0x3
007455D2  85 D2                     TEST EDX,EDX
007455D4  75 0F                     JNZ 0x007455e5
007455D6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007455D9  8B 0C 85 EC 1E 7F 00      MOV ECX,dword ptr [EAX*0x4 + 0x7f1eec]
007455E0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
007455E3  EB 0D                     JMP 0x007455f2
LAB_007455e5:
007455E5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007455E8  8B 04 95 20 1F 7F 00      MOV EAX,dword ptr [EDX*0x4 + 0x7f1f20]
007455EF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_007455f2:
007455F2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
007455F5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007455F8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007455FB  03 55 20                  ADD EDX,dword ptr [EBP + 0x20]
007455FE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00745601:
00745601  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
00745605  75 3A                     JNZ 0x00745641
00745607  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074560A  A3 DC 27 7F 00            MOV [0x007f27dc],EAX
0074560F  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00745612  6B C9 3C                  IMUL ECX,ECX,0x3c
00745615  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00745618  03 D1                     ADD EDX,ECX
0074561A  6B D2 3C                  IMUL EDX,EDX,0x3c
0074561D  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00745620  03 C2                     ADD EAX,EDX
00745622  69 C0 E8 03 00 00         IMUL EAX,EAX,0x3e8
00745628  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
0074562B  03 C8                     ADD ECX,EAX
0074562D  89 0D E0 27 7F 00         MOV dword ptr [0x007f27e0],ECX
00745633  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00745636  89 15 D8 27 7F 00         MOV dword ptr [0x007f27d8],EDX
0074563C  E9 A3 00 00 00            JMP 0x007456e4
LAB_00745641:
00745641  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00745644  A3 EC 27 7F 00            MOV [0x007f27ec],EAX
00745649  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0074564C  6B C9 3C                  IMUL ECX,ECX,0x3c
0074564F  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00745652  03 D1                     ADD EDX,ECX
00745654  6B D2 3C                  IMUL EDX,EDX,0x3c
00745657  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0074565A  03 C2                     ADD EAX,EDX
0074565C  69 C0 E8 03 00 00         IMUL EAX,EAX,0x3e8
00745662  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
00745665  03 C8                     ADD ECX,EAX
00745667  89 0D F0 27 7F 00         MOV dword ptr [0x007f27f0],ECX
0074566D  8B 15 48 27 7F 00         MOV EDX,dword ptr [0x007f2748]
00745673  69 D2 E8 03 00 00         IMUL EDX,EDX,0x3e8
00745679  A1 F0 27 7F 00            MOV EAX,[0x007f27f0]
0074567E  03 C2                     ADD EAX,EDX
00745680  A3 F0 27 7F 00            MOV [0x007f27f0],EAX
00745685  83 3D F0 27 7F 00 00      CMP dword ptr [0x007f27f0],0x0
0074568C  7D 23                     JGE 0x007456b1
0074568E  8B 0D F0 27 7F 00         MOV ECX,dword ptr [0x007f27f0]
00745694  81 C1 00 5C 26 05         ADD ECX,0x5265c00
0074569A  89 0D F0 27 7F 00         MOV dword ptr [0x007f27f0],ECX
007456A0  8B 15 EC 27 7F 00         MOV EDX,dword ptr [0x007f27ec]
007456A6  83 EA 01                  SUB EDX,0x1
007456A9  89 15 EC 27 7F 00         MOV dword ptr [0x007f27ec],EDX
007456AF  EB 2A                     JMP 0x007456db
LAB_007456b1:
007456B1  81 3D F0 27 7F 00 00 5C 26 05  CMP dword ptr [0x007f27f0],0x5265c00
007456BB  7C 1E                     JL 0x007456db
007456BD  A1 F0 27 7F 00            MOV EAX,[0x007f27f0]
007456C2  2D 00 5C 26 05            SUB EAX,0x5265c00
007456C7  A3 F0 27 7F 00            MOV [0x007f27f0],EAX
007456CC  8B 0D EC 27 7F 00         MOV ECX,dword ptr [0x007f27ec]
007456D2  83 C1 01                  ADD ECX,0x1
007456D5  89 0D EC 27 7F 00         MOV dword ptr [0x007f27ec],ECX
LAB_007456db:
007456DB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007456DE  89 15 E8 27 7F 00         MOV dword ptr [0x007f27e8],EDX
LAB_007456e4:
007456E4  8B E5                     MOV ESP,EBP
007456E6  5D                        POP EBP
007456E7  C3                        RET
