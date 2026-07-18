FUN_0055ad00:
0055AD00  55                        PUSH EBP
0055AD01  8B EC                     MOV EBP,ESP
0055AD03  83 EC 1C                  SUB ESP,0x1c
0055AD06  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
0055AD0C  53                        PUSH EBX
0055AD0D  56                        PUSH ESI
0055AD0E  57                        PUSH EDI
0055AD0F  85 C0                     TEST EAX,EAX
0055AD11  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0055AD14  0F 84 E6 01 00 00         JZ 0x0055af00
0055AD1A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0055AD1D  83 FA 08                  CMP EDX,0x8
0055AD20  0F 83 DA 01 00 00         JNC 0x0055af00
0055AD26  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0055AD2B  85 C0                     TEST EAX,EAX
0055AD2D  74 11                     JZ 0x0055ad40
0055AD2F  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
0055AD32  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0055AD3A  0F 83 C0 01 00 00         JNC 0x0055af00
LAB_0055ad40:
0055AD40  33 DB                     XOR EBX,EBX
0055AD42  BE E9 87 80 00            MOV ESI,0x8087e9
0055AD47  83 C1 54                  ADD ECX,0x54
0055AD4A  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0055AD4D  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0055AD50  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055AD53  EB 03                     JMP 0x0055ad58
LAB_0055ad55:
0055AD55  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
LAB_0055ad58:
0055AD58  3B DA                     CMP EBX,EDX
0055AD5A  0F 84 81 01 00 00         JZ 0x0055aee1
0055AD60  80 3E FF                  CMP byte ptr [ESI],0xff
0055AD63  0F 84 78 01 00 00         JZ 0x0055aee1
0055AD69  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0055AD6E  84 C0                     TEST AL,AL
0055AD70  74 2B                     JZ 0x0055ad9d
0055AD72  8B C3                     MOV EAX,EBX
0055AD74  25 FF 00 00 00            AND EAX,0xff
0055AD79  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0055AD7C  8B C2                     MOV EAX,EDX
0055AD7E  25 FF 00 00 00            AND EAX,0xff
0055AD83  33 D2                     XOR EDX,EDX
0055AD85  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0055AD8C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0055AD8F  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0055AD96  0F 95 C2                  SETNZ DL
0055AD99  8B C2                     MOV EAX,EDX
0055AD9B  EB 78                     JMP 0x0055ae15
LAB_0055ad9d:
0055AD9D  3A D3                     CMP DL,BL
0055AD9F  74 69                     JZ 0x0055ae0a
0055ADA1  8B C2                     MOV EAX,EDX
0055ADA3  8B CB                     MOV ECX,EBX
0055ADA5  25 FF 00 00 00            AND EAX,0xff
0055ADAA  81 E1 FF 00 00 00         AND ECX,0xff
0055ADB0  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0055ADB7  84 D2                     TEST DL,DL
0055ADB9  75 10                     JNZ 0x0055adcb
0055ADBB  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0055ADC2  75 07                     JNZ 0x0055adcb
0055ADC4  B8 FE FF FF FF            MOV EAX,0xfffffffe
0055ADC9  EB 41                     JMP 0x0055ae0c
LAB_0055adcb:
0055ADCB  80 FA 01                  CMP DL,0x1
0055ADCE  75 0F                     JNZ 0x0055addf
0055ADD0  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0055ADD8  75 05                     JNZ 0x0055addf
0055ADDA  83 C8 FF                  OR EAX,0xffffffff
0055ADDD  EB 2D                     JMP 0x0055ae0c
LAB_0055addf:
0055ADDF  84 D2                     TEST DL,DL
0055ADE1  75 11                     JNZ 0x0055adf4
0055ADE3  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0055ADEB  75 07                     JNZ 0x0055adf4
0055ADED  B8 01 00 00 00            MOV EAX,0x1
0055ADF2  EB 18                     JMP 0x0055ae0c
LAB_0055adf4:
0055ADF4  80 FA 01                  CMP DL,0x1
0055ADF7  75 11                     JNZ 0x0055ae0a
0055ADF9  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0055AE01  75 07                     JNZ 0x0055ae0a
0055AE03  B8 02 00 00 00            MOV EAX,0x2
0055AE08  EB 02                     JMP 0x0055ae0c
LAB_0055ae0a:
0055AE0A  33 C0                     XOR EAX,EAX
LAB_0055ae0c:
0055AE0C  33 C9                     XOR ECX,ECX
0055AE0E  85 C0                     TEST EAX,EAX
0055AE10  0F 9C C1                  SETL CL
0055AE13  8B C1                     MOV EAX,ECX
LAB_0055ae15:
0055AE15  85 C0                     TEST EAX,EAX
0055AE17  0F 84 C4 00 00 00         JZ 0x0055aee1
0055AE1D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055AE20  83 3A 00                  CMP dword ptr [EDX],0x0
0055AE23  0F 84 B8 00 00 00         JZ 0x0055aee1
0055AE29  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0055AE2C  85 C9                     TEST ECX,ECX
0055AE2E  7D 0A                     JGE 0x0055ae3a
0055AE30  C7 45 18 00 00 00 00      MOV dword ptr [EBP + 0x18],0x0
0055AE37  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
LAB_0055ae3a:
0055AE3A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055AE3D  8B C1                     MOV EAX,ECX
0055AE3F  F7 D8                     NEG EAX
0055AE41  51                        PUSH ECX
0055AE42  8D 74 09 01               LEA ESI,[ECX + ECX*0x1 + 0x1]
0055AE46  8D 1C 10                  LEA EBX,[EAX + EDX*0x1]
0055AE49  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0055AE4C  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
0055AE4F  E8 6B 7A EA FF            CALL 0x004028bf
0055AE54  83 C4 04                  ADD ESP,0x4
0055AE57  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0055AE5A  85 F6                     TEST ESI,ESI
0055AE5C  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0055AE63  7E 76                     JLE 0x0055aedb
0055AE65  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0055ae68:
0055AE68  33 D2                     XOR EDX,EDX
LAB_0055ae6a:
0055AE6A  85 C0                     TEST EAX,EAX
0055AE6C  74 09                     JZ 0x0055ae77
0055AE6E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0055AE71  80 3C 11 00               CMP byte ptr [ECX + EDX*0x1],0x0
0055AE75  74 44                     JZ 0x0055aebb
LAB_0055ae77:
0055AE77  8D 0C 1A                  LEA ECX,[EDX + EBX*0x1]
0055AE7A  85 C9                     TEST ECX,ECX
0055AE7C  7C 3D                     JL 0x0055aebb
0055AE7E  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0055AE81  8B 76 20                  MOV ESI,dword ptr [ESI + 0x20]
0055AE84  3B CE                     CMP ECX,ESI
0055AE86  7D 33                     JGE 0x0055aebb
0055AE88  85 FF                     TEST EDI,EDI
0055AE8A  7C 2F                     JL 0x0055aebb
0055AE8C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0055AE8F  3B 79 24                  CMP EDI,dword ptr [ECX + 0x24]
0055AE92  7D 27                     JGE 0x0055aebb
0055AE94  81 7D F4 71 8A 80 00      CMP dword ptr [EBP + -0xc],0x808a71
0055AE9B  7D 1E                     JGE 0x0055aebb
0055AE9D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055AEA0  8B 09                     MOV ECX,dword ptr [ECX]
0055AEA2  85 C9                     TEST ECX,ECX
0055AEA4  74 15                     JZ 0x0055aebb
0055AEA6  8B C7                     MOV EAX,EDI
0055AEA8  0F AF C6                  IMUL EAX,ESI
0055AEAB  03 C1                     ADD EAX,ECX
0055AEAD  33 C9                     XOR ECX,ECX
0055AEAF  03 C2                     ADD EAX,EDX
0055AEB1  8A 0C 18                  MOV CL,byte ptr [EAX + EBX*0x1]
0055AEB4  85 C9                     TEST ECX,ECX
0055AEB6  7F 53                     JG 0x0055af0b
0055AEB8  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_0055aebb:
0055AEBB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0055AEBE  42                        INC EDX
0055AEBF  8D 4C 09 01               LEA ECX,[ECX + ECX*0x1 + 0x1]
0055AEC3  3B D1                     CMP EDX,ECX
0055AEC5  7C A3                     JL 0x0055ae6a
0055AEC7  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0055AECA  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0055AECD  42                        INC EDX
0055AECE  03 F1                     ADD ESI,ECX
0055AED0  47                        INC EDI
0055AED1  3B D1                     CMP EDX,ECX
0055AED3  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0055AED6  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0055AED9  7C 8D                     JL 0x0055ae68
LAB_0055aedb:
0055AEDB  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0055AEDE  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0055aee1:
0055AEE1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055AEE4  83 C6 51                  ADD ESI,0x51
0055AEE7  43                        INC EBX
0055AEE8  83 C1 04                  ADD ECX,0x4
0055AEEB  81 FE 71 8A 80 00         CMP ESI,0x808a71
0055AEF1  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0055AEF4  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0055AEF7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055AEFA  0F 8C 55 FE FF FF         JL 0x0055ad55
LAB_0055af00:
0055AF00  5F                        POP EDI
0055AF01  5E                        POP ESI
0055AF02  33 C0                     XOR EAX,EAX
0055AF04  5B                        POP EBX
0055AF05  8B E5                     MOV ESP,EBP
0055AF07  5D                        POP EBP
0055AF08  C2 14 00                  RET 0x14
LAB_0055af0b:
0055AF0B  5F                        POP EDI
0055AF0C  5E                        POP ESI
0055AF0D  B8 01 00 00 00            MOV EAX,0x1
0055AF12  5B                        POP EBX
0055AF13  8B E5                     MOV ESP,EBP
0055AF15  5D                        POP EBP
0055AF16  C2 14 00                  RET 0x14
