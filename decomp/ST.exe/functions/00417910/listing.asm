FUN_00417910:
00417910  55                        PUSH EBP
00417911  8B EC                     MOV EBP,ESP
00417913  53                        PUSH EBX
00417914  66 8B 5D 08               MOV BX,word ptr [EBP + 0x8]
00417918  56                        PUSH ESI
00417919  57                        PUSH EDI
0041791A  0F BF B1 86 00 00 00      MOVSX ESI,word ptr [ECX + 0x86]
00417921  0F BF FB                  MOVSX EDI,BX
00417924  8B C7                     MOV EAX,EDI
00417926  99                        CDQ
00417927  F7 FE                     IDIV ESI
00417929  0F BF C0                  MOVSX EAX,AX
0041792C  0F AF C6                  IMUL EAX,ESI
0041792F  3B C7                     CMP EAX,EDI
00417931  74 0A                     JZ 0x0041793d
00417933  5F                        POP EDI
00417934  5E                        POP ESI
00417935  83 C8 FF                  OR EAX,0xffffffff
00417938  5B                        POP EBX
00417939  5D                        POP EBP
0041793A  C2 04 00                  RET 0x4
LAB_0041793d:
0041793D  66 8B 41 6C               MOV AX,word ptr [ECX + 0x6c]
00417941  66 3B C3                  CMP AX,BX
00417944  75 09                     JNZ 0x0041794f
00417946  5F                        POP EDI
00417947  5E                        POP ESI
00417948  33 C0                     XOR EAX,EAX
0041794A  5B                        POP EBX
0041794B  5D                        POP EBP
0041794C  C2 04 00                  RET 0x4
LAB_0041794f:
0041794F  7E 18                     JLE 0x00417969
00417951  0F BF D0                  MOVSX EDX,AX
00417954  2B D7                     SUB EDX,EDI
00417956  8B C6                     MOV EAX,ESI
00417958  81 FA B4 00 00 00         CMP EDX,0xb4
0041795E  99                        CDQ
0041795F  7C 20                     JL 0x00417981
00417961  33 C2                     XOR EAX,EDX
00417963  2B C2                     SUB EAX,EDX
00417965  8B D0                     MOV EDX,EAX
00417967  EB 20                     JMP 0x00417989
LAB_00417969:
00417969  0F BF C0                  MOVSX EAX,AX
0041796C  2B F8                     SUB EDI,EAX
0041796E  8B C6                     MOV EAX,ESI
00417970  81 FF B4 00 00 00         CMP EDI,0xb4
00417976  99                        CDQ
00417977  7D 08                     JGE 0x00417981
00417979  33 C2                     XOR EAX,EDX
0041797B  2B C2                     SUB EAX,EDX
0041797D  8B D0                     MOV EDX,EAX
0041797F  EB 08                     JMP 0x00417989
LAB_00417981:
00417981  33 C2                     XOR EAX,EDX
00417983  2B C2                     SUB EAX,EDX
00417985  8B D0                     MOV EDX,EAX
00417987  F7 DA                     NEG EDX
FUN_00417910::cf_common_exit_00417989:
00417989  66 01 51 6C               ADD word ptr [ECX + 0x6c],DX
0041798D  66 8B 51 6C               MOV DX,word ptr [ECX + 0x6c]
00417991  BE 68 01 00 00            MOV ESI,0x168
00417996  0F BF D2                  MOVSX EDX,DX
00417999  2B F0                     SUB ESI,EAX
0041799B  3B D6                     CMP EDX,ESI
0041799D  7E 06                     JLE 0x004179a5
0041799F  66 C7 41 6C 00 00         MOV word ptr [ECX + 0x6c],0x0
LAB_004179a5:
004179A5  66 83 79 6C 00            CMP word ptr [ECX + 0x6c],0x0
004179AA  7D 0B                     JGE 0x004179b7
004179AC  BA 68 01 00 00            MOV EDX,0x168
004179B1  2B D0                     SUB EDX,EAX
004179B3  66 89 51 6C               MOV word ptr [ECX + 0x6c],DX
LAB_004179b7:
004179B7  66 8B 41 6C               MOV AX,word ptr [ECX + 0x6c]
004179BB  5F                        POP EDI
004179BC  66 2B C3                  SUB AX,BX
004179BF  5E                        POP ESI
004179C0  66 F7 D8                  NEG AX
004179C3  1B C0                     SBB EAX,EAX
004179C5  5B                        POP EBX
004179C6  83 E0 02                  AND EAX,0x2
004179C9  5D                        POP EBP
004179CA  C2 04 00                  RET 0x4
