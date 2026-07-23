CGenerate::sub_006975F0:
006975F0  55                        PUSH EBP
006975F1  8B EC                     MOV EBP,ESP
006975F3  83 EC 24                  SUB ESP,0x24
006975F6  53                        PUSH EBX
006975F7  56                        PUSH ESI
006975F8  57                        PUSH EDI
006975F9  8B B9 53 58 00 00         MOV EDI,dword ptr [ECX + 0x5853]
006975FF  85 FF                     TEST EDI,EDI
00697601  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00697604  0F 84 15 02 00 00         JZ 0x0069781f
0069760A  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
0069760D  33 DB                     XOR EBX,EBX
0069760F  33 C0                     XOR EAX,EAX
00697611  33 F6                     XOR ESI,ESI
00697613  85 D2                     TEST EDX,EDX
00697615  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00697618  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069761B  7E 65                     JLE 0x00697682
0069761D  EB 03                     JMP 0x00697622
LAB_0069761f:
0069761F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
LAB_00697622:
00697622  3B F2                     CMP ESI,EDX
00697624  73 0D                     JNC 0x00697633
00697626  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00697629  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
0069762C  0F AF C6                  IMUL EAX,ESI
0069762F  03 C2                     ADD EAX,EDX
00697631  EB 02                     JMP 0x00697635
LAB_00697633:
00697633  33 C0                     XOR EAX,EAX
LAB_00697635:
00697635  8B 10                     MOV EDX,dword ptr [EAX]
00697637  83 FA 01                  CMP EDX,0x1
0069763A  7F 3B                     JG 0x00697677
0069763C  80 78 04 00               CMP byte ptr [EAX + 0x4],0x0
00697640  75 35                     JNZ 0x00697677
00697642  83 78 05 00               CMP dword ptr [EAX + 0x5],0x0
00697646  7E 2F                     JLE 0x00697677
00697648  8B 48 0D                  MOV ECX,dword ptr [EAX + 0xd]
0069764B  83 F9 01                  CMP ECX,0x1
0069764E  75 04                     JNZ 0x00697654
00697650  85 D2                     TEST EDX,EDX
00697652  74 0A                     JZ 0x0069765e
LAB_00697654:
00697654  83 F9 02                  CMP ECX,0x2
00697657  75 1B                     JNZ 0x00697674
00697659  83 FA 01                  CMP EDX,0x1
0069765C  75 16                     JNZ 0x00697674
LAB_0069765e:
0069765E  85 C0                     TEST EAX,EAX
00697660  74 07                     JZ 0x00697669
00697662  83 78 11 09               CMP dword ptr [EAX + 0x11],0x9
00697666  7F 01                     JG 0x00697669
00697668  43                        INC EBX
LAB_00697669:
00697669  8B 40 11                  MOV EAX,dword ptr [EAX + 0x11]
0069766C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069766F  03 C8                     ADD ECX,EAX
00697671  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00697674:
00697674  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_00697677:
00697677  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069767A  46                        INC ESI
0069767B  3B F0                     CMP ESI,EAX
0069767D  7C A0                     JL 0x0069761f
0069767F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00697682:
00697682  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00697685  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00697688  C1 E0 02                  SHL EAX,0x2
0069768B  99                        CDQ
0069768C  F7 B9 2F 58 00 00         IDIV dword ptr [ECX + 0x582f]
00697692  3B 81 43 58 00 00         CMP EAX,dword ptr [ECX + 0x5843]
00697698  0F 8E 81 01 00 00         JLE 0x0069781f
0069769E  33 D2                     XOR EDX,EDX
006976A0  83 FB 03                  CMP EBX,0x3
006976A3  0F 9E C2                  SETLE DL
006976A6  4A                        DEC EDX
006976A7  BB 09 00 00 00            MOV EBX,0x9
006976AC  83 E2 03                  AND EDX,0x3
006976AF  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006976B2  42                        INC EDX
006976B3  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_006976b6:
006976B6  81 FB 17 01 00 00         CMP EBX,0x117
006976BC  0F 8F 5D 01 00 00         JG 0x0069781f
006976C2  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006976C5  8D 7A FF                  LEA EDI,[EDX + -0x1]
006976C8  85 FF                     TEST EDI,EDI
006976CA  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006976CD  0F 8C 38 01 00 00         JL 0x0069780b
LAB_006976d3:
006976D3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006976D6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006976D9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006976DC  C1 E0 02                  SHL EAX,0x2
006976DF  99                        CDQ
006976E0  F7 B9 2F 58 00 00         IDIV dword ptr [ECX + 0x582f]
006976E6  8B 91 43 58 00 00         MOV EDX,dword ptr [ECX + 0x5843]
006976EC  3B C2                     CMP EAX,EDX
006976EE  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006976F1  0F 8E 11 01 00 00         JLE 0x00697808
006976F7  8B 81 53 58 00 00         MOV EAX,dword ptr [ECX + 0x5853]
006976FD  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
00697700  73 10                     JNC 0x00697712
00697702  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00697705  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00697708  0F AF F7                  IMUL ESI,EDI
0069770B  03 F2                     ADD ESI,EDX
0069770D  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00697710  EB 0A                     JMP 0x0069771c
LAB_00697712:
00697712  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00697719  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0069771c:
0069771C  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
0069771F  84 C0                     TEST AL,AL
00697721  0F 85 D7 00 00 00         JNZ 0x006977fe
00697727  8B 46 05                  MOV EAX,dword ptr [ESI + 0x5]
0069772A  85 C0                     TEST EAX,EAX
0069772C  0F 8E CC 00 00 00         JLE 0x006977fe
00697732  8B 46 0D                  MOV EAX,dword ptr [ESI + 0xd]
00697735  83 F8 01                  CMP EAX,0x1
00697738  75 05                     JNZ 0x0069773f
0069773A  83 3E 00                  CMP dword ptr [ESI],0x0
0069773D  74 12                     JZ 0x00697751
LAB_0069773f:
0069773F  83 F8 02                  CMP EAX,0x2
00697742  0F 85 B6 00 00 00         JNZ 0x006977fe
00697748  83 3E 01                  CMP dword ptr [ESI],0x1
0069774B  0F 85 AD 00 00 00         JNZ 0x006977fe
LAB_00697751:
00697751  85 F6                     TEST ESI,ESI
00697753  0F 84 A5 00 00 00         JZ 0x006977fe
00697759  39 5E 11                  CMP dword ptr [ESI + 0x11],EBX
0069775C  0F 8F 9C 00 00 00         JG 0x006977fe
00697762  E8 59 6F 09 00            CALL 0x0072e6c0
00697767  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0069776A  99                        CDQ
0069776B  41                        INC ECX
0069776C  F7 F9                     IDIV ECX
0069776E  85 D2                     TEST EDX,EDX
00697770  0F 84 85 00 00 00         JZ 0x006977fb
00697776  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
00697779  85 C0                     TEST EAX,EAX
0069777B  74 7E                     JZ 0x006977fb
0069777D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00697780  33 D2                     XOR EDX,EDX
00697782  85 C9                     TEST ECX,ECX
00697784  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00697787  7E 72                     JLE 0x006977fb
00697789  3B D1                     CMP EDX,ECX
LAB_0069778b:
0069778B  73 0D                     JNC 0x0069779a
0069778D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00697790  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
00697793  0F AF CA                  IMUL ECX,EDX
00697796  03 CB                     ADD ECX,EBX
00697798  EB 02                     JMP 0x0069779c
LAB_0069779a:
0069779A  33 C9                     XOR ECX,ECX
LAB_0069779c:
0069779C  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
0069779F  84 C0                     TEST AL,AL
006977A1  75 47                     JNZ 0x006977ea
006977A3  8B 71 02                  MOV ESI,dword ptr [ECX + 0x2]
006977A6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006977A9  8B C6                     MOV EAX,ESI
006977AB  6A FF                     PUSH -0x1
006977AD  8B BA 33 58 00 00         MOV EDI,dword ptr [EDX + 0x5833]
006977B3  C6 41 01 01               MOV byte ptr [ECX + 0x1],0x1
006977B7  99                        CDQ
006977B8  F7 FF                     IDIV EDI
006977BA  8B D8                     MOV EBX,EAX
006977BC  8B C6                     MOV EAX,ESI
006977BE  99                        CDQ
006977BF  F7 FF                     IDIV EDI
006977C1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006977C4  83 78 0D 01               CMP dword ptr [EAX + 0xd],0x1
006977C8  75 04                     JNZ 0x006977ce
006977CA  6A 00                     PUSH 0x0
006977CC  EB 02                     JMP 0x006977d0
LAB_006977ce:
006977CE  6A 01                     PUSH 0x1
LAB_006977d0:
006977D0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006977D3  53                        PUSH EBX
006977D4  52                        PUSH EDX
006977D5  E8 57 DF D6 FF            CALL 0x00405731
006977DA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006977DD  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006977E0  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006977E3  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006977E6  48                        DEC EAX
006977E7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006977ea:
006977EA  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
006977ED  42                        INC EDX
006977EE  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006977F1  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006977F4  3B D1                     CMP EDX,ECX
006977F6  7C 93                     JL 0x0069778b
006977F8  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_006977fb:
006977FB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_006977fe:
006977FE  4F                        DEC EDI
006977FF  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00697802  0F 89 CB FE FF FF         JNS 0x006976d3
LAB_00697808:
00697808  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_0069780b:
0069780B  8B 91 43 58 00 00         MOV EDX,dword ptr [ECX + 0x5843]
00697811  83 C3 09                  ADD EBX,0x9
00697814  3B C2                     CMP EAX,EDX
00697816  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00697819  0F 8F 97 FE FF FF         JG 0x006976b6
LAB_0069781f:
0069781F  5F                        POP EDI
00697820  5E                        POP ESI
00697821  5B                        POP EBX
00697822  8B E5                     MOV ESP,EBP
00697824  5D                        POP EBP
00697825  C3                        RET
