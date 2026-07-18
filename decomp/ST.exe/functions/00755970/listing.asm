FUN_00755970:
00755970  55                        PUSH EBP
00755971  8B EC                     MOV EBP,ESP
00755973  83 EC 08                  SUB ESP,0x8
00755976  53                        PUSH EBX
00755977  56                        PUSH ESI
00755978  57                        PUSH EDI
00755979  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075597C  33 DB                     XOR EBX,EBX
0075597E  33 C0                     XOR EAX,EAX
00755980  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00755983  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00755986  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00755989  8B 51 50                  MOV EDX,dword ptr [ECX + 0x50]
0075598C  89 57 0C                  MOV dword ptr [EDI + 0xc],EDX
0075598F  EB 03                     JMP 0x00755994
LAB_00755991:
00755991  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00755994:
00755994  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
00755997  50                        PUSH EAX
00755998  53                        PUSH EBX
00755999  57                        PUSH EDI
0075599A  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
0075599D  E8 DE E1 FF FF            CALL 0x00753b80
007559A2  8B D8                     MOV EBX,EAX
007559A4  33 F6                     XOR ESI,ESI
007559A6  83 C8 FF                  OR EAX,0xffffffff
007559A9  66 39 73 08               CMP word ptr [EBX + 0x8],SI
007559AD  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
007559B0  7E 6B                     JLE 0x00755a1d
LAB_007559b2:
007559B2  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
007559B5  8D 54 33 18               LEA EDX,[EBX + ESI*0x1 + 0x18]
007559B9  52                        PUSH EDX
007559BA  81 78 30 FF 00 00 00      CMP dword ptr [EAX + 0x30],0xff
007559C1  75 0C                     JNZ 0x007559cf
007559C3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007559C6  51                        PUSH ECX
007559C7  FF 50 04                  CALL dword ptr [EAX + 0x4]
007559CA  83 C4 08                  ADD ESP,0x8
007559CD  EB 0A                     JMP 0x007559d9
LAB_007559cf:
007559CF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007559D2  50                        PUSH EAX
007559D3  57                        PUSH EDI
007559D4  E8 D7 1B 00 00            CALL 0x007575b0
LAB_007559d9:
007559D9  85 C0                     TEST EAX,EAX
007559DB  7C 3D                     JL 0x00755a1a
007559DD  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
007559E0  74 31                     JZ 0x00755a13
007559E2  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
007559E5  66 8B 48 34               MOV CX,word ptr [EAX + 0x34]
007559E9  66 85 C9                  TEST CX,CX
007559EC  74 05                     JZ 0x007559f3
007559EE  0F BF C1                  MOVSX EAX,CX
007559F1  EB 08                     JMP 0x007559fb
LAB_007559f3:
007559F3  8D 4C 1E 18               LEA ECX,[ESI + EBX*0x1 + 0x18]
007559F7  51                        PUSH ECX
007559F8  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_007559fb:
007559FB  8D 74 06 08               LEA ESI,[ESI + EAX*0x1 + 0x8]
007559FF  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00755A02  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00755A05  89 74 D0 44               MOV dword ptr [EAX + EDX*0x8 + 0x44],ESI
00755A09  0F BF 43 08               MOVSX EAX,word ptr [EBX + 0x8]
00755A0D  3B F0                     CMP ESI,EAX
00755A0F  7C A1                     JL 0x007559b2
00755A11  EB 07                     JMP 0x00755a1a
LAB_00755a13:
00755A13  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00755a1a:
00755A1A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00755a1d:
00755A1D  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
00755A20  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00755A23  89 44 D1 44               MOV dword ptr [ECX + EDX*0x8 + 0x44],EAX
00755A27  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00755A2A  85 C9                     TEST ECX,ECX
00755A2C  74 07                     JZ 0x00755a35
00755A2E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00755A31  85 D2                     TEST EDX,EDX
00755A33  75 31                     JNZ 0x00755a66
LAB_00755a35:
00755A35  83 F8 FF                  CMP EAX,-0x1
00755A38  75 05                     JNZ 0x00755a3f
00755A3A  8B 5B 04                  MOV EBX,dword ptr [EBX + 0x4]
00755A3D  EB 04                     JMP 0x00755a43
LAB_00755a3f:
00755A3F  8B 5C 18 10               MOV EBX,dword ptr [EAX + EBX*0x1 + 0x10]
LAB_00755a43:
00755A43  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
00755A46  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00755A49  89 44 CA 44               MOV dword ptr [EDX + ECX*0x8 + 0x44],EAX
00755A4D  41                        INC ECX
00755A4E  83 FB FF                  CMP EBX,-0x1
00755A51  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00755A54  0F 85 37 FF FF FF         JNZ 0x00755991
00755A5A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00755A5D  5F                        POP EDI
00755A5E  5E                        POP ESI
00755A5F  5B                        POP EBX
00755A60  8B E5                     MOV ESP,EBP
00755A62  5D                        POP EBP
00755A63  C2 0C 00                  RET 0xc
LAB_00755a66:
00755A66  5F                        POP EDI
00755A67  5E                        POP ESI
00755A68  8B C1                     MOV EAX,ECX
00755A6A  5B                        POP EBX
00755A6B  8B E5                     MOV ESP,EBP
00755A6D  5D                        POP EBP
00755A6E  C2 0C 00                  RET 0xc
