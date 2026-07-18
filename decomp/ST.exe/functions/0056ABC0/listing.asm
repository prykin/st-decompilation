FUN_0056abc0:
0056ABC0  55                        PUSH EBP
0056ABC1  8B EC                     MOV EBP,ESP
0056ABC3  51                        PUSH ECX
0056ABC4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056ABC7  53                        PUSH EBX
0056ABC8  56                        PUSH ESI
0056ABC9  57                        PUSH EDI
0056ABCA  85 C0                     TEST EAX,EAX
0056ABCC  8A 81 74 14 00 00         MOV AL,byte ptr [ECX + 0x1474]
0056ABD2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0056ABD5  0F 84 1D 01 00 00         JZ 0x0056acf8
0056ABDB  84 C0                     TEST AL,AL
0056ABDD  0F 85 5C 01 00 00         JNZ 0x0056ad3f
0056ABE3  C6 81 74 14 00 00 01      MOV byte ptr [ECX + 0x1474],0x1
0056ABEA  A1 88 2A 80 00            MOV EAX,[0x00802a88]
0056ABEF  85 C0                     TEST EAX,EAX
0056ABF1  0F 84 48 01 00 00         JZ 0x0056ad3f
0056ABF7  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0056ABFD  8D 81 C9 11 00 00         LEA EAX,[ECX + 0x11c9]
0056AC03  32 DB                     XOR BL,BL
0056AC05  33 F6                     XOR ESI,ESI
0056AC07  BF EA 87 80 00            MOV EDI,0x8087ea
0056AC0C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0056ac0f:
0056AC0F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056AC12  80 38 FF                  CMP byte ptr [EAX],0xff
0056AC15  0F 84 BC 00 00 00         JZ 0x0056acd7
0056AC1B  3A 99 2D 11 00 00         CMP BL,byte ptr [ECX + 0x112d]
0056AC21  0F 84 B0 00 00 00         JZ 0x0056acd7
0056AC27  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0056AC2C  84 C0                     TEST AL,AL
0056AC2E  74 1F                     JZ 0x0056ac4f
0056AC30  8A 0F                     MOV CL,byte ptr [EDI]
0056AC32  33 C0                     XOR EAX,EAX
0056AC34  8A C2                     MOV AL,DL
0056AC36  33 D2                     XOR EDX,EDX
0056AC38  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0056AC3B  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0056AC42  0F 95 C2                  SETNZ DL
0056AC45  8B C2                     MOV EAX,EDX
0056AC47  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0056AC4D  EB 6D                     JMP 0x0056acbc
LAB_0056ac4f:
0056AC4F  3A D3                     CMP DL,BL
0056AC51  74 5E                     JZ 0x0056acb1
0056AC53  33 C0                     XOR EAX,EAX
0056AC55  8A C2                     MOV AL,DL
0056AC57  8A 8C C6 4F 8A 80 00      MOV CL,byte ptr [ESI + EAX*0x8 + 0x808a4f]
0056AC5E  84 C9                     TEST CL,CL
0056AC60  75 10                     JNZ 0x0056ac72
0056AC62  38 8C F0 4F 8A 80 00      CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],CL
0056AC69  75 07                     JNZ 0x0056ac72
0056AC6B  B8 FE FF FF FF            MOV EAX,0xfffffffe
0056AC70  EB 41                     JMP 0x0056acb3
LAB_0056ac72:
0056AC72  80 F9 01                  CMP CL,0x1
0056AC75  75 0F                     JNZ 0x0056ac86
0056AC77  80 BC F0 4F 8A 80 00 00   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x0
0056AC7F  75 05                     JNZ 0x0056ac86
0056AC81  83 C8 FF                  OR EAX,0xffffffff
0056AC84  EB 2D                     JMP 0x0056acb3
LAB_0056ac86:
0056AC86  84 C9                     TEST CL,CL
0056AC88  75 11                     JNZ 0x0056ac9b
0056AC8A  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
0056AC92  75 07                     JNZ 0x0056ac9b
0056AC94  B8 01 00 00 00            MOV EAX,0x1
0056AC99  EB 18                     JMP 0x0056acb3
LAB_0056ac9b:
0056AC9B  80 F9 01                  CMP CL,0x1
0056AC9E  75 11                     JNZ 0x0056acb1
0056ACA0  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
0056ACA8  75 07                     JNZ 0x0056acb1
0056ACAA  B8 02 00 00 00            MOV EAX,0x2
0056ACAF  EB 02                     JMP 0x0056acb3
LAB_0056acb1:
0056ACB1  33 C0                     XOR EAX,EAX
LAB_0056acb3:
0056ACB3  33 C9                     XOR ECX,ECX
0056ACB5  85 C0                     TEST EAX,EAX
0056ACB7  0F 9C C1                  SETL CL
0056ACBA  8B C1                     MOV EAX,ECX
LAB_0056acbc:
0056ACBC  85 C0                     TEST EAX,EAX
0056ACBE  75 14                     JNZ 0x0056acd4
0056ACC0  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0056ACC6  56                        PUSH ESI
0056ACC7  6A 01                     PUSH 0x1
0056ACC9  E8 47 B2 E9 FF            CALL 0x00405f15
0056ACCE  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
LAB_0056acd4:
0056ACD4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0056acd7:
0056ACD7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056ACDA  FE C3                     INC BL
0056ACDC  46                        INC ESI
0056ACDD  83 C0 51                  ADD EAX,0x51
0056ACE0  83 C7 51                  ADD EDI,0x51
0056ACE3  80 FB 08                  CMP BL,0x8
0056ACE6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0056ACE9  0F 82 20 FF FF FF         JC 0x0056ac0f
0056ACEF  5F                        POP EDI
0056ACF0  5E                        POP ESI
0056ACF1  5B                        POP EBX
0056ACF2  8B E5                     MOV ESP,EBP
0056ACF4  5D                        POP EBP
0056ACF5  C2 04 00                  RET 0x4
LAB_0056acf8:
0056ACF8  84 C0                     TEST AL,AL
0056ACFA  74 43                     JZ 0x0056ad3f
0056ACFC  A1 88 2A 80 00            MOV EAX,[0x00802a88]
0056AD01  85 C0                     TEST EAX,EAX
0056AD03  74 33                     JZ 0x0056ad38
0056AD05  32 DB                     XOR BL,BL
0056AD07  33 F6                     XOR ESI,ESI
0056AD09  8D B9 C9 11 00 00         LEA EDI,[ECX + 0x11c9]
LAB_0056ad0f:
0056AD0F  80 3F FF                  CMP byte ptr [EDI],0xff
0056AD12  74 19                     JZ 0x0056ad2d
0056AD14  3A 99 2D 11 00 00         CMP BL,byte ptr [ECX + 0x112d]
0056AD1A  74 11                     JZ 0x0056ad2d
0056AD1C  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0056AD22  56                        PUSH ESI
0056AD23  6A 00                     PUSH 0x0
0056AD25  E8 EB B1 E9 FF            CALL 0x00405f15
0056AD2A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0056ad2d:
0056AD2D  FE C3                     INC BL
0056AD2F  46                        INC ESI
0056AD30  83 C7 51                  ADD EDI,0x51
0056AD33  80 FB 08                  CMP BL,0x8
0056AD36  72 D7                     JC 0x0056ad0f
LAB_0056ad38:
0056AD38  C6 81 74 14 00 00 00      MOV byte ptr [ECX + 0x1474],0x0
LAB_0056ad3f:
0056AD3F  5F                        POP EDI
0056AD40  5E                        POP ESI
0056AD41  5B                        POP EBX
0056AD42  8B E5                     MOV ESP,EBP
0056AD44  5D                        POP EBP
0056AD45  C2 04 00                  RET 0x4
