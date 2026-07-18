FUN_007575b0:
007575B0  55                        PUSH EBP
007575B1  8B EC                     MOV EBP,ESP
007575B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007575B6  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
007575B9  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
007575BC  48                        DEC EAX
007575BD  83 F8 05                  CMP EAX,0x5
007575C0  77 7C                     JA 0x0075763e
switchD_007575c2::switchD:
007575C2  FF 24 85 50 76 75 00      JMP dword ptr [EAX*0x4 + 0x757650]
switchD_007575c2::caseD_1:
007575C9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007575CC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007575CF  0F BE 01                  MOVSX EAX,byte ptr [ECX]
007575D2  0F BE 0A                  MOVSX ECX,byte ptr [EDX]
007575D5  2B C1                     SUB EAX,ECX
007575D7  5D                        POP EBP
007575D8  C2 0C 00                  RET 0xc
switchD_007575c2::caseD_2:
007575DB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007575DE  33 C0                     XOR EAX,EAX
007575E0  33 C9                     XOR ECX,ECX
007575E2  8A 02                     MOV AL,byte ptr [EDX]
007575E4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007575E7  8A 0A                     MOV CL,byte ptr [EDX]
007575E9  2B C1                     SUB EAX,ECX
007575EB  5D                        POP EBP
007575EC  C2 0C 00                  RET 0xc
switchD_007575c2::caseD_3:
007575EF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007575F2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007575F5  0F BF 00                  MOVSX EAX,word ptr [EAX]
007575F8  0F BF 11                  MOVSX EDX,word ptr [ECX]
007575FB  2B C2                     SUB EAX,EDX
007575FD  5D                        POP EBP
007575FE  C2 0C 00                  RET 0xc
switchD_007575c2::caseD_4:
00757601  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00757604  33 C0                     XOR EAX,EAX
00757606  33 D2                     XOR EDX,EDX
00757608  66 8B 01                  MOV AX,word ptr [ECX]
0075760B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075760E  66 8B 11                  MOV DX,word ptr [ECX]
00757611  2B C2                     SUB EAX,EDX
00757613  5D                        POP EBP
00757614  C2 0C 00                  RET 0xc
switchD_007575c2::caseD_5:
00757617  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075761A  8B 02                     MOV EAX,dword ptr [EDX]
LAB_0075761c:
0075761C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075761F  2B 01                     SUB EAX,dword ptr [ECX]
00757621  79 07                     JNS 0x0075762a
00757623  83 C8 FF                  OR EAX,0xffffffff
00757626  5D                        POP EBP
00757627  C2 0C 00                  RET 0xc
LAB_0075762a:
0075762A  33 D2                     XOR EDX,EDX
0075762C  85 C0                     TEST EAX,EAX
0075762E  0F 95 C2                  SETNZ DL
00757631  8B C2                     MOV EAX,EDX
00757633  5D                        POP EBP
00757634  C2 0C 00                  RET 0xc
switchD_007575c2::caseD_6:
00757637  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075763A  8B 00                     MOV EAX,dword ptr [EAX]
0075763C  EB DE                     JMP 0x0075761c
switchD_007575c2::default:
0075763E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00757641  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00757644  50                        PUSH EAX
00757645  52                        PUSH EDX
00757646  FF 51 04                  CALL dword ptr [ECX + 0x4]
00757649  83 C4 08                  ADD ESP,0x8
0075764C  5D                        POP EBP
0075764D  C2 0C 00                  RET 0xc
