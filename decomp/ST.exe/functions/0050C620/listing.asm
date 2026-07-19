CPanelTy::Update4PanelSI:
0050C620  55                        PUSH EBP
0050C621  8B EC                     MOV EBP,ESP
0050C623  81 EC 3C 01 00 00         SUB ESP,0x13c
0050C629  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0050C62E  53                        PUSH EBX
0050C62F  56                        PUSH ESI
0050C630  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
0050C633  57                        PUSH EDI
0050C634  8D 95 48 FF FF FF         LEA EDX,[EBP + 0xffffff48]
0050C63A  8D 8D 44 FF FF FF         LEA ECX,[EBP + 0xffffff44]
0050C640  6A 00                     PUSH 0x0
0050C642  52                        PUSH EDX
0050C643  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
0050C649  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050C64F  E8 9C 11 22 00            CALL 0x0072d7f0
0050C654  8B F0                     MOV ESI,EAX
0050C656  83 C4 08                  ADD ESP,0x8
0050C659  85 F6                     TEST ESI,ESI
0050C65B  0F 85 CF 19 00 00         JNZ 0x0050e030
0050C661  8B 5D 88                  MOV EBX,dword ptr [EBP + -0x78]
0050C664  B9 17 00 00 00            MOV ECX,0x17
0050C669  8D 7D 8C                  LEA EDI,[EBP + -0x74]
0050C66C  8D 93 F5 0B 00 00         LEA EDX,[EBX + 0xbf5]
0050C672  8B F2                     MOV ESI,EDX
0050C674  52                        PUSH EDX
0050C675  F3 A5                     MOVSD.REP ES:EDI,ESI
0050C677  B9 17 00 00 00            MOV ECX,0x17
0050C67C  8B FA                     MOV EDI,EDX
0050C67E  F3 AB                     STOSD.REP ES:EDI
0050C680  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0050C686  6A 04                     PUSH 0x4
0050C688  E8 2F 6F EF FF            CALL 0x004035bc
0050C68D  8A 83 FA 0B 00 00         MOV AL,byte ptr [EBX + 0xbfa]
0050C693  8A 4D 91                  MOV CL,byte ptr [EBP + -0x6f]
0050C696  3A C8                     CMP CL,AL
0050C698  0F 85 69 19 00 00         JNZ 0x0050e007
0050C69E  8A 8B FB 0B 00 00         MOV CL,byte ptr [EBX + 0xbfb]
0050C6A4  8A 55 92                  MOV DL,byte ptr [EBP + -0x6e]
0050C6A7  3A D1                     CMP DL,CL
0050C6A9  0F 85 58 19 00 00         JNZ 0x0050e007
0050C6AF  80 F9 02                  CMP CL,0x2
0050C6B2  0F 85 BA 02 00 00         JNZ 0x0050c972
0050C6B8  3C 01                     CMP AL,0x1
0050C6BA  0F 85 B2 02 00 00         JNZ 0x0050c972
0050C6C0  32 C9                     XOR CL,CL
0050C6C2  32 D2                     XOR DL,DL
0050C6C4  33 C0                     XOR EAX,EAX
LAB_0050c6c6:
0050C6C6  80 BC 03 FE 0B 00 00 00   CMP byte ptr [EBX + EAX*0x1 + 0xbfe],0x0
0050C6CE  74 02                     JZ 0x0050c6d2
0050C6D0  FE C2                     INC DL
LAB_0050c6d2:
0050C6D2  40                        INC EAX
0050C6D3  83 F8 06                  CMP EAX,0x6
0050C6D6  72 EE                     JC 0x0050c6c6
0050C6D8  33 C0                     XOR EAX,EAX
LAB_0050c6da:
0050C6DA  80 7C 05 95 00            CMP byte ptr [EBP + EAX*0x1 + -0x6b],0x0
0050C6DF  74 02                     JZ 0x0050c6e3
0050C6E1  FE C1                     INC CL
LAB_0050c6e3:
0050C6E3  40                        INC EAX
0050C6E4  83 F8 06                  CMP EAX,0x6
0050C6E7  72 F1                     JC 0x0050c6da
0050C6E9  3A D1                     CMP DL,CL
0050C6EB  74 0E                     JZ 0x0050c6fb
0050C6ED  6A 01                     PUSH 0x1
0050C6EF  8B CB                     MOV ECX,EBX
0050C6F1  E8 0C 6F EF FF            CALL 0x00403602
0050C6F6  E9 BB 00 00 00            JMP 0x0050c7b6
LAB_0050c6fb:
0050C6FB  B9 03 00 00 00            MOV ECX,0x3
0050C700  8D 7D 95                  LEA EDI,[EBP + -0x6b]
0050C703  8D B3 FE 0B 00 00         LEA ESI,[EBX + 0xbfe]
0050C709  33 C0                     XOR EAX,EAX
0050C70B  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0050C70E  74 5A                     JZ 0x0050c76a
0050C710  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
0050C717  8B 93 02 03 00 00         MOV EDX,dword ptr [EBX + 0x302]
0050C71D  8D 4B 18                  LEA ECX,[EBX + 0x18]
0050C720  51                        PUSH ECX
0050C721  52                        PUSH EDX
0050C722  6A 02                     PUSH 0x2
0050C724  8B CB                     MOV ECX,EBX
0050C726  E8 55 99 1D 00            CALL 0x006e6080
0050C72B  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
0050C72F  8D B3 FE 0B 00 00         LEA ESI,[EBX + 0xbfe]
LAB_0050c735:
0050C735  80 3E 00                  CMP byte ptr [ESI],0x0
0050C738  74 0D                     JZ 0x0050c747
0050C73A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0050C73D  8B CB                     MOV ECX,EBX
0050C73F  50                        PUSH EAX
0050C740  6A 00                     PUSH 0x0
0050C742  E8 F7 69 EF FF            CALL 0x0040313e
LAB_0050c747:
0050C747  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
0050C74A  FE C0                     INC AL
0050C74C  46                        INC ESI
0050C74D  3C 06                     CMP AL,0x6
0050C74F  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0050C752  72 E1                     JC 0x0050c735
0050C754  6A 00                     PUSH 0x0
0050C756  8B CB                     MOV ECX,EBX
0050C758  E8 44 84 EF FF            CALL 0x00404ba1
0050C75D  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0050C763  E8 94 79 EF FF            CALL 0x004040fc
0050C768  EB 16                     JMP 0x0050c780
LAB_0050c76a:
0050C76A  8A 8B FD 0B 00 00         MOV CL,byte ptr [EBX + 0xbfd]
0050C770  8A 45 94                  MOV AL,byte ptr [EBP + -0x6c]
0050C773  3A C8                     CMP CL,AL
0050C775  74 09                     JZ 0x0050c780
0050C777  6A 00                     PUSH 0x0
0050C779  8B CB                     MOV ECX,EBX
0050C77B  E8 21 84 EF FF            CALL 0x00404ba1
LAB_0050c780:
0050C780  B9 03 00 00 00            MOV ECX,0x3
0050C785  8D 7D 9B                  LEA EDI,[EBP + -0x65]
0050C788  8D B3 04 0C 00 00         LEA ESI,[EBX + 0xc04]
0050C78E  33 D2                     XOR EDX,EDX
0050C790  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0050C793  75 0D                     JNZ 0x0050c7a2
0050C795  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
0050C79B  8A 4D 93                  MOV CL,byte ptr [EBP + -0x6d]
0050C79E  3A C1                     CMP AL,CL
0050C7A0  74 14                     JZ 0x0050c7b6
LAB_0050c7a2:
0050C7A2  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0050C7A5  8D 83 F5 0B 00 00         LEA EAX,[EBX + 0xbf5]
0050C7AB  51                        PUSH ECX
0050C7AC  50                        PUSH EAX
0050C7AD  6A 00                     PUSH 0x0
0050C7AF  8B CB                     MOV ECX,EBX
0050C7B1  E8 D3 87 EF FF            CALL 0x00404f89
LAB_0050c7b6:
0050C7B6  8A 93 0A 0C 00 00         MOV DL,byte ptr [EBX + 0xc0a]
0050C7BC  8A 45 A1                  MOV AL,byte ptr [EBP + -0x5f]
0050C7BF  3A D0                     CMP DL,AL
0050C7C1  75 0D                     JNZ 0x0050c7d0
0050C7C3  8A 45 93                  MOV AL,byte ptr [EBP + -0x6d]
0050C7C6  8A 8B FC 0B 00 00         MOV CL,byte ptr [EBX + 0xbfc]
0050C7CC  3A C8                     CMP CL,AL
0050C7CE  74 3E                     JZ 0x0050c80e
LAB_0050c7d0:
0050C7D0  8B 83 C4 09 00 00         MOV EAX,dword ptr [EBX + 0x9c4]
0050C7D6  85 C0                     TEST EAX,EAX
0050C7D8  74 34                     JZ 0x0050c80e
0050C7DA  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
0050C7E1  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
0050C7E7  84 C0                     TEST AL,AL
0050C7E9  74 0A                     JZ 0x0050c7f5
0050C7EB  33 C0                     XOR EAX,EAX
0050C7ED  8A 83 0A 0C 00 00         MOV AL,byte ptr [EBX + 0xc0a]
0050C7F3  EB 02                     JMP 0x0050c7f7
LAB_0050c7f5:
0050C7F5  33 C0                     XOR EAX,EAX
LAB_0050c7f7:
0050C7F7  8B 93 C4 09 00 00         MOV EDX,dword ptr [EBX + 0x9c4]
0050C7FD  8D 4B 18                  LEA ECX,[EBX + 0x18]
0050C800  51                        PUSH ECX
0050C801  52                        PUSH EDX
0050C802  6A 02                     PUSH 0x2
0050C804  8B CB                     MOV ECX,EBX
0050C806  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0050C809  E8 72 98 1D 00            CALL 0x006e6080
LAB_0050c80e:
0050C80E  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050C814  8B 4D A9                  MOV ECX,dword ptr [EBP + -0x57]
0050C817  3B C1                     CMP EAX,ECX
0050C819  74 1C                     JZ 0x0050c837
0050C81B  8B CB                     MOV ECX,EBX
0050C81D  E8 6E 5D EF FF            CALL 0x00402590
0050C822  6A 00                     PUSH 0x0
0050C824  8B CB                     MOV ECX,EBX
0050C826  E8 D7 6D EF FF            CALL 0x00403602
0050C82B  8B CB                     MOV ECX,EBX
0050C82D  E8 6E 93 EF FF            CALL 0x00405ba0
0050C832  E9 11 01 00 00            JMP 0x0050c948
LAB_0050c837:
0050C837  8A 83 24 0C 00 00         MOV AL,byte ptr [EBX + 0xc24]
0050C83D  8A 4D BB                  MOV CL,byte ptr [EBP + -0x45]
0050C840  3A C1                     CMP AL,CL
0050C842  0F 84 00 01 00 00         JZ 0x0050c948
0050C848  25 FF 00 00 00            AND EAX,0xff
0050C84D  8B C8                     MOV ECX,EAX
0050C84F  C1 E1 05                  SHL ECX,0x5
0050C852  03 C8                     ADD ECX,EAX
0050C854  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0050C859  F7 E9                     IMUL ECX
0050C85B  C1 FA 05                  SAR EDX,0x5
0050C85E  8B CA                     MOV ECX,EDX
0050C860  B8 00 00 00 00            MOV EAX,0x0
0050C865  C1 E9 1F                  SHR ECX,0x1f
0050C868  03 D1                     ADD EDX,ECX
0050C86A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050C86D  74 36                     JZ 0x0050c8a5
0050C86F  BE 35 00 00 00            MOV ESI,0x35
0050C874  8B FA                     MOV EDI,EDX
0050C876  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0050c879:
0050C879  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050C87F  6A 01                     PUSH 0x1
0050C881  52                        PUSH EDX
0050C882  E8 19 EB 1F 00            CALL 0x0070b3a0
0050C887  50                        PUSH EAX
0050C888  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050C88E  6A 01                     PUSH 0x1
0050C890  6A 7D                     PUSH 0x7d
0050C892  56                        PUSH ESI
0050C893  50                        PUSH EAX
0050C894  E8 90 69 EF FF            CALL 0x00403229
0050C899  83 C4 1C                  ADD ESP,0x1c
0050C89C  83 C6 04                  ADD ESI,0x4
0050C89F  4F                        DEC EDI
0050C8A0  75 D7                     JNZ 0x0050c879
0050C8A2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0050c8a5:
0050C8A5  83 F8 21                  CMP EAX,0x21
0050C8A8  73 35                     JNC 0x0050c8df
0050C8AA  8D 34 85 35 00 00 00      LEA ESI,[EAX*0x4 + 0x35]
LAB_0050c8b1:
0050C8B1  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050C8B7  6A 00                     PUSH 0x0
0050C8B9  51                        PUSH ECX
0050C8BA  E8 E1 EA 1F 00            CALL 0x0070b3a0
0050C8BF  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050C8C5  50                        PUSH EAX
0050C8C6  6A 01                     PUSH 0x1
0050C8C8  6A 7D                     PUSH 0x7d
0050C8CA  56                        PUSH ESI
0050C8CB  52                        PUSH EDX
0050C8CC  E8 58 69 EF FF            CALL 0x00403229
0050C8D1  83 C6 04                  ADD ESI,0x4
0050C8D4  83 C4 1C                  ADD ESP,0x1c
0050C8D7  81 FE B9 00 00 00         CMP ESI,0xb9
0050C8DD  7C D2                     JL 0x0050c8b1
LAB_0050c8df:
0050C8DF  8B 83 E1 09 00 00         MOV EAX,dword ptr [EBX + 0x9e1]
0050C8E5  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050C8EB  6A 1E                     PUSH 0x1e
0050C8ED  6A 3C                     PUSH 0x3c
0050C8EF  6A 0A                     PUSH 0xa
0050C8F1  6A 5C                     PUSH 0x5c
0050C8F3  6A 00                     PUSH 0x0
0050C8F5  50                        PUSH EAX
0050C8F6  6A 50                     PUSH 0x50
0050C8F8  6A 5C                     PUSH 0x5c
0050C8FA  6A 00                     PUSH 0x0
0050C8FC  51                        PUSH ECX
0050C8FD  E8 EE 8C 1A 00            CALL 0x006b55f0
0050C902  66 8B 93 20 0C 00 00      MOV DX,word ptr [EBX + 0xc20]
0050C909  66 8B 83 1C 0C 00 00      MOV AX,word ptr [EBX + 0xc1c]
0050C910  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050C916  6A 04                     PUSH 0x4
0050C918  6A 07                     PUSH 0x7
0050C91A  52                        PUSH EDX
0050C91B  50                        PUSH EAX
0050C91C  51                        PUSH ECX
0050C91D  8B CB                     MOV ECX,EBX
0050C91F  E8 17 61 EF FF            CALL 0x00402a3b
0050C924  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050C92A  85 C0                     TEST EAX,EAX
0050C92C  7C 1A                     JL 0x0050c948
0050C92E  8B 93 A8 00 00 00         MOV EDX,dword ptr [EBX + 0xa8]
0050C934  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
0050C937  52                        PUSH EDX
0050C938  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0050C93E  51                        PUSH ECX
0050C93F  6A FF                     PUSH -0x1
0050C941  50                        PUSH EAX
0050C942  52                        PUSH EDX
0050C943  E8 F8 6C 1A 00            CALL 0x006b3640
LAB_0050c948:
0050C948  8B 83 4D 0C 00 00         MOV EAX,dword ptr [EBX + 0xc4d]
0050C94E  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0050C951  3B C1                     CMP EAX,ECX
0050C953  0F 84 C5 16 00 00         JZ 0x0050e01e
0050C959  8B CB                     MOV ECX,EBX
0050C95B  E8 55 50 EF FF            CALL 0x004019b5
0050C960  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0050C966  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050C96B  5F                        POP EDI
0050C96C  5E                        POP ESI
0050C96D  5B                        POP EBX
0050C96E  8B E5                     MOV ESP,EBP
0050C970  5D                        POP EBP
0050C971  C3                        RET
LAB_0050c972:
0050C972  25 FF 00 00 00            AND EAX,0xff
0050C977  48                        DEC EAX
0050C978  0F 84 88 00 00 00         JZ 0x0050ca06
0050C97E  83 E8 03                  SUB EAX,0x3
0050C981  0F 85 97 16 00 00         JNZ 0x0050e01e
0050C987  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
0050C98D  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0050C990  3B C8                     CMP ECX,EAX
0050C992  0F 85 6F 16 00 00         JNZ 0x0050e007
0050C998  05 23 FF FF FF            ADD EAX,0xffffff23
0050C99D  83 F8 21                  CMP EAX,0x21
0050C9A0  0F 87 78 16 00 00         JA 0x0050e01e
0050C9A6  33 C9                     XOR ECX,ECX
0050C9A8  8A 88 84 E0 50 00         MOV CL,byte ptr [EAX + 0x50e084]
switchD_0050c9ae::switchD:
0050C9AE  FF 24 8D 7C E0 50 00      JMP dword ptr [ECX*0x4 + 0x50e07c]
switchD_0050c9ae::caseD_dd:
0050C9B5  8B CB                     MOV ECX,EBX
0050C9B7  E8 D4 5B EF FF            CALL 0x00402590
0050C9BC  8B 93 02 03 00 00         MOV EDX,dword ptr [EBX + 0x302]
0050C9C2  85 D2                     TEST EDX,EDX
0050C9C4  0F 84 54 16 00 00         JZ 0x0050e01e
0050C9CA  B9 08 00 00 00            MOV ECX,0x8
0050C9CF  33 C0                     XOR EAX,EAX
0050C9D1  8D BD C4 FE FF FF         LEA EDI,[EBP + 0xfffffec4]
0050C9D7  F3 AB                     STOSD.REP ES:EDI
0050C9D9  8D 85 C4 FE FF FF         LEA EAX,[EBP + 0xfffffec4]
0050C9DF  8B CB                     MOV ECX,EBX
0050C9E1  50                        PUSH EAX
0050C9E2  52                        PUSH EDX
0050C9E3  6A 02                     PUSH 0x2
0050C9E5  C7 85 D4 FE FF FF 05 00 00 00  MOV dword ptr [EBP + 0xfffffed4],0x5
0050C9EF  E8 8C 96 1D 00            CALL 0x006e6080
0050C9F4  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0050C9FA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050C9FF  5F                        POP EDI
0050CA00  5E                        POP ESI
0050CA01  5B                        POP EBX
0050CA02  8B E5                     MOV ESP,EBP
0050CA04  5D                        POP EBP
0050CA05  C3                        RET
LAB_0050ca06:
0050CA06  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0050CA09  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
0050CA0F  3B C8                     CMP ECX,EAX
0050CA11  0F 85 F0 15 00 00         JNZ 0x0050e007
0050CA17  8A 55 90                  MOV DL,byte ptr [EBP + -0x70]
0050CA1A  8A 83 F9 0B 00 00         MOV AL,byte ptr [EBX + 0xbf9]
0050CA20  3A D0                     CMP DL,AL
0050CA22  0F 85 DF 15 00 00         JNZ 0x0050e007
0050CA28  32 C9                     XOR CL,CL
0050CA2A  32 D2                     XOR DL,DL
0050CA2C  33 C0                     XOR EAX,EAX
LAB_0050ca2e:
0050CA2E  80 BC 03 FE 0B 00 00 00   CMP byte ptr [EBX + EAX*0x1 + 0xbfe],0x0
0050CA36  74 02                     JZ 0x0050ca3a
0050CA38  FE C2                     INC DL
LAB_0050ca3a:
0050CA3A  40                        INC EAX
0050CA3B  83 F8 06                  CMP EAX,0x6
0050CA3E  72 EE                     JC 0x0050ca2e
0050CA40  33 C0                     XOR EAX,EAX
LAB_0050ca42:
0050CA42  80 7C 05 95 00            CMP byte ptr [EBP + EAX*0x1 + -0x6b],0x0
0050CA47  74 02                     JZ 0x0050ca4b
0050CA49  FE C1                     INC CL
LAB_0050ca4b:
0050CA4B  40                        INC EAX
0050CA4C  83 F8 06                  CMP EAX,0x6
0050CA4F  72 F1                     JC 0x0050ca42
0050CA51  3A D1                     CMP DL,CL
0050CA53  74 0E                     JZ 0x0050ca63
0050CA55  6A 01                     PUSH 0x1
0050CA57  8B CB                     MOV ECX,EBX
0050CA59  E8 A4 6B EF FF            CALL 0x00403602
0050CA5E  E9 BB 00 00 00            JMP 0x0050cb1e
LAB_0050ca63:
0050CA63  B9 03 00 00 00            MOV ECX,0x3
0050CA68  8D 7D 95                  LEA EDI,[EBP + -0x6b]
0050CA6B  8D B3 FE 0B 00 00         LEA ESI,[EBX + 0xbfe]
0050CA71  33 C0                     XOR EAX,EAX
0050CA73  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0050CA76  74 5A                     JZ 0x0050cad2
0050CA78  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
0050CA7F  8B 93 02 03 00 00         MOV EDX,dword ptr [EBX + 0x302]
0050CA85  8D 4B 18                  LEA ECX,[EBX + 0x18]
0050CA88  51                        PUSH ECX
0050CA89  52                        PUSH EDX
0050CA8A  6A 02                     PUSH 0x2
0050CA8C  8B CB                     MOV ECX,EBX
0050CA8E  E8 ED 95 1D 00            CALL 0x006e6080
0050CA93  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
0050CA97  8D B3 FE 0B 00 00         LEA ESI,[EBX + 0xbfe]
LAB_0050ca9d:
0050CA9D  80 3E 00                  CMP byte ptr [ESI],0x0
0050CAA0  74 0D                     JZ 0x0050caaf
0050CAA2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0050CAA5  8B CB                     MOV ECX,EBX
0050CAA7  50                        PUSH EAX
0050CAA8  6A 00                     PUSH 0x0
0050CAAA  E8 8F 66 EF FF            CALL 0x0040313e
LAB_0050caaf:
0050CAAF  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
0050CAB2  FE C0                     INC AL
0050CAB4  46                        INC ESI
0050CAB5  3C 06                     CMP AL,0x6
0050CAB7  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0050CABA  72 E1                     JC 0x0050ca9d
0050CABC  6A 00                     PUSH 0x0
0050CABE  8B CB                     MOV ECX,EBX
0050CAC0  E8 DC 80 EF FF            CALL 0x00404ba1
0050CAC5  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0050CACB  E8 2C 76 EF FF            CALL 0x004040fc
0050CAD0  EB 16                     JMP 0x0050cae8
LAB_0050cad2:
0050CAD2  8A 8B FD 0B 00 00         MOV CL,byte ptr [EBX + 0xbfd]
0050CAD8  8A 45 94                  MOV AL,byte ptr [EBP + -0x6c]
0050CADB  3A C8                     CMP CL,AL
0050CADD  74 09                     JZ 0x0050cae8
0050CADF  6A 00                     PUSH 0x0
0050CAE1  8B CB                     MOV ECX,EBX
0050CAE3  E8 B9 80 EF FF            CALL 0x00404ba1
LAB_0050cae8:
0050CAE8  B9 03 00 00 00            MOV ECX,0x3
0050CAED  8D 7D 9B                  LEA EDI,[EBP + -0x65]
0050CAF0  8D B3 04 0C 00 00         LEA ESI,[EBX + 0xc04]
0050CAF6  33 D2                     XOR EDX,EDX
0050CAF8  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0050CAFB  75 0D                     JNZ 0x0050cb0a
0050CAFD  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
0050CB03  8A 4D 93                  MOV CL,byte ptr [EBP + -0x6d]
0050CB06  3A C1                     CMP AL,CL
0050CB08  74 14                     JZ 0x0050cb1e
LAB_0050cb0a:
0050CB0A  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0050CB0D  8D 83 F5 0B 00 00         LEA EAX,[EBX + 0xbf5]
0050CB13  51                        PUSH ECX
0050CB14  50                        PUSH EAX
0050CB15  6A 00                     PUSH 0x0
0050CB17  8B CB                     MOV ECX,EBX
0050CB19  E8 6B 84 EF FF            CALL 0x00404f89
LAB_0050cb1e:
0050CB1E  8A 93 0A 0C 00 00         MOV DL,byte ptr [EBX + 0xc0a]
0050CB24  8A 45 A1                  MOV AL,byte ptr [EBP + -0x5f]
0050CB27  3A D0                     CMP DL,AL
0050CB29  75 0D                     JNZ 0x0050cb38
0050CB2B  8A 45 93                  MOV AL,byte ptr [EBP + -0x6d]
0050CB2E  8A 8B FC 0B 00 00         MOV CL,byte ptr [EBX + 0xbfc]
0050CB34  3A C8                     CMP CL,AL
0050CB36  74 3E                     JZ 0x0050cb76
LAB_0050cb38:
0050CB38  8B 83 C4 09 00 00         MOV EAX,dword ptr [EBX + 0x9c4]
0050CB3E  85 C0                     TEST EAX,EAX
0050CB40  74 34                     JZ 0x0050cb76
0050CB42  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
0050CB49  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
0050CB4F  84 C0                     TEST AL,AL
0050CB51  74 0A                     JZ 0x0050cb5d
0050CB53  33 C0                     XOR EAX,EAX
0050CB55  8A 83 0A 0C 00 00         MOV AL,byte ptr [EBX + 0xc0a]
0050CB5B  EB 02                     JMP 0x0050cb5f
LAB_0050cb5d:
0050CB5D  33 C0                     XOR EAX,EAX
LAB_0050cb5f:
0050CB5F  8B 93 C4 09 00 00         MOV EDX,dword ptr [EBX + 0x9c4]
0050CB65  8D 4B 18                  LEA ECX,[EBX + 0x18]
0050CB68  51                        PUSH ECX
0050CB69  52                        PUSH EDX
0050CB6A  6A 02                     PUSH 0x2
0050CB6C  8B CB                     MOV ECX,EBX
0050CB6E  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0050CB71  E8 0A 95 1D 00            CALL 0x006e6080
LAB_0050cb76:
0050CB76  8D B3 0B 0C 00 00         LEA ESI,[EBX + 0xc0b]
0050CB7C  B9 03 00 00 00            MOV ECX,0x3
0050CB81  8D 7D A2                  LEA EDI,[EBP + -0x5e]
0050CB84  33 C0                     XOR EAX,EAX
0050CB86  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0050CB89  75 0D                     JNZ 0x0050cb98
0050CB8B  8A 4D 93                  MOV CL,byte ptr [EBP + -0x6d]
0050CB8E  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
0050CB94  3A C1                     CMP AL,CL
0050CB96  74 47                     JZ 0x0050cbdf
LAB_0050cb98:
0050CB98  33 FF                     XOR EDI,EDI
0050CB9A  8D B3 1F 0B 00 00         LEA ESI,[EBX + 0xb1f]
LAB_0050cba0:
0050CBA0  83 3E 00                  CMP dword ptr [ESI],0x0
0050CBA3  74 31                     JZ 0x0050cbd6
0050CBA5  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
0050CBAC  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
0050CBB2  84 C0                     TEST AL,AL
0050CBB4  74 0B                     JZ 0x0050cbc1
0050CBB6  33 C0                     XOR EAX,EAX
0050CBB8  8A 84 3B 0B 0C 00 00      MOV AL,byte ptr [EBX + EDI*0x1 + 0xc0b]
0050CBBF  EB 02                     JMP 0x0050cbc3
LAB_0050cbc1:
0050CBC1  33 C0                     XOR EAX,EAX
LAB_0050cbc3:
0050CBC3  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0050CBC6  8B 06                     MOV EAX,dword ptr [ESI]
0050CBC8  8D 53 18                  LEA EDX,[EBX + 0x18]
0050CBCB  8B CB                     MOV ECX,EBX
0050CBCD  52                        PUSH EDX
0050CBCE  50                        PUSH EAX
0050CBCF  6A 02                     PUSH 0x2
0050CBD1  E8 AA 94 1D 00            CALL 0x006e6080
LAB_0050cbd6:
0050CBD6  47                        INC EDI
0050CBD7  83 C6 04                  ADD ESI,0x4
0050CBDA  83 FF 06                  CMP EDI,0x6
0050CBDD  72 C1                     JC 0x0050cba0
LAB_0050cbdf:
0050CBDF  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
0050CBE5  83 C0 AD                  ADD EAX,-0x53
0050CBE8  83 F8 20                  CMP EAX,0x20
0050CBEB  0F 87 F0 13 00 00         JA 0x0050dfe1
0050CBF1  33 C9                     XOR ECX,ECX
0050CBF3  8A 88 E4 E0 50 00         MOV CL,byte ptr [EAX + 0x50e0e4]
switchD_0050cbf9::switchD:
0050CBF9  FF 24 8D A8 E0 50 00      JMP dword ptr [ECX*0x4 + 0x50e0a8]
switchD_0050cbf9::caseD_5d:
0050CC00  8B 93 E1 09 00 00         MOV EDX,dword ptr [EBX + 0x9e1]
0050CC06  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050CC0C  52                        PUSH EDX
0050CC0D  6A 01                     PUSH 0x1
0050CC0F  6A 46                     PUSH 0x46
0050CC11  6A 00                     PUSH 0x0
0050CC13  50                        PUSH EAX
0050CC14  E8 10 66 EF FF            CALL 0x00403229
0050CC19  83 C4 14                  ADD ESP,0x14
0050CC1C  8B CB                     MOV ECX,EBX
0050CC1E  E8 F3 6E EF FF            CALL 0x00403b16
0050CC23  E9 B9 13 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_53:
0050CC28  8A 83 3C 0C 00 00         MOV AL,byte ptr [EBX + 0xc3c]
0050CC2E  8A 4D D3                  MOV CL,byte ptr [EBP + -0x2d]
0050CC31  3A C8                     CMP CL,AL
0050CC33  0F 85 06 02 00 00         JNZ 0x0050ce3f
0050CC39  25 FF 00 00 00            AND EAX,0xff
0050CC3E  48                        DEC EAX
0050CC3F  0F 84 EF 00 00 00         JZ 0x0050cd34
0050CC45  48                        DEC EAX
0050CC46  74 72                     JZ 0x0050ccba
0050CC48  83 E8 02                  SUB EAX,0x2
0050CC4B  0F 85 B5 01 00 00         JNZ 0x0050ce06
0050CC51  8A 8B 31 0C 00 00         MOV CL,byte ptr [EBX + 0xc31]
0050CC57  8A 45 C8                  MOV AL,byte ptr [EBP + -0x38]
0050CC5A  3A C8                     CMP CL,AL
0050CC5C  74 1C                     JZ 0x0050cc7a
0050CC5E  8B CB                     MOV ECX,EBX
0050CC60  E8 2B 59 EF FF            CALL 0x00402590
0050CC65  6A 01                     PUSH 0x1
0050CC67  8B CB                     MOV ECX,EBX
0050CC69  E8 94 69 EF FF            CALL 0x00403602
0050CC6E  8B CB                     MOV ECX,EBX
0050CC70  E8 2B 8F EF FF            CALL 0x00405ba0
0050CC75  E9 8C 01 00 00            JMP 0x0050ce06
LAB_0050cc7a:
0050CC7A  8A 93 33 0C 00 00         MOV DL,byte ptr [EBX + 0xc33]
0050CC80  8A 45 CA                  MOV AL,byte ptr [EBP + -0x36]
0050CC83  3A D0                     CMP DL,AL
0050CC85  0F 84 7B 01 00 00         JZ 0x0050ce06
0050CC8B  8B 83 E1 09 00 00         MOV EAX,dword ptr [EBX + 0x9e1]
0050CC91  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050CC97  6A 19                     PUSH 0x19
0050CC99  6A 32                     PUSH 0x32
0050CC9B  6A 0A                     PUSH 0xa
0050CC9D  6A 5C                     PUSH 0x5c
0050CC9F  6A 00                     PUSH 0x0
0050CCA1  50                        PUSH EAX
0050CCA2  6A 50                     PUSH 0x50
0050CCA4  6A 5C                     PUSH 0x5c
0050CCA6  6A 00                     PUSH 0x0
0050CCA8  51                        PUSH ECX
0050CCA9  E8 42 89 1A 00            CALL 0x006b55f0
0050CCAE  8B CB                     MOV ECX,EBX
0050CCB0  E8 1C 72 EF FF            CALL 0x00403ed1
0050CCB5  E9 4C 01 00 00            JMP 0x0050ce06
LAB_0050ccba:
0050CCBA  8B 93 E1 09 00 00         MOV EDX,dword ptr [EBX + 0x9e1]
0050CCC0  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050CCC6  6A 0F                     PUSH 0xf
0050CCC8  68 9B 00 00 00            PUSH 0x9b
0050CCCD  6A 33                     PUSH 0x33
0050CCCF  6A 28                     PUSH 0x28
0050CCD1  6A 00                     PUSH 0x0
0050CCD3  52                        PUSH EDX
0050CCD4  6A 79                     PUSH 0x79
0050CCD6  6A 28                     PUSH 0x28
0050CCD8  6A 00                     PUSH 0x0
0050CCDA  50                        PUSH EAX
0050CCDB  E8 10 89 1A 00            CALL 0x006b55f0
0050CCE0  8B 8B 3D 0C 00 00         MOV ECX,dword ptr [EBX + 0xc3d]
0050CCE6  51                        PUSH ECX
0050CCE7  68 E4 1A 7C 00            PUSH 0x7c1ae4
0050CCEC  68 3A F3 80 00            PUSH 0x80f33a
0050CCF1  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050CCF7  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050CCFD  83 C4 0C                  ADD ESP,0xc
0050CD00  8B 8B BC 01 00 00         MOV ECX,dword ptr [EBX + 0x1bc]
0050CD06  6A 0F                     PUSH 0xf
0050CD08  68 9B 00 00 00            PUSH 0x9b
0050CD0D  6A 79                     PUSH 0x79
0050CD0F  6A 28                     PUSH 0x28
0050CD11  6A 00                     PUSH 0x0
0050CD13  52                        PUSH EDX
0050CD14  E8 77 3D 20 00            CALL 0x00710a90
0050CD19  8B 8B BC 01 00 00         MOV ECX,dword ptr [EBX + 0x1bc]
0050CD1F  6A 01                     PUSH 0x1
0050CD21  6A FF                     PUSH -0x1
0050CD23  6A FF                     PUSH -0x1
0050CD25  68 3A F3 80 00            PUSH 0x80f33a
0050CD2A  E8 91 4C 20 00            CALL 0x007119c0
0050CD2F  E9 D2 00 00 00            JMP 0x0050ce06
LAB_0050cd34:
0050CD34  8B 83 E1 09 00 00         MOV EAX,dword ptr [EBX + 0x9e1]
0050CD3A  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050CD40  6A 19                     PUSH 0x19
0050CD42  6A 32                     PUSH 0x32
0050CD44  6A 0A                     PUSH 0xa
0050CD46  6A 5C                     PUSH 0x5c
0050CD48  6A 00                     PUSH 0x0
0050CD4A  50                        PUSH EAX
0050CD4B  6A 50                     PUSH 0x50
0050CD4D  6A 5C                     PUSH 0x5c
0050CD4F  6A 00                     PUSH 0x0
0050CD51  51                        PUSH ECX
0050CD52  E8 99 88 1A 00            CALL 0x006b55f0
0050CD57  8A 93 3D 0C 00 00         MOV DL,byte ptr [EBX + 0xc3d]
0050CD5D  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050CD63  68 14 27 00 00            PUSH 0x2714
0050CD68  52                        PUSH EDX
0050CD69  6A 50                     PUSH 0x50
0050CD6B  6A 5C                     PUSH 0x5c
0050CD6D  50                        PUSH EAX
0050CD6E  8B CB                     MOV ECX,EBX
0050CD70  E8 A6 81 EF FF            CALL 0x00404f1b
0050CD75  8B 83 3D 0C 00 00         MOV EAX,dword ptr [EBX + 0xc3d]
0050CD7B  8B C8                     MOV ECX,EAX
0050CD7D  C1 E1 05                  SHL ECX,0x5
0050CD80  03 C8                     ADD ECX,EAX
0050CD82  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0050CD87  F7 E1                     MUL ECX
0050CD89  B8 00 00 00 00            MOV EAX,0x0
0050CD8E  C1 EA 05                  SHR EDX,0x5
0050CD91  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050CD94  74 36                     JZ 0x0050cdcc
0050CD96  BE 35 00 00 00            MOV ESI,0x35
0050CD9B  8B FA                     MOV EDI,EDX
0050CD9D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0050cda0:
0050CDA0  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050CDA6  6A 01                     PUSH 0x1
0050CDA8  52                        PUSH EDX
0050CDA9  E8 F2 E5 1F 00            CALL 0x0070b3a0
0050CDAE  50                        PUSH EAX
0050CDAF  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050CDB5  6A 01                     PUSH 0x1
0050CDB7  6A 7D                     PUSH 0x7d
0050CDB9  56                        PUSH ESI
0050CDBA  50                        PUSH EAX
0050CDBB  E8 69 64 EF FF            CALL 0x00403229
0050CDC0  83 C4 1C                  ADD ESP,0x1c
0050CDC3  83 C6 04                  ADD ESI,0x4
0050CDC6  4F                        DEC EDI
0050CDC7  75 D7                     JNZ 0x0050cda0
0050CDC9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0050cdcc:
0050CDCC  83 F8 21                  CMP EAX,0x21
0050CDCF  73 35                     JNC 0x0050ce06
0050CDD1  8D 34 85 35 00 00 00      LEA ESI,[EAX*0x4 + 0x35]
LAB_0050cdd8:
0050CDD8  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050CDDE  6A 00                     PUSH 0x0
0050CDE0  51                        PUSH ECX
0050CDE1  E8 BA E5 1F 00            CALL 0x0070b3a0
0050CDE6  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050CDEC  50                        PUSH EAX
0050CDED  6A 01                     PUSH 0x1
0050CDEF  6A 7D                     PUSH 0x7d
0050CDF1  56                        PUSH ESI
0050CDF2  52                        PUSH EDX
0050CDF3  E8 31 64 EF FF            CALL 0x00403229
0050CDF8  83 C6 04                  ADD ESI,0x4
0050CDFB  83 C4 1C                  ADD ESP,0x1c
0050CDFE  81 FE B9 00 00 00         CMP ESI,0xb9
0050CE04  7C D2                     JL 0x0050cdd8
LAB_0050ce06:
0050CE06  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050CE0C  85 C0                     TEST EAX,EAX
0050CE0E  0F 8C CD 11 00 00         JL 0x0050dfe1
0050CE14  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050CE1A  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050CE1D  51                        PUSH ECX
0050CE1E  52                        PUSH EDX
0050CE1F  6A FF                     PUSH -0x1
0050CE21  50                        PUSH EAX
0050CE22  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050CE27  50                        PUSH EAX
0050CE28  E8 13 68 1A 00            CALL 0x006b3640
0050CE2D  E9 AF 11 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_54:
0050CE32  8A 83 31 0C 00 00         MOV AL,byte ptr [EBX + 0xc31]
0050CE38  8A 4D C8                  MOV CL,byte ptr [EBP + -0x38]
0050CE3B  3A C1                     CMP AL,CL
0050CE3D  74 1C                     JZ 0x0050ce5b
LAB_0050ce3f:
0050CE3F  8B CB                     MOV ECX,EBX
0050CE41  E8 4A 57 EF FF            CALL 0x00402590
0050CE46  6A 01                     PUSH 0x1
0050CE48  8B CB                     MOV ECX,EBX
0050CE4A  E8 B3 67 EF FF            CALL 0x00403602
0050CE4F  8B CB                     MOV ECX,EBX
0050CE51  E8 4A 8D EF FF            CALL 0x00405ba0
0050CE56  E9 86 11 00 00            JMP 0x0050dfe1
LAB_0050ce5b:
0050CE5B  84 C0                     TEST AL,AL
0050CE5D  74 67                     JZ 0x0050cec6
0050CE5F  8A 8B 33 0C 00 00         MOV CL,byte ptr [EBX + 0xc33]
0050CE65  8A 45 CA                  MOV AL,byte ptr [EBP + -0x36]
0050CE68  3A C8                     CMP CL,AL
0050CE6A  0F 84 71 11 00 00         JZ 0x0050dfe1
0050CE70  8B 93 E1 09 00 00         MOV EDX,dword ptr [EBX + 0x9e1]
0050CE76  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050CE7C  6A 19                     PUSH 0x19
0050CE7E  6A 32                     PUSH 0x32
0050CE80  6A 0A                     PUSH 0xa
0050CE82  6A 5C                     PUSH 0x5c
0050CE84  6A 00                     PUSH 0x0
0050CE86  52                        PUSH EDX
0050CE87  6A 50                     PUSH 0x50
0050CE89  6A 5C                     PUSH 0x5c
0050CE8B  6A 00                     PUSH 0x0
0050CE8D  50                        PUSH EAX
0050CE8E  E8 5D 87 1A 00            CALL 0x006b55f0
0050CE93  8B CB                     MOV ECX,EBX
0050CE95  E8 37 70 EF FF            CALL 0x00403ed1
0050CE9A  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050CEA0  85 C0                     TEST EAX,EAX
0050CEA2  0F 8C 39 11 00 00         JL 0x0050dfe1
0050CEA8  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050CEAE  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050CEB1  51                        PUSH ECX
0050CEB2  52                        PUSH EDX
0050CEB3  6A FF                     PUSH -0x1
0050CEB5  50                        PUSH EAX
0050CEB6  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050CEBB  50                        PUSH EAX
0050CEBC  E8 7F 67 1A 00            CALL 0x006b3640
0050CEC1  E9 1B 11 00 00            JMP 0x0050dfe1
LAB_0050cec6:
0050CEC6  66 8B 8B 2F 0C 00 00      MOV CX,word ptr [EBX + 0xc2f]
0050CECD  66 3B 4D C6               CMP CX,word ptr [EBP + -0x3a]
0050CED1  0F 84 0A 11 00 00         JZ 0x0050dfe1
0050CED7  6A 01                     PUSH 0x1
0050CED9  8B CB                     MOV ECX,EBX
0050CEDB  E8 DF 77 EF FF            CALL 0x004046bf
0050CEE0  8B 93 02 03 00 00         MOV EDX,dword ptr [EBX + 0x302]
0050CEE6  85 D2                     TEST EDX,EDX
0050CEE8  0F 84 F3 10 00 00         JZ 0x0050dfe1
0050CEEE  B9 08 00 00 00            MOV ECX,0x8
0050CEF3  33 C0                     XOR EAX,EAX
0050CEF5  8D BD E4 FE FF FF         LEA EDI,[EBP + 0xfffffee4]
0050CEFB  F3 AB                     STOSD.REP ES:EDI
0050CEFD  8D 85 E4 FE FF FF         LEA EAX,[EBP + 0xfffffee4]
0050CF03  8B CB                     MOV ECX,EBX
0050CF05  50                        PUSH EAX
0050CF06  52                        PUSH EDX
0050CF07  6A 02                     PUSH 0x2
0050CF09  C7 85 F4 FE FF FF 05 00 00 00  MOV dword ptr [EBP + 0xfffffef4],0x5
0050CF13  E8 68 91 1D 00            CALL 0x006e6080
0050CF18  E9 C4 10 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_5e:
0050CF1D  33 C9                     XOR ECX,ECX
0050CF1F  66 8B 8B 34 0C 00 00      MOV CX,word ptr [EBX + 0xc34]
0050CF26  51                        PUSH ECX
0050CF27  68 FC 28 7C 00            PUSH 0x7c28fc
0050CF2C  68 3A F3 80 00            PUSH 0x80f33a
0050CF31  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050CF37  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050CF3D  83 C4 0C                  ADD ESP,0xc
0050CF40  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050CF46  6A 0F                     PUSH 0xf
0050CF48  6A 26                     PUSH 0x26
0050CF4A  6A 73                     PUSH 0x73
0050CF4C  68 91 00 00 00            PUSH 0x91
0050CF51  6A 00                     PUSH 0x0
0050CF53  52                        PUSH EDX
0050CF54  E8 37 3B 20 00            CALL 0x00710a90
0050CF59  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050CF5F  6A 04                     PUSH 0x4
0050CF61  6A FF                     PUSH -0x1
0050CF63  6A FF                     PUSH -0x1
0050CF65  68 3A F3 80 00            PUSH 0x80f33a
0050CF6A  E8 51 4A 20 00            CALL 0x007119c0
0050CF6F  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050CF75  85 C0                     TEST EAX,EAX
0050CF77  0F 8C 64 10 00 00         JL 0x0050dfe1
0050CF7D  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050CF83  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050CF86  51                        PUSH ECX
0050CF87  52                        PUSH EDX
0050CF88  6A FF                     PUSH -0x1
0050CF8A  50                        PUSH EAX
0050CF8B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050CF90  50                        PUSH EAX
0050CF91  E8 AA 66 1A 00            CALL 0x006b3640
0050CF96  E9 46 10 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_5c:
0050CF9B  8B 8B 12 0C 00 00         MOV ECX,dword ptr [EBX + 0xc12]
0050CFA1  8B 45 A9                  MOV EAX,dword ptr [EBP + -0x57]
0050CFA4  3B C8                     CMP ECX,EAX
0050CFA6  74 1C                     JZ 0x0050cfc4
0050CFA8  8B CB                     MOV ECX,EBX
0050CFAA  E8 E1 55 EF FF            CALL 0x00402590
0050CFAF  6A 00                     PUSH 0x0
0050CFB1  8B CB                     MOV ECX,EBX
0050CFB3  E8 4A 66 EF FF            CALL 0x00403602
0050CFB8  8B CB                     MOV ECX,EBX
0050CFBA  E8 E1 8B EF FF            CALL 0x00405ba0
0050CFBF  E9 1D 10 00 00            JMP 0x0050dfe1
LAB_0050cfc4:
0050CFC4  8A 83 24 0C 00 00         MOV AL,byte ptr [EBX + 0xc24]
0050CFCA  8A 4D BB                  MOV CL,byte ptr [EBP + -0x45]
0050CFCD  3A C1                     CMP AL,CL
0050CFCF  0F 84 0C 10 00 00         JZ 0x0050dfe1
0050CFD5  25 FF 00 00 00            AND EAX,0xff
0050CFDA  8B C8                     MOV ECX,EAX
0050CFDC  C1 E1 05                  SHL ECX,0x5
0050CFDF  03 C8                     ADD ECX,EAX
0050CFE1  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0050CFE6  F7 E9                     IMUL ECX
0050CFE8  C1 FA 05                  SAR EDX,0x5
0050CFEB  8B C2                     MOV EAX,EDX
0050CFED  C1 E8 1F                  SHR EAX,0x1f
0050CFF0  03 D0                     ADD EDX,EAX
0050CFF2  B8 00 00 00 00            MOV EAX,0x0
0050CFF7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050CFFA  74 36                     JZ 0x0050d032
0050CFFC  BE 35 00 00 00            MOV ESI,0x35
0050D001  8B FA                     MOV EDI,EDX
0050D003  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0050d006:
0050D006  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050D00C  6A 01                     PUSH 0x1
0050D00E  51                        PUSH ECX
0050D00F  E8 8C E3 1F 00            CALL 0x0070b3a0
0050D014  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050D01A  50                        PUSH EAX
0050D01B  6A 01                     PUSH 0x1
0050D01D  6A 7D                     PUSH 0x7d
0050D01F  56                        PUSH ESI
0050D020  52                        PUSH EDX
0050D021  E8 03 62 EF FF            CALL 0x00403229
0050D026  83 C4 1C                  ADD ESP,0x1c
0050D029  83 C6 04                  ADD ESI,0x4
0050D02C  4F                        DEC EDI
0050D02D  75 D7                     JNZ 0x0050d006
0050D02F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0050d032:
0050D032  83 F8 21                  CMP EAX,0x21
0050D035  73 35                     JNC 0x0050d06c
0050D037  8D 34 85 35 00 00 00      LEA ESI,[EAX*0x4 + 0x35]
LAB_0050d03e:
0050D03E  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050D044  6A 00                     PUSH 0x0
0050D046  50                        PUSH EAX
0050D047  E8 54 E3 1F 00            CALL 0x0070b3a0
0050D04C  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050D052  50                        PUSH EAX
0050D053  6A 01                     PUSH 0x1
0050D055  6A 7D                     PUSH 0x7d
0050D057  56                        PUSH ESI
0050D058  51                        PUSH ECX
0050D059  E8 CB 61 EF FF            CALL 0x00403229
0050D05E  83 C6 04                  ADD ESI,0x4
0050D061  83 C4 1C                  ADD ESP,0x1c
0050D064  81 FE B9 00 00 00         CMP ESI,0xb9
0050D06A  7C D2                     JL 0x0050d03e
LAB_0050d06c:
0050D06C  8B 93 E1 09 00 00         MOV EDX,dword ptr [EBX + 0x9e1]
0050D072  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050D078  6A 1E                     PUSH 0x1e
0050D07A  6A 3C                     PUSH 0x3c
0050D07C  6A 0A                     PUSH 0xa
0050D07E  6A 5C                     PUSH 0x5c
0050D080  6A 00                     PUSH 0x0
0050D082  52                        PUSH EDX
0050D083  6A 50                     PUSH 0x50
0050D085  6A 5C                     PUSH 0x5c
0050D087  6A 00                     PUSH 0x0
0050D089  50                        PUSH EAX
0050D08A  E8 61 85 1A 00            CALL 0x006b55f0
0050D08F  66 8B 8B 20 0C 00 00      MOV CX,word ptr [EBX + 0xc20]
0050D096  66 8B 93 1C 0C 00 00      MOV DX,word ptr [EBX + 0xc1c]
0050D09D  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050D0A3  6A 04                     PUSH 0x4
0050D0A5  6A 07                     PUSH 0x7
0050D0A7  51                        PUSH ECX
0050D0A8  52                        PUSH EDX
0050D0A9  50                        PUSH EAX
0050D0AA  8B CB                     MOV ECX,EBX
0050D0AC  E8 8A 59 EF FF            CALL 0x00402a3b
0050D0B1  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050D0B7  85 C0                     TEST EAX,EAX
0050D0B9  0F 8C 22 0F 00 00         JL 0x0050dfe1
0050D0BF  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050D0C5  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050D0C8  51                        PUSH ECX
0050D0C9  52                        PUSH EDX
0050D0CA  6A FF                     PUSH -0x1
0050D0CC  50                        PUSH EAX
0050D0CD  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050D0D2  50                        PUSH EAX
0050D0D3  E8 68 65 1A 00            CALL 0x006b3640
0050D0D8  E9 04 0F 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_6e:
0050D0DD  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050D0E3  8B 4D A9                  MOV ECX,dword ptr [EBP + -0x57]
0050D0E6  3B C1                     CMP EAX,ECX
0050D0E8  74 44                     JZ 0x0050d12e
0050D0EA  8B CB                     MOV ECX,EBX
0050D0EC  E8 9F 54 EF FF            CALL 0x00402590
0050D0F1  8B 93 02 03 00 00         MOV EDX,dword ptr [EBX + 0x302]
0050D0F7  85 D2                     TEST EDX,EDX
0050D0F9  0F 84 E2 0E 00 00         JZ 0x0050dfe1
0050D0FF  B9 08 00 00 00            MOV ECX,0x8
0050D104  33 C0                     XOR EAX,EAX
0050D106  8D BD 04 FF FF FF         LEA EDI,[EBP + 0xffffff04]
0050D10C  F3 AB                     STOSD.REP ES:EDI
0050D10E  8D 8D 04 FF FF FF         LEA ECX,[EBP + 0xffffff04]
0050D114  C7 85 14 FF FF FF 05 00 00 00  MOV dword ptr [EBP + 0xffffff14],0x5
0050D11E  51                        PUSH ECX
0050D11F  52                        PUSH EDX
0050D120  6A 02                     PUSH 0x2
0050D122  8B CB                     MOV ECX,EBX
0050D124  E8 57 8F 1D 00            CALL 0x006e6080
0050D129  E9 B3 0E 00 00            JMP 0x0050dfe1
LAB_0050d12e:
0050D12E  85 C0                     TEST EAX,EAX
0050D130  0F 84 D5 00 00 00         JZ 0x0050d20b
0050D136  8A 83 24 0C 00 00         MOV AL,byte ptr [EBX + 0xc24]
0050D13C  8A 4D BB                  MOV CL,byte ptr [EBP + -0x45]
0050D13F  3A C1                     CMP AL,CL
0050D141  0F 84 9A 0E 00 00         JZ 0x0050dfe1
0050D147  25 FF 00 00 00            AND EAX,0xff
0050D14C  8B C8                     MOV ECX,EAX
0050D14E  C1 E1 05                  SHL ECX,0x5
0050D151  03 C8                     ADD ECX,EAX
0050D153  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0050D158  F7 E9                     IMUL ECX
0050D15A  C1 FA 05                  SAR EDX,0x5
0050D15D  8B C2                     MOV EAX,EDX
0050D15F  C1 E8 1F                  SHR EAX,0x1f
0050D162  03 D0                     ADD EDX,EAX
0050D164  B8 00 00 00 00            MOV EAX,0x0
0050D169  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050D16C  74 36                     JZ 0x0050d1a4
0050D16E  BE 35 00 00 00            MOV ESI,0x35
0050D173  8B FA                     MOV EDI,EDX
0050D175  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0050d178:
0050D178  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050D17E  6A 01                     PUSH 0x1
0050D180  51                        PUSH ECX
0050D181  E8 1A E2 1F 00            CALL 0x0070b3a0
0050D186  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050D18C  50                        PUSH EAX
0050D18D  6A 01                     PUSH 0x1
0050D18F  6A 7D                     PUSH 0x7d
0050D191  56                        PUSH ESI
0050D192  52                        PUSH EDX
0050D193  E8 91 60 EF FF            CALL 0x00403229
0050D198  83 C4 1C                  ADD ESP,0x1c
0050D19B  83 C6 04                  ADD ESI,0x4
0050D19E  4F                        DEC EDI
0050D19F  75 D7                     JNZ 0x0050d178
0050D1A1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0050d1a4:
0050D1A4  83 F8 21                  CMP EAX,0x21
0050D1A7  73 35                     JNC 0x0050d1de
0050D1A9  8D 34 85 35 00 00 00      LEA ESI,[EAX*0x4 + 0x35]
LAB_0050d1b0:
0050D1B0  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050D1B6  6A 00                     PUSH 0x0
0050D1B8  50                        PUSH EAX
0050D1B9  E8 E2 E1 1F 00            CALL 0x0070b3a0
0050D1BE  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050D1C4  50                        PUSH EAX
0050D1C5  6A 01                     PUSH 0x1
0050D1C7  6A 7D                     PUSH 0x7d
0050D1C9  56                        PUSH ESI
0050D1CA  51                        PUSH ECX
0050D1CB  E8 59 60 EF FF            CALL 0x00403229
0050D1D0  83 C6 04                  ADD ESI,0x4
0050D1D3  83 C4 1C                  ADD ESP,0x1c
0050D1D6  81 FE B9 00 00 00         CMP ESI,0xb9
0050D1DC  7C D2                     JL 0x0050d1b0
LAB_0050d1de:
0050D1DE  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050D1E4  85 C0                     TEST EAX,EAX
0050D1E6  0F 8C F5 0D 00 00         JL 0x0050dfe1
0050D1EC  8B 93 A8 00 00 00         MOV EDX,dword ptr [EBX + 0xa8]
0050D1F2  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
0050D1F5  52                        PUSH EDX
0050D1F6  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0050D1FC  51                        PUSH ECX
0050D1FD  6A FF                     PUSH -0x1
0050D1FF  50                        PUSH EAX
0050D200  52                        PUSH EDX
0050D201  E8 3A 64 1A 00            CALL 0x006b3640
0050D206  E9 D6 0D 00 00            JMP 0x0050dfe1
LAB_0050d20b:
0050D20B  33 C0                     XOR EAX,EAX
0050D20D  66 8B 83 2F 0C 00 00      MOV AX,word ptr [EBX + 0xc2f]
0050D214  50                        PUSH EAX
0050D215  68 90 18 7C 00            PUSH 0x7c1890
0050D21A  68 3A F3 80 00            PUSH 0x80f33a
0050D21F  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050D225  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050D22B  83 C4 0C                  ADD ESP,0xc
0050D22E  6A 0F                     PUSH 0xf
0050D230  68 B7 00 00 00            PUSH 0xb7
0050D235  6A 58                     PUSH 0x58
0050D237  6A 1C                     PUSH 0x1c
0050D239  6A 00                     PUSH 0x0
0050D23B  51                        PUSH ECX
0050D23C  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D242  E8 49 38 20 00            CALL 0x00710a90
0050D247  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D24D  6A 05                     PUSH 0x5
0050D24F  6A FF                     PUSH -0x1
0050D251  6A FF                     PUSH -0x1
0050D253  68 3A F3 80 00            PUSH 0x80f33a
0050D258  E8 63 47 20 00            CALL 0x007119c0
0050D25D  E9 7F 0D 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_63:
0050D262  8B 93 12 0C 00 00         MOV EDX,dword ptr [EBX + 0xc12]
0050D268  8B 45 A9                  MOV EAX,dword ptr [EBP + -0x57]
0050D26B  3B D0                     CMP EDX,EAX
0050D26D  74 44                     JZ 0x0050d2b3
0050D26F  8B CB                     MOV ECX,EBX
0050D271  E8 1A 53 EF FF            CALL 0x00402590
0050D276  8B 93 02 03 00 00         MOV EDX,dword ptr [EBX + 0x302]
0050D27C  85 D2                     TEST EDX,EDX
0050D27E  0F 84 5D 0D 00 00         JZ 0x0050dfe1
0050D284  B9 08 00 00 00            MOV ECX,0x8
0050D289  33 C0                     XOR EAX,EAX
0050D28B  8D BD 24 FF FF FF         LEA EDI,[EBP + 0xffffff24]
0050D291  F3 AB                     STOSD.REP ES:EDI
0050D293  8D 85 24 FF FF FF         LEA EAX,[EBP + 0xffffff24]
0050D299  8B CB                     MOV ECX,EBX
0050D29B  50                        PUSH EAX
0050D29C  52                        PUSH EDX
0050D29D  6A 02                     PUSH 0x2
0050D29F  C7 85 34 FF FF FF 05 00 00 00  MOV dword ptr [EBP + 0xffffff34],0x5
0050D2A9  E8 D2 8D 1D 00            CALL 0x006e6080
0050D2AE  E9 2E 0D 00 00            JMP 0x0050dfe1
LAB_0050d2b3:
0050D2B3  8A 83 24 0C 00 00         MOV AL,byte ptr [EBX + 0xc24]
0050D2B9  8A 4D BB                  MOV CL,byte ptr [EBP + -0x45]
0050D2BC  3A C1                     CMP AL,CL
0050D2BE  0F 84 BA 00 00 00         JZ 0x0050d37e
0050D2C4  25 FF 00 00 00            AND EAX,0xff
0050D2C9  8B C8                     MOV ECX,EAX
0050D2CB  C1 E1 05                  SHL ECX,0x5
0050D2CE  03 C8                     ADD ECX,EAX
0050D2D0  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0050D2D5  F7 E9                     IMUL ECX
0050D2D7  C1 FA 05                  SAR EDX,0x5
0050D2DA  8B CA                     MOV ECX,EDX
0050D2DC  B8 00 00 00 00            MOV EAX,0x0
0050D2E1  C1 E9 1F                  SHR ECX,0x1f
0050D2E4  03 D1                     ADD EDX,ECX
0050D2E6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050D2E9  74 36                     JZ 0x0050d321
0050D2EB  BE 35 00 00 00            MOV ESI,0x35
0050D2F0  8B FA                     MOV EDI,EDX
0050D2F2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0050d2f5:
0050D2F5  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050D2FB  6A 01                     PUSH 0x1
0050D2FD  52                        PUSH EDX
0050D2FE  E8 9D E0 1F 00            CALL 0x0070b3a0
0050D303  50                        PUSH EAX
0050D304  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050D30A  6A 01                     PUSH 0x1
0050D30C  6A 7D                     PUSH 0x7d
0050D30E  56                        PUSH ESI
0050D30F  50                        PUSH EAX
0050D310  E8 14 5F EF FF            CALL 0x00403229
0050D315  83 C4 1C                  ADD ESP,0x1c
0050D318  83 C6 04                  ADD ESI,0x4
0050D31B  4F                        DEC EDI
0050D31C  75 D7                     JNZ 0x0050d2f5
0050D31E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0050d321:
0050D321  83 F8 21                  CMP EAX,0x21
0050D324  73 35                     JNC 0x0050d35b
0050D326  8D 34 85 35 00 00 00      LEA ESI,[EAX*0x4 + 0x35]
LAB_0050d32d:
0050D32D  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050D333  6A 00                     PUSH 0x0
0050D335  51                        PUSH ECX
0050D336  E8 65 E0 1F 00            CALL 0x0070b3a0
0050D33B  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050D341  50                        PUSH EAX
0050D342  6A 01                     PUSH 0x1
0050D344  6A 7D                     PUSH 0x7d
0050D346  56                        PUSH ESI
0050D347  52                        PUSH EDX
0050D348  E8 DC 5E EF FF            CALL 0x00403229
0050D34D  83 C6 04                  ADD ESI,0x4
0050D350  83 C4 1C                  ADD ESP,0x1c
0050D353  81 FE B9 00 00 00         CMP ESI,0xb9
0050D359  7C D2                     JL 0x0050d32d
LAB_0050d35b:
0050D35B  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050D361  85 C0                     TEST EAX,EAX
0050D363  7C 19                     JL 0x0050d37e
0050D365  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050D36B  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050D36E  51                        PUSH ECX
0050D36F  52                        PUSH EDX
0050D370  6A FF                     PUSH -0x1
0050D372  50                        PUSH EAX
0050D373  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050D378  50                        PUSH EAX
0050D379  E8 C2 62 1A 00            CALL 0x006b3640
LAB_0050d37e:
0050D37E  66 8B 8B 1C 0C 00 00      MOV CX,word ptr [EBX + 0xc1c]
0050D385  66 3B 4D B3               CMP CX,word ptr [EBP + -0x4d]
0050D389  75 11                     JNZ 0x0050d39c
0050D38B  66 8B 93 20 0C 00 00      MOV DX,word ptr [EBX + 0xc20]
0050D392  66 3B 55 B7               CMP DX,word ptr [EBP + -0x49]
0050D396  0F 84 45 0C 00 00         JZ 0x0050dfe1
LAB_0050d39c:
0050D39C  8B 83 DD 09 00 00         MOV EAX,dword ptr [EBX + 0x9dd]
0050D3A2  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D3A8  6A 00                     PUSH 0x0
0050D3AA  6A 0C                     PUSH 0xc
0050D3AC  6A 18                     PUSH 0x18
0050D3AE  6A 13                     PUSH 0x13
0050D3B0  6A 64                     PUSH 0x64
0050D3B2  6A 00                     PUSH 0x0
0050D3B4  50                        PUSH EAX
0050D3B5  E8 E6 37 20 00            CALL 0x00710ba0
0050D3BA  8B F0                     MOV ESI,EAX
0050D3BC  85 F6                     TEST ESI,ESI
0050D3BE  0F 84 1D 0C 00 00         JZ 0x0050dfe1
0050D3C4  66 8B 83 1C 0C 00 00      MOV AX,word ptr [EBX + 0xc1c]
0050D3CB  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
0050D3D1  66 3B 45 B3               CMP AX,word ptr [EBP + -0x4d]
0050D3D5  74 65                     JZ 0x0050d43c
0050D3D7  25 FF FF 00 00            AND EAX,0xffff
0050D3DC  50                        PUSH EAX
0050D3DD  68 E4 1A 7C 00            PUSH 0x7c1ae4
0050D3E2  68 3A F3 80 00            PUSH 0x80f33a
0050D3E7  FF D7                     CALL EDI
0050D3E9  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D3EF  83 C4 0C                  ADD ESP,0xc
0050D3F2  6A 07                     PUSH 0x7
0050D3F4  6A FF                     PUSH -0x1
0050D3F6  6A FF                     PUSH -0x1
0050D3F8  68 3A F3 80 00            PUSH 0x80f33a
0050D3FD  E8 BE 45 20 00            CALL 0x007119c0
0050D402  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050D408  56                        PUSH ESI
0050D409  6A 01                     PUSH 0x1
0050D40B  6A 59                     PUSH 0x59
0050D40D  6A 64                     PUSH 0x64
0050D40F  51                        PUSH ECX
0050D410  E8 14 5E EF FF            CALL 0x00403229
0050D415  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050D41B  83 C4 14                  ADD ESP,0x14
0050D41E  85 C0                     TEST EAX,EAX
0050D420  7C 1A                     JL 0x0050d43c
0050D422  8B 93 A8 00 00 00         MOV EDX,dword ptr [EBX + 0xa8]
0050D428  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
0050D42B  52                        PUSH EDX
0050D42C  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0050D432  51                        PUSH ECX
0050D433  6A FF                     PUSH -0x1
0050D435  50                        PUSH EAX
0050D436  52                        PUSH EDX
0050D437  E8 04 62 1A 00            CALL 0x006b3640
LAB_0050d43c:
0050D43C  66 8B 83 20 0C 00 00      MOV AX,word ptr [EBX + 0xc20]
0050D443  66 3B 45 B7               CMP AX,word ptr [EBP + -0x49]
0050D447  74 67                     JZ 0x0050d4b0
0050D449  25 FF FF 00 00            AND EAX,0xffff
0050D44E  50                        PUSH EAX
0050D44F  68 E4 1A 7C 00            PUSH 0x7c1ae4
0050D454  68 3A F3 80 00            PUSH 0x80f33a
0050D459  FF D7                     CALL EDI
0050D45B  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D461  83 C4 0C                  ADD ESP,0xc
0050D464  6A 05                     PUSH 0x5
0050D466  6A FF                     PUSH -0x1
0050D468  6A FF                     PUSH -0x1
0050D46A  68 3A F3 80 00            PUSH 0x80f33a
0050D46F  E8 4C 45 20 00            CALL 0x007119c0
0050D474  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050D47A  56                        PUSH ESI
0050D47B  6A 01                     PUSH 0x1
0050D47D  6A 59                     PUSH 0x59
0050D47F  68 AF 00 00 00            PUSH 0xaf
0050D484  50                        PUSH EAX
0050D485  E8 9F 5D EF FF            CALL 0x00403229
0050D48A  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050D490  83 C4 14                  ADD ESP,0x14
0050D493  85 C0                     TEST EAX,EAX
0050D495  7C 19                     JL 0x0050d4b0
0050D497  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050D49D  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050D4A0  51                        PUSH ECX
0050D4A1  52                        PUSH EDX
0050D4A2  6A FF                     PUSH -0x1
0050D4A4  50                        PUSH EAX
0050D4A5  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050D4AA  50                        PUSH EAX
0050D4AB  E8 90 61 1A 00            CALL 0x006b3640
LAB_0050d4b0:
0050D4B0  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D4B6  E9 21 0B 00 00            JMP 0x0050dfdc
switchD_0050cbf9::caseD_61:
0050D4BB  8A 83 2A 0C 00 00         MOV AL,byte ptr [EBX + 0xc2a]
0050D4C1  8A 4D C1                  MOV CL,byte ptr [EBP + -0x3f]
0050D4C4  3A C1                     CMP AL,CL
0050D4C6  0F 84 34 01 00 00         JZ 0x0050d600
0050D4CC  25 FF 00 00 00            AND EAX,0xff
0050D4D1  8B C8                     MOV ECX,EAX
0050D4D3  C1 E1 05                  SHL ECX,0x5
0050D4D6  03 C8                     ADD ECX,EAX
0050D4D8  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0050D4DD  F7 E9                     IMUL ECX
0050D4DF  C1 FA 05                  SAR EDX,0x5
0050D4E2  8B CA                     MOV ECX,EDX
0050D4E4  B8 00 00 00 00            MOV EAX,0x0
0050D4E9  C1 E9 1F                  SHR ECX,0x1f
0050D4EC  03 D1                     ADD EDX,ECX
0050D4EE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050D4F1  74 36                     JZ 0x0050d529
0050D4F3  BE 35 00 00 00            MOV ESI,0x35
0050D4F8  8B FA                     MOV EDI,EDX
0050D4FA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0050d4fd:
0050D4FD  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050D503  6A 01                     PUSH 0x1
0050D505  52                        PUSH EDX
0050D506  E8 95 DE 1F 00            CALL 0x0070b3a0
0050D50B  50                        PUSH EAX
0050D50C  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050D512  6A 01                     PUSH 0x1
0050D514  6A 5D                     PUSH 0x5d
0050D516  56                        PUSH ESI
0050D517  50                        PUSH EAX
0050D518  E8 0C 5D EF FF            CALL 0x00403229
0050D51D  83 C4 1C                  ADD ESP,0x1c
0050D520  83 C6 04                  ADD ESI,0x4
0050D523  4F                        DEC EDI
0050D524  75 D7                     JNZ 0x0050d4fd
0050D526  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0050d529:
0050D529  83 F8 21                  CMP EAX,0x21
0050D52C  73 35                     JNC 0x0050d563
0050D52E  8D 34 85 35 00 00 00      LEA ESI,[EAX*0x4 + 0x35]
LAB_0050d535:
0050D535  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050D53B  6A 00                     PUSH 0x0
0050D53D  51                        PUSH ECX
0050D53E  E8 5D DE 1F 00            CALL 0x0070b3a0
0050D543  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050D549  50                        PUSH EAX
0050D54A  6A 01                     PUSH 0x1
0050D54C  6A 5D                     PUSH 0x5d
0050D54E  56                        PUSH ESI
0050D54F  52                        PUSH EDX
0050D550  E8 D4 5C EF FF            CALL 0x00403229
0050D555  83 C6 04                  ADD ESI,0x4
0050D558  83 C4 1C                  ADD ESP,0x1c
0050D55B  81 FE B9 00 00 00         CMP ESI,0xb9
0050D561  7C D2                     JL 0x0050d535
LAB_0050d563:
0050D563  8B 83 E1 09 00 00         MOV EAX,dword ptr [EBX + 0x9e1]
0050D569  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050D56F  6A 00                     PUSH 0x0
0050D571  6A 0C                     PUSH 0xc
0050D573  68 C3 00 00 00            PUSH 0xc3
0050D578  6A 22                     PUSH 0x22
0050D57A  6A 15                     PUSH 0x15
0050D57C  6A 00                     PUSH 0x0
0050D57E  50                        PUSH EAX
0050D57F  E8 1C 36 20 00            CALL 0x00710ba0
0050D584  8B F0                     MOV ESI,EAX
0050D586  85 F6                     TEST ESI,ESI
0050D588  74 53                     JZ 0x0050d5dd
0050D58A  33 C9                     XOR ECX,ECX
0050D58C  8A 8B 2A 0C 00 00         MOV CL,byte ptr [EBX + 0xc2a]
0050D592  51                        PUSH ECX
0050D593  68 E0 28 7C 00            PUSH 0x7c28e0
0050D598  68 3A F3 80 00            PUSH 0x80f33a
0050D59D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050D5A3  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050D5A9  83 C4 0C                  ADD ESP,0xc
0050D5AC  6A 05                     PUSH 0x5
0050D5AE  6A FF                     PUSH -0x1
0050D5B0  6A FF                     PUSH -0x1
0050D5B2  68 3A F3 80 00            PUSH 0x80f33a
0050D5B7  E8 04 44 20 00            CALL 0x007119c0
0050D5BC  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050D5C2  56                        PUSH ESI
0050D5C3  6A 01                     PUSH 0x1
0050D5C5  6A 68                     PUSH 0x68
0050D5C7  6A 15                     PUSH 0x15
0050D5C9  52                        PUSH EDX
0050D5CA  E8 5A 5C EF FF            CALL 0x00403229
0050D5CF  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050D5D5  83 C4 14                  ADD ESP,0x14
0050D5D8  E8 23 39 20 00            CALL 0x00710f00
LAB_0050d5dd:
0050D5DD  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050D5E3  85 C0                     TEST EAX,EAX
0050D5E5  7C 19                     JL 0x0050d600
0050D5E7  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050D5ED  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050D5F0  51                        PUSH ECX
0050D5F1  52                        PUSH EDX
0050D5F2  6A FF                     PUSH -0x1
0050D5F4  50                        PUSH EAX
0050D5F5  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050D5FA  50                        PUSH EAX
0050D5FB  E8 40 60 1A 00            CALL 0x006b3640
LAB_0050d600:
0050D600  8A 83 29 0C 00 00         MOV AL,byte ptr [EBX + 0xc29]
0050D606  8A 4D C0                  MOV CL,byte ptr [EBP + -0x40]
0050D609  3A C1                     CMP AL,CL
0050D60B  0F 84 D0 09 00 00         JZ 0x0050dfe1
0050D611  B9 00 00 00 00            MOV ECX,0x0
0050D616  25 FF 00 00 00            AND EAX,0xff
0050D61B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0050D61E  76 36                     JBE 0x0050d656
0050D620  BE 35 00 00 00            MOV ESI,0x35
0050D625  8B F8                     MOV EDI,EAX
0050D627  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0050d62a:
0050D62A  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050D630  6A 01                     PUSH 0x1
0050D632  51                        PUSH ECX
0050D633  E8 68 DD 1F 00            CALL 0x0070b3a0
0050D638  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050D63E  50                        PUSH EAX
0050D63F  6A 01                     PUSH 0x1
0050D641  6A 7D                     PUSH 0x7d
0050D643  56                        PUSH ESI
0050D644  52                        PUSH EDX
0050D645  E8 DF 5B EF FF            CALL 0x00403229
0050D64A  83 C4 1C                  ADD ESP,0x1c
0050D64D  83 C6 04                  ADD ESI,0x4
0050D650  4F                        DEC EDI
0050D651  75 D7                     JNZ 0x0050d62a
0050D653  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0050d656:
0050D656  83 F9 21                  CMP ECX,0x21
0050D659  73 35                     JNC 0x0050d690
0050D65B  8D 34 8D 35 00 00 00      LEA ESI,[ECX*0x4 + 0x35]
LAB_0050d662:
0050D662  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050D668  6A 00                     PUSH 0x0
0050D66A  50                        PUSH EAX
0050D66B  E8 30 DD 1F 00            CALL 0x0070b3a0
0050D670  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050D676  50                        PUSH EAX
0050D677  6A 01                     PUSH 0x1
0050D679  6A 7D                     PUSH 0x7d
0050D67B  56                        PUSH ESI
0050D67C  51                        PUSH ECX
0050D67D  E8 A7 5B EF FF            CALL 0x00403229
0050D682  83 C6 04                  ADD ESI,0x4
0050D685  83 C4 1C                  ADD ESP,0x1c
0050D688  81 FE B9 00 00 00         CMP ESI,0xb9
0050D68E  7C D2                     JL 0x0050d662
LAB_0050d690:
0050D690  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050D696  85 C0                     TEST EAX,EAX
0050D698  0F 8C 43 09 00 00         JL 0x0050dfe1
0050D69E  8B 93 A8 00 00 00         MOV EDX,dword ptr [EBX + 0xa8]
0050D6A4  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
0050D6A7  52                        PUSH EDX
0050D6A8  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0050D6AE  51                        PUSH ECX
0050D6AF  6A FF                     PUSH -0x1
0050D6B1  50                        PUSH EAX
0050D6B2  52                        PUSH EDX
0050D6B3  E8 88 5F 1A 00            CALL 0x006b3640
0050D6B8  E9 24 09 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_70:
0050D6BD  8A 83 29 0C 00 00         MOV AL,byte ptr [EBX + 0xc29]
0050D6C3  8A 4D C0                  MOV CL,byte ptr [EBP + -0x40]
0050D6C6  3A C1                     CMP AL,CL
0050D6C8  0F 84 13 09 00 00         JZ 0x0050dfe1
0050D6CE  25 FF 00 00 00            AND EAX,0xff
0050D6D3  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0050D6DA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0050D6DD  76 33                     JBE 0x0050d712
0050D6DF  BE 35 00 00 00            MOV ESI,0x35
0050D6E4  8B F8                     MOV EDI,EAX
0050D6E6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0050d6e9:
0050D6E9  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050D6EF  6A 01                     PUSH 0x1
0050D6F1  50                        PUSH EAX
0050D6F2  E8 A9 DC 1F 00            CALL 0x0070b3a0
0050D6F7  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050D6FD  50                        PUSH EAX
0050D6FE  6A 01                     PUSH 0x1
0050D700  6A 7D                     PUSH 0x7d
0050D702  56                        PUSH ESI
0050D703  51                        PUSH ECX
0050D704  E8 20 5B EF FF            CALL 0x00403229
0050D709  83 C4 1C                  ADD ESP,0x1c
0050D70C  83 C6 04                  ADD ESI,0x4
0050D70F  4F                        DEC EDI
0050D710  75 D7                     JNZ 0x0050d6e9
LAB_0050d712:
0050D712  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0050D715  BF 21 00 00 00            MOV EDI,0x21
0050D71A  3B C7                     CMP EAX,EDI
0050D71C  73 37                     JNC 0x0050d755
0050D71E  8B D0                     MOV EDX,EAX
0050D720  8D 34 95 35 00 00 00      LEA ESI,[EDX*0x4 + 0x35]
LAB_0050d727:
0050D727  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050D72D  6A 00                     PUSH 0x0
0050D72F  50                        PUSH EAX
0050D730  E8 6B DC 1F 00            CALL 0x0070b3a0
0050D735  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050D73B  50                        PUSH EAX
0050D73C  6A 01                     PUSH 0x1
0050D73E  6A 7D                     PUSH 0x7d
0050D740  56                        PUSH ESI
0050D741  51                        PUSH ECX
0050D742  E8 E2 5A EF FF            CALL 0x00403229
0050D747  83 C6 04                  ADD ESI,0x4
0050D74A  83 C4 1C                  ADD ESP,0x1c
0050D74D  81 FE B9 00 00 00         CMP ESI,0xb9
0050D753  7C D2                     JL 0x0050d727
LAB_0050d755:
0050D755  8B 93 E1 09 00 00         MOV EDX,dword ptr [EBX + 0x9e1]
0050D75B  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050D761  6A 00                     PUSH 0x0
0050D763  6A 2B                     PUSH 0x2b
0050D765  68 A4 00 00 00            PUSH 0xa4
0050D76A  6A 06                     PUSH 0x6
0050D76C  6A 24                     PUSH 0x24
0050D76E  6A 00                     PUSH 0x0
0050D770  52                        PUSH EDX
0050D771  E8 2A 34 20 00            CALL 0x00710ba0
0050D776  8B F0                     MOV ESI,EAX
0050D778  85 F6                     TEST ESI,ESI
0050D77A  74 50                     JZ 0x0050d7cc
0050D77C  A1 18 76 80 00            MOV EAX,[0x00807618]
0050D781  6A FF                     PUSH -0x1
0050D783  6A FF                     PUSH -0x1
0050D785  6A 05                     PUSH 0x5
0050D787  6A FF                     PUSH -0x1
0050D789  6A FF                     PUSH -0x1
0050D78B  50                        PUSH EAX
0050D78C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0050D78F  3B C7                     CMP EAX,EDI
0050D791  1B C9                     SBB ECX,ECX
0050D793  81 C1 C4 36 00 00         ADD ECX,0x36c4
0050D799  51                        PUSH ECX
0050D79A  E8 A1 29 1A 00            CALL 0x006b0140
0050D79F  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050D7A5  50                        PUSH EAX
0050D7A6  E8 C5 43 20 00            CALL 0x00711b70
0050D7AB  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050D7B1  56                        PUSH ESI
0050D7B2  6A 01                     PUSH 0x1
0050D7B4  6A 4C                     PUSH 0x4c
0050D7B6  6A 24                     PUSH 0x24
0050D7B8  52                        PUSH EDX
0050D7B9  E8 6B 5A EF FF            CALL 0x00403229
0050D7BE  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050D7C4  83 C4 14                  ADD ESP,0x14
0050D7C7  E8 34 37 20 00            CALL 0x00710f00
LAB_0050d7cc:
0050D7CC  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050D7D2  85 C0                     TEST EAX,EAX
0050D7D4  0F 8C 07 08 00 00         JL 0x0050dfe1
0050D7DA  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050D7E0  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050D7E3  51                        PUSH ECX
0050D7E4  52                        PUSH EDX
0050D7E5  6A FF                     PUSH -0x1
0050D7E7  50                        PUSH EAX
0050D7E8  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050D7ED  50                        PUSH EAX
0050D7EE  E8 4D 5E 1A 00            CALL 0x006b3640
0050D7F3  E9 E9 07 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_62:
0050D7F8  8B 8B 12 0C 00 00         MOV ECX,dword ptr [EBX + 0xc12]
0050D7FE  8B 45 A9                  MOV EAX,dword ptr [EBP + -0x57]
0050D801  3B C8                     CMP ECX,EAX
0050D803  75 11                     JNZ 0x0050d816
0050D805  8B 93 16 0C 00 00         MOV EDX,dword ptr [EBX + 0xc16]
0050D80B  8B 45 AD                  MOV EAX,dword ptr [EBP + -0x53]
0050D80E  3B D0                     CMP EDX,EAX
0050D810  0F 84 CB 07 00 00         JZ 0x0050dfe1
LAB_0050d816:
0050D816  8B 83 F5 09 00 00         MOV EAX,dword ptr [EBX + 0x9f5]
0050D81C  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D822  6A 00                     PUSH 0x0
0050D824  6A 0B                     PUSH 0xb
0050D826  6A 24                     PUSH 0x24
0050D828  6A 20                     PUSH 0x20
0050D82A  6A 7F                     PUSH 0x7f
0050D82C  6A 00                     PUSH 0x0
0050D82E  50                        PUSH EAX
0050D82F  E8 6C 33 20 00            CALL 0x00710ba0
0050D834  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
0050D83A  8B F0                     MOV ESI,EAX
0050D83C  85 F6                     TEST ESI,ESI
0050D83E  74 4D                     JZ 0x0050d88d
0050D840  8B 8B 12 0C 00 00         MOV ECX,dword ptr [EBX + 0xc12]
0050D846  51                        PUSH ECX
0050D847  68 90 18 7C 00            PUSH 0x7c1890
0050D84C  68 3A F3 80 00            PUSH 0x80f33a
0050D851  FF D7                     CALL EDI
0050D853  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D859  83 C4 0C                  ADD ESP,0xc
0050D85C  6A 05                     PUSH 0x5
0050D85E  6A FF                     PUSH -0x1
0050D860  6A FF                     PUSH -0x1
0050D862  68 3A F3 80 00            PUSH 0x80f33a
0050D867  E8 54 41 20 00            CALL 0x007119c0
0050D86C  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050D872  56                        PUSH ESI
0050D873  6A 01                     PUSH 0x1
0050D875  6A 66                     PUSH 0x66
0050D877  6A 7F                     PUSH 0x7f
0050D879  52                        PUSH EDX
0050D87A  E8 AA 59 EF FF            CALL 0x00403229
0050D87F  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D885  83 C4 14                  ADD ESP,0x14
0050D888  E8 73 36 20 00            CALL 0x00710f00
LAB_0050d88d:
0050D88D  8B 83 F5 09 00 00         MOV EAX,dword ptr [EBX + 0x9f5]
0050D893  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D899  6A 00                     PUSH 0x0
0050D89B  6A 0B                     PUSH 0xb
0050D89D  6A 24                     PUSH 0x24
0050D89F  6A 09                     PUSH 0x9
0050D8A1  68 A5 00 00 00            PUSH 0xa5
0050D8A6  6A 00                     PUSH 0x0
0050D8A8  50                        PUSH EAX
0050D8A9  E8 F2 32 20 00            CALL 0x00710ba0
0050D8AE  8B F0                     MOV ESI,EAX
0050D8B0  85 F6                     TEST ESI,ESI
0050D8B2  74 50                     JZ 0x0050d904
0050D8B4  8B 8B 16 0C 00 00         MOV ECX,dword ptr [EBX + 0xc16]
0050D8BA  51                        PUSH ECX
0050D8BB  68 90 18 7C 00            PUSH 0x7c1890
0050D8C0  68 3A F3 80 00            PUSH 0x80f33a
0050D8C5  FF D7                     CALL EDI
0050D8C7  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D8CD  83 C4 0C                  ADD ESP,0xc
0050D8D0  6A 04                     PUSH 0x4
0050D8D2  6A FF                     PUSH -0x1
0050D8D4  6A FF                     PUSH -0x1
0050D8D6  68 3A F3 80 00            PUSH 0x80f33a
0050D8DB  E8 E0 40 20 00            CALL 0x007119c0
0050D8E0  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050D8E6  56                        PUSH ESI
0050D8E7  6A 01                     PUSH 0x1
0050D8E9  6A 4F                     PUSH 0x4f
0050D8EB  68 A5 00 00 00            PUSH 0xa5
0050D8F0  52                        PUSH EDX
0050D8F1  E8 33 59 EF FF            CALL 0x00403229
0050D8F6  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050D8FC  83 C4 14                  ADD ESP,0x14
0050D8FF  E8 FC 35 20 00            CALL 0x00710f00
LAB_0050d904:
0050D904  8B 8B 12 0C 00 00         MOV ECX,dword ptr [EBX + 0xc12]
0050D90A  8B B3 16 0C 00 00         MOV ESI,dword ptr [EBX + 0xc16]
0050D910  3B CE                     CMP ECX,ESI
0050D912  76 07                     JBE 0x0050d91b
0050D914  B8 21 00 00 00            MOV EAX,0x21
0050D919  EB 13                     JMP 0x0050d92e
LAB_0050d91b:
0050D91B  85 F6                     TEST ESI,ESI
0050D91D  74 0D                     JZ 0x0050d92c
0050D91F  8B C1                     MOV EAX,ECX
0050D921  33 D2                     XOR EDX,EDX
0050D923  C1 E0 05                  SHL EAX,0x5
0050D926  03 C1                     ADD EAX,ECX
0050D928  F7 F6                     DIV ESI
0050D92A  EB 02                     JMP 0x0050d92e
LAB_0050d92c:
0050D92C  33 C0                     XOR EAX,EAX
LAB_0050d92e:
0050D92E  33 C9                     XOR ECX,ECX
0050D930  85 C0                     TEST EAX,EAX
0050D932  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0050D935  76 36                     JBE 0x0050d96d
0050D937  BE 35 00 00 00            MOV ESI,0x35
0050D93C  8B F8                     MOV EDI,EAX
0050D93E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0050d941:
0050D941  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050D947  6A 01                     PUSH 0x1
0050D949  50                        PUSH EAX
0050D94A  E8 51 DA 1F 00            CALL 0x0070b3a0
0050D94F  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050D955  50                        PUSH EAX
0050D956  6A 01                     PUSH 0x1
0050D958  6A 7D                     PUSH 0x7d
0050D95A  56                        PUSH ESI
0050D95B  51                        PUSH ECX
0050D95C  E8 C8 58 EF FF            CALL 0x00403229
0050D961  83 C4 1C                  ADD ESP,0x1c
0050D964  83 C6 04                  ADD ESI,0x4
0050D967  4F                        DEC EDI
0050D968  75 D7                     JNZ 0x0050d941
0050D96A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0050d96d:
0050D96D  83 F9 21                  CMP ECX,0x21
0050D970  73 35                     JNC 0x0050d9a7
0050D972  8D 34 8D 35 00 00 00      LEA ESI,[ECX*0x4 + 0x35]
LAB_0050d979:
0050D979  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050D97F  6A 00                     PUSH 0x0
0050D981  52                        PUSH EDX
0050D982  E8 19 DA 1F 00            CALL 0x0070b3a0
0050D987  50                        PUSH EAX
0050D988  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050D98E  6A 01                     PUSH 0x1
0050D990  6A 7D                     PUSH 0x7d
0050D992  56                        PUSH ESI
0050D993  50                        PUSH EAX
0050D994  E8 90 58 EF FF            CALL 0x00403229
0050D999  83 C6 04                  ADD ESI,0x4
0050D99C  83 C4 1C                  ADD ESP,0x1c
0050D99F  81 FE B9 00 00 00         CMP ESI,0xb9
0050D9A5  7C D2                     JL 0x0050d979
LAB_0050d9a7:
0050D9A7  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050D9AD  85 C0                     TEST EAX,EAX
0050D9AF  0F 8C 2C 06 00 00         JL 0x0050dfe1
0050D9B5  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050D9BB  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050D9BE  51                        PUSH ECX
0050D9BF  52                        PUSH EDX
0050D9C0  6A FF                     PUSH -0x1
0050D9C2  50                        PUSH EAX
0050D9C3  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050D9C8  50                        PUSH EAX
0050D9C9  E8 72 5C 1A 00            CALL 0x006b3640
0050D9CE  E9 0E 06 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_67:
0050D9D3  8A 83 11 0C 00 00         MOV AL,byte ptr [EBX + 0xc11]
0050D9D9  8A 4D A8                  MOV CL,byte ptr [EBP + -0x58]
0050D9DC  3A C1                     CMP AL,CL
0050D9DE  0F 84 9B 00 00 00         JZ 0x0050da7f
0050D9E4  33 F6                     XOR ESI,ESI
0050D9E6  84 C0                     TEST AL,AL
0050D9E8  76 38                     JBE 0x0050da22
0050D9EA  BF 35 00 00 00            MOV EDI,0x35
LAB_0050d9ef:
0050D9EF  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050D9F5  6A 01                     PUSH 0x1
0050D9F7  51                        PUSH ECX
0050D9F8  E8 A3 D9 1F 00            CALL 0x0070b3a0
0050D9FD  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050DA03  50                        PUSH EAX
0050DA04  6A 01                     PUSH 0x1
0050DA06  6A 52                     PUSH 0x52
0050DA08  57                        PUSH EDI
0050DA09  52                        PUSH EDX
0050DA0A  E8 1A 58 EF FF            CALL 0x00403229
0050DA0F  33 C0                     XOR EAX,EAX
0050DA11  83 C4 1C                  ADD ESP,0x1c
0050DA14  8A 83 11 0C 00 00         MOV AL,byte ptr [EBX + 0xc11]
0050DA1A  46                        INC ESI
0050DA1B  83 C7 04                  ADD EDI,0x4
0050DA1E  3B F0                     CMP ESI,EAX
0050DA20  72 CD                     JC 0x0050d9ef
LAB_0050da22:
0050DA22  83 FE 21                  CMP ESI,0x21
0050DA25  73 35                     JNC 0x0050da5c
0050DA27  8D 34 B5 35 00 00 00      LEA ESI,[ESI*0x4 + 0x35]
LAB_0050da2e:
0050DA2E  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050DA34  6A 00                     PUSH 0x0
0050DA36  51                        PUSH ECX
0050DA37  E8 64 D9 1F 00            CALL 0x0070b3a0
0050DA3C  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050DA42  50                        PUSH EAX
0050DA43  6A 01                     PUSH 0x1
0050DA45  6A 52                     PUSH 0x52
0050DA47  56                        PUSH ESI
0050DA48  52                        PUSH EDX
0050DA49  E8 DB 57 EF FF            CALL 0x00403229
0050DA4E  83 C6 04                  ADD ESI,0x4
0050DA51  83 C4 1C                  ADD ESP,0x1c
0050DA54  81 FE B9 00 00 00         CMP ESI,0xb9
0050DA5A  7C D2                     JL 0x0050da2e
LAB_0050da5c:
0050DA5C  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050DA62  85 C0                     TEST EAX,EAX
0050DA64  7C 19                     JL 0x0050da7f
0050DA66  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050DA6C  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050DA6F  51                        PUSH ECX
0050DA70  52                        PUSH EDX
0050DA71  6A FF                     PUSH -0x1
0050DA73  50                        PUSH EAX
0050DA74  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050DA79  50                        PUSH EAX
0050DA7A  E8 C1 5B 1A 00            CALL 0x006b3640
LAB_0050da7f:
0050DA7F  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050DA85  8B 4D A9                  MOV ECX,dword ptr [EBP + -0x57]
0050DA88  3B C1                     CMP EAX,ECX
0050DA8A  0F 84 51 05 00 00         JZ 0x0050dfe1
0050DA90  33 F6                     XOR ESI,ESI
0050DA92  85 C0                     TEST EAX,EAX
0050DA94  76 36                     JBE 0x0050dacc
0050DA96  BF 35 00 00 00            MOV EDI,0x35
LAB_0050da9b:
0050DA9B  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050DAA1  6A 01                     PUSH 0x1
0050DAA3  51                        PUSH ECX
0050DAA4  E8 F7 D8 1F 00            CALL 0x0070b3a0
0050DAA9  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050DAAF  50                        PUSH EAX
0050DAB0  6A 01                     PUSH 0x1
0050DAB2  6A 73                     PUSH 0x73
0050DAB4  57                        PUSH EDI
0050DAB5  52                        PUSH EDX
0050DAB6  E8 6E 57 EF FF            CALL 0x00403229
0050DABB  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050DAC1  83 C4 1C                  ADD ESP,0x1c
0050DAC4  46                        INC ESI
0050DAC5  83 C7 04                  ADD EDI,0x4
0050DAC8  3B F0                     CMP ESI,EAX
0050DACA  72 CF                     JC 0x0050da9b
LAB_0050dacc:
0050DACC  83 FE 21                  CMP ESI,0x21
0050DACF  73 35                     JNC 0x0050db06
0050DAD1  8D 34 B5 35 00 00 00      LEA ESI,[ESI*0x4 + 0x35]
LAB_0050dad8:
0050DAD8  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050DADE  6A 00                     PUSH 0x0
0050DAE0  50                        PUSH EAX
0050DAE1  E8 BA D8 1F 00            CALL 0x0070b3a0
0050DAE6  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050DAEC  50                        PUSH EAX
0050DAED  6A 01                     PUSH 0x1
0050DAEF  6A 73                     PUSH 0x73
0050DAF1  56                        PUSH ESI
0050DAF2  51                        PUSH ECX
0050DAF3  E8 31 57 EF FF            CALL 0x00403229
0050DAF8  83 C6 04                  ADD ESI,0x4
0050DAFB  83 C4 1C                  ADD ESP,0x1c
0050DAFE  81 FE B9 00 00 00         CMP ESI,0xb9
0050DB04  7C D2                     JL 0x0050dad8
LAB_0050db06:
0050DB06  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050DB0C  85 C0                     TEST EAX,EAX
0050DB0E  0F 8C CD 04 00 00         JL 0x0050dfe1
0050DB14  8B 93 A8 00 00 00         MOV EDX,dword ptr [EBX + 0xa8]
0050DB1A  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
0050DB1D  52                        PUSH EDX
0050DB1E  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0050DB24  51                        PUSH ECX
0050DB25  6A FF                     PUSH -0x1
0050DB27  50                        PUSH EAX
0050DB28  52                        PUSH EDX
0050DB29  E8 12 5B 1A 00            CALL 0x006b3640
0050DB2E  E9 AE 04 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_64:
0050DB33  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050DB39  8B 4D A9                  MOV ECX,dword ptr [EBP + -0x57]
0050DB3C  3B C1                     CMP EAX,ECX
0050DB3E  75 11                     JNZ 0x0050db51
0050DB40  8B 8B 16 0C 00 00         MOV ECX,dword ptr [EBX + 0xc16]
0050DB46  8B 55 AD                  MOV EDX,dword ptr [EBP + -0x53]
0050DB49  3B CA                     CMP ECX,EDX
0050DB4B  0F 84 90 04 00 00         JZ 0x0050dfe1
LAB_0050db51:
0050DB51  50                        PUSH EAX
0050DB52  68 E4 1A 7C 00            PUSH 0x7c1ae4
0050DB57  68 3A F3 80 00            PUSH 0x80f33a
0050DB5C  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050DB62  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050DB68  83 C4 0C                  ADD ESP,0xc
0050DB6B  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050DB71  6A 0B                     PUSH 0xb
0050DB73  6A 24                     PUSH 0x24
0050DB75  6A 65                     PUSH 0x65
0050DB77  6A 66                     PUSH 0x66
0050DB79  6A 00                     PUSH 0x0
0050DB7B  52                        PUSH EDX
0050DB7C  E8 0F 2F 20 00            CALL 0x00710a90
0050DB81  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050DB87  6A 07                     PUSH 0x7
0050DB89  6A FF                     PUSH -0x1
0050DB8B  6A FF                     PUSH -0x1
0050DB8D  68 3A F3 80 00            PUSH 0x80f33a
0050DB92  E8 29 3E 20 00            CALL 0x007119c0
0050DB97  8B 8B 16 0C 00 00         MOV ECX,dword ptr [EBX + 0xc16]
0050DB9D  85 C9                     TEST ECX,ECX
0050DB9F  74 13                     JZ 0x0050dbb4
0050DBA1  8B 93 12 0C 00 00         MOV EDX,dword ptr [EBX + 0xc12]
0050DBA7  8B C2                     MOV EAX,EDX
0050DBA9  C1 E0 05                  SHL EAX,0x5
0050DBAC  03 C2                     ADD EAX,EDX
0050DBAE  33 D2                     XOR EDX,EDX
0050DBB0  F7 F1                     DIV ECX
0050DBB2  EB 02                     JMP 0x0050dbb6
LAB_0050dbb4:
0050DBB4  33 C0                     XOR EAX,EAX
LAB_0050dbb6:
0050DBB6  33 C9                     XOR ECX,ECX
0050DBB8  85 C0                     TEST EAX,EAX
0050DBBA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0050DBBD  76 36                     JBE 0x0050dbf5
0050DBBF  BE 35 00 00 00            MOV ESI,0x35
0050DBC4  8B F8                     MOV EDI,EAX
0050DBC6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0050dbc9:
0050DBC9  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050DBCF  6A 01                     PUSH 0x1
0050DBD1  50                        PUSH EAX
0050DBD2  E8 C9 D7 1F 00            CALL 0x0070b3a0
0050DBD7  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050DBDD  50                        PUSH EAX
0050DBDE  6A 01                     PUSH 0x1
0050DBE0  6A 7D                     PUSH 0x7d
0050DBE2  56                        PUSH ESI
0050DBE3  51                        PUSH ECX
0050DBE4  E8 40 56 EF FF            CALL 0x00403229
0050DBE9  83 C4 1C                  ADD ESP,0x1c
0050DBEC  83 C6 04                  ADD ESI,0x4
0050DBEF  4F                        DEC EDI
0050DBF0  75 D7                     JNZ 0x0050dbc9
0050DBF2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0050dbf5:
0050DBF5  83 F9 21                  CMP ECX,0x21
0050DBF8  73 35                     JNC 0x0050dc2f
0050DBFA  8D 34 8D 35 00 00 00      LEA ESI,[ECX*0x4 + 0x35]
LAB_0050dc01:
0050DC01  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050DC07  6A 00                     PUSH 0x0
0050DC09  52                        PUSH EDX
0050DC0A  E8 91 D7 1F 00            CALL 0x0070b3a0
0050DC0F  50                        PUSH EAX
0050DC10  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050DC16  6A 01                     PUSH 0x1
0050DC18  6A 7D                     PUSH 0x7d
0050DC1A  56                        PUSH ESI
0050DC1B  50                        PUSH EAX
0050DC1C  E8 08 56 EF FF            CALL 0x00403229
0050DC21  83 C6 04                  ADD ESI,0x4
0050DC24  83 C4 1C                  ADD ESP,0x1c
0050DC27  81 FE B9 00 00 00         CMP ESI,0xb9
0050DC2D  7C D2                     JL 0x0050dc01
LAB_0050dc2f:
0050DC2F  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050DC35  85 C0                     TEST EAX,EAX
0050DC37  0F 8C A4 03 00 00         JL 0x0050dfe1
0050DC3D  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050DC43  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050DC46  51                        PUSH ECX
0050DC47  52                        PUSH EDX
0050DC48  6A FF                     PUSH -0x1
0050DC4A  50                        PUSH EAX
0050DC4B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050DC50  50                        PUSH EAX
0050DC51  E8 EA 59 1A 00            CALL 0x006b3640
0050DC56  E9 86 03 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_5b:
0050DC5B  8B CB                     MOV ECX,EBX
0050DC5D  E8 35 6A EF FF            CALL 0x00404697
0050DC62  33 F6                     XOR ESI,ESI
0050DC64  BF 20 00 00 00            MOV EDI,0x20
LAB_0050dc69:
0050DC69  8B 84 B3 15 0A 00 00      MOV EAX,dword ptr [EBX + ESI*0x4 + 0xa15]
0050DC70  85 C0                     TEST EAX,EAX
0050DC72  0F 84 00 01 00 00         JZ 0x0050dd78
0050DC78  83 FE 03                  CMP ESI,0x3
0050DC7B  0F 85 8E 00 00 00         JNZ 0x0050dd0f
0050DC81  33 C9                     XOR ECX,ECX
0050DC83  8A 8B D4 09 00 00         MOV CL,byte ptr [EBX + 0x9d4]
0050DC89  49                        DEC ECX
0050DC8A  75 21                     JNZ 0x0050dcad
0050DC8C  C6 83 A2 0A 00 00 00      MOV byte ptr [EBX + 0xaa2],0x0
0050DC93  89 7B 28                  MOV dword ptr [EBX + 0x28],EDI
0050DC96  C7 43 2C 00 00 00 00      MOV dword ptr [EBX + 0x2c],0x0
0050DC9D  8B 83 21 0A 00 00         MOV EAX,dword ptr [EBX + 0xa21]
0050DCA3  8D 53 18                  LEA EDX,[EBX + 0x18]
0050DCA6  52                        PUSH EDX
0050DCA7  50                        PUSH EAX
0050DCA8  E9 C2 00 00 00            JMP 0x0050dd6f
LAB_0050dcad:
0050DCAD  C6 83 A2 0A 00 00 02      MOV byte ptr [EBX + 0xaa2],0x2
0050DCB4  8A 8B D4 09 00 00         MOV CL,byte ptr [EBX + 0x9d4]
0050DCBA  80 C1 02                  ADD CL,0x2
0050DCBD  6A 03                     PUSH 0x3
0050DCBF  51                        PUSH ECX
0050DCC0  E8 F8 57 EF FF            CALL 0x004034bd
0050DCC5  89 83 A3 0A 00 00         MOV dword ptr [EBX + 0xaa3],EAX
0050DCCB  8A 93 FC 0B 00 00         MOV DL,byte ptr [EBX + 0xbfc]
0050DCD1  8A 45 93                  MOV AL,byte ptr [EBP + -0x6d]
0050DCD4  83 C4 08                  ADD ESP,0x8
0050DCD7  3A D0                     CMP DL,AL
0050DCD9  74 20                     JZ 0x0050dcfb
0050DCDB  89 7B 28                  MOV dword ptr [EBX + 0x28],EDI
0050DCDE  8A 8B FC 0B 00 00         MOV CL,byte ptr [EBX + 0xbfc]
0050DCE4  33 C0                     XOR EAX,EAX
0050DCE6  84 C9                     TEST CL,CL
0050DCE8  0F 95 C0                  SETNZ AL
0050DCEB  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0050DCEE  8B 93 21 0A 00 00         MOV EDX,dword ptr [EBX + 0xa21]
0050DCF4  8D 4B 18                  LEA ECX,[EBX + 0x18]
0050DCF7  51                        PUSH ECX
0050DCF8  52                        PUSH EDX
0050DCF9  EB 74                     JMP 0x0050dd6f
LAB_0050dcfb:
0050DCFB  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
0050DD02  8B 93 21 0A 00 00         MOV EDX,dword ptr [EBX + 0xa21]
0050DD08  8D 4B 18                  LEA ECX,[EBX + 0x18]
0050DD0B  51                        PUSH ECX
0050DD0C  52                        PUSH EDX
0050DD0D  EB 60                     JMP 0x0050dd6f
LAB_0050dd0f:
0050DD0F  8A 83 D4 09 00 00         MOV AL,byte ptr [EBX + 0x9d4]
0050DD15  56                        PUSH ESI
0050DD16  04 02                     ADD AL,0x2
0050DD18  50                        PUSH EAX
0050DD19  E8 9F 57 EF FF            CALL 0x004034bd
0050DD1E  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
0050DD21  83 C4 08                  ADD ESP,0x8
0050DD24  C1 E1 03                  SHL ECX,0x3
0050DD27  2B CE                     SUB ECX,ESI
0050DD29  89 84 19 2E 0A 00 00      MOV dword ptr [ECX + EBX*0x1 + 0xa2e],EAX
0050DD30  8A 93 FC 0B 00 00         MOV DL,byte ptr [EBX + 0xbfc]
0050DD36  3A 55 93                  CMP DL,byte ptr [EBP + -0x6d]
0050DD39  74 21                     JZ 0x0050dd5c
0050DD3B  89 7B 28                  MOV dword ptr [EBX + 0x28],EDI
0050DD3E  8A 8B FC 0B 00 00         MOV CL,byte ptr [EBX + 0xbfc]
0050DD44  33 C0                     XOR EAX,EAX
0050DD46  84 C9                     TEST CL,CL
0050DD48  0F 95 C0                  SETNZ AL
0050DD4B  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0050DD4E  8B 94 B3 15 0A 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0xa15]
0050DD55  8D 4B 18                  LEA ECX,[EBX + 0x18]
0050DD58  51                        PUSH ECX
0050DD59  52                        PUSH EDX
0050DD5A  EB 13                     JMP 0x0050dd6f
LAB_0050dd5c:
0050DD5C  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
0050DD63  8B 8C B3 15 0A 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0xa15]
0050DD6A  8D 43 18                  LEA EAX,[EBX + 0x18]
0050DD6D  50                        PUSH EAX
0050DD6E  51                        PUSH ECX
LAB_0050dd6f:
0050DD6F  6A 02                     PUSH 0x2
0050DD71  8B CB                     MOV ECX,EBX
0050DD73  E8 08 83 1D 00            CALL 0x006e6080
LAB_0050dd78:
0050DD78  46                        INC ESI
0050DD79  83 FE 04                  CMP ESI,0x4
0050DD7C  0F 82 E7 FE FF FF         JC 0x0050dc69
0050DD82  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050DD88  85 C0                     TEST EAX,EAX
0050DD8A  0F 8C 51 02 00 00         JL 0x0050dfe1
0050DD90  8B 93 A8 00 00 00         MOV EDX,dword ptr [EBX + 0xa8]
0050DD96  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
0050DD99  52                        PUSH EDX
0050DD9A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0050DDA0  51                        PUSH ECX
0050DDA1  6A FF                     PUSH -0x1
0050DDA3  50                        PUSH EAX
0050DDA4  52                        PUSH EDX
0050DDA5  E8 96 58 1A 00            CALL 0x006b3640
0050DDAA  E9 32 02 00 00            JMP 0x0050dfe1
switchD_0050cbf9::caseD_6d:
0050DDAF  33 FF                     XOR EDI,EDI
0050DDB1  BE 2C 00 00 00            MOV ESI,0x2c
0050DDB6  8D 45 A9                  LEA EAX,[EBP + -0x57]
0050DDB9  8D 8B 12 0C 00 00         LEA ECX,[EBX + 0xc12]
0050DDBF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0050DDC2  C7 45 F8 63 00 00 00      MOV dword ptr [EBP + -0x8],0x63
0050DDC9  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0050DDCC  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0050DDCF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0050ddd2:
0050DDD2  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0050DDD5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0050DDD8  8B 02                     MOV EAX,dword ptr [EDX]
0050DDDA  8B 11                     MOV EDX,dword ptr [ECX]
0050DDDC  3B C2                     CMP EAX,EDX
0050DDDE  74 73                     JZ 0x0050de53
0050DDE0  8B 93 11 0A 00 00         MOV EDX,dword ptr [EBX + 0xa11]
0050DDE6  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050DDEC  52                        PUSH EDX
0050DDED  6A 01                     PUSH 0x1
0050DDEF  8D 46 FE                  LEA EAX,[ESI + -0x2]
0050DDF2  6A 55                     PUSH 0x55
0050DDF4  50                        PUSH EAX
0050DDF5  51                        PUSH ECX
0050DDF6  E8 2E 54 EF FF            CALL 0x00403229
0050DDFB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0050DDFE  8A 94 1F 1A 0C 00 00      MOV DL,byte ptr [EDI + EBX*0x1 + 0xc1a]
0050DE05  52                        PUSH EDX
0050DE06  8B 08                     MOV ECX,dword ptr [EAX]
0050DE08  51                        PUSH ECX
0050DE09  E8 E7 78 EF FF            CALL 0x004056f5
0050DE0E  8B 93 C2 02 00 00         MOV EDX,dword ptr [EBX + 0x2c2]
0050DE14  50                        PUSH EAX
0050DE15  52                        PUSH EDX
0050DE16  E8 85 D5 1F 00            CALL 0x0070b3a0
0050DE1B  50                        PUSH EAX
0050DE1C  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050DE22  6A 01                     PUSH 0x1
0050DE24  6A 57                     PUSH 0x57
0050DE26  56                        PUSH ESI
0050DE27  50                        PUSH EAX
0050DE28  E8 FC 53 EF FF            CALL 0x00403229
0050DE2D  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050DE33  83 C4 38                  ADD ESP,0x38
0050DE36  85 C0                     TEST EAX,EAX
0050DE38  7C 19                     JL 0x0050de53
0050DE3A  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050DE40  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050DE43  51                        PUSH ECX
0050DE44  52                        PUSH EDX
0050DE45  6A FF                     PUSH -0x1
0050DE47  50                        PUSH EAX
0050DE48  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050DE4D  50                        PUSH EAX
0050DE4E  E8 ED 57 1A 00            CALL 0x006b3640
LAB_0050de53:
0050DE53  8A 84 3B 24 0C 00 00      MOV AL,byte ptr [EBX + EDI*0x1 + 0xc24]
0050DE5A  8A 4C 3D BB               MOV CL,byte ptr [EBP + EDI*0x1 + -0x45]
0050DE5E  3A C8                     CMP CL,AL
0050DE60  0F 84 C1 00 00 00         JZ 0x0050df27
0050DE66  25 FF 00 00 00            AND EAX,0xff
0050DE6B  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0050DE72  8B C8                     MOV ECX,EAX
0050DE74  B8 67 66 66 66            MOV EAX,0x66666667
0050DE79  F7 E9                     IMUL ECX
0050DE7B  C1 FA 02                  SAR EDX,0x2
0050DE7E  8B CA                     MOV ECX,EDX
0050DE80  C1 E9 1F                  SHR ECX,0x1f
0050DE83  03 D1                     ADD EDX,ECX
0050DE85  74 35                     JZ 0x0050debc
0050DE87  BE 7E 00 00 00            MOV ESI,0x7e
0050DE8C  8B FA                     MOV EDI,EDX
0050DE8E  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0050de91:
0050DE91  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050DE97  6A 07                     PUSH 0x7
0050DE99  52                        PUSH EDX
0050DE9A  E8 01 D5 1F 00            CALL 0x0070b3a0
0050DE9F  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050DEA5  50                        PUSH EAX
0050DEA6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0050DEA9  6A 01                     PUSH 0x1
0050DEAB  56                        PUSH ESI
0050DEAC  50                        PUSH EAX
0050DEAD  51                        PUSH ECX
0050DEAE  E8 76 53 EF FF            CALL 0x00403229
0050DEB3  83 C4 1C                  ADD ESP,0x1c
0050DEB6  83 EE 04                  SUB ESI,0x4
0050DEB9  4F                        DEC EDI
0050DEBA  75 D5                     JNZ 0x0050de91
LAB_0050debc:
0050DEBC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0050DEBF  83 F8 0A                  CMP EAX,0xa
0050DEC2  73 40                     JNC 0x0050df04
0050DEC4  8D 14 85 00 00 00 00      LEA EDX,[EAX*0x4 + 0x0]
0050DECB  BE 7E 00 00 00            MOV ESI,0x7e
0050DED0  BF 0A 00 00 00            MOV EDI,0xa
0050DED5  2B F2                     SUB ESI,EDX
0050DED7  2B F8                     SUB EDI,EAX
LAB_0050ded9:
0050DED9  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050DEDF  6A 08                     PUSH 0x8
0050DEE1  50                        PUSH EAX
0050DEE2  E8 B9 D4 1F 00            CALL 0x0070b3a0
0050DEE7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0050DEEA  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050DEF0  50                        PUSH EAX
0050DEF1  6A 01                     PUSH 0x1
0050DEF3  56                        PUSH ESI
0050DEF4  51                        PUSH ECX
0050DEF5  52                        PUSH EDX
0050DEF6  E8 2E 53 EF FF            CALL 0x00403229
0050DEFB  83 C4 1C                  ADD ESP,0x1c
0050DEFE  83 EE 04                  SUB ESI,0x4
0050DF01  4F                        DEC EDI
0050DF02  75 D5                     JNZ 0x0050ded9
LAB_0050df04:
0050DF04  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050DF0A  85 C0                     TEST EAX,EAX
0050DF0C  7C 19                     JL 0x0050df27
0050DF0E  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050DF14  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050DF17  51                        PUSH ECX
0050DF18  52                        PUSH EDX
0050DF19  6A FF                     PUSH -0x1
0050DF1B  50                        PUSH EAX
0050DF1C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050DF21  50                        PUSH EAX
0050DF22  E8 19 57 1A 00            CALL 0x006b3640
LAB_0050df27:
0050DF27  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0050DF2A  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0050DF2D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0050DF30  B8 04 00 00 00            MOV EAX,0x4
0050DF35  03 F0                     ADD ESI,EAX
0050DF37  03 C8                     ADD ECX,EAX
0050DF39  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0050DF3C  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0050DF3F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0050DF42  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0050DF45  83 C6 65                  ADD ESI,0x65
0050DF48  47                        INC EDI
0050DF49  83 C1 1A                  ADD ECX,0x1a
0050DF4C  81 FE F6 00 00 00         CMP ESI,0xf6
0050DF52  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0050DF55  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0050DF58  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0050DF5B  0F 8C 71 FE FF FF         JL 0x0050ddd2
0050DF61  33 C9                     XOR ECX,ECX
0050DF63  33 D2                     XOR EDX,EDX
0050DF65  8A 8B 25 0C 00 00         MOV CL,byte ptr [EBX + 0xc25]
0050DF6B  8A 93 24 0C 00 00         MOV DL,byte ptr [EBX + 0xc24]
0050DF71  51                        PUSH ECX
0050DF72  52                        PUSH EDX
0050DF73  68 D4 28 7C 00            PUSH 0x7c28d4
0050DF78  68 3A F3 80 00            PUSH 0x80f33a
0050DF7D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050DF83  8B 83 DD 09 00 00         MOV EAX,dword ptr [EBX + 0x9dd]
0050DF89  83 C4 10                  ADD ESP,0x10
0050DF8C  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050DF92  6A 00                     PUSH 0x0
0050DF94  6A 0B                     PUSH 0xb
0050DF96  6A 2F                     PUSH 0x2f
0050DF98  6A 07                     PUSH 0x7
0050DF9A  6A 5F                     PUSH 0x5f
0050DF9C  6A 00                     PUSH 0x0
0050DF9E  50                        PUSH EAX
0050DF9F  E8 FC 2B 20 00            CALL 0x00710ba0
0050DFA4  8B F0                     MOV ESI,EAX
0050DFA6  85 F6                     TEST ESI,ESI
0050DFA8  74 37                     JZ 0x0050dfe1
0050DFAA  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050DFB0  6A 05                     PUSH 0x5
0050DFB2  6A FF                     PUSH -0x1
0050DFB4  6A FF                     PUSH -0x1
0050DFB6  68 3A F3 80 00            PUSH 0x80f33a
0050DFBB  E8 00 3A 20 00            CALL 0x007119c0
0050DFC0  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050DFC6  56                        PUSH ESI
0050DFC7  6A 01                     PUSH 0x1
0050DFC9  6A 4D                     PUSH 0x4d
0050DFCB  6A 5F                     PUSH 0x5f
0050DFCD  51                        PUSH ECX
0050DFCE  E8 56 52 EF FF            CALL 0x00403229
0050DFD3  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050DFD9  83 C4 14                  ADD ESP,0x14
LAB_0050dfdc:
0050DFDC  E8 1F 2F 20 00            CALL 0x00710f00
switchD_0050cbf9::caseD_5f:
0050DFE1  8B 93 4D 0C 00 00         MOV EDX,dword ptr [EBX + 0xc4d]
0050DFE7  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0050DFEA  3B D0                     CMP EDX,EAX
0050DFEC  74 30                     JZ 0x0050e01e
0050DFEE  8B CB                     MOV ECX,EBX
0050DFF0  E8 C0 39 EF FF            CALL 0x004019b5
0050DFF5  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0050DFFB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050E000  5F                        POP EDI
0050E001  5E                        POP ESI
0050E002  5B                        POP EBX
0050E003  8B E5                     MOV ESP,EBP
0050E005  5D                        POP EBP
0050E006  C3                        RET
CPanelTy::Update4PanelSI::cf_common_exit_0050E007:
0050E007  8B CB                     MOV ECX,EBX
0050E009  E8 82 45 EF FF            CALL 0x00402590
0050E00E  6A 01                     PUSH 0x1
0050E010  8B CB                     MOV ECX,EBX
0050E012  E8 EB 55 EF FF            CALL 0x00403602
0050E017  8B CB                     MOV ECX,EBX
0050E019  E8 82 7B EF FF            CALL 0x00405ba0
switchD_0050c9ae::caseD_df:
0050E01E  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0050E024  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050E029  5F                        POP EDI
0050E02A  5E                        POP ESI
0050E02B  5B                        POP EBX
0050E02C  8B E5                     MOV ESP,EBP
0050E02E  5D                        POP EBP
0050E02F  C3                        RET
LAB_0050e030:
0050E030  8B 8D 44 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff44]
0050E036  68 00 29 7C 00            PUSH 0x7c2900
0050E03B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0050E040  56                        PUSH ESI
0050E041  6A 00                     PUSH 0x0
0050E043  68 AE 08 00 00            PUSH 0x8ae
0050E048  68 00 27 7C 00            PUSH 0x7c2700
0050E04D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050E053  E8 78 F4 19 00            CALL 0x006ad4d0
0050E058  83 C4 18                  ADD ESP,0x18
0050E05B  85 C0                     TEST EAX,EAX
0050E05D  74 01                     JZ 0x0050e060
0050E05F  CC                        INT3
LAB_0050e060:
0050E060  68 AE 08 00 00            PUSH 0x8ae
0050E065  68 00 27 7C 00            PUSH 0x7c2700
0050E06A  6A 00                     PUSH 0x0
0050E06C  56                        PUSH ESI
0050E06D  E8 CE 7D 19 00            CALL 0x006a5e40
0050E072  5F                        POP EDI
0050E073  5E                        POP ESI
0050E074  5B                        POP EBX
0050E075  8B E5                     MOV ESP,EBP
0050E077  5D                        POP EBP
0050E078  C3                        RET
