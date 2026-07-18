FUN_00660700:
00660700  55                        PUSH EBP
00660701  8B EC                     MOV EBP,ESP
00660703  83 EC 10                  SUB ESP,0x10
00660706  33 C0                     XOR EAX,EAX
00660708  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0066070B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066070E  56                        PUSH ESI
0066070F  66 8B 75 08               MOV SI,word ptr [EBP + 0x8]
00660713  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00660716  57                        PUSH EDI
00660717  8B F9                     MOV EDI,ECX
00660719  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0066071C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066071F  66 89 75 FA               MOV word ptr [EBP + -0x6],SI
00660723  66 8B 75 0C               MOV SI,word ptr [EBP + 0xc]
00660727  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066072A  89 87 A7 00 00 00         MOV dword ptr [EDI + 0xa7],EAX
00660730  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00660733  66 89 75 FC               MOV word ptr [EBP + -0x4],SI
00660737  66 8B 75 10               MOV SI,word ptr [EBP + 0x10]
0066073B  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
0066073F  85 C0                     TEST EAX,EAX
00660741  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00660745  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
00660749  66 89 75 FE               MOV word ptr [EBP + -0x2],SI
0066074D  0F 8C 01 01 00 00         JL 0x00660854
00660753  85 C9                     TEST ECX,ECX
00660755  0F 8C F9 00 00 00         JL 0x00660854
0066075B  85 D2                     TEST EDX,EDX
0066075D  0F 8C F1 00 00 00         JL 0x00660854
00660763  66 85 C0                  TEST AX,AX
00660766  0F 8C 28 01 00 00         JL 0x00660894
0066076C  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
00660773  66 3B C6                  CMP AX,SI
00660776  0F 8D 18 01 00 00         JGE 0x00660894
0066077C  66 85 C9                  TEST CX,CX
0066077F  0F 8C 0F 01 00 00         JL 0x00660894
00660785  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0066078C  0F 8D 02 01 00 00         JGE 0x00660894
00660792  66 85 D2                  TEST DX,DX
00660795  0F 8C F9 00 00 00         JL 0x00660894
0066079B  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
006607A2  0F 8D EC 00 00 00         JGE 0x00660894
006607A8  53                        PUSH EBX
006607A9  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
006607B0  0F BF D2                  MOVSX EDX,DX
006607B3  0F AF DA                  IMUL EBX,EDX
006607B6  0F BF D6                  MOVSX EDX,SI
006607B9  0F BF C9                  MOVSX ECX,CX
006607BC  0F AF D1                  IMUL EDX,ECX
006607BF  03 DA                     ADD EBX,EDX
006607C1  0F BF D0                  MOVSX EDX,AX
006607C4  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
006607C9  03 DA                     ADD EBX,EDX
006607CB  8B 34 D8                  MOV ESI,dword ptr [EAX + EBX*0x8]
006607CE  5B                        POP EBX
006607CF  85 F6                     TEST ESI,ESI
006607D1  0F 84 BD 00 00 00         JZ 0x00660894
006607D7  8B 16                     MOV EDX,dword ptr [ESI]
006607D9  8B CE                     MOV ECX,ESI
006607DB  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006607DE  83 F8 37                  CMP EAX,0x37
006607E1  75 31                     JNZ 0x00660814
006607E3  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
006607E7  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
006607EB  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
006607EF  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
006607F6  89 96 30 04 00 00         MOV dword ptr [ESI + 0x430],EDX
006607FC  89 8E 34 04 00 00         MOV dword ptr [ESI + 0x434],ECX
00660802  89 86 38 04 00 00         MOV dword ptr [ESI + 0x438],EAX
00660808  C7 86 2C 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x42c],0x1
00660812  EB 47                     JMP 0x0066085b
LAB_00660814:
00660814  8B 06                     MOV EAX,dword ptr [ESI]
00660816  8B CE                     MOV ECX,ESI
00660818  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0066081B  83 F8 6C                  CMP EAX,0x6c
0066081E  75 74                     JNZ 0x00660894
00660820  8D 4D 10                  LEA ECX,[EBP + 0x10]
00660823  8D 55 0C                  LEA EDX,[EBP + 0xc]
00660826  51                        PUSH ECX
00660827  8D 45 08                  LEA EAX,[EBP + 0x8]
0066082A  52                        PUSH EDX
0066082B  50                        PUSH EAX
0066082C  8B CE                     MOV ECX,ESI
0066082E  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
00660835  E8 9C 27 DA FF            CALL 0x00402fd6
0066083A  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
0066083E  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
00660842  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
00660846  66 89 4D FA               MOV word ptr [EBP + -0x6],CX
0066084A  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
0066084E  66 89 45 FE               MOV word ptr [EBP + -0x2],AX
00660852  EB 07                     JMP 0x0066085b
LAB_00660854:
00660854  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
LAB_0066085b:
0066085B  66 8B 47 7D               MOV AX,word ptr [EDI + 0x7d]
0066085F  66 3D FE FF               CMP AX,0xfffe
00660863  74 2F                     JZ 0x00660894
00660865  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066086B  85 C9                     TEST ECX,ECX
0066086D  74 25                     JZ 0x00660894
0066086F  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
00660872  50                        PUSH EAX
00660873  52                        PUSH EDX
00660874  E8 80 54 DA FF            CALL 0x00405cf9
00660879  85 C0                     TEST EAX,EAX
0066087B  74 17                     JZ 0x00660894
0066087D  8B 10                     MOV EDX,dword ptr [EAX]
0066087F  8D 4D F0                  LEA ECX,[EBP + -0x10]
00660882  51                        PUSH ECX
00660883  6A 10                     PUSH 0x10
00660885  8B C8                     MOV ECX,EAX
00660887  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066088A  5F                        POP EDI
0066088B  33 C0                     XOR EAX,EAX
0066088D  5E                        POP ESI
0066088E  8B E5                     MOV ESP,EBP
00660890  5D                        POP EBP
00660891  C2 1C 00                  RET 0x1c
LAB_00660894:
00660894  5F                        POP EDI
00660895  83 C8 FF                  OR EAX,0xffffffff
00660898  5E                        POP ESI
00660899  8B E5                     MOV ESP,EBP
0066089B  5D                        POP EBP
0066089C  C2 1C 00                  RET 0x1c
