FUN_0055b7f0:
0055B7F0  55                        PUSH EBP
0055B7F1  8B EC                     MOV EBP,ESP
0055B7F3  53                        PUSH EBX
0055B7F4  56                        PUSH ESI
0055B7F5  8B F1                     MOV ESI,ECX
0055B7F7  8B 86 14 01 00 00         MOV EAX,dword ptr [ESI + 0x114]
0055B7FD  85 C0                     TEST EAX,EAX
0055B7FF  0F 84 6B 01 00 00         JZ 0x0055b970
0055B805  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0055B808  83 FB 08                  CMP EBX,0x8
0055B80B  0F 83 5F 01 00 00         JNC 0x0055b970
0055B811  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0055B816  85 C0                     TEST EAX,EAX
0055B818  74 11                     JZ 0x0055b82b
0055B81A  8D 04 DB                  LEA EAX,[EBX + EBX*0x8]
0055B81D  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0055B825  0F 83 45 01 00 00         JNC 0x0055b970
LAB_0055b82b:
0055B82B  33 C0                     XOR EAX,EAX
0055B82D  A0 4D 87 80 00            MOV AL,[0x0080874d]
0055B832  3B D8                     CMP EBX,EAX
0055B834  0F 84 36 01 00 00         JZ 0x0055b970
0055B83A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055B83D  85 C0                     TEST EAX,EAX
0055B83F  74 3D                     JZ 0x0055b87e
0055B841  8A 8C 33 FC 00 00 00      MOV CL,byte ptr [EBX + ESI*0x1 + 0xfc]
0055B848  B0 01                     MOV AL,0x1
0055B84A  3A C8                     CMP CL,AL
0055B84C  0F 84 1E 01 00 00         JZ 0x0055b970
0055B852  88 84 33 FC 00 00 00      MOV byte ptr [EBX + ESI*0x1 + 0xfc],AL
LAB_0055b859:
0055B859  8B 8E 10 01 00 00         MOV ECX,dword ptr [ESI + 0x110]
0055B85F  57                        PUSH EDI
0055B860  33 FF                     XOR EDI,EDI
0055B862  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0055B865  85 C0                     TEST EAX,EAX
0055B867  0F 8E F3 00 00 00         JLE 0x0055b960
0055B86D  3B F8                     CMP EDI,EAX
LAB_0055b86f:
0055B86F  73 1E                     JNC 0x0055b88f
0055B871  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0055B874  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0055B877  0F AF C7                  IMUL EAX,EDI
0055B87A  03 C2                     ADD EAX,EDX
0055B87C  EB 13                     JMP 0x0055b891
LAB_0055b87e:
0055B87E  8A 84 33 FC 00 00 00      MOV AL,byte ptr [EBX + ESI*0x1 + 0xfc]
0055B885  84 C0                     TEST AL,AL
0055B887  0F 84 E3 00 00 00         JZ 0x0055b970
0055B88D  EB CA                     JMP 0x0055b859
LAB_0055b88f:
0055B88F  33 C0                     XOR EAX,EAX
LAB_0055b891:
0055B891  33 C9                     XOR ECX,ECX
0055B893  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
0055B896  3B CB                     CMP ECX,EBX
0055B898  0F 85 B0 00 00 00         JNZ 0x0055b94e
0055B89E  33 D2                     XOR EDX,EDX
0055B8A0  8A 10                     MOV DL,byte ptr [EAX]
0055B8A2  83 EA 00                  SUB EDX,0x0
0055B8A5  74 52                     JZ 0x0055b8f9
0055B8A7  4A                        DEC EDX
0055B8A8  0F 85 A0 00 00 00         JNZ 0x0055b94e
0055B8AE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055B8B1  6A 02                     PUSH 0x2
0055B8B3  85 D2                     TEST EDX,EDX
0055B8B5  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0055B8B8  52                        PUSH EDX
0055B8B9  74 1F                     JZ 0x0055b8da
0055B8BB  33 D2                     XOR EDX,EDX
0055B8BD  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
0055B8C0  52                        PUSH EDX
0055B8C1  51                        PUSH ECX
0055B8C2  0F BE 48 06               MOVSX ECX,byte ptr [EAX + 0x6]
0055B8C6  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
0055B8CA  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
0055B8CE  51                        PUSH ECX
0055B8CF  52                        PUSH EDX
0055B8D0  50                        PUSH EAX
0055B8D1  8B CE                     MOV ECX,ESI
0055B8D3  E8 52 73 EA FF            CALL 0x00402c2a
0055B8D8  EB 74                     JMP 0x0055b94e
LAB_0055b8da:
0055B8DA  33 D2                     XOR EDX,EDX
0055B8DC  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
0055B8DF  52                        PUSH EDX
0055B8E0  51                        PUSH ECX
0055B8E1  0F BE 48 06               MOVSX ECX,byte ptr [EAX + 0x6]
0055B8E5  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
0055B8E9  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
0055B8ED  51                        PUSH ECX
0055B8EE  52                        PUSH EDX
0055B8EF  50                        PUSH EAX
0055B8F0  8B CE                     MOV ECX,ESI
0055B8F2  E8 21 67 EA FF            CALL 0x00402018
0055B8F7  EB 55                     JMP 0x0055b94e
LAB_0055b8f9:
0055B8F9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055B8FC  85 D2                     TEST EDX,EDX
0055B8FE  74 28                     JZ 0x0055b928
0055B900  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0055B903  68 09 60 00 00            PUSH 0x6009
0055B908  52                        PUSH EDX
0055B909  33 D2                     XOR EDX,EDX
0055B90B  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
0055B90E  52                        PUSH EDX
0055B90F  51                        PUSH ECX
0055B910  0F BE 48 06               MOVSX ECX,byte ptr [EAX + 0x6]
0055B914  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
0055B918  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
0055B91C  51                        PUSH ECX
0055B91D  52                        PUSH EDX
0055B91E  50                        PUSH EAX
0055B91F  8B CE                     MOV ECX,ESI
0055B921  E8 66 7F EA FF            CALL 0x0040388c
0055B926  EB 26                     JMP 0x0055b94e
LAB_0055b928:
0055B928  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0055B92B  68 01 40 00 00            PUSH 0x4001
0055B930  52                        PUSH EDX
0055B931  33 D2                     XOR EDX,EDX
0055B933  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
0055B936  52                        PUSH EDX
0055B937  51                        PUSH ECX
0055B938  0F BE 48 06               MOVSX ECX,byte ptr [EAX + 0x6]
0055B93C  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
0055B940  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
0055B944  51                        PUSH ECX
0055B945  52                        PUSH EDX
0055B946  50                        PUSH EAX
0055B947  8B CE                     MOV ECX,ESI
0055B949  E8 A4 5F EA FF            CALL 0x004018f2
LAB_0055b94e:
0055B94E  8B 8E 10 01 00 00         MOV ECX,dword ptr [ESI + 0x110]
0055B954  47                        INC EDI
0055B955  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0055B958  3B F8                     CMP EDI,EAX
0055B95A  0F 8C 0F FF FF FF         JL 0x0055b86f
LAB_0055b960:
0055B960  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055B963  5F                        POP EDI
0055B964  85 C0                     TEST EAX,EAX
0055B966  75 08                     JNZ 0x0055b970
0055B968  C6 84 33 FC 00 00 00 00   MOV byte ptr [EBX + ESI*0x1 + 0xfc],0x0
LAB_0055b970:
0055B970  5E                        POP ESI
0055B971  5B                        POP EBX
0055B972  5D                        POP EBP
0055B973  C2 08 00                  RET 0x8
