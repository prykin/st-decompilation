STAllPlayersC::AddObjToTmp2:
0042BEA0  55                        PUSH EBP
0042BEA1  8B EC                     MOV EBP,ESP
0042BEA3  83 EC 54                  SUB ESP,0x54
0042BEA6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042BEAB  53                        PUSH EBX
0042BEAC  56                        PUSH ESI
0042BEAD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0042BEB0  57                        PUSH EDI
0042BEB1  8D 55 B0                  LEA EDX,[EBP + -0x50]
0042BEB4  8D 4D AC                  LEA ECX,[EBP + -0x54]
0042BEB7  6A 00                     PUSH 0x0
0042BEB9  52                        PUSH EDX
0042BEBA  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0042BEC1  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0042BEC4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042BECA  E8 21 19 30 00            CALL 0x0072d7f0
0042BECF  83 C4 08                  ADD ESP,0x8
0042BED2  85 C0                     TEST EAX,EAX
0042BED4  0F 85 C9 01 00 00         JNZ 0x0042c0a3
0042BEDA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042BEDD  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0042BEE0  83 E8 00                  SUB EAX,0x0
0042BEE3  74 76                     JZ 0x0042bf5b
0042BEE5  48                        DEC EAX
0042BEE6  74 41                     JZ 0x0042bf29
0042BEE8  68 4C 62 7A 00            PUSH 0x7a624c
0042BEED  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042BEF2  6A 00                     PUSH 0x0
0042BEF4  6A 00                     PUSH 0x0
0042BEF6  68 3B 02 00 00            PUSH 0x23b
0042BEFB  68 04 60 7A 00            PUSH 0x7a6004
0042BF00  E8 CB 15 28 00            CALL 0x006ad4d0
0042BF05  83 C4 18                  ADD ESP,0x18
0042BF08  85 C0                     TEST EAX,EAX
0042BF0A  74 01                     JZ 0x0042bf0d
0042BF0C  CC                        INT3
LAB_0042bf0d:
0042BF0D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042BF12  68 3C 02 00 00            PUSH 0x23c
0042BF17  68 04 60 7A 00            PUSH 0x7a6004
0042BF1C  50                        PUSH EAX
0042BF1D  68 09 00 FE AF            PUSH 0xaffe0009
0042BF22  E8 19 9F 27 00            CALL 0x006a5e40
0042BF27  EB 69                     JMP 0x0042bf92
LAB_0042bf29:
0042BF29  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042BF2D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042BF30  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042BF33  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042BF36  C1 E1 04                  SHL ECX,0x4
0042BF39  03 C8                     ADD ECX,EAX
0042BF3B  85 F6                     TEST ESI,ESI
0042BF3D  8D 14 4D D3 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4fd3]
0042BF44  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0042BF47  75 49                     JNZ 0x0042bf92
0042BF49  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0042BF4C  56                        PUSH ESI
0042BF4D  6A 04                     PUSH 0x4
0042BF4F  8B CF                     MOV ECX,EDI
0042BF51  E8 FF 8C FD FF            CALL 0x00404c55
0042BF56  56                        PUSH ESI
0042BF57  6A 05                     PUSH 0x5
0042BF59  EB 30                     JMP 0x0042bf8b
LAB_0042bf5b:
0042BF5B  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042BF5F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042BF62  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042BF65  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042BF68  C1 E1 04                  SHL ECX,0x4
0042BF6B  03 C8                     ADD ECX,EAX
0042BF6D  85 F6                     TEST ESI,ESI
0042BF6F  8D 14 4D 83 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4f83]
0042BF76  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0042BF79  75 17                     JNZ 0x0042bf92
0042BF7B  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0042BF7E  56                        PUSH ESI
0042BF7F  6A 01                     PUSH 0x1
0042BF81  8B CF                     MOV ECX,EDI
0042BF83  E8 CD 8C FD FF            CALL 0x00404c55
0042BF88  56                        PUSH ESI
0042BF89  6A 02                     PUSH 0x2
LAB_0042bf8b:
0042BF8B  8B CF                     MOV ECX,EDI
0042BF8D  E8 C3 8C FD FF            CALL 0x00404c55
LAB_0042bf92:
0042BF92  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0042BF95  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0042BF98  C1 E6 04                  SHL ESI,0x4
0042BF9B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0042BF9E  03 F0                     ADD ESI,EAX
0042BFA0  39 3E                     CMP dword ptr [ESI],EDI
0042BFA2  75 2E                     JNZ 0x0042bfd2
0042BFA4  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0042BFA7  0F BE CB                  MOVSX ECX,BL
0042BFAA  3B C1                     CMP EAX,ECX
0042BFAC  75 24                     JNZ 0x0042bfd2
0042BFAE  66 8B 56 08               MOV DX,word ptr [ESI + 0x8]
0042BFB2  66 3B 55 1C               CMP DX,word ptr [EBP + 0x1c]
0042BFB6  75 1A                     JNZ 0x0042bfd2
0042BFB8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042BFBD  68 3F 02 00 00            PUSH 0x23f
0042BFC2  68 04 60 7A 00            PUSH 0x7a6004
0042BFC7  50                        PUSH EAX
0042BFC8  68 01 00 FE AF            PUSH 0xaffe0001
0042BFCD  E8 6E 9E 27 00            CALL 0x006a5e40
LAB_0042bfd2:
0042BFD2  66 8B 55 1C               MOV DX,word ptr [EBP + 0x1c]
0042BFD6  89 3E                     MOV dword ptr [ESI],EDI
0042BFD8  0F BE CB                  MOVSX ECX,BL
0042BFDB  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
0042BFDE  81 FF A4 01 00 00         CMP EDI,0x1a4
0042BFE4  66 89 56 08               MOV word ptr [ESI + 0x8],DX
0042BFE8  7F 2A                     JG 0x0042c014
0042BFEA  74 1F                     JZ 0x0042c00b
0042BFEC  83 FF 5A                  CMP EDI,0x5a
0042BFEF  74 11                     JZ 0x0042c002
0042BFF1  81 FF 72 01 00 00         CMP EDI,0x172
0042BFF7  75 28                     JNZ 0x0042c021
0042BFF9  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0042C000  EB 70                     JMP 0x0042c072
LAB_0042c002:
0042C002  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
0042C009  EB 67                     JMP 0x0042c072
LAB_0042c00b:
0042C00B  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
0042C012  EB 5E                     JMP 0x0042c072
LAB_0042c014:
0042C014  81 EF AE 01 00 00         SUB EDI,0x1ae
0042C01A  74 4F                     JZ 0x0042c06b
0042C01C  83 EF 0A                  SUB EDI,0xa
0042C01F  74 41                     JZ 0x0042c062
LAB_0042c021:
0042C021  68 14 62 7A 00            PUSH 0x7a6214
0042C026  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042C02B  6A 00                     PUSH 0x0
0042C02D  6A 00                     PUSH 0x0
0042C02F  68 49 02 00 00            PUSH 0x249
0042C034  68 04 60 7A 00            PUSH 0x7a6004
0042C039  E8 92 14 28 00            CALL 0x006ad4d0
0042C03E  83 C4 18                  ADD ESP,0x18
0042C041  85 C0                     TEST EAX,EAX
0042C043  74 01                     JZ 0x0042c046
0042C045  CC                        INT3
LAB_0042c046:
0042C046  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042C04B  68 4A 02 00 00            PUSH 0x24a
0042C050  68 04 60 7A 00            PUSH 0x7a6004
0042C055  50                        PUSH EAX
0042C056  68 01 00 FE AF            PUSH 0xaffe0001
0042C05B  E8 E0 9D 27 00            CALL 0x006a5e40
0042C060  EB 10                     JMP 0x0042c072
LAB_0042c062:
0042C062  C7 45 FC 06 00 00 00      MOV dword ptr [EBP + -0x4],0x6
0042C069  EB 07                     JMP 0x0042c072
LAB_0042c06b:
0042C06B  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
STAllPlayersC::AddObjToTmp2::cf_common_exit_0042C072:
0042C072  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042C075  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0042C078  51                        PUSH ECX
0042C079  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042C07C  52                        PUSH EDX
0042C07D  53                        PUSH EBX
0042C07E  E8 37 68 FD FF            CALL 0x004028ba
0042C083  8B 10                     MOV EDX,dword ptr [EAX]
0042C085  6A 01                     PUSH 0x1
0042C087  8B C8                     MOV ECX,EAX
0042C089  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042C08F  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0042C092  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_0042c097:
0042C097  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0042C09A  5F                        POP EDI
0042C09B  5E                        POP ESI
0042C09C  5B                        POP EBX
0042C09D  8B E5                     MOV ESP,EBP
0042C09F  5D                        POP EBP
0042C0A0  C2 18 00                  RET 0x18
LAB_0042c0a3:
0042C0A3  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0042C0A6  3D 09 00 FE AF            CMP EAX,0xaffe0009
0042C0AB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042C0B1  74 E4                     JZ 0x0042c097
0042C0B3  BE 01 00 FE AF            MOV ESI,0xaffe0001
0042C0B8  3B C6                     CMP EAX,ESI
0042C0BA  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0042C0BD  75 30                     JNZ 0x0042c0ef
0042C0BF  68 E0 61 7A 00            PUSH 0x7a61e0
0042C0C4  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042C0C9  6A 00                     PUSH 0x0
0042C0CB  6A 00                     PUSH 0x0
0042C0CD  68 51 02 00 00            PUSH 0x251
0042C0D2  68 04 60 7A 00            PUSH 0x7a6004
0042C0D7  E8 F4 13 28 00            CALL 0x006ad4d0
0042C0DC  83 C4 18                  ADD ESP,0x18
0042C0DF  85 C0                     TEST EAX,EAX
0042C0E1  74 31                     JZ 0x0042c114
0042C0E3  CC                        INT3
LAB_0042c0ef:
0042C0EF  68 BC 61 7A 00            PUSH 0x7a61bc
0042C0F4  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042C0F9  6A 00                     PUSH 0x0
0042C0FB  6A 00                     PUSH 0x0
0042C0FD  68 52 02 00 00            PUSH 0x252
0042C102  68 04 60 7A 00            PUSH 0x7a6004
0042C107  E8 C4 13 28 00            CALL 0x006ad4d0
0042C10C  83 C4 18                  ADD ESP,0x18
0042C10F  85 C0                     TEST EAX,EAX
0042C111  74 01                     JZ 0x0042c114
0042C113  CC                        INT3
LAB_0042c114:
0042C114  8B C6                     MOV EAX,ESI
0042C116  5F                        POP EDI
0042C117  5E                        POP ESI
0042C118  5B                        POP EBX
0042C119  8B E5                     MOV ESP,EBP
0042C11B  5D                        POP EBP
0042C11C  C2 18 00                  RET 0x18
