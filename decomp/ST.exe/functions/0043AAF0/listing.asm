STAllPlayersC::GetCamPoint:
0043AAF0  55                        PUSH EBP
0043AAF1  8B EC                     MOV EBP,ESP
0043AAF3  83 EC 14                  SUB ESP,0x14
0043AAF6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0043AAF9  53                        PUSH EBX
0043AAFA  56                        PUSH ESI
0043AAFB  57                        PUSH EDI
0043AAFC  33 DB                     XOR EBX,EBX
0043AAFE  33 F6                     XOR ESI,ESI
0043AB00  33 FF                     XOR EDI,EDI
0043AB02  C7 45 F0 10 27 00 00      MOV dword ptr [EBP + -0x10],0x2710
0043AB09  85 C0                     TEST EAX,EAX
0043AB0B  75 21                     JNZ 0x0043ab2e
0043AB0D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0043AB10  85 C0                     TEST EAX,EAX
0043AB12  75 1A                     JNZ 0x0043ab2e
0043AB14  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0043AB17  85 C0                     TEST EAX,EAX
0043AB19  75 13                     JNZ 0x0043ab2e
0043AB1B  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0043AB1E  85 C0                     TEST EAX,EAX
0043AB20  75 0C                     JNZ 0x0043ab2e
0043AB22  5F                        POP EDI
0043AB23  5E                        POP ESI
0043AB24  83 C8 FF                  OR EAX,0xffffffff
0043AB27  5B                        POP EBX
0043AB28  8B E5                     MOV ESP,EBP
0043AB2A  5D                        POP EBP
0043AB2B  C2 20 00                  RET 0x20
LAB_0043ab2e:
0043AB2E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043AB31  3D 9A 01 00 00            CMP EAX,0x19a
0043AB36  0F 8F 8E 01 00 00         JG 0x0043acca
0043AB3C  74 33                     JZ 0x0043ab71
0043AB3E  83 F8 3C                  CMP EAX,0x3c
0043AB41  74 2E                     JZ 0x0043ab71
0043AB43  83 F8 5A                  CMP EAX,0x5a
0043AB46  74 1A                     JZ 0x0043ab62
0043AB48  3D 72 01 00 00            CMP EAX,0x172
0043AB4D  0F 85 88 01 00 00         JNZ 0x0043acdb
0043AB53  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0043AB56  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043AB59  6A 02                     PUSH 0x2
0043AB5B  50                        PUSH EAX
0043AB5C  51                        PUSH ECX
0043AB5D  E9 CC 01 00 00            JMP 0x0043ad2e
LAB_0043ab62:
0043AB62  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0043AB65  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043AB68  6A 04                     PUSH 0x4
0043AB6A  52                        PUSH EDX
0043AB6B  50                        PUSH EAX
0043AB6C  E9 BD 01 00 00            JMP 0x0043ad2e
LAB_0043ab71:
0043AB71  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043AB74  85 C9                     TEST ECX,ECX
0043AB76  75 0C                     JNZ 0x0043ab84
0043AB78  5F                        POP EDI
0043AB79  5E                        POP ESI
0043AB7A  83 C8 FF                  OR EAX,0xffffffff
0043AB7D  5B                        POP EBX
0043AB7E  8B E5                     MOV ESP,EBP
0043AB80  5D                        POP EBP
0043AB81  C2 20 00                  RET 0x20
LAB_0043ab84:
0043AB84  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0043AB87  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0043AB8E  85 C0                     TEST EAX,EAX
0043AB90  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0043AB93  7E 5D                     JLE 0x0043abf2
0043AB95  EB 03                     JMP 0x0043ab9a
LAB_0043ab97:
0043AB97  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
LAB_0043ab9a:
0043AB9A  8D 55 F4                  LEA EDX,[EBP + -0xc]
0043AB9D  52                        PUSH EDX
0043AB9E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0043ABA1  E8 CA 20 27 00            CALL 0x006acc70
0043ABA6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0043ABA9  66 3D FF FF               CMP AX,0xffff
0043ABAD  74 30                     JZ 0x0043abdf
0043ABAF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0043ABB5  6A 01                     PUSH 0x1
0043ABB7  50                        PUSH EAX
0043ABB8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043ABBB  50                        PUSH EAX
0043ABBC  43                        INC EBX
0043ABBD  E8 F8 7C FC FF            CALL 0x004028ba
0043ABC2  8D 4D 16                  LEA ECX,[EBP + 0x16]
0043ABC5  8D 55 FC                  LEA EDX,[EBP + -0x4]
0043ABC8  51                        PUSH ECX
0043ABC9  8D 4D 08                  LEA ECX,[EBP + 0x8]
0043ABCC  52                        PUSH EDX
0043ABCD  51                        PUSH ECX
0043ABCE  8B C8                     MOV ECX,EAX
0043ABD0  E8 F0 6C FC FF            CALL 0x004018c5
0043ABD5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0043ABD8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043ABDB  03 F1                     ADD ESI,ECX
0043ABDD  03 F8                     ADD EDI,EAX
LAB_0043abdf:
0043ABDF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043ABE2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0043ABE5  40                        INC EAX
0043ABE6  3B C1                     CMP EAX,ECX
0043ABE8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0043ABEB  7C AA                     JL 0x0043ab97
0043ABED  66 85 DB                  TEST BX,BX
0043ABF0  75 0C                     JNZ 0x0043abfe
LAB_0043abf2:
0043ABF2  5F                        POP EDI
0043ABF3  5E                        POP ESI
0043ABF4  83 C8 FF                  OR EAX,0xffffffff
0043ABF7  5B                        POP EBX
0043ABF8  8B E5                     MOV ESP,EBP
0043ABFA  5D                        POP EBP
0043ABFB  C2 20 00                  RET 0x20
LAB_0043abfe:
0043ABFE  0F BF C6                  MOVSX EAX,SI
0043AC01  8B CB                     MOV ECX,EBX
0043AC03  99                        CDQ
0043AC04  81 E1 FF FF 00 00         AND ECX,0xffff
0043AC0A  F7 F9                     IDIV ECX
0043AC0C  8B D8                     MOV EBX,EAX
0043AC0E  0F BF C7                  MOVSX EAX,DI
0043AC11  99                        CDQ
0043AC12  F7 F9                     IDIV ECX
0043AC14  33 D2                     XOR EDX,EDX
0043AC16  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0043AC19  8B F8                     MOV EDI,EAX
LAB_0043ac1b:
0043AC1B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043AC1E  8D 45 F4                  LEA EAX,[EBP + -0xc]
0043AC21  50                        PUSH EAX
0043AC22  E8 49 20 27 00            CALL 0x006acc70
0043AC27  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0043AC2A  66 3D FF FF               CMP AX,0xffff
0043AC2E  74 7D                     JZ 0x0043acad
0043AC30  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043AC33  6A 01                     PUSH 0x1
0043AC35  50                        PUSH EAX
0043AC36  51                        PUSH ECX
0043AC37  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0043AC3D  E8 78 7C FC FF            CALL 0x004028ba
0043AC42  8B F0                     MOV ESI,EAX
0043AC44  8D 55 16                  LEA EDX,[EBP + 0x16]
0043AC47  8D 45 FC                  LEA EAX,[EBP + -0x4]
0043AC4A  52                        PUSH EDX
0043AC4B  8D 4D 08                  LEA ECX,[EBP + 0x8]
0043AC4E  50                        PUSH EAX
0043AC4F  51                        PUSH ECX
0043AC50  8B CE                     MOV ECX,ESI
0043AC52  E8 6E 6C FC FF            CALL 0x004018c5
0043AC57  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
0043AC5B  0F BF D7                  MOVSX EDX,DI
0043AC5E  0F BF C3                  MOVSX EAX,BX
0043AC61  52                        PUSH EDX
0043AC62  50                        PUSH EAX
0043AC63  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
0043AC67  51                        PUSH ECX
0043AC68  52                        PUSH EDX
0043AC69  E8 22 23 27 00            CALL 0x006acf90
0043AC6E  66 3B 45 F0               CMP AX,word ptr [EBP + -0x10]
0043AC72  73 39                     JNC 0x0043acad
0043AC74  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0043AC77  85 C9                     TEST ECX,ECX
0043AC79  74 06                     JZ 0x0043ac81
0043AC7B  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
0043AC7F  89 11                     MOV dword ptr [ECX],EDX
LAB_0043ac81:
0043AC81  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0043AC84  85 C9                     TEST ECX,ECX
0043AC86  74 06                     JZ 0x0043ac8e
0043AC88  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
0043AC8C  89 11                     MOV dword ptr [ECX],EDX
LAB_0043ac8e:
0043AC8E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0043AC91  85 C9                     TEST ECX,ECX
0043AC93  74 06                     JZ 0x0043ac9b
0043AC95  0F BF 55 16               MOVSX EDX,word ptr [EBP + 0x16]
0043AC99  89 11                     MOV dword ptr [ECX],EDX
LAB_0043ac9b:
0043AC9B  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0043AC9E  85 C9                     TEST ECX,ECX
0043ACA0  74 08                     JZ 0x0043acaa
0043ACA2  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
0043ACA8  89 11                     MOV dword ptr [ECX],EDX
LAB_0043acaa:
0043ACAA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0043acad:
0043ACAD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0043ACB0  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0043ACB3  42                        INC EDX
0043ACB4  3B D0                     CMP EDX,EAX
0043ACB6  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0043ACB9  0F 8C 5C FF FF FF         JL 0x0043ac1b
0043ACBF  5F                        POP EDI
0043ACC0  5E                        POP ESI
0043ACC1  33 C0                     XOR EAX,EAX
0043ACC3  5B                        POP EBX
0043ACC4  8B E5                     MOV ESP,EBP
0043ACC6  5D                        POP EBP
0043ACC7  C2 20 00                  RET 0x20
LAB_0043acca:
0043ACCA  2D A4 01 00 00            SUB EAX,0x1a4
0043ACCF  74 53                     JZ 0x0043ad24
0043ACD1  83 E8 0A                  SUB EAX,0xa
0043ACD4  74 42                     JZ 0x0043ad18
0043ACD6  83 E8 0A                  SUB EAX,0xa
0043ACD9  74 31                     JZ 0x0043ad0c
LAB_0043acdb:
0043ACDB  68 F4 79 7A 00            PUSH 0x7a79f4
0043ACE0  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043ACE5  6A 00                     PUSH 0x0
0043ACE7  6A 00                     PUSH 0x0
0043ACE9  68 FB 19 00 00            PUSH 0x19fb
0043ACEE  68 04 60 7A 00            PUSH 0x7a6004
0043ACF3  E8 D8 27 27 00            CALL 0x006ad4d0
0043ACF8  83 C4 18                  ADD ESP,0x18
0043ACFB  85 C0                     TEST EAX,EAX
0043ACFD  74 01                     JZ 0x0043ad00
0043ACFF  CC                        INT3
LAB_0043ad00:
0043AD00  5F                        POP EDI
0043AD01  5E                        POP ESI
0043AD02  83 C8 FF                  OR EAX,0xffffffff
0043AD05  5B                        POP EBX
0043AD06  8B E5                     MOV ESP,EBP
0043AD08  5D                        POP EBP
0043AD09  C2 20 00                  RET 0x20
LAB_0043ad0c:
0043AD0C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0043AD0F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043AD12  6A 06                     PUSH 0x6
0043AD14  50                        PUSH EAX
0043AD15  51                        PUSH ECX
0043AD16  EB 16                     JMP 0x0043ad2e
LAB_0043ad18:
0043AD18  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0043AD1B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043AD1E  6A 03                     PUSH 0x3
0043AD20  52                        PUSH EDX
0043AD21  50                        PUSH EAX
0043AD22  EB 0A                     JMP 0x0043ad2e
LAB_0043ad24:
0043AD24  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0043AD27  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0043AD2A  6A 05                     PUSH 0x5
0043AD2C  51                        PUSH ECX
0043AD2D  52                        PUSH EDX
LAB_0043ad2e:
0043AD2E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0043AD34  E8 81 7B FC FF            CALL 0x004028ba
0043AD39  8B F0                     MOV ESI,EAX
0043AD3B  8D 45 16                  LEA EAX,[EBP + 0x16]
0043AD3E  8D 4D FC                  LEA ECX,[EBP + -0x4]
0043AD41  50                        PUSH EAX
0043AD42  8D 55 08                  LEA EDX,[EBP + 0x8]
0043AD45  51                        PUSH ECX
0043AD46  52                        PUSH EDX
0043AD47  8B CE                     MOV ECX,ESI
0043AD49  E8 77 6B FC FF            CALL 0x004018c5
0043AD4E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0043AD51  85 C0                     TEST EAX,EAX
0043AD53  74 06                     JZ 0x0043ad5b
0043AD55  0F BF 4D 08               MOVSX ECX,word ptr [EBP + 0x8]
0043AD59  89 08                     MOV dword ptr [EAX],ECX
LAB_0043ad5b:
0043AD5B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0043AD5E  85 C0                     TEST EAX,EAX
0043AD60  74 06                     JZ 0x0043ad68
0043AD62  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
0043AD66  89 10                     MOV dword ptr [EAX],EDX
LAB_0043ad68:
0043AD68  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0043AD6B  85 C0                     TEST EAX,EAX
0043AD6D  74 06                     JZ 0x0043ad75
0043AD6F  0F BF 4D 16               MOVSX ECX,word ptr [EBP + 0x16]
0043AD73  89 08                     MOV dword ptr [EAX],ECX
LAB_0043ad75:
0043AD75  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0043AD78  85 C0                     TEST EAX,EAX
0043AD7A  74 08                     JZ 0x0043ad84
0043AD7C  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
0043AD82  89 10                     MOV dword ptr [EAX],EDX
LAB_0043ad84:
0043AD84  5F                        POP EDI
0043AD85  5E                        POP ESI
0043AD86  33 C0                     XOR EAX,EAX
0043AD88  5B                        POP EBX
0043AD89  8B E5                     MOV ESP,EBP
0043AD8B  5D                        POP EBP
0043AD8C  C2 20 00                  RET 0x20
