FUN_006d1250:
006D1250  55                        PUSH EBP
006D1251  8B EC                     MOV EBP,ESP
006D1253  83 EC 14                  SUB ESP,0x14
006D1256  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D1259  53                        PUSH EBX
006D125A  56                        PUSH ESI
006D125B  57                        PUSH EDI
006D125C  85 C0                     TEST EAX,EAX
006D125E  74 0D                     JZ 0x006d126d
006D1260  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006D1263  8B 30                     MOV ESI,dword ptr [EAX]
006D1265  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
006D1268  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006D126B  EB 12                     JMP 0x006d127f
LAB_006d126d:
006D126D  B9 00 FF 00 00            MOV ECX,0xff00
006D1272  BE 00 00 FF 00            MOV ESI,0xff0000
006D1277  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006D127A  BB FF 00 00 00            MOV EBX,0xff
LAB_006d127f:
006D127F  33 D2                     XOR EDX,EDX
006D1281  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
006D1284  F7 C6 00 00 80 00         TEST ESI,0x800000
006D128A  8B C6                     MOV EAX,ESI
006D128C  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006D128F  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006D1292  75 0D                     JNZ 0x006d12a1
LAB_006d1294:
006D1294  D1 E0                     SHL EAX,0x1
006D1296  42                        INC EDX
006D1297  A9 00 00 80 00            TEST EAX,0x800000
006D129C  74 F6                     JZ 0x006d1294
006D129E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006d12a1:
006D12A1  33 C0                     XOR EAX,EAX
006D12A3  F7 C1 00 00 80 00         TEST ECX,0x800000
006D12A9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D12AC  75 0E                     JNZ 0x006d12bc
LAB_006d12ae:
006D12AE  D1 E1                     SHL ECX,0x1
006D12B0  40                        INC EAX
006D12B1  F7 C1 00 00 80 00         TEST ECX,0x800000
006D12B7  74 F5                     JZ 0x006d12ae
006D12B9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006d12bc:
006D12BC  33 FF                     XOR EDI,EDI
006D12BE  F7 C3 00 00 80 00         TEST EBX,0x800000
006D12C4  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006D12C7  75 10                     JNZ 0x006d12d9
006D12C9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_006d12cc:
006D12CC  D1 E0                     SHL EAX,0x1
006D12CE  47                        INC EDI
006D12CF  A9 00 00 80 00            TEST EAX,0x800000
006D12D4  74 F6                     JZ 0x006d12cc
006D12D6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_006d12d9:
006D12D9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D12DC  85 C9                     TEST ECX,ECX
006D12DE  7E 63                     JLE 0x006d1343
006D12E0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D12E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D12E6  83 C0 02                  ADD EAX,0x2
006D12E9  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006D12EC  EB 06                     JMP 0x006d12f4
LAB_006d12ee:
006D12EE  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006D12F1  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006d12f4:
006D12F4  33 C9                     XOR ECX,ECX
006D12F6  83 C2 04                  ADD EDX,0x4
006D12F9  8A 48 FE                  MOV CL,byte ptr [EAX + -0x2]
006D12FC  83 C0 04                  ADD EAX,0x4
006D12FF  C1 E1 10                  SHL ECX,0x10
006D1302  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006D1305  8B CF                     MOV ECX,EDI
006D1307  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D130A  D3 EF                     SHR EDI,CL
006D130C  33 C9                     XOR ECX,ECX
006D130E  8A 48 FB                  MOV CL,byte ptr [EAX + -0x5]
006D1311  23 FB                     AND EDI,EBX
006D1313  8B D9                     MOV EBX,ECX
006D1315  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006D1318  C1 E3 10                  SHL EBX,0x10
006D131B  D3 EB                     SHR EBX,CL
006D131D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006D1320  23 D9                     AND EBX,ECX
006D1322  33 C9                     XOR ECX,ECX
006D1324  8A 48 FC                  MOV CL,byte ptr [EAX + -0x4]
006D1327  0B FB                     OR EDI,EBX
006D1329  8B D9                     MOV EBX,ECX
006D132B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D132E  C1 E3 10                  SHL EBX,0x10
006D1331  D3 EB                     SHR EBX,CL
006D1333  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D1336  23 DE                     AND EBX,ESI
006D1338  0B FB                     OR EDI,EBX
006D133A  49                        DEC ECX
006D133B  89 7A FC                  MOV dword ptr [EDX + -0x4],EDI
006D133E  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006D1341  75 AB                     JNZ 0x006d12ee
LAB_006d1343:
006D1343  5F                        POP EDI
006D1344  5E                        POP ESI
006D1345  5B                        POP EBX
006D1346  8B E5                     MOV ESP,EBP
006D1348  5D                        POP EBP
006D1349  C2 10 00                  RET 0x10
