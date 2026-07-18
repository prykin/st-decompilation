FUN_005f13c0:
005F13C0  55                        PUSH EBP
005F13C1  8B EC                     MOV EBP,ESP
005F13C3  51                        PUSH ECX
005F13C4  53                        PUSH EBX
005F13C5  56                        PUSH ESI
005F13C6  8B 71 38                  MOV ESI,dword ptr [ECX + 0x38]
005F13C9  57                        PUSH EDI
005F13CA  85 F6                     TEST ESI,ESI
005F13CC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005F13CF  74 48                     JZ 0x005f1419
005F13D1  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
005F13D4  33 FF                     XOR EDI,EDI
005F13D6  85 C0                     TEST EAX,EAX
005F13D8  7E 3F                     JLE 0x005f1419
005F13DA  3B F8                     CMP EDI,EAX
LAB_005f13dc:
005F13DC  73 33                     JNC 0x005f1411
005F13DE  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005F13E1  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005F13E4  0F AF D7                  IMUL EDX,EDI
005F13E7  03 D1                     ADD EDX,ECX
005F13E9  85 D2                     TEST EDX,EDX
005F13EB  74 24                     JZ 0x005f1411
005F13ED  8A 4D 14                  MOV CL,byte ptr [EBP + 0x14]
005F13F0  8A 5A 06                  MOV BL,byte ptr [EDX + 0x6]
005F13F3  3A D9                     CMP BL,CL
005F13F5  75 1A                     JNZ 0x005f1411
005F13F7  0F BF 0A                  MOVSX ECX,word ptr [EDX]
005F13FA  3B 4D 08                  CMP ECX,dword ptr [EBP + 0x8]
005F13FD  75 12                     JNZ 0x005f1411
005F13FF  0F BF 4A 02               MOVSX ECX,word ptr [EDX + 0x2]
005F1403  3B 4D 0C                  CMP ECX,dword ptr [EBP + 0xc]
005F1406  75 09                     JNZ 0x005f1411
005F1408  0F BF 52 04               MOVSX EDX,word ptr [EDX + 0x4]
005F140C  3B 55 10                  CMP EDX,dword ptr [EBP + 0x10]
005F140F  74 62                     JZ 0x005f1473
LAB_005f1411:
005F1411  47                        INC EDI
005F1412  3B F8                     CMP EDI,EAX
005F1414  7C C6                     JL 0x005f13dc
005F1416  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_005f1419:
005F1419  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
005F141C  85 F6                     TEST ESI,ESI
005F141E  74 45                     JZ 0x005f1465
005F1420  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
005F1423  33 D2                     XOR EDX,EDX
005F1425  85 FF                     TEST EDI,EDI
005F1427  7E 3C                     JLE 0x005f1465
005F1429  3B D7                     CMP EDX,EDI
LAB_005f142b:
005F142B  73 33                     JNC 0x005f1460
005F142D  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005F1430  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
005F1433  0F AF CA                  IMUL ECX,EDX
005F1436  03 CB                     ADD ECX,EBX
005F1438  85 C9                     TEST ECX,ECX
005F143A  74 24                     JZ 0x005f1460
005F143C  8A 45 14                  MOV AL,byte ptr [EBP + 0x14]
005F143F  8A 59 06                  MOV BL,byte ptr [ECX + 0x6]
005F1442  3A D8                     CMP BL,AL
005F1444  75 1A                     JNZ 0x005f1460
005F1446  0F BF 01                  MOVSX EAX,word ptr [ECX]
005F1449  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
005F144C  75 12                     JNZ 0x005f1460
005F144E  0F BF 41 02               MOVSX EAX,word ptr [ECX + 0x2]
005F1452  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
005F1455  75 09                     JNZ 0x005f1460
005F1457  0F BF 49 04               MOVSX ECX,word ptr [ECX + 0x4]
005F145B  3B 4D 10                  CMP ECX,dword ptr [EBP + 0x10]
005F145E  74 13                     JZ 0x005f1473
LAB_005f1460:
005F1460  42                        INC EDX
005F1461  3B D7                     CMP EDX,EDI
005F1463  7C C6                     JL 0x005f142b
LAB_005f1465:
005F1465  5F                        POP EDI
005F1466  5E                        POP ESI
005F1467  B8 01 00 00 00            MOV EAX,0x1
005F146C  5B                        POP EBX
005F146D  8B E5                     MOV ESP,EBP
005F146F  5D                        POP EBP
005F1470  C2 10 00                  RET 0x10
LAB_005f1473:
005F1473  5F                        POP EDI
005F1474  5E                        POP ESI
005F1475  33 C0                     XOR EAX,EAX
005F1477  5B                        POP EBX
005F1478  8B E5                     MOV ESP,EBP
005F147A  5D                        POP EBP
005F147B  C2 10 00                  RET 0x10
