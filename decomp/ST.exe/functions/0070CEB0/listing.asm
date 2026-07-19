ccFntTy::operator:
0070CEB0  55                        PUSH EBP
0070CEB1  8B EC                     MOV EBP,ESP
0070CEB3  83 EC 58                  SUB ESP,0x58
0070CEB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070CEBB  53                        PUSH EBX
0070CEBC  56                        PUSH ESI
0070CEBD  33 F6                     XOR ESI,ESI
0070CEBF  57                        PUSH EDI
0070CEC0  8D 55 AC                  LEA EDX,[EBP + -0x54]
0070CEC3  8D 4D A8                  LEA ECX,[EBP + -0x58]
0070CEC6  56                        PUSH ESI
0070CEC7  52                        PUSH EDX
0070CEC8  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0070CECB  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0070CECE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070CED4  E8 17 09 02 00            CALL 0x0072d7f0
0070CED9  8B F8                     MOV EDI,EAX
0070CEDB  83 C4 08                  ADD ESP,0x8
0070CEDE  3B FE                     CMP EDI,ESI
0070CEE0  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0070CEE3  0F 85 6D 02 00 00         JNZ 0x0070d156
0070CEE9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070CEEC  50                        PUSH EAX
0070CEED  E8 1E DD F9 FF            CALL 0x006aac10
0070CEF2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070CEF5  8B D8                     MOV EBX,EAX
0070CEF7  B9 10 00 00 00            MOV ECX,0x10
0070CEFC  33 C0                     XOR EAX,EAX
0070CEFE  8D B3 9A 00 00 00         LEA ESI,[EBX + 0x9a]
0070CF04  89 13                     MOV dword ptr [EBX],EDX
0070CF06  8D 7B 04                  LEA EDI,[EBX + 0x4]
0070CF09  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0070CF0C  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
0070CF12  F3 AB                     STOSD.REP ES:EDI
0070CF14  33 FF                     XOR EDI,EDI
0070CF16  B8 01 00 00 00            MOV EAX,0x1
0070CF1B  89 7B 44                  MOV dword ptr [EBX + 0x44],EDI
0070CF1E  89 7B 48                  MOV dword ptr [EBX + 0x48],EDI
0070CF21  89 43 4C                  MOV dword ptr [EBX + 0x4c],EAX
0070CF24  89 7B 54                  MOV dword ptr [EBX + 0x54],EDI
0070CF27  89 7B 50                  MOV dword ptr [EBX + 0x50],EDI
0070CF2A  89 7B 5C                  MOV dword ptr [EBX + 0x5c],EDI
0070CF2D  89 7B 58                  MOV dword ptr [EBX + 0x58],EDI
0070CF30  89 7B 64                  MOV dword ptr [EBX + 0x64],EDI
0070CF33  B9 64 00 00 00            MOV ECX,0x64
0070CF38  89 7B 60                  MOV dword ptr [EBX + 0x60],EDI
0070CF3B  89 4B 6C                  MOV dword ptr [EBX + 0x6c],ECX
0070CF3E  89 4B 68                  MOV dword ptr [EBX + 0x68],ECX
0070CF41  66 89 7B 70               MOV word ptr [EBX + 0x70],DI
0070CF45  89 7B 72                  MOV dword ptr [EBX + 0x72],EDI
0070CF48  89 7B 76                  MOV dword ptr [EBX + 0x76],EDI
0070CF4B  89 7B 7A                  MOV dword ptr [EBX + 0x7a],EDI
0070CF4E  89 43 7E                  MOV dword ptr [EBX + 0x7e],EAX
0070CF51  66 89 BB 9E 00 00 00      MOV word ptr [EBX + 0x9e],DI
0070CF58  8A 0D 54 C8 7C 00         MOV CL,byte ptr [0x007cc854]
0070CF5E  50                        PUSH EAX
0070CF5F  88 8B 9E 00 00 00         MOV byte ptr [EBX + 0x9e],CL
0070CF65  8A 4D 14                  MOV CL,byte ptr [EBP + 0x14]
0070CF68  C7 83 82 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x82],0xffffffff
0070CF72  89 BB 96 00 00 00         MOV dword ptr [EBX + 0x96],EDI
0070CF78  84 C8                     TEST AL,CL
0070CF7A  89 83 AC 00 00 00         MOV dword ptr [EBX + 0xac],EAX
0070CF80  74 10                     JZ 0x0070cf92
0070CF82  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070CF85  56                        PUSH ESI
0070CF86  50                        PUSH EAX
0070CF87  6A 03                     PUSH 0x3
0070CF89  8B CA                     MOV ECX,EDX
0070CF8B  E8 50 4D FE FF            CALL 0x006f1ce0
0070CF90  EB 10                     JMP 0x0070cfa2
LAB_0070cf92:
0070CF92  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070CF95  57                        PUSH EDI
0070CF96  51                        PUSH ECX
0070CF97  6A 03                     PUSH 0x3
0070CF99  8B CA                     MOV ECX,EDX
0070CF9B  E8 40 4D FE FF            CALL 0x006f1ce0
0070CFA0  89 06                     MOV dword ptr [ESI],EAX
LAB_0070cfa2:
0070CFA2  8B 16                     MOV EDX,dword ptr [ESI]
0070CFA4  66 39 3A                  CMP word ptr [EDX],DI
0070CFA7  7F 17                     JG 0x0070cfc0
0070CFA9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070CFAE  68 BF 00 00 00            PUSH 0xbf
0070CFB3  68 90 01 7F 00            PUSH 0x7f0190
0070CFB8  50                        PUSH EAX
0070CFB9  6A FA                     PUSH -0x6
0070CFBB  E8 80 8E F9 FF            CALL 0x006a5e40
LAB_0070cfc0:
0070CFC0  8B 06                     MOV EAX,dword ptr [ESI]
0070CFC2  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070CFC5  66 39 38                  CMP word ptr [EAX],DI
0070CFC8  0F 8E 85 00 00 00         JLE 0x0070d053
0070CFCE  8A 4D 14                  MOV CL,byte ptr [EBP + 0x14]
0070CFD1  8D 7B 04                  LEA EDI,[EBX + 0x4]
0070CFD4  80 E1 02                  AND CL,0x2
0070CFD7  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0070CFDA  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
0070CFDD  B9 FC FF FF FF            MOV ECX,0xfffffffc
0070CFE2  2B CB                     SUB ECX,EBX
0070CFE4  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0070CFE7  EB 03                     JMP 0x0070cfec
LAB_0070cfe9:
0070CFE9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_0070cfec:
0070CFEC  03 CF                     ADD ECX,EDI
0070CFEE  8B 4C 01 02               MOV ECX,dword ptr [ECX + EAX*0x1 + 0x2]
0070CFF2  51                        PUSH ECX
0070CFF3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070CFF6  E8 B5 4C FE FF            CALL 0x006f1cb0
0070CFFB  8B F0                     MOV ESI,EAX
0070CFFD  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
0070D000  84 C0                     TEST AL,AL
0070D002  74 2B                     JZ 0x0070d02f
0070D004  56                        PUSH ESI
0070D005  E8 46 80 FA FF            CALL 0x006b5050
0070D00A  50                        PUSH EAX
0070D00B  E8 00 DC F9 FF            CALL 0x006aac10
0070D010  56                        PUSH ESI
0070D011  89 07                     MOV dword ptr [EDI],EAX
0070D013  E8 38 80 FA FF            CALL 0x006b5050
0070D018  8B 3F                     MOV EDI,dword ptr [EDI]
0070D01A  8B C8                     MOV ECX,EAX
0070D01C  8B D1                     MOV EDX,ECX
0070D01E  C1 E9 02                  SHR ECX,0x2
0070D021  F3 A5                     MOVSD.REP ES:EDI,ESI
0070D023  8B CA                     MOV ECX,EDX
0070D025  83 E1 03                  AND ECX,0x3
0070D028  F3 A4                     MOVSB.REP ES:EDI,ESI
0070D02A  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0070D02D  EB 02                     JMP 0x0070d031
LAB_0070d02f:
0070D02F  89 37                     MOV dword ptr [EDI],ESI
LAB_0070d031:
0070D031  8B 83 9A 00 00 00         MOV EAX,dword ptr [EBX + 0x9a]
0070D037  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070D03A  8D B3 9A 00 00 00         LEA ESI,[EBX + 0x9a]
0070D040  41                        INC ECX
0070D041  0F BF 10                  MOVSX EDX,word ptr [EAX]
0070D044  83 C7 04                  ADD EDI,0x4
0070D047  3B CA                     CMP ECX,EDX
0070D049  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070D04C  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0070D04F  7C 98                     JL 0x0070cfe9
0070D051  33 FF                     XOR EDI,EDI
LAB_0070d053:
0070D053  89 BB 86 00 00 00         MOV dword ptr [EBX + 0x86],EDI
0070D059  8B 06                     MOV EAX,dword ptr [ESI]
0070D05B  33 C9                     XOR ECX,ECX
0070D05D  66 39 78 64               CMP word ptr [EAX + 0x64],DI
0070D061  76 2D                     JBE 0x0070d090
0070D063  33 D2                     XOR EDX,EDX
0070D065  EB 03                     JMP 0x0070d06a
LAB_0070d067:
0070D067  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_0070d06a:
0070D06A  0F BF 44 02 6A            MOVSX EAX,word ptr [EDX + EAX*0x1 + 0x6a]
0070D06F  3B 83 86 00 00 00         CMP EAX,dword ptr [EBX + 0x86]
0070D075  7E 06                     JLE 0x0070d07d
0070D077  89 83 86 00 00 00         MOV dword ptr [EBX + 0x86],EAX
LAB_0070d07d:
0070D07D  8B 06                     MOV EAX,dword ptr [ESI]
0070D07F  83 C2 0A                  ADD EDX,0xa
0070D082  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0070D085  33 D2                     XOR EDX,EDX
0070D087  66 8B 50 64               MOV DX,word ptr [EAX + 0x64]
0070D08B  41                        INC ECX
0070D08C  3B CA                     CMP ECX,EDX
0070D08E  7C D7                     JL 0x0070d067
LAB_0070d090:
0070D090  89 BB 8A 00 00 00         MOV dword ptr [EBX + 0x8a],EDI
0070D096  8B 06                     MOV EAX,dword ptr [ESI]
0070D098  33 C9                     XOR ECX,ECX
0070D09A  66 39 78 64               CMP word ptr [EAX + 0x64],DI
0070D09E  76 2D                     JBE 0x0070d0cd
0070D0A0  33 D2                     XOR EDX,EDX
0070D0A2  EB 03                     JMP 0x0070d0a7
LAB_0070d0a4:
0070D0A4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_0070d0a7:
0070D0A7  0F BF 44 02 6C            MOVSX EAX,word ptr [EDX + EAX*0x1 + 0x6c]
0070D0AC  3B 83 8A 00 00 00         CMP EAX,dword ptr [EBX + 0x8a]
0070D0B2  7E 06                     JLE 0x0070d0ba
0070D0B4  89 83 8A 00 00 00         MOV dword ptr [EBX + 0x8a],EAX
LAB_0070d0ba:
0070D0BA  8B 06                     MOV EAX,dword ptr [ESI]
0070D0BC  83 C2 0A                  ADD EDX,0xa
0070D0BF  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0070D0C2  33 D2                     XOR EDX,EDX
0070D0C4  66 8B 50 64               MOV DX,word ptr [EAX + 0x64]
0070D0C8  41                        INC ECX
0070D0C9  3B CA                     CMP ECX,EDX
0070D0CB  7C D7                     JL 0x0070d0a4
LAB_0070d0cd:
0070D0CD  C7 83 8E 00 00 00 F0 7F 00 00  MOV dword ptr [EBX + 0x8e],0x7ff0
0070D0D7  8B 06                     MOV EAX,dword ptr [ESI]
0070D0D9  33 C9                     XOR ECX,ECX
0070D0DB  66 39 78 64               CMP word ptr [EAX + 0x64],DI
0070D0DF  76 2D                     JBE 0x0070d10e
0070D0E1  33 D2                     XOR EDX,EDX
0070D0E3  EB 03                     JMP 0x0070d0e8
LAB_0070d0e5:
0070D0E5  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_0070d0e8:
0070D0E8  0F BF 44 02 6A            MOVSX EAX,word ptr [EDX + EAX*0x1 + 0x6a]
0070D0ED  3B 83 8E 00 00 00         CMP EAX,dword ptr [EBX + 0x8e]
0070D0F3  7D 06                     JGE 0x0070d0fb
0070D0F5  89 83 8E 00 00 00         MOV dword ptr [EBX + 0x8e],EAX
LAB_0070d0fb:
0070D0FB  8B 06                     MOV EAX,dword ptr [ESI]
0070D0FD  83 C2 0A                  ADD EDX,0xa
0070D100  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0070D103  33 D2                     XOR EDX,EDX
0070D105  66 8B 50 64               MOV DX,word ptr [EAX + 0x64]
0070D109  41                        INC ECX
0070D10A  3B CA                     CMP ECX,EDX
0070D10C  7C D7                     JL 0x0070d0e5
LAB_0070d10e:
0070D10E  C7 83 92 00 00 00 F0 7F 00 00  MOV dword ptr [EBX + 0x92],0x7ff0
0070D118  8B 06                     MOV EAX,dword ptr [ESI]
0070D11A  33 C9                     XOR ECX,ECX
0070D11C  66 39 78 64               CMP word ptr [EAX + 0x64],DI
0070D120  76 23                     JBE 0x0070d145
LAB_0070d122:
0070D122  0F BF 44 07 6C            MOVSX EAX,word ptr [EDI + EAX*0x1 + 0x6c]
0070D127  3B 83 92 00 00 00         CMP EAX,dword ptr [EBX + 0x92]
0070D12D  7D 06                     JGE 0x0070d135
0070D12F  89 83 92 00 00 00         MOV dword ptr [EBX + 0x92],EAX
LAB_0070d135:
0070D135  8B 06                     MOV EAX,dword ptr [ESI]
0070D137  33 D2                     XOR EDX,EDX
0070D139  41                        INC ECX
0070D13A  83 C7 0A                  ADD EDI,0xa
0070D13D  66 8B 50 64               MOV DX,word ptr [EAX + 0x64]
0070D141  3B CA                     CMP ECX,EDX
0070D143  7C DD                     JL 0x0070d122
LAB_0070d145:
0070D145  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0070D148  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070D14D  8B C3                     MOV EAX,EBX
0070D14F  5F                        POP EDI
0070D150  5E                        POP ESI
0070D151  5B                        POP EBX
0070D152  8B E5                     MOV ESP,EBP
0070D154  5D                        POP EBP
0070D155  C3                        RET
LAB_0070d156:
0070D156  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0070D159  68 78 01 7F 00            PUSH 0x7f0178
0070D15E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070D163  57                        PUSH EDI
0070D164  56                        PUSH ESI
0070D165  68 DC 00 00 00            PUSH 0xdc
0070D16A  68 90 01 7F 00            PUSH 0x7f0190
0070D16F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070D175  E8 56 03 FA FF            CALL 0x006ad4d0
0070D17A  83 C4 18                  ADD ESP,0x18
0070D17D  85 C0                     TEST EAX,EAX
0070D17F  74 01                     JZ 0x0070d182
0070D181  CC                        INT3
LAB_0070d182:
0070D182  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070D185  3B C6                     CMP EAX,ESI
0070D187  74 40                     JZ 0x0070d1c9
0070D189  8B 90 9A 00 00 00         MOV EDX,dword ptr [EAX + 0x9a]
0070D18F  8D 98 9A 00 00 00         LEA EBX,[EAX + 0x9a]
0070D195  66 83 3A 00               CMP word ptr [EDX],0x0
0070D199  7E 1C                     JLE 0x0070d1b7
0070D19B  8D 78 04                  LEA EDI,[EAX + 0x4]
LAB_0070d19e:
0070D19E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070D1A1  57                        PUSH EDI
0070D1A2  E8 39 4F FE FF            CALL 0x006f20e0
0070D1A7  8B 03                     MOV EAX,dword ptr [EBX]
0070D1A9  46                        INC ESI
0070D1AA  83 C7 04                  ADD EDI,0x4
0070D1AD  0F BF 08                  MOVSX ECX,word ptr [EAX]
0070D1B0  3B F1                     CMP ESI,ECX
0070D1B2  7C EA                     JL 0x0070d19e
0070D1B4  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_0070d1b7:
0070D1B7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070D1BA  53                        PUSH EBX
0070D1BB  E8 20 4F FE FF            CALL 0x006f20e0
0070D1C0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0070D1C3  52                        PUSH EDX
0070D1C4  E8 C7 8C F9 FF            CALL 0x006a5e90
LAB_0070d1c9:
0070D1C9  68 E4 00 00 00            PUSH 0xe4
0070D1CE  68 90 01 7F 00            PUSH 0x7f0190
0070D1D3  6A 00                     PUSH 0x0
0070D1D5  57                        PUSH EDI
0070D1D6  E8 65 8C F9 FF            CALL 0x006a5e40
0070D1DB  5F                        POP EDI
0070D1DC  5E                        POP ESI
0070D1DD  33 C0                     XOR EAX,EAX
0070D1DF  5B                        POP EBX
0070D1E0  8B E5                     MOV ESP,EBP
0070D1E2  5D                        POP EBP
0070D1E3  C3                        RET
