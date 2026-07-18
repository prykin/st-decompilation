FUN_00415590:
00415590  55                        PUSH EBP
00415591  8B EC                     MOV EBP,ESP
00415593  83 EC 54                  SUB ESP,0x54
00415596  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00415599  53                        PUSH EBX
0041559A  56                        PUSH ESI
0041559B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0041559E  66 8B 40 0C               MOV AX,word ptr [EAX + 0xc]
004155A2  33 DB                     XOR EBX,EBX
004155A4  66 85 C0                  TEST AX,AX
004155A7  57                        PUSH EDI
004155A8  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004155AB  66 89 46 27               MOV word ptr [ESI + 0x27],AX
004155AF  77 0B                     JA 0x004155bc
004155B1  33 C0                     XOR EAX,EAX
004155B3  5F                        POP EDI
004155B4  5E                        POP ESI
004155B5  5B                        POP EBX
004155B6  8B E5                     MOV ESP,EBP
004155B8  5D                        POP EBP
004155B9  C2 24 00                  RET 0x24
LAB_004155bc:
004155BC  6A 01                     PUSH 0x1
004155BE  25 FF FF 00 00            AND EAX,0xffff
004155C3  6A 06                     PUSH 0x6
004155C5  50                        PUSH EAX
004155C6  6A 00                     PUSH 0x0
004155C8  E8 C3 8C 29 00            CALL 0x006ae290
004155CD  8B F8                     MOV EDI,EAX
004155CF  8B CE                     MOV ECX,ESI
004155D1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004155D4  E8 5C C1 FE FF            CALL 0x00401735
004155D9  25 FF FF 00 00            AND EAX,0xffff
004155DE  83 F8 01                  CMP EAX,0x1
004155E1  A3 4C 4D 7F 00            MOV [0x007f4d4c],EAX
004155E6  7F 2E                     JG 0x00415616
004155E8  66 83 7E 27 01            CMP word ptr [ESI + 0x27],0x1
004155ED  75 27                     JNZ 0x00415616
004155EF  66 8B 4D 1C               MOV CX,word ptr [EBP + 0x1c]
004155F3  66 8B 55 20               MOV DX,word ptr [EBP + 0x20]
004155F7  66 8B 45 24               MOV AX,word ptr [EBP + 0x24]
004155FB  66 89 4D F0               MOV word ptr [EBP + -0x10],CX
004155FF  8D 4D F0                  LEA ECX,[EBP + -0x10]
00415602  66 89 55 F2               MOV word ptr [EBP + -0xe],DX
00415606  51                        PUSH ECX
00415607  57                        PUSH EDI
00415608  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
0041560C  E8 AF 8B 29 00            CALL 0x006ae1c0
00415611  E9 DA 01 00 00            JMP 0x004157f0
LAB_00415616:
00415616  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0041561C  8D 4D B0                  LEA ECX,[EBP + -0x50]
0041561F  8D 45 AC                  LEA EAX,[EBP + -0x54]
00415622  6A 00                     PUSH 0x0
00415624  51                        PUSH ECX
00415625  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
00415628  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0041562D  E8 BE 81 31 00            CALL 0x0072d7f0
00415632  83 C4 08                  ADD ESP,0x8
00415635  85 C0                     TEST EAX,EAX
00415637  0F 85 72 01 00 00         JNZ 0x004157af
0041563D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00415640  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00415643  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00415646  8B 47 4D                  MOV EAX,dword ptr [EDI + 0x4d]
00415649  85 C0                     TEST EAX,EAX
0041564B  74 53                     JZ 0x004156a0
0041564D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00415650  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00415653  56                        PUSH ESI
00415654  53                        PUSH EBX
00415655  52                        PUSH EDX
00415656  50                        PUSH EAX
00415657  E8 B4 62 2C 00            CALL 0x006db910
0041565C  8D 0C 85 2D 00 00 00      LEA ECX,[EAX*0x4 + 0x2d]
00415663  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
00415668  F7 E9                     IMUL ECX
0041566A  03 D1                     ADD EDX,ECX
0041566C  C1 FA 06                  SAR EDX,0x6
0041566F  8B CA                     MOV ECX,EDX
00415671  C1 E9 1F                  SHR ECX,0x1f
00415674  03 D1                     ADD EDX,ECX
00415676  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
00415679  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0041567C  D1 E0                     SHL EAX,0x1
0041567E  99                        CDQ
0041567F  83 E2 03                  AND EDX,0x3
00415682  03 C2                     ADD EAX,EDX
00415684  C1 F8 02                  SAR EAX,0x2
00415687  3D 68 01 00 00            CMP EAX,0x168
0041568C  89 47 55                  MOV dword ptr [EDI + 0x55],EAX
0041568F  75 07                     JNZ 0x00415698
00415691  C7 47 55 00 00 00 00      MOV dword ptr [EDI + 0x55],0x0
LAB_00415698:
00415698  8B 47 49                  MOV EAX,dword ptr [EDI + 0x49]
0041569B  0C 01                     OR AL,0x1
0041569D  89 47 49                  MOV dword ptr [EDI + 0x49],EAX
LAB_004156a0:
004156A0  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
004156A3  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
004156A6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004156A9  52                        PUSH EDX
004156AA  50                        PUSH EAX
004156AB  56                        PUSH ESI
004156AC  53                        PUSH EBX
004156AD  51                        PUSH ECX
004156AE  57                        PUSH EDI
004156AF  E8 A5 E2 FE FF            CALL 0x00403959
004156B4  85 C0                     TEST EAX,EAX
004156B6  0F 85 B6 00 00 00         JNZ 0x00415772
004156BC  A1 40 4D 7F 00            MOV EAX,[0x007f4d40]
004156C1  33 DB                     XOR EBX,EBX
004156C3  85 C0                     TEST EAX,EAX
004156C5  7E 41                     JLE 0x00415708
004156C7  33 F6                     XOR ESI,ESI
LAB_004156c9:
004156C9  A1 04 4D 7F 00            MOV EAX,[0x007f4d04]
004156CE  66 8B 54 06 0C            MOV DX,word ptr [ESI + EAX*0x1 + 0xc]
004156D3  66 89 55 F0               MOV word ptr [EBP + -0x10],DX
004156D7  66 8B 4C 06 10            MOV CX,word ptr [ESI + EAX*0x1 + 0x10]
004156DC  66 89 4D F2               MOV word ptr [EBP + -0xe],CX
004156E0  66 8B 54 06 14            MOV DX,word ptr [ESI + EAX*0x1 + 0x14]
004156E5  66 89 55 F4               MOV word ptr [EBP + -0xc],DX
004156E9  8B 54 06 18               MOV EDX,dword ptr [ESI + EAX*0x1 + 0x18]
004156ED  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004156F0  8D 4D F0                  LEA ECX,[EBP + -0x10]
004156F3  51                        PUSH ECX
004156F4  52                        PUSH EDX
004156F5  50                        PUSH EAX
004156F6  E8 45 8A 29 00            CALL 0x006ae140
004156FB  A1 40 4D 7F 00            MOV EAX,[0x007f4d40]
00415700  43                        INC EBX
00415701  83 C6 1C                  ADD ESI,0x1c
00415704  3B D8                     CMP EBX,EAX
00415706  7C C1                     JL 0x004156c9
LAB_00415708:
00415708  A1 F8 4C 7F 00            MOV EAX,[0x007f4cf8]
0041570D  33 F6                     XOR ESI,ESI
0041570F  85 C0                     TEST EAX,EAX
00415711  0F 8E 8B 00 00 00         JLE 0x004157a2
LAB_00415717:
00415717  33 C0                     XOR EAX,EAX
00415719  8B 15 04 4D 7F 00         MOV EDX,dword ptr [0x007f4d04]
0041571F  66 8B 47 27               MOV AX,word ptr [EDI + 0x27]
00415723  2B C6                     SUB EAX,ESI
00415725  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0041572C  2B C8                     SUB ECX,EAX
0041572E  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
00415731  66 8B 4C 8A F0            MOV CX,word ptr [EDX + ECX*0x4 + -0x10]
00415736  66 89 4D F0               MOV word ptr [EBP + -0x10],CX
0041573A  66 8B 50 F4               MOV DX,word ptr [EAX + -0xc]
0041573E  66 89 55 F2               MOV word ptr [EBP + -0xe],DX
00415742  66 8B 48 F8               MOV CX,word ptr [EAX + -0x8]
00415746  66 89 4D F4               MOV word ptr [EBP + -0xc],CX
0041574A  8B 40 FC                  MOV EAX,dword ptr [EAX + -0x4]
0041574D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00415750  8D 55 F0                  LEA EDX,[EBP + -0x10]
00415753  52                        PUSH EDX
00415754  50                        PUSH EAX
00415755  51                        PUSH ECX
00415756  E8 E5 89 29 00            CALL 0x006ae140
0041575B  A1 F8 4C 7F 00            MOV EAX,[0x007f4cf8]
00415760  46                        INC ESI
00415761  3B F0                     CMP ESI,EAX
00415763  7C B2                     JL 0x00415717
00415765  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00415768  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0041576B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00415770  EB 6F                     JMP 0x004157e1
LAB_00415772:
00415772  66 8B 55 24               MOV DX,word ptr [EBP + 0x24]
00415776  66 89 75 F2               MOV word ptr [EBP + -0xe],SI
0041577A  33 F6                     XOR ESI,ESI
0041577C  66 89 5D F0               MOV word ptr [EBP + -0x10],BX
00415780  66 39 77 27               CMP word ptr [EDI + 0x27],SI
00415784  66 89 55 F4               MOV word ptr [EBP + -0xc],DX
00415788  76 18                     JBE 0x004157a2
LAB_0041578a:
0041578A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0041578D  8D 45 F0                  LEA EAX,[EBP + -0x10]
00415790  50                        PUSH EAX
00415791  51                        PUSH ECX
00415792  E8 29 8A 29 00            CALL 0x006ae1c0
00415797  33 D2                     XOR EDX,EDX
00415799  46                        INC ESI
0041579A  66 8B 57 27               MOV DX,word ptr [EDI + 0x27]
0041579E  3B F2                     CMP ESI,EDX
004157A0  7C E8                     JL 0x0041578a
LAB_004157a2:
004157A2  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004157A5  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004157A8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004157AD  EB 32                     JMP 0x004157e1
LAB_004157af:
004157AF  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004157B2  68 F8 4C 7A 00            PUSH 0x7a4cf8
004157B7  68 CC 4C 7A 00            PUSH 0x7a4ccc
004157BC  50                        PUSH EAX
004157BD  6A 00                     PUSH 0x0
004157BF  8B D8                     MOV EBX,EAX
004157C1  68 AE 0E 00 00            PUSH 0xeae
004157C6  68 A8 4C 7A 00            PUSH 0x7a4ca8
004157CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004157D1  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004157D4  E8 F7 7C 29 00            CALL 0x006ad4d0
004157D9  83 C4 18                  ADD ESP,0x18
004157DC  85 C0                     TEST EAX,EAX
004157DE  74 01                     JZ 0x004157e1
004157E0  CC                        INT3
LAB_004157e1:
004157E1  8B 15 04 4D 7F 00         MOV EDX,dword ptr [0x007f4d04]
004157E7  52                        PUSH EDX
004157E8  E8 A3 06 29 00            CALL 0x006a5e90
004157ED  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_004157f0:
004157F0  85 DB                     TEST EBX,EBX
004157F2  74 2E                     JZ 0x00415822
004157F4  57                        PUSH EDI
004157F5  E8 16 89 29 00            CALL 0x006ae110
004157FA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004157FF  68 B8 0E 00 00            PUSH 0xeb8
00415804  68 A8 4C 7A 00            PUSH 0x7a4ca8
00415809  50                        PUSH EAX
0041580A  53                        PUSH EBX
0041580B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00415812  E8 29 06 29 00            CALL 0x006a5e40
00415817  33 C0                     XOR EAX,EAX
00415819  5F                        POP EDI
0041581A  5E                        POP ESI
0041581B  5B                        POP EBX
0041581C  8B E5                     MOV ESP,EBP
0041581E  5D                        POP EBP
0041581F  C2 24 00                  RET 0x24
LAB_00415822:
00415822  8B C7                     MOV EAX,EDI
00415824  5F                        POP EDI
00415825  5E                        POP ESI
00415826  5B                        POP EBX
00415827  8B E5                     MOV ESP,EBP
00415829  5D                        POP EBP
0041582A  C2 24 00                  RET 0x24
