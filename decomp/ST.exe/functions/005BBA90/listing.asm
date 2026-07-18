FUN_005bba90:
005BBA90  55                        PUSH EBP
005BBA91  8B EC                     MOV EBP,ESP
005BBA93  81 EC CC 0D 00 00         SUB ESP,0xdcc
005BBA99  53                        PUSH EBX
005BBA9A  56                        PUSH ESI
005BBA9B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005BBA9E  57                        PUSH EDI
005BBA9F  B9 35 01 00 00            MOV ECX,0x135
005BBAA4  33 C0                     XOR EAX,EAX
005BBAA6  8D BD C0 FA FF FF         LEA EDI,[EBP + 0xfffffac0]
005BBAAC  8D 55 98                  LEA EDX,[EBP + -0x68]
005BBAAF  F3 AB                     STOSD.REP ES:EDI
005BBAB1  B9 23 02 00 00            MOV ECX,0x223
005BBAB6  8D BD 34 F2 FF FF         LEA EDI,[EBP + 0xfffff234]
005BBABC  F3 AB                     STOSD.REP ES:EDI
005BBABE  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BBAC3  33 FF                     XOR EDI,EDI
005BBAC5  8D 4D 94                  LEA ECX,[EBP + -0x6c]
005BBAC8  57                        PUSH EDI
005BBAC9  52                        PUSH EDX
005BBACA  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
005BBACD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BBAD3  E8 18 1D 17 00            CALL 0x0072d7f0
005BBAD8  8B F0                     MOV ESI,EAX
005BBADA  83 C4 08                  ADD ESP,0x8
005BBADD  3B F7                     CMP ESI,EDI
005BBADF  0F 85 ED 03 00 00         JNZ 0x005bbed2
005BBAE5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005BBAE8  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BBAEE  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005BBAF4  84 C0                     TEST AL,AL
005BBAF6  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
005BBAF9  75 12                     JNZ 0x005bbb0d
005BBAFB  8B 81 8A 06 00 00         MOV EAX,dword ptr [ECX + 0x68a]
005BBB01  3B C7                     CMP EAX,EDI
005BBB03  74 1A                     JZ 0x005bbb1f
005BBB05  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005BBB08  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005BBB0B  EB 15                     JMP 0x005bbb22
LAB_005bbb0d:
005BBB0D  8B 81 8E 06 00 00         MOV EAX,dword ptr [ECX + 0x68e]
005BBB13  3B C7                     CMP EAX,EDI
005BBB15  74 08                     JZ 0x005bbb1f
005BBB17  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005BBB1A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005BBB1D  EB 03                     JMP 0x005bbb22
LAB_005bbb1f:
005BBB1F  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_005bbb22:
005BBB22  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005BBB25  33 D2                     XOR EDX,EDX
005BBB27  3B C7                     CMP EAX,EDI
005BBB29  0F 9C C2                  SETL DL
005BBB2C  4A                        DEC EDX
005BBB2D  23 D0                     AND EDX,EAX
005BBB2F  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005BBB32  84 C0                     TEST AL,AL
005BBB34  89 95 D8 FA FF FF         MOV dword ptr [EBP + 0xfffffad8],EDX
005BBB3A  0F 84 FF 01 00 00         JZ 0x005bbd3f
005BBB40  8A 0D 4C 73 80 00         MOV CL,byte ptr [0x0080734c]
005BBB46  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005BBB49  BB 02 00 00 00            MOV EBX,0x2
005BBB4E  89 BD C0 FA FF FF         MOV dword ptr [EBP + 0xfffffac0],EDI
005BBB54  84 C9                     TEST CL,CL
005BBB56  C7 85 C8 FA FF FF 7A 00 00 00  MOV dword ptr [EBP + 0xfffffac8],0x7a
005BBB60  C7 85 CC FA FF FF 67 00 00 00  MOV dword ptr [EBP + 0xfffffacc],0x67
005BBB6A  C7 85 D0 FA FF FF 08 02 00 00  MOV dword ptr [EBP + 0xfffffad0],0x208
005BBB74  C7 85 D4 FA FF FF 43 01 00 00  MOV dword ptr [EBP + 0xfffffad4],0x143
005BBB7E  89 BD DC FA FF FF         MOV dword ptr [EBP + 0xfffffadc],EDI
005BBB84  89 85 E8 FA FF FF         MOV dword ptr [EBP + 0xfffffae8],EAX
005BBB8A  89 9D EC FA FF FF         MOV dword ptr [EBP + 0xfffffaec],EBX
005BBB90  C7 85 F0 FA FF FF 60 81 00 00  MOV dword ptr [EBP + 0xfffffaf0],0x8160
005BBB9A  89 85 08 FB FF FF         MOV dword ptr [EBP + 0xfffffb08],EAX
005BBBA0  89 9D 0C FB FF FF         MOV dword ptr [EBP + 0xfffffb0c],EBX
005BBBA6  C7 85 10 FB FF FF 61 81 00 00  MOV dword ptr [EBP + 0xfffffb10],0x8161
005BBBB0  89 85 28 FB FF FF         MOV dword ptr [EBP + 0xfffffb28],EAX
005BBBB6  89 9D 2C FB FF FF         MOV dword ptr [EBP + 0xfffffb2c],EBX
005BBBBC  C7 85 30 FB FF FF 62 81 00 00  MOV dword ptr [EBP + 0xfffffb30],0x8162
005BBBC6  89 85 48 FB FF FF         MOV dword ptr [EBP + 0xfffffb48],EAX
005BBBCC  89 9D 4C FB FF FF         MOV dword ptr [EBP + 0xfffffb4c],EBX
005BBBD2  C7 85 50 FB FF FF 63 81 00 00  MOV dword ptr [EBP + 0xfffffb50],0x8163
005BBBDC  74 07                     JZ 0x005bbbe5
005BBBDE  C7 45 90 01 00 00 00      MOV dword ptr [EBP + -0x70],0x1
LAB_005bbbe5:
005BBBE5  8B 96 97 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a97]
005BBBEB  8B 8E 93 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a93]
005BBBF1  89 95 FC FB FF FF         MOV dword ptr [EBP + 0xfffffbfc],EDX
005BBBF7  8B 96 9F 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a9f]
005BBBFD  89 95 04 FC FF FF         MOV dword ptr [EBP + 0xfffffc04],EDX
005BBC03  8B 96 24 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b24]
005BBC09  89 95 78 FD FF FF         MOV dword ptr [EBP + 0xfffffd78],EDX
005BBC0F  8B 96 28 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b28]
005BBC15  89 95 7C FD FF FF         MOV dword ptr [EBP + 0xfffffd7c],EDX
005BBC1B  8B 96 2C 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b2c]
005BBC21  89 8D F8 FB FF FF         MOV dword ptr [EBP + 0xfffffbf8],ECX
005BBC27  8B 8E 9B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a9b]
005BBC2D  89 95 80 FD FF FF         MOV dword ptr [EBP + 0xfffffd80],EDX
005BBC33  8B 96 30 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b30]
005BBC39  89 8D 00 FC FF FF         MOV dword ptr [EBP + 0xfffffc00],ECX
005BBC3F  B9 32 00 00 00            MOV ECX,0x32
005BBC44  89 95 84 FD FF FF         MOV dword ptr [EBP + 0xfffffd84],EDX
005BBC4A  8B 96 BD 1B 00 00         MOV EDX,dword ptr [ESI + 0x1bbd]
005BBC50  89 8D 04 FD FF FF         MOV dword ptr [EBP + 0xfffffd04],ECX
005BBC56  89 8D 84 FE FF FF         MOV dword ptr [EBP + 0xfffffe84],ECX
005BBC5C  8B 8E B5 1B 00 00         MOV ECX,dword ptr [ESI + 0x1bb5]
005BBC62  89 95 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EDX
005BBC68  8D 95 C0 FA FF FF         LEA EDX,[EBP + 0xfffffac0]
005BBC6E  89 8D FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],ECX
005BBC74  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005BBC77  57                        PUSH EDI
005BBC78  52                        PUSH EDX
005BBC79  8D 96 73 1A 00 00         LEA EDX,[ESI + 0x1a73]
005BBC7F  89 9D EC FB FF FF         MOV dword ptr [EBP + 0xfffffbec],EBX
005BBC85  89 BD F0 FB FF FF         MOV dword ptr [EBP + 0xfffffbf0],EDI
005BBC8B  89 9D F4 FB FF FF         MOV dword ptr [EBP + 0xfffffbf4],EBX
005BBC91  C7 85 00 FD FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffd00],0x1f4
005BBC9B  89 85 50 FC FF FF         MOV dword ptr [EBP + 0xfffffc50],EAX
005BBCA1  89 9D 54 FC FF FF         MOV dword ptr [EBP + 0xfffffc54],EBX
005BBCA7  C7 85 58 FC FF FF 64 81 00 00  MOV dword ptr [EBP + 0xfffffc58],0x8164
005BBCB1  89 9D 6C FD FF FF         MOV dword ptr [EBP + 0xfffffd6c],EBX
005BBCB7  89 BD 70 FD FF FF         MOV dword ptr [EBP + 0xfffffd70],EDI
005BBCBD  89 9D 74 FD FF FF         MOV dword ptr [EBP + 0xfffffd74],EBX
005BBCC3  C7 85 80 FE FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffe80],0x1f4
005BBCCD  89 85 D0 FD FF FF         MOV dword ptr [EBP + 0xfffffdd0],EAX
005BBCD3  89 9D D4 FD FF FF         MOV dword ptr [EBP + 0xfffffdd4],EBX
005BBCD9  C7 85 D8 FD FF FF 65 81 00 00  MOV dword ptr [EBP + 0xfffffdd8],0x8165
005BBCE3  C7 85 EC FE FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffffeec],0x3
005BBCED  C7 85 F0 FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffef0],0x1
005BBCF7  89 BD F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EDI
005BBCFD  C7 85 00 FF FF FF 8A 00 00 00  MOV dword ptr [EBP + 0xffffff00],0x8a
005BBD07  C7 85 08 FF FF FF E6 00 00 00  MOV dword ptr [EBP + 0xffffff08],0xe6
005BBD11  C7 85 0C FF FF FF 0E 00 00 00  MOV dword ptr [EBP + 0xffffff0c],0xe
005BBD1B  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
005BBD21  89 9D 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EBX
005BBD27  C7 85 48 FF FF FF 66 81 00 00  MOV dword ptr [EBP + 0xffffff48],0x8166
005BBD31  8B 01                     MOV EAX,dword ptr [ECX]
005BBD33  57                        PUSH EDI
005BBD34  52                        PUSH EDX
005BBD35  6A 07                     PUSH 0x7
005BBD37  FF 50 08                  CALL dword ptr [EAX + 0x8]
005BBD3A  E9 18 01 00 00            JMP 0x005bbe57
LAB_005bbd3f:
005BBD3F  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005BBD42  BB 02 00 00 00            MOV EBX,0x2
005BBD47  84 C0                     TEST AL,AL
005BBD49  0F 85 B1 00 00 00         JNZ 0x005bbe00
005BBD4F  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005BBD52  89 BD 34 F2 FF FF         MOV dword ptr [EBP + 0xfffff234],EDI
005BBD58  C7 85 38 F2 FF FF 09 00 00 00  MOV dword ptr [EBP + 0xfffff238],0x9
005BBD62  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
005BBD65  8B 8E 92 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c92]
005BBD6B  89 95 80 F2 FF FF         MOV dword ptr [EBP + 0xfffff280],EDX
005BBD71  8D 95 34 F2 FF FF         LEA EDX,[EBP + 0xfffff234]
005BBD77  89 8D 54 F2 FF FF         MOV dword ptr [EBP + 0xfffff254],ECX
005BBD7D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005BBD80  57                        PUSH EDI
005BBD81  52                        PUSH EDX
005BBD82  8D 96 86 1C 00 00         LEA EDX,[ESI + 0x1c86]
005BBD88  89 85 3C F2 FF FF         MOV dword ptr [EBP + 0xfffff23c],EAX
005BBD8E  C7 85 40 F2 FF FF 7D 00 00 00  MOV dword ptr [EBP + 0xfffff240],0x7d
005BBD98  C7 85 44 F2 FF FF AF 01 00 00  MOV dword ptr [EBP + 0xfffff244],0x1af
005BBDA2  C7 85 48 F2 FF FF 26 02 00 00  MOV dword ptr [EBP + 0xfffff248],0x226
005BBDAC  C7 85 4C F2 FF FF 14 00 00 00  MOV dword ptr [EBP + 0xfffff24c],0x14
005BBDB6  C7 85 50 F2 FF FF 04 01 00 00  MOV dword ptr [EBP + 0xfffff250],0x104
005BBDC0  89 9D 84 F2 FF FF         MOV dword ptr [EBP + 0xfffff284],EBX
005BBDC6  C7 85 88 F2 FF FF 1F 63 00 00  MOV dword ptr [EBP + 0xfffff288],0x631f
005BBDD0  8B 01                     MOV EAX,dword ptr [ECX]
005BBDD2  57                        PUSH EDI
005BBDD3  52                        PUSH EDX
005BBDD4  6A 06                     PUSH 0x6
005BBDD6  FF 50 08                  CALL dword ptr [EAX + 0x8]
005BBDD9  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
005BBDDF  8D 46 1D                  LEA EAX,[ESI + 0x1d]
005BBDE2  50                        PUSH EAX
005BBDE3  51                        PUSH ECX
005BBDE4  53                        PUSH EBX
005BBDE5  8B CE                     MOV ECX,ESI
005BBDE7  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005BBDEE  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005BBDF5  E8 86 A2 12 00            CALL 0x006e6080
005BBDFA  8B 95 D8 FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffad8]
LAB_005bbe00:
005BBE00  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005BBE06  39 B8 E6 02 00 00         CMP dword ptr [EAX + 0x2e6],EDI
005BBE0C  74 49                     JZ 0x005bbe57
005BBE0E  B9 06 00 00 00            MOV ECX,0x6
005BBE13  33 C0                     XOR EAX,EAX
005BBE15  8D 7D D8                  LEA EDI,[EBP + -0x28]
005BBE18  F3 AB                     STOSD.REP ES:EDI
005BBE1A  F7 DA                     NEG EDX
005BBE1C  1B D2                     SBB EDX,EDX
005BBE1E  66 AB                     STOSW ES:EDI
005BBE20  23 D3                     AND EDX,EBX
005BBE22  B8 01 00 00 00            MOV EAX,0x1
005BBE27  4A                        DEC EDX
005BBE28  66 89 45 E6               MOV word ptr [EBP + -0x1a],AX
005BBE2C  66 89 45 E4               MOV word ptr [EBP + -0x1c],AX
005BBE30  66 89 45 E2               MOV word ptr [EBP + -0x1e],AX
005BBE34  66 89 45 DC               MOV word ptr [EBP + -0x24],AX
005BBE38  66 89 45 D8               MOV word ptr [EBP + -0x28],AX
005BBE3C  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005BBE42  66 89 55 DA               MOV word ptr [EBP + -0x26],DX
005BBE46  8D 55 D8                  LEA EDX,[EBP + -0x28]
005BBE49  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005BBE4F  52                        PUSH EDX
005BBE50  E8 FC 8C E4 FF            CALL 0x00404b51
005BBE55  33 FF                     XOR EDI,EDI
LAB_005bbe57:
005BBE57  8B 86 73 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a73]
005BBE5D  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
005BBE60  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005BBE63  8B CE                     MOV ECX,ESI
005BBE65  57                        PUSH EDI
005BBE66  50                        PUSH EAX
005BBE67  53                        PUSH EBX
005BBE68  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005BBE6F  E8 0C A2 12 00            CALL 0x006e6080
005BBE74  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005BBE77  8B 96 73 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a73]
005BBE7D  33 C9                     XOR ECX,ECX
005BBE7F  57                        PUSH EDI
005BBE80  85 C0                     TEST EAX,EAX
005BBE82  0F 9E C1                  SETLE CL
005BBE85  49                        DEC ECX
005BBE86  52                        PUSH EDX
005BBE87  23 C8                     AND ECX,EAX
005BBE89  53                        PUSH EBX
005BBE8A  89 4E 31                  MOV dword ptr [ESI + 0x31],ECX
005BBE8D  8B CE                     MOV ECX,ESI
005BBE8F  C7 46 2D 28 00 00 00      MOV dword ptr [ESI + 0x2d],0x28
005BBE96  E8 E5 A1 12 00            CALL 0x006e6080
005BBE9B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005BBE9E  85 C0                     TEST EAX,EAX
005BBEA0  7E 1E                     JLE 0x005bbec0
005BBEA2  8B 86 73 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a73]
005BBEA8  57                        PUSH EDI
005BBEA9  50                        PUSH EAX
005BBEAA  53                        PUSH EBX
005BBEAB  8B CE                     MOV ECX,ESI
005BBEAD  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005BBEB4  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005BBEBB  E8 C0 A1 12 00            CALL 0x006e6080
LAB_005bbec0:
005BBEC0  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
005BBEC3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BBEC9  5F                        POP EDI
005BBECA  5E                        POP ESI
005BBECB  5B                        POP EBX
005BBECC  8B E5                     MOV ESP,EBP
005BBECE  5D                        POP EBP
005BBECF  C2 04 00                  RET 0x4
LAB_005bbed2:
005BBED2  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
005BBED5  68 6C CE 7C 00            PUSH 0x7cce6c
005BBEDA  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BBEDF  56                        PUSH ESI
005BBEE0  57                        PUSH EDI
005BBEE1  68 4D 02 00 00            PUSH 0x24d
005BBEE6  68 28 CD 7C 00            PUSH 0x7ccd28
005BBEEB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BBEF1  E8 DA 15 0F 00            CALL 0x006ad4d0
005BBEF6  83 C4 18                  ADD ESP,0x18
005BBEF9  85 C0                     TEST EAX,EAX
005BBEFB  74 01                     JZ 0x005bbefe
005BBEFD  CC                        INT3
LAB_005bbefe:
005BBEFE  68 4D 02 00 00            PUSH 0x24d
005BBF03  68 28 CD 7C 00            PUSH 0x7ccd28
005BBF08  57                        PUSH EDI
005BBF09  56                        PUSH ESI
005BBF0A  E8 31 9F 0E 00            CALL 0x006a5e40
005BBF0F  5F                        POP EDI
005BBF10  5E                        POP ESI
005BBF11  5B                        POP EBX
005BBF12  8B E5                     MOV ESP,EBP
005BBF14  5D                        POP EBP
005BBF15  C2 04 00                  RET 0x4
