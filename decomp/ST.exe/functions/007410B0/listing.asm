FUN_007410b0:
007410B0  55                        PUSH EBP
007410B1  8B EC                     MOV EBP,ESP
007410B3  53                        PUSH EBX
007410B4  56                        PUSH ESI
007410B5  57                        PUSH EDI
LAB_007410b6:
007410B6  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
007410BD  74 27                     JZ 0x007410e6
007410BF  83 3D 8C 14 7F 00 02      CMP dword ptr [0x007f148c],0x2
007410C6  74 1E                     JZ 0x007410e6
007410C8  68 28 0E 7A 00            PUSH 0x7a0e28
007410CD  6A 00                     PUSH 0x0
007410CF  6A 4F                     PUSH 0x4f
007410D1  68 1C 0E 7A 00            PUSH 0x7a0e1c
007410D6  6A 02                     PUSH 0x2
007410D8  E8 C3 FE FE FF            CALL 0x00730fa0
007410DD  83 C4 14                  ADD ESP,0x14
007410E0  83 F8 01                  CMP EAX,0x1
007410E3  75 01                     JNZ 0x007410e6
007410E5  CC                        INT3
LAB_007410e6:
007410E6  33 C0                     XOR EAX,EAX
007410E8  85 C0                     TEST EAX,EAX
007410EA  75 CA                     JNZ 0x007410b6
007410EC  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
007410F0  74 06                     JZ 0x007410f8
007410F2  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
007410F6  75 07                     JNZ 0x007410ff
LAB_007410f8:
007410F8  33 C0                     XOR EAX,EAX
007410FA  E9 08 01 00 00            JMP 0x00741207
LAB_007410ff:
007410FF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00741102  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00741105  85 D2                     TEST EDX,EDX
00741107  75 15                     JNZ 0x0074111e
00741109  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0074110D  74 08                     JZ 0x00741117
0074110F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00741112  66 C7 00 00 00            MOV word ptr [EAX],0x0
LAB_00741117:
00741117  33 C0                     XOR EAX,EAX
00741119  E9 E9 00 00 00            JMP 0x00741207
LAB_0074111e:
0074111E  83 3D 10 72 85 00 00      CMP dword ptr [0x00857210],0x0
00741125  75 1D                     JNZ 0x00741144
00741127  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0074112B  74 0D                     JZ 0x0074113a
0074112D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00741130  66 0F B6 11               MOVZX DX,byte ptr [ECX]
00741134  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00741137  66 89 10                  MOV word ptr [EAX],DX
LAB_0074113a:
0074113A  B8 01 00 00 00            MOV EAX,0x1
0074113F  E9 C3 00 00 00            JMP 0x00741207
LAB_00741144:
00741144  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00741147  33 D2                     XOR EDX,EDX
00741149  8A 11                     MOV DL,byte ptr [ECX]
0074114B  A1 80 12 7F 00            MOV EAX,[0x007f1280]
00741150  33 C9                     XOR ECX,ECX
00741152  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
00741156  81 E1 00 80 00 00         AND ECX,0x8000
0074115C  85 C9                     TEST ECX,ECX
0074115E  74 6C                     JZ 0x007411cc
00741160  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
00741167  7E 37                     JLE 0x007411a0
00741169  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0074116C  3B 15 8C 14 7F 00         CMP EDX,dword ptr [0x007f148c]
00741172  7C 2C                     JL 0x007411a0
00741174  33 C0                     XOR EAX,EAX
00741176  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0074117A  0F 95 C0                  SETNZ AL
0074117D  50                        PUSH EAX
0074117E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00741181  51                        PUSH ECX
00741182  8B 15 8C 14 7F 00         MOV EDX,dword ptr [0x007f148c]
00741188  52                        PUSH EDX
00741189  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074118C  50                        PUSH EAX
0074118D  6A 09                     PUSH 0x9
0074118F  8B 0D 20 72 85 00         MOV ECX,dword ptr [0x00857220]
00741195  51                        PUSH ECX
00741196  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
0074119C  85 C0                     TEST EAX,EAX
0074119E  75 25                     JNZ 0x007411c5
LAB_007411a0:
007411A0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007411A3  3B 15 8C 14 7F 00         CMP EDX,dword ptr [0x007f148c]
007411A9  72 0B                     JC 0x007411b6
007411AB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007411AE  0F BE 48 01               MOVSX ECX,byte ptr [EAX + 0x1]
007411B2  85 C9                     TEST ECX,ECX
007411B4  75 0F                     JNZ 0x007411c5
LAB_007411b6:
007411B6  C7 05 48 71 85 00 2A 00 00 00  MOV dword ptr [0x00857148],0x2a
007411C0  83 C8 FF                  OR EAX,0xffffffff
007411C3  EB 42                     JMP 0x00741207
LAB_007411c5:
007411C5  A1 8C 14 7F 00            MOV EAX,[0x007f148c]
007411CA  EB 3B                     JMP 0x00741207
LAB_007411cc:
007411CC  33 D2                     XOR EDX,EDX
007411CE  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
007411D2  0F 95 C2                  SETNZ DL
007411D5  52                        PUSH EDX
007411D6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007411D9  50                        PUSH EAX
007411DA  6A 01                     PUSH 0x1
007411DC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007411DF  51                        PUSH ECX
007411E0  6A 09                     PUSH 0x9
007411E2  8B 15 20 72 85 00         MOV EDX,dword ptr [0x00857220]
007411E8  52                        PUSH EDX
007411E9  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
007411EF  85 C0                     TEST EAX,EAX
007411F1  75 0F                     JNZ 0x00741202
007411F3  C7 05 48 71 85 00 2A 00 00 00  MOV dword ptr [0x00857148],0x2a
007411FD  83 C8 FF                  OR EAX,0xffffffff
00741200  EB 05                     JMP 0x00741207
LAB_00741202:
00741202  B8 01 00 00 00            MOV EAX,0x1
LAB_00741207:
00741207  5F                        POP EDI
00741208  5E                        POP ESI
00741209  5B                        POP EBX
0074120A  5D                        POP EBP
0074120B  C3                        RET
