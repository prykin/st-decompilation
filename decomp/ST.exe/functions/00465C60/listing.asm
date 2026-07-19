STBoatC::LoadRC:
00465C60  55                        PUSH EBP
00465C61  8B EC                     MOV EBP,ESP
00465C63  83 EC 28                  SUB ESP,0x28
00465C66  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00465C69  53                        PUSH EBX
00465C6A  33 DB                     XOR EBX,EBX
00465C6C  56                        PUSH ESI
00465C6D  57                        PUSH EDI
00465C6E  3B C3                     CMP EAX,EBX
00465C70  8B F1                     MOV ESI,ECX
00465C72  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00465C75  BF 01 00 00 00            MOV EDI,0x1
00465C7A  0F 84 36 3C 00 00         JZ 0x004698b6
00465C80  3B C7                     CMP EAX,EDI
00465C82  0F 84 2E 3C 00 00         JZ 0x004698b6
00465C88  8B 86 D5 04 00 00         MOV EAX,dword ptr [ESI + 0x4d5]
00465C8E  3B C3                     CMP EAX,EBX
00465C90  0F 85 FA 01 00 00         JNZ 0x00465e90
00465C96  6A 02                     PUSH 0x2
00465C98  E8 8E DD F9 FF            CALL 0x00403a2b
00465C9D  83 F8 FF                  CMP EAX,-0x1
00465CA0  75 0B                     JNZ 0x00465cad
00465CA2  0B C0                     OR EAX,EAX
00465CA4  5F                        POP EDI
00465CA5  5E                        POP ESI
00465CA6  5B                        POP EBX
00465CA7  8B E5                     MOV ESP,EBP
00465CA9  5D                        POP EBP
00465CAA  C2 04 00                  RET 0x4
LAB_00465cad:
00465CAD  39 9E 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EBX
00465CB3  0F 85 79 01 00 00         JNZ 0x00465e32
00465CB9  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00465CBF  83 F8 01                  CMP EAX,0x1
00465CC2  74 16                     JZ 0x00465cda
00465CC4  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00465CCB  0F 85 61 01 00 00         JNZ 0x00465e32
00465CD1  83 F8 01                  CMP EAX,0x1
00465CD4  0F 85 96 00 00 00         JNZ 0x00465d70
LAB_00465cda:
00465CDA  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
00465CE0  C7 86 BD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4bd],0x0
00465CEA  83 FB FF                  CMP EBX,-0x1
00465CED  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00465CF0  74 7E                     JZ 0x00465d70
00465CF2  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
00465CF9  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00465D00  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
00465D07  66 85 C0                  TEST AX,AX
00465D0A  7C 53                     JL 0x00465d5f
00465D0C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00465D13  66 3B C7                  CMP AX,DI
00465D16  7D 47                     JGE 0x00465d5f
00465D18  66 85 D2                  TEST DX,DX
00465D1B  7C 42                     JL 0x00465d5f
00465D1D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00465D24  7D 39                     JGE 0x00465d5f
00465D26  66 85 C9                  TEST CX,CX
00465D29  7C 34                     JL 0x00465d5f
00465D2B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00465D32  7D 2B                     JGE 0x00465d5f
00465D34  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00465D3B  0F BF C9                  MOVSX ECX,CX
00465D3E  0F AF D9                  IMUL EBX,ECX
00465D41  0F BF CF                  MOVSX ECX,DI
00465D44  0F BF D2                  MOVSX EDX,DX
00465D47  0F AF CA                  IMUL ECX,EDX
00465D4A  0F BF C0                  MOVSX EAX,AX
00465D4D  03 D9                     ADD EBX,ECX
00465D4F  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00465D55  03 D8                     ADD EBX,EAX
00465D57  8B 04 D9                  MOV EAX,dword ptr [ECX + EBX*0x8]
00465D5A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00465D5D  EB 02                     JMP 0x00465d61
LAB_00465d5f:
00465D5F  33 C0                     XOR EAX,EAX
LAB_00465d61:
00465D61  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00465D64  74 0A                     JZ 0x00465d70
00465D66  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_00465d70:
00465D70  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00465D77  0F 85 96 00 00 00         JNZ 0x00465e13
00465D7D  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
00465D87  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00465D8D  83 FB FF                  CMP EBX,-0x1
00465D90  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00465D93  74 7E                     JZ 0x00465e13
00465D95  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00465D9C  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00465DA3  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00465DAA  66 85 C0                  TEST AX,AX
00465DAD  7C 53                     JL 0x00465e02
00465DAF  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00465DB6  66 3B C7                  CMP AX,DI
00465DB9  7D 47                     JGE 0x00465e02
00465DBB  66 85 D2                  TEST DX,DX
00465DBE  7C 42                     JL 0x00465e02
00465DC0  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00465DC7  7D 39                     JGE 0x00465e02
00465DC9  66 85 C9                  TEST CX,CX
00465DCC  7C 34                     JL 0x00465e02
00465DCE  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00465DD5  7D 2B                     JGE 0x00465e02
00465DD7  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00465DDE  0F BF C9                  MOVSX ECX,CX
00465DE1  0F BF D2                  MOVSX EDX,DX
00465DE4  0F AF CB                  IMUL ECX,EBX
00465DE7  0F BF FF                  MOVSX EDI,DI
00465DEA  0F AF D7                  IMUL EDX,EDI
00465DED  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00465DF0  03 CA                     ADD ECX,EDX
00465DF2  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00465DF8  0F BF C0                  MOVSX EAX,AX
00465DFB  03 C8                     ADD ECX,EAX
00465DFD  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00465E00  EB 02                     JMP 0x00465e04
LAB_00465e02:
00465E02  33 C0                     XOR EAX,EAX
LAB_00465e04:
00465E04  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00465E07  74 0A                     JZ 0x00465e13
00465E09  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_00465e13:
00465E13  8B CE                     MOV ECX,ESI
00465E15  E8 6A D3 F9 FF            CALL 0x00403184
00465E1A  33 FF                     XOR EDI,EDI
00465E1C  3B C7                     CMP EAX,EDI
00465E1E  74 12                     JZ 0x00465e32
00465E20  83 F8 01                  CMP EAX,0x1
00465E23  0F 85 19 29 00 00         JNZ 0x00468742
00465E29  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
00465E30  75 0E                     JNZ 0x00465e40
LAB_00465e32:
00465E32  B8 02 00 00 00            MOV EAX,0x2
00465E37  5F                        POP EDI
00465E38  5E                        POP ESI
00465E39  5B                        POP EBX
00465E3A  8B E5                     MOV ESP,EBP
00465E3C  5D                        POP EBP
00465E3D  C2 04 00                  RET 0x4
STBoatC::LoadRC::cf_common_exit_00465E40:
00465E40  89 BE CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDI
00465E46  C7 86 D5 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d5],0x1
00465E50  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
STBoatC::LoadRC::cf_common_exit_00465E5A:
00465E5A  0F BF 86 9F 04 00 00      MOVSX EAX,word ptr [ESI + 0x49f]
00465E61  0F BF 8E 9D 04 00 00      MOVSX ECX,word ptr [ESI + 0x49d]
00465E68  0F BF 96 9B 04 00 00      MOVSX EDX,word ptr [ESI + 0x49b]
00465E6F  40                        INC EAX
00465E70  50                        PUSH EAX
00465E71  51                        PUSH ECX
LAB_00465e72:
00465E72  52                        PUSH EDX
00465E73  8B CE                     MOV ECX,ESI
00465E75  E8 F1 F0 F9 FF            CALL 0x00404f6b
00465E7A  57                        PUSH EDI
STBoatC::LoadRC::cf_common_exit_00465E7B:
00465E7B  8B CE                     MOV ECX,ESI
00465E7D  E8 5C D3 F9 FF            CALL 0x004031de
LAB_00465e82:
00465E82  B8 02 00 00 00            MOV EAX,0x2
00465E87  5F                        POP EDI
00465E88  5E                        POP ESI
00465E89  5B                        POP EBX
00465E8A  8B E5                     MOV ESP,EBP
00465E8C  5D                        POP EBP
00465E8D  C2 04 00                  RET 0x4
LAB_00465e90:
00465E90  3B C7                     CMP EAX,EDI
00465E92  0F 85 95 05 00 00         JNZ 0x0046642d
00465E98  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
00465E9E  3B C3                     CMP EAX,EBX
00465EA0  0F 8E F6 01 00 00         JLE 0x0046609c
00465EA6  40                        INC EAX
00465EA7  83 F8 02                  CMP EAX,0x2
00465EAA  89 86 CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EAX
00465EB0  75 1C                     JNZ 0x00465ece
00465EB2  53                        PUSH EBX
00465EB3  8B CE                     MOV ECX,ESI
00465EB5  E8 71 DB F9 FF            CALL 0x00403a2b
00465EBA  83 F8 FF                  CMP EAX,-0x1
00465EBD  0F 85 6F FF FF FF         JNZ 0x00465e32
00465EC3  0B C0                     OR EAX,EAX
00465EC5  5F                        POP EDI
00465EC6  5E                        POP ESI
00465EC7  5B                        POP EBX
00465EC8  8B E5                     MOV ESP,EBP
00465ECA  5D                        POP EBP
00465ECB  C2 04 00                  RET 0x4
LAB_00465ece:
00465ECE  6A 02                     PUSH 0x2
00465ED0  8B CE                     MOV ECX,ESI
00465ED2  E8 54 DB F9 FF            CALL 0x00403a2b
00465ED7  83 F8 FF                  CMP EAX,-0x1
00465EDA  75 0B                     JNZ 0x00465ee7
00465EDC  0B C0                     OR EAX,EAX
00465EDE  5F                        POP EDI
00465EDF  5E                        POP ESI
00465EE0  5B                        POP EBX
00465EE1  8B E5                     MOV ESP,EBP
00465EE3  5D                        POP EBP
00465EE4  C2 04 00                  RET 0x4
LAB_00465ee7:
00465EE7  39 9E 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EBX
00465EED  0F 85 3F FF FF FF         JNZ 0x00465e32
00465EF3  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00465EF9  3B C7                     CMP EAX,EDI
00465EFB  74 14                     JZ 0x00465f11
00465EFD  39 BE C1 04 00 00         CMP dword ptr [ESI + 0x4c1],EDI
00465F03  0F 85 29 FF FF FF         JNZ 0x00465e32
00465F09  3B C7                     CMP EAX,EDI
00465F0B  0F 85 96 00 00 00         JNZ 0x00465fa7
LAB_00465f11:
00465F11  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
00465F17  C7 86 BD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4bd],0x0
00465F21  83 FB FF                  CMP EBX,-0x1
00465F24  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00465F27  74 7E                     JZ 0x00465fa7
00465F29  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
00465F30  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00465F37  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
00465F3E  66 85 C0                  TEST AX,AX
00465F41  7C 53                     JL 0x00465f96
00465F43  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00465F4A  66 3B C7                  CMP AX,DI
00465F4D  7D 47                     JGE 0x00465f96
00465F4F  66 85 D2                  TEST DX,DX
00465F52  7C 42                     JL 0x00465f96
00465F54  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00465F5B  7D 39                     JGE 0x00465f96
00465F5D  66 85 C9                  TEST CX,CX
00465F60  7C 34                     JL 0x00465f96
00465F62  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00465F69  7D 2B                     JGE 0x00465f96
00465F6B  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00465F72  0F BF C9                  MOVSX ECX,CX
00465F75  0F BF D2                  MOVSX EDX,DX
00465F78  0F AF CB                  IMUL ECX,EBX
00465F7B  0F BF FF                  MOVSX EDI,DI
00465F7E  0F AF D7                  IMUL EDX,EDI
00465F81  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00465F84  03 CA                     ADD ECX,EDX
00465F86  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00465F8C  0F BF C0                  MOVSX EAX,AX
00465F8F  03 C8                     ADD ECX,EAX
00465F91  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00465F94  EB 02                     JMP 0x00465f98
LAB_00465f96:
00465F96  33 C0                     XOR EAX,EAX
LAB_00465f98:
00465F98  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00465F9B  74 0A                     JZ 0x00465fa7
00465F9D  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_00465fa7:
00465FA7  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00465FAE  0F 85 96 00 00 00         JNZ 0x0046604a
00465FB4  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
00465FBE  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00465FC4  83 FB FF                  CMP EBX,-0x1
00465FC7  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00465FCA  74 7E                     JZ 0x0046604a
00465FCC  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00465FD3  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00465FDA  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00465FE1  66 85 C0                  TEST AX,AX
00465FE4  7C 53                     JL 0x00466039
00465FE6  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00465FED  66 3B C7                  CMP AX,DI
00465FF0  7D 47                     JGE 0x00466039
00465FF2  66 85 D2                  TEST DX,DX
00465FF5  7C 42                     JL 0x00466039
00465FF7  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00465FFE  7D 39                     JGE 0x00466039
00466000  66 85 C9                  TEST CX,CX
00466003  7C 34                     JL 0x00466039
00466005  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046600C  7D 2B                     JGE 0x00466039
0046600E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00466015  0F BF C9                  MOVSX ECX,CX
00466018  0F BF D2                  MOVSX EDX,DX
0046601B  0F AF CB                  IMUL ECX,EBX
0046601E  0F BF FF                  MOVSX EDI,DI
00466021  0F AF D7                  IMUL EDX,EDI
00466024  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00466027  03 CA                     ADD ECX,EDX
00466029  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046602F  0F BF C0                  MOVSX EAX,AX
00466032  03 C8                     ADD ECX,EAX
00466034  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00466037  EB 02                     JMP 0x0046603b
LAB_00466039:
00466039  33 C0                     XOR EAX,EAX
LAB_0046603b:
0046603B  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
0046603E  74 0A                     JZ 0x0046604a
00466040  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_0046604a:
0046604A  8B CE                     MOV ECX,ESI
0046604C  E8 33 D1 F9 FF            CALL 0x00403184
00466051  33 FF                     XOR EDI,EDI
00466053  3B C7                     CMP EAX,EDI
00466055  75 13                     JNZ 0x0046606a
00466057  8B CE                     MOV ECX,ESI
00466059  E8 F7 D7 F9 FF            CALL 0x00403855
0046605E  89 BE D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EDI
00466064  57                        PUSH EDI
00466065  E9 0F 39 00 00            JMP 0x00469979
LAB_0046606a:
0046606A  83 F8 01                  CMP EAX,0x1
0046606D  75 18                     JNZ 0x00466087
0046606F  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
00466076  0F 84 06 FE FF FF         JZ 0x00465e82
0046607C  89 BE CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDI
00466082  E9 D3 FD FF FF            JMP 0x00465e5a
LAB_00466087:
00466087  89 BE CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDI
0046608D  C7 86 D5 04 00 00 07 00 00 00  MOV dword ptr [ESI + 0x4d5],0x7
00466097  E9 C0 26 00 00            JMP 0x0046875c
LAB_0046609c:
0046609C  6A 02                     PUSH 0x2
0046609E  8B CE                     MOV ECX,ESI
004660A0  E8 39 D1 F9 FF            CALL 0x004031de
004660A5  40                        INC EAX
004660A6  83 F8 04                  CMP EAX,0x4
004660A9  0F 87 A1 2B 00 00         JA 0x00468c50
switchD_004660af::switchD:
004660AF  FF 24 85 08 9A 46 00      JMP dword ptr [EAX*0x4 + 0x469a08]
switchD_004660af::caseD_ffffffff:
004660B6  68 E4 A4 7A 00            PUSH 0x7aa4e4
004660BB  68 CC 4C 7A 00            PUSH 0x7a4ccc
004660C0  53                        PUSH EBX
004660C1  53                        PUSH EBX
004660C2  68 02 1D 00 00            PUSH 0x1d02
004660C7  68 3C 9D 7A 00            PUSH 0x7a9d3c
004660CC  E8 FF 73 24 00            CALL 0x006ad4d0
004660D1  83 C4 18                  ADD ESP,0x18
004660D4  85 C0                     TEST EAX,EAX
004660D6  74 01                     JZ 0x004660d9
004660D8  CC                        INT3
LAB_004660d9:
004660D9  68 02 1D 00 00            PUSH 0x1d02
LAB_004660de:
004660DE  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004660E3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004660E8  50                        PUSH EAX
STBoatC::LoadRC::cf_error_exit_004660E9:
004660E9  68 FF FF 00 00            PUSH 0xffff
004660EE  E8 4D FD 23 00            CALL 0x006a5e40
004660F3  B8 FF FF 00 00            MOV EAX,0xffff
004660F8  5F                        POP EDI
004660F9  5E                        POP ESI
004660FA  5B                        POP EBX
004660FB  8B E5                     MOV ESP,EBP
004660FD  5D                        POP EBP
004660FE  C2 04 00                  RET 0x4
switchD_004660af::caseD_0:
00466101  8B CE                     MOV ECX,ESI
00466103  E8 C3 E8 F9 FF            CALL 0x004049cb
00466108  3B C7                     CMP EAX,EDI
0046610A  0F 85 1E 01 00 00         JNZ 0x0046622e
00466110  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
00466117  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
0046611E  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
00466125  66 3B C3                  CMP AX,BX
00466128  0F 8C 00 01 00 00         JL 0x0046622e
0046612E  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00466135  66 3B C7                  CMP AX,DI
00466138  0F 8D F0 00 00 00         JGE 0x0046622e
0046613E  66 3B D3                  CMP DX,BX
00466141  0F 8C E7 00 00 00         JL 0x0046622e
00466147  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046614E  0F 8D DA 00 00 00         JGE 0x0046622e
00466154  66 3B CB                  CMP CX,BX
00466157  0F 8C D1 00 00 00         JL 0x0046622e
0046615D  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00466164  0F 8D C4 00 00 00         JGE 0x0046622e
0046616A  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00466171  0F BF C9                  MOVSX ECX,CX
00466174  0F BF D2                  MOVSX EDX,DX
00466177  0F AF CB                  IMUL ECX,EBX
0046617A  0F BF FF                  MOVSX EDI,DI
0046617D  0F AF D7                  IMUL EDX,EDI
00466180  0F BF C0                  MOVSX EAX,AX
00466183  03 CA                     ADD ECX,EDX
00466185  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046618B  03 C8                     ADD ECX,EAX
0046618D  33 DB                     XOR EBX,EBX
0046618F  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
00466192  3B CB                     CMP ECX,EBX
00466194  0F 84 94 00 00 00         JZ 0x0046622e
0046619A  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0046619D  8B 96 A1 04 00 00         MOV EDX,dword ptr [ESI + 0x4a1]
004661A3  3B C2                     CMP EAX,EDX
004661A5  0F 85 83 00 00 00         JNZ 0x0046622e
004661AB  E8 C0 F2 F9 FF            CALL 0x00405470
004661B0  83 F8 01                  CMP EAX,0x1
004661B3  74 79                     JZ 0x0046622e
004661B5  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
004661BC  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
004661C3  8D BE B3 04 00 00         LEA EDI,[ESI + 0x4b3]
004661C9  8D 9E B1 04 00 00         LEA EBX,[ESI + 0x4b1]
004661CF  8D 86 AF 04 00 00         LEA EAX,[ESI + 0x4af]
004661D5  57                        PUSH EDI
004661D6  53                        PUSH EBX
004661D7  50                        PUSH EAX
004661D8  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
004661DF  66 41                     INC CX
004661E1  6A 01                     PUSH 0x1
004661E3  51                        PUSH ECX
004661E4  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
004661E8  52                        PUSH EDX
004661E9  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
004661ED  50                        PUSH EAX
004661EE  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
004661F2  51                        PUSH ECX
004661F3  52                        PUSH EDX
004661F4  50                        PUSH EAX
004661F5  8B CE                     MOV ECX,ESI
004661F7  E8 0C E7 F9 FF            CALL 0x00404908
004661FC  0F BF 0F                  MOVSX ECX,word ptr [EDI]
004661FF  0F BF 13                  MOVSX EDX,word ptr [EBX]
00466202  0F BF 86 AF 04 00 00      MOVSX EAX,word ptr [ESI + 0x4af]
00466209  51                        PUSH ECX
0046620A  52                        PUSH EDX
0046620B  50                        PUSH EAX
0046620C  8B CE                     MOV ECX,ESI
0046620E  C7 86 D5 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4d5],0x2
00466218  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
00466222  E8 44 ED F9 FF            CALL 0x00404f6b
00466227  6A 00                     PUSH 0x0
00466229  E9 1B 2A 00 00            JMP 0x00468c49
LAB_0046622e:
0046622E  C7 86 D5 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d5],0x3
00466238  E9 3B 37 00 00            JMP 0x00469978
switchD_004660af::caseD_1:
0046623D  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00466243  3B C7                     CMP EAX,EDI
00466245  74 0C                     JZ 0x00466253
00466247  39 BE C1 04 00 00         CMP dword ptr [ESI + 0x4c1],EDI
0046624D  0F 85 FD 29 00 00         JNZ 0x00468c50
LAB_00466253:
00466253  3B C7                     CMP EAX,EDI
00466255  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00466258  0F 85 A6 00 00 00         JNZ 0x00466304
0046625E  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
00466264  C7 86 BD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4bd],0x0
0046626E  83 FB FF                  CMP EBX,-0x1
00466271  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00466274  74 7E                     JZ 0x004662f4
00466276  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
0046627D  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00466284  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
0046628B  66 85 C0                  TEST AX,AX
0046628E  7C 53                     JL 0x004662e3
00466290  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00466297  66 3B C7                  CMP AX,DI
0046629A  7D 47                     JGE 0x004662e3
0046629C  66 85 D2                  TEST DX,DX
0046629F  7C 42                     JL 0x004662e3
004662A1  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004662A8  7D 39                     JGE 0x004662e3
004662AA  66 85 C9                  TEST CX,CX
004662AD  7C 34                     JL 0x004662e3
004662AF  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004662B6  7D 2B                     JGE 0x004662e3
004662B8  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004662BF  0F BF C9                  MOVSX ECX,CX
004662C2  0F BF D2                  MOVSX EDX,DX
004662C5  0F AF CB                  IMUL ECX,EBX
004662C8  0F BF FF                  MOVSX EDI,DI
004662CB  0F AF D7                  IMUL EDX,EDI
004662CE  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004662D1  03 CA                     ADD ECX,EDX
004662D3  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004662D9  0F BF C0                  MOVSX EAX,AX
004662DC  03 C8                     ADD ECX,EAX
004662DE  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004662E1  EB 02                     JMP 0x004662e5
LAB_004662e3:
004662E3  33 C0                     XOR EAX,EAX
LAB_004662e5:
004662E5  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
004662E8  74 0A                     JZ 0x004662f4
004662EA  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_004662f4:
004662F4  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
004662FB  74 07                     JZ 0x00466304
004662FD  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00466304:
00466304  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
0046630B  0F 85 96 00 00 00         JNZ 0x004663a7
00466311  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
0046631B  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00466321  83 FB FF                  CMP EBX,-0x1
00466324  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00466327  74 7E                     JZ 0x004663a7
00466329  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00466330  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00466337  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
0046633E  66 85 C0                  TEST AX,AX
00466341  7C 53                     JL 0x00466396
00466343  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046634A  66 3B C7                  CMP AX,DI
0046634D  7D 47                     JGE 0x00466396
0046634F  66 85 D2                  TEST DX,DX
00466352  7C 42                     JL 0x00466396
00466354  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046635B  7D 39                     JGE 0x00466396
0046635D  66 85 C9                  TEST CX,CX
00466360  7C 34                     JL 0x00466396
00466362  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00466369  7D 2B                     JGE 0x00466396
0046636B  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00466372  0F BF C9                  MOVSX ECX,CX
00466375  0F BF D2                  MOVSX EDX,DX
00466378  0F AF CB                  IMUL ECX,EBX
0046637B  0F BF FF                  MOVSX EDI,DI
0046637E  0F AF D7                  IMUL EDX,EDI
00466381  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00466384  03 CA                     ADD ECX,EDX
00466386  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046638C  0F BF C0                  MOVSX EAX,AX
0046638F  03 C8                     ADD ECX,EAX
00466391  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00466394  EB 02                     JMP 0x00466398
LAB_00466396:
00466396  33 C0                     XOR EAX,EAX
LAB_00466398:
00466398  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
0046639B  74 0A                     JZ 0x004663a7
0046639D  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_004663a7:
004663A7  8B CE                     MOV ECX,ESI
004663A9  E8 D6 CD F9 FF            CALL 0x00403184
004663AE  85 C0                     TEST EAX,EAX
004663B0  0F 84 2E 1C 00 00         JZ 0x00467fe4
004663B6  83 F8 01                  CMP EAX,0x1
004663B9  75 5C                     JNZ 0x00466417
004663BB  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
004663C2  74 0B                     JZ 0x004663cf
004663C4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004663C7  85 C0                     TEST EAX,EAX
004663C9  0F 84 81 28 00 00         JZ 0x00468c50
LAB_004663cf:
004663CF  8B CE                     MOV ECX,ESI
004663D1  E8 7F D4 F9 FF            CALL 0x00403855
004663D6  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
004663DD  75 29                     JNZ 0x00466408
004663DF  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
004663E5  8B CE                     MOV ECX,ESI
004663E7  40                        INC EAX
004663E8  89 86 CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EAX
004663EE  8B 06                     MOV EAX,dword ptr [ESI]
004663F0  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004663F6  F7 D8                     NEG EAX
004663F8  1B C0                     SBB EAX,EAX
004663FA  24 FD                     AND AL,0xfd
004663FC  83 C0 02                  ADD EAX,0x2
004663FF  5F                        POP EDI
00466400  5E                        POP ESI
00466401  5B                        POP EBX
00466402  8B E5                     MOV ESP,EBP
00466404  5D                        POP EBP
00466405  C2 04 00                  RET 0x4
LAB_00466408:
00466408  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
0046640C  0F 85 3E 28 00 00         JNZ 0x00468c50
00466412  E9 01 0C 00 00            JMP 0x00467018
LAB_00466417:
00466417  8B CE                     MOV ECX,ESI
00466419  E8 37 D4 F9 FF            CALL 0x00403855
0046641E  C7 86 D5 04 00 00 07 00 00 00  MOV dword ptr [ESI + 0x4d5],0x7
00466428  E9 15 27 00 00            JMP 0x00468b42
LAB_0046642d:
0046642D  83 F8 02                  CMP EAX,0x2
00466430  0F 85 04 04 00 00         JNZ 0x0046683a
00466436  50                        PUSH EAX
00466437  8B CE                     MOV ECX,ESI
00466439  E8 A0 CD F9 FF            CALL 0x004031de
0046643E  40                        INC EAX
0046643F  83 F8 04                  CMP EAX,0x4
00466442  0F 87 A1 35 00 00         JA 0x004699e9
switchD_00466448::switchD:
00466448  FF 24 85 1C 9A 46 00      JMP dword ptr [EAX*0x4 + 0x469a1c]
switchD_00466448::caseD_ffffffff:
0046644F  68 B0 A4 7A 00            PUSH 0x7aa4b0
00466454  68 CC 4C 7A 00            PUSH 0x7a4ccc
00466459  6A 00                     PUSH 0x0
0046645B  6A 00                     PUSH 0x0
0046645D  68 66 1D 00 00            PUSH 0x1d66
00466462  68 3C 9D 7A 00            PUSH 0x7a9d3c
00466467  E8 64 70 24 00            CALL 0x006ad4d0
0046646C  83 C4 18                  ADD ESP,0x18
0046646F  85 C0                     TEST EAX,EAX
00466471  74 01                     JZ 0x00466474
00466473  CC                        INT3
LAB_00466474:
00466474  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0046647A  68 66 1D 00 00            PUSH 0x1d66
0046647F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00466484  51                        PUSH ECX
00466485  68 FF FF 00 00            PUSH 0xffff
0046648A  E8 B1 F9 23 00            CALL 0x006a5e40
0046648F  B8 FF FF 00 00            MOV EAX,0xffff
00466494  5F                        POP EDI
00466495  5E                        POP ESI
00466496  5B                        POP EBX
00466497  8B E5                     MOV ESP,EBP
00466499  5D                        POP EBP
0046649A  C2 04 00                  RET 0x4
switchD_00466448::caseD_0:
0046649D  8B CE                     MOV ECX,ESI
0046649F  E8 27 E5 F9 FF            CALL 0x004049cb
004664A4  83 F8 01                  CMP EAX,0x1
004664A7  75 35                     JNZ 0x004664de
004664A9  66 8B 96 9F 04 00 00      MOV DX,word ptr [ESI + 0x49f]
004664B0  66 8B 8E 9B 04 00 00      MOV CX,word ptr [ESI + 0x49b]
004664B7  8D BE B3 04 00 00         LEA EDI,[ESI + 0x4b3]
004664BD  8D 9E B1 04 00 00         LEA EBX,[ESI + 0x4b1]
004664C3  8D 86 AF 04 00 00         LEA EAX,[ESI + 0x4af]
004664C9  57                        PUSH EDI
004664CA  53                        PUSH EBX
004664CB  50                        PUSH EAX
004664CC  66 8B 86 9D 04 00 00      MOV AX,word ptr [ESI + 0x49d]
004664D3  66 42                     INC DX
004664D5  6A 01                     PUSH 0x1
004664D7  52                        PUSH EDX
004664D8  50                        PUSH EAX
004664D9  E9 C7 18 00 00            JMP 0x00467da5
LAB_004664de:
004664DE  BF 03 00 00 00            MOV EDI,0x3
004664E3  6A 00                     PUSH 0x0
004664E5  8B CE                     MOV ECX,ESI
004664E7  89 BE D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EDI
004664ED  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
004664F3  E8 33 D5 F9 FF            CALL 0x00403a2b
004664F8  40                        INC EAX
004664F9  F7 D8                     NEG EAX
004664FB  1B C0                     SBB EAX,EAX
004664FD  23 C7                     AND EAX,EDI
004664FF  48                        DEC EAX
00466500  5F                        POP EDI
00466501  5E                        POP ESI
00466502  5B                        POP EBX
00466503  8B E5                     MOV ESP,EBP
00466505  5D                        POP EBP
00466506  C2 04 00                  RET 0x4
switchD_00466448::caseD_3:
00466509  8B CE                     MOV ECX,ESI
0046650B  E8 BB E4 F9 FF            CALL 0x004049cb
00466510  83 F8 01                  CMP EAX,0x1
00466513  0F 85 2F 19 00 00         JNZ 0x00467e48
00466519  8D 96 B3 04 00 00         LEA EDX,[ESI + 0x4b3]
0046651F  8D 86 B1 04 00 00         LEA EAX,[ESI + 0x4b1]
00466525  52                        PUSH EDX
00466526  66 8B 96 9F 04 00 00      MOV DX,word ptr [ESI + 0x49f]
0046652D  8D 8E AF 04 00 00         LEA ECX,[ESI + 0x4af]
00466533  50                        PUSH EAX
00466534  66 8B 86 9D 04 00 00      MOV AX,word ptr [ESI + 0x49d]
0046653B  51                        PUSH ECX
0046653C  66 8B 8E 9B 04 00 00      MOV CX,word ptr [ESI + 0x49b]
00466543  66 42                     INC DX
00466545  6A 01                     PUSH 0x1
00466547  52                        PUSH EDX
00466548  50                        PUSH EAX
00466549  E9 E3 18 00 00            JMP 0x00467e31
switchD_00466448::caseD_1:
0046654E  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00466554  83 F8 01                  CMP EAX,0x1
00466557  74 0D                     JZ 0x00466566
00466559  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00466560  0F 85 DE 01 00 00         JNZ 0x00466744
LAB_00466566:
00466566  33 FF                     XOR EDI,EDI
00466568  83 F8 01                  CMP EAX,0x1
0046656B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0046656E  0F 85 A2 00 00 00         JNZ 0x00466616
00466574  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
0046657A  89 BE BD 04 00 00         MOV dword ptr [ESI + 0x4bd],EDI
00466580  83 FB FF                  CMP EBX,-0x1
00466583  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00466586  74 7E                     JZ 0x00466606
00466588  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
0046658F  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00466596  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
0046659D  66 3B C7                  CMP AX,DI
004665A0  7C 53                     JL 0x004665f5
004665A2  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004665A9  66 3B C7                  CMP AX,DI
004665AC  7D 47                     JGE 0x004665f5
004665AE  66 85 D2                  TEST DX,DX
004665B1  7C 42                     JL 0x004665f5
004665B3  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004665BA  7D 39                     JGE 0x004665f5
004665BC  66 85 C9                  TEST CX,CX
004665BF  7C 34                     JL 0x004665f5
004665C1  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004665C8  7D 2B                     JGE 0x004665f5
004665CA  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004665D1  0F BF C9                  MOVSX ECX,CX
004665D4  0F BF D2                  MOVSX EDX,DX
004665D7  0F AF CB                  IMUL ECX,EBX
004665DA  0F BF FF                  MOVSX EDI,DI
004665DD  0F AF D7                  IMUL EDX,EDI
004665E0  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004665E3  03 CA                     ADD ECX,EDX
004665E5  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004665EB  0F BF C0                  MOVSX EAX,AX
004665EE  03 C8                     ADD ECX,EAX
004665F0  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004665F3  EB 02                     JMP 0x004665f7
LAB_004665f5:
004665F5  33 C0                     XOR EAX,EAX
LAB_004665f7:
004665F7  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
004665FA  74 0A                     JZ 0x00466606
004665FC  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_00466606:
00466606  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
0046660D  74 07                     JZ 0x00466616
0046660F  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00466616:
00466616  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
0046661D  0F 85 96 00 00 00         JNZ 0x004666b9
00466623  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
0046662D  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00466633  83 FB FF                  CMP EBX,-0x1
00466636  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00466639  74 7E                     JZ 0x004666b9
0046663B  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00466642  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00466649  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00466650  66 85 C0                  TEST AX,AX
00466653  7C 53                     JL 0x004666a8
00466655  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046665C  66 3B C7                  CMP AX,DI
0046665F  7D 47                     JGE 0x004666a8
00466661  66 85 D2                  TEST DX,DX
00466664  7C 42                     JL 0x004666a8
00466666  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046666D  7D 39                     JGE 0x004666a8
0046666F  66 85 C9                  TEST CX,CX
00466672  7C 34                     JL 0x004666a8
00466674  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046667B  7D 2B                     JGE 0x004666a8
0046667D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00466684  0F BF C9                  MOVSX ECX,CX
00466687  0F BF D2                  MOVSX EDX,DX
0046668A  0F AF CB                  IMUL ECX,EBX
0046668D  0F BF FF                  MOVSX EDI,DI
00466690  0F AF D7                  IMUL EDX,EDI
00466693  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00466696  03 CA                     ADD ECX,EDX
00466698  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046669E  0F BF C0                  MOVSX EAX,AX
004666A1  03 C8                     ADD ECX,EAX
004666A3  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004666A6  EB 02                     JMP 0x004666aa
LAB_004666a8:
004666A8  33 C0                     XOR EAX,EAX
LAB_004666aa:
004666AA  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
004666AD  74 0A                     JZ 0x004666b9
004666AF  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_004666b9:
004666B9  8B CE                     MOV ECX,ESI
004666BB  E8 C4 CA F9 FF            CALL 0x00403184
004666C0  85 C0                     TEST EAX,EAX
004666C2  0F 84 1C 19 00 00         JZ 0x00467fe4
004666C8  83 F8 01                  CMP EAX,0x1
004666CB  0F 85 AD 1A 00 00         JNZ 0x0046817e
004666D1  8B 86 A1 04 00 00         MOV EAX,dword ptr [ESI + 0x4a1]
004666D7  83 CF FF                  OR EDI,0xffffffff
004666DA  3B C7                     CMP EAX,EDI
004666DC  74 0B                     JZ 0x004666e9
004666DE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004666E1  85 C0                     TEST EAX,EAX
004666E3  0F 84 00 33 00 00         JZ 0x004699e9
LAB_004666e9:
004666E9  8B CE                     MOV ECX,ESI
004666EB  E8 65 D1 F9 FF            CALL 0x00403855
004666F0  39 BE A1 04 00 00         CMP dword ptr [ESI + 0x4a1],EDI
004666F6  75 0B                     JNZ 0x00466703
004666F8  FF 86 CD 04 00 00         INC dword ptr [ESI + 0x4cd]
004666FE  E9 E6 32 00 00            JMP 0x004699e9
LAB_00466703:
00466703  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
00466707  75 3B                     JNZ 0x00466744
00466709  0F BF 86 9F 04 00 00      MOVSX EAX,word ptr [ESI + 0x49f]
00466710  0F BF 8E 9D 04 00 00      MOVSX ECX,word ptr [ESI + 0x49d]
00466717  0F BF 96 9B 04 00 00      MOVSX EDX,word ptr [ESI + 0x49b]
0046671E  40                        INC EAX
0046671F  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
00466729  50                        PUSH EAX
0046672A  51                        PUSH ECX
0046672B  52                        PUSH EDX
0046672C  8B CE                     MOV ECX,ESI
0046672E  C7 86 D5 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d5],0x1
00466738  E8 2E E8 F9 FF            CALL 0x00404f6b
0046673D  6A 00                     PUSH 0x0
0046673F  E9 9E 32 00 00            JMP 0x004699e2
LAB_00466744:
00466744  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
0046674B  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00466752  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
00466759  66 85 C0                  TEST AX,AX
0046675C  0F 8C 87 32 00 00         JL 0x004699e9
00466762  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00466769  66 3B C7                  CMP AX,DI
0046676C  0F 8D 77 32 00 00         JGE 0x004699e9
00466772  66 85 D2                  TEST DX,DX
00466775  0F 8C 6E 32 00 00         JL 0x004699e9
0046677B  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00466782  0F 8D 61 32 00 00         JGE 0x004699e9
00466788  66 85 C9                  TEST CX,CX
0046678B  0F 8C 58 32 00 00         JL 0x004699e9
00466791  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00466798  0F 8D 4B 32 00 00         JGE 0x004699e9
0046679E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004667A5  0F BF C9                  MOVSX ECX,CX
004667A8  0F BF D2                  MOVSX EDX,DX
004667AB  0F AF CB                  IMUL ECX,EBX
004667AE  0F BF FF                  MOVSX EDI,DI
004667B1  0F AF D7                  IMUL EDX,EDI
004667B4  0F BF C0                  MOVSX EAX,AX
004667B7  03 CA                     ADD ECX,EDX
004667B9  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004667BF  03 C8                     ADD ECX,EAX
004667C1  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
004667C4  85 FF                     TEST EDI,EDI
004667C6  0F 84 1D 32 00 00         JZ 0x004699e9
004667CC  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004667CF  8B 8E A1 04 00 00         MOV ECX,dword ptr [ESI + 0x4a1]
004667D5  3B C1                     CMP EAX,ECX
004667D7  0F 85 0C 32 00 00         JNZ 0x004699e9
004667DD  8B CF                     MOV ECX,EDI
004667DF  E8 8C EC F9 FF            CALL 0x00405470
004667E4  83 F8 01                  CMP EAX,0x1
004667E7  0F 85 FC 31 00 00         JNZ 0x004699e9
004667ED  8B CE                     MOV ECX,ESI
004667EF  E8 61 D0 F9 FF            CALL 0x00403855
004667F4  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004667F7  51                        PUSH ECX
004667F8  8B CF                     MOV ECX,EDI
004667FA  E8 D3 E4 F9 FF            CALL 0x00404cd2
004667FF  0F BF 96 9F 04 00 00      MOVSX EDX,word ptr [ESI + 0x49f]
00466806  0F BF 86 9D 04 00 00      MOVSX EAX,word ptr [ESI + 0x49d]
0046680D  0F BF 8E 9B 04 00 00      MOVSX ECX,word ptr [ESI + 0x49b]
00466814  42                        INC EDX
00466815  C7 86 CD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4cd],0x0
0046681F  52                        PUSH EDX
00466820  50                        PUSH EAX
00466821  51                        PUSH ECX
00466822  8B CE                     MOV ECX,ESI
00466824  C7 86 D5 04 00 00 04 00 00 00  MOV dword ptr [ESI + 0x4d5],0x4
0046682E  E8 38 E7 F9 FF            CALL 0x00404f6b
00466833  6A 00                     PUSH 0x0
00466835  E9 A8 31 00 00            JMP 0x004699e2
LAB_0046683a:
0046683A  BF 03 00 00 00            MOV EDI,0x3
0046683F  3B C7                     CMP EAX,EDI
00466841  0F 85 33 03 00 00         JNZ 0x00466b7a
00466847  8B BE CD 04 00 00         MOV EDI,dword ptr [ESI + 0x4cd]
0046684D  6A 02                     PUSH 0x2
0046684F  47                        INC EDI
00466850  8B CE                     MOV ECX,ESI
00466852  89 BE CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDI
00466858  E8 CE D1 F9 FF            CALL 0x00403a2b
0046685D  83 F8 FF                  CMP EAX,-0x1
00466860  75 0B                     JNZ 0x0046686d
00466862  0B C0                     OR EAX,EAX
00466864  5F                        POP EDI
00466865  5E                        POP ESI
00466866  5B                        POP EBX
00466867  8B E5                     MOV ESP,EBP
00466869  5D                        POP EBP
0046686A  C2 04 00                  RET 0x4
LAB_0046686d:
0046686D  39 9E 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EBX
00466873  0F 85 B9 F5 FF FF         JNZ 0x00465e32
00466879  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
0046687F  83 F8 01                  CMP EAX,0x1
00466882  0F 84 0D 01 00 00         JZ 0x00466995
00466888  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
0046688F  0F 84 00 01 00 00         JZ 0x00466995
00466895  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
0046689B  B9 32 00 00 00            MOV ECX,0x32
004668A0  99                        CDQ
004668A1  F7 F9                     IDIV ECX
004668A3  83 FA 01                  CMP EDX,0x1
004668A6  0F 85 86 F5 FF FF         JNZ 0x00465e32
004668AC  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
004668B3  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
004668BA  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
004668C1  66 85 C0                  TEST AX,AX
004668C4  0F 8C 68 F5 FF FF         JL 0x00465e32
004668CA  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004668D1  66 3B C7                  CMP AX,DI
004668D4  0F 8D 58 F5 FF FF         JGE 0x00465e32
004668DA  66 85 D2                  TEST DX,DX
004668DD  0F 8C 4F F5 FF FF         JL 0x00465e32
004668E3  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004668EA  0F 8D 42 F5 FF FF         JGE 0x00465e32
004668F0  66 85 C9                  TEST CX,CX
004668F3  0F 8C 39 F5 FF FF         JL 0x00465e32
004668F9  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00466900  0F 8D 2C F5 FF FF         JGE 0x00465e32
00466906  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046690D  0F BF C9                  MOVSX ECX,CX
00466910  0F BF D2                  MOVSX EDX,DX
00466913  0F AF CB                  IMUL ECX,EBX
00466916  0F BF FF                  MOVSX EDI,DI
00466919  0F AF D7                  IMUL EDX,EDI
0046691C  0F BF C0                  MOVSX EAX,AX
0046691F  03 CA                     ADD ECX,EDX
00466921  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00466927  03 C8                     ADD ECX,EAX
00466929  33 DB                     XOR EBX,EBX
0046692B  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0046692E  3B FB                     CMP EDI,EBX
00466930  0F 84 FC F4 FF FF         JZ 0x00465e32
00466936  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
00466939  8B 8E A1 04 00 00         MOV ECX,dword ptr [ESI + 0x4a1]
0046693F  3B C1                     CMP EAX,ECX
00466941  0F 85 EB F4 FF FF         JNZ 0x00465e32
00466947  8B CF                     MOV ECX,EDI
00466949  E8 22 EB F9 FF            CALL 0x00405470
0046694E  83 F8 01                  CMP EAX,0x1
00466951  0F 85 DB F4 FF FF         JNZ 0x00465e32
00466957  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0046695A  51                        PUSH ECX
0046695B  8B CF                     MOV ECX,EDI
0046695D  E8 70 E3 F9 FF            CALL 0x00404cd2
00466962  0F BF 96 9F 04 00 00      MOVSX EDX,word ptr [ESI + 0x49f]
00466969  0F BF 86 9D 04 00 00      MOVSX EAX,word ptr [ESI + 0x49d]
00466970  0F BF 8E 9B 04 00 00      MOVSX ECX,word ptr [ESI + 0x49b]
00466977  42                        INC EDX
00466978  89 9E CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EBX
0046697E  52                        PUSH EDX
0046697F  C7 86 D5 04 00 00 04 00 00 00  MOV dword ptr [ESI + 0x4d5],0x4
00466989  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
0046698F  50                        PUSH EAX
00466990  E9 8D 19 00 00            JMP 0x00468322
LAB_00466995:
00466995  33 FF                     XOR EDI,EDI
00466997  83 F8 01                  CMP EAX,0x1
0046699A  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0046699D  0F 85 A2 00 00 00         JNZ 0x00466a45
004669A3  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
004669A9  89 BE BD 04 00 00         MOV dword ptr [ESI + 0x4bd],EDI
004669AF  83 FB FF                  CMP EBX,-0x1
004669B2  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
004669B5  74 7E                     JZ 0x00466a35
004669B7  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
004669BE  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
004669C5  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
004669CC  66 3B C7                  CMP AX,DI
004669CF  7C 53                     JL 0x00466a24
004669D1  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004669D8  66 3B C7                  CMP AX,DI
004669DB  7D 47                     JGE 0x00466a24
004669DD  66 85 D2                  TEST DX,DX
004669E0  7C 42                     JL 0x00466a24
004669E2  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004669E9  7D 39                     JGE 0x00466a24
004669EB  66 85 C9                  TEST CX,CX
004669EE  7C 34                     JL 0x00466a24
004669F0  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004669F7  7D 2B                     JGE 0x00466a24
004669F9  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00466A00  0F BF C9                  MOVSX ECX,CX
00466A03  0F BF D2                  MOVSX EDX,DX
00466A06  0F AF CB                  IMUL ECX,EBX
00466A09  0F BF FF                  MOVSX EDI,DI
00466A0C  0F AF D7                  IMUL EDX,EDI
00466A0F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00466A12  03 CA                     ADD ECX,EDX
00466A14  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00466A1A  0F BF C0                  MOVSX EAX,AX
00466A1D  03 C8                     ADD ECX,EAX
00466A1F  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00466A22  EB 02                     JMP 0x00466a26
LAB_00466a24:
00466A24  33 C0                     XOR EAX,EAX
LAB_00466a26:
00466A26  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00466A29  74 0A                     JZ 0x00466a35
00466A2B  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_00466a35:
00466A35  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
00466A3C  74 07                     JZ 0x00466a45
00466A3E  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00466a45:
00466A45  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00466A4C  0F 85 96 00 00 00         JNZ 0x00466ae8
00466A52  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
00466A5C  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00466A62  83 FB FF                  CMP EBX,-0x1
00466A65  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00466A68  74 7E                     JZ 0x00466ae8
00466A6A  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00466A71  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00466A78  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00466A7F  66 85 C0                  TEST AX,AX
00466A82  7C 53                     JL 0x00466ad7
00466A84  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00466A8B  66 3B C7                  CMP AX,DI
00466A8E  7D 47                     JGE 0x00466ad7
00466A90  66 85 D2                  TEST DX,DX
00466A93  7C 42                     JL 0x00466ad7
00466A95  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00466A9C  7D 39                     JGE 0x00466ad7
00466A9E  66 85 C9                  TEST CX,CX
00466AA1  7C 34                     JL 0x00466ad7
00466AA3  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00466AAA  7D 2B                     JGE 0x00466ad7
00466AAC  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00466AB3  0F BF C9                  MOVSX ECX,CX
00466AB6  0F BF D2                  MOVSX EDX,DX
00466AB9  0F AF CB                  IMUL ECX,EBX
00466ABC  0F BF FF                  MOVSX EDI,DI
00466ABF  0F AF D7                  IMUL EDX,EDI
00466AC2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00466AC5  03 CA                     ADD ECX,EDX
00466AC7  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00466ACD  0F BF C0                  MOVSX EAX,AX
00466AD0  03 C8                     ADD ECX,EAX
00466AD2  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00466AD5  EB 02                     JMP 0x00466ad9
LAB_00466ad7:
00466AD7  33 C0                     XOR EAX,EAX
LAB_00466ad9:
00466AD9  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00466ADC  74 0A                     JZ 0x00466ae8
00466ADE  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_00466ae8:
00466AE8  8B CE                     MOV ECX,ESI
00466AEA  E8 95 C6 F9 FF            CALL 0x00403184
00466AEF  33 FF                     XOR EDI,EDI
00466AF1  3B C7                     CMP EAX,EDI
00466AF3  75 13                     JNZ 0x00466b08
00466AF5  8B CE                     MOV ECX,ESI
00466AF7  E8 59 CD F9 FF            CALL 0x00403855
00466AFC  89 BE D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EDI
00466B02  57                        PUSH EDI
00466B03  E9 71 2E 00 00            JMP 0x00469979
LAB_00466b08:
00466B08  83 F8 01                  CMP EAX,0x1
00466B0B  0F 85 76 F5 FF FF         JNZ 0x00466087
00466B11  8B 86 A1 04 00 00         MOV EAX,dword ptr [ESI + 0x4a1]
00466B17  83 F8 FF                  CMP EAX,-0x1
00466B1A  0F 84 62 F3 FF FF         JZ 0x00465e82
00466B20  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00466B23  3B CF                     CMP ECX,EDI
00466B25  0F 84 57 F3 FF FF         JZ 0x00465e82
00466B2B  83 F8 FF                  CMP EAX,-0x1
00466B2E  0F 84 4E F3 FF FF         JZ 0x00465e82
00466B34  8B C1                     MOV EAX,ECX
00466B36  83 F8 01                  CMP EAX,0x1
00466B39  0F 85 F3 F2 FF FF         JNZ 0x00465e32
00466B3F  0F BF 86 9F 04 00 00      MOVSX EAX,word ptr [ESI + 0x49f]
00466B46  0F BF 8E 9D 04 00 00      MOVSX ECX,word ptr [ESI + 0x49d]
00466B4D  0F BF 96 9B 04 00 00      MOVSX EDX,word ptr [ESI + 0x49b]
00466B54  40                        INC EAX
00466B55  C7 86 CD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4cd],0x0
00466B5F  50                        PUSH EAX
00466B60  51                        PUSH ECX
00466B61  52                        PUSH EDX
00466B62  8B CE                     MOV ECX,ESI
00466B64  C7 86 D5 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d5],0x1
00466B6E  E8 F8 E3 F9 FF            CALL 0x00404f6b
00466B73  6A 00                     PUSH 0x0
00466B75  E9 01 F3 FF FF            JMP 0x00465e7b
LAB_00466b7a:
00466B7A  83 F8 04                  CMP EAX,0x4
00466B7D  0F 85 FA 04 00 00         JNZ 0x0046707d
00466B83  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
00466B89  3B C3                     CMP EAX,EBX
00466B8B  0F 8E EB 01 00 00         JLE 0x00466d7c
00466B91  40                        INC EAX
00466B92  83 F8 02                  CMP EAX,0x2
00466B95  89 86 CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EAX
00466B9B  75 1C                     JNZ 0x00466bb9
00466B9D  53                        PUSH EBX
00466B9E  8B CE                     MOV ECX,ESI
00466BA0  E8 86 CE F9 FF            CALL 0x00403a2b
00466BA5  83 F8 FF                  CMP EAX,-0x1
00466BA8  0F 85 84 F2 FF FF         JNZ 0x00465e32
00466BAE  0B C0                     OR EAX,EAX
00466BB0  5F                        POP EDI
00466BB1  5E                        POP ESI
00466BB2  5B                        POP EBX
00466BB3  8B E5                     MOV ESP,EBP
00466BB5  5D                        POP EBP
00466BB6  C2 04 00                  RET 0x4
LAB_00466bb9:
00466BB9  6A 02                     PUSH 0x2
00466BBB  8B CE                     MOV ECX,ESI
00466BBD  E8 69 CE F9 FF            CALL 0x00403a2b
00466BC2  83 F8 FF                  CMP EAX,-0x1
00466BC5  75 0B                     JNZ 0x00466bd2
00466BC7  0B C0                     OR EAX,EAX
00466BC9  5F                        POP EDI
00466BCA  5E                        POP ESI
00466BCB  5B                        POP EBX
00466BCC  8B E5                     MOV ESP,EBP
00466BCE  5D                        POP EBP
00466BCF  C2 04 00                  RET 0x4
LAB_00466bd2:
00466BD2  39 9E 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EBX
00466BD8  0F 85 54 F2 FF FF         JNZ 0x00465e32
00466BDE  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00466BE4  83 F8 01                  CMP EAX,0x1
00466BE7  74 16                     JZ 0x00466bff
00466BE9  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00466BF0  0F 85 3C F2 FF FF         JNZ 0x00465e32
00466BF6  83 F8 01                  CMP EAX,0x1
00466BF9  0F 85 96 00 00 00         JNZ 0x00466c95
LAB_00466bff:
00466BFF  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
00466C05  C7 86 BD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4bd],0x0
00466C0F  83 FB FF                  CMP EBX,-0x1
00466C12  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00466C15  74 7E                     JZ 0x00466c95
00466C17  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
00466C1E  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00466C25  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
00466C2C  66 85 C0                  TEST AX,AX
00466C2F  7C 53                     JL 0x00466c84
00466C31  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00466C38  66 3B C7                  CMP AX,DI
00466C3B  7D 47                     JGE 0x00466c84
00466C3D  66 85 D2                  TEST DX,DX
00466C40  7C 42                     JL 0x00466c84
00466C42  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00466C49  7D 39                     JGE 0x00466c84
00466C4B  66 85 C9                  TEST CX,CX
00466C4E  7C 34                     JL 0x00466c84
00466C50  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00466C57  7D 2B                     JGE 0x00466c84
00466C59  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00466C60  0F BF C9                  MOVSX ECX,CX
00466C63  0F BF D2                  MOVSX EDX,DX
00466C66  0F AF CB                  IMUL ECX,EBX
00466C69  0F BF FF                  MOVSX EDI,DI
00466C6C  0F AF D7                  IMUL EDX,EDI
00466C6F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00466C72  03 CA                     ADD ECX,EDX
00466C74  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00466C7A  0F BF C0                  MOVSX EAX,AX
00466C7D  03 C8                     ADD ECX,EAX
00466C7F  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00466C82  EB 02                     JMP 0x00466c86
LAB_00466c84:
00466C84  33 C0                     XOR EAX,EAX
LAB_00466c86:
00466C86  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00466C89  74 0A                     JZ 0x00466c95
00466C8B  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_00466c95:
00466C95  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00466C9C  0F 85 96 00 00 00         JNZ 0x00466d38
00466CA2  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
00466CAC  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00466CB2  83 FB FF                  CMP EBX,-0x1
00466CB5  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00466CB8  74 7E                     JZ 0x00466d38
00466CBA  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00466CC1  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00466CC8  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00466CCF  66 85 C0                  TEST AX,AX
00466CD2  7C 53                     JL 0x00466d27
00466CD4  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00466CDB  66 3B C7                  CMP AX,DI
00466CDE  7D 47                     JGE 0x00466d27
00466CE0  66 85 D2                  TEST DX,DX
00466CE3  7C 42                     JL 0x00466d27
00466CE5  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00466CEC  7D 39                     JGE 0x00466d27
00466CEE  66 85 C9                  TEST CX,CX
00466CF1  7C 34                     JL 0x00466d27
00466CF3  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00466CFA  7D 2B                     JGE 0x00466d27
00466CFC  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00466D03  0F BF C9                  MOVSX ECX,CX
00466D06  0F BF D2                  MOVSX EDX,DX
00466D09  0F AF CB                  IMUL ECX,EBX
00466D0C  0F BF FF                  MOVSX EDI,DI
00466D0F  0F AF D7                  IMUL EDX,EDI
00466D12  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00466D15  03 CA                     ADD ECX,EDX
00466D17  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00466D1D  0F BF C0                  MOVSX EAX,AX
00466D20  03 C8                     ADD ECX,EAX
00466D22  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00466D25  EB 02                     JMP 0x00466d29
LAB_00466d27:
00466D27  33 C0                     XOR EAX,EAX
LAB_00466d29:
00466D29  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00466D2C  74 0A                     JZ 0x00466d38
00466D2E  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_00466d38:
00466D38  8B CE                     MOV ECX,ESI
00466D3A  E8 45 C4 F9 FF            CALL 0x00403184
00466D3F  33 FF                     XOR EDI,EDI
00466D41  3B C7                     CMP EAX,EDI
00466D43  75 13                     JNZ 0x00466d58
00466D45  8B CE                     MOV ECX,ESI
00466D47  E8 09 CB F9 FF            CALL 0x00403855
00466D4C  89 BE D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EDI
00466D52  57                        PUSH EDI
00466D53  E9 21 2C 00 00            JMP 0x00469979
LAB_00466d58:
00466D58  83 F8 01                  CMP EAX,0x1
00466D5B  0F 85 E1 19 00 00         JNZ 0x00468742
00466D61  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
00466D68  0F 85 D2 F0 FF FF         JNZ 0x00465e40
00466D6E  B8 02 00 00 00            MOV EAX,0x2
00466D73  5F                        POP EDI
00466D74  5E                        POP ESI
00466D75  5B                        POP EBX
00466D76  8B E5                     MOV ESP,EBP
00466D78  5D                        POP EBP
00466D79  C2 04 00                  RET 0x4
LAB_00466d7c:
00466D7C  6A 02                     PUSH 0x2
00466D7E  8B CE                     MOV ECX,ESI
00466D80  E8 59 C4 F9 FF            CALL 0x004031de
00466D85  40                        INC EAX
00466D86  83 F8 04                  CMP EAX,0x4
00466D89  0F 87 C1 1E 00 00         JA 0x00468c50
switchD_00466d8f::switchD:
00466D8F  FF 24 85 30 9A 46 00      JMP dword ptr [EAX*0x4 + 0x469a30]
switchD_00466d8f::caseD_ffffffff:
00466D96  68 80 A4 7A 00            PUSH 0x7aa480
00466D9B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00466DA0  53                        PUSH EBX
00466DA1  53                        PUSH EBX
00466DA2  68 6E 1E 00 00            PUSH 0x1e6e
00466DA7  68 3C 9D 7A 00            PUSH 0x7a9d3c
00466DAC  E8 1F 67 24 00            CALL 0x006ad4d0
00466DB1  83 C4 18                  ADD ESP,0x18
00466DB4  85 C0                     TEST EAX,EAX
00466DB6  74 01                     JZ 0x00466db9
00466DB8  CC                        INT3
LAB_00466db9:
00466DB9  68 6E 1E 00 00            PUSH 0x1e6e
00466DBE  E9 1B F3 FF FF            JMP 0x004660de
switchD_00466d8f::caseD_0:
00466DC3  8B 06                     MOV EAX,dword ptr [ESI]
00466DC5  8B CE                     MOV ECX,ESI
00466DC7  C7 86 D5 04 00 00 05 00 00 00  MOV dword ptr [ESI + 0x4d5],0x5
00466DD1  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00466DD7  F7 D8                     NEG EAX
00466DD9  1B C0                     SBB EAX,EAX
00466DDB  24 FD                     AND AL,0xfd
00466DDD  83 C0 02                  ADD EAX,0x2
00466DE0  5F                        POP EDI
00466DE1  5E                        POP ESI
00466DE2  5B                        POP EBX
00466DE3  8B E5                     MOV ESP,EBP
00466DE5  5D                        POP EBP
00466DE6  C2 04 00                  RET 0x4
switchD_004660af::caseD_3:
00466DE9  0F BF 8E 9F 04 00 00      MOVSX ECX,word ptr [ESI + 0x49f]
00466DF0  0F BF 96 9D 04 00 00      MOVSX EDX,word ptr [ESI + 0x49d]
00466DF7  0F BF 86 9B 04 00 00      MOVSX EAX,word ptr [ESI + 0x49b]
00466DFE  41                        INC ECX
00466DFF  51                        PUSH ECX
00466E00  52                        PUSH EDX
00466E01  50                        PUSH EAX
00466E02  8B CE                     MOV ECX,ESI
00466E04  E8 62 E1 F9 FF            CALL 0x00404f6b
00466E09  53                        PUSH EBX
00466E0A  E9 3A 1E 00 00            JMP 0x00468c49
switchD_00466d8f::caseD_1:
00466E0F  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00466E15  83 F8 01                  CMP EAX,0x1
00466E18  74 0D                     JZ 0x00466e27
00466E1A  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00466E21  0F 85 29 1E 00 00         JNZ 0x00468c50
LAB_00466e27:
00466E27  83 F8 01                  CMP EAX,0x1
00466E2A  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00466E2D  0F 85 A6 00 00 00         JNZ 0x00466ed9
00466E33  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
00466E39  C7 86 BD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4bd],0x0
00466E43  83 FB FF                  CMP EBX,-0x1
00466E46  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00466E49  74 7E                     JZ 0x00466ec9
00466E4B  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
00466E52  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00466E59  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
00466E60  66 85 C0                  TEST AX,AX
00466E63  7C 53                     JL 0x00466eb8
00466E65  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00466E6C  66 3B C7                  CMP AX,DI
00466E6F  7D 47                     JGE 0x00466eb8
00466E71  66 85 D2                  TEST DX,DX
00466E74  7C 42                     JL 0x00466eb8
00466E76  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00466E7D  7D 39                     JGE 0x00466eb8
00466E7F  66 85 C9                  TEST CX,CX
00466E82  7C 34                     JL 0x00466eb8
00466E84  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00466E8B  7D 2B                     JGE 0x00466eb8
00466E8D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00466E94  0F BF C9                  MOVSX ECX,CX
00466E97  0F BF D2                  MOVSX EDX,DX
00466E9A  0F AF CB                  IMUL ECX,EBX
00466E9D  0F BF FF                  MOVSX EDI,DI
00466EA0  0F AF D7                  IMUL EDX,EDI
00466EA3  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00466EA6  03 CA                     ADD ECX,EDX
00466EA8  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00466EAE  0F BF C0                  MOVSX EAX,AX
00466EB1  03 C8                     ADD ECX,EAX
00466EB3  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00466EB6  EB 02                     JMP 0x00466eba
LAB_00466eb8:
00466EB8  33 C0                     XOR EAX,EAX
LAB_00466eba:
00466EBA  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00466EBD  74 0A                     JZ 0x00466ec9
00466EBF  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_00466ec9:
00466EC9  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
00466ED0  74 07                     JZ 0x00466ed9
00466ED2  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00466ed9:
00466ED9  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00466EE0  0F 85 96 00 00 00         JNZ 0x00466f7c
00466EE6  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
00466EF0  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00466EF6  83 FB FF                  CMP EBX,-0x1
00466EF9  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00466EFC  74 7E                     JZ 0x00466f7c
00466EFE  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00466F05  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00466F0C  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00466F13  66 85 C0                  TEST AX,AX
00466F16  7C 53                     JL 0x00466f6b
00466F18  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00466F1F  66 3B C7                  CMP AX,DI
00466F22  7D 47                     JGE 0x00466f6b
00466F24  66 85 D2                  TEST DX,DX
00466F27  7C 42                     JL 0x00466f6b
00466F29  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00466F30  7D 39                     JGE 0x00466f6b
00466F32  66 85 C9                  TEST CX,CX
00466F35  7C 34                     JL 0x00466f6b
00466F37  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00466F3E  7D 2B                     JGE 0x00466f6b
00466F40  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00466F47  0F BF C9                  MOVSX ECX,CX
00466F4A  0F BF D2                  MOVSX EDX,DX
00466F4D  0F AF CB                  IMUL ECX,EBX
00466F50  0F BF FF                  MOVSX EDI,DI
00466F53  0F AF D7                  IMUL EDX,EDI
00466F56  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00466F59  03 CA                     ADD ECX,EDX
00466F5B  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00466F61  0F BF C0                  MOVSX EAX,AX
00466F64  03 C8                     ADD ECX,EAX
00466F66  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00466F69  EB 02                     JMP 0x00466f6d
LAB_00466f6b:
00466F6B  33 C0                     XOR EAX,EAX
LAB_00466f6d:
00466F6D  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00466F70  74 0A                     JZ 0x00466f7c
00466F72  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_00466f7c:
00466F7C  8B CE                     MOV ECX,ESI
00466F7E  E8 01 C2 F9 FF            CALL 0x00403184
00466F83  33 FF                     XOR EDI,EDI
00466F85  3B C7                     CMP EAX,EDI
00466F87  75 13                     JNZ 0x00466f9c
00466F89  8B CE                     MOV ECX,ESI
00466F8B  E8 C5 C8 F9 FF            CALL 0x00403855
00466F90  89 BE D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EDI
00466F96  57                        PUSH EDI
00466F97  E9 DD 29 00 00            JMP 0x00469979
LAB_00466f9c:
00466F9C  83 F8 01                  CMP EAX,0x1
00466F9F  0F 85 9A 00 00 00         JNZ 0x0046703f
00466FA5  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
00466FAC  74 09                     JZ 0x00466fb7
00466FAE  39 7D F8                  CMP dword ptr [EBP + -0x8],EDI
00466FB1  0F 84 99 1C 00 00         JZ 0x00468c50
LAB_00466fb7:
00466FB7  8B CE                     MOV ECX,ESI
00466FB9  E8 97 C8 F9 FF            CALL 0x00403855
00466FBE  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
00466FC5  75 29                     JNZ 0x00466ff0
00466FC7  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
00466FCD  8B CE                     MOV ECX,ESI
00466FCF  40                        INC EAX
00466FD0  89 86 CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EAX
00466FD6  8B 06                     MOV EAX,dword ptr [ESI]
00466FD8  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00466FDE  F7 D8                     NEG EAX
00466FE0  1B C0                     SBB EAX,EAX
00466FE2  24 FD                     AND AL,0xfd
00466FE4  83 C0 02                  ADD EAX,0x2
00466FE7  5F                        POP EDI
00466FE8  5E                        POP ESI
00466FE9  5B                        POP EBX
00466FEA  8B E5                     MOV ESP,EBP
00466FEC  5D                        POP EBP
00466FED  C2 04 00                  RET 0x4
LAB_00466ff0:
00466FF0  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
00466FF4  0F 85 56 1C 00 00         JNZ 0x00468c50
00466FFA  C7 86 CD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4cd],0x0
00467004  C7 86 D5 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d5],0x1
0046700E  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
LAB_00467018:
00467018  0F BF 86 9F 04 00 00      MOVSX EAX,word ptr [ESI + 0x49f]
0046701F  0F BF 8E 9D 04 00 00      MOVSX ECX,word ptr [ESI + 0x49d]
00467026  0F BF 96 9B 04 00 00      MOVSX EDX,word ptr [ESI + 0x49b]
0046702D  40                        INC EAX
0046702E  50                        PUSH EAX
0046702F  51                        PUSH ECX
00467030  52                        PUSH EDX
00467031  8B CE                     MOV ECX,ESI
00467033  E8 33 DF F9 FF            CALL 0x00404f6b
00467038  6A 00                     PUSH 0x0
0046703A  E9 0A 1C 00 00            JMP 0x00468c49
LAB_0046703f:
0046703F  8B CE                     MOV ECX,ESI
00467041  E8 0F C8 F9 FF            CALL 0x00403855
00467046  0F BF 86 A9 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a9]
0046704D  89 BE CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDI
00467053  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
0046705D  C7 86 D5 04 00 00 07 00 00 00  MOV dword ptr [ESI + 0x4d5],0x7
00467067  40                        INC EAX
LAB_00467068:
00467068  0F BF 8E A7 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a7]
0046706F  0F BF 96 A5 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a5]
00467076  50                        PUSH EAX
00467077  51                        PUSH ECX
00467078  E9 C3 1B 00 00            JMP 0x00468c40
LAB_0046707d:
0046707D  83 F8 05                  CMP EAX,0x5
00467080  0F 85 C8 05 00 00         JNZ 0x0046764e
00467086  8B 96 CD 04 00 00         MOV EDX,dword ptr [ESI + 0x4cd]
0046708C  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00467092  42                        INC EDX
00467093  83 F8 01                  CMP EAX,0x1
00467096  89 96 CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDX
0046709C  74 0D                     JZ 0x004670ab
0046709E  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
004670A5  0F 85 96 01 00 00         JNZ 0x00467241
LAB_004670ab:
004670AB  83 F8 01                  CMP EAX,0x1
004670AE  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004670B1  0F 85 A6 00 00 00         JNZ 0x0046715d
004670B7  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
004670BD  C7 86 BD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4bd],0x0
004670C7  83 FB FF                  CMP EBX,-0x1
004670CA  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
004670CD  74 7E                     JZ 0x0046714d
004670CF  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
004670D6  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
004670DD  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
004670E4  66 85 C0                  TEST AX,AX
004670E7  7C 53                     JL 0x0046713c
004670E9  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004670F0  66 3B C7                  CMP AX,DI
004670F3  7D 47                     JGE 0x0046713c
004670F5  66 85 D2                  TEST DX,DX
004670F8  7C 42                     JL 0x0046713c
004670FA  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00467101  7D 39                     JGE 0x0046713c
00467103  66 85 C9                  TEST CX,CX
00467106  7C 34                     JL 0x0046713c
00467108  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046710F  7D 2B                     JGE 0x0046713c
00467111  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00467118  0F BF C9                  MOVSX ECX,CX
0046711B  0F BF D2                  MOVSX EDX,DX
0046711E  0F AF CB                  IMUL ECX,EBX
00467121  0F BF FF                  MOVSX EDI,DI
00467124  0F AF D7                  IMUL EDX,EDI
00467127  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0046712A  03 CA                     ADD ECX,EDX
0046712C  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00467132  0F BF C0                  MOVSX EAX,AX
00467135  03 C8                     ADD ECX,EAX
00467137  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
0046713A  EB 02                     JMP 0x0046713e
LAB_0046713c:
0046713C  33 C0                     XOR EAX,EAX
LAB_0046713e:
0046713E  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00467141  74 0A                     JZ 0x0046714d
00467143  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_0046714d:
0046714D  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
00467154  74 07                     JZ 0x0046715d
00467156  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_0046715d:
0046715D  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00467164  0F 85 96 00 00 00         JNZ 0x00467200
0046716A  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
00467174  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
0046717A  83 FB FF                  CMP EBX,-0x1
0046717D  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00467180  74 7E                     JZ 0x00467200
00467182  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00467189  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00467190  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00467197  66 85 C0                  TEST AX,AX
0046719A  7C 53                     JL 0x004671ef
0046719C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004671A3  66 3B C7                  CMP AX,DI
004671A6  7D 47                     JGE 0x004671ef
004671A8  66 85 D2                  TEST DX,DX
004671AB  7C 42                     JL 0x004671ef
004671AD  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004671B4  7D 39                     JGE 0x004671ef
004671B6  66 85 C9                  TEST CX,CX
004671B9  7C 34                     JL 0x004671ef
004671BB  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004671C2  7D 2B                     JGE 0x004671ef
004671C4  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004671CB  0F BF C9                  MOVSX ECX,CX
004671CE  0F BF D2                  MOVSX EDX,DX
004671D1  0F AF CB                  IMUL ECX,EBX
004671D4  0F BF FF                  MOVSX EDI,DI
004671D7  0F AF D7                  IMUL EDX,EDI
004671DA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004671DD  03 CA                     ADD ECX,EDX
004671DF  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004671E5  0F BF C0                  MOVSX EAX,AX
004671E8  03 C8                     ADD ECX,EAX
004671EA  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004671ED  EB 02                     JMP 0x004671f1
LAB_004671ef:
004671EF  33 C0                     XOR EAX,EAX
LAB_004671f1:
004671F1  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
004671F4  74 0A                     JZ 0x00467200
004671F6  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_00467200:
00467200  8B CE                     MOV ECX,ESI
00467202  E8 7D BF F9 FF            CALL 0x00403184
00467207  33 FF                     XOR EDI,EDI
00467209  3B C7                     CMP EAX,EDI
0046720B  75 13                     JNZ 0x00467220
0046720D  8B CE                     MOV ECX,ESI
0046720F  E8 41 C6 F9 FF            CALL 0x00403855
00467214  89 BE D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EDI
0046721A  57                        PUSH EDI
0046721B  E9 59 27 00 00            JMP 0x00469979
LAB_00467220:
00467220  83 F8 01                  CMP EAX,0x1
00467223  0F 85 FF 03 00 00         JNZ 0x00467628
00467229  8B 86 A1 04 00 00         MOV EAX,dword ptr [ESI + 0x4a1]
0046722F  83 F8 FF                  CMP EAX,-0x1
00467232  0F 84 41 03 00 00         JZ 0x00467579
00467238  39 7D F8                  CMP dword ptr [EBP + -0x8],EDI
0046723B  0F 85 38 03 00 00         JNZ 0x00467579
LAB_00467241:
00467241  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
00467247  B9 0A 00 00 00            MOV ECX,0xa
0046724C  99                        CDQ
0046724D  F7 F9                     IDIV ECX
0046724F  83 FA 01                  CMP EDX,0x1
00467252  0F 85 F8 19 00 00         JNZ 0x00468c50
00467258  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
0046725F  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00467266  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
0046726D  66 85 C0                  TEST AX,AX
00467270  0F 8C E3 02 00 00         JL 0x00467559
00467276  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046727D  66 3B C7                  CMP AX,DI
00467280  0F 8D D3 02 00 00         JGE 0x00467559
00467286  66 85 D2                  TEST DX,DX
00467289  0F 8C CA 02 00 00         JL 0x00467559
0046728F  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00467296  0F 8D BD 02 00 00         JGE 0x00467559
0046729C  66 85 C9                  TEST CX,CX
0046729F  0F 8C B4 02 00 00         JL 0x00467559
004672A5  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004672AC  0F 8D A7 02 00 00         JGE 0x00467559
004672B2  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004672B9  0F BF C9                  MOVSX ECX,CX
004672BC  0F BF D2                  MOVSX EDX,DX
004672BF  0F AF CB                  IMUL ECX,EBX
004672C2  0F BF FF                  MOVSX EDI,DI
004672C5  0F AF D7                  IMUL EDX,EDI
004672C8  0F BF C0                  MOVSX EAX,AX
004672CB  03 CA                     ADD ECX,EDX
004672CD  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004672D3  03 C8                     ADD ECX,EAX
004672D5  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
004672D8  85 FF                     TEST EDI,EDI
004672DA  0F 84 79 02 00 00         JZ 0x00467559
004672E0  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004672E3  8B 8E A1 04 00 00         MOV ECX,dword ptr [ESI + 0x4a1]
004672E9  3B C1                     CMP EAX,ECX
004672EB  0F 85 68 02 00 00         JNZ 0x00467559
004672F1  8B 87 B4 04 00 00         MOV EAX,dword ptr [EDI + 0x4b4]
004672F7  85 C0                     TEST EAX,EAX
004672F9  0F 85 4D 01 00 00         JNZ 0x0046744c
004672FF  83 BF 45 02 00 00 06      CMP dword ptr [EDI + 0x245],0x6
00467306  0F 84 40 01 00 00         JZ 0x0046744c
0046730C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0046730F  6A 00                     PUSH 0x0
00467311  51                        PUSH ECX
00467312  8B CF                     MOV ECX,EDI
00467314  E8 37 E3 F9 FF            CALL 0x00405650
00467319  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0046731C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00467322  52                        PUSH EDX
00467323  E8 3F DB F9 FF            CALL 0x00404e67
00467328  8B D8                     MOV EBX,EAX
0046732A  8D 45 FC                  LEA EAX,[EBP + -0x4]
0046732D  53                        PUSH EBX
0046732E  50                        PUSH EAX
0046732F  8B CF                     MOV ECX,EDI
00467331  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00467334  E8 17 E3 F9 FF            CALL 0x00405650
00467339  3B C3                     CMP EAX,EBX
0046733B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0046733E  0F 85 D6 00 00 00         JNZ 0x0046741a
00467344  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00467347  51                        PUSH ECX
00467348  8B CF                     MOV ECX,EDI
0046734A  E8 1D B8 F9 FF            CALL 0x00402b6c
0046734F  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
00467355  B9 78 00 00 00            MOV ECX,0x78
0046735A  99                        CDQ
0046735B  F7 F9                     IDIV ECX
0046735D  83 FA 01                  CMP EDX,0x1
00467360  75 42                     JNZ 0x004673a4
00467362  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
00467368  83 F8 08                  CMP EAX,0x8
0046736B  74 26                     JZ 0x00467393
0046736D  83 F8 14                  CMP EAX,0x14
00467370  74 0E                     JZ 0x00467380
00467372  83 F8 1A                  CMP EAX,0x1a
00467375  75 2D                     JNZ 0x004673a4
00467377  8B 16                     MOV EDX,dword ptr [ESI]
00467379  68 9F 01 00 00            PUSH 0x19f
0046737E  EB 1A                     JMP 0x0046739a
LAB_00467380:
00467380  8B 06                     MOV EAX,dword ptr [ESI]
00467382  68 60 01 00 00            PUSH 0x160
00467387  6A 03                     PUSH 0x3
00467389  8B CE                     MOV ECX,ESI
0046738B  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
00467391  EB 11                     JMP 0x004673a4
LAB_00467393:
00467393  8B 16                     MOV EDX,dword ptr [ESI]
00467395  68 FC 00 00 00            PUSH 0xfc
LAB_0046739a:
0046739A  6A 03                     PUSH 0x3
0046739C  8B CE                     MOV ECX,ESI
0046739E  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004673a4:
004673A4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004673A7  2D DC 00 00 00            SUB EAX,0xdc
004673AC  0F 84 6B 01 00 00         JZ 0x0046751d
004673B2  48                        DEC EAX
004673B3  0F 84 28 01 00 00         JZ 0x004674e1
004673B9  48                        DEC EAX
004673BA  74 27                     JZ 0x004673e3
004673BC  68 40 A4 7A 00            PUSH 0x7aa440
004673C1  68 CC 4C 7A 00            PUSH 0x7a4ccc
004673C6  6A 00                     PUSH 0x0
004673C8  6A 00                     PUSH 0x0
004673CA  68 2F 1F 00 00            PUSH 0x1f2f
004673CF  68 3C 9D 7A 00            PUSH 0x7a9d3c
004673D4  E8 F7 60 24 00            CALL 0x006ad4d0
004673D9  83 C4 18                  ADD ESP,0x18
004673DC  85 C0                     TEST EAX,EAX
004673DE  74 3A                     JZ 0x0046741a
004673E0  CC                        INT3
LAB_004673e3:
004673E3  8B 9E DA 07 00 00         MOV EBX,dword ptr [ESI + 0x7da]
004673E9  8B 86 D6 07 00 00         MOV EAX,dword ptr [ESI + 0x7d6]
004673EF  8B 8E D2 07 00 00         MOV ECX,dword ptr [ESI + 0x7d2]
004673F5  43                        INC EBX
004673F6  89 9E DA 07 00 00         MOV dword ptr [ESI + 0x7da],EBX
004673FC  8B D3                     MOV EDX,EBX
004673FE  8D 1C 01                  LEA EBX,[ECX + EAX*0x1]
00467401  03 DA                     ADD EBX,EDX
00467403  83 FB 28                  CMP EBX,0x28
00467406  7E 0F                     JLE 0x00467417
00467408  BA 28 00 00 00            MOV EDX,0x28
0046740D  2B D1                     SUB EDX,ECX
0046740F  2B D0                     SUB EDX,EAX
00467411  89 96 DA 07 00 00         MOV dword ptr [ESI + 0x7da],EDX
LAB_00467417:
00467417  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_0046741a:
0046741A  39 5D EC                  CMP dword ptr [EBP + -0x14],EBX
0046741D  7C 2D                     JL 0x0046744c
0046741F  8B 86 DA 07 00 00         MOV EAX,dword ptr [ESI + 0x7da]
00467425  8B 9E D6 07 00 00         MOV EBX,dword ptr [ESI + 0x7d6]
0046742B  8B 96 D2 07 00 00         MOV EDX,dword ptr [ESI + 0x7d2]
00467431  03 C3                     ADD EAX,EBX
00467433  03 C2                     ADD EAX,EDX
00467435  83 F8 28                  CMP EAX,0x28
00467438  74 12                     JZ 0x0046744c
0046743A  8B 17                     MOV EDX,dword ptr [EDI]
0046743C  8D 45 FC                  LEA EAX,[EBP + -0x4]
0046743F  50                        PUSH EAX
00467440  8B CF                     MOV ECX,EDI
00467442  FF 92 88 00 00 00         CALL dword ptr [EDX + 0x88]
00467448  85 C0                     TEST EAX,EAX
0046744A  75 4E                     JNZ 0x0046749a
LAB_0046744c:
0046744C  8B CE                     MOV ECX,ESI
0046744E  E8 B8 C7 F9 FF            CALL 0x00403c0b
00467453  0F BF 8E A9 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a9]
0046745A  0F BF 96 A7 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a7]
00467461  0F BF 86 A5 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a5]
00467468  41                        INC ECX
00467469  C7 86 CD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4cd],0x0
00467473  51                        PUSH ECX
00467474  52                        PUSH EDX
00467475  50                        PUSH EAX
00467476  8B CE                     MOV ECX,ESI
00467478  C7 86 D5 04 00 00 06 00 00 00  MOV dword ptr [ESI + 0x4d5],0x6
00467482  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
0046748C  E8 DA DA F9 FF            CALL 0x00404f6b
00467491  6A 00                     PUSH 0x0
00467493  8B CE                     MOV ECX,ESI
00467495  E8 44 BD F9 FF            CALL 0x004031de
LAB_0046749a:
0046749A  8B 17                     MOV EDX,dword ptr [EDI]
0046749C  8D 45 FC                  LEA EAX,[EBP + -0x4]
0046749F  50                        PUSH EAX
004674A0  8B CF                     MOV ECX,EDI
004674A2  FF 92 88 00 00 00         CALL dword ptr [EDX + 0x88]
004674A8  85 C0                     TEST EAX,EAX
004674AA  0F 85 A0 17 00 00         JNZ 0x00468c50
004674B0  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
004674B4  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004674B7  51                        PUSH ECX
004674B8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004674BE  52                        PUSH EDX
004674BF  50                        PUSH EAX
004674C0  E8 89 D4 F9 FF            CALL 0x0040494e
004674C5  8B 06                     MOV EAX,dword ptr [ESI]
004674C7  8B CE                     MOV ECX,ESI
004674C9  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004674CF  F7 D8                     NEG EAX
004674D1  1B C0                     SBB EAX,EAX
004674D3  24 FD                     AND AL,0xfd
004674D5  83 C0 02                  ADD EAX,0x2
004674D8  5F                        POP EDI
004674D9  5E                        POP ESI
004674DA  5B                        POP EBX
004674DB  8B E5                     MOV ESP,EBP
004674DD  5D                        POP EBP
004674DE  C2 04 00                  RET 0x4
LAB_004674e1:
004674E1  8B 86 D6 07 00 00         MOV EAX,dword ptr [ESI + 0x7d6]
004674E7  8B 8E D2 07 00 00         MOV ECX,dword ptr [ESI + 0x7d2]
004674ED  40                        INC EAX
004674EE  8B D0                     MOV EDX,EAX
004674F0  89 86 D6 07 00 00         MOV dword ptr [ESI + 0x7d6],EAX
004674F6  8B 86 DA 07 00 00         MOV EAX,dword ptr [ESI + 0x7da]
004674FC  03 D1                     ADD EDX,ECX
004674FE  03 D0                     ADD EDX,EAX
00467500  83 FA 28                  CMP EDX,0x28
00467503  0F 8E 11 FF FF FF         JLE 0x0046741a
00467509  BA 28 00 00 00            MOV EDX,0x28
0046750E  2B D1                     SUB EDX,ECX
00467510  2B D0                     SUB EDX,EAX
00467512  89 96 D6 07 00 00         MOV dword ptr [ESI + 0x7d6],EDX
00467518  E9 FD FE FF FF            JMP 0x0046741a
LAB_0046751d:
0046751D  8B 86 D2 07 00 00         MOV EAX,dword ptr [ESI + 0x7d2]
00467523  8B 8E D6 07 00 00         MOV ECX,dword ptr [ESI + 0x7d6]
00467529  40                        INC EAX
0046752A  8B D0                     MOV EDX,EAX
0046752C  89 86 D2 07 00 00         MOV dword ptr [ESI + 0x7d2],EAX
00467532  8B 86 DA 07 00 00         MOV EAX,dword ptr [ESI + 0x7da]
00467538  03 D1                     ADD EDX,ECX
0046753A  03 D0                     ADD EDX,EAX
0046753C  83 FA 28                  CMP EDX,0x28
0046753F  0F 8E D5 FE FF FF         JLE 0x0046741a
00467545  BA 28 00 00 00            MOV EDX,0x28
0046754A  2B D1                     SUB EDX,ECX
0046754C  2B D0                     SUB EDX,EAX
0046754E  89 96 D2 07 00 00         MOV dword ptr [ESI + 0x7d2],EDX
00467554  E9 C1 FE FF FF            JMP 0x0046741a
LAB_00467559:
00467559  8B CE                     MOV ECX,ESI
0046755B  E8 AB C6 F9 FF            CALL 0x00403c0b
00467560  C7 86 CD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4cd],0x0
0046756A  C7 86 D5 04 00 00 06 00 00 00  MOV dword ptr [ESI + 0x4d5],0x6
00467574  E9 BF 15 00 00            JMP 0x00468b38
LAB_00467579:
00467579  83 F8 FF                  CMP EAX,-0x1
0046757C  C7 86 CD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4cd],0x0
00467586  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
00467590  75 31                     JNZ 0x004675c3
00467592  0F BF 8E A9 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a9]
00467599  0F BF 96 A7 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a7]
004675A0  0F BF 86 A5 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a5]
004675A7  41                        INC ECX
004675A8  C7 86 D5 04 00 00 06 00 00 00  MOV dword ptr [ESI + 0x4d5],0x6
004675B2  51                        PUSH ECX
004675B3  52                        PUSH EDX
004675B4  50                        PUSH EAX
004675B5  8B CE                     MOV ECX,ESI
004675B7  E8 AF D9 F9 FF            CALL 0x00404f6b
004675BC  6A 00                     PUSH 0x0
004675BE  E9 1F 24 00 00            JMP 0x004699e2
LAB_004675c3:
004675C3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004675C6  B8 01 00 00 00            MOV EAX,0x1
004675CB  3B C8                     CMP ECX,EAX
004675CD  75 2D                     JNZ 0x004675fc
004675CF  0F BF 8E 9F 04 00 00      MOVSX ECX,word ptr [ESI + 0x49f]
004675D6  0F BF 96 9D 04 00 00      MOVSX EDX,word ptr [ESI + 0x49d]
004675DD  89 86 D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EAX
004675E3  41                        INC ECX
004675E4  0F BF 86 9B 04 00 00      MOVSX EAX,word ptr [ESI + 0x49b]
004675EB  51                        PUSH ECX
004675EC  52                        PUSH EDX
004675ED  50                        PUSH EAX
004675EE  8B CE                     MOV ECX,ESI
004675F0  E8 76 D9 F9 FF            CALL 0x00404f6b
004675F5  6A 00                     PUSH 0x0
004675F7  E9 E6 23 00 00            JMP 0x004699e2
LAB_004675fc:
004675FC  68 1C A4 7A 00            PUSH 0x7aa41c
00467601  68 CC 4C 7A 00            PUSH 0x7a4ccc
00467606  6A 00                     PUSH 0x0
00467608  6A 00                     PUSH 0x0
0046760A  68 FD 1E 00 00            PUSH 0x1efd
0046760F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00467614  E8 B7 5E 24 00            CALL 0x006ad4d0
00467619  83 C4 18                  ADD ESP,0x18
0046761C  85 C0                     TEST EAX,EAX
0046761E  74 01                     JZ 0x00467621
00467620  CC                        INT3
LAB_00467621:
00467621  6A 00                     PUSH 0x0
00467623  E9 BA 23 00 00            JMP 0x004699e2
LAB_00467628:
00467628  0F BF 86 A9 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a9]
0046762F  89 BE CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDI
00467635  C7 86 D5 04 00 00 06 00 00 00  MOV dword ptr [ESI + 0x4d5],0x6
0046763F  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
00467649  E9 1A FA FF FF            JMP 0x00467068
LAB_0046764e:
0046764E  83 F8 06                  CMP EAX,0x6
00467651  0F 85 C3 00 00 00         JNZ 0x0046771a
00467657  8B 8E D1 04 00 00         MOV ECX,dword ptr [ESI + 0x4d1]
0046765D  41                        INC ECX
0046765E  8B C1                     MOV EAX,ECX
00467660  89 8E D1 04 00 00         MOV dword ptr [ESI + 0x4d1],ECX
00467666  83 F8 46                  CMP EAX,0x46
00467669  0F 8E 7A 23 00 00         JLE 0x004699e9
0046766F  6A 02                     PUSH 0x2
00467671  8B CE                     MOV ECX,ESI
00467673  E8 66 BB F9 FF            CALL 0x004031de
00467678  40                        INC EAX
00467679  83 F8 04                  CMP EAX,0x4
0046767C  0F 87 67 23 00 00         JA 0x004699e9
switchD_00467682::switchD:
00467682  FF 24 85 44 9A 46 00      JMP dword ptr [EAX*0x4 + 0x469a44]
switchD_00467682::caseD_ffffffff:
00467689  68 E8 A3 7A 00            PUSH 0x7aa3e8
0046768E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00467693  53                        PUSH EBX
00467694  53                        PUSH EBX
00467695  68 53 1F 00 00            PUSH 0x1f53
0046769A  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046769F  E8 2C 5E 24 00            CALL 0x006ad4d0
004676A4  83 C4 18                  ADD ESP,0x18
004676A7  85 C0                     TEST EAX,EAX
004676A9  74 01                     JZ 0x004676ac
004676AB  CC                        INT3
LAB_004676ac:
004676AC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004676B2  68 53 1F 00 00            PUSH 0x1f53
004676B7  68 3C 9D 7A 00            PUSH 0x7a9d3c
004676BC  51                        PUSH ECX
004676BD  E9 27 EA FF FF            JMP 0x004660e9
switchD_00467682::caseD_1:
004676C2  8B 8E CD 04 00 00         MOV ECX,dword ptr [ESI + 0x4cd]
004676C8  41                        INC ECX
004676C9  8B C1                     MOV EAX,ECX
004676CB  89 8E CD 04 00 00         MOV dword ptr [ESI + 0x4cd],ECX
004676D1  3B C7                     CMP EAX,EDI
004676D3  0F 8C 10 23 00 00         JL 0x004699e9
004676D9  8B CE                     MOV ECX,ESI
004676DB  E8 75 C1 F9 FF            CALL 0x00403855
switchD_00467682::caseD_0:
004676E0  89 9E CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EBX
004676E6  89 9E D1 04 00 00         MOV dword ptr [ESI + 0x4d1],EBX
004676EC  C7 86 D5 04 00 00 07 00 00 00  MOV dword ptr [ESI + 0x4d5],0x7
004676F6  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
switchD_00467682::caseD_3:
004676FC  0F BF 96 A9 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a9]
00467703  0F BF 86 A7 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a7]
0046770A  0F BF 8E A5 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a5]
00467711  42                        INC EDX
00467712  52                        PUSH EDX
00467713  50                        PUSH EAX
00467714  51                        PUSH ECX
00467715  E9 C0 22 00 00            JMP 0x004699da
LAB_0046771a:
0046771A  83 F8 07                  CMP EAX,0x7
0046771D  0F 85 E8 05 00 00         JNZ 0x00467d0b
00467723  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
00467729  3B C3                     CMP EAX,EBX
0046772B  0F 8E F9 01 00 00         JLE 0x0046792a
00467731  40                        INC EAX
00467732  83 F8 02                  CMP EAX,0x2
00467735  89 86 CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EAX
0046773B  75 1C                     JNZ 0x00467759
0046773D  53                        PUSH EBX
0046773E  8B CE                     MOV ECX,ESI
00467740  E8 E6 C2 F9 FF            CALL 0x00403a2b
00467745  83 F8 FF                  CMP EAX,-0x1
00467748  0F 85 E4 E6 FF FF         JNZ 0x00465e32
0046774E  0B C0                     OR EAX,EAX
00467750  5F                        POP EDI
00467751  5E                        POP ESI
00467752  5B                        POP EBX
00467753  8B E5                     MOV ESP,EBP
00467755  5D                        POP EBP
00467756  C2 04 00                  RET 0x4
LAB_00467759:
00467759  6A 02                     PUSH 0x2
0046775B  8B CE                     MOV ECX,ESI
0046775D  E8 C9 C2 F9 FF            CALL 0x00403a2b
00467762  83 F8 FF                  CMP EAX,-0x1
00467765  75 0B                     JNZ 0x00467772
00467767  0B C0                     OR EAX,EAX
00467769  5F                        POP EDI
0046776A  5E                        POP ESI
0046776B  5B                        POP EBX
0046776C  8B E5                     MOV ESP,EBP
0046776E  5D                        POP EBP
0046776F  C2 04 00                  RET 0x4
LAB_00467772:
00467772  39 9E 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EBX
00467778  0F 85 B4 E6 FF FF         JNZ 0x00465e32
0046777E  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00467784  83 F8 01                  CMP EAX,0x1
00467787  74 16                     JZ 0x0046779f
00467789  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00467790  0F 85 9C E6 FF FF         JNZ 0x00465e32
00467796  83 F8 01                  CMP EAX,0x1
00467799  0F 85 96 00 00 00         JNZ 0x00467835
LAB_0046779f:
0046779F  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
004677A5  C7 86 BD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4bd],0x0
004677AF  83 FB FF                  CMP EBX,-0x1
004677B2  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
004677B5  74 7E                     JZ 0x00467835
004677B7  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
004677BE  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
004677C5  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
004677CC  66 85 C0                  TEST AX,AX
004677CF  7C 53                     JL 0x00467824
004677D1  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004677D8  66 3B C7                  CMP AX,DI
004677DB  7D 47                     JGE 0x00467824
004677DD  66 85 D2                  TEST DX,DX
004677E0  7C 42                     JL 0x00467824
004677E2  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004677E9  7D 39                     JGE 0x00467824
004677EB  66 85 C9                  TEST CX,CX
004677EE  7C 34                     JL 0x00467824
004677F0  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004677F7  7D 2B                     JGE 0x00467824
004677F9  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00467800  0F BF C9                  MOVSX ECX,CX
00467803  0F BF D2                  MOVSX EDX,DX
00467806  0F AF CB                  IMUL ECX,EBX
00467809  0F BF FF                  MOVSX EDI,DI
0046780C  0F AF D7                  IMUL EDX,EDI
0046780F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00467812  03 CA                     ADD ECX,EDX
00467814  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046781A  0F BF C0                  MOVSX EAX,AX
0046781D  03 C8                     ADD ECX,EAX
0046781F  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00467822  EB 02                     JMP 0x00467826
LAB_00467824:
00467824  33 C0                     XOR EAX,EAX
LAB_00467826:
00467826  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00467829  74 0A                     JZ 0x00467835
0046782B  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_00467835:
00467835  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
0046783C  0F 85 96 00 00 00         JNZ 0x004678d8
00467842  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
0046784C  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00467852  83 FB FF                  CMP EBX,-0x1
00467855  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00467858  74 7E                     JZ 0x004678d8
0046785A  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00467861  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00467868  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
0046786F  66 85 C0                  TEST AX,AX
00467872  7C 53                     JL 0x004678c7
00467874  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046787B  66 3B C7                  CMP AX,DI
0046787E  7D 47                     JGE 0x004678c7
00467880  66 85 D2                  TEST DX,DX
00467883  7C 42                     JL 0x004678c7
00467885  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046788C  7D 39                     JGE 0x004678c7
0046788E  66 85 C9                  TEST CX,CX
00467891  7C 34                     JL 0x004678c7
00467893  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046789A  7D 2B                     JGE 0x004678c7
0046789C  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004678A3  0F BF C9                  MOVSX ECX,CX
004678A6  0F BF D2                  MOVSX EDX,DX
004678A9  0F AF CB                  IMUL ECX,EBX
004678AC  0F BF FF                  MOVSX EDI,DI
004678AF  0F AF D7                  IMUL EDX,EDI
004678B2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004678B5  03 CA                     ADD ECX,EDX
004678B7  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004678BD  0F BF C0                  MOVSX EAX,AX
004678C0  03 C8                     ADD ECX,EAX
004678C2  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004678C5  EB 02                     JMP 0x004678c9
LAB_004678c7:
004678C7  33 C0                     XOR EAX,EAX
LAB_004678c9:
004678C9  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
004678CC  74 0A                     JZ 0x004678d8
004678CE  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_004678d8:
004678D8  8B CE                     MOV ECX,ESI
004678DA  E8 A5 B8 F9 FF            CALL 0x00403184
004678DF  33 FF                     XOR EDI,EDI
004678E1  3B C7                     CMP EAX,EDI
004678E3  75 13                     JNZ 0x004678f8
004678E5  8B CE                     MOV ECX,ESI
004678E7  E8 69 BF F9 FF            CALL 0x00403855
004678EC  89 BE D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EDI
004678F2  57                        PUSH EDI
004678F3  E9 81 20 00 00            JMP 0x00469979
LAB_004678f8:
004678F8  83 F8 07                  CMP EAX,0x7
004678FB  75 18                     JNZ 0x00467915
004678FD  83 BE AB 04 00 00 FF      CMP dword ptr [ESI + 0x4ab],-0x1
00467904  0F 84 78 E5 FF FF         JZ 0x00465e82
0046790A  89 BE CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDI
00467910  E9 47 0E 00 00            JMP 0x0046875c
LAB_00467915:
00467915  89 BE CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDI
0046791B  C7 86 D5 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d5],0x1
00467925  E9 30 E5 FF FF            JMP 0x00465e5a
LAB_0046792a:
0046792A  6A 02                     PUSH 0x2
0046792C  8B CE                     MOV ECX,ESI
0046792E  E8 AB B8 F9 FF            CALL 0x004031de
00467933  40                        INC EAX
00467934  83 F8 04                  CMP EAX,0x4
00467937  0F 87 13 13 00 00         JA 0x00468c50
switchD_0046793d::switchD:
0046793D  FF 24 85 58 9A 46 00      JMP dword ptr [EAX*0x4 + 0x469a58]
switchD_0046793d::caseD_ffffffff:
00467944  68 BC A3 7A 00            PUSH 0x7aa3bc
00467949  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046794E  53                        PUSH EBX
0046794F  53                        PUSH EBX
00467950  68 B8 1F 00 00            PUSH 0x1fb8
00467955  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046795A  E8 71 5B 24 00            CALL 0x006ad4d0
0046795F  83 C4 18                  ADD ESP,0x18
00467962  85 C0                     TEST EAX,EAX
00467964  74 01                     JZ 0x00467967
00467966  CC                        INT3
LAB_00467967:
00467967  68 B8 1F 00 00            PUSH 0x1fb8
0046796C  E9 6D E7 FF FF            JMP 0x004660de
switchD_0046793d::caseD_0:
00467971  8B CE                     MOV ECX,ESI
00467973  E8 53 D0 F9 FF            CALL 0x004049cb
00467978  83 F8 01                  CMP EAX,0x1
0046797B  0F 85 1E 01 00 00         JNZ 0x00467a9f
00467981  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00467988  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
0046798F  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00467996  66 3B C3                  CMP AX,BX
00467999  0F 8C 00 01 00 00         JL 0x00467a9f
0046799F  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004679A6  66 3B C7                  CMP AX,DI
004679A9  0F 8D F0 00 00 00         JGE 0x00467a9f
004679AF  66 3B D3                  CMP DX,BX
004679B2  0F 8C E7 00 00 00         JL 0x00467a9f
004679B8  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004679BF  0F 8D DA 00 00 00         JGE 0x00467a9f
004679C5  66 3B CB                  CMP CX,BX
004679C8  0F 8C D1 00 00 00         JL 0x00467a9f
004679CE  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004679D5  0F 8D C4 00 00 00         JGE 0x00467a9f
004679DB  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004679E2  0F BF C9                  MOVSX ECX,CX
004679E5  0F BF D2                  MOVSX EDX,DX
004679E8  0F AF CB                  IMUL ECX,EBX
004679EB  0F BF FF                  MOVSX EDI,DI
004679EE  0F AF D7                  IMUL EDX,EDI
004679F1  0F BF C0                  MOVSX EAX,AX
004679F4  03 CA                     ADD ECX,EDX
004679F6  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004679FC  03 C8                     ADD ECX,EAX
004679FE  33 DB                     XOR EBX,EBX
00467A00  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
00467A03  3B CB                     CMP ECX,EBX
00467A05  0F 84 94 00 00 00         JZ 0x00467a9f
00467A0B  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00467A0E  8B 96 AB 04 00 00         MOV EDX,dword ptr [ESI + 0x4ab]
00467A14  3B C2                     CMP EAX,EDX
00467A16  0F 85 83 00 00 00         JNZ 0x00467a9f
00467A1C  E8 4F DA F9 FF            CALL 0x00405470
00467A21  83 F8 01                  CMP EAX,0x1
00467A24  74 79                     JZ 0x00467a9f
00467A26  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00467A2D  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00467A34  8D BE B3 04 00 00         LEA EDI,[ESI + 0x4b3]
00467A3A  8D 9E B1 04 00 00         LEA EBX,[ESI + 0x4b1]
00467A40  8D 86 AF 04 00 00         LEA EAX,[ESI + 0x4af]
00467A46  57                        PUSH EDI
00467A47  53                        PUSH EBX
00467A48  50                        PUSH EAX
00467A49  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00467A50  66 41                     INC CX
00467A52  6A 01                     PUSH 0x1
00467A54  51                        PUSH ECX
00467A55  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
00467A59  52                        PUSH EDX
00467A5A  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
00467A5E  50                        PUSH EAX
00467A5F  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00467A63  51                        PUSH ECX
00467A64  52                        PUSH EDX
00467A65  50                        PUSH EAX
00467A66  8B CE                     MOV ECX,ESI
00467A68  E8 9B CE F9 FF            CALL 0x00404908
00467A6D  0F BF 0F                  MOVSX ECX,word ptr [EDI]
00467A70  0F BF 13                  MOVSX EDX,word ptr [EBX]
00467A73  0F BF 86 AF 04 00 00      MOVSX EAX,word ptr [ESI + 0x4af]
00467A7A  51                        PUSH ECX
00467A7B  52                        PUSH EDX
00467A7C  50                        PUSH EAX
00467A7D  8B CE                     MOV ECX,ESI
00467A7F  C7 86 D5 04 00 00 08 00 00 00  MOV dword ptr [ESI + 0x4d5],0x8
00467A89  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
00467A93  E8 D3 D4 F9 FF            CALL 0x00404f6b
00467A98  6A 00                     PUSH 0x0
00467A9A  E9 AA 11 00 00            JMP 0x00468c49
LAB_00467a9f:
00467A9F  C7 86 D5 04 00 00 09 00 00 00  MOV dword ptr [ESI + 0x4d5],0x9
00467AA9  E9 CA 1E 00 00            JMP 0x00469978
switchD_0046793d::caseD_3:
00467AAE  0F BF 8E A9 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a9]
00467AB5  0F BF 96 A7 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a7]
00467ABC  0F BF 86 A5 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a5]
00467AC3  41                        INC ECX
00467AC4  51                        PUSH ECX
00467AC5  52                        PUSH EDX
00467AC6  50                        PUSH EAX
00467AC7  8B CE                     MOV ECX,ESI
00467AC9  E8 9D D4 F9 FF            CALL 0x00404f6b
00467ACE  53                        PUSH EBX
00467ACF  E9 75 11 00 00            JMP 0x00468c49
switchD_0046793d::caseD_1:
00467AD4  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00467ADA  83 F8 01                  CMP EAX,0x1
00467ADD  74 0D                     JZ 0x00467aec
00467ADF  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00467AE6  0F 85 64 11 00 00         JNZ 0x00468c50
LAB_00467aec:
00467AEC  83 F8 01                  CMP EAX,0x1
00467AEF  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00467AF2  0F 85 96 00 00 00         JNZ 0x00467b8e
00467AF8  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
00467AFE  C7 86 BD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4bd],0x0
00467B08  83 FB FF                  CMP EBX,-0x1
00467B0B  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00467B0E  74 7E                     JZ 0x00467b8e
00467B10  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
00467B17  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00467B1E  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
00467B25  66 85 C0                  TEST AX,AX
00467B28  7C 53                     JL 0x00467b7d
00467B2A  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00467B31  66 3B C7                  CMP AX,DI
00467B34  7D 47                     JGE 0x00467b7d
00467B36  66 85 D2                  TEST DX,DX
00467B39  7C 42                     JL 0x00467b7d
00467B3B  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00467B42  7D 39                     JGE 0x00467b7d
00467B44  66 85 C9                  TEST CX,CX
00467B47  7C 34                     JL 0x00467b7d
00467B49  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00467B50  7D 2B                     JGE 0x00467b7d
00467B52  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00467B59  0F BF C9                  MOVSX ECX,CX
00467B5C  0F BF D2                  MOVSX EDX,DX
00467B5F  0F AF CB                  IMUL ECX,EBX
00467B62  0F BF FF                  MOVSX EDI,DI
00467B65  0F AF D7                  IMUL EDX,EDI
00467B68  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00467B6B  03 CA                     ADD ECX,EDX
00467B6D  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00467B73  0F BF C0                  MOVSX EAX,AX
00467B76  03 C8                     ADD ECX,EAX
00467B78  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00467B7B  EB 02                     JMP 0x00467b7f
LAB_00467b7d:
00467B7D  33 C0                     XOR EAX,EAX
LAB_00467b7f:
00467B7F  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00467B82  74 0A                     JZ 0x00467b8e
00467B84  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_00467b8e:
00467B8E  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00467B95  0F 85 A6 00 00 00         JNZ 0x00467c41
00467B9B  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
00467BA5  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00467BAB  83 FB FF                  CMP EBX,-0x1
00467BAE  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00467BB1  74 7E                     JZ 0x00467c31
00467BB3  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00467BBA  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00467BC1  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00467BC8  66 85 C0                  TEST AX,AX
00467BCB  7C 53                     JL 0x00467c20
00467BCD  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00467BD4  66 3B C7                  CMP AX,DI
00467BD7  7D 47                     JGE 0x00467c20
00467BD9  66 85 D2                  TEST DX,DX
00467BDC  7C 42                     JL 0x00467c20
00467BDE  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00467BE5  7D 39                     JGE 0x00467c20
00467BE7  66 85 C9                  TEST CX,CX
00467BEA  7C 34                     JL 0x00467c20
00467BEC  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00467BF3  7D 2B                     JGE 0x00467c20
00467BF5  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00467BFC  0F BF C9                  MOVSX ECX,CX
00467BFF  0F BF D2                  MOVSX EDX,DX
00467C02  0F AF CB                  IMUL ECX,EBX
00467C05  0F BF FF                  MOVSX EDI,DI
00467C08  0F AF D7                  IMUL EDX,EDI
00467C0B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00467C0E  03 CA                     ADD ECX,EDX
00467C10  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00467C16  0F BF C0                  MOVSX EAX,AX
00467C19  03 C8                     ADD ECX,EAX
00467C1B  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00467C1E  EB 02                     JMP 0x00467c22
LAB_00467c20:
00467C20  33 C0                     XOR EAX,EAX
LAB_00467c22:
00467C22  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00467C25  74 0A                     JZ 0x00467c31
00467C27  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_00467c31:
00467C31  83 BE AB 04 00 00 FF      CMP dword ptr [ESI + 0x4ab],-0x1
00467C38  74 07                     JZ 0x00467c41
00467C3A  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00467c41:
00467C41  8B CE                     MOV ECX,ESI
00467C43  E8 3C B5 F9 FF            CALL 0x00403184
00467C48  85 C0                     TEST EAX,EAX
00467C4A  0F 84 94 03 00 00         JZ 0x00467fe4
00467C50  83 F8 07                  CMP EAX,0x7
00467C53  75 7E                     JNZ 0x00467cd3
00467C55  83 BE AB 04 00 00 FF      CMP dword ptr [ESI + 0x4ab],-0x1
00467C5C  74 0B                     JZ 0x00467c69
00467C5E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00467C61  85 C0                     TEST EAX,EAX
00467C63  0F 84 E7 0F 00 00         JZ 0x00468c50
LAB_00467c69:
00467C69  8B CE                     MOV ECX,ESI
00467C6B  E8 E5 BB F9 FF            CALL 0x00403855
00467C70  83 BE AB 04 00 00 FF      CMP dword ptr [ESI + 0x4ab],-0x1
00467C77  75 29                     JNZ 0x00467ca2
00467C79  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
00467C7F  8B CE                     MOV ECX,ESI
00467C81  40                        INC EAX
00467C82  89 86 CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EAX
00467C88  8B 06                     MOV EAX,dword ptr [ESI]
00467C8A  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00467C90  F7 D8                     NEG EAX
00467C92  1B C0                     SBB EAX,EAX
00467C94  24 FD                     AND AL,0xfd
00467C96  83 C0 02                  ADD EAX,0x2
00467C99  5F                        POP EDI
00467C9A  5E                        POP ESI
00467C9B  5B                        POP EBX
00467C9C  8B E5                     MOV ESP,EBP
00467C9E  5D                        POP EBP
00467C9F  C2 04 00                  RET 0x4
LAB_00467ca2:
00467CA2  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
00467CA6  0F 85 A4 0F 00 00         JNZ 0x00468c50
00467CAC  0F BF 86 A9 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a9]
00467CB3  0F BF 8E A7 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a7]
00467CBA  0F BF 96 A5 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a5]
00467CC1  40                        INC EAX
00467CC2  50                        PUSH EAX
00467CC3  51                        PUSH ECX
00467CC4  52                        PUSH EDX
00467CC5  8B CE                     MOV ECX,ESI
00467CC7  E8 9F D2 F9 FF            CALL 0x00404f6b
00467CCC  6A 00                     PUSH 0x0
00467CCE  E9 76 0F 00 00            JMP 0x00468c49
LAB_00467cd3:
00467CD3  8B CE                     MOV ECX,ESI
00467CD5  E8 7B BB F9 FF            CALL 0x00403855
00467CDA  0F BF 86 9F 04 00 00      MOVSX EAX,word ptr [ESI + 0x49f]
00467CE1  0F BF 8E 9D 04 00 00      MOVSX ECX,word ptr [ESI + 0x49d]
00467CE8  0F BF 96 9B 04 00 00      MOVSX EDX,word ptr [ESI + 0x49b]
00467CEF  40                        INC EAX
00467CF0  C7 86 D5 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d5],0x1
00467CFA  50                        PUSH EAX
00467CFB  51                        PUSH ECX
00467CFC  52                        PUSH EDX
00467CFD  8B CE                     MOV ECX,ESI
00467CFF  E8 67 D2 F9 FF            CALL 0x00404f6b
00467D04  6A 00                     PUSH 0x0
00467D06  E9 3E 0F 00 00            JMP 0x00468c49
LAB_00467d0b:
00467D0B  83 F8 08                  CMP EAX,0x8
00467D0E  0F 85 AC 04 00 00         JNZ 0x004681c0
00467D14  6A 02                     PUSH 0x2
00467D16  8B CE                     MOV ECX,ESI
00467D18  E8 C1 B4 F9 FF            CALL 0x004031de
00467D1D  40                        INC EAX
00467D1E  83 F8 04                  CMP EAX,0x4
00467D21  0F 87 C2 1C 00 00         JA 0x004699e9
switchD_00467d27::switchD:
00467D27  FF 24 85 6C 9A 46 00      JMP dword ptr [EAX*0x4 + 0x469a6c]
switchD_00467d27::caseD_ffffffff:
00467D2E  68 84 A3 7A 00            PUSH 0x7aa384
00467D33  68 CC 4C 7A 00            PUSH 0x7a4ccc
00467D38  6A 00                     PUSH 0x0
00467D3A  6A 00                     PUSH 0x0
00467D3C  68 1C 20 00 00            PUSH 0x201c
00467D41  68 3C 9D 7A 00            PUSH 0x7a9d3c
00467D46  E8 85 57 24 00            CALL 0x006ad4d0
00467D4B  83 C4 18                  ADD ESP,0x18
00467D4E  85 C0                     TEST EAX,EAX
00467D50  74 01                     JZ 0x00467d53
00467D52  CC                        INT3
LAB_00467d53:
00467D53  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00467D59  68 1C 20 00 00            PUSH 0x201c
00467D5E  68 3C 9D 7A 00            PUSH 0x7a9d3c
00467D63  51                        PUSH ECX
00467D64  E9 80 E3 FF FF            JMP 0x004660e9
switchD_00467d27::caseD_0:
00467D69  8B CE                     MOV ECX,ESI
00467D6B  E8 5B CC F9 FF            CALL 0x004049cb
00467D70  83 F8 01                  CMP EAX,0x1
00467D73  75 65                     JNZ 0x00467dda
00467D75  66 8B 96 A9 04 00 00      MOV DX,word ptr [ESI + 0x4a9]
00467D7C  66 8B 8E A5 04 00 00      MOV CX,word ptr [ESI + 0x4a5]
00467D83  8D BE B3 04 00 00         LEA EDI,[ESI + 0x4b3]
00467D89  8D 9E B1 04 00 00         LEA EBX,[ESI + 0x4b1]
00467D8F  8D 86 AF 04 00 00         LEA EAX,[ESI + 0x4af]
00467D95  57                        PUSH EDI
00467D96  53                        PUSH EBX
00467D97  50                        PUSH EAX
00467D98  66 8B 86 A7 04 00 00      MOV AX,word ptr [ESI + 0x4a7]
00467D9F  66 42                     INC DX
00467DA1  6A 01                     PUSH 0x1
00467DA3  52                        PUSH EDX
00467DA4  50                        PUSH EAX
LAB_00467da5:
00467DA5  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
00467DA9  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
00467DAD  51                        PUSH ECX
00467DAE  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00467DB2  52                        PUSH EDX
00467DB3  50                        PUSH EAX
00467DB4  51                        PUSH ECX
00467DB5  8B CE                     MOV ECX,ESI
00467DB7  E8 4C CB F9 FF            CALL 0x00404908
00467DBC  0F BF 17                  MOVSX EDX,word ptr [EDI]
00467DBF  0F BF 03                  MOVSX EAX,word ptr [EBX]
00467DC2  0F BF 8E AF 04 00 00      MOVSX ECX,word ptr [ESI + 0x4af]
00467DC9  52                        PUSH EDX
00467DCA  50                        PUSH EAX
00467DCB  51                        PUSH ECX
00467DCC  8B CE                     MOV ECX,ESI
00467DCE  E8 98 D1 F9 FF            CALL 0x00404f6b
00467DD3  6A 00                     PUSH 0x0
00467DD5  E9 08 1C 00 00            JMP 0x004699e2
LAB_00467dda:
00467DDA  C7 86 D5 04 00 00 09 00 00 00  MOV dword ptr [ESI + 0x4d5],0x9
00467DE4  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
00467DEE  6A 00                     PUSH 0x0
00467DF0  E9 84 1B 00 00            JMP 0x00469979
switchD_00467d27::caseD_3:
00467DF5  8B CE                     MOV ECX,ESI
00467DF7  E8 CF CB F9 FF            CALL 0x004049cb
00467DFC  83 F8 01                  CMP EAX,0x1
00467DFF  75 47                     JNZ 0x00467e48
00467E01  8D 96 B3 04 00 00         LEA EDX,[ESI + 0x4b3]
00467E07  8D 86 B1 04 00 00         LEA EAX,[ESI + 0x4b1]
00467E0D  52                        PUSH EDX
00467E0E  66 8B 96 A9 04 00 00      MOV DX,word ptr [ESI + 0x4a9]
00467E15  8D 8E AF 04 00 00         LEA ECX,[ESI + 0x4af]
00467E1B  50                        PUSH EAX
00467E1C  66 8B 86 A7 04 00 00      MOV AX,word ptr [ESI + 0x4a7]
00467E23  51                        PUSH ECX
00467E24  66 8B 8E A5 04 00 00      MOV CX,word ptr [ESI + 0x4a5]
00467E2B  66 42                     INC DX
00467E2D  6A 01                     PUSH 0x1
00467E2F  52                        PUSH EDX
00467E30  50                        PUSH EAX
LAB_00467e31:
00467E31  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
00467E35  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
00467E39  51                        PUSH ECX
00467E3A  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00467E3E  52                        PUSH EDX
00467E3F  50                        PUSH EAX
00467E40  51                        PUSH ECX
00467E41  8B CE                     MOV ECX,ESI
00467E43  E8 C0 CA F9 FF            CALL 0x00404908
LAB_00467e48:
00467E48  0F BF 96 B3 04 00 00      MOVSX EDX,word ptr [ESI + 0x4b3]
00467E4F  0F BF 86 B1 04 00 00      MOVSX EAX,word ptr [ESI + 0x4b1]
00467E56  0F BF 8E AF 04 00 00      MOVSX ECX,word ptr [ESI + 0x4af]
00467E5D  52                        PUSH EDX
00467E5E  50                        PUSH EAX
00467E5F  51                        PUSH ECX
00467E60  8B CE                     MOV ECX,ESI
00467E62  E8 04 D1 F9 FF            CALL 0x00404f6b
00467E67  6A 00                     PUSH 0x0
00467E69  E9 74 1B 00 00            JMP 0x004699e2
switchD_00467d27::caseD_1:
00467E6E  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00467E74  83 F8 01                  CMP EAX,0x1
00467E77  74 0D                     JZ 0x00467e86
00467E79  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00467E80  0F 85 F2 01 00 00         JNZ 0x00468078
LAB_00467e86:
00467E86  33 FF                     XOR EDI,EDI
00467E88  83 F8 01                  CMP EAX,0x1
00467E8B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00467E8E  0F 85 A2 00 00 00         JNZ 0x00467f36
00467E94  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
00467E9A  89 BE BD 04 00 00         MOV dword ptr [ESI + 0x4bd],EDI
00467EA0  83 FB FF                  CMP EBX,-0x1
00467EA3  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00467EA6  74 7E                     JZ 0x00467f26
00467EA8  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
00467EAF  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00467EB6  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
00467EBD  66 3B C7                  CMP AX,DI
00467EC0  7C 53                     JL 0x00467f15
00467EC2  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00467EC9  66 3B C7                  CMP AX,DI
00467ECC  7D 47                     JGE 0x00467f15
00467ECE  66 85 D2                  TEST DX,DX
00467ED1  7C 42                     JL 0x00467f15
00467ED3  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00467EDA  7D 39                     JGE 0x00467f15
00467EDC  66 85 C9                  TEST CX,CX
00467EDF  7C 34                     JL 0x00467f15
00467EE1  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00467EE8  7D 2B                     JGE 0x00467f15
00467EEA  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00467EF1  0F BF C9                  MOVSX ECX,CX
00467EF4  0F BF D2                  MOVSX EDX,DX
00467EF7  0F AF CB                  IMUL ECX,EBX
00467EFA  0F BF FF                  MOVSX EDI,DI
00467EFD  0F AF D7                  IMUL EDX,EDI
00467F00  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00467F03  03 CA                     ADD ECX,EDX
00467F05  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00467F0B  0F BF C0                  MOVSX EAX,AX
00467F0E  03 C8                     ADD ECX,EAX
00467F10  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00467F13  EB 02                     JMP 0x00467f17
LAB_00467f15:
00467F15  33 C0                     XOR EAX,EAX
LAB_00467f17:
00467F17  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00467F1A  74 0A                     JZ 0x00467f26
00467F1C  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_00467f26:
00467F26  83 BE A1 04 00 00 FF      CMP dword ptr [ESI + 0x4a1],-0x1
00467F2D  74 07                     JZ 0x00467f36
00467F2F  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00467f36:
00467F36  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00467F3D  0F 85 96 00 00 00         JNZ 0x00467fd9
00467F43  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
00467F4D  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00467F53  83 FB FF                  CMP EBX,-0x1
00467F56  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00467F59  74 7E                     JZ 0x00467fd9
00467F5B  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00467F62  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00467F69  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00467F70  66 85 C0                  TEST AX,AX
00467F73  7C 53                     JL 0x00467fc8
00467F75  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00467F7C  66 3B C7                  CMP AX,DI
00467F7F  7D 47                     JGE 0x00467fc8
00467F81  66 85 D2                  TEST DX,DX
00467F84  7C 42                     JL 0x00467fc8
00467F86  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00467F8D  7D 39                     JGE 0x00467fc8
00467F8F  66 85 C9                  TEST CX,CX
00467F92  7C 34                     JL 0x00467fc8
00467F94  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00467F9B  7D 2B                     JGE 0x00467fc8
00467F9D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00467FA4  0F BF C9                  MOVSX ECX,CX
00467FA7  0F BF D2                  MOVSX EDX,DX
00467FAA  0F AF CB                  IMUL ECX,EBX
00467FAD  0F BF FF                  MOVSX EDI,DI
00467FB0  0F AF D7                  IMUL EDX,EDI
00467FB3  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00467FB6  03 CA                     ADD ECX,EDX
00467FB8  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00467FBE  0F BF C0                  MOVSX EAX,AX
00467FC1  03 C8                     ADD ECX,EAX
00467FC3  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00467FC6  EB 02                     JMP 0x00467fca
LAB_00467fc8:
00467FC8  33 C0                     XOR EAX,EAX
LAB_00467fca:
00467FCA  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00467FCD  74 0A                     JZ 0x00467fd9
00467FCF  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_00467fd9:
00467FD9  8B CE                     MOV ECX,ESI
00467FDB  E8 A4 B1 F9 FF            CALL 0x00403184
00467FE0  85 C0                     TEST EAX,EAX
00467FE2  75 18                     JNZ 0x00467ffc
STBoatC::LoadRC::cf_common_exit_00467FE4:
00467FE4  8B CE                     MOV ECX,ESI
00467FE6  E8 6A B8 F9 FF            CALL 0x00403855
00467FEB  C7 86 D5 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d5],0x0
00467FF5  6A 00                     PUSH 0x0
00467FF7  E9 7D 19 00 00            JMP 0x00469979
LAB_00467ffc:
00467FFC  83 F8 01                  CMP EAX,0x1
00467FFF  0F 85 79 01 00 00         JNZ 0x0046817e
00468005  8B 86 A1 04 00 00         MOV EAX,dword ptr [ESI + 0x4a1]
0046800B  83 CF FF                  OR EDI,0xffffffff
0046800E  3B C7                     CMP EAX,EDI
00468010  74 0B                     JZ 0x0046801d
00468012  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00468015  85 C0                     TEST EAX,EAX
00468017  0F 84 CC 19 00 00         JZ 0x004699e9
LAB_0046801d:
0046801D  8B CE                     MOV ECX,ESI
0046801F  E8 31 B8 F9 FF            CALL 0x00403855
00468024  39 BE A1 04 00 00         CMP dword ptr [ESI + 0x4a1],EDI
0046802A  75 0B                     JNZ 0x00468037
0046802C  FF 86 CD 04 00 00         INC dword ptr [ESI + 0x4cd]
00468032  E9 B2 19 00 00            JMP 0x004699e9
LAB_00468037:
00468037  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
0046803B  75 3B                     JNZ 0x00468078
0046803D  0F BF 86 9F 04 00 00      MOVSX EAX,word ptr [ESI + 0x49f]
00468044  0F BF 8E 9D 04 00 00      MOVSX ECX,word ptr [ESI + 0x49d]
0046804B  0F BF 96 9B 04 00 00      MOVSX EDX,word ptr [ESI + 0x49b]
00468052  40                        INC EAX
00468053  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
0046805D  50                        PUSH EAX
0046805E  51                        PUSH ECX
0046805F  52                        PUSH EDX
00468060  8B CE                     MOV ECX,ESI
00468062  C7 86 D5 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d5],0x1
0046806C  E8 FA CE F9 FF            CALL 0x00404f6b
00468071  6A 00                     PUSH 0x0
00468073  E9 6A 19 00 00            JMP 0x004699e2
LAB_00468078:
00468078  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
0046807F  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00468086  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
0046808D  66 85 C0                  TEST AX,AX
00468090  0F 8C 53 19 00 00         JL 0x004699e9
00468096  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046809D  66 3B C7                  CMP AX,DI
004680A0  0F 8D 43 19 00 00         JGE 0x004699e9
004680A6  66 85 D2                  TEST DX,DX
004680A9  0F 8C 3A 19 00 00         JL 0x004699e9
004680AF  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004680B6  0F 8D 2D 19 00 00         JGE 0x004699e9
004680BC  66 85 C9                  TEST CX,CX
004680BF  0F 8C 24 19 00 00         JL 0x004699e9
004680C5  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004680CC  0F 8D 17 19 00 00         JGE 0x004699e9
004680D2  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004680D9  0F BF C9                  MOVSX ECX,CX
004680DC  0F BF D2                  MOVSX EDX,DX
004680DF  0F AF CB                  IMUL ECX,EBX
004680E2  0F BF FF                  MOVSX EDI,DI
004680E5  0F AF D7                  IMUL EDX,EDI
004680E8  0F BF C0                  MOVSX EAX,AX
004680EB  03 CA                     ADD ECX,EDX
004680ED  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004680F3  03 C8                     ADD ECX,EAX
004680F5  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
004680F8  85 FF                     TEST EDI,EDI
004680FA  0F 84 E9 18 00 00         JZ 0x004699e9
00468100  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
00468103  8B 8E AB 04 00 00         MOV ECX,dword ptr [ESI + 0x4ab]
00468109  3B C1                     CMP EAX,ECX
0046810B  0F 85 D8 18 00 00         JNZ 0x004699e9
00468111  8B CF                     MOV ECX,EDI
00468113  E8 58 D3 F9 FF            CALL 0x00405470
00468118  83 F8 01                  CMP EAX,0x1
0046811B  0F 85 C8 18 00 00         JNZ 0x004699e9
00468121  57                        PUSH EDI
00468122  8B CE                     MOV ECX,ESI
00468124  E8 76 A4 F9 FF            CALL 0x0040259f
00468129  83 F8 01                  CMP EAX,0x1
0046812C  0F 85 B7 18 00 00         JNZ 0x004699e9
00468132  8B CE                     MOV ECX,ESI
00468134  E8 1C B7 F9 FF            CALL 0x00403855
00468139  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0046813C  51                        PUSH ECX
0046813D  8B CF                     MOV ECX,EDI
0046813F  E8 8E CB F9 FF            CALL 0x00404cd2
00468144  0F BF 96 C9 04 00 00      MOVSX EDX,word ptr [ESI + 0x4c9]
0046814B  0F BF 86 C7 04 00 00      MOVSX EAX,word ptr [ESI + 0x4c7]
00468152  0F BF 8E C5 04 00 00      MOVSX ECX,word ptr [ESI + 0x4c5]
00468159  52                        PUSH EDX
0046815A  50                        PUSH EAX
0046815B  51                        PUSH ECX
0046815C  8B CE                     MOV ECX,ESI
0046815E  C7 86 CD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4cd],0x0
00468168  C7 86 D5 04 00 00 0A 00 00 00  MOV dword ptr [ESI + 0x4d5],0xa
00468172  E8 F4 CD F9 FF            CALL 0x00404f6b
00468177  6A 00                     PUSH 0x0
00468179  E9 64 18 00 00            JMP 0x004699e2
LAB_0046817e:
0046817E  8B CE                     MOV ECX,ESI
00468180  E8 D0 B6 F9 FF            CALL 0x00403855
00468185  0F BF 96 A9 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a9]
0046818C  0F BF 86 A7 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a7]
00468193  0F BF 8E A5 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a5]
0046819A  42                        INC EDX
0046819B  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
004681A5  52                        PUSH EDX
004681A6  50                        PUSH EAX
004681A7  51                        PUSH ECX
004681A8  8B CE                     MOV ECX,ESI
004681AA  C7 86 D5 04 00 00 07 00 00 00  MOV dword ptr [ESI + 0x4d5],0x7
004681B4  E8 B2 CD F9 FF            CALL 0x00404f6b
004681B9  6A 00                     PUSH 0x0
004681BB  E9 22 18 00 00            JMP 0x004699e2
LAB_004681c0:
004681C0  83 F8 09                  CMP EAX,0x9
004681C3  0F 85 85 03 00 00         JNZ 0x0046854e
004681C9  8B BE CD 04 00 00         MOV EDI,dword ptr [ESI + 0x4cd]
004681CF  6A 02                     PUSH 0x2
004681D1  47                        INC EDI
004681D2  8B CE                     MOV ECX,ESI
004681D4  89 BE CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDI
004681DA  E8 4C B8 F9 FF            CALL 0x00403a2b
004681DF  83 F8 FF                  CMP EAX,-0x1
004681E2  75 0B                     JNZ 0x004681ef
004681E4  0B C0                     OR EAX,EAX
004681E6  5F                        POP EDI
004681E7  5E                        POP ESI
004681E8  5B                        POP EBX
004681E9  8B E5                     MOV ESP,EBP
004681EB  5D                        POP EBP
004681EC  C2 04 00                  RET 0x4
LAB_004681ef:
004681EF  39 9E 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EBX
004681F5  0F 85 37 DC FF FF         JNZ 0x00465e32
004681FB  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00468201  83 F8 01                  CMP EAX,0x1
00468204  0F 84 36 01 00 00         JZ 0x00468340
0046820A  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00468211  0F 84 29 01 00 00         JZ 0x00468340
00468217  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
0046821D  B9 32 00 00 00            MOV ECX,0x32
00468222  99                        CDQ
00468223  F7 F9                     IDIV ECX
00468225  83 FA 01                  CMP EDX,0x1
00468228  0F 85 04 DC FF FF         JNZ 0x00465e32
0046822E  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00468235  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
0046823C  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00468243  66 85 C0                  TEST AX,AX
00468246  0F 8C E6 DB FF FF         JL 0x00465e32
0046824C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00468253  66 3B C7                  CMP AX,DI
00468256  0F 8D D6 DB FF FF         JGE 0x00465e32
0046825C  66 85 D2                  TEST DX,DX
0046825F  0F 8C CD DB FF FF         JL 0x00465e32
00468265  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046826C  0F 8D C0 DB FF FF         JGE 0x00465e32
00468272  66 85 C9                  TEST CX,CX
00468275  0F 8C B7 DB FF FF         JL 0x00465e32
0046827B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00468282  0F 8D AA DB FF FF         JGE 0x00465e32
00468288  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046828F  0F BF C9                  MOVSX ECX,CX
00468292  0F BF D2                  MOVSX EDX,DX
00468295  0F AF CB                  IMUL ECX,EBX
00468298  0F BF FF                  MOVSX EDI,DI
0046829B  0F AF D7                  IMUL EDX,EDI
0046829E  0F BF C0                  MOVSX EAX,AX
004682A1  03 CA                     ADD ECX,EDX
004682A3  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004682A9  03 C8                     ADD ECX,EAX
004682AB  33 DB                     XOR EBX,EBX
004682AD  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
004682B0  3B FB                     CMP EDI,EBX
004682B2  0F 84 7A DB FF FF         JZ 0x00465e32
004682B8  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004682BB  8B 8E AB 04 00 00         MOV ECX,dword ptr [ESI + 0x4ab]
004682C1  3B C1                     CMP EAX,ECX
004682C3  0F 85 69 DB FF FF         JNZ 0x00465e32
004682C9  8B CF                     MOV ECX,EDI
004682CB  E8 A0 D1 F9 FF            CALL 0x00405470
004682D0  83 F8 01                  CMP EAX,0x1
004682D3  0F 85 59 DB FF FF         JNZ 0x00465e32
004682D9  57                        PUSH EDI
004682DA  8B CE                     MOV ECX,ESI
004682DC  E8 BE A2 F9 FF            CALL 0x0040259f
004682E1  83 F8 01                  CMP EAX,0x1
004682E4  0F 85 48 DB FF FF         JNZ 0x00465e32
004682EA  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004682ED  51                        PUSH ECX
004682EE  8B CF                     MOV ECX,EDI
004682F0  E8 DD C9 F9 FF            CALL 0x00404cd2
004682F5  0F BF 96 C9 04 00 00      MOVSX EDX,word ptr [ESI + 0x4c9]
004682FC  0F BF 86 C7 04 00 00      MOVSX EAX,word ptr [ESI + 0x4c7]
00468303  0F BF 8E C5 04 00 00      MOVSX ECX,word ptr [ESI + 0x4c5]
0046830A  52                        PUSH EDX
0046830B  89 9E CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EBX
00468311  C7 86 D5 04 00 00 0A 00 00 00  MOV dword ptr [ESI + 0x4d5],0xa
0046831B  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00468321  50                        PUSH EAX
LAB_00468322:
00468322  51                        PUSH ECX
00468323  8B CE                     MOV ECX,ESI
00468325  E8 41 CC F9 FF            CALL 0x00404f6b
0046832A  53                        PUSH EBX
0046832B  8B CE                     MOV ECX,ESI
0046832D  E8 AC AE F9 FF            CALL 0x004031de
00468332  B8 02 00 00 00            MOV EAX,0x2
00468337  5F                        POP EDI
00468338  5E                        POP ESI
00468339  5B                        POP EBX
0046833A  8B E5                     MOV ESP,EBP
0046833C  5D                        POP EBP
0046833D  C2 04 00                  RET 0x4
LAB_00468340:
00468340  33 FF                     XOR EDI,EDI
00468342  83 F8 01                  CMP EAX,0x1
00468345  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00468348  0F 85 92 00 00 00         JNZ 0x004683e0
0046834E  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
00468354  89 BE BD 04 00 00         MOV dword ptr [ESI + 0x4bd],EDI
0046835A  83 FB FF                  CMP EBX,-0x1
0046835D  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00468360  74 7E                     JZ 0x004683e0
00468362  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
00468369  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00468370  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
00468377  66 3B C7                  CMP AX,DI
0046837A  7C 53                     JL 0x004683cf
0046837C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00468383  66 3B C7                  CMP AX,DI
00468386  7D 47                     JGE 0x004683cf
00468388  66 85 D2                  TEST DX,DX
0046838B  7C 42                     JL 0x004683cf
0046838D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00468394  7D 39                     JGE 0x004683cf
00468396  66 85 C9                  TEST CX,CX
00468399  7C 34                     JL 0x004683cf
0046839B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004683A2  7D 2B                     JGE 0x004683cf
004683A4  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004683AB  0F BF C9                  MOVSX ECX,CX
004683AE  0F BF D2                  MOVSX EDX,DX
004683B1  0F AF CB                  IMUL ECX,EBX
004683B4  0F BF FF                  MOVSX EDI,DI
004683B7  0F AF D7                  IMUL EDX,EDI
004683BA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004683BD  03 CA                     ADD ECX,EDX
004683BF  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004683C5  0F BF C0                  MOVSX EAX,AX
004683C8  03 C8                     ADD ECX,EAX
004683CA  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004683CD  EB 02                     JMP 0x004683d1
LAB_004683cf:
004683CF  33 C0                     XOR EAX,EAX
LAB_004683d1:
004683D1  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
004683D4  74 0A                     JZ 0x004683e0
004683D6  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_004683e0:
004683E0  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
004683E7  0F 85 A6 00 00 00         JNZ 0x00468493
004683ED  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
004683F7  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
004683FD  83 FB FF                  CMP EBX,-0x1
00468400  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00468403  74 7E                     JZ 0x00468483
00468405  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
0046840C  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00468413  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
0046841A  66 85 C0                  TEST AX,AX
0046841D  7C 53                     JL 0x00468472
0046841F  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00468426  66 3B C7                  CMP AX,DI
00468429  7D 47                     JGE 0x00468472
0046842B  66 85 D2                  TEST DX,DX
0046842E  7C 42                     JL 0x00468472
00468430  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00468437  7D 39                     JGE 0x00468472
00468439  66 85 C9                  TEST CX,CX
0046843C  7C 34                     JL 0x00468472
0046843E  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00468445  7D 2B                     JGE 0x00468472
00468447  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046844E  0F BF C9                  MOVSX ECX,CX
00468451  0F BF D2                  MOVSX EDX,DX
00468454  0F AF CB                  IMUL ECX,EBX
00468457  0F BF FF                  MOVSX EDI,DI
0046845A  0F AF D7                  IMUL EDX,EDI
0046845D  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00468460  03 CA                     ADD ECX,EDX
00468462  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00468468  0F BF C0                  MOVSX EAX,AX
0046846B  03 C8                     ADD ECX,EAX
0046846D  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00468470  EB 02                     JMP 0x00468474
LAB_00468472:
00468472  33 C0                     XOR EAX,EAX
LAB_00468474:
00468474  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00468477  74 0A                     JZ 0x00468483
00468479  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_00468483:
00468483  8B 86 AB 04 00 00         MOV EAX,dword ptr [ESI + 0x4ab]
00468489  BF 01 00 00 00            MOV EDI,0x1
0046848E  83 F8 FF                  CMP EAX,-0x1
00468491  75 03                     JNZ 0x00468496
LAB_00468493:
00468493  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_00468496:
00468496  8B CE                     MOV ECX,ESI
00468498  E8 E7 AC F9 FF            CALL 0x00403184
0046849D  33 DB                     XOR EBX,EBX
0046849F  3B C3                     CMP EAX,EBX
004684A1  75 0C                     JNZ 0x004684af
004684A3  8B CE                     MOV ECX,ESI
004684A5  E8 AB B3 F9 FF            CALL 0x00403855
004684AA  E9 C3 14 00 00            JMP 0x00469972
LAB_004684af:
004684AF  83 F8 07                  CMP EAX,0x7
004684B2  75 64                     JNZ 0x00468518
004684B4  8B 86 AB 04 00 00         MOV EAX,dword ptr [ESI + 0x4ab]
004684BA  83 F8 FF                  CMP EAX,-0x1
004684BD  0F 84 BF D9 FF FF         JZ 0x00465e82
004684C3  3B FB                     CMP EDI,EBX
004684C5  0F 84 B7 D9 FF FF         JZ 0x00465e82
004684CB  83 F8 FF                  CMP EAX,-0x1
004684CE  0F 84 AE D9 FF FF         JZ 0x00465e82
004684D4  83 FF 01                  CMP EDI,0x1
004684D7  0F 85 55 D9 FF FF         JNZ 0x00465e32
004684DD  0F BF 86 A9 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a9]
004684E4  0F BF 8E A7 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a7]
004684EB  0F BF 96 A5 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a5]
004684F2  40                        INC EAX
004684F3  C7 86 CD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4cd],0x0
004684FD  50                        PUSH EAX
004684FE  51                        PUSH ECX
004684FF  52                        PUSH EDX
00468500  8B CE                     MOV ECX,ESI
00468502  C7 86 D5 04 00 00 07 00 00 00  MOV dword ptr [ESI + 0x4d5],0x7
0046850C  E8 5A CA F9 FF            CALL 0x00404f6b
00468511  6A 00                     PUSH 0x0
00468513  E9 63 D9 FF FF            JMP 0x00465e7b
LAB_00468518:
00468518  0F BF 86 9F 04 00 00      MOVSX EAX,word ptr [ESI + 0x49f]
0046851F  0F BF 8E 9D 04 00 00      MOVSX ECX,word ptr [ESI + 0x49d]
00468526  0F BF 96 9B 04 00 00      MOVSX EDX,word ptr [ESI + 0x49b]
0046852D  40                        INC EAX
0046852E  89 9E CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EBX
00468534  50                        PUSH EAX
00468535  51                        PUSH ECX
00468536  52                        PUSH EDX
00468537  8B CE                     MOV ECX,ESI
00468539  C7 86 D5 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d5],0x1
00468543  E8 23 CA F9 FF            CALL 0x00404f6b
00468548  53                        PUSH EBX
00468549  E9 2D D9 FF FF            JMP 0x00465e7b
LAB_0046854e:
0046854E  83 F8 0A                  CMP EAX,0xa
00468551  0F 85 15 07 00 00         JNZ 0x00468c6c
00468557  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
0046855D  3B C3                     CMP EAX,EBX
0046855F  0F 8E 14 02 00 00         JLE 0x00468779
00468565  40                        INC EAX
00468566  83 F8 02                  CMP EAX,0x2
00468569  89 86 CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EAX
0046856F  75 1C                     JNZ 0x0046858d
00468571  53                        PUSH EBX
00468572  8B CE                     MOV ECX,ESI
00468574  E8 B2 B4 F9 FF            CALL 0x00403a2b
00468579  83 F8 FF                  CMP EAX,-0x1
0046857C  0F 85 B0 D8 FF FF         JNZ 0x00465e32
00468582  0B C0                     OR EAX,EAX
00468584  5F                        POP EDI
00468585  5E                        POP ESI
00468586  5B                        POP EBX
00468587  8B E5                     MOV ESP,EBP
00468589  5D                        POP EBP
0046858A  C2 04 00                  RET 0x4
LAB_0046858d:
0046858D  6A 02                     PUSH 0x2
0046858F  8B CE                     MOV ECX,ESI
00468591  E8 95 B4 F9 FF            CALL 0x00403a2b
00468596  83 F8 FF                  CMP EAX,-0x1
00468599  75 0B                     JNZ 0x004685a6
0046859B  0B C0                     OR EAX,EAX
0046859D  5F                        POP EDI
0046859E  5E                        POP ESI
0046859F  5B                        POP EBX
004685A0  8B E5                     MOV ESP,EBP
004685A2  5D                        POP EBP
004685A3  C2 04 00                  RET 0x4
LAB_004685a6:
004685A6  39 9E 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EBX
004685AC  0F 85 80 D8 FF FF         JNZ 0x00465e32
004685B2  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
004685B8  83 F8 01                  CMP EAX,0x1
004685BB  74 16                     JZ 0x004685d3
004685BD  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
004685C4  0F 85 68 D8 FF FF         JNZ 0x00465e32
004685CA  83 F8 01                  CMP EAX,0x1
004685CD  0F 85 96 00 00 00         JNZ 0x00468669
LAB_004685d3:
004685D3  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
004685D9  C7 86 BD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4bd],0x0
004685E3  83 FB FF                  CMP EBX,-0x1
004685E6  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
004685E9  74 7E                     JZ 0x00468669
004685EB  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
004685F2  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
004685F9  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
00468600  66 85 C0                  TEST AX,AX
00468603  7C 53                     JL 0x00468658
00468605  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046860C  66 3B C7                  CMP AX,DI
0046860F  7D 47                     JGE 0x00468658
00468611  66 85 D2                  TEST DX,DX
00468614  7C 42                     JL 0x00468658
00468616  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046861D  7D 39                     JGE 0x00468658
0046861F  66 85 C9                  TEST CX,CX
00468622  7C 34                     JL 0x00468658
00468624  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046862B  7D 2B                     JGE 0x00468658
0046862D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00468634  0F BF C9                  MOVSX ECX,CX
00468637  0F BF D2                  MOVSX EDX,DX
0046863A  0F AF CB                  IMUL ECX,EBX
0046863D  0F BF FF                  MOVSX EDI,DI
00468640  0F AF D7                  IMUL EDX,EDI
00468643  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00468646  03 CA                     ADD ECX,EDX
00468648  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046864E  0F BF C0                  MOVSX EAX,AX
00468651  03 C8                     ADD ECX,EAX
00468653  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00468656  EB 02                     JMP 0x0046865a
LAB_00468658:
00468658  33 C0                     XOR EAX,EAX
LAB_0046865a:
0046865A  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
0046865D  74 0A                     JZ 0x00468669
0046865F  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_00468669:
00468669  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00468670  0F 85 96 00 00 00         JNZ 0x0046870c
00468676  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
00468680  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00468686  83 FB FF                  CMP EBX,-0x1
00468689  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0046868C  74 7E                     JZ 0x0046870c
0046868E  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00468695  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
0046869C  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
004686A3  66 85 C0                  TEST AX,AX
004686A6  7C 53                     JL 0x004686fb
004686A8  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004686AF  66 3B C7                  CMP AX,DI
004686B2  7D 47                     JGE 0x004686fb
004686B4  66 85 D2                  TEST DX,DX
004686B7  7C 42                     JL 0x004686fb
004686B9  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004686C0  7D 39                     JGE 0x004686fb
004686C2  66 85 C9                  TEST CX,CX
004686C5  7C 34                     JL 0x004686fb
004686C7  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004686CE  7D 2B                     JGE 0x004686fb
004686D0  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004686D7  0F BF C9                  MOVSX ECX,CX
004686DA  0F BF D2                  MOVSX EDX,DX
004686DD  0F AF CB                  IMUL ECX,EBX
004686E0  0F BF FF                  MOVSX EDI,DI
004686E3  0F AF D7                  IMUL EDX,EDI
004686E6  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004686E9  03 CA                     ADD ECX,EDX
004686EB  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004686F1  0F BF C0                  MOVSX EAX,AX
004686F4  03 C8                     ADD ECX,EAX
004686F6  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004686F9  EB 02                     JMP 0x004686fd
LAB_004686fb:
004686FB  33 C0                     XOR EAX,EAX
LAB_004686fd:
004686FD  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00468700  74 0A                     JZ 0x0046870c
00468702  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_0046870c:
0046870C  8B CE                     MOV ECX,ESI
0046870E  E8 71 AA F9 FF            CALL 0x00403184
00468713  33 FF                     XOR EDI,EDI
00468715  3B C7                     CMP EAX,EDI
00468717  75 13                     JNZ 0x0046872c
00468719  8B CE                     MOV ECX,ESI
0046871B  E8 35 B1 F9 FF            CALL 0x00403855
00468720  89 BE D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EDI
00468726  57                        PUSH EDI
00468727  E9 4D 12 00 00            JMP 0x00469979
LAB_0046872c:
0046872C  83 F8 07                  CMP EAX,0x7
0046872F  0F 85 0B D7 FF FF         JNZ 0x00465e40
00468735  83 BE AB 04 00 00 FF      CMP dword ptr [ESI + 0x4ab],-0x1
0046873C  0F 84 40 D7 FF FF         JZ 0x00465e82
STBoatC::LoadRC::cf_common_exit_00468742:
00468742  89 BE CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDI
00468748  C7 86 D5 04 00 00 07 00 00 00  MOV dword ptr [ESI + 0x4d5],0x7
00468752  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
STBoatC::LoadRC::cf_common_exit_0046875C:
0046875C  0F BF 86 A9 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a9]
00468763  0F BF 8E A7 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a7]
0046876A  0F BF 96 A5 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a5]
00468771  40                        INC EAX
00468772  50                        PUSH EAX
00468773  51                        PUSH ECX
00468774  E9 F9 D6 FF FF            JMP 0x00465e72
LAB_00468779:
00468779  6A 02                     PUSH 0x2
0046877B  8B CE                     MOV ECX,ESI
0046877D  E8 5C AA F9 FF            CALL 0x004031de
00468782  40                        INC EAX
00468783  83 F8 04                  CMP EAX,0x4
00468786  0F 87 C4 04 00 00         JA 0x00468c50
switchD_0046878c::switchD:
0046878C  FF 24 85 80 9A 46 00      JMP dword ptr [EAX*0x4 + 0x469a80]
switchD_0046878c::caseD_ffffffff:
00468793  68 54 A3 7A 00            PUSH 0x7aa354
00468798  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046879D  53                        PUSH EBX
0046879E  53                        PUSH EBX
0046879F  68 26 21 00 00            PUSH 0x2126
004687A4  68 3C 9D 7A 00            PUSH 0x7a9d3c
004687A9  E8 22 4D 24 00            CALL 0x006ad4d0
004687AE  83 C4 18                  ADD ESP,0x18
004687B1  85 C0                     TEST EAX,EAX
004687B3  74 01                     JZ 0x004687b6
004687B5  CC                        INT3
LAB_004687b6:
004687B6  68 26 21 00 00            PUSH 0x2126
004687BB  E9 1E D9 FF FF            JMP 0x004660de
switchD_0046878c::caseD_0:
004687C0  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
004687C4  66 3B 8E C5 04 00 00      CMP CX,word ptr [ESI + 0x4c5]
004687CB  75 46                     JNZ 0x00468813
004687CD  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
004687D1  66 3B 96 C7 04 00 00      CMP DX,word ptr [ESI + 0x4c7]
004687D8  75 39                     JNZ 0x00468813
004687DA  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
004687DE  66 3B 86 C9 04 00 00      CMP AX,word ptr [ESI + 0x4c9]
004687E5  75 2C                     JNZ 0x00468813
004687E7  8B 06                     MOV EAX,dword ptr [ESI]
004687E9  8B CE                     MOV ECX,ESI
004687EB  C7 86 D5 04 00 00 0B 00 00 00  MOV dword ptr [ESI + 0x4d5],0xb
004687F5  89 9E D9 04 00 00         MOV dword ptr [ESI + 0x4d9],EBX
004687FB  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00468801  F7 D8                     NEG EAX
00468803  1B C0                     SBB EAX,EAX
00468805  24 FD                     AND AL,0xfd
00468807  83 C0 02                  ADD EAX,0x2
0046880A  5F                        POP EDI
0046880B  5E                        POP ESI
0046880C  5B                        POP EBX
0046880D  8B E5                     MOV ESP,EBP
0046880F  5D                        POP EBP
00468810  C2 04 00                  RET 0x4
LAB_00468813:
00468813  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
0046881A  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00468821  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00468828  66 3B C3                  CMP AX,BX
0046882B  7C 68                     JL 0x00468895
0046882D  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00468834  66 3B C7                  CMP AX,DI
00468837  7D 5C                     JGE 0x00468895
00468839  66 3B D3                  CMP DX,BX
0046883C  7C 57                     JL 0x00468895
0046883E  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00468845  7D 4E                     JGE 0x00468895
00468847  66 3B CB                  CMP CX,BX
0046884A  7C 49                     JL 0x00468895
0046884C  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00468853  7D 40                     JGE 0x00468895
00468855  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046885C  0F BF C9                  MOVSX ECX,CX
0046885F  0F BF D2                  MOVSX EDX,DX
00468862  0F AF CB                  IMUL ECX,EBX
00468865  0F BF FF                  MOVSX EDI,DI
00468868  0F AF D7                  IMUL EDX,EDI
0046886B  0F BF C0                  MOVSX EAX,AX
0046886E  03 CA                     ADD ECX,EDX
00468870  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00468876  03 C8                     ADD ECX,EAX
00468878  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0046887B  85 C9                     TEST ECX,ECX
0046887D  74 16                     JZ 0x00468895
0046887F  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00468882  8B 96 AB 04 00 00         MOV EDX,dword ptr [ESI + 0x4ab]
00468888  3B C2                     CMP EAX,EDX
0046888A  75 09                     JNZ 0x00468895
0046888C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0046888F  52                        PUSH EDX
00468890  E8 35 A4 F9 FF            CALL 0x00402cca
LAB_00468895:
00468895  33 C0                     XOR EAX,EAX
00468897  5F                        POP EDI
00468898  5E                        POP ESI
00468899  5B                        POP EBX
0046889A  8B E5                     MOV ESP,EBP
0046889C  5D                        POP EBP
0046889D  C2 04 00                  RET 0x4
switchD_0046878c::caseD_3:
004688A0  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
004688A7  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
004688AE  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
004688B5  66 3B C3                  CMP AX,BX
004688B8  7C 5C                     JL 0x00468916
004688BA  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004688C1  66 3B C7                  CMP AX,DI
004688C4  7D 50                     JGE 0x00468916
004688C6  66 3B D3                  CMP DX,BX
004688C9  7C 4B                     JL 0x00468916
004688CB  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004688D2  7D 42                     JGE 0x00468916
004688D4  66 3B CB                  CMP CX,BX
004688D7  7C 3D                     JL 0x00468916
004688D9  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004688E0  7D 34                     JGE 0x00468916
004688E2  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004688E9  0F BF C9                  MOVSX ECX,CX
004688EC  0F BF D2                  MOVSX EDX,DX
004688EF  0F AF CB                  IMUL ECX,EBX
004688F2  0F BF FF                  MOVSX EDI,DI
004688F5  0F AF D7                  IMUL EDX,EDI
004688F8  0F BF C0                  MOVSX EAX,AX
004688FB  03 CA                     ADD ECX,EDX
004688FD  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00468903  03 C8                     ADD ECX,EAX
00468905  33 DB                     XOR EBX,EBX
00468907  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
0046890A  3B C3                     CMP EAX,EBX
0046890C  74 08                     JZ 0x00468916
0046890E  50                        PUSH EAX
0046890F  8B CE                     MOV ECX,ESI
00468911  E8 89 9C F9 FF            CALL 0x0040259f
LAB_00468916:
00468916  0F BF 86 C9 04 00 00      MOVSX EAX,word ptr [ESI + 0x4c9]
0046891D  0F BF 8E C7 04 00 00      MOVSX ECX,word ptr [ESI + 0x4c7]
00468924  0F BF 96 C5 04 00 00      MOVSX EDX,word ptr [ESI + 0x4c5]
0046892B  50                        PUSH EAX
0046892C  51                        PUSH ECX
0046892D  52                        PUSH EDX
0046892E  8B CE                     MOV ECX,ESI
00468930  E8 36 C6 F9 FF            CALL 0x00404f6b
00468935  53                        PUSH EBX
00468936  E9 0E 03 00 00            JMP 0x00468c49
switchD_0046878c::caseD_1:
0046893B  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
00468941  83 F8 01                  CMP EAX,0x1
00468944  74 0F                     JZ 0x00468955
00468946  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
0046894D  0F 85 16 02 00 00         JNZ 0x00468b69
00468953  33 DB                     XOR EBX,EBX
LAB_00468955:
00468955  83 F8 01                  CMP EAX,0x1
00468958  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0046895B  0F 85 96 00 00 00         JNZ 0x004689f7
00468961  8B 9E A1 04 00 00         MOV EBX,dword ptr [ESI + 0x4a1]
00468967  C7 86 BD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4bd],0x0
00468971  83 FB FF                  CMP EBX,-0x1
00468974  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00468977  74 7E                     JZ 0x004689f7
00468979  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
00468980  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
00468987  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
0046898E  66 85 C0                  TEST AX,AX
00468991  7C 53                     JL 0x004689e6
00468993  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046899A  66 3B C7                  CMP AX,DI
0046899D  7D 47                     JGE 0x004689e6
0046899F  66 85 D2                  TEST DX,DX
004689A2  7C 42                     JL 0x004689e6
004689A4  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004689AB  7D 39                     JGE 0x004689e6
004689AD  66 85 C9                  TEST CX,CX
004689B0  7C 34                     JL 0x004689e6
004689B2  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004689B9  7D 2B                     JGE 0x004689e6
004689BB  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004689C2  0F BF C9                  MOVSX ECX,CX
004689C5  0F BF D2                  MOVSX EDX,DX
004689C8  0F AF CB                  IMUL ECX,EBX
004689CB  0F BF FF                  MOVSX EDI,DI
004689CE  0F AF D7                  IMUL EDX,EDI
004689D1  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004689D4  03 CA                     ADD ECX,EDX
004689D6  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004689DC  0F BF C0                  MOVSX EAX,AX
004689DF  03 C8                     ADD ECX,EAX
004689E1  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004689E4  EB 02                     JMP 0x004689e8
LAB_004689e6:
004689E6  33 C0                     XOR EAX,EAX
LAB_004689e8:
004689E8  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
004689EB  74 0A                     JZ 0x004689f7
004689ED  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_004689f7:
004689F7  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
004689FE  0F 85 A6 00 00 00         JNZ 0x00468aaa
00468A04  C7 86 C1 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c1],0x0
00468A0E  8B 9E AB 04 00 00         MOV EBX,dword ptr [ESI + 0x4ab]
00468A14  83 FB FF                  CMP EBX,-0x1
00468A17  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00468A1A  74 7E                     JZ 0x00468a9a
00468A1C  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00468A23  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00468A2A  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00468A31  66 85 C0                  TEST AX,AX
00468A34  7C 53                     JL 0x00468a89
00468A36  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00468A3D  66 3B C7                  CMP AX,DI
00468A40  7D 47                     JGE 0x00468a89
00468A42  66 85 D2                  TEST DX,DX
00468A45  7C 42                     JL 0x00468a89
00468A47  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00468A4E  7D 39                     JGE 0x00468a89
00468A50  66 85 C9                  TEST CX,CX
00468A53  7C 34                     JL 0x00468a89
00468A55  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00468A5C  7D 2B                     JGE 0x00468a89
00468A5E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00468A65  0F BF C9                  MOVSX ECX,CX
00468A68  0F BF D2                  MOVSX EDX,DX
00468A6B  0F AF CB                  IMUL ECX,EBX
00468A6E  0F BF FF                  MOVSX EDI,DI
00468A71  0F AF D7                  IMUL EDX,EDI
00468A74  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00468A77  03 CA                     ADD ECX,EDX
00468A79  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00468A7F  0F BF C0                  MOVSX EAX,AX
00468A82  03 C8                     ADD ECX,EAX
00468A84  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00468A87  EB 02                     JMP 0x00468a8b
LAB_00468a89:
00468A89  33 C0                     XOR EAX,EAX
LAB_00468a8b:
00468A8B  39 58 18                  CMP dword ptr [EAX + 0x18],EBX
00468A8E  74 0A                     JZ 0x00468a9a
00468A90  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_00468a9a:
00468A9A  83 BE AB 04 00 00 FF      CMP dword ptr [ESI + 0x4ab],-0x1
00468AA1  74 07                     JZ 0x00468aaa
00468AA3  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00468aaa:
00468AAA  8B CE                     MOV ECX,ESI
00468AAC  E8 D3 A6 F9 FF            CALL 0x00403184
00468AB1  33 FF                     XOR EDI,EDI
00468AB3  3B C7                     CMP EAX,EDI
00468AB5  75 13                     JNZ 0x00468aca
00468AB7  8B CE                     MOV ECX,ESI
00468AB9  E8 97 AD F9 FF            CALL 0x00403855
00468ABE  89 BE D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EDI
00468AC4  57                        PUSH EDI
00468AC5  E9 AF 0E 00 00            JMP 0x00469979
LAB_00468aca:
00468ACA  83 F8 07                  CMP EAX,0x7
00468ACD  0F 85 34 01 00 00         JNZ 0x00468c07
00468AD3  83 BE AB 04 00 00 FF      CMP dword ptr [ESI + 0x4ab],-0x1
00468ADA  74 09                     JZ 0x00468ae5
00468ADC  39 7D F8                  CMP dword ptr [EBP + -0x8],EDI
00468ADF  0F 84 6B 01 00 00         JZ 0x00468c50
LAB_00468ae5:
00468AE5  8B CE                     MOV ECX,ESI
00468AE7  E8 69 AD F9 FF            CALL 0x00403855
00468AEC  83 BE AB 04 00 00 FF      CMP dword ptr [ESI + 0x4ab],-0x1
00468AF3  75 29                     JNZ 0x00468b1e
00468AF5  8B 86 CD 04 00 00         MOV EAX,dword ptr [ESI + 0x4cd]
00468AFB  8B CE                     MOV ECX,ESI
00468AFD  40                        INC EAX
00468AFE  89 86 CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EAX
00468B04  8B 06                     MOV EAX,dword ptr [ESI]
00468B06  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00468B0C  F7 D8                     NEG EAX
00468B0E  1B C0                     SBB EAX,EAX
00468B10  24 FD                     AND AL,0xfd
00468B12  83 C0 02                  ADD EAX,0x2
00468B15  5F                        POP EDI
00468B16  5E                        POP ESI
00468B17  5B                        POP EBX
00468B18  8B E5                     MOV ESP,EBP
00468B1A  5D                        POP EBP
00468B1B  C2 04 00                  RET 0x4
LAB_00468b1e:
00468B1E  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
00468B22  75 45                     JNZ 0x00468b69
00468B24  C7 86 CD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4cd],0x0
00468B2E  C7 86 D5 04 00 00 07 00 00 00  MOV dword ptr [ESI + 0x4d5],0x7
LAB_00468b38:
00468B38  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
LAB_00468b42:
00468B42  0F BF 86 A9 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a9]
00468B49  0F BF 8E A7 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a7]
00468B50  0F BF 96 A5 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a5]
00468B57  40                        INC EAX
00468B58  50                        PUSH EAX
00468B59  51                        PUSH ECX
00468B5A  52                        PUSH EDX
00468B5B  8B CE                     MOV ECX,ESI
00468B5D  E8 09 C4 F9 FF            CALL 0x00404f6b
00468B62  6A 00                     PUSH 0x0
00468B64  E9 E0 00 00 00            JMP 0x00468c49
LAB_00468b69:
00468B69  8B CE                     MOV ECX,ESI
00468B6B  E8 E5 AC F9 FF            CALL 0x00403855
00468B70  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00468B77  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00468B7E  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00468B85  66 85 C0                  TEST AX,AX
00468B88  7C 5A                     JL 0x00468be4
00468B8A  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00468B91  66 3B C7                  CMP AX,DI
00468B94  7D 4E                     JGE 0x00468be4
00468B96  66 85 D2                  TEST DX,DX
00468B99  7C 49                     JL 0x00468be4
00468B9B  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00468BA2  7D 40                     JGE 0x00468be4
00468BA4  66 85 C9                  TEST CX,CX
00468BA7  7C 3B                     JL 0x00468be4
00468BA9  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00468BB0  7D 32                     JGE 0x00468be4
00468BB2  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00468BB9  0F BF C9                  MOVSX ECX,CX
00468BBC  0F BF D2                  MOVSX EDX,DX
00468BBF  0F AF CB                  IMUL ECX,EBX
00468BC2  0F BF FF                  MOVSX EDI,DI
00468BC5  0F AF D7                  IMUL EDX,EDI
00468BC8  0F BF C0                  MOVSX EAX,AX
00468BCB  03 CA                     ADD ECX,EDX
00468BCD  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00468BD3  03 C8                     ADD ECX,EAX
00468BD5  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00468BD8  85 C0                     TEST EAX,EAX
00468BDA  74 08                     JZ 0x00468be4
00468BDC  50                        PUSH EAX
00468BDD  8B CE                     MOV ECX,ESI
00468BDF  E8 BB 99 F9 FF            CALL 0x0040259f
LAB_00468be4:
00468BE4  0F BF 86 C9 04 00 00      MOVSX EAX,word ptr [ESI + 0x4c9]
00468BEB  0F BF 8E C7 04 00 00      MOVSX ECX,word ptr [ESI + 0x4c7]
00468BF2  0F BF 96 C5 04 00 00      MOVSX EDX,word ptr [ESI + 0x4c5]
00468BF9  50                        PUSH EAX
00468BFA  51                        PUSH ECX
00468BFB  52                        PUSH EDX
00468BFC  8B CE                     MOV ECX,ESI
00468BFE  E8 68 C3 F9 FF            CALL 0x00404f6b
00468C03  6A 00                     PUSH 0x0
00468C05  EB 42                     JMP 0x00468c49
LAB_00468c07:
00468C07  8B CE                     MOV ECX,ESI
00468C09  E8 47 AC F9 FF            CALL 0x00403855
00468C0E  0F BF 86 9F 04 00 00      MOVSX EAX,word ptr [ESI + 0x49f]
00468C15  0F BF 8E 9D 04 00 00      MOVSX ECX,word ptr [ESI + 0x49d]
00468C1C  0F BF 96 9B 04 00 00      MOVSX EDX,word ptr [ESI + 0x49b]
00468C23  40                        INC EAX
00468C24  89 BE CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDI
00468C2A  50                        PUSH EAX
00468C2B  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
00468C35  C7 86 D5 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d5],0x1
00468C3F  51                        PUSH ECX
LAB_00468c40:
00468C40  52                        PUSH EDX
00468C41  8B CE                     MOV ECX,ESI
00468C43  E8 23 C3 F9 FF            CALL 0x00404f6b
00468C48  57                        PUSH EDI
STBoatC::LoadRC::cf_common_exit_00468C49:
00468C49  8B CE                     MOV ECX,ESI
00468C4B  E8 8E A5 F9 FF            CALL 0x004031de
STBoatC::LoadRC::cf_common_exit_00468C50:
00468C50  8B 06                     MOV EAX,dword ptr [ESI]
00468C52  8B CE                     MOV ECX,ESI
00468C54  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00468C5A  F7 D8                     NEG EAX
00468C5C  1B C0                     SBB EAX,EAX
00468C5E  24 FD                     AND AL,0xfd
00468C60  83 C0 02                  ADD EAX,0x2
00468C63  5F                        POP EDI
00468C64  5E                        POP ESI
00468C65  5B                        POP EBX
00468C66  8B E5                     MOV ESP,EBP
00468C68  5D                        POP EBP
00468C69  C2 04 00                  RET 0x4
LAB_00468c6c:
00468C6C  83 F8 0B                  CMP EAX,0xb
00468C6F  0F 85 95 03 00 00         JNZ 0x0046900a
00468C75  39 9E D9 04 00 00         CMP dword ptr [ESI + 0x4d9],EBX
00468C7B  75 5F                     JNZ 0x00468cdc
00468C7D  66 8B 86 A9 04 00 00      MOV AX,word ptr [ESI + 0x4a9]
00468C84  8B 16                     MOV EDX,dword ptr [ESI]
00468C86  66 69 C0 C8 00            IMUL AX,AX,0xc8
00468C8B  05 2C 01 00 00            ADD EAX,0x12c
00468C90  50                        PUSH EAX
00468C91  66 8B 86 A7 04 00 00      MOV AX,word ptr [ESI + 0x4a7]
00468C98  66 40                     INC AX
00468C9A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00468C9D  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00468CA0  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
00468CA3  50                        PUSH EAX
00468CA4  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00468CAB  66 40                     INC AX
00468CAD  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00468CB0  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00468CB3  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
00468CB6  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00468CBA  50                        PUSH EAX
00468CBB  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00468CBF  51                        PUSH ECX
00468CC0  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00468CC4  50                        PUSH EAX
00468CC5  51                        PUSH ECX
00468CC6  8B CE                     MOV ECX,ESI
00468CC8  FF 52 10                  CALL dword ptr [EDX + 0x10]
00468CCB  66 89 86 CB 04 00 00      MOV word ptr [ESI + 0x4cb],AX
00468CD2  C7 86 D9 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d9],0x1
LAB_00468cdc:
00468CDC  83 BE D9 04 00 00 01      CMP dword ptr [ESI + 0x4d9],0x1
00468CE3  75 7F                     JNZ 0x00468d64
00468CE5  66 8B 96 CB 04 00 00      MOV DX,word ptr [ESI + 0x4cb]
00468CEC  8B CE                     MOV ECX,ESI
00468CEE  52                        PUSH EDX
00468CEF  E8 BE A3 F9 FF            CALL 0x004030b2
00468CF4  50                        PUSH EAX
00468CF5  8B CE                     MOV ECX,ESI
00468CF7  E8 00 96 F9 FF            CALL 0x004022fc
00468CFC  83 F8 FF                  CMP EAX,-0x1
00468CFF  74 2A                     JZ 0x00468d2b
00468D01  3B C3                     CMP EAX,EBX
00468D03  75 5F                     JNZ 0x00468d64
00468D05  8B 06                     MOV EAX,dword ptr [ESI]
00468D07  8B CE                     MOV ECX,ESI
00468D09  C7 86 D9 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4d9],0x2
00468D13  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00468D19  F7 D8                     NEG EAX
00468D1B  1B C0                     SBB EAX,EAX
00468D1D  24 FD                     AND AL,0xfd
00468D1F  83 C0 02                  ADD EAX,0x2
00468D22  5F                        POP EDI
00468D23  5E                        POP ESI
00468D24  5B                        POP EBX
00468D25  8B E5                     MOV ESP,EBP
00468D27  5D                        POP EBP
00468D28  C2 04 00                  RET 0x4
LAB_00468d2b:
00468D2B  68 2C A3 7A 00            PUSH 0x7aa32c
00468D30  68 CC 4C 7A 00            PUSH 0x7a4ccc
00468D35  53                        PUSH EBX
00468D36  53                        PUSH EBX
00468D37  68 96 21 00 00            PUSH 0x2196
00468D3C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00468D41  E8 8A 47 24 00            CALL 0x006ad4d0
00468D46  83 C4 18                  ADD ESP,0x18
00468D49  85 C0                     TEST EAX,EAX
00468D4B  74 01                     JZ 0x00468d4e
00468D4D  CC                        INT3
LAB_00468d4e:
00468D4E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00468D54  68 97 21 00 00            PUSH 0x2197
00468D59  68 3C 9D 7A 00            PUSH 0x7a9d3c
00468D5E  51                        PUSH ECX
00468D5F  E9 85 D3 FF FF            JMP 0x004660e9
LAB_00468d64:
00468D64  83 BE D9 04 00 00 02      CMP dword ptr [ESI + 0x4d9],0x2
00468D6B  75 58                     JNZ 0x00468dc5
00468D6D  66 8B 86 A9 04 00 00      MOV AX,word ptr [ESI + 0x4a9]
00468D74  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
00468D77  66 69 C0 C8 00            IMUL AX,AX,0xc8
00468D7C  05 2C 01 00 00            ADD EAX,0x12c
00468D81  52                        PUSH EDX
00468D82  50                        PUSH EAX
00468D83  66 8B 86 A7 04 00 00      MOV AX,word ptr [ESI + 0x4a7]
00468D8A  66 40                     INC AX
00468D8C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00468D8F  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00468D92  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00468D95  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00468D9C  66 40                     INC AX
00468D9E  52                        PUSH EDX
00468D9F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00468DA2  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00468DA5  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00468DA8  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00468DAC  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
00468DB0  52                        PUSH EDX
00468DB1  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
00468DB5  50                        PUSH EAX
00468DB6  51                        PUSH ECX
00468DB7  52                        PUSH EDX
00468DB8  8B CE                     MOV ECX,ESI
00468DBA  E8 96 96 F9 FF            CALL 0x00402455
00468DBF  89 BE D9 04 00 00         MOV dword ptr [ESI + 0x4d9],EDI
LAB_00468dc5:
00468DC5  39 BE D9 04 00 00         CMP dword ptr [ESI + 0x4d9],EDI
00468DCB  0F 85 F8 05 00 00         JNZ 0x004693c9
00468DD1  8D 45 F0                  LEA EAX,[EBP + -0x10]
00468DD4  8D 4D EC                  LEA ECX,[EBP + -0x14]
00468DD7  50                        PUSH EAX
00468DD8  51                        PUSH ECX
00468DD9  8B CE                     MOV ECX,ESI
00468DDB  E8 67 9A F9 FF            CALL 0x00402847
00468DE0  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
00468DE6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00468DE9  84 C9                     TEST CL,CL
00468DEB  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00468DEE  0F 86 A4 01 00 00         JBE 0x00468f98
00468DF4  8D 96 B3 02 00 00         LEA EDX,[ESI + 0x2b3]
00468DFA  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00468dfd:
00468DFD  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
00468E01  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00468E04  50                        PUSH EAX
00468E05  8B 01                     MOV EAX,dword ptr [ECX]
00468E07  83 EC 08                  SUB ESP,0x8
00468E0A  8B D4                     MOV EDX,ESP
00468E0C  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
00468E10  89 02                     MOV dword ptr [EDX],EAX
00468E12  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
00468E16  8D 55 D8                  LEA EDX,[EBP + -0x28]
00468E19  52                        PUSH EDX
00468E1A  8B CE                     MOV ECX,ESI
00468E1C  E8 0B A6 F9 FF            CALL 0x0040342c
00468E21  8B 08                     MOV ECX,dword ptr [EAX]
00468E23  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00468E26  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
00468E2A  A1 2C 73 80 00            MOV EAX,[0x0080732c]
00468E2F  83 F8 01                  CMP EAX,0x1
00468E32  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00468E35  66 89 55 E4               MOV word ptr [EBP + -0x1c],DX
00468E39  0F 85 96 00 00 00         JNZ 0x00468ed5
00468E3F  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00468E45  6A 00                     PUSH 0x0
00468E47  6A 00                     PUSH 0x0
00468E49  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
00468E4F  6A FF                     PUSH -0x1
00468E51  8B CF                     MOV ECX,EDI
00468E53  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
00468E56  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00468E5C  6A 00                     PUSH 0x0
00468E5E  6A 00                     PUSH 0x0
00468E60  8D 99 39 30 00 00         LEA EBX,[ECX + 0x3039]
00468E66  6A 00                     PUSH 0x0
00468E68  8B D3                     MOV EDX,EBX
00468E6A  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
00468E6D  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00468E73  6A 00                     PUSH 0x0
00468E75  6A 00                     PUSH 0x0
00468E77  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00468E7D  6A 00                     PUSH 0x0
00468E7F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00468E82  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00468E85  D9 46 70                  FLD float ptr [ESI + 0x70]
00468E88  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00468E8E  E8 F5 53 2C 00            CALL 0x0072e288
00468E93  0F BF C8                  MOVSX ECX,AX
00468E96  8B C7                     MOV EAX,EDI
00468E98  33 D2                     XOR EDX,EDX
00468E9A  C1 E8 10                  SHR EAX,0x10
00468E9D  BF 07 00 00 00            MOV EDI,0x7
00468EA2  F7 F7                     DIV EDI
00468EA4  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
00468EA8  03 CA                     ADD ECX,EDX
00468EAA  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
00468EAE  03 CA                     ADD ECX,EDX
00468EB0  33 D2                     XOR EDX,EDX
00468EB2  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
00468EB6  8B C3                     MOV EAX,EBX
00468EB8  51                        PUSH ECX
00468EB9  8B CF                     MOV ECX,EDI
00468EBB  C1 E8 10                  SHR EAX,0x10
00468EBE  F7 F1                     DIV ECX
00468EC0  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00468EC4  0F BF 4D E2               MOVSX ECX,word ptr [EBP + -0x1e]
00468EC8  03 D0                     ADD EDX,EAX
00468ECA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00468ECD  2B D1                     SUB EDX,ECX
00468ECF  83 EA 03                  SUB EDX,0x3
00468ED2  52                        PUSH EDX
00468ED3  EB 72                     JMP 0x00468f47
LAB_00468ed5:
00468ED5  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00468EDB  05 39 30 00 00            ADD EAX,0x3039
00468EE0  53                        PUSH EBX
00468EE1  8B C8                     MOV ECX,EAX
00468EE3  53                        PUSH EBX
00468EE4  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00468EEA  81 C1 39 30 00 00         ADD ECX,0x3039
00468EF0  6A FF                     PUSH -0x1
00468EF2  8B D1                     MOV EDX,ECX
00468EF4  53                        PUSH EBX
00468EF5  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00468EFB  53                        PUSH EBX
00468EFC  53                        PUSH EBX
00468EFD  53                        PUSH EBX
00468EFE  53                        PUSH EBX
00468EFF  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00468F02  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
00468F08  53                        PUSH EBX
00468F09  33 D2                     XOR EDX,EDX
00468F0B  C1 E8 10                  SHR EAX,0x10
00468F0E  BB 07 00 00 00            MOV EBX,0x7
00468F13  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
00468F16  F7 F3                     DIV EBX
00468F18  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
00468F1B  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
00468F1F  03 D0                     ADD EDX,EAX
00468F21  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
00468F25  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
00468F29  8B C1                     MOV EAX,ECX
00468F2B  52                        PUSH EDX
00468F2C  33 D2                     XOR EDX,EDX
00468F2E  C1 E8 10                  SHR EAX,0x10
00468F31  8B CB                     MOV ECX,EBX
00468F33  F7 F1                     DIV ECX
00468F35  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00468F39  0F BF 4D E2               MOVSX ECX,word ptr [EBP + -0x1e]
00468F3D  03 D0                     ADD EDX,EAX
00468F3F  8B C7                     MOV EAX,EDI
00468F41  2B D1                     SUB EDX,ECX
00468F43  83 EA 03                  SUB EDX,0x3
00468F46  52                        PUSH EDX
LAB_00468f47:
00468F47  C1 E8 10                  SHR EAX,0x10
00468F4A  33 D2                     XOR EDX,EDX
00468F4C  B9 07 00 00 00            MOV ECX,0x7
00468F51  F7 F1                     DIV ECX
00468F53  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
00468F57  0F BF 4D E0               MOVSX ECX,word ptr [EBP + -0x20]
00468F5B  03 D0                     ADD EDX,EAX
00468F5D  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
00468F61  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00468F67  52                        PUSH EDX
00468F68  6A 07                     PUSH 0x7
00468F6A  6A 02                     PUSH 0x2
00468F6C  6A 01                     PUSH 0x1
00468F6E  E8 C0 84 F9 FF            CALL 0x00401433
00468F73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00468F76  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00468F79  33 C9                     XOR ECX,ECX
00468F7B  33 DB                     XOR EBX,EBX
00468F7D  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
00468F83  40                        INC EAX
00468F84  83 C7 06                  ADD EDI,0x6
00468F87  3B C1                     CMP EAX,ECX
00468F89  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00468F8C  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00468F8F  0F 8C 68 FE FF FF         JL 0x00468dfd
00468F95  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_00468f98:
00468F98  83 F8 FF                  CMP EAX,-0x1
00468F9B  74 34                     JZ 0x00468fd1
00468F9D  3B C3                     CMP EAX,EBX
00468F9F  0F 85 24 04 00 00         JNZ 0x004693c9
00468FA5  8B 06                     MOV EAX,dword ptr [ESI]
00468FA7  8B CE                     MOV ECX,ESI
00468FA9  C7 86 D5 04 00 00 0C 00 00 00  MOV dword ptr [ESI + 0x4d5],0xc
00468FB3  89 9E D9 04 00 00         MOV dword ptr [ESI + 0x4d9],EBX
00468FB9  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00468FBF  F7 D8                     NEG EAX
00468FC1  1B C0                     SBB EAX,EAX
00468FC3  24 FD                     AND AL,0xfd
00468FC5  83 C0 02                  ADD EAX,0x2
00468FC8  5F                        POP EDI
00468FC9  5E                        POP ESI
00468FCA  5B                        POP EBX
00468FCB  8B E5                     MOV ESP,EBP
00468FCD  5D                        POP EBP
00468FCE  C2 04 00                  RET 0x4
LAB_00468fd1:
00468FD1  68 04 A3 7A 00            PUSH 0x7aa304
00468FD6  68 CC 4C 7A 00            PUSH 0x7a4ccc
00468FDB  53                        PUSH EBX
00468FDC  53                        PUSH EBX
00468FDD  68 BC 21 00 00            PUSH 0x21bc
00468FE2  68 3C 9D 7A 00            PUSH 0x7a9d3c
00468FE7  E8 E4 44 24 00            CALL 0x006ad4d0
00468FEC  83 C4 18                  ADD ESP,0x18
00468FEF  85 C0                     TEST EAX,EAX
00468FF1  74 01                     JZ 0x00468ff4
00468FF3  CC                        INT3
LAB_00468ff4:
00468FF4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00468FFA  68 BD 21 00 00            PUSH 0x21bd
00468FFF  68 3C 9D 7A 00            PUSH 0x7a9d3c
00469004  52                        PUSH EDX
00469005  E9 DF D0 FF FF            JMP 0x004660e9
LAB_0046900a:
0046900A  83 F8 0C                  CMP EAX,0xc
0046900D  0F 85 D2 03 00 00         JNZ 0x004693e5
00469013  8B 96 CD 04 00 00         MOV EDX,dword ptr [ESI + 0x4cd]
00469019  8B 86 BD 04 00 00         MOV EAX,dword ptr [ESI + 0x4bd]
0046901F  42                        INC EDX
00469020  83 F8 01                  CMP EAX,0x1
00469023  8B CA                     MOV ECX,EDX
00469025  89 96 CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EDX
0046902B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0046902E  74 0D                     JZ 0x0046903d
00469030  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
00469037  0F 85 71 01 00 00         JNZ 0x004691ae
LAB_0046903d:
0046903D  83 F8 01                  CMP EAX,0x1
00469040  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00469043  0F 85 97 00 00 00         JNZ 0x004690e0
00469049  8B BE A1 04 00 00         MOV EDI,dword ptr [ESI + 0x4a1]
0046904F  89 9E BD 04 00 00         MOV dword ptr [ESI + 0x4bd],EBX
00469055  83 FF FF                  CMP EDI,-0x1
00469058  0F 84 82 00 00 00         JZ 0x004690e0
0046905E  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
00469065  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
0046906C  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
00469073  66 3B C3                  CMP AX,BX
00469076  7C 57                     JL 0x004690cf
00469078  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0046907F  7D 4C                     JGE 0x004690cd
00469081  33 DB                     XOR EBX,EBX
00469083  66 3B D3                  CMP DX,BX
00469086  7C 47                     JL 0x004690cf
00469088  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046908F  7D 3C                     JGE 0x004690cd
00469091  66 3B CB                  CMP CX,BX
00469094  7C 39                     JL 0x004690cf
00469096  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046909D  7D 2E                     JGE 0x004690cd
0046909F  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004690A6  0F BF C9                  MOVSX ECX,CX
004690A9  0F AF CB                  IMUL ECX,EBX
004690AC  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
004690B3  0F BF D2                  MOVSX EDX,DX
004690B6  0F AF D3                  IMUL EDX,EBX
004690B9  0F BF C0                  MOVSX EAX,AX
004690BC  03 CA                     ADD ECX,EDX
004690BE  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004690C4  03 C8                     ADD ECX,EAX
004690C6  33 DB                     XOR EBX,EBX
004690C8  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004690CB  EB 04                     JMP 0x004690d1
LAB_004690cd:
004690CD  33 DB                     XOR EBX,EBX
LAB_004690cf:
004690CF  33 C0                     XOR EAX,EAX
LAB_004690d1:
004690D1  39 78 18                  CMP dword ptr [EAX + 0x18],EDI
004690D4  74 0A                     JZ 0x004690e0
004690D6  C7 86 A1 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4a1],0xffffffff
LAB_004690e0:
004690E0  83 BE C1 04 00 00 01      CMP dword ptr [ESI + 0x4c1],0x1
004690E7  0F 85 AB 00 00 00         JNZ 0x00469198
004690ED  89 9E C1 04 00 00         MOV dword ptr [ESI + 0x4c1],EBX
004690F3  8B BE AB 04 00 00         MOV EDI,dword ptr [ESI + 0x4ab]
004690F9  83 FF FF                  CMP EDI,-0x1
004690FC  0F 84 82 00 00 00         JZ 0x00469184
00469102  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
00469109  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
00469110  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
00469117  66 3B C3                  CMP AX,BX
0046911A  7C 57                     JL 0x00469173
0046911C  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00469123  7D 4C                     JGE 0x00469171
00469125  33 DB                     XOR EBX,EBX
00469127  66 3B D3                  CMP DX,BX
0046912A  7C 47                     JL 0x00469173
0046912C  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00469133  7D 3C                     JGE 0x00469171
00469135  66 3B CB                  CMP CX,BX
00469138  7C 39                     JL 0x00469173
0046913A  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00469141  7D 2E                     JGE 0x00469171
00469143  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0046914A  0F BF C9                  MOVSX ECX,CX
0046914D  0F AF CB                  IMUL ECX,EBX
00469150  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
00469157  0F BF D2                  MOVSX EDX,DX
0046915A  0F AF D3                  IMUL EDX,EBX
0046915D  0F BF C0                  MOVSX EAX,AX
00469160  03 CA                     ADD ECX,EDX
00469162  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00469168  03 C8                     ADD ECX,EAX
0046916A  33 DB                     XOR EBX,EBX
0046916C  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
0046916F  EB 04                     JMP 0x00469175
LAB_00469171:
00469171  33 DB                     XOR EBX,EBX
LAB_00469173:
00469173  33 C0                     XOR EAX,EAX
LAB_00469175:
00469175  39 78 18                  CMP dword ptr [EAX + 0x18],EDI
00469178  74 0A                     JZ 0x00469184
0046917A  C7 86 AB 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ab],0xffffffff
LAB_00469184:
00469184  83 BE AB 04 00 00 FF      CMP dword ptr [ESI + 0x4ab],-0x1
0046918B  0F 84 1E 02 00 00         JZ 0x004693af
00469191  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00469198:
00469198  83 BE AB 04 00 00 FF      CMP dword ptr [ESI + 0x4ab],-0x1
0046919F  0F 84 0A 02 00 00         JZ 0x004693af
004691A5  39 5D F8                  CMP dword ptr [EBP + -0x8],EBX
004691A8  0F 85 01 02 00 00         JNZ 0x004693af
LAB_004691ae:
004691AE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004691B1  B9 0A 00 00 00            MOV ECX,0xa
004691B6  99                        CDQ
004691B7  F7 F9                     IDIV ECX
004691B9  83 FA 01                  CMP EDX,0x1
004691BC  0F 85 27 08 00 00         JNZ 0x004699e9
004691C2  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
004691C9  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
004691D0  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
004691D7  66 85 C0                  TEST AX,AX
004691DA  0F 8C A5 01 00 00         JL 0x00469385
004691E0  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004691E7  66 3B C7                  CMP AX,DI
004691EA  0F 8D 95 01 00 00         JGE 0x00469385
004691F0  66 85 D2                  TEST DX,DX
004691F3  0F 8C 8C 01 00 00         JL 0x00469385
004691F9  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00469200  0F 8D 7F 01 00 00         JGE 0x00469385
00469206  66 85 C9                  TEST CX,CX
00469209  0F 8C 76 01 00 00         JL 0x00469385
0046920F  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00469216  0F 8D 69 01 00 00         JGE 0x00469385
0046921C  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00469223  0F BF C9                  MOVSX ECX,CX
00469226  0F BF D2                  MOVSX EDX,DX
00469229  0F AF CB                  IMUL ECX,EBX
0046922C  0F BF FF                  MOVSX EDI,DI
0046922F  0F AF D7                  IMUL EDX,EDI
00469232  0F BF C0                  MOVSX EAX,AX
00469235  03 CA                     ADD ECX,EDX
00469237  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0046923D  03 C8                     ADD ECX,EAX
0046923F  8B 1C CA                  MOV EBX,dword ptr [EDX + ECX*0x8]
00469242  85 DB                     TEST EBX,EBX
00469244  0F 84 3B 01 00 00         JZ 0x00469385
0046924A  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0046924D  8B 8E AB 04 00 00         MOV ECX,dword ptr [ESI + 0x4ab]
00469253  3B C1                     CMP EAX,ECX
00469255  0F 85 2A 01 00 00         JNZ 0x00469385
0046925B  8B 83 B4 04 00 00         MOV EAX,dword ptr [EBX + 0x4b4]
00469261  85 C0                     TEST EAX,EAX
00469263  0F 85 1C 01 00 00         JNZ 0x00469385
00469269  83 BB 45 02 00 00 06      CMP dword ptr [EBX + 0x245],0x6
00469270  0F 84 0F 01 00 00         JZ 0x00469385
00469276  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00469279  B9 78 00 00 00            MOV ECX,0x78
0046927E  99                        CDQ
0046927F  F7 F9                     IDIV ECX
00469281  83 FA 01                  CMP EDX,0x1
00469284  75 42                     JNZ 0x004692c8
00469286  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0046928C  83 F8 08                  CMP EAX,0x8
0046928F  74 26                     JZ 0x004692b7
00469291  83 F8 14                  CMP EAX,0x14
00469294  74 0E                     JZ 0x004692a4
00469296  83 F8 1A                  CMP EAX,0x1a
00469299  75 2D                     JNZ 0x004692c8
0046929B  8B 16                     MOV EDX,dword ptr [ESI]
0046929D  68 9E 01 00 00            PUSH 0x19e
004692A2  EB 1A                     JMP 0x004692be
LAB_004692a4:
004692A4  8B 06                     MOV EAX,dword ptr [ESI]
004692A6  68 5F 01 00 00            PUSH 0x15f
004692AB  6A 03                     PUSH 0x3
004692AD  8B CE                     MOV ECX,ESI
004692AF  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004692B5  EB 11                     JMP 0x004692c8
LAB_004692b7:
004692B7  8B 16                     MOV EDX,dword ptr [ESI]
004692B9  68 FB 00 00 00            PUSH 0xfb
LAB_004692be:
004692BE  6A 03                     PUSH 0x3
004692C0  8B CE                     MOV ECX,ESI
004692C2  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004692c8:
004692C8  8B 86 D2 07 00 00         MOV EAX,dword ptr [ESI + 0x7d2]
004692CE  BF 01 00 00 00            MOV EDI,0x1
004692D3  85 C0                     TEST EAX,EAX
004692D5  7E 29                     JLE 0x00469300
004692D7  3B C7                     CMP EAX,EDI
004692D9  7D 02                     JGE 0x004692dd
004692DB  8B F8                     MOV EDI,EAX
LAB_004692dd:
004692DD  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
004692E0  8B CB                     MOV ECX,EBX
004692E2  50                        PUSH EAX
004692E3  68 DC 00 00 00            PUSH 0xdc
004692E8  E8 D3 CB F9 FF            CALL 0x00405ec0
004692ED  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004692F0  51                        PUSH ECX
004692F1  8B CB                     MOV ECX,EBX
004692F3  E8 74 98 F9 FF            CALL 0x00402b6c
004692F8  29 BE D2 07 00 00         SUB dword ptr [ESI + 0x7d2],EDI
004692FE  EB 69                     JMP 0x00469369
LAB_00469300:
00469300  8B 86 D6 07 00 00         MOV EAX,dword ptr [ESI + 0x7d6]
00469306  85 C0                     TEST EAX,EAX
00469308  7E 2A                     JLE 0x00469334
0046930A  83 F8 01                  CMP EAX,0x1
0046930D  7D 02                     JGE 0x00469311
0046930F  8B F8                     MOV EDI,EAX
LAB_00469311:
00469311  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
00469314  8B CB                     MOV ECX,EBX
00469316  52                        PUSH EDX
00469317  68 DD 00 00 00            PUSH 0xdd
0046931C  E8 9F CB F9 FF            CALL 0x00405ec0
00469321  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00469324  8B CB                     MOV ECX,EBX
00469326  50                        PUSH EAX
00469327  E8 40 98 F9 FF            CALL 0x00402b6c
0046932C  29 BE D6 07 00 00         SUB dword ptr [ESI + 0x7d6],EDI
00469332  EB 35                     JMP 0x00469369
LAB_00469334:
00469334  8B 86 DA 07 00 00         MOV EAX,dword ptr [ESI + 0x7da]
0046933A  85 C0                     TEST EAX,EAX
0046933C  7E 2B                     JLE 0x00469369
0046933E  83 F8 01                  CMP EAX,0x1
00469341  7D 02                     JGE 0x00469345
00469343  8B F8                     MOV EDI,EAX
LAB_00469345:
00469345  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
00469348  C1 E1 02                  SHL ECX,0x2
0046934B  51                        PUSH ECX
0046934C  68 DE 00 00 00            PUSH 0xde
00469351  8B CB                     MOV ECX,EBX
00469353  E8 68 CB F9 FF            CALL 0x00405ec0
00469358  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0046935B  8B CB                     MOV ECX,EBX
0046935D  52                        PUSH EDX
0046935E  E8 09 98 F9 FF            CALL 0x00402b6c
00469363  29 BE DA 07 00 00         SUB dword ptr [ESI + 0x7da],EDI
LAB_00469369:
00469369  8B 86 DA 07 00 00         MOV EAX,dword ptr [ESI + 0x7da]
0046936F  8B 96 D6 07 00 00         MOV EDX,dword ptr [ESI + 0x7d6]
00469375  8B 8E D2 07 00 00         MOV ECX,dword ptr [ESI + 0x7d2]
0046937B  03 C2                     ADD EAX,EDX
0046937D  03 C1                     ADD EAX,ECX
0046937F  0F 85 64 06 00 00         JNZ 0x004699e9
LAB_00469385:
00469385  8B CE                     MOV ECX,ESI
00469387  E8 7F A8 F9 FF            CALL 0x00403c0b
0046938C  C7 86 CD 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4cd],0x0
00469396  C7 86 D5 04 00 00 0D 00 00 00  MOV dword ptr [ESI + 0x4d5],0xd
004693A0  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
004693AA  E9 3A 06 00 00            JMP 0x004699e9
LAB_004693af:
004693AF  89 9E CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EBX
004693B5  C7 86 D5 04 00 00 0D 00 00 00  MOV dword ptr [ESI + 0x4d5],0xd
004693BF  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
STBoatC::LoadRC::cf_common_exit_004693C9:
004693C9  8B 06                     MOV EAX,dword ptr [ESI]
004693CB  8B CE                     MOV ECX,ESI
004693CD  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004693D3  F7 D8                     NEG EAX
004693D5  1B C0                     SBB EAX,EAX
004693D7  24 FD                     AND AL,0xfd
004693D9  83 C0 02                  ADD EAX,0x2
004693DC  5F                        POP EDI
004693DD  5E                        POP ESI
004693DE  5B                        POP EBX
004693DF  8B E5                     MOV ESP,EBP
004693E1  5D                        POP EBP
004693E2  C2 04 00                  RET 0x4
LAB_004693e5:
004693E5  83 F8 0D                  CMP EAX,0xd
004693E8  0F 85 02 04 00 00         JNZ 0x004697f0
004693EE  8B 8E D1 04 00 00         MOV ECX,dword ptr [ESI + 0x4d1]
004693F4  41                        INC ECX
004693F5  8B C1                     MOV EAX,ECX
004693F7  89 8E D1 04 00 00         MOV dword ptr [ESI + 0x4d1],ECX
004693FD  83 F8 46                  CMP EAX,0x46
00469400  0F 8C E3 05 00 00         JL 0x004699e9
00469406  39 9E D9 04 00 00         CMP dword ptr [ESI + 0x4d9],EBX
0046940C  75 57                     JNZ 0x00469465
0046940E  66 8B 8E C9 04 00 00      MOV CX,word ptr [ESI + 0x4c9]
00469415  66 8B 96 C7 04 00 00      MOV DX,word ptr [ESI + 0x4c7]
0046941C  66 69 C9 C8 00            IMUL CX,CX,0xc8
00469421  66 69 D2 C9 00            IMUL DX,DX,0xc9
00469426  83 C1 64                  ADD ECX,0x64
00469429  8B 06                     MOV EAX,dword ptr [ESI]
0046942B  51                        PUSH ECX
0046942C  66 8B 8E C5 04 00 00      MOV CX,word ptr [ESI + 0x4c5]
00469433  66 69 C9 C9 00            IMUL CX,CX,0xc9
00469438  83 C2 64                  ADD EDX,0x64
0046943B  83 C1 64                  ADD ECX,0x64
0046943E  52                        PUSH EDX
0046943F  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00469443  51                        PUSH ECX
00469444  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
00469448  52                        PUSH EDX
00469449  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046944D  51                        PUSH ECX
0046944E  52                        PUSH EDX
0046944F  8B CE                     MOV ECX,ESI
00469451  FF 50 10                  CALL dword ptr [EAX + 0x10]
00469454  66 89 86 CB 04 00 00      MOV word ptr [ESI + 0x4cb],AX
0046945B  C7 86 D9 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d9],0x1
LAB_00469465:
00469465  83 BE D9 04 00 00 01      CMP dword ptr [ESI + 0x4d9],0x1
0046946C  75 5C                     JNZ 0x004694ca
0046946E  66 8B 86 CB 04 00 00      MOV AX,word ptr [ESI + 0x4cb]
00469475  8B CE                     MOV ECX,ESI
00469477  50                        PUSH EAX
00469478  E8 35 9C F9 FF            CALL 0x004030b2
0046947D  50                        PUSH EAX
0046947E  8B CE                     MOV ECX,ESI
00469480  E8 77 8E F9 FF            CALL 0x004022fc
00469485  83 F8 FF                  CMP EAX,-0x1
00469488  74 13                     JZ 0x0046949d
0046948A  3B C3                     CMP EAX,EBX
0046948C  75 3C                     JNZ 0x004694ca
0046948E  C7 86 D9 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4d9],0x2
00469498  E9 4C 05 00 00            JMP 0x004699e9
LAB_0046949d:
0046949D  68 DC A2 7A 00            PUSH 0x7aa2dc
004694A2  68 CC 4C 7A 00            PUSH 0x7a4ccc
004694A7  53                        PUSH EBX
004694A8  53                        PUSH EBX
004694A9  68 3C 22 00 00            PUSH 0x223c
004694AE  68 3C 9D 7A 00            PUSH 0x7a9d3c
004694B3  E8 18 40 24 00            CALL 0x006ad4d0
004694B8  83 C4 18                  ADD ESP,0x18
004694BB  85 C0                     TEST EAX,EAX
004694BD  74 01                     JZ 0x004694c0
004694BF  CC                        INT3
LAB_004694c0:
004694C0  68 3D 22 00 00            PUSH 0x223d
004694C5  E9 14 CC FF FF            JMP 0x004660de
LAB_004694ca:
004694CA  83 BE D9 04 00 00 02      CMP dword ptr [ESI + 0x4d9],0x2
004694D1  75 50                     JNZ 0x00469523
004694D3  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
004694D6  66 8B 96 C9 04 00 00      MOV DX,word ptr [ESI + 0x4c9]
004694DD  66 8B 86 C7 04 00 00      MOV AX,word ptr [ESI + 0x4c7]
004694E4  51                        PUSH ECX
004694E5  66 8B 8E C5 04 00 00      MOV CX,word ptr [ESI + 0x4c5]
004694EC  66 69 D2 C8 00            IMUL DX,DX,0xc8
004694F1  66 69 C0 C9 00            IMUL AX,AX,0xc9
004694F6  66 69 C9 C9 00            IMUL CX,CX,0xc9
004694FB  83 C2 64                  ADD EDX,0x64
004694FE  83 C0 64                  ADD EAX,0x64
00469501  52                        PUSH EDX
00469502  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00469506  83 C1 64                  ADD ECX,0x64
00469509  50                        PUSH EAX
0046950A  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046950E  51                        PUSH ECX
0046950F  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00469513  52                        PUSH EDX
00469514  50                        PUSH EAX
00469515  51                        PUSH ECX
00469516  8B CE                     MOV ECX,ESI
00469518  E8 38 8F F9 FF            CALL 0x00402455
0046951D  89 BE D9 04 00 00         MOV dword ptr [ESI + 0x4d9],EDI
LAB_00469523:
00469523  39 BE D9 04 00 00         CMP dword ptr [ESI + 0x4d9],EDI
00469529  0F 85 9A FE FF FF         JNZ 0x004693c9
0046952F  8D 55 EC                  LEA EDX,[EBP + -0x14]
00469532  8D 45 F0                  LEA EAX,[EBP + -0x10]
00469535  52                        PUSH EDX
00469536  50                        PUSH EAX
00469537  8B CE                     MOV ECX,ESI
00469539  E8 09 93 F9 FF            CALL 0x00402847
0046953E  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
00469544  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00469547  84 C9                     TEST CL,CL
00469549  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0046954C  0F 86 AB 01 00 00         JBE 0x004696fd
00469552  8D 8E B3 02 00 00         LEA ECX,[ESI + 0x2b3]
00469558  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0046955b:
0046955B  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
0046955F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00469562  52                        PUSH EDX
00469563  8B 10                     MOV EDX,dword ptr [EAX]
00469565  83 EC 08                  SUB ESP,0x8
00469568  8B CC                     MOV ECX,ESP
0046956A  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0046956E  89 11                     MOV dword ptr [ECX],EDX
00469570  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00469574  8D 4D D8                  LEA ECX,[EBP + -0x28]
00469577  51                        PUSH ECX
00469578  8B CE                     MOV ECX,ESI
0046957A  E8 AD 9E F9 FF            CALL 0x0040342c
0046957F  8B 10                     MOV EDX,dword ptr [EAX]
00469581  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00469584  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00469588  66 89 45 E4               MOV word ptr [EBP + -0x1c],AX
0046958C  A1 2C 73 80 00            MOV EAX,[0x0080732c]
00469591  83 F8 01                  CMP EAX,0x1
00469594  0F 85 98 00 00 00         JNZ 0x00469632
0046959A  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0046959D  6A 00                     PUSH 0x0
0046959F  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
004695A5  6A 00                     PUSH 0x0
004695A7  6A FF                     PUSH -0x1
004695A9  8D B9 39 30 00 00         LEA EDI,[ECX + 0x3039]
004695AF  6A 00                     PUSH 0x0
004695B1  8B D7                     MOV EDX,EDI
004695B3  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
004695B6  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004695BC  6A 00                     PUSH 0x0
004695BE  6A 00                     PUSH 0x0
004695C0  8D 9A 39 30 00 00         LEA EBX,[EDX + 0x3039]
004695C6  6A 00                     PUSH 0x0
004695C8  8B C3                     MOV EAX,EBX
004695CA  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
004695CD  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004695D3  05 39 30 00 00            ADD EAX,0x3039
004695D8  6A 00                     PUSH 0x0
004695DA  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004695DD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004695E0  D9 46 70                  FLD float ptr [ESI + 0x70]
004695E3  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
004695E9  6A 00                     PUSH 0x0
004695EB  E8 98 4C 2C 00            CALL 0x0072e288
004695F0  0F BF C8                  MOVSX ECX,AX
004695F3  8B C7                     MOV EAX,EDI
004695F5  33 D2                     XOR EDX,EDX
004695F7  C1 E8 10                  SHR EAX,0x10
004695FA  BF 07 00 00 00            MOV EDI,0x7
004695FF  F7 F7                     DIV EDI
00469601  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
00469605  03 CA                     ADD ECX,EDX
00469607  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0046960B  03 CA                     ADD ECX,EDX
0046960D  33 D2                     XOR EDX,EDX
0046960F  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
00469613  8B C3                     MOV EAX,EBX
00469615  51                        PUSH ECX
00469616  8B CF                     MOV ECX,EDI
00469618  C1 E8 10                  SHR EAX,0x10
0046961B  F7 F1                     DIV ECX
0046961D  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00469621  0F BF 4D E2               MOVSX ECX,word ptr [EBP + -0x1e]
00469625  03 D0                     ADD EDX,EAX
00469627  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0046962A  2B D1                     SUB EDX,ECX
0046962C  83 EA 03                  SUB EDX,0x3
0046962F  52                        PUSH EDX
00469630  EB 75                     JMP 0x004696a7
LAB_00469632:
00469632  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00469635  53                        PUSH EBX
00469636  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0046963C  05 39 30 00 00            ADD EAX,0x3039
00469641  53                        PUSH EBX
00469642  8B C8                     MOV ECX,EAX
00469644  6A FF                     PUSH -0x1
00469646  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0046964C  81 C1 39 30 00 00         ADD ECX,0x3039
00469652  53                        PUSH EBX
00469653  8B D1                     MOV EDX,ECX
00469655  53                        PUSH EBX
00469656  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0046965C  53                        PUSH EBX
0046965D  53                        PUSH EBX
0046965E  53                        PUSH EBX
0046965F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00469662  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
00469668  53                        PUSH EBX
00469669  C1 E8 10                  SHR EAX,0x10
0046966C  33 D2                     XOR EDX,EDX
0046966E  BB 07 00 00 00            MOV EBX,0x7
00469673  F7 F3                     DIV EBX
00469675  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
00469678  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0046967B  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0046967F  03 D0                     ADD EDX,EAX
00469681  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
00469685  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
00469689  8B C1                     MOV EAX,ECX
0046968B  52                        PUSH EDX
0046968C  33 D2                     XOR EDX,EDX
0046968E  C1 E8 10                  SHR EAX,0x10
00469691  8B CB                     MOV ECX,EBX
00469693  F7 F1                     DIV ECX
00469695  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00469699  0F BF 4D E2               MOVSX ECX,word ptr [EBP + -0x1e]
0046969D  03 D0                     ADD EDX,EAX
0046969F  8B C7                     MOV EAX,EDI
004696A1  2B D1                     SUB EDX,ECX
004696A3  83 EA 03                  SUB EDX,0x3
004696A6  52                        PUSH EDX
LAB_004696a7:
004696A7  C1 E8 10                  SHR EAX,0x10
004696AA  33 D2                     XOR EDX,EDX
004696AC  B9 07 00 00 00            MOV ECX,0x7
004696B1  F7 F1                     DIV ECX
004696B3  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
004696B7  0F BF 4D E0               MOVSX ECX,word ptr [EBP + -0x20]
004696BB  03 D0                     ADD EDX,EAX
004696BD  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
004696C1  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
004696C7  52                        PUSH EDX
004696C8  6A 07                     PUSH 0x7
004696CA  6A 02                     PUSH 0x2
004696CC  6A 01                     PUSH 0x1
004696CE  E8 60 7D F9 FF            CALL 0x00401433
004696D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004696D6  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004696D9  33 C9                     XOR ECX,ECX
004696DB  33 DB                     XOR EBX,EBX
004696DD  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
004696E3  40                        INC EAX
004696E4  83 C7 06                  ADD EDI,0x6
004696E7  3B C1                     CMP EAX,ECX
004696E9  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004696EC  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004696EF  0F 8C 66 FE FF FF         JL 0x0046955b
004696F5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004696F8  BF 03 00 00 00            MOV EDI,0x3
LAB_004696fd:
004696FD  83 F8 FF                  CMP EAX,-0x1
00469700  0F 84 B1 00 00 00         JZ 0x004697b7
00469706  3B C3                     CMP EAX,EBX
00469708  0F 85 BB FC FF FF         JNZ 0x004693c9
0046970E  8B CE                     MOV ECX,ESI
00469710  89 9E CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EBX
00469716  89 9E D1 04 00 00         MOV dword ptr [ESI + 0x4d1],EBX
0046971C  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00469722  E8 5D 9A F9 FF            CALL 0x00403184
00469727  3B C3                     CMP EAX,EBX
00469729  75 2C                     JNZ 0x00469757
0046972B  8B CE                     MOV ECX,ESI
0046972D  E8 23 A1 F9 FF            CALL 0x00403855
00469732  53                        PUSH EBX
00469733  8B CE                     MOV ECX,ESI
00469735  89 9E D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EBX
0046973B  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00469741  E8 E5 A2 F9 FF            CALL 0x00403a2b
00469746  40                        INC EAX
00469747  F7 D8                     NEG EAX
00469749  1B C0                     SBB EAX,EAX
0046974B  23 C7                     AND EAX,EDI
0046974D  48                        DEC EAX
0046974E  5F                        POP EDI
0046974F  5E                        POP ESI
00469750  5B                        POP EBX
00469751  8B E5                     MOV ESP,EBP
00469753  5D                        POP EBP
00469754  C2 04 00                  RET 0x4
LAB_00469757:
00469757  83 F8 01                  CMP EAX,0x1
0046975A  75 24                     JNZ 0x00469780
0046975C  0F BF 96 9F 04 00 00      MOVSX EDX,word ptr [ESI + 0x49f]
00469763  0F BF 86 9D 04 00 00      MOVSX EAX,word ptr [ESI + 0x49d]
0046976A  0F BF 8E 9B 04 00 00      MOVSX ECX,word ptr [ESI + 0x49b]
00469771  42                        INC EDX
00469772  C7 86 D5 04 00 00 0E 00 00 00  MOV dword ptr [ESI + 0x4d5],0xe
0046977C  52                        PUSH EDX
0046977D  50                        PUSH EAX
0046977E  EB 22                     JMP 0x004697a2
LAB_00469780:
00469780  0F BF 96 A9 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a9]
00469787  0F BF 86 A7 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a7]
0046978E  0F BF 8E A5 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a5]
00469795  42                        INC EDX
00469796  C7 86 D5 04 00 00 07 00 00 00  MOV dword ptr [ESI + 0x4d5],0x7
004697A0  52                        PUSH EDX
004697A1  50                        PUSH EAX
LAB_004697a2:
004697A2  51                        PUSH ECX
004697A3  8B CE                     MOV ECX,ESI
004697A5  E8 C1 B7 F9 FF            CALL 0x00404f6b
004697AA  53                        PUSH EBX
004697AB  8B CE                     MOV ECX,ESI
004697AD  E8 2C 9A F9 FF            CALL 0x004031de
004697B2  E9 12 FC FF FF            JMP 0x004693c9
LAB_004697b7:
004697B7  68 B4 A2 7A 00            PUSH 0x7aa2b4
004697BC  68 CC 4C 7A 00            PUSH 0x7a4ccc
004697C1  53                        PUSH EBX
004697C2  53                        PUSH EBX
004697C3  68 62 22 00 00            PUSH 0x2262
004697C8  68 3C 9D 7A 00            PUSH 0x7a9d3c
004697CD  E8 FE 3C 24 00            CALL 0x006ad4d0
004697D2  83 C4 18                  ADD ESP,0x18
004697D5  85 C0                     TEST EAX,EAX
004697D7  74 01                     JZ 0x004697da
004697D9  CC                        INT3
LAB_004697da:
004697DA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004697E0  68 63 22 00 00            PUSH 0x2263
004697E5  68 3C 9D 7A 00            PUSH 0x7a9d3c
004697EA  52                        PUSH EDX
004697EB  E9 F9 C8 FF FF            JMP 0x004660e9
LAB_004697f0:
004697F0  83 F8 0E                  CMP EAX,0xe
004697F3  0F 85 8E 00 00 00         JNZ 0x00469887
004697F9  6A 02                     PUSH 0x2
004697FB  8B CE                     MOV ECX,ESI
004697FD  E8 DC 99 F9 FF            CALL 0x004031de
00469802  40                        INC EAX
00469803  83 F8 04                  CMP EAX,0x4
00469806  0F 87 DD 01 00 00         JA 0x004699e9
switchD_0046980c::switchD:
0046980C  FF 24 85 94 9A 46 00      JMP dword ptr [EAX*0x4 + 0x469a94]
switchD_0046980c::caseD_ffffffff:
00469813  68 7C A2 7A 00            PUSH 0x7aa27c
00469818  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046981D  53                        PUSH EBX
0046981E  53                        PUSH EBX
0046981F  68 8F 22 00 00            PUSH 0x228f
00469824  68 3C 9D 7A 00            PUSH 0x7a9d3c
00469829  E8 A2 3C 24 00            CALL 0x006ad4d0
0046982E  83 C4 18                  ADD ESP,0x18
00469831  85 C0                     TEST EAX,EAX
00469833  74 01                     JZ 0x00469836
00469835  CC                        INT3
LAB_00469836:
00469836  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0046983C  68 8F 22 00 00            PUSH 0x228f
00469841  68 3C 9D 7A 00            PUSH 0x7a9d3c
00469846  51                        PUSH ECX
00469847  E9 9D C8 FF FF            JMP 0x004660e9
switchD_0046980c::caseD_1:
0046984C  8B CE                     MOV ECX,ESI
0046984E  E8 02 A0 F9 FF            CALL 0x00403855
switchD_0046980c::caseD_0:
00469853  89 9E CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EBX
00469859  C7 86 D5 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d5],0x1
00469863  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
switchD_0046980c::caseD_3:
00469869  0F BF 96 9F 04 00 00      MOVSX EDX,word ptr [ESI + 0x49f]
00469870  0F BF 86 9D 04 00 00      MOVSX EAX,word ptr [ESI + 0x49d]
00469877  0F BF 8E 9B 04 00 00      MOVSX ECX,word ptr [ESI + 0x49b]
0046987E  42                        INC EDX
0046987F  52                        PUSH EDX
00469880  50                        PUSH EAX
00469881  51                        PUSH ECX
00469882  E9 53 01 00 00            JMP 0x004699da
LAB_00469887:
00469887  68 54 A2 7A 00            PUSH 0x7aa254
0046988C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00469891  53                        PUSH EBX
00469892  53                        PUSH EBX
00469893  68 AD 22 00 00            PUSH 0x22ad
00469898  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046989D  E8 2E 3C 24 00            CALL 0x006ad4d0
004698A2  83 C4 18                  ADD ESP,0x18
004698A5  85 C0                     TEST EAX,EAX
004698A7  74 01                     JZ 0x004698aa
004698A9  CC                        INT3
LAB_004698aa:
004698AA  83 C8 FF                  OR EAX,0xffffffff
004698AD  5F                        POP EDI
004698AE  5E                        POP ESI
004698AF  5B                        POP EBX
004698B0  8B E5                     MOV ESP,EBP
004698B2  5D                        POP EBP
004698B3  C2 04 00                  RET 0x4
LAB_004698b6:
004698B6  B9 17 00 00 00            MOV ECX,0x17
004698BB  33 C0                     XOR EAX,EAX
004698BD  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
004698C3  F3 AB                     STOSD.REP ES:EDI
004698C5  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
004698CB  66 8B 86 53 03 00 00      MOV AX,word ptr [ESI + 0x353]
004698D2  66 89 86 9B 04 00 00      MOV word ptr [ESI + 0x49b],AX
004698D9  66 8B 8E 55 03 00 00      MOV CX,word ptr [ESI + 0x355]
004698E0  66 89 8E 9D 04 00 00      MOV word ptr [ESI + 0x49d],CX
004698E7  66 8B 96 57 03 00 00      MOV DX,word ptr [ESI + 0x357]
004698EE  66 89 96 9F 04 00 00      MOV word ptr [ESI + 0x49f],DX
004698F5  8B 86 59 03 00 00         MOV EAX,dword ptr [ESI + 0x359]
004698FB  89 86 A1 04 00 00         MOV dword ptr [ESI + 0x4a1],EAX
00469901  66 8B 8E 5D 03 00 00      MOV CX,word ptr [ESI + 0x35d]
00469908  66 89 8E A5 04 00 00      MOV word ptr [ESI + 0x4a5],CX
0046990F  66 8B 96 5F 03 00 00      MOV DX,word ptr [ESI + 0x35f]
00469916  66 89 96 A7 04 00 00      MOV word ptr [ESI + 0x4a7],DX
0046991D  66 8B 86 61 03 00 00      MOV AX,word ptr [ESI + 0x361]
00469924  66 89 86 A9 04 00 00      MOV word ptr [ESI + 0x4a9],AX
0046992B  8B 8E 63 03 00 00         MOV ECX,dword ptr [ESI + 0x363]
00469931  89 8E AB 04 00 00         MOV dword ptr [ESI + 0x4ab],ECX
00469937  8B 96 67 03 00 00         MOV EDX,dword ptr [ESI + 0x367]
0046993D  89 96 B5 04 00 00         MOV dword ptr [ESI + 0x4b5],EDX
00469943  8B 86 6B 03 00 00         MOV EAX,dword ptr [ESI + 0x36b]
00469949  89 86 B9 04 00 00         MOV dword ptr [ESI + 0x4b9],EAX
0046994F  8B CE                     MOV ECX,ESI
00469951  89 9E C1 04 00 00         MOV dword ptr [ESI + 0x4c1],EBX
00469957  89 9E BD 04 00 00         MOV dword ptr [ESI + 0x4bd],EBX
0046995D  89 9E D1 04 00 00         MOV dword ptr [ESI + 0x4d1],EBX
00469963  89 9E CD 04 00 00         MOV dword ptr [ESI + 0x4cd],EBX
00469969  E8 16 98 F9 FF            CALL 0x00403184
0046996E  3B C3                     CMP EAX,EBX
00469970  75 20                     JNZ 0x00469992
LAB_00469972:
00469972  89 9E D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EBX
LAB_00469978:
00469978  53                        PUSH EBX
STBoatC::LoadRC::cf_common_exit_00469979:
00469979  8B CE                     MOV ECX,ESI
0046997B  E8 AB A0 F9 FF            CALL 0x00403a2b
00469980  40                        INC EAX
00469981  F7 D8                     NEG EAX
00469983  1B C0                     SBB EAX,EAX
00469985  83 E0 03                  AND EAX,0x3
00469988  48                        DEC EAX
00469989  5F                        POP EDI
0046998A  5E                        POP ESI
0046998B  5B                        POP EBX
0046998C  8B E5                     MOV ESP,EBP
0046998E  5D                        POP EBP
0046998F  C2 04 00                  RET 0x4
LAB_00469992:
00469992  83 F8 01                  CMP EAX,0x1
00469995  89 86 D5 04 00 00         MOV dword ptr [ESI + 0x4d5],EAX
0046999B  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
004699A5  75 1A                     JNZ 0x004699c1
004699A7  0F BF 8E 9F 04 00 00      MOVSX ECX,word ptr [ESI + 0x49f]
004699AE  0F BF 96 9D 04 00 00      MOVSX EDX,word ptr [ESI + 0x49d]
004699B5  0F BF 86 9B 04 00 00      MOVSX EAX,word ptr [ESI + 0x49b]
004699BC  41                        INC ECX
004699BD  51                        PUSH ECX
004699BE  52                        PUSH EDX
004699BF  EB 18                     JMP 0x004699d9
LAB_004699c1:
004699C1  0F BF 8E A9 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a9]
004699C8  0F BF 96 A7 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a7]
004699CF  0F BF 86 A5 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a5]
004699D6  41                        INC ECX
004699D7  51                        PUSH ECX
004699D8  52                        PUSH EDX
LAB_004699d9:
004699D9  50                        PUSH EAX
STBoatC::LoadRC::cf_common_exit_004699DA:
004699DA  8B CE                     MOV ECX,ESI
004699DC  E8 8A B5 F9 FF            CALL 0x00404f6b
004699E1  53                        PUSH EBX
STBoatC::LoadRC::cf_common_exit_004699E2:
004699E2  8B CE                     MOV ECX,ESI
004699E4  E8 F5 97 F9 FF            CALL 0x004031de
STBoatC::LoadRC::cf_common_exit_004699E9:
004699E9  8B 16                     MOV EDX,dword ptr [ESI]
004699EB  8B CE                     MOV ECX,ESI
004699ED  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004699F3  F7 D8                     NEG EAX
004699F5  1B C0                     SBB EAX,EAX
004699F7  5F                        POP EDI
004699F8  24 FD                     AND AL,0xfd
004699FA  5E                        POP ESI
004699FB  83 C0 02                  ADD EAX,0x2
004699FE  5B                        POP EBX
004699FF  8B E5                     MOV ESP,EBP
00469A01  5D                        POP EBP
00469A02  C2 04 00                  RET 0x4
