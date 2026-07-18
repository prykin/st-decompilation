FUN_006d13c0:
006D13C0  55                        PUSH EBP
006D13C1  8B EC                     MOV EBP,ESP
006D13C3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D13C6  53                        PUSH EBX
006D13C7  8B C8                     MOV ECX,EAX
006D13C9  48                        DEC EAX
006D13CA  56                        PUSH ESI
006D13CB  57                        PUSH EDI
006D13CC  85 C9                     TEST ECX,ECX
006D13CE  0F 8E E2 00 00 00         JLE 0x006d14b6
006D13D4  40                        INC EAX
006D13D5  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006d13d8:
006D13D8  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D13DB  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D13DE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D13E1  33 D2                     XOR EDX,EDX
006D13E3  33 DB                     XOR EBX,EBX
006D13E5  8A 5D 24                  MOV BL,byte ptr [EBP + 0x24]
006D13E8  55                        PUSH EBP
006D13E9  8B 6D 20                  MOV EBP,dword ptr [EBP + 0x20]
006D13EC  F7 C7 02 00 00 00         TEST EDI,0x2
006D13F2  74 19                     JZ 0x006d140d
006D13F4  8A 16                     MOV DL,byte ptr [ESI]
006D13F6  46                        INC ESI
006D13F7  3A D3                     CMP DL,BL
006D13F9  74 08                     JZ 0x006d1403
006D13FB  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006D1400  66 89 07                  MOV word ptr [EDI],AX
LAB_006d1403:
006D1403  83 C7 02                  ADD EDI,0x2
006D1406  49                        DEC ECX
006D1407  0F 8E 85 00 00 00         JLE 0x006d1492
LAB_006d140d:
006D140D  83 E9 02                  SUB ECX,0x2
006D1410  7C 6D                     JL 0x006d147f
LAB_006d1412:
006D1412  8A 16                     MOV DL,byte ptr [ESI]
006D1414  3A D3                     CMP DL,BL
006D1416  74 2C                     JZ 0x006d1444
LAB_006d1418:
006D1418  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006D141D  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
006D1420  C1 E0 10                  SHL EAX,0x10
006D1423  3A D3                     CMP DL,BL
006D1425  74 31                     JZ 0x006d1458
006D1427  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006D142C  C1 C0 10                  ROL EAX,0x10
006D142F  83 C6 02                  ADD ESI,0x2
006D1432  89 07                     MOV dword ptr [EDI],EAX
006D1434  83 C7 04                  ADD EDI,0x4
006D1437  83 E9 02                  SUB ECX,0x2
006D143A  7D D6                     JGE 0x006d1412
006D143C  EB 41                     JMP 0x006d147f
LAB_006d143e:
006D143E  8A 16                     MOV DL,byte ptr [ESI]
006D1440  3A D3                     CMP DL,BL
006D1442  75 D4                     JNZ 0x006d1418
LAB_006d1444:
006D1444  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
006D1447  3A D3                     CMP DL,BL
006D1449  75 20                     JNZ 0x006d146b
006D144B  83 C6 02                  ADD ESI,0x2
006D144E  83 C7 04                  ADD EDI,0x4
006D1451  83 E9 02                  SUB ECX,0x2
006D1454  7D E8                     JGE 0x006d143e
006D1456  EB 27                     JMP 0x006d147f
LAB_006d1458:
006D1458  C1 E8 10                  SHR EAX,0x10
006D145B  83 C6 02                  ADD ESI,0x2
006D145E  66 89 07                  MOV word ptr [EDI],AX
006D1461  83 C7 04                  ADD EDI,0x4
006D1464  83 E9 02                  SUB ECX,0x2
006D1467  7D A9                     JGE 0x006d1412
006D1469  EB 14                     JMP 0x006d147f
LAB_006d146b:
006D146B  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006D1470  83 C6 02                  ADD ESI,0x2
006D1473  66 89 47 02               MOV word ptr [EDI + 0x2],AX
006D1477  83 C7 04                  ADD EDI,0x4
006D147A  83 E9 02                  SUB ECX,0x2
006D147D  7D 93                     JGE 0x006d1412
LAB_006d147f:
006D147F  83 C1 02                  ADD ECX,0x2
006D1482  74 0E                     JZ 0x006d1492
006D1484  8A 16                     MOV DL,byte ptr [ESI]
006D1486  3A D3                     CMP DL,BL
006D1488  74 08                     JZ 0x006d1492
006D148A  66 8B 44 55 00            MOV AX,word ptr [EBP + EDX*0x2]
006D148F  66 89 07                  MOV word ptr [EDI],AX
LAB_006d1492:
006D1492  5D                        POP EBP
006D1493  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D1496  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D1499  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D149C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D149F  03 C8                     ADD ECX,EAX
006D14A1  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D14A4  03 F2                     ADD ESI,EDX
006D14A6  48                        DEC EAX
006D14A7  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006D14AA  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006D14AD  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006D14B0  0F 85 22 FF FF FF         JNZ 0x006d13d8
LAB_006d14b6:
006D14B6  5F                        POP EDI
006D14B7  5E                        POP ESI
006D14B8  5B                        POP EBX
006D14B9  5D                        POP EBP
006D14BA  C2 20 00                  RET 0x20
