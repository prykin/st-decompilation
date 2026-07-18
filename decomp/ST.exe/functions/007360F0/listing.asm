FUN_007360f0:
007360F0  55                        PUSH EBP
007360F1  8B EC                     MOV EBP,ESP
007360F3  83 EC 14                  SUB ESP,0x14
007360F6  DD 45 08                  FLD double ptr [EBP + 0x8]
007360F9  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
007360FF  DF E0                     FNSTSW AX
00736101  F6 C4 40                  TEST AH,0x40
00736104  74 1A                     JZ 0x00736120
00736106  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0073610D  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00736114  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073611B  E9 FA 00 00 00            JMP 0x0073621a
LAB_00736120:
00736120  8B 45 0E                  MOV EAX,dword ptr [EBP + 0xe]
00736123  25 FF FF 00 00            AND EAX,0xffff
00736128  25 F0 7F 00 00            AND EAX,0x7ff0
0073612D  85 C0                     TEST EAX,EAX
0073612F  0F 85 B4 00 00 00         JNZ 0x007361e9
00736135  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00736138  C1 E1 0C                  SHL ECX,0xc
0073613B  85 C9                     TEST ECX,ECX
0073613D  75 0A                     JNZ 0x00736149
0073613F  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00736143  0F 84 A0 00 00 00         JZ 0x007361e9
LAB_00736149:
00736149  C7 45 FC 03 FC FF FF      MOV dword ptr [EBP + -0x4],0xfffffc03
00736150  DD 45 08                  FLD double ptr [EBP + 0x8]
00736153  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
00736159  DF E0                     FNSTSW AX
0073615B  F6 C4 01                  TEST AH,0x1
0073615E  74 09                     JZ 0x00736169
00736160  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
00736167  EB 07                     JMP 0x00736170
LAB_00736169:
00736169  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_00736170:
00736170  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00736173  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_00736176:
00736176  8B 45 0E                  MOV EAX,dword ptr [EBP + 0xe]
00736179  25 FF FF 00 00            AND EAX,0xffff
0073617E  83 E0 10                  AND EAX,0x10
00736181  85 C0                     TEST EAX,EAX
00736183  75 30                     JNZ 0x007361b5
00736185  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00736188  D1 E1                     SHL ECX,0x1
0073618A  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0073618D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00736190  81 E2 00 00 00 80         AND EDX,0x80000000
00736196  85 D2                     TEST EDX,EDX
00736198  74 08                     JZ 0x007361a2
0073619A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073619D  0C 01                     OR AL,0x1
0073619F  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_007361a2:
007361A2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007361A5  D1 E1                     SHL ECX,0x1
007361A7  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
007361AA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007361AD  83 EA 01                  SUB EDX,0x1
007361B0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007361B3  EB C1                     JMP 0x00736176
LAB_007361b5:
007361B5  66 8B 45 0E               MOV AX,word ptr [EBP + 0xe]
007361B9  66 25 EF FF               AND AX,0xffef
007361BD  66 89 45 0E               MOV word ptr [EBP + 0xe],AX
007361C1  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
007361C5  74 0B                     JZ 0x007361d2
007361C7  66 8B 4D 0E               MOV CX,word ptr [EBP + 0xe]
007361CB  80 CD 80                  OR CH,0x80
007361CE  66 89 4D 0E               MOV word ptr [EBP + 0xe],CX
LAB_007361d2:
007361D2  6A 00                     PUSH 0x0
007361D4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007361D7  52                        PUSH EDX
007361D8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007361DB  50                        PUSH EAX
007361DC  E8 9F FD FF FF            CALL 0x00735f80
007361E1  83 C4 0C                  ADD ESP,0xc
007361E4  DD 5D F4                  FSTP double ptr [EBP + -0xc]
007361E7  EB 31                     JMP 0x0073621a
LAB_007361e9:
007361E9  6A 00                     PUSH 0x0
007361EB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007361EE  51                        PUSH ECX
007361EF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007361F2  52                        PUSH EDX
007361F3  E8 88 FD FF FF            CALL 0x00735f80
007361F8  83 C4 0C                  ADD ESP,0xc
007361FB  DD 5D F4                  FSTP double ptr [EBP + -0xc]
007361FE  8B 45 0E                  MOV EAX,dword ptr [EBP + 0xe]
00736201  25 FF FF 00 00            AND EAX,0xffff
00736206  25 F0 7F 00 00            AND EAX,0x7ff0
0073620B  C1 F8 04                  SAR EAX,0x4
0073620E  0F BF C8                  MOVSX ECX,AX
00736211  81 E9 FE 03 00 00         SUB ECX,0x3fe
00736217  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073621a:
0073621A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0073621D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00736220  89 02                     MOV dword ptr [EDX],EAX
00736222  DD 45 F4                  FLD double ptr [EBP + -0xc]
00736225  8B E5                     MOV ESP,EBP
00736227  5D                        POP EBP
00736228  C3                        RET
