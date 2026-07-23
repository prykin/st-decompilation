CGenerate::sub_0069ADA0:
0069ADA0  55                        PUSH EBP
0069ADA1  8B EC                     MOV EBP,ESP
0069ADA3  83 EC 18                  SUB ESP,0x18
0069ADA6  53                        PUSH EBX
0069ADA7  56                        PUSH ESI
0069ADA8  57                        PUSH EDI
0069ADA9  8B F9                     MOV EDI,ECX
0069ADAB  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0069ADAE  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0069ADB1  0F BF 41 02               MOVSX EAX,word ptr [ECX + 0x2]
0069ADB5  0F BF 11                  MOVSX EDX,word ptr [ECX]
0069ADB8  0F AF C2                  IMUL EAX,EDX
0069ADBB  8B 91 55 04 00 00         MOV EDX,dword ptr [ECX + 0x455]
0069ADC1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069ADC4  33 C0                     XOR EAX,EAX
0069ADC6  85 D2                     TEST EDX,EDX
0069ADC8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0069ADCB  0F 8E 4E 02 00 00         JLE 0x0069b01f
LAB_0069add1:
0069ADD1  8B 94 81 59 04 00 00      MOV EDX,dword ptr [ECX + EAX*0x4 + 0x459]
0069ADD8  85 D2                     TEST EDX,EDX
0069ADDA  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0069ADDD  0F 84 24 02 00 00         JZ 0x0069b007
0069ADE3  66 8B 72 08               MOV SI,word ptr [EDX + 0x8]
0069ADE7  0F BF 5A 06               MOVSX EBX,word ptr [EDX + 0x6]
0069ADEB  0F BF 09                  MOVSX ECX,word ptr [ECX]
0069ADEE  0F BF C6                  MOVSX EAX,SI
0069ADF1  0F AF D9                  IMUL EBX,ECX
0069ADF4  8B C8                     MOV ECX,EAX
0069ADF6  0F AF 4D FC               IMUL ECX,dword ptr [EBP + -0x4]
0069ADFA  03 D9                     ADD EBX,ECX
0069ADFC  0F BF 4A 04               MOVSX ECX,word ptr [EDX + 0x4]
0069AE00  03 D9                     ADD EBX,ECX
0069AE02  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069AE05  66 85 F6                  TEST SI,SI
0069AE08  8D 0C 59                  LEA ECX,[ECX + EBX*0x2]
0069AE0B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0069AE0E  75 24                     JNZ 0x0069ae34
0069AE10  83 C8 FF                  OR EAX,0xffffffff
0069AE13  66 89 01                  MOV word ptr [ECX],AX
0069AE16  66 89 41 02               MOV word ptr [ECX + 0x2],AX
0069AE1A  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
0069AE1D  0F BF 12                  MOVSX EDX,word ptr [EDX]
0069AE20  66 89 04 51               MOV word ptr [ECX + EDX*0x2],AX
0069AE24  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
0069AE27  0F BF 12                  MOVSX EDX,word ptr [EDX]
0069AE2A  66 89 44 51 02            MOV word ptr [ECX + EDX*0x2 + 0x2],AX
0069AE2F  E9 D3 01 00 00            JMP 0x0069b007
LAB_0069ae34:
0069AE34  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0069AE37  33 C9                     XOR ECX,ECX
0069AE39  8A 4A 48                  MOV CL,byte ptr [EDX + 0x48]
0069AE3C  BA 00 80 00 00            MOV EDX,0x8000
0069AE41  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0069AE44  33 C9                     XOR ECX,ECX
0069AE46  3B C3                     CMP EAX,EBX
0069AE48  BF 08 00 00 00            MOV EDI,0x8
0069AE4D  BE 80 00 00 00            MOV ESI,0x80
0069AE52  7C 20                     JL 0x0069ae74
0069AE54  2B C3                     SUB EAX,EBX
0069AE56  40                        INC EAX
0069AE57  8B C8                     MOV ECX,EAX
0069AE59  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069AE5C  8B D1                     MOV EDX,ECX
0069AE5E  0F AF 55 FC               IMUL EDX,dword ptr [EBP + -0x4]
0069AE62  F7 DA                     NEG EDX
0069AE64  D3 FF                     SAR EDI,CL
0069AE66  8D 1C 50                  LEA EBX,[EAX + EDX*0x2]
0069AE69  BA 00 80 00 00            MOV EDX,0x8000
0069AE6E  D3 FE                     SAR ESI,CL
0069AE70  D3 FA                     SAR EDX,CL
0069AE72  EB 03                     JMP 0x0069ae77
LAB_0069ae74:
0069AE74  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_0069ae77:
0069AE77  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0069AE7A  3B C8                     CMP ECX,EAX
0069AE7C  0F 8D CC 00 00 00         JGE 0x0069af4e
0069AE82  2B C1                     SUB EAX,ECX
0069AE84  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0069AE87  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0069ae8a:
0069AE8A  8B 41 2C                  MOV EAX,dword ptr [ECX + 0x2c]
0069AE8D  85 C7                     TEST EDI,EAX
0069AE8F  74 1C                     JZ 0x0069aead
0069AE91  85 C6                     TEST ESI,EAX
0069AE93  74 05                     JZ 0x0069ae9a
0069AE95  83 C8 FF                  OR EAX,0xffffffff
0069AE98  EB 10                     JMP 0x0069aeaa
LAB_0069ae9a:
0069AE9A  23 C2                     AND EAX,EDX
0069AE9C  F7 D8                     NEG EAX
0069AE9E  1B C0                     SBB EAX,EAX
0069AEA0  25 FF 3F 00 00            AND EAX,0x3fff
0069AEA5  05 FF BF FF FF            ADD EAX,0xffffbfff
LAB_0069aeaa:
0069AEAA  66 89 03                  MOV word ptr [EBX],AX
LAB_0069aead:
0069AEAD  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
0069AEB0  85 C7                     TEST EDI,EAX
0069AEB2  74 1D                     JZ 0x0069aed1
0069AEB4  85 C6                     TEST ESI,EAX
0069AEB6  74 05                     JZ 0x0069aebd
0069AEB8  83 C8 FF                  OR EAX,0xffffffff
0069AEBB  EB 10                     JMP 0x0069aecd
LAB_0069aebd:
0069AEBD  23 C2                     AND EAX,EDX
0069AEBF  F7 D8                     NEG EAX
0069AEC1  1B C0                     SBB EAX,EAX
0069AEC3  25 FF 3F 00 00            AND EAX,0x3fff
0069AEC8  05 FF BF FF FF            ADD EAX,0xffffbfff
LAB_0069aecd:
0069AECD  66 89 43 02               MOV word ptr [EBX + 0x2],AX
LAB_0069aed1:
0069AED1  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
0069AED4  85 C7                     TEST EDI,EAX
0069AED6  74 29                     JZ 0x0069af01
0069AED8  85 C6                     TEST ESI,EAX
0069AEDA  74 05                     JZ 0x0069aee1
0069AEDC  83 C8 FF                  OR EAX,0xffffffff
0069AEDF  EB 10                     JMP 0x0069aef1
LAB_0069aee1:
0069AEE1  23 C2                     AND EAX,EDX
0069AEE3  F7 D8                     NEG EAX
0069AEE5  1B C0                     SBB EAX,EAX
0069AEE7  25 FF 3F 00 00            AND EAX,0x3fff
0069AEEC  05 FF BF FF FF            ADD EAX,0xffffbfff
LAB_0069aef1:
0069AEF1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0069AEF4  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0069AEF7  0F BF 09                  MOVSX ECX,word ptr [ECX]
0069AEFA  66 89 04 4B               MOV word ptr [EBX + ECX*0x2],AX
0069AEFE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0069af01:
0069AF01  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
0069AF04  85 C7                     TEST EDI,EAX
0069AF06  74 2A                     JZ 0x0069af32
0069AF08  85 C6                     TEST ESI,EAX
0069AF0A  74 05                     JZ 0x0069af11
0069AF0C  83 C8 FF                  OR EAX,0xffffffff
0069AF0F  EB 10                     JMP 0x0069af21
LAB_0069af11:
0069AF11  23 C2                     AND EAX,EDX
0069AF13  F7 D8                     NEG EAX
0069AF15  1B C0                     SBB EAX,EAX
0069AF17  25 FF 3F 00 00            AND EAX,0x3fff
0069AF1C  05 FF BF FF FF            ADD EAX,0xffffbfff
LAB_0069af21:
0069AF21  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0069AF24  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0069AF27  0F BF 09                  MOVSX ECX,word ptr [ECX]
0069AF2A  66 89 44 4B 02            MOV word ptr [EBX + ECX*0x2 + 0x2],AX
0069AF2F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0069af32:
0069AF32  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069AF35  03 C0                     ADD EAX,EAX
0069AF37  2B D8                     SUB EBX,EAX
0069AF39  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069AF3C  D1 FF                     SAR EDI,0x1
0069AF3E  D1 FE                     SAR ESI,0x1
0069AF40  D1 FA                     SAR EDX,0x1
0069AF42  48                        DEC EAX
0069AF43  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0069AF46  0F 85 3E FF FF FF         JNZ 0x0069ae8a
0069AF4C  EB 03                     JMP 0x0069af51
LAB_0069af4e:
0069AF4E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0069af51:
0069AF51  F6 41 4F 10               TEST byte ptr [ECX + 0x4f],0x10
0069AF55  0F 84 A9 00 00 00         JZ 0x0069b004
0069AF5B  85 F6                     TEST ESI,ESI
0069AF5D  74 04                     JZ 0x0069af63
0069AF5F  D1 E6                     SHL ESI,0x1
0069AF61  EB 05                     JMP 0x0069af68
LAB_0069af63:
0069AF63  BE 01 00 00 00            MOV ESI,0x1
LAB_0069af68:
0069AF68  8B 41 2C                  MOV EAX,dword ptr [ECX + 0x2c]
0069AF6B  85 C6                     TEST ESI,EAX
0069AF6D  74 05                     JZ 0x0069af74
0069AF6F  83 C8 FF                  OR EAX,0xffffffff
0069AF72  EB 10                     JMP 0x0069af84
LAB_0069af74:
0069AF74  24 01                     AND AL,0x1
0069AF76  F6 D8                     NEG AL
0069AF78  1B C0                     SBB EAX,EAX
0069AF7A  25 FF 3F 00 00            AND EAX,0x3fff
0069AF7F  05 FF BF FF FF            ADD EAX,0xffffbfff
LAB_0069af84:
0069AF84  66 89 03                  MOV word ptr [EBX],AX
0069AF87  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
0069AF8A  85 C6                     TEST ESI,EAX
0069AF8C  74 05                     JZ 0x0069af93
0069AF8E  83 C8 FF                  OR EAX,0xffffffff
0069AF91  EB 10                     JMP 0x0069afa3
LAB_0069af93:
0069AF93  24 01                     AND AL,0x1
0069AF95  F6 D8                     NEG AL
0069AF97  1B C0                     SBB EAX,EAX
0069AF99  25 FF 3F 00 00            AND EAX,0x3fff
0069AF9E  05 FF BF FF FF            ADD EAX,0xffffbfff
LAB_0069afa3:
0069AFA3  66 89 43 02               MOV word ptr [EBX + 0x2],AX
0069AFA7  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
0069AFAA  85 C6                     TEST ESI,EAX
0069AFAC  74 05                     JZ 0x0069afb3
0069AFAE  83 C8 FF                  OR EAX,0xffffffff
0069AFB1  EB 10                     JMP 0x0069afc3
LAB_0069afb3:
0069AFB3  24 01                     AND AL,0x1
0069AFB5  F6 D8                     NEG AL
0069AFB7  1B C0                     SBB EAX,EAX
0069AFB9  25 FF 3F 00 00            AND EAX,0x3fff
0069AFBE  05 FF BF FF FF            ADD EAX,0xffffbfff
LAB_0069afc3:
0069AFC3  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0069AFC6  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
0069AFC9  0F BF 12                  MOVSX EDX,word ptr [EDX]
0069AFCC  66 89 04 53               MOV word ptr [EBX + EDX*0x2],AX
0069AFD0  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
0069AFD3  85 C6                     TEST ESI,EAX
0069AFD5  74 10                     JZ 0x0069afe7
0069AFD7  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0069AFDA  83 C8 FF                  OR EAX,0xffffffff
0069AFDD  0F BF 11                  MOVSX EDX,word ptr [ECX]
0069AFE0  66 89 44 53 02            MOV word ptr [EBX + EDX*0x2 + 0x2],AX
0069AFE5  EB 20                     JMP 0x0069b007
LAB_0069afe7:
0069AFE7  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0069AFEA  24 01                     AND AL,0x1
0069AFEC  F6 D8                     NEG AL
0069AFEE  0F BF 11                  MOVSX EDX,word ptr [ECX]
0069AFF1  1B C0                     SBB EAX,EAX
0069AFF3  25 FF 3F 00 00            AND EAX,0x3fff
0069AFF8  05 FF BF FF FF            ADD EAX,0xffffbfff
0069AFFD  66 89 44 53 02            MOV word ptr [EBX + EDX*0x2 + 0x2],AX
0069B002  EB 03                     JMP 0x0069b007
LAB_0069b004:
0069B004  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_0069b007:
0069B007  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0069B00A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0069B00D  40                        INC EAX
0069B00E  8B 91 55 04 00 00         MOV EDX,dword ptr [ECX + 0x455]
0069B014  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0069B017  3B C2                     CMP EAX,EDX
0069B019  0F 8C B2 FD FF FF         JL 0x0069add1
LAB_0069b01f:
0069B01F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0069B022  33 C9                     XOR ECX,ECX
0069B024  85 F6                     TEST ESI,ESI
0069B026  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0069B029  0F 8E 88 00 00 00         JLE 0x0069b0b7
LAB_0069b02f:
0069B02F  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0069B032  33 DB                     XOR EBX,EBX
0069B034  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0069B037  66 39 58 02               CMP word ptr [EAX + 0x2],BX
0069B03B  7E 6E                     JLE 0x0069b0ab
0069B03D  0F AF 4D FC               IMUL ECX,dword ptr [EBP + -0x4]
0069B041  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0069B044  EB 03                     JMP 0x0069b049
LAB_0069b046:
0069B046  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_0069b049:
0069B049  0F BF 00                  MOVSX EAX,word ptr [EAX]
0069B04C  8B D0                     MOV EDX,EAX
0069B04E  0F AF D3                  IMUL EDX,EBX
0069B051  03 D1                     ADD EDX,ECX
0069B053  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069B056  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
0069B059  33 C9                     XOR ECX,ECX
0069B05B  85 C0                     TEST EAX,EAX
0069B05D  7E 3A                     JLE 0x0069b099
0069B05F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0069B062  8B C2                     MOV EAX,EDX
0069B064  8D 14 5A                  LEA EDX,[EDX + EBX*0x2]
LAB_0069b067:
0069B067  66 83 38 FF               CMP word ptr [EAX],-0x1
0069B06B  75 18                     JNZ 0x0069b085
0069B06D  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0069B070  83 FB 04                  CMP EBX,0x4
0069B073  7D 0B                     JGE 0x0069b080
0069B075  43                        INC EBX
0069B076  3B DE                     CMP EBX,ESI
0069B078  7D 0B                     JGE 0x0069b085
0069B07A  66 83 3A 00               CMP word ptr [EDX],0x0
0069B07E  74 05                     JZ 0x0069b085
LAB_0069b080:
0069B080  66 C7 00 FE FF            MOV word ptr [EAX],0xfffe
LAB_0069b085:
0069B085  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
0069B088  41                        INC ECX
0069B089  83 C2 02                  ADD EDX,0x2
0069B08C  83 C0 02                  ADD EAX,0x2
0069B08F  0F BF 1B                  MOVSX EBX,word ptr [EBX]
0069B092  3B CB                     CMP ECX,EBX
0069B094  7C D1                     JL 0x0069b067
0069B096  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0069b099:
0069B099  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0069B09C  43                        INC EBX
0069B09D  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0069B0A0  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
0069B0A4  3B DA                     CMP EBX,EDX
0069B0A6  7C 9E                     JL 0x0069b046
0069B0A8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0069b0ab:
0069B0AB  41                        INC ECX
0069B0AC  3B CE                     CMP ECX,ESI
0069B0AE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0069B0B1  0F 8C 78 FF FF FF         JL 0x0069b02f
LAB_0069b0b7:
0069B0B7  5F                        POP EDI
0069B0B8  5E                        POP ESI
0069B0B9  5B                        POP EBX
0069B0BA  8B E5                     MOV ESP,EBP
0069B0BC  5D                        POP EBP
0069B0BD  C2 08 00                  RET 0x8
