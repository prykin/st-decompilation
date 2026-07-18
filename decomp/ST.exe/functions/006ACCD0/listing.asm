FUN_006accd0:
006ACCD0  55                        PUSH EBP
006ACCD1  8B EC                     MOV EBP,ESP
006ACCD3  81 EC F8 00 00 00         SUB ESP,0xf8
006ACCD9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006ACCDC  53                        PUSH EBX
006ACCDD  56                        PUSH ESI
006ACCDE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006ACCE1  83 F8 01                  CMP EAX,0x1
006ACCE4  57                        PUSH EDI
006ACCE5  0F 8E 76 01 00 00         JLE 0x006ace61
006ACCEB  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
006ACCEF  03 C6                     ADD EAX,ESI
006ACCF1  8D 8D 08 FF FF FF         LEA ECX,[EBP + 0xffffff08]
006ACCF7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006ACCFA  8D 85 0C FF FF FF         LEA EAX,[EBP + 0xffffff0c]
006ACD00  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
006ACD07  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006ACD0A  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_006acd0d:
006ACD0D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006ACD10  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006ACD13  8B C7                     MOV EAX,EDI
006ACD15  2B C6                     SUB EAX,ESI
006ACD17  99                        CDQ
006ACD18  F7 F9                     IDIV ECX
006ACD1A  83 F8 08                  CMP EAX,0x8
006ACD1D  0F 8C CF 00 00 00         JL 0x006acdf2
006ACD23  99                        CDQ
006ACD24  2B C2                     SUB EAX,EDX
006ACD26  51                        PUSH ECX
006ACD27  D1 F8                     SAR EAX,0x1
006ACD29  0F AF C1                  IMUL EAX,ECX
006ACD2C  03 C6                     ADD EAX,ESI
006ACD2E  50                        PUSH EAX
006ACD2F  56                        PUSH ESI
006ACD30  E8 CB 19 02 00            CALL 0x006ce700
006ACD35  8B DE                     MOV EBX,ESI
LAB_006acd37:
006ACD37  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006ACD3A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006ACD3D  03 D9                     ADD EBX,ECX
006ACD3F  3B D8                     CMP EBX,EAX
006ACD41  73 0C                     JNC 0x006acd4f
006ACD43  56                        PUSH ESI
006ACD44  53                        PUSH EBX
006ACD45  FF 55 14                  CALL dword ptr [EBP + 0x14]
006ACD48  83 C4 08                  ADD ESP,0x8
006ACD4B  85 C0                     TEST EAX,EAX
006ACD4D  7E E8                     JLE 0x006acd37
LAB_006acd4f:
006ACD4F  2B 7D 10                  SUB EDI,dword ptr [EBP + 0x10]
006ACD52  3B FE                     CMP EDI,ESI
006ACD54  76 0C                     JBE 0x006acd62
006ACD56  56                        PUSH ESI
006ACD57  57                        PUSH EDI
006ACD58  FF 55 14                  CALL dword ptr [EBP + 0x14]
006ACD5B  83 C4 08                  ADD ESP,0x8
006ACD5E  85 C0                     TEST EAX,EAX
006ACD60  7D ED                     JGE 0x006acd4f
LAB_006acd62:
006ACD62  3B FB                     CMP EDI,EBX
006ACD64  72 0D                     JC 0x006acd73
006ACD66  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006ACD69  52                        PUSH EDX
006ACD6A  57                        PUSH EDI
006ACD6B  53                        PUSH EBX
006ACD6C  E8 8F 19 02 00            CALL 0x006ce700
006ACD71  EB C4                     JMP 0x006acd37
LAB_006acd73:
006ACD73  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006ACD76  50                        PUSH EAX
006ACD77  57                        PUSH EDI
006ACD78  56                        PUSH ESI
006ACD79  E8 82 19 02 00            CALL 0x006ce700
006ACD7E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006ACD81  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006ACD84  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
006ACD87  3B CA                     CMP ECX,EDX
006ACD89  72 08                     JC 0x006acd93
006ACD8B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006ACD8E  E9 7A FF FF FF            JMP 0x006acd0d
LAB_006acd93:
006ACD93  03 C6                     ADD EAX,ESI
006ACD95  3B C7                     CMP EAX,EDI
006ACD97  72 07                     JC 0x006acda0
006ACD99  8B F3                     MOV ESI,EBX
006ACD9B  E9 6D FF FF FF            JMP 0x006acd0d
LAB_006acda0:
006ACDA0  8B CA                     MOV ECX,EDX
006ACDA2  8B C7                     MOV EAX,EDI
006ACDA4  2B CB                     SUB ECX,EBX
006ACDA6  2B C6                     SUB EAX,ESI
006ACDA8  3B C1                     CMP EAX,ECX
006ACDAA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006ACDAD  7C 21                     JL 0x006acdd0
006ACDAF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006ACDB2  89 30                     MOV dword ptr [EAX],ESI
006ACDB4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006ACDB7  83 C0 08                  ADD EAX,0x8
006ACDBA  89 39                     MOV dword ptr [ECX],EDI
006ACDBC  46                        INC ESI
006ACDBD  83 C1 08                  ADD ECX,0x8
006ACDC0  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006ACDC3  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006ACDC6  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006ACDC9  8B F3                     MOV ESI,EBX
006ACDCB  E9 3D FF FF FF            JMP 0x006acd0d
LAB_006acdd0:
006ACDD0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006ACDD3  89 18                     MOV dword ptr [EAX],EBX
006ACDD5  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006ACDD8  83 C0 08                  ADD EAX,0x8
006ACDDB  89 11                     MOV dword ptr [ECX],EDX
006ACDDD  43                        INC EBX
006ACDDE  83 C1 08                  ADD ECX,0x8
006ACDE1  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006ACDE4  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006ACDE7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006ACDEA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006ACDED  E9 1B FF FF FF            JMP 0x006acd0d
LAB_006acdf2:
006ACDF2  2B F9                     SUB EDI,ECX
006ACDF4  8B DF                     MOV EBX,EDI
006ACDF6  3B DE                     CMP EBX,ESI
006ACDF8  76 3B                     JBE 0x006ace35
LAB_006acdfa:
006ACDFA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006ACDFD  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006ACE00  8D 3C 0E                  LEA EDI,[ESI + ECX*0x1]
006ACE03  3B FB                     CMP EDI,EBX
006ACE05  77 19                     JA 0x006ace20
LAB_006ace07:
006ACE07  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006ACE0A  52                        PUSH EDX
006ACE0B  57                        PUSH EDI
006ACE0C  FF 55 14                  CALL dword ptr [EBP + 0x14]
006ACE0F  83 C4 08                  ADD ESP,0x8
006ACE12  85 C0                     TEST EAX,EAX
006ACE14  7E 03                     JLE 0x006ace19
006ACE16  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_006ace19:
006ACE19  03 7D 10                  ADD EDI,dword ptr [EBP + 0x10]
006ACE1C  3B FB                     CMP EDI,EBX
006ACE1E  76 E7                     JBE 0x006ace07
LAB_006ace20:
006ACE20  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006ACE23  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006ACE26  50                        PUSH EAX
006ACE27  53                        PUSH EBX
006ACE28  51                        PUSH ECX
006ACE29  E8 D2 18 02 00            CALL 0x006ce700
006ACE2E  2B 5D 10                  SUB EBX,dword ptr [EBP + 0x10]
006ACE31  3B DE                     CMP EBX,ESI
006ACE33  77 C5                     JA 0x006acdfa
LAB_006ace35:
006ACE35  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006ACE38  85 C0                     TEST EAX,EAX
006ACE3A  7E 25                     JLE 0x006ace61
006ACE3C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006ACE3F  8B F8                     MOV EDI,EAX
006ACE41  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006ACE44  4F                        DEC EDI
006ACE45  8B 51 F8                  MOV EDX,dword ptr [ECX + -0x8]
006ACE48  83 E8 08                  SUB EAX,0x8
006ACE4B  83 E9 08                  SUB ECX,0x8
006ACE4E  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006ACE51  8B 30                     MOV ESI,dword ptr [EAX]
006ACE53  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006ACE56  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006ACE59  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006ACE5C  E9 AC FE FF FF            JMP 0x006acd0d
LAB_006ace61:
006ACE61  5F                        POP EDI
006ACE62  5E                        POP ESI
006ACE63  5B                        POP EBX
006ACE64  8B E5                     MOV ESP,EBP
006ACE66  5D                        POP EBP
006ACE67  C2 10 00                  RET 0x10
