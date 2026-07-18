FUN_006b82e0:
006B82E0  55                        PUSH EBP
006B82E1  8B EC                     MOV EBP,ESP
006B82E3  6A FF                     PUSH -0x1
006B82E5  68 18 D9 79 00            PUSH 0x79d918
006B82EA  68 64 D9 72 00            PUSH 0x72d964
006B82EF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006B82F5  50                        PUSH EAX
006B82F6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006B82FD  83 EC 34                  SUB ESP,0x34
006B8300  53                        PUSH EBX
006B8301  56                        PUSH ESI
006B8302  57                        PUSH EDI
006B8303  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B8306  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
006B830D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B8310  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006B8313  25 00 11 00 00            AND EAX,0x1100
006B8318  3D 00 01 00 00            CMP EAX,0x100
006B831D  0F 84 93 01 00 00         JZ 0x006b84b6
006B8323  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006B8326  03 5E 10                  ADD EBX,dword ptr [ESI + 0x10]
006B8329  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006B832C  01 4D 10                  ADD dword ptr [EBP + 0x10],ECX
006B832F  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006B8332  0F BF 47 0E               MOVSX EAX,word ptr [EDI + 0xe]
006B8336  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006B8339  0F BF 4F 10               MOVSX ECX,word ptr [EDI + 0x10]
006B833D  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006B8340  0F BF 57 12               MOVSX EDX,word ptr [EDI + 0x12]
006B8344  03 D0                     ADD EDX,EAX
006B8346  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006B8349  0F BF 47 14               MOVSX EAX,word ptr [EDI + 0x14]
006B834D  03 C1                     ADD EAX,ECX
006B834F  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006B8352  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B8355  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006B8358  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B835B  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006B835E  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006B8361  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006B8364  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B8367  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006B836A  8D 55 C4                  LEA EDX,[EBP + -0x3c]
006B836D  52                        PUSH EDX
006B836E  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006B8371  50                        PUSH EAX
006B8372  8D 4D D4                  LEA ECX,[EBP + -0x2c]
006B8375  51                        PUSH ECX
006B8376  E8 35 7B 01 00            CALL 0x006cfeb0
006B837B  83 C4 0C                  ADD ESP,0xc
006B837E  85 C0                     TEST EAX,EAX
006B8380  0F 84 30 01 00 00         JZ 0x006b84b6
006B8386  8B D3                     MOV EDX,EBX
006B8388  2B 55 18                  SUB EDX,dword ptr [EBP + 0x18]
006B838B  01 55 D4                  ADD dword ptr [EBP + -0x2c],EDX
006B838E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B8391  2B 45 1C                  SUB EAX,dword ptr [EBP + 0x1c]
006B8394  01 45 D8                  ADD dword ptr [EBP + -0x28],EAX
006B8397  8D 8E 84 04 00 00         LEA ECX,[ESI + 0x484]
006B839D  51                        PUSH ECX
006B839E  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006B83A1  52                        PUSH EDX
006B83A2  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006B83A5  50                        PUSH EAX
006B83A6  E8 05 7B 01 00            CALL 0x006cfeb0
006B83AB  83 C4 0C                  ADD ESP,0xc
006B83AE  85 C0                     TEST EAX,EAX
006B83B0  0F 84 C1 00 00 00         JZ 0x006b8477
006B83B6  56                        PUSH ESI
006B83B7  E8 F4 34 00 00            CALL 0x006bb8b0
006B83BC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006B83BF  85 C0                     TEST EAX,EAX
006B83C1  0F 85 B7 00 00 00         JNZ 0x006b847e
006B83C7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B83CA  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006B83CD  2B 45 C4                  SUB EAX,dword ptr [EBP + -0x3c]
006B83D0  2B C3                     SUB EAX,EBX
006B83D2  03 45 18                  ADD EAX,dword ptr [EBP + 0x18]
006B83D5  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006B83D8  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006B83DB  2B 4D C8                  SUB ECX,dword ptr [EBP + -0x38]
006B83DE  2B 4D 10                  SUB ECX,dword ptr [EBP + 0x10]
006B83E1  03 4D 1C                  ADD ECX,dword ptr [EBP + 0x1c]
006B83E4  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006B83E7  83 7E 20 10               CMP dword ptr [ESI + 0x20],0x10
006B83EB  8B 96 78 04 00 00         MOV EDX,dword ptr [ESI + 0x478]
006B83F1  6A 00                     PUSH 0x0
006B83F3  6A 00                     PUSH 0x0
006B83F5  6A 00                     PUSH 0x0
006B83F7  6A 00                     PUSH 0x0
006B83F9  75 32                     JNZ 0x006b842d
006B83FB  8B 9E C0 04 00 00         MOV EBX,dword ptr [ESI + 0x4c0]
006B8401  53                        PUSH EBX
006B8402  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006B8405  53                        PUSH EBX
006B8406  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
006B8409  53                        PUSH EBX
006B840A  51                        PUSH ECX
006B840B  50                        PUSH EAX
006B840C  57                        PUSH EDI
006B840D  52                        PUSH EDX
006B840E  0F AF 55 D8               IMUL EDX,dword ptr [EBP + -0x28]
006B8412  03 96 74 04 00 00         ADD EDX,dword ptr [ESI + 0x474]
006B8418  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006B841B  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
006B841E  52                        PUSH EDX
006B841F  E8 DC AE 01 00            CALL 0x006d3300
006B8424  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006B842B  EB 44                     JMP 0x006b8471
LAB_006b842d:
006B842D  6A 00                     PUSH 0x0
006B842F  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006B8432  53                        PUSH EBX
006B8433  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
006B8436  53                        PUSH EBX
006B8437  51                        PUSH ECX
006B8438  50                        PUSH EAX
006B8439  57                        PUSH EDI
006B843A  52                        PUSH EDX
006B843B  0F AF 55 D8               IMUL EDX,dword ptr [EBP + -0x28]
006B843F  03 96 74 04 00 00         ADD EDX,dword ptr [ESI + 0x474]
006B8445  03 55 D4                  ADD EDX,dword ptr [EBP + -0x2c]
006B8448  52                        PUSH EDX
006B8449  E8 D2 A3 01 00            CALL 0x006d2820
006B844E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006B8455  EB 1A                     JMP 0x006b8471
LAB_006b8471:
006B8471  56                        PUSH ESI
006B8472  E8 09 35 00 00            CALL 0x006bb980
LAB_006b8477:
006B8477  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006B847A  85 C0                     TEST EAX,EAX
006B847C  74 38                     JZ 0x006b84b6
LAB_006b847e:
006B847E  3D A0 00 76 88            CMP EAX,0x887600a0
006B8483  74 31                     JZ 0x006b84b6
006B8485  3D AE 01 76 88            CMP EAX,0x887601ae
006B848A  74 2A                     JZ 0x006b84b6
006B848C  6A 40                     PUSH 0x40
006B848E  68 00 DC 7E 00            PUSH 0x7edc00
006B8493  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B8499  51                        PUSH ECX
006B849A  50                        PUSH EAX
006B849B  E8 A0 D9 FE FF            CALL 0x006a5e40
006B84A0  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006B84A3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B84A6  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B84AD  5F                        POP EDI
006B84AE  5E                        POP ESI
006B84AF  5B                        POP EBX
006B84B0  8B E5                     MOV ESP,EBP
006B84B2  5D                        POP EBP
006B84B3  C2 20 00                  RET 0x20
LAB_006b84b6:
006B84B6  33 C0                     XOR EAX,EAX
006B84B8  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B84BB  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B84C2  5F                        POP EDI
006B84C3  5E                        POP ESI
006B84C4  5B                        POP EBX
006B84C5  8B E5                     MOV ESP,EBP
006B84C7  5D                        POP EBP
006B84C8  C2 20 00                  RET 0x20
