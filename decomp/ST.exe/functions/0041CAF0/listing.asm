FUN_0041caf0:
0041CAF0  55                        PUSH EBP
0041CAF1  8B EC                     MOV EBP,ESP
0041CAF3  83 EC 0C                  SUB ESP,0xc
0041CAF6  8B C1                     MOV EAX,ECX
0041CAF8  53                        PUSH EBX
0041CAF9  56                        PUSH ESI
0041CAFA  57                        PUSH EDI
0041CAFB  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
0041CAFE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0041CB01  85 C9                     TEST ECX,ECX
0041CB03  0F 85 8F 00 00 00         JNZ 0x0041cb98
0041CB09  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0041CB0F  85 FF                     TEST EDI,EDI
0041CB11  0F 84 E9 01 00 00         JZ 0x0041cd00
0041CB17  8B 58 24                  MOV EBX,dword ptr [EAX + 0x24]
0041CB1A  0F BF 70 5D               MOVSX ESI,word ptr [EAX + 0x5d]
0041CB1E  0F BF 50 5B               MOVSX EDX,word ptr [EAX + 0x5b]
0041CB22  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0041CB29  0F 84 D1 01 00 00         JZ 0x0041cd00
0041CB2F  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
0041CB35  85 C0                     TEST EAX,EAX
0041CB37  0F 84 C3 01 00 00         JZ 0x0041cd00
0041CB3D  85 D2                     TEST EDX,EDX
0041CB3F  7C 4E                     JL 0x0041cb8f
0041CB41  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0041CB44  3B D0                     CMP EDX,EAX
0041CB46  7D 47                     JGE 0x0041cb8f
0041CB48  85 F6                     TEST ESI,ESI
0041CB4A  7C 43                     JL 0x0041cb8f
0041CB4C  3B 77 24                  CMP ESI,dword ptr [EDI + 0x24]
0041CB4F  7D 3E                     JGE 0x0041cb8f
0041CB51  8B 4F 38                  MOV ECX,dword ptr [EDI + 0x38]
0041CB54  85 C9                     TEST ECX,ECX
0041CB56  74 37                     JZ 0x0041cb8f
0041CB58  0F AF C6                  IMUL EAX,ESI
0041CB5B  8D 34 10                  LEA ESI,[EAX + EDX*0x1]
0041CB5E  8D 0C 71                  LEA ECX,[ECX + ESI*0x2]
0041CB61  85 C9                     TEST ECX,ECX
0041CB63  74 2A                     JZ 0x0041cb8f
0041CB65  80 79 01 00               CMP byte ptr [ECX + 0x1],0x0
0041CB69  74 24                     JZ 0x0041cb8f
0041CB6B  83 FB 08                  CMP EBX,0x8
0041CB6E  0F 83 8C 01 00 00         JNC 0x0041cd00
0041CB74  8B 4C 9F 54               MOV ECX,dword ptr [EDI + EBX*0x4 + 0x54]
0041CB78  85 C9                     TEST ECX,ECX
0041CB7A  0F 84 80 01 00 00         JZ 0x0041cd00
0041CB80  03 C8                     ADD ECX,EAX
0041CB82  33 C0                     XOR EAX,EAX
0041CB84  8A 04 11                  MOV AL,byte ptr [ECX + EDX*0x1]
0041CB87  85 C0                     TEST EAX,EAX
0041CB89  0F 8E 71 01 00 00         JLE 0x0041cd00
LAB_0041cb8f:
0041CB8F  5F                        POP EDI
0041CB90  5E                        POP ESI
0041CB91  33 C0                     XOR EAX,EAX
0041CB93  5B                        POP EBX
0041CB94  8B E5                     MOV ESP,EBP
0041CB96  5D                        POP EBP
0041CB97  C3                        RET
LAB_0041cb98:
0041CB98  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041CB9E  85 C9                     TEST ECX,ECX
0041CBA0  0F 84 5A 01 00 00         JZ 0x0041cd00
0041CBA6  0F BF 50 5D               MOVSX EDX,word ptr [EAX + 0x5d]
0041CBAA  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0041CBB1  8B 58 24                  MOV EBX,dword ptr [EAX + 0x24]
0041CBB4  0F BF 70 5B               MOVSX ESI,word ptr [EAX + 0x5b]
0041CBB8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0041CBBB  0F 84 3F 01 00 00         JZ 0x0041cd00
0041CBC1  8B B9 F8 00 00 00         MOV EDI,dword ptr [ECX + 0xf8]
0041CBC7  85 FF                     TEST EDI,EDI
0041CBC9  0F 84 31 01 00 00         JZ 0x0041cd00
0041CBCF  85 F6                     TEST ESI,ESI
0041CBD1  7C 57                     JL 0x0041cc2a
0041CBD3  8B 79 20                  MOV EDI,dword ptr [ECX + 0x20]
0041CBD6  3B F7                     CMP ESI,EDI
0041CBD8  7D 50                     JGE 0x0041cc2a
0041CBDA  85 D2                     TEST EDX,EDX
0041CBDC  7C 4C                     JL 0x0041cc2a
0041CBDE  3B 51 24                  CMP EDX,dword ptr [ECX + 0x24]
0041CBE1  7D 47                     JGE 0x0041cc2a
0041CBE3  8B 51 38                  MOV EDX,dword ptr [ECX + 0x38]
0041CBE6  85 D2                     TEST EDX,EDX
0041CBE8  74 3D                     JZ 0x0041cc27
0041CBEA  8B C7                     MOV EAX,EDI
0041CBEC  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
0041CBF0  8D 3C 30                  LEA EDI,[EAX + ESI*0x1]
0041CBF3  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
0041CBF6  85 D2                     TEST EDX,EDX
0041CBF8  74 2A                     JZ 0x0041cc24
0041CBFA  80 7A 01 00               CMP byte ptr [EDX + 0x1],0x0
0041CBFE  74 24                     JZ 0x0041cc24
0041CC00  83 FB 08                  CMP EBX,0x8
0041CC03  0F 83 F7 00 00 00         JNC 0x0041cd00
0041CC09  8B 54 99 54               MOV EDX,dword ptr [ECX + EBX*0x4 + 0x54]
0041CC0D  85 D2                     TEST EDX,EDX
0041CC0F  0F 84 EB 00 00 00         JZ 0x0041cd00
0041CC15  03 D0                     ADD EDX,EAX
0041CC17  33 C0                     XOR EAX,EAX
0041CC19  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0041CC1C  85 C0                     TEST EAX,EAX
0041CC1E  0F 8E DC 00 00 00         JLE 0x0041cd00
LAB_0041cc24:
0041CC24  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0041cc27:
0041CC27  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_0041cc2a:
0041CC2A  8D 5E 01                  LEA EBX,[ESI + 0x1]
0041CC2D  85 DB                     TEST EBX,EBX
0041CC2F  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0041CC32  7C 56                     JL 0x0041cc8a
0041CC34  8B 79 20                  MOV EDI,dword ptr [ECX + 0x20]
0041CC37  3B DF                     CMP EBX,EDI
0041CC39  7D 4F                     JGE 0x0041cc8a
0041CC3B  85 D2                     TEST EDX,EDX
0041CC3D  7C 4B                     JL 0x0041cc8a
0041CC3F  3B 51 24                  CMP EDX,dword ptr [ECX + 0x24]
0041CC42  7D 46                     JGE 0x0041cc8a
0041CC44  8B 51 38                  MOV EDX,dword ptr [ECX + 0x38]
0041CC47  85 D2                     TEST EDX,EDX
0041CC49  74 3F                     JZ 0x0041cc8a
0041CC4B  8B C7                     MOV EAX,EDI
0041CC4D  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
0041CC51  8D 3C 18                  LEA EDI,[EAX + EBX*0x1]
0041CC54  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
0041CC57  85 D2                     TEST EDX,EDX
0041CC59  74 2C                     JZ 0x0041cc87
0041CC5B  80 7A 01 00               CMP byte ptr [EDX + 0x1],0x0
0041CC5F  74 26                     JZ 0x0041cc87
0041CC61  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0041CC64  8B 52 24                  MOV EDX,dword ptr [EDX + 0x24]
0041CC67  83 FA 08                  CMP EDX,0x8
0041CC6A  0F 83 90 00 00 00         JNC 0x0041cd00
0041CC70  8B 54 91 54               MOV EDX,dword ptr [ECX + EDX*0x4 + 0x54]
0041CC74  85 D2                     TEST EDX,EDX
0041CC76  0F 84 84 00 00 00         JZ 0x0041cd00
0041CC7C  03 D0                     ADD EDX,EAX
0041CC7E  33 C0                     XOR EAX,EAX
0041CC80  8A 04 1A                  MOV AL,byte ptr [EDX + EBX*0x1]
0041CC83  85 C0                     TEST EAX,EAX
0041CC85  7E 79                     JLE 0x0041cd00
LAB_0041cc87:
0041CC87  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0041cc8a:
0041CC8A  0F BF 78 5D               MOVSX EDI,word ptr [EAX + 0x5d]
0041CC8E  47                        INC EDI
0041CC8F  85 F6                     TEST ESI,ESI
0041CC91  7C 50                     JL 0x0041cce3
0041CC93  3B 71 20                  CMP ESI,dword ptr [ECX + 0x20]
0041CC96  7D 4B                     JGE 0x0041cce3
0041CC98  85 FF                     TEST EDI,EDI
0041CC9A  7C 47                     JL 0x0041cce3
0041CC9C  3B 79 24                  CMP EDI,dword ptr [ECX + 0x24]
0041CC9F  7D 42                     JGE 0x0041cce3
0041CCA1  8B 51 38                  MOV EDX,dword ptr [ECX + 0x38]
0041CCA4  85 D2                     TEST EDX,EDX
0041CCA6  74 3B                     JZ 0x0041cce3
0041CCA8  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
0041CCAB  0F AF C7                  IMUL EAX,EDI
0041CCAE  8D 1C 30                  LEA EBX,[EAX + ESI*0x1]
0041CCB1  8D 14 5A                  LEA EDX,[EDX + EBX*0x2]
0041CCB4  85 D2                     TEST EDX,EDX
0041CCB6  74 25                     JZ 0x0041ccdd
0041CCB8  8A 5A 01                  MOV BL,byte ptr [EDX + 0x1]
0041CCBB  84 DB                     TEST BL,BL
0041CCBD  74 1E                     JZ 0x0041ccdd
0041CCBF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0041CCC2  8B 52 24                  MOV EDX,dword ptr [EDX + 0x24]
0041CCC5  83 FA 08                  CMP EDX,0x8
0041CCC8  73 36                     JNC 0x0041cd00
0041CCCA  8B 54 91 54               MOV EDX,dword ptr [ECX + EDX*0x4 + 0x54]
0041CCCE  85 D2                     TEST EDX,EDX
0041CCD0  74 2E                     JZ 0x0041cd00
0041CCD2  03 D0                     ADD EDX,EAX
0041CCD4  33 C0                     XOR EAX,EAX
0041CCD6  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0041CCD9  85 C0                     TEST EAX,EAX
0041CCDB  7E 23                     JLE 0x0041cd00
LAB_0041ccdd:
0041CCDD  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0041CCE0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0041cce3:
0041CCE3  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
0041CCE6  0F BF 40 5F               MOVSX EAX,word ptr [EAX + 0x5f]
0041CCEA  52                        PUSH EDX
0041CCEB  50                        PUSH EAX
0041CCEC  57                        PUSH EDI
0041CCED  53                        PUSH EBX
0041CCEE  E8 D2 55 FE FF            CALL 0x004022c5
0041CCF3  F7 D8                     NEG EAX
0041CCF5  1B C0                     SBB EAX,EAX
0041CCF7  5F                        POP EDI
0041CCF8  5E                        POP ESI
0041CCF9  5B                        POP EBX
0041CCFA  F7 D8                     NEG EAX
0041CCFC  8B E5                     MOV ESP,EBP
0041CCFE  5D                        POP EBP
0041CCFF  C3                        RET
LAB_0041cd00:
0041CD00  5F                        POP EDI
0041CD01  5E                        POP ESI
0041CD02  B8 01 00 00 00            MOV EAX,0x1
0041CD07  5B                        POP EBX
0041CD08  8B E5                     MOV ESP,EBP
0041CD0A  5D                        POP EBP
0041CD0B  C3                        RET
