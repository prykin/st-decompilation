FUN_006d1350:
006D1350  55                        PUSH EBP
006D1351  8B EC                     MOV EBP,ESP
006D1353  53                        PUSH EBX
006D1354  56                        PUSH ESI
006D1355  57                        PUSH EDI
006D1356  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D1359  E3 59                     JECXZ 0x006d13b4
006D135B  FC                        CLD
006D135C  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D135F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D1362  29 4D 14                  SUB dword ptr [EBP + 0x14],ECX
006D1365  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D1368  2B C1                     SUB EAX,ECX
006D136A  2B C1                     SUB EAX,ECX
006D136C  2B C1                     SUB EAX,ECX
006D136E  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006D1371  33 C0                     XOR EAX,EAX
006D1373  8A 55 24                  MOV DL,byte ptr [EBP + 0x24]
006D1376  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_006d1379:
006D1379  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_006d137c:
006D137C  8A 06                     MOV AL,byte ptr [ESI]
006D137E  46                        INC ESI
006D137F  3A C2                     CMP AL,DL
006D1381  75 10                     JNZ 0x006d1393
LAB_006d1383:
006D1383  83 C7 03                  ADD EDI,0x3
006D1386  E2 F4                     LOOP 0x006d137c
006D1388  EB 1F                     JMP 0x006d13a9
LAB_006d138c:
006D138C  8A 06                     MOV AL,byte ptr [ESI]
006D138E  46                        INC ESI
006D138F  3A C2                     CMP AL,DL
006D1391  74 F0                     JZ 0x006d1383
LAB_006d1393:
006D1393  25 FF 00 00 00            AND EAX,0xff
006D1398  8B 04 83                  MOV EAX,dword ptr [EBX + EAX*0x4]
006D139B  66 89 07                  MOV word ptr [EDI],AX
006D139E  C1 E8 10                  SHR EAX,0x10
006D13A1  88 47 02                  MOV byte ptr [EDI + 0x2],AL
006D13A4  83 C7 03                  ADD EDI,0x3
006D13A7  E2 E3                     LOOP 0x006d138c
LAB_006d13a9:
006D13A9  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006D13AC  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006D13AF  FF 4D 20                  DEC dword ptr [EBP + 0x20]
006D13B2  75 C5                     JNZ 0x006d1379
LAB_006d13b4:
006D13B4  5F                        POP EDI
006D13B5  5E                        POP ESI
006D13B6  5B                        POP EBX
006D13B7  5D                        POP EBP
006D13B8  C3                        RET
