TraksClassTy::TraksCreate:
00556760  55                        PUSH EBP
00556761  8B EC                     MOV EBP,ESP
00556763  81 EC A4 00 00 00         SUB ESP,0xa4
00556769  8A 45 40                  MOV AL,byte ptr [EBP + 0x40]
0055676C  53                        PUSH EBX
0055676D  56                        PUSH ESI
0055676E  57                        PUSH EDI
0055676F  A8 01                     TEST AL,0x1
00556771  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00556774  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
0055677B  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
00556782  75 14                     JNZ 0x00556798
00556784  A1 1E 73 80 00            MOV EAX,[0x0080731e]
00556789  85 C0                     TEST EAX,EAX
0055678B  75 0B                     JNZ 0x00556798
0055678D  33 C0                     XOR EAX,EAX
0055678F  5F                        POP EDI
00556790  5E                        POP ESI
00556791  5B                        POP EBX
00556792  8B E5                     MOV ESP,EBP
00556794  5D                        POP EBP
00556795  C2 3C 00                  RET 0x3c
LAB_00556798:
00556798  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
0055679B  85 C0                     TEST EAX,EAX
0055679D  75 0B                     JNZ 0x005567aa
0055679F  33 C0                     XOR EAX,EAX
005567A1  5F                        POP EDI
005567A2  5E                        POP ESI
005567A3  5B                        POP EBX
005567A4  8B E5                     MOV ESP,EBP
005567A6  5D                        POP EBP
005567A7  C2 3C 00                  RET 0x3c
LAB_005567aa:
005567AA  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005567AD  B8 79 19 8C 02            MOV EAX,0x28c1979
005567B2  85 C9                     TEST ECX,ECX
005567B4  7C 0D                     JL 0x005567c3
005567B6  F7 E9                     IMUL ECX
005567B8  D1 FA                     SAR EDX,0x1
005567BA  8B C2                     MOV EAX,EDX
005567BC  C1 E8 1F                  SHR EAX,0x1f
005567BF  03 D0                     ADD EDX,EAX
005567C1  EB 0D                     JMP 0x005567d0
LAB_005567c3:
005567C3  F7 E9                     IMUL ECX
005567C5  D1 FA                     SAR EDX,0x1
005567C7  8B CA                     MOV ECX,EDX
005567C9  C1 E9 1F                  SHR ECX,0x1f
005567CC  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
LAB_005567d0:
005567D0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005567D3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005567D6  85 C9                     TEST ECX,ECX
005567D8  B8 79 19 8C 02            MOV EAX,0x28c1979
005567DD  7C 0F                     JL 0x005567ee
005567DF  F7 E9                     IMUL ECX
005567E1  D1 FA                     SAR EDX,0x1
005567E3  8B C2                     MOV EAX,EDX
005567E5  C1 E8 1F                  SHR EAX,0x1f
005567E8  03 D0                     ADD EDX,EAX
005567EA  8B DA                     MOV EBX,EDX
005567EC  EB 0D                     JMP 0x005567fb
LAB_005567ee:
005567EE  F7 E9                     IMUL ECX
005567F0  D1 FA                     SAR EDX,0x1
005567F2  8B CA                     MOV ECX,EDX
005567F4  C1 E9 1F                  SHR ECX,0x1f
005567F7  8D 5C 0A FF               LEA EBX,[EDX + ECX*0x1 + -0x1]
LAB_005567fb:
005567FB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005567FE  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00556801  85 C9                     TEST ECX,ECX
00556803  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00556808  7C 10                     JL 0x0055681a
0055680A  F7 E9                     IMUL ECX
0055680C  C1 FA 06                  SAR EDX,0x6
0055680F  8B C2                     MOV EAX,EDX
00556811  C1 E8 1F                  SHR EAX,0x1f
00556814  03 D0                     ADD EDX,EAX
00556816  8B FA                     MOV EDI,EDX
00556818  EB 0E                     JMP 0x00556828
LAB_0055681a:
0055681A  F7 E9                     IMUL ECX
0055681C  C1 FA 06                  SAR EDX,0x6
0055681F  8B CA                     MOV ECX,EDX
00556821  C1 E9 1F                  SHR ECX,0x1f
00556824  8D 7C 0A FF               LEA EDI,[EDX + ECX*0x1 + -0x1]
LAB_00556828:
00556828  8A 45 40                  MOV AL,byte ptr [EBP + 0x40]
0055682B  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0055682E  A8 02                     TEST AL,0x2
00556830  0F 85 04 01 00 00         JNZ 0x0055693a
00556836  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0055683C  85 C9                     TEST ECX,ECX
0055683E  74 30                     JZ 0x00556870
00556840  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
00556844  3B 41 48                  CMP EAX,dword ptr [ECX + 0x48]
00556847  0F BF D3                  MOVSX EDX,BX
0055684A  7C 1A                     JL 0x00556866
0055684C  3B 41 58                  CMP EAX,dword ptr [ECX + 0x58]
0055684F  7F 15                     JG 0x00556866
00556851  3B 51 44                  CMP EDX,dword ptr [ECX + 0x44]
00556854  7C 10                     JL 0x00556866
00556856  3B 51 54                  CMP EDX,dword ptr [ECX + 0x54]
00556859  7F 0B                     JG 0x00556866
0055685B  6A 00                     PUSH 0x0
0055685D  52                        PUSH EDX
0055685E  50                        PUSH EAX
0055685F  E8 6C 73 18 00            CALL 0x006ddbd0
00556864  EB 02                     JMP 0x00556868
LAB_00556866:
00556866  33 C0                     XOR EAX,EAX
LAB_00556868:
00556868  85 C0                     TEST EAX,EAX
0055686A  0F 84 BF 00 00 00         JZ 0x0055692f
LAB_00556870:
00556870  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
00556876  85 F6                     TEST ESI,ESI
00556878  0F 84 BC 00 00 00         JZ 0x0055693a
0055687E  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00556885  0F BF FF                  MOVSX EDI,DI
00556888  0F 84 98 00 00 00         JZ 0x00556926
0055688E  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
00556894  85 C0                     TEST EAX,EAX
00556896  0F 84 8A 00 00 00         JZ 0x00556926
0055689C  8D 55 FC                  LEA EDX,[EBP + -0x4]
0055689F  8D 45 A8                  LEA EAX,[EBP + -0x58]
005568A2  52                        PUSH EDX
005568A3  50                        PUSH EAX
005568A4  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
005568A8  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
005568AE  0F BF CB                  MOVSX ECX,BX
005568B1  51                        PUSH ECX
005568B2  52                        PUSH EDX
005568B3  50                        PUSH EAX
005568B4  8B CE                     MOV ECX,ESI
005568B6  E8 98 D6 EA FF            CALL 0x00403f53
005568BB  85 FF                     TEST EDI,EDI
005568BD  7C 67                     JL 0x00556926
005568BF  83 FF 05                  CMP EDI,0x5
005568C2  7D 62                     JGE 0x00556926
005568C4  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
005568C7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005568CA  85 C9                     TEST ECX,ECX
005568CC  7C 1E                     JL 0x005568ec
005568CE  3B 4E 30                  CMP ECX,dword ptr [ESI + 0x30]
005568D1  7D 19                     JGE 0x005568ec
005568D3  8B 04 BD D0 AE 79 00      MOV EAX,dword ptr [EDI*0x4 + 0x79aed0]
005568DA  03 C2                     ADD EAX,EDX
005568DC  85 C0                     TEST EAX,EAX
005568DE  7C 0C                     JL 0x005568ec
005568E0  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
005568E3  7D 07                     JGE 0x005568ec
005568E5  B8 01 00 00 00            MOV EAX,0x1
005568EA  EB 02                     JMP 0x005568ee
LAB_005568ec:
005568EC  33 C0                     XOR EAX,EAX
LAB_005568ee:
005568EE  85 C0                     TEST EAX,EAX
005568F0  74 26                     JZ 0x00556918
005568F2  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
005568F5  85 C0                     TEST EAX,EAX
005568F7  74 1F                     JZ 0x00556918
005568F9  8B 3C BD D0 AE 79 00      MOV EDI,dword ptr [EDI*0x4 + 0x79aed0]
00556900  03 FA                     ADD EDI,EDX
00556902  0F AF 7E 30               IMUL EDI,dword ptr [ESI + 0x30]
00556906  03 F8                     ADD EDI,EAX
00556908  33 C0                     XOR EAX,EAX
0055690A  8A 04 0F                  MOV AL,byte ptr [EDI + ECX*0x1]
0055690D  33 C9                     XOR ECX,ECX
0055690F  85 C0                     TEST EAX,EAX
00556911  0F 95 C1                  SETNZ CL
00556914  8B C1                     MOV EAX,ECX
00556916  EB 13                     JMP 0x0055692b
LAB_00556918:
00556918  83 C8 FF                  OR EAX,0xffffffff
0055691B  33 C9                     XOR ECX,ECX
0055691D  85 C0                     TEST EAX,EAX
0055691F  0F 95 C1                  SETNZ CL
00556922  8B C1                     MOV EAX,ECX
00556924  EB 05                     JMP 0x0055692b
LAB_00556926:
00556926  B8 01 00 00 00            MOV EAX,0x1
LAB_0055692b:
0055692B  85 C0                     TEST EAX,EAX
0055692D  75 0B                     JNZ 0x0055693a
LAB_0055692f:
0055692F  33 C0                     XOR EAX,EAX
00556931  5F                        POP EDI
00556932  5E                        POP ESI
00556933  5B                        POP EBX
00556934  8B E5                     MOV ESP,EBP
00556936  5D                        POP EBP
00556937  C2 3C 00                  RET 0x3c
LAB_0055693a:
0055693A  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00556940  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
00556946  8D 85 5C FF FF FF         LEA EAX,[EBP + 0xffffff5c]
0055694C  6A 00                     PUSH 0x0
0055694E  51                        PUSH ECX
0055694F  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
00556955  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055695A  E8 91 6E 1D 00            CALL 0x0072d7f0
0055695F  8B F0                     MOV ESI,EAX
00556961  83 C4 08                  ADD ESP,0x8
00556964  85 F6                     TEST ESI,ESI
00556966  0F 85 C4 02 00 00         JNZ 0x00556c30
0055696C  66 8B 5D 28               MOV BX,word ptr [EBP + 0x28]
00556970  B9 0F 00 00 00            MOV ECX,0xf
00556975  8D 7D AC                  LEA EDI,[EBP + -0x54]
00556978  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
0055697C  F3 AB                     STOSD.REP ES:EDI
0055697E  66 89 5D B8               MOV word ptr [EBP + -0x48],BX
00556982  66 8B 5D 2C               MOV BX,word ptr [EBP + 0x2c]
00556986  66 89 5D BA               MOV word ptr [EBP + -0x46],BX
0055698A  66 8B 5D 30               MOV BX,word ptr [EBP + 0x30]
0055698E  66 89 5D BC               MOV word ptr [EBP + -0x44],BX
00556992  66 8B 5D 34               MOV BX,word ptr [EBP + 0x34]
00556996  66 89 5D BE               MOV word ptr [EBP + -0x42],BX
0055699A  66 8B 5D 0C               MOV BX,word ptr [EBP + 0xc]
0055699E  66 89 5D C0               MOV word ptr [EBP + -0x40],BX
005569A2  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
005569A5  89 5D C2                  MOV dword ptr [EBP + -0x3e],EBX
005569A8  66 8B 5D 3C               MOV BX,word ptr [EBP + 0x3c]
005569AC  66 89 5D C6               MOV word ptr [EBP + -0x3a],BX
005569B0  66 8B 5D F4               MOV BX,word ptr [EBP + -0xc]
005569B4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005569B7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005569BA  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
005569BD  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
005569C0  66 89 5D C8               MOV word ptr [EBP + -0x38],BX
005569C4  66 8B 5D EC               MOV BX,word ptr [EBP + -0x14]
005569C8  66 89 5D CA               MOV word ptr [EBP + -0x36],BX
005569CC  66 8B 5D F0               MOV BX,word ptr [EBP + -0x10]
005569D0  66 89 55 AC               MOV word ptr [EBP + -0x54],DX
005569D4  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005569D7  66 89 5D CC               MOV word ptr [EBP + -0x34],BX
005569DB  8B 1D 38 2A 80 00         MOV EBX,dword ptr [0x00802a38]
005569E1  66 89 45 AE               MOV word ptr [EBP + -0x52],AX
005569E5  66 89 4D B0               MOV word ptr [EBP + -0x50],CX
005569E9  66 89 55 B2               MOV word ptr [EBP + -0x4e],DX
005569ED  66 89 75 B4               MOV word ptr [EBP + -0x4c],SI
005569F1  66 89 7D B6               MOV word ptr [EBP + -0x4a],DI
005569F5  66 C7 45 CE FF FF         MOV word ptr [EBP + -0x32],0xffff
005569FB  8B 9B E4 00 00 00         MOV EBX,dword ptr [EBX + 0xe4]
00556A01  66 89 45 D8               MOV word ptr [EBP + -0x28],AX
00556A05  66 85 F6                  TEST SI,SI
00556A08  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
00556A0B  66 89 4D DA               MOV word ptr [EBP + -0x26],CX
00556A0F  66 89 55 DC               MOV word ptr [EBP + -0x24],DX
00556A13  75 24                     JNZ 0x00556a39
00556A15  66 85 FF                  TEST DI,DI
00556A18  75 1F                     JNZ 0x00556a39
00556A1A  66 39 7D 28               CMP word ptr [EBP + 0x28],DI
00556A1E  75 19                     JNZ 0x00556a39
00556A20  66 39 7D 2C               CMP word ptr [EBP + 0x2c],DI
00556A24  75 13                     JNZ 0x00556a39
00556A26  66 39 7D 30               CMP word ptr [EBP + 0x30],DI
00556A2A  75 0D                     JNZ 0x00556a39
00556A2C  66 39 7D 34               CMP word ptr [EBP + 0x34],DI
00556A30  75 07                     JNZ 0x00556a39
00556A32  33 FF                     XOR EDI,EDI
00556A34  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00556A37  EB 03                     JMP 0x00556a3c
LAB_00556a39:
00556A39  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_00556a3c:
00556A3C  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
00556A40  8B 35 64 67 80 00         MOV ESI,dword ptr [0x00806764]
00556A46  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00556A49  83 3C CD 0C 90 7C 00 01   CMP dword ptr [ECX*0x8 + 0x7c900c],0x1
00556A51  74 06                     JZ 0x00556a59
00556A53  8B 35 74 67 80 00         MOV ESI,dword ptr [0x00806774]
LAB_00556a59:
00556A59  6A 00                     PUSH 0x0
00556A5B  6A 00                     PUSH 0x0
00556A5D  6A 01                     PUSH 0x1
00556A5F  6A 00                     PUSH 0x0
00556A61  6A FF                     PUSH -0x1
00556A63  50                        PUSH EAX
00556A64  E8 55 E2 EA FF            CALL 0x00404cbe
00556A69  83 C4 04                  ADD ESP,0x4
00556A6C  50                        PUSH EAX
00556A6D  6A 1D                     PUSH 0x1d
00556A6F  56                        PUSH ESI
00556A70  E8 7B 30 1B 00            CALL 0x00709af0
00556A75  8B F0                     MOV ESI,EAX
00556A77  83 C4 20                  ADD ESP,0x20
00556A7A  0F BF 45 AC               MOVSX EAX,word ptr [EBP + -0x54]
00556A7E  66 8B 16                  MOV DX,word ptr [ESI]
00556A81  6A 00                     PUSH 0x0
00556A83  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00556A86  66 89 55 E2               MOV word ptr [EBP + -0x1e],DX
00556A8A  C1 E0 03                  SHL EAX,0x3
00556A8D  8B 88 FC 8F 7C 00         MOV ECX,dword ptr [EAX + 0x7c8ffc]
00556A93  8B 90 F8 8F 7C 00         MOV EDX,dword ptr [EAX + 0x7c8ff8]
00556A99  51                        PUSH ECX
00556A9A  8B 88 04 90 7C 00         MOV ECX,dword ptr [EAX + 0x7c9004]
00556AA0  52                        PUSH EDX
00556AA1  8B 90 00 90 7C 00         MOV EDX,dword ptr [EAX + 0x7c9000]
00556AA7  51                        PUSH ECX
00556AA8  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556AAE  52                        PUSH EDX
00556AAF  6A 00                     PUSH 0x0
00556AB1  8D 45 F8                  LEA EAX,[EBP + -0x8]
00556AB4  6A 01                     PUSH 0x1
00556AB6  50                        PUSH EAX
00556AB7  E8 A4 1B 19 00            CALL 0x006e8660
00556ABC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00556ABF  6A 01                     PUSH 0x1
00556AC1  0F BF 55 E2               MOVSX EDX,word ptr [EBP + -0x1e]
00556AC5  89 45 DE                  MOV dword ptr [EBP + -0x22],EAX
00556AC8  8B 4E 21                  MOV ECX,dword ptr [ESI + 0x21]
00556ACB  51                        PUSH ECX
00556ACC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556AD2  52                        PUSH EDX
00556AD3  6A 00                     PUSH 0x0
00556AD5  50                        PUSH EAX
00556AD6  E8 05 2E 19 00            CALL 0x006e98e0
00556ADB  85 FF                     TEST EDI,EDI
00556ADD  75 17                     JNZ 0x00556af6
00556ADF  0F BF 45 C0               MOVSX EAX,word ptr [EBP + -0x40]
00556AE3  8B 4D DE                  MOV ECX,dword ptr [EBP + -0x22]
00556AE6  57                        PUSH EDI
00556AE7  6A FF                     PUSH -0x1
00556AE9  50                        PUSH EAX
00556AEA  51                        PUSH ECX
00556AEB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556AF1  E8 5A 35 19 00            CALL 0x006ea050
LAB_00556af6:
00556AF6  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00556AF9  8B 55 DE                  MOV EDX,dword ptr [EBP + -0x22]
00556AFC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556B02  56                        PUSH ESI
00556B03  6A 00                     PUSH 0x0
00556B05  52                        PUSH EDX
00556B06  E8 65 37 19 00            CALL 0x006ea270
00556B0B  8B 4D C2                  MOV ECX,dword ptr [EBP + -0x3e]
00556B0E  85 C9                     TEST ECX,ECX
00556B10  7C 30                     JL 0x00556b42
00556B12  0F BF 45 C6               MOVSX EAX,word ptr [EBP + -0x3a]
00556B16  83 F8 FF                  CMP EAX,-0x1
00556B19  74 17                     JZ 0x00556b32
00556B1B  83 F8 01                  CMP EAX,0x1
00556B1E  75 22                     JNZ 0x00556b42
00556B20  8B 45 DE                  MOV EAX,dword ptr [EBP + -0x22]
00556B23  51                        PUSH ECX
00556B24  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556B2A  50                        PUSH EAX
00556B2B  E8 30 39 19 00            CALL 0x006ea460
00556B30  EB 10                     JMP 0x00556b42
LAB_00556b32:
00556B32  51                        PUSH ECX
00556B33  8B 4D DE                  MOV ECX,dword ptr [EBP + -0x22]
00556B36  51                        PUSH ECX
00556B37  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556B3D  E8 9E 38 19 00            CALL 0x006ea3e0
LAB_00556b42:
00556B42  0F BF 45 AC               MOVSX EAX,word ptr [EBP + -0x54]
00556B46  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00556B49  C1 E1 03                  SHL ECX,0x3
00556B4C  8B 81 04 90 7C 00         MOV EAX,dword ptr [ECX + 0x7c9004]
00556B52  99                        CDQ
00556B53  2B C2                     SUB EAX,EDX
00556B55  D1 F8                     SAR EAX,0x1
00556B57  50                        PUSH EAX
00556B58  8B 81 00 90 7C 00         MOV EAX,dword ptr [ECX + 0x7c9000]
00556B5E  99                        CDQ
00556B5F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556B65  2B C2                     SUB EAX,EDX
00556B67  8B 55 DE                  MOV EDX,dword ptr [EBP + -0x22]
00556B6A  D1 F8                     SAR EAX,0x1
00556B6C  50                        PUSH EAX
00556B6D  6A 01                     PUSH 0x1
00556B6F  52                        PUSH EDX
00556B70  E8 6B 39 19 00            CALL 0x006ea4e0
00556B75  0F BF 45 B2               MOVSX EAX,word ptr [EBP + -0x4e]
00556B79  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00556B7C  51                        PUSH ECX
00556B7D  DB 45 FC                  FILD dword ptr [EBP + -0x4]
00556B80  0F BF 4D B0               MOVSX ECX,word ptr [EBP + -0x50]
00556B84  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00556B8A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00556B8D  8B 45 DE                  MOV EAX,dword ptr [EBP + -0x22]
00556B90  0F BF 55 AE               MOVSX EDX,word ptr [EBP + -0x52]
00556B94  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00556B9A  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00556BA0  D9 1C 24                  FSTP float ptr [ESP]
00556BA3  DB 45 FC                  FILD dword ptr [EBP + -0x4]
00556BA6  51                        PUSH ECX
00556BA7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00556BAA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00556BB0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00556BB6  D9 1C 24                  FSTP float ptr [ESP]
00556BB9  DB 45 FC                  FILD dword ptr [EBP + -0x4]
00556BBC  51                        PUSH ECX
00556BBD  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556BC3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00556BC9  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00556BCF  D9 1C 24                  FSTP float ptr [ESP]
00556BD2  50                        PUSH EAX
00556BD3  E8 88 3D 19 00            CALL 0x006ea960
00556BD8  8B 4D DE                  MOV ECX,dword ptr [EBP + -0x22]
00556BDB  6A 00                     PUSH 0x0
00556BDD  51                        PUSH ECX
00556BDE  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556BE4  E8 B7 3E 19 00            CALL 0x006eaaa0
00556BE9  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00556BEC  66 89 75 CE               MOV word ptr [EBP + -0x32],SI
00556BF0  85 FF                     TEST EDI,EDI
00556BF2  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
00556BF5  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00556BF8  74 1E                     JZ 0x00556c18
00556BFA  8D 45 AC                  LEA EAX,[EBP + -0x54]
00556BFD  50                        PUSH EAX
00556BFE  E8 76 C1 EA FF            CALL 0x00402d79
00556C03  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
00556C09  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00556C0F  5F                        POP EDI
00556C10  5E                        POP ESI
00556C11  5B                        POP EBX
00556C12  8B E5                     MOV ESP,EBP
00556C14  5D                        POP EBP
00556C15  C2 3C 00                  RET 0x3c
LAB_00556c18:
00556C18  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
00556C1E  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
00556C21  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00556C27  5F                        POP EDI
00556C28  5E                        POP ESI
00556C29  5B                        POP EBX
00556C2A  8B E5                     MOV ESP,EBP
00556C2C  5D                        POP EBP
00556C2D  C2 3C 00                  RET 0x3c
LAB_00556c30:
00556C30  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
00556C36  68 34 92 7C 00            PUSH 0x7c9234
00556C3B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00556C40  56                        PUSH ESI
00556C41  6A 00                     PUSH 0x0
00556C43  68 BC 01 00 00            PUSH 0x1bc
00556C48  68 04 91 7C 00            PUSH 0x7c9104
00556C4D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00556C53  E8 78 68 15 00            CALL 0x006ad4d0
00556C58  83 C4 18                  ADD ESP,0x18
00556C5B  85 C0                     TEST EAX,EAX
00556C5D  74 01                     JZ 0x00556c60
00556C5F  CC                        INT3
LAB_00556c60:
00556C60  68 BD 01 00 00            PUSH 0x1bd
00556C65  68 04 91 7C 00            PUSH 0x7c9104
00556C6A  6A 00                     PUSH 0x0
00556C6C  56                        PUSH ESI
00556C6D  E8 CE F1 14 00            CALL 0x006a5e40
00556C72  5F                        POP EDI
00556C73  5E                        POP ESI
00556C74  83 C8 FF                  OR EAX,0xffffffff
00556C77  5B                        POP EBX
00556C78  8B E5                     MOV ESP,EBP
00556C7A  5D                        POP EBP
00556C7B  C2 3C 00                  RET 0x3c
