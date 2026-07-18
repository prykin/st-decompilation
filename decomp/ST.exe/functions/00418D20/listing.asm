FUN_00418d20:
00418D20  55                        PUSH EBP
00418D21  8B EC                     MOV EBP,ESP
00418D23  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00418D26  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00418D29  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00418D2C  53                        PUSH EBX
00418D2D  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00418D30  56                        PUSH ESI
00418D31  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00418D34  57                        PUSH EDI
00418D35  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00418D38  2B D8                     SUB EBX,EAX
00418D3A  2B F9                     SUB EDI,ECX
00418D3C  2B F2                     SUB ESI,EDX
00418D3E  66 83 FB 01               CMP BX,0x1
00418D42  0F 85 80 04 00 00         JNZ 0x004191c8
00418D48  66 3B FB                  CMP DI,BX
00418D4B  0F 85 CA 01 00 00         JNZ 0x00418f1b
00418D51  66 3B F3                  CMP SI,BX
00418D54  0F 85 9D 00 00 00         JNZ 0x00418df7
00418D5A  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00418D61  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
00418D68  0F BF F1                  MOVSX ESI,CX
00418D6B  0F BF CA                  MOVSX ECX,DX
00418D6E  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00418D71  0F AF CB                  IMUL ECX,EBX
00418D74  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00418D77  0F AF F7                  IMUL ESI,EDI
00418D7A  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00418D80  0F BF C0                  MOVSX EAX,AX
00418D83  8D 1C 08                  LEA EBX,[EAX + ECX*0x1]
00418D86  03 DE                     ADD EBX,ESI
00418D88  83 7C DA 08 00            CMP dword ptr [EDX + EBX*0x8 + 0x8],0x0
00418D8D  74 0C                     JZ 0x00418d9b
00418D8F  5F                        POP EDI
00418D90  5E                        POP ESI
00418D91  B8 01 00 00 00            MOV EAX,0x1
00418D96  5B                        POP EBX
00418D97  5D                        POP EBP
00418D98  C2 18 00                  RET 0x18
LAB_00418d9b:
00418D9B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00418D9E  43                        INC EBX
00418D9F  0F AF DF                  IMUL EBX,EDI
00418DA2  8D 3C 03                  LEA EDI,[EBX + EAX*0x1]
00418DA5  03 CF                     ADD ECX,EDI
00418DA7  83 3C CA 00               CMP dword ptr [EDX + ECX*0x8],0x0
00418DAB  74 0C                     JZ 0x00418db9
00418DAD  5F                        POP EDI
00418DAE  5E                        POP ESI
00418DAF  B8 01 00 00 00            MOV EAX,0x1
00418DB4  5B                        POP EBX
00418DB5  5D                        POP EBP
00418DB6  C2 18 00                  RET 0x18
LAB_00418db9:
00418DB9  8B 7C CA 08               MOV EDI,dword ptr [EDX + ECX*0x8 + 0x8]
00418DBD  85 FF                     TEST EDI,EDI
00418DBF  74 0C                     JZ 0x00418dcd
00418DC1  5F                        POP EDI
00418DC2  5E                        POP ESI
00418DC3  B8 01 00 00 00            MOV EAX,0x1
00418DC8  5B                        POP EBX
00418DC9  5D                        POP EBP
00418DCA  C2 18 00                  RET 0x18
LAB_00418dcd:
00418DCD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00418DD0  03 F0                     ADD ESI,EAX
00418DD2  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00418DD9  41                        INC ECX
00418DDA  0F AF CF                  IMUL ECX,EDI
00418DDD  03 F1                     ADD ESI,ECX
00418DDF  8B 7C F2 08               MOV EDI,dword ptr [EDX + ESI*0x8 + 0x8]
00418DE3  85 FF                     TEST EDI,EDI
00418DE5  0F 84 09 01 00 00         JZ 0x00418ef4
00418DEB  5F                        POP EDI
00418DEC  5E                        POP ESI
00418DED  B8 01 00 00 00            MOV EAX,0x1
00418DF2  5B                        POP EBX
00418DF3  5D                        POP EBP
00418DF4  C2 18 00                  RET 0x18
LAB_00418df7:
00418DF7  66 85 F6                  TEST SI,SI
00418DFA  75 55                     JNZ 0x00418e51
00418DFC  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
00418E03  0F BF F9                  MOVSX EDI,CX
00418E06  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00418E0D  0F BF D2                  MOVSX EDX,DX
00418E10  8B DF                     MOV EBX,EDI
00418E12  0F AF CA                  IMUL ECX,EDX
00418E15  0F AF DE                  IMUL EBX,ESI
00418E18  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00418E1E  0F BF C0                  MOVSX EAX,AX
00418E21  03 D8                     ADD EBX,EAX
00418E23  03 D9                     ADD EBX,ECX
00418E25  83 7C DA 08 00            CMP dword ptr [EDX + EBX*0x8 + 0x8],0x0
00418E2A  74 0C                     JZ 0x00418e38
00418E2C  5F                        POP EDI
00418E2D  5E                        POP ESI
00418E2E  B8 01 00 00 00            MOV EAX,0x1
00418E33  5B                        POP EBX
00418E34  5D                        POP EBP
00418E35  C2 18 00                  RET 0x18
LAB_00418e38:
00418E38  47                        INC EDI
LAB_00418e39:
00418E39  0F AF FE                  IMUL EDI,ESI
00418E3C  03 F8                     ADD EDI,EAX
00418E3E  33 C0                     XOR EAX,EAX
00418E40  03 F9                     ADD EDI,ECX
00418E42  8B 0C FA                  MOV ECX,dword ptr [EDX + EDI*0x8]
00418E45  5F                        POP EDI
00418E46  85 C9                     TEST ECX,ECX
00418E48  5E                        POP ESI
00418E49  5B                        POP EBX
00418E4A  0F 95 C0                  SETNZ AL
00418E4D  5D                        POP EBP
00418E4E  C2 18 00                  RET 0x18
LAB_00418e51:
00418E51  66 83 FE FF               CMP SI,-0x1
00418E55  0F 85 71 09 00 00         JNZ 0x004197cc
00418E5B  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00418E62  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
00418E69  0F BF F1                  MOVSX ESI,CX
00418E6C  0F BF CA                  MOVSX ECX,DX
00418E6F  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00418E72  0F AF CB                  IMUL ECX,EBX
00418E75  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00418E78  0F AF F7                  IMUL ESI,EDI
00418E7B  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00418E81  0F BF C0                  MOVSX EAX,AX
00418E84  8D 1C 08                  LEA EBX,[EAX + ECX*0x1]
00418E87  03 DE                     ADD EBX,ESI
00418E89  83 7C DA 08 00            CMP dword ptr [EDX + EBX*0x8 + 0x8],0x0
00418E8E  74 0C                     JZ 0x00418e9c
00418E90  5F                        POP EDI
00418E91  5E                        POP ESI
00418E92  B8 01 00 00 00            MOV EAX,0x1
00418E97  5B                        POP EBX
00418E98  5D                        POP EBP
00418E99  C2 18 00                  RET 0x18
LAB_00418e9c:
00418E9C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00418E9F  43                        INC EBX
00418EA0  0F AF DF                  IMUL EBX,EDI
00418EA3  8D 3C 03                  LEA EDI,[EBX + EAX*0x1]
00418EA6  03 CF                     ADD ECX,EDI
00418EA8  83 3C CA 00               CMP dword ptr [EDX + ECX*0x8],0x0
00418EAC  74 0C                     JZ 0x00418eba
00418EAE  5F                        POP EDI
00418EAF  5E                        POP ESI
00418EB0  B8 01 00 00 00            MOV EAX,0x1
00418EB5  5B                        POP EBX
00418EB6  5D                        POP EBP
00418EB7  C2 18 00                  RET 0x18
LAB_00418eba:
00418EBA  8B 7C CA 08               MOV EDI,dword ptr [EDX + ECX*0x8 + 0x8]
00418EBE  85 FF                     TEST EDI,EDI
00418EC0  74 0C                     JZ 0x00418ece
00418EC2  5F                        POP EDI
00418EC3  5E                        POP ESI
00418EC4  B8 01 00 00 00            MOV EAX,0x1
00418EC9  5B                        POP EBX
00418ECA  5D                        POP EBP
00418ECB  C2 18 00                  RET 0x18
LAB_00418ece:
00418ECE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00418ED1  03 F0                     ADD ESI,EAX
00418ED3  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00418EDA  49                        DEC ECX
00418EDB  0F AF CF                  IMUL ECX,EDI
00418EDE  03 F1                     ADD ESI,ECX
00418EE0  8B 7C F2 08               MOV EDI,dword ptr [EDX + ESI*0x8 + 0x8]
00418EE4  85 FF                     TEST EDI,EDI
00418EE6  74 0C                     JZ 0x00418ef4
00418EE8  5F                        POP EDI
00418EE9  5E                        POP ESI
00418EEA  B8 01 00 00 00            MOV EAX,0x1
00418EEF  5B                        POP EBX
00418EF0  5D                        POP EBP
00418EF1  C2 18 00                  RET 0x18
LAB_00418ef4:
00418EF4  03 D8                     ADD EBX,EAX
00418EF6  03 D9                     ADD EBX,ECX
00418EF8  83 3C DA 00               CMP dword ptr [EDX + EBX*0x8],0x0
00418EFC  74 0C                     JZ 0x00418f0a
00418EFE  5F                        POP EDI
00418EFF  5E                        POP ESI
00418F00  B8 01 00 00 00            MOV EAX,0x1
00418F05  5B                        POP EBX
00418F06  5D                        POP EBP
00418F07  C2 18 00                  RET 0x18
LAB_00418f0a:
00418F0A  8B 0C F2                  MOV ECX,dword ptr [EDX + ESI*0x8]
00418F0D  33 C0                     XOR EAX,EAX
00418F0F  85 C9                     TEST ECX,ECX
00418F11  5F                        POP EDI
00418F12  5E                        POP ESI
00418F13  0F 95 C0                  SETNZ AL
00418F16  5B                        POP EBX
00418F17  5D                        POP EBP
00418F18  C2 18 00                  RET 0x18
LAB_00418f1b:
00418F1B  66 85 FF                  TEST DI,DI
00418F1E  0F 85 B2 00 00 00         JNZ 0x00418fd6
00418F24  66 83 FE 01               CMP SI,0x1
00418F28  75 3F                     JNZ 0x00418f69
00418F2A  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
00418F31  0F BF C9                  MOVSX ECX,CX
00418F34  0F BF D2                  MOVSX EDX,DX
00418F37  0F AF F1                  IMUL ESI,ECX
00418F3A  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00418F41  8B DA                     MOV EBX,EDX
00418F43  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
00418F49  0F AF D9                  IMUL EBX,ECX
00418F4C  0F BF C0                  MOVSX EAX,AX
00418F4F  03 D8                     ADD EBX,EAX
00418F51  03 DE                     ADD EBX,ESI
00418F53  83 7C DF 08 00            CMP dword ptr [EDI + EBX*0x8 + 0x8],0x0
LAB_00418f58:
00418F58  74 0C                     JZ 0x00418f66
00418F5A  5F                        POP EDI
00418F5B  5E                        POP ESI
00418F5C  B8 01 00 00 00            MOV EAX,0x1
00418F61  5B                        POP EBX
00418F62  5D                        POP EBP
00418F63  C2 18 00                  RET 0x18
LAB_00418f66:
00418F66  42                        INC EDX
00418F67  EB 55                     JMP 0x00418fbe
LAB_00418f69:
00418F69  66 85 F6                  TEST SI,SI
00418F6C  75 09                     JNZ 0x00418f77
00418F6E  5F                        POP EDI
00418F6F  5E                        POP ESI
00418F70  33 C0                     XOR EAX,EAX
00418F72  5B                        POP EBX
00418F73  5D                        POP EBP
00418F74  C2 18 00                  RET 0x18
LAB_00418f77:
00418F77  66 83 FE FF               CMP SI,-0x1
00418F7B  0F 85 4B 08 00 00         JNZ 0x004197cc
00418F81  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
00418F88  0F BF C9                  MOVSX ECX,CX
00418F8B  0F BF D2                  MOVSX EDX,DX
00418F8E  0F AF F1                  IMUL ESI,ECX
00418F91  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00418F98  8B DA                     MOV EBX,EDX
00418F9A  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
00418FA0  0F AF D9                  IMUL EBX,ECX
00418FA3  0F BF C0                  MOVSX EAX,AX
00418FA6  03 D8                     ADD EBX,EAX
00418FA8  03 DE                     ADD EBX,ESI
00418FAA  83 7C DF 08 00            CMP dword ptr [EDI + EBX*0x8 + 0x8],0x0
00418FAF  74 0C                     JZ 0x00418fbd
00418FB1  5F                        POP EDI
00418FB2  5E                        POP ESI
00418FB3  B8 01 00 00 00            MOV EAX,0x1
00418FB8  5B                        POP EBX
00418FB9  5D                        POP EBP
00418FBA  C2 18 00                  RET 0x18
LAB_00418fbd:
00418FBD  4A                        DEC EDX
LAB_00418fbe:
00418FBE  0F AF D1                  IMUL EDX,ECX
00418FC1  03 D0                     ADD EDX,EAX
00418FC3  33 C0                     XOR EAX,EAX
00418FC5  03 D6                     ADD EDX,ESI
00418FC7  8B 0C D7                  MOV ECX,dword ptr [EDI + EDX*0x8]
00418FCA  5F                        POP EDI
00418FCB  85 C9                     TEST ECX,ECX
00418FCD  5E                        POP ESI
00418FCE  5B                        POP EBX
00418FCF  0F 95 C0                  SETNZ AL
00418FD2  5D                        POP EBP
00418FD3  C2 18 00                  RET 0x18
LAB_00418fd6:
00418FD6  66 83 FF FF               CMP DI,-0x1
00418FDA  0F 85 EC 07 00 00         JNZ 0x004197cc
00418FE0  66 83 FE 01               CMP SI,0x1
00418FE4  0F 85 BD 00 00 00         JNZ 0x004190a7
00418FEA  0F BF F9                  MOVSX EDI,CX
00418FED  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00418FF4  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00418FFB  8D 77 FF                  LEA ESI,[EDI + -0x1]
00418FFE  0F AF F1                  IMUL ESI,ECX
00419001  0F BF CA                  MOVSX ECX,DX
00419004  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00419007  0F AF CB                  IMUL ECX,EBX
0041900A  0F BF C0                  MOVSX EAX,AX
0041900D  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
00419010  8D 1C 32                  LEA EBX,[EDX + ESI*0x1]
00419013  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00419019  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0041901C  83 3C DA 00               CMP dword ptr [EDX + EBX*0x8],0x0
00419020  74 0C                     JZ 0x0041902e
00419022  5F                        POP EDI
00419023  5E                        POP ESI
00419024  B8 01 00 00 00            MOV EAX,0x1
00419029  5B                        POP EBX
0041902A  5D                        POP EBP
0041902B  C2 18 00                  RET 0x18
LAB_0041902e:
0041902E  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
00419035  0F AF FB                  IMUL EDI,EBX
00419038  03 C8                     ADD ECX,EAX
0041903A  03 CF                     ADD ECX,EDI
0041903C  8B 5C CA 08               MOV EBX,dword ptr [EDX + ECX*0x8 + 0x8]
00419040  85 DB                     TEST EBX,EBX
00419042  74 0C                     JZ 0x00419050
00419044  5F                        POP EDI
00419045  5E                        POP ESI
00419046  B8 01 00 00 00            MOV EAX,0x1
0041904B  5B                        POP EBX
0041904C  5D                        POP EBP
0041904D  C2 18 00                  RET 0x18
LAB_00419050:
00419050  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00419053  8B 5C CA 08               MOV EBX,dword ptr [EDX + ECX*0x8 + 0x8]
00419057  85 DB                     TEST EBX,EBX
00419059  74 0C                     JZ 0x00419067
0041905B  5F                        POP EDI
0041905C  5E                        POP ESI
0041905D  B8 01 00 00 00            MOV EAX,0x1
00419062  5B                        POP EBX
00419063  5D                        POP EBP
00419064  C2 18 00                  RET 0x18
LAB_00419067:
00419067  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0041906A  03 F0                     ADD ESI,EAX
0041906C  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00419073  41                        INC ECX
00419074  0F AF CB                  IMUL ECX,EBX
00419077  03 F1                     ADD ESI,ECX
00419079  83 3C F2 00               CMP dword ptr [EDX + ESI*0x8],0x0
0041907D  74 0C                     JZ 0x0041908b
0041907F  5F                        POP EDI
00419080  5E                        POP ESI
00419081  B8 01 00 00 00            MOV EAX,0x1
00419086  5B                        POP EBX
00419087  5D                        POP EBP
00419088  C2 18 00                  RET 0x18
LAB_0041908b:
0041908B  03 C7                     ADD EAX,EDI
0041908D  03 C8                     ADD ECX,EAX
0041908F  8B 44 CA 08               MOV EAX,dword ptr [EDX + ECX*0x8 + 0x8]
00419093  85 C0                     TEST EAX,EAX
00419095  0F 84 A5 01 00 00         JZ 0x00419240
0041909B  5F                        POP EDI
0041909C  5E                        POP ESI
0041909D  B8 01 00 00 00            MOV EAX,0x1
004190A2  5B                        POP EBX
004190A3  5D                        POP EBP
004190A4  C2 18 00                  RET 0x18
LAB_004190a7:
004190A7  66 85 F6                  TEST SI,SI
004190AA  75 55                     JNZ 0x00419101
004190AC  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
004190B3  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004190BA  0F BF C9                  MOVSX ECX,CX
004190BD  0F BF D2                  MOVSX EDX,DX
004190C0  8D 59 FF                  LEA EBX,[ECX + -0x1]
004190C3  0F AF F2                  IMUL ESI,EDX
004190C6  0F AF DF                  IMUL EBX,EDI
004190C9  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004190CF  0F BF C0                  MOVSX EAX,AX
004190D2  03 D8                     ADD EBX,EAX
004190D4  03 DE                     ADD EBX,ESI
004190D6  83 3C DA 00               CMP dword ptr [EDX + EBX*0x8],0x0
004190DA  74 0C                     JZ 0x004190e8
004190DC  5F                        POP EDI
004190DD  5E                        POP ESI
004190DE  B8 01 00 00 00            MOV EAX,0x1
004190E3  5B                        POP EBX
004190E4  5D                        POP EBP
004190E5  C2 18 00                  RET 0x18
LAB_004190e8:
004190E8  0F AF CF                  IMUL ECX,EDI
004190EB  03 C8                     ADD ECX,EAX
004190ED  33 C0                     XOR EAX,EAX
004190EF  03 CE                     ADD ECX,ESI
004190F1  5F                        POP EDI
004190F2  8B 74 CA 08               MOV ESI,dword ptr [EDX + ECX*0x8 + 0x8]
004190F6  85 F6                     TEST ESI,ESI
004190F8  5E                        POP ESI
004190F9  5B                        POP EBX
004190FA  0F 95 C0                  SETNZ AL
004190FD  5D                        POP EBP
004190FE  C2 18 00                  RET 0x18
LAB_00419101:
00419101  66 83 FE FF               CMP SI,-0x1
00419105  0F 85 C1 06 00 00         JNZ 0x004197cc
0041910B  0F BF F9                  MOVSX EDI,CX
0041910E  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00419115  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0041911C  8D 77 FF                  LEA ESI,[EDI + -0x1]
0041911F  0F AF F1                  IMUL ESI,ECX
00419122  0F BF CA                  MOVSX ECX,DX
00419125  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00419128  0F AF CB                  IMUL ECX,EBX
0041912B  0F BF C0                  MOVSX EAX,AX
0041912E  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
00419131  8D 1C 32                  LEA EBX,[EDX + ESI*0x1]
00419134  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0041913A  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0041913D  83 3C DA 00               CMP dword ptr [EDX + EBX*0x8],0x0
00419141  74 0C                     JZ 0x0041914f
00419143  5F                        POP EDI
00419144  5E                        POP ESI
00419145  B8 01 00 00 00            MOV EAX,0x1
0041914A  5B                        POP EBX
0041914B  5D                        POP EBP
0041914C  C2 18 00                  RET 0x18
LAB_0041914f:
0041914F  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
00419156  0F AF FB                  IMUL EDI,EBX
00419159  03 C8                     ADD ECX,EAX
0041915B  03 CF                     ADD ECX,EDI
0041915D  8B 5C CA 08               MOV EBX,dword ptr [EDX + ECX*0x8 + 0x8]
00419161  85 DB                     TEST EBX,EBX
00419163  74 0C                     JZ 0x00419171
00419165  5F                        POP EDI
00419166  5E                        POP ESI
00419167  B8 01 00 00 00            MOV EAX,0x1
0041916C  5B                        POP EBX
0041916D  5D                        POP EBP
0041916E  C2 18 00                  RET 0x18
LAB_00419171:
00419171  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00419174  8B 5C CA 08               MOV EBX,dword ptr [EDX + ECX*0x8 + 0x8]
00419178  85 DB                     TEST EBX,EBX
0041917A  74 0C                     JZ 0x00419188
0041917C  5F                        POP EDI
0041917D  5E                        POP ESI
0041917E  B8 01 00 00 00            MOV EAX,0x1
00419183  5B                        POP EBX
00419184  5D                        POP EBP
00419185  C2 18 00                  RET 0x18
LAB_00419188:
00419188  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0041918B  03 F0                     ADD ESI,EAX
0041918D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00419194  49                        DEC ECX
00419195  0F AF CB                  IMUL ECX,EBX
00419198  03 F1                     ADD ESI,ECX
0041919A  83 3C F2 00               CMP dword ptr [EDX + ESI*0x8],0x0
0041919E  74 0C                     JZ 0x004191ac
004191A0  5F                        POP EDI
004191A1  5E                        POP ESI
004191A2  B8 01 00 00 00            MOV EAX,0x1
004191A7  5B                        POP EBX
004191A8  5D                        POP EBP
004191A9  C2 18 00                  RET 0x18
LAB_004191ac:
004191AC  03 C7                     ADD EAX,EDI
004191AE  03 C8                     ADD ECX,EAX
004191B0  8B 44 CA 08               MOV EAX,dword ptr [EDX + ECX*0x8 + 0x8]
004191B4  85 C0                     TEST EAX,EAX
004191B6  0F 84 0D 01 00 00         JZ 0x004192c9
004191BC  5F                        POP EDI
004191BD  5E                        POP ESI
004191BE  B8 01 00 00 00            MOV EAX,0x1
004191C3  5B                        POP EBX
004191C4  5D                        POP EBP
004191C5  C2 18 00                  RET 0x18
LAB_004191c8:
004191C8  66 85 DB                  TEST BX,BX
004191CB  0F 85 A3 01 00 00         JNZ 0x00419374
004191D1  66 83 FF 01               CMP DI,0x1
004191D5  0F 85 FF 00 00 00         JNZ 0x004192da
004191DB  66 3B F7                  CMP SI,DI
004191DE  75 71                     JNZ 0x00419251
004191E0  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
004191E7  0F BF C9                  MOVSX ECX,CX
004191EA  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004191F1  8D 59 01                  LEA EBX,[ECX + 0x1]
004191F4  0F AF DE                  IMUL EBX,ESI
004191F7  0F BF D2                  MOVSX EDX,DX
004191FA  0F BF C0                  MOVSX EAX,AX
004191FD  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00419200  8B DA                     MOV EBX,EDX
00419202  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
00419205  0F AF DF                  IMUL EBX,EDI
00419208  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0041920B  8B D0                     MOV EDX,EAX
LAB_0041920d:
0041920D  03 D7                     ADD EDX,EDI
0041920F  03 DA                     ADD EBX,EDX
00419211  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00419217  83 3C DA 00               CMP dword ptr [EDX + EBX*0x8],0x0
0041921B  74 0C                     JZ 0x00419229
0041921D  5F                        POP EDI
0041921E  5E                        POP ESI
0041921F  B8 01 00 00 00            MOV EAX,0x1
00419224  5B                        POP EBX
00419225  5D                        POP EBP
00419226  C2 18 00                  RET 0x18
LAB_00419229:
00419229  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0041922C  0F AF CE                  IMUL ECX,ESI
0041922F  8D 5F 01                  LEA EBX,[EDI + 0x1]
00419232  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00419239  0F AF DF                  IMUL EBX,EDI
0041923C  03 C3                     ADD EAX,EBX
0041923E  03 C8                     ADD ECX,EAX
LAB_00419240:
00419240  8B 34 CA                  MOV ESI,dword ptr [EDX + ECX*0x8]
00419243  33 C0                     XOR EAX,EAX
00419245  85 F6                     TEST ESI,ESI
00419247  5F                        POP EDI
00419248  5E                        POP ESI
00419249  0F 95 C0                  SETNZ AL
0041924C  5B                        POP EBX
0041924D  5D                        POP EBP
0041924E  C2 18 00                  RET 0x18
LAB_00419251:
00419251  66 85 F6                  TEST SI,SI
00419254  75 09                     JNZ 0x0041925f
00419256  5F                        POP EDI
00419257  5E                        POP ESI
00419258  33 C0                     XOR EAX,EAX
0041925A  5B                        POP EBX
0041925B  5D                        POP EBP
0041925C  C2 18 00                  RET 0x18
LAB_0041925f:
0041925F  66 83 FE FF               CMP SI,-0x1
00419263  0F 85 63 05 00 00         JNZ 0x004197cc
00419269  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
00419270  0F BF C9                  MOVSX ECX,CX
00419273  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0041927A  8D 59 01                  LEA EBX,[ECX + 0x1]
0041927D  0F AF DE                  IMUL EBX,ESI
00419280  0F BF D2                  MOVSX EDX,DX
00419283  0F BF C0                  MOVSX EAX,AX
00419286  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00419289  8B DA                     MOV EBX,EDX
0041928B  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0041928E  0F AF DF                  IMUL EBX,EDI
00419291  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00419294  8B D0                     MOV EDX,EAX
LAB_00419296:
00419296  03 D7                     ADD EDX,EDI
00419298  03 DA                     ADD EBX,EDX
0041929A  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004192A0  83 3C DA 00               CMP dword ptr [EDX + EBX*0x8],0x0
004192A4  74 0C                     JZ 0x004192b2
004192A6  5F                        POP EDI
004192A7  5E                        POP ESI
004192A8  B8 01 00 00 00            MOV EAX,0x1
004192AD  5B                        POP EBX
004192AE  5D                        POP EBP
004192AF  C2 18 00                  RET 0x18
LAB_004192b2:
004192B2  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
004192B5  0F AF CE                  IMUL ECX,ESI
004192B8  8D 5F FF                  LEA EBX,[EDI + -0x1]
004192BB  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004192C2  0F AF DF                  IMUL EBX,EDI
004192C5  03 C3                     ADD EAX,EBX
004192C7  03 C8                     ADD ECX,EAX
LAB_004192c9:
004192C9  8B 34 CA                  MOV ESI,dword ptr [EDX + ECX*0x8]
004192CC  33 C0                     XOR EAX,EAX
004192CE  85 F6                     TEST ESI,ESI
004192D0  5F                        POP EDI
004192D1  5E                        POP ESI
004192D2  0F 95 C0                  SETNZ AL
004192D5  5B                        POP EBX
004192D6  5D                        POP EBP
004192D7  C2 18 00                  RET 0x18
LAB_004192da:
004192DA  66 85 FF                  TEST DI,DI
004192DD  75 09                     JNZ 0x004192e8
004192DF  5F                        POP EDI
004192E0  5E                        POP ESI
004192E1  33 C0                     XOR EAX,EAX
004192E3  5B                        POP EBX
004192E4  5D                        POP EBP
004192E5  C2 18 00                  RET 0x18
LAB_004192e8:
004192E8  66 83 FF FF               CMP DI,-0x1
004192EC  0F 85 DA 04 00 00         JNZ 0x004197cc
004192F2  66 83 FE 01               CMP SI,0x1
004192F6  75 32                     JNZ 0x0041932a
004192F8  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
004192FF  0F BF C9                  MOVSX ECX,CX
00419302  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00419309  8D 59 FF                  LEA EBX,[ECX + -0x1]
0041930C  0F AF DE                  IMUL EBX,ESI
0041930F  0F BF D2                  MOVSX EDX,DX
00419312  0F BF C0                  MOVSX EAX,AX
00419315  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00419318  8B DA                     MOV EBX,EDX
0041931A  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0041931D  0F AF DF                  IMUL EBX,EDI
00419320  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00419323  8B D0                     MOV EDX,EAX
00419325  E9 E3 FE FF FF            JMP 0x0041920d
LAB_0041932a:
0041932A  66 85 F6                  TEST SI,SI
0041932D  75 09                     JNZ 0x00419338
0041932F  5F                        POP EDI
00419330  5E                        POP ESI
00419331  33 C0                     XOR EAX,EAX
00419333  5B                        POP EBX
00419334  5D                        POP EBP
00419335  C2 18 00                  RET 0x18
LAB_00419338:
00419338  66 83 FE FF               CMP SI,-0x1
0041933C  0F 85 8A 04 00 00         JNZ 0x004197cc
00419342  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
00419349  0F BF C9                  MOVSX ECX,CX
0041934C  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00419353  8D 59 FF                  LEA EBX,[ECX + -0x1]
00419356  0F AF DE                  IMUL EBX,ESI
00419359  0F BF D2                  MOVSX EDX,DX
0041935C  0F BF C0                  MOVSX EAX,AX
0041935F  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00419362  8B DA                     MOV EBX,EDX
00419364  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
00419367  0F AF DF                  IMUL EBX,EDI
0041936A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0041936D  8B D0                     MOV EDX,EAX
0041936F  E9 22 FF FF FF            JMP 0x00419296
LAB_00419374:
00419374  66 83 FB FF               CMP BX,-0x1
00419378  0F 85 4E 04 00 00         JNZ 0x004197cc
0041937E  66 83 FF 01               CMP DI,0x1
00419382  0F 85 E2 01 00 00         JNZ 0x0041956a
00419388  66 3B F7                  CMP SI,DI
0041938B  0F 85 C5 00 00 00         JNZ 0x00419456
00419391  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00419398  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0041939F  0F BF F1                  MOVSX ESI,CX
004193A2  0F BF CA                  MOVSX ECX,DX
004193A5  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
004193A8  0F AF CB                  IMUL ECX,EBX
004193AB  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
004193AE  0F AF F7                  IMUL ESI,EDI
004193B1  8B 1D 48 B2 7F 00         MOV EBX,dword ptr [0x007fb248]
004193B7  0F BF C0                  MOVSX EAX,AX
004193BA  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
004193BD  03 D6                     ADD EDX,ESI
004193BF  83 7C D3 F8 00            CMP dword ptr [EBX + EDX*0x8 + -0x8],0x0
004193C4  74 0C                     JZ 0x004193d2
004193C6  5F                        POP EDI
004193C7  5E                        POP ESI
004193C8  B8 01 00 00 00            MOV EAX,0x1
004193CD  5B                        POP EBX
004193CE  5D                        POP EBP
004193CF  C2 18 00                  RET 0x18
LAB_004193d2:
004193D2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004193D5  42                        INC EDX
004193D6  0F AF D7                  IMUL EDX,EDI
004193D9  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
004193DC  03 F9                     ADD EDI,ECX
004193DE  8D 0C FB                  LEA ECX,[EBX + EDI*0x8]
004193E1  8B 3C FB                  MOV EDI,dword ptr [EBX + EDI*0x8]
004193E4  85 FF                     TEST EDI,EDI
004193E6  74 0C                     JZ 0x004193f4
004193E8  5F                        POP EDI
004193E9  5E                        POP ESI
004193EA  B8 01 00 00 00            MOV EAX,0x1
004193EF  5B                        POP EBX
004193F0  5D                        POP EBP
004193F1  C2 18 00                  RET 0x18
LAB_004193f4:
004193F4  8B 79 F8                  MOV EDI,dword ptr [ECX + -0x8]
004193F7  85 FF                     TEST EDI,EDI
004193F9  74 0C                     JZ 0x00419407
004193FB  5F                        POP EDI
004193FC  5E                        POP ESI
004193FD  B8 01 00 00 00            MOV EAX,0x1
00419402  5B                        POP EBX
00419403  5D                        POP EBP
00419404  C2 18 00                  RET 0x18
LAB_00419407:
00419407  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0041940A  03 F0                     ADD ESI,EAX
0041940C  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00419413  41                        INC ECX
00419414  0F AF CF                  IMUL ECX,EDI
00419417  03 F1                     ADD ESI,ECX
00419419  8B 7C F3 F8               MOV EDI,dword ptr [EBX + ESI*0x8 + -0x8]
0041941D  8D 34 F3                  LEA ESI,[EBX + ESI*0x8]
00419420  85 FF                     TEST EDI,EDI
00419422  74 0C                     JZ 0x00419430
00419424  5F                        POP EDI
00419425  5E                        POP ESI
00419426  B8 01 00 00 00            MOV EAX,0x1
0041942B  5B                        POP EBX
0041942C  5D                        POP EBP
0041942D  C2 18 00                  RET 0x18
LAB_00419430:
00419430  03 D0                     ADD EDX,EAX
00419432  03 D1                     ADD EDX,ECX
00419434  83 3C D3 00               CMP dword ptr [EBX + EDX*0x8],0x0
LAB_00419438:
00419438  74 0C                     JZ 0x00419446
0041943A  5F                        POP EDI
0041943B  5E                        POP ESI
0041943C  B8 01 00 00 00            MOV EAX,0x1
00419441  5B                        POP EBX
00419442  5D                        POP EBP
00419443  C2 18 00                  RET 0x18
LAB_00419446:
00419446  8B 0E                     MOV ECX,dword ptr [ESI]
00419448  33 C0                     XOR EAX,EAX
0041944A  85 C9                     TEST ECX,ECX
0041944C  5F                        POP EDI
0041944D  5E                        POP ESI
0041944E  0F 95 C0                  SETNZ AL
00419451  5B                        POP EBX
00419452  5D                        POP EBP
00419453  C2 18 00                  RET 0x18
LAB_00419456:
00419456  66 85 F6                  TEST SI,SI
00419459  75 40                     JNZ 0x0041949b
0041945B  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
00419462  0F BF F9                  MOVSX EDI,CX
00419465  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0041946C  0F BF D2                  MOVSX EDX,DX
0041946F  8B DF                     MOV EBX,EDI
00419471  0F AF CA                  IMUL ECX,EDX
00419474  0F AF DE                  IMUL EBX,ESI
00419477  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0041947D  0F BF C0                  MOVSX EAX,AX
00419480  03 D8                     ADD EBX,EAX
00419482  03 D9                     ADD EBX,ECX
00419484  83 7C DA F8 00            CMP dword ptr [EDX + EBX*0x8 + -0x8],0x0
00419489  0F 84 A9 F9 FF FF         JZ 0x00418e38
0041948F  5F                        POP EDI
00419490  5E                        POP ESI
00419491  B8 01 00 00 00            MOV EAX,0x1
00419496  5B                        POP EBX
00419497  5D                        POP EBP
00419498  C2 18 00                  RET 0x18
LAB_0041949b:
0041949B  66 83 FE FF               CMP SI,-0x1
0041949F  0F 85 27 03 00 00         JNZ 0x004197cc
004194A5  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004194AC  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
004194B3  0F BF F1                  MOVSX ESI,CX
004194B6  0F BF CA                  MOVSX ECX,DX
004194B9  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
004194BC  0F AF CB                  IMUL ECX,EBX
004194BF  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
004194C2  0F AF F7                  IMUL ESI,EDI
004194C5  8B 1D 48 B2 7F 00         MOV EBX,dword ptr [0x007fb248]
004194CB  0F BF C0                  MOVSX EAX,AX
004194CE  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
004194D1  03 D6                     ADD EDX,ESI
004194D3  83 7C D3 F8 00            CMP dword ptr [EBX + EDX*0x8 + -0x8],0x0
004194D8  74 0C                     JZ 0x004194e6
004194DA  5F                        POP EDI
004194DB  5E                        POP ESI
004194DC  B8 01 00 00 00            MOV EAX,0x1
004194E1  5B                        POP EBX
004194E2  5D                        POP EBP
004194E3  C2 18 00                  RET 0x18
LAB_004194e6:
004194E6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004194E9  42                        INC EDX
004194EA  0F AF D7                  IMUL EDX,EDI
004194ED  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
004194F0  03 F9                     ADD EDI,ECX
004194F2  8D 0C FB                  LEA ECX,[EBX + EDI*0x8]
004194F5  8B 3C FB                  MOV EDI,dword ptr [EBX + EDI*0x8]
004194F8  85 FF                     TEST EDI,EDI
004194FA  74 0C                     JZ 0x00419508
004194FC  5F                        POP EDI
004194FD  5E                        POP ESI
004194FE  B8 01 00 00 00            MOV EAX,0x1
00419503  5B                        POP EBX
00419504  5D                        POP EBP
00419505  C2 18 00                  RET 0x18
LAB_00419508:
00419508  8B 79 F8                  MOV EDI,dword ptr [ECX + -0x8]
0041950B  85 FF                     TEST EDI,EDI
0041950D  74 0C                     JZ 0x0041951b
0041950F  5F                        POP EDI
00419510  5E                        POP ESI
00419511  B8 01 00 00 00            MOV EAX,0x1
00419516  5B                        POP EBX
00419517  5D                        POP EBP
00419518  C2 18 00                  RET 0x18
LAB_0041951b:
0041951B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0041951E  03 F0                     ADD ESI,EAX
00419520  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00419527  49                        DEC ECX
00419528  0F AF CF                  IMUL ECX,EDI
0041952B  03 F1                     ADD ESI,ECX
0041952D  8B 7C F3 F8               MOV EDI,dword ptr [EBX + ESI*0x8 + -0x8]
00419531  8D 34 F3                  LEA ESI,[EBX + ESI*0x8]
00419534  85 FF                     TEST EDI,EDI
00419536  74 0C                     JZ 0x00419544
00419538  5F                        POP EDI
00419539  5E                        POP ESI
0041953A  B8 01 00 00 00            MOV EAX,0x1
0041953F  5B                        POP EBX
00419540  5D                        POP EBP
00419541  C2 18 00                  RET 0x18
LAB_00419544:
00419544  03 D0                     ADD EDX,EAX
00419546  03 D1                     ADD EDX,ECX
00419548  83 3C D3 00               CMP dword ptr [EBX + EDX*0x8],0x0
0041954C  74 0C                     JZ 0x0041955a
0041954E  5F                        POP EDI
0041954F  5E                        POP ESI
00419550  B8 01 00 00 00            MOV EAX,0x1
00419555  5B                        POP EBX
00419556  5D                        POP EBP
00419557  C2 18 00                  RET 0x18
LAB_0041955a:
0041955A  8B 0E                     MOV ECX,dword ptr [ESI]
0041955C  33 C0                     XOR EAX,EAX
0041955E  85 C9                     TEST ECX,ECX
00419560  5F                        POP EDI
00419561  5E                        POP ESI
00419562  0F 95 C0                  SETNZ AL
00419565  5B                        POP EBX
00419566  5D                        POP EBP
00419567  C2 18 00                  RET 0x18
LAB_0041956a:
0041956A  66 85 FF                  TEST DI,DI
0041956D  0F 85 91 00 00 00         JNZ 0x00419604
00419573  66 83 FE 01               CMP SI,0x1
00419577  75 33                     JNZ 0x004195ac
00419579  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
00419580  0F BF C9                  MOVSX ECX,CX
00419583  0F BF D2                  MOVSX EDX,DX
00419586  0F AF F1                  IMUL ESI,ECX
00419589  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00419590  8B DA                     MOV EBX,EDX
00419592  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
00419598  0F AF D9                  IMUL EBX,ECX
0041959B  0F BF C0                  MOVSX EAX,AX
0041959E  03 D8                     ADD EBX,EAX
004195A0  03 DE                     ADD EBX,ESI
004195A2  83 7C DF F8 00            CMP dword ptr [EDI + EBX*0x8 + -0x8],0x0
004195A7  E9 AC F9 FF FF            JMP 0x00418f58
LAB_004195ac:
004195AC  66 85 F6                  TEST SI,SI
004195AF  75 09                     JNZ 0x004195ba
004195B1  5F                        POP EDI
004195B2  5E                        POP ESI
004195B3  33 C0                     XOR EAX,EAX
004195B5  5B                        POP EBX
004195B6  5D                        POP EBP
004195B7  C2 18 00                  RET 0x18
LAB_004195ba:
004195BA  66 83 FE FF               CMP SI,-0x1
004195BE  0F 85 08 02 00 00         JNZ 0x004197cc
004195C4  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
004195CB  0F BF C9                  MOVSX ECX,CX
004195CE  0F BF D2                  MOVSX EDX,DX
004195D1  0F AF F1                  IMUL ESI,ECX
004195D4  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004195DB  8B DA                     MOV EBX,EDX
004195DD  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
004195E3  0F AF D9                  IMUL EBX,ECX
004195E6  0F BF C0                  MOVSX EAX,AX
004195E9  03 D8                     ADD EBX,EAX
004195EB  03 DE                     ADD EBX,ESI
004195ED  83 7C DF F8 00            CMP dword ptr [EDI + EBX*0x8 + -0x8],0x0
004195F2  0F 84 C5 F9 FF FF         JZ 0x00418fbd
004195F8  5F                        POP EDI
004195F9  5E                        POP ESI
004195FA  B8 01 00 00 00            MOV EAX,0x1
004195FF  5B                        POP EBX
00419600  5D                        POP EBP
00419601  C2 18 00                  RET 0x18
LAB_00419604:
00419604  66 83 FF FF               CMP DI,-0x1
00419608  0F 85 BE 01 00 00         JNZ 0x004197cc
0041960E  66 83 FE 01               CMP SI,0x1
00419612  0F 85 B8 00 00 00         JNZ 0x004196d0
00419618  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0041961F  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
00419626  0F BF F1                  MOVSX ESI,CX
00419629  0F BF CA                  MOVSX ECX,DX
0041962C  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0041962F  0F AF CB                  IMUL ECX,EBX
00419632  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00419635  0F AF F7                  IMUL ESI,EDI
00419638  8B 1D 48 B2 7F 00         MOV EBX,dword ptr [0x007fb248]
0041963E  0F BF C0                  MOVSX EAX,AX
00419641  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
00419644  03 D6                     ADD EDX,ESI
00419646  83 7C D3 F8 00            CMP dword ptr [EBX + EDX*0x8 + -0x8],0x0
0041964B  74 0C                     JZ 0x00419659
0041964D  5F                        POP EDI
0041964E  5E                        POP ESI
0041964F  B8 01 00 00 00            MOV EAX,0x1
00419654  5B                        POP EBX
00419655  5D                        POP EBP
00419656  C2 18 00                  RET 0x18
LAB_00419659:
00419659  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0041965C  03 C8                     ADD ECX,EAX
0041965E  4A                        DEC EDX
0041965F  0F AF D7                  IMUL EDX,EDI
00419662  03 CA                     ADD ECX,EDX
00419664  8B 3C CB                  MOV EDI,dword ptr [EBX + ECX*0x8]
00419667  8D 0C CB                  LEA ECX,[EBX + ECX*0x8]
0041966A  85 FF                     TEST EDI,EDI
0041966C  74 0C                     JZ 0x0041967a
0041966E  5F                        POP EDI
0041966F  5E                        POP ESI
00419670  B8 01 00 00 00            MOV EAX,0x1
00419675  5B                        POP EBX
00419676  5D                        POP EBP
00419677  C2 18 00                  RET 0x18
LAB_0041967a:
0041967A  8B 79 F8                  MOV EDI,dword ptr [ECX + -0x8]
0041967D  85 FF                     TEST EDI,EDI
0041967F  74 0C                     JZ 0x0041968d
00419681  5F                        POP EDI
00419682  5E                        POP ESI
00419683  B8 01 00 00 00            MOV EAX,0x1
00419688  5B                        POP EBX
00419689  5D                        POP EBP
0041968A  C2 18 00                  RET 0x18
LAB_0041968d:
0041968D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00419690  03 F0                     ADD ESI,EAX
00419692  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00419699  41                        INC ECX
0041969A  0F AF CF                  IMUL ECX,EDI
0041969D  03 F1                     ADD ESI,ECX
0041969F  8B 7C F3 F8               MOV EDI,dword ptr [EBX + ESI*0x8 + -0x8]
004196A3  8D 34 F3                  LEA ESI,[EBX + ESI*0x8]
004196A6  85 FF                     TEST EDI,EDI
004196A8  74 0C                     JZ 0x004196b6
004196AA  5F                        POP EDI
004196AB  5E                        POP ESI
004196AC  B8 01 00 00 00            MOV EAX,0x1
004196B1  5B                        POP EBX
004196B2  5D                        POP EBP
004196B3  C2 18 00                  RET 0x18
LAB_004196b6:
004196B6  03 C2                     ADD EAX,EDX
004196B8  03 C1                     ADD EAX,ECX
004196BA  83 3C C3 00               CMP dword ptr [EBX + EAX*0x8],0x0
004196BE  0F 84 82 FD FF FF         JZ 0x00419446
004196C4  5F                        POP EDI
004196C5  5E                        POP ESI
004196C6  B8 01 00 00 00            MOV EAX,0x1
004196CB  5B                        POP EBX
004196CC  5D                        POP EBP
004196CD  C2 18 00                  RET 0x18
LAB_004196d0:
004196D0  66 85 F6                  TEST SI,SI
004196D3  75 42                     JNZ 0x00419717
004196D5  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
004196DC  0F BF F9                  MOVSX EDI,CX
004196DF  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004196E6  0F BF D2                  MOVSX EDX,DX
004196E9  8B DF                     MOV EBX,EDI
004196EB  0F AF CA                  IMUL ECX,EDX
004196EE  0F AF DE                  IMUL EBX,ESI
004196F1  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004196F7  0F BF C0                  MOVSX EAX,AX
004196FA  03 D8                     ADD EBX,EAX
004196FC  03 D9                     ADD EBX,ECX
004196FE  83 7C DA F8 00            CMP dword ptr [EDX + EBX*0x8 + -0x8],0x0
00419703  74 0C                     JZ 0x00419711
00419705  5F                        POP EDI
00419706  5E                        POP ESI
00419707  B8 01 00 00 00            MOV EAX,0x1
0041970C  5B                        POP EBX
0041970D  5D                        POP EBP
0041970E  C2 18 00                  RET 0x18
LAB_00419711:
00419711  4F                        DEC EDI
00419712  E9 22 F7 FF FF            JMP 0x00418e39
LAB_00419717:
00419717  66 83 FE FF               CMP SI,-0x1
0041971B  0F 85 AB 00 00 00         JNZ 0x004197cc
00419721  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00419728  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0041972F  0F BF F1                  MOVSX ESI,CX
00419732  0F BF CA                  MOVSX ECX,DX
00419735  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00419738  0F AF CB                  IMUL ECX,EBX
0041973B  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0041973E  0F AF F7                  IMUL ESI,EDI
00419741  8B 1D 48 B2 7F 00         MOV EBX,dword ptr [0x007fb248]
00419747  0F BF C0                  MOVSX EAX,AX
0041974A  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
0041974D  03 D6                     ADD EDX,ESI
0041974F  83 7C D3 F8 00            CMP dword ptr [EBX + EDX*0x8 + -0x8],0x0
00419754  74 0C                     JZ 0x00419762
00419756  5F                        POP EDI
00419757  5E                        POP ESI
00419758  B8 01 00 00 00            MOV EAX,0x1
0041975D  5B                        POP EBX
0041975E  5D                        POP EBP
0041975F  C2 18 00                  RET 0x18
LAB_00419762:
00419762  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00419765  03 C8                     ADD ECX,EAX
00419767  4A                        DEC EDX
00419768  0F AF D7                  IMUL EDX,EDI
0041976B  03 CA                     ADD ECX,EDX
0041976D  8B 3C CB                  MOV EDI,dword ptr [EBX + ECX*0x8]
00419770  8D 0C CB                  LEA ECX,[EBX + ECX*0x8]
00419773  85 FF                     TEST EDI,EDI
00419775  74 0C                     JZ 0x00419783
00419777  5F                        POP EDI
00419778  5E                        POP ESI
00419779  B8 01 00 00 00            MOV EAX,0x1
0041977E  5B                        POP EBX
0041977F  5D                        POP EBP
00419780  C2 18 00                  RET 0x18
LAB_00419783:
00419783  8B 79 F8                  MOV EDI,dword ptr [ECX + -0x8]
00419786  85 FF                     TEST EDI,EDI
00419788  74 0C                     JZ 0x00419796
0041978A  5F                        POP EDI
0041978B  5E                        POP ESI
0041978C  B8 01 00 00 00            MOV EAX,0x1
00419791  5B                        POP EBX
00419792  5D                        POP EBP
00419793  C2 18 00                  RET 0x18
LAB_00419796:
00419796  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00419799  03 F0                     ADD ESI,EAX
0041979B  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004197A2  49                        DEC ECX
004197A3  0F AF CF                  IMUL ECX,EDI
004197A6  03 F1                     ADD ESI,ECX
004197A8  8B 7C F3 F8               MOV EDI,dword ptr [EBX + ESI*0x8 + -0x8]
004197AC  8D 34 F3                  LEA ESI,[EBX + ESI*0x8]
004197AF  85 FF                     TEST EDI,EDI
004197B1  74 0C                     JZ 0x004197bf
004197B3  5F                        POP EDI
004197B4  5E                        POP ESI
004197B5  B8 01 00 00 00            MOV EAX,0x1
004197BA  5B                        POP EBX
004197BB  5D                        POP EBP
004197BC  C2 18 00                  RET 0x18
LAB_004197bf:
004197BF  03 C2                     ADD EAX,EDX
004197C1  03 C1                     ADD EAX,ECX
004197C3  83 3C C3 00               CMP dword ptr [EBX + EAX*0x8],0x0
004197C7  E9 6C FC FF FF            JMP 0x00419438
LAB_004197cc:
004197CC  5F                        POP EDI
004197CD  5E                        POP ESI
004197CE  83 C8 FF                  OR EAX,0xffffffff
004197D1  5B                        POP EBX
004197D2  5D                        POP EBP
004197D3  C2 18 00                  RET 0x18
