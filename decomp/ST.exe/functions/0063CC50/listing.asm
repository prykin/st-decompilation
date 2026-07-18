FUN_0063cc50:
0063CC50  55                        PUSH EBP
0063CC51  8B EC                     MOV EBP,ESP
0063CC53  83 EC 44                  SUB ESP,0x44
0063CC56  53                        PUSH EBX
0063CC57  8B D9                     MOV EBX,ECX
0063CC59  57                        PUSH EDI
0063CC5A  B9 0B 00 00 00            MOV ECX,0xb
0063CC5F  33 C0                     XOR EAX,EAX
0063CC61  8D 7D BC                  LEA EDI,[EBP + -0x44]
0063CC64  F3 AB                     STOSD.REP ES:EDI
0063CC66  66 AB                     STOSW ES:EDI
0063CC68  B8 01 00 00 00            MOV EAX,0x1
0063CC6D  66 8B 8B 66 02 00 00      MOV CX,word ptr [EBX + 0x266]
0063CC74  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0063CC77  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0063CC7A  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
0063CC80  66 8B 93 6A 02 00 00      MOV DX,word ptr [EBX + 0x26a]
0063CC87  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0063CC8A  66 8B 83 6E 02 00 00      MOV AX,word ptr [EBX + 0x26e]
0063CC91  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
0063CC95  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063CC98  83 F8 03                  CMP EAX,0x3
0063CC9B  C7 45 BC 6E 00 00 00      MOV dword ptr [EBP + -0x44],0x6e
0063CCA2  66 89 4D D0               MOV word ptr [EBP + -0x30],CX
0063CCA6  66 89 55 D2               MOV word ptr [EBP + -0x2e],DX
0063CCAA  7E 0A                     JLE 0x0063ccb6
0063CCAC  5F                        POP EDI
0063CCAD  33 C0                     XOR EAX,EAX
0063CCAF  5B                        POP EBX
0063CCB0  8B E5                     MOV ESP,EBP
0063CCB2  5D                        POP EBP
0063CCB3  C2 04 00                  RET 0x4
LAB_0063ccb6:
0063CCB6  85 C0                     TEST EAX,EAX
0063CCB8  56                        PUSH ESI
0063CCB9  75 33                     JNZ 0x0063ccee
0063CCBB  66 89 45 DA               MOV word ptr [EBP + -0x26],AX
0063CCBF  50                        PUSH EAX
0063CCC0  66 89 4D D6               MOV word ptr [EBP + -0x2a],CX
0063CCC4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063CCCA  8D 45 BC                  LEA EAX,[EBP + -0x44]
0063CCCD  66 89 55 D8               MOV word ptr [EBP + -0x28],DX
0063CCD1  8B 11                     MOV EDX,dword ptr [ECX]
0063CCD3  50                        PUSH EAX
0063CCD4  6A 00                     PUSH 0x0
0063CCD6  6A 00                     PUSH 0x0
0063CCD8  68 0C 01 00 00            PUSH 0x10c
0063CCDD  FF 52 08                  CALL dword ptr [EDX + 0x8]
0063CCE0  5E                        POP ESI
0063CCE1  5F                        POP EDI
0063CCE2  B8 01 00 00 00            MOV EAX,0x1
0063CCE7  5B                        POP EBX
0063CCE8  8B E5                     MOV ESP,EBP
0063CCEA  5D                        POP EBP
0063CCEB  C2 04 00                  RET 0x4
LAB_0063ccee:
0063CCEE  8B BB 86 02 00 00         MOV EDI,dword ptr [EBX + 0x286]
0063CCF4  8B F7                     MOV ESI,EDI
0063CCF6  2B F0                     SUB ESI,EAX
0063CCF8  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0063CCFB  79 0A                     JNS 0x0063cd07
0063CCFD  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0063CD04  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0063cd07:
0063CD07  8D 7C 07 01               LEA EDI,[EDI + EAX*0x1 + 0x1]
0063CD0B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0063CD0E  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0063CD15  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0063CD18  7C 04                     JL 0x0063cd1e
0063CD1A  4F                        DEC EDI
0063CD1B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0063cd1e:
0063CD1E  8B BB 8A 02 00 00         MOV EDI,dword ptr [EBX + 0x28a]
0063CD24  2B F8                     SUB EDI,EAX
0063CD26  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0063CD29  79 07                     JNS 0x0063cd32
0063CD2B  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0063cd32:
0063CD32  8B BB 8A 02 00 00         MOV EDI,dword ptr [EBX + 0x28a]
0063CD38  8D 44 07 01               LEA EAX,[EDI + EAX*0x1 + 0x1]
0063CD3C  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0063CD43  3B C7                     CMP EAX,EDI
0063CD45  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0063CD48  7C 0B                     JL 0x0063cd55
0063CD4A  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0063CD51  48                        DEC EAX
0063CD52  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0063cd55:
0063CD55  66 89 4D D6               MOV word ptr [EBP + -0x2a],CX
0063CD59  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063CD5F  8D 45 BC                  LEA EAX,[EBP + -0x44]
0063CD62  6A 00                     PUSH 0x0
0063CD64  50                        PUSH EAX
0063CD65  66 89 55 D8               MOV word ptr [EBP + -0x28],DX
0063CD69  66 C7 45 DA 00 00         MOV word ptr [EBP + -0x26],0x0
0063CD6F  8B 11                     MOV EDX,dword ptr [ECX]
0063CD71  6A 00                     PUSH 0x0
0063CD73  6A 00                     PUSH 0x0
0063CD75  68 0C 01 00 00            PUSH 0x10c
0063CD7A  FF 52 08                  CALL dword ptr [EDX + 0x8]
0063CD7D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063CD80  8B FE                     MOV EDI,ESI
0063CD82  3B F0                     CMP ESI,EAX
0063CD84  0F 8D 97 01 00 00         JGE 0x0063cf21
0063CD8A  EB 03                     JMP 0x0063cd8f
LAB_0063cd8c:
0063CD8C  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0063cd8f:
0063CD8F  3B FE                     CMP EDI,ESI
0063CD91  74 0F                     JZ 0x0063cda2
0063CD93  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0063CD96  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0063CD9D  49                        DEC ECX
0063CD9E  3B F9                     CMP EDI,ECX
0063CDA0  75 07                     JNZ 0x0063cda9
LAB_0063cda2:
0063CDA2  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
LAB_0063cda9:
0063CDA9  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0063CDAC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063CDAF  8B CE                     MOV ECX,ESI
0063CDB1  3B C8                     CMP ECX,EAX
0063CDB3  0F 8D 5C 01 00 00         JGE 0x0063cf15
LAB_0063cdb9:
0063CDB9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0063CDBC  85 C9                     TEST ECX,ECX
0063CDBE  75 0E                     JNZ 0x0063cdce
0063CDC0  3B 75 F8                  CMP ESI,dword ptr [EBP + -0x8]
0063CDC3  74 09                     JZ 0x0063cdce
0063CDC5  48                        DEC EAX
0063CDC6  3B F0                     CMP ESI,EAX
0063CDC8  0F 85 3B 01 00 00         JNZ 0x0063cf09
LAB_0063cdce:
0063CDCE  83 7D 08 02               CMP dword ptr [EBP + 0x8],0x2
0063CDD2  75 60                     JNZ 0x0063ce34
0063CDD4  8B 8B 86 02 00 00         MOV ECX,dword ptr [EBX + 0x286]
0063CDDA  8D 51 FE                  LEA EDX,[ECX + -0x2]
0063CDDD  3B FA                     CMP EDI,EDX
0063CDDF  75 11                     JNZ 0x0063cdf2
0063CDE1  8B 83 8A 02 00 00         MOV EAX,dword ptr [EBX + 0x28a]
0063CDE7  83 E8 02                  SUB EAX,0x2
0063CDEA  3B F0                     CMP ESI,EAX
0063CDEC  0F 84 17 01 00 00         JZ 0x0063cf09
LAB_0063cdf2:
0063CDF2  83 C1 02                  ADD ECX,0x2
0063CDF5  3B F9                     CMP EDI,ECX
0063CDF7  75 11                     JNZ 0x0063ce0a
0063CDF9  8B 83 8A 02 00 00         MOV EAX,dword ptr [EBX + 0x28a]
0063CDFF  83 E8 02                  SUB EAX,0x2
0063CE02  3B F0                     CMP ESI,EAX
0063CE04  0F 84 FF 00 00 00         JZ 0x0063cf09
LAB_0063ce0a:
0063CE0A  3B FA                     CMP EDI,EDX
0063CE0C  75 11                     JNZ 0x0063ce1f
0063CE0E  8B 93 8A 02 00 00         MOV EDX,dword ptr [EBX + 0x28a]
0063CE14  83 C2 02                  ADD EDX,0x2
0063CE17  3B F2                     CMP ESI,EDX
0063CE19  0F 84 EA 00 00 00         JZ 0x0063cf09
LAB_0063ce1f:
0063CE1F  3B F9                     CMP EDI,ECX
0063CE21  75 11                     JNZ 0x0063ce34
0063CE23  8B 83 8A 02 00 00         MOV EAX,dword ptr [EBX + 0x28a]
0063CE29  83 C0 02                  ADD EAX,0x2
0063CE2C  3B F0                     CMP ESI,EAX
0063CE2E  0F 84 D5 00 00 00         JZ 0x0063cf09
LAB_0063ce34:
0063CE34  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0063CE37  33 D2                     XOR EDX,EDX
0063CE39  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0063CE3F  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0063CE45  B9 0B 00 00 00            MOV ECX,0xb
0063CE4A  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0063CE4D  C1 E8 10                  SHR EAX,0x10
0063CE50  F7 F1                     DIV ECX
0063CE52  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0063CE55  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0063CE58  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0063CE5B  8D 44 D7 64               LEA EAX,[EDI + EDX*0x8 + 0x64]
0063CE5F  66 89 45 D6               MOV word ptr [EBP + -0x2a],AX
0063CE63  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0063CE66  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0063CE69  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063CE6C  83 F8 01                  CMP EAX,0x1
0063CE6F  8D 54 CE 64               LEA EDX,[ESI + ECX*0x8 + 0x64]
0063CE73  66 89 55 D8               MOV word ptr [EBP + -0x28],DX
0063CE77  75 70                     JNZ 0x0063cee9
0063CE79  8B 83 86 02 00 00         MOV EAX,dword ptr [EBX + 0x286]
0063CE7F  8D 48 FF                  LEA ECX,[EAX + -0x1]
0063CE82  3B F9                     CMP EDI,ECX
0063CE84  75 15                     JNZ 0x0063ce9b
0063CE86  8B 93 8A 02 00 00         MOV EDX,dword ptr [EBX + 0x28a]
0063CE8C  4A                        DEC EDX
0063CE8D  3B F2                     CMP ESI,EDX
0063CE8F  75 0A                     JNZ 0x0063ce9b
0063CE91  66 83 45 D6 19            ADD word ptr [EBP + -0x2a],0x19
0063CE96  66 83 45 D8 19            ADD word ptr [EBP + -0x28],0x19
LAB_0063ce9b:
0063CE9B  40                        INC EAX
0063CE9C  3B F8                     CMP EDI,EAX
0063CE9E  75 15                     JNZ 0x0063ceb5
0063CEA0  8B 93 8A 02 00 00         MOV EDX,dword ptr [EBX + 0x28a]
0063CEA6  4A                        DEC EDX
0063CEA7  3B F2                     CMP ESI,EDX
0063CEA9  75 0A                     JNZ 0x0063ceb5
0063CEAB  66 83 45 D6 E7            ADD word ptr [EBP + -0x2a],-0x19
0063CEB0  66 83 45 D8 19            ADD word ptr [EBP + -0x28],0x19
LAB_0063ceb5:
0063CEB5  3B F9                     CMP EDI,ECX
0063CEB7  BA E7 FF FF FF            MOV EDX,0xffffffe7
0063CEBC  75 14                     JNZ 0x0063ced2
0063CEBE  8B 8B 8A 02 00 00         MOV ECX,dword ptr [EBX + 0x28a]
0063CEC4  41                        INC ECX
0063CEC5  3B F1                     CMP ESI,ECX
0063CEC7  75 09                     JNZ 0x0063ced2
0063CEC9  66 83 45 D6 19            ADD word ptr [EBP + -0x2a],0x19
0063CECE  66 01 55 D8               ADD word ptr [EBP + -0x28],DX
LAB_0063ced2:
0063CED2  3B F8                     CMP EDI,EAX
0063CED4  75 13                     JNZ 0x0063cee9
0063CED6  8B 83 8A 02 00 00         MOV EAX,dword ptr [EBX + 0x28a]
0063CEDC  40                        INC EAX
0063CEDD  3B F0                     CMP ESI,EAX
0063CEDF  75 08                     JNZ 0x0063cee9
0063CEE1  66 01 55 D6               ADD word ptr [EBP + -0x2a],DX
0063CEE5  66 01 55 D8               ADD word ptr [EBP + -0x28],DX
LAB_0063cee9:
0063CEE9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063CEEF  8D 45 BC                  LEA EAX,[EBP + -0x44]
0063CEF2  6A 00                     PUSH 0x0
0063CEF4  50                        PUSH EAX
0063CEF5  66 C7 45 DA 00 00         MOV word ptr [EBP + -0x26],0x0
0063CEFB  8B 11                     MOV EDX,dword ptr [ECX]
0063CEFD  6A 00                     PUSH 0x0
0063CEFF  6A 00                     PUSH 0x0
0063CF01  68 0C 01 00 00            PUSH 0x10c
0063CF06  FF 52 08                  CALL dword ptr [EDX + 0x8]
LAB_0063cf09:
0063CF09  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063CF0C  46                        INC ESI
0063CF0D  3B F0                     CMP ESI,EAX
0063CF0F  0F 8C A4 FE FF FF         JL 0x0063cdb9
LAB_0063cf15:
0063CF15  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063CF18  47                        INC EDI
0063CF19  3B F8                     CMP EDI,EAX
0063CF1B  0F 8C 6B FE FF FF         JL 0x0063cd8c
LAB_0063cf21:
0063CF21  5E                        POP ESI
0063CF22  5F                        POP EDI
0063CF23  B8 01 00 00 00            MOV EAX,0x1
0063CF28  5B                        POP EBX
0063CF29  8B E5                     MOV ESP,EBP
0063CF2B  5D                        POP EBP
0063CF2C  C2 04 00                  RET 0x4
