FUN_00756b20:
00756B20  55                        PUSH EBP
00756B21  8B EC                     MOV EBP,ESP
00756B23  51                        PUSH ECX
00756B24  56                        PUSH ESI
00756B25  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00756B28  81 7E 0C CA 00 00 00      CMP dword ptr [ESI + 0xc],0xca
00756B2F  74 14                     JZ 0x00756b45
00756B31  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00756B36  6A 5E                     PUSH 0x5e
00756B38  68 68 2D 7F 00            PUSH 0x7f2d68
00756B3D  50                        PUSH EAX
00756B3E  6A 12                     PUSH 0x12
00756B40  E8 FB F2 F4 FF            CALL 0x006a5e40
LAB_00756b45:
00756B45  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
00756B48  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
00756B4B  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
00756B52  3B D1                     CMP EDX,ECX
00756B54  77 28                     JA 0x00756b7e
00756B56  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00756B59  6A 08                     PUSH 0x8
00756B5B  50                        PUSH EAX
00756B5C  E8 0F 33 00 00            CALL 0x00759e70
00756B61  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00756B64  6A 08                     PUSH 0x8
00756B66  51                        PUSH ECX
00756B67  89 46 68                  MOV dword ptr [ESI + 0x68],EAX
00756B6A  E8 01 33 00 00            CALL 0x00759e70
00756B6F  89 46 6C                  MOV dword ptr [ESI + 0x6c],EAX
00756B72  C7 86 2A 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x12a],0x1
00756B7C  EB 78                     JMP 0x00756bf6
LAB_00756b7e:
00756B7E  8D 14 85 00 00 00 00      LEA EDX,[EAX*0x4 + 0x0]
00756B85  3B D1                     CMP EDX,ECX
00756B87  77 28                     JA 0x00756bb1
00756B89  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00756B8C  6A 04                     PUSH 0x4
00756B8E  50                        PUSH EAX
00756B8F  E8 DC 32 00 00            CALL 0x00759e70
00756B94  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00756B97  6A 04                     PUSH 0x4
00756B99  51                        PUSH ECX
00756B9A  89 46 68                  MOV dword ptr [ESI + 0x68],EAX
00756B9D  E8 CE 32 00 00            CALL 0x00759e70
00756BA2  89 46 6C                  MOV dword ptr [ESI + 0x6c],EAX
00756BA5  C7 86 2A 01 00 00 02 00 00 00  MOV dword ptr [ESI + 0x12a],0x2
00756BAF  EB 45                     JMP 0x00756bf6
LAB_00756bb1:
00756BB1  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
00756BB4  3B D1                     CMP EDX,ECX
00756BB6  77 28                     JA 0x00756be0
00756BB8  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00756BBB  6A 02                     PUSH 0x2
00756BBD  50                        PUSH EAX
00756BBE  E8 AD 32 00 00            CALL 0x00759e70
00756BC3  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00756BC6  6A 02                     PUSH 0x2
00756BC8  51                        PUSH ECX
00756BC9  89 46 68                  MOV dword ptr [ESI + 0x68],EAX
00756BCC  E8 9F 32 00 00            CALL 0x00759e70
00756BD1  89 46 6C                  MOV dword ptr [ESI + 0x6c],EAX
00756BD4  C7 86 2A 01 00 00 04 00 00 00  MOV dword ptr [ESI + 0x12a],0x4
00756BDE  EB 16                     JMP 0x00756bf6
LAB_00756be0:
00756BE0  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00756BE3  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00756BE6  89 56 68                  MOV dword ptr [ESI + 0x68],EDX
00756BE9  89 46 6C                  MOV dword ptr [ESI + 0x6c],EAX
00756BEC  C7 86 2A 01 00 00 08 00 00 00  MOV dword ptr [ESI + 0x12a],0x8
LAB_00756bf6:
00756BF6  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00756BF9  8B 8E D0 00 00 00         MOV ECX,dword ptr [ESI + 0xd0]
00756BFF  53                        PUSH EBX
00756C00  57                        PUSH EDI
00756C01  85 C0                     TEST EAX,EAX
00756C03  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
00756C0A  7E 5C                     JLE 0x00756c68
00756C0C  83 C1 0C                  ADD ECX,0xc
LAB_00756c0f:
00756C0F  8B 96 2A 01 00 00         MOV EDX,dword ptr [ESI + 0x12a]
00756C15  8B C2                     MOV EAX,EDX
00756C17  83 F8 08                  CMP EAX,0x8
00756C1A  7D 38                     JGE 0x00756c54
00756C1C  8B BE 22 01 00 00         MOV EDI,dword ptr [ESI + 0x122]
00756C22  0F AF FA                  IMUL EDI,EDX
00756C25  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00756C28  EB 03                     JMP 0x00756c2d
LAB_00756c2a:
00756C2A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00756c2d:
00756C2D  8B 59 FC                  MOV EBX,dword ptr [ECX + -0x4]
00756C30  0F AF D8                  IMUL EBX,EAX
00756C33  D1 E3                     SHL EBX,0x1
00756C35  3B DF                     CMP EBX,EDI
00756C37  7F 1B                     JG 0x00756c54
00756C39  8B 19                     MOV EBX,dword ptr [ECX]
00756C3B  8B BE 26 01 00 00         MOV EDI,dword ptr [ESI + 0x126]
00756C41  0F AF D8                  IMUL EBX,EAX
00756C44  0F AF FA                  IMUL EDI,EDX
00756C47  D1 E3                     SHL EBX,0x1
00756C49  3B DF                     CMP EBX,EDI
00756C4B  7F 07                     JG 0x00756c54
00756C4D  03 C0                     ADD EAX,EAX
00756C4F  83 F8 08                  CMP EAX,0x8
00756C52  7C D6                     JL 0x00756c2a
LAB_00756c54:
00756C54  89 41 18                  MOV dword ptr [ECX + 0x18],EAX
00756C57  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00756C5A  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00756C5D  40                        INC EAX
00756C5E  83 C1 54                  ADD ECX,0x54
00756C61  3B C2                     CMP EAX,EDX
00756C63  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00756C66  7C A7                     JL 0x00756c0f
LAB_00756c68:
00756C68  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00756C6B  8B BE D0 00 00 00         MOV EDI,dword ptr [ESI + 0xd0]
00756C71  33 DB                     XOR EBX,EBX
00756C73  85 C0                     TEST EAX,EAX
00756C75  7E 48                     JLE 0x00756cbf
00756C77  83 C7 24                  ADD EDI,0x24
LAB_00756c7a:
00756C7A  8B 57 E4                  MOV EDX,dword ptr [EDI + -0x1c]
00756C7D  8B 8E 22 01 00 00         MOV ECX,dword ptr [ESI + 0x122]
00756C83  0F AF 17                  IMUL EDX,dword ptr [EDI]
00756C86  0F AF 56 14               IMUL EDX,dword ptr [ESI + 0x14]
00756C8A  C1 E1 03                  SHL ECX,0x3
00756C8D  51                        PUSH ECX
00756C8E  52                        PUSH EDX
00756C8F  E8 DC 31 00 00            CALL 0x00759e70
00756C94  8B 4F E8                  MOV ECX,dword ptr [EDI + -0x18]
00756C97  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
00756C9A  0F AF 0F                  IMUL ECX,dword ptr [EDI]
00756C9D  0F AF 4E 18               IMUL ECX,dword ptr [ESI + 0x18]
00756CA1  8B 86 26 01 00 00         MOV EAX,dword ptr [ESI + 0x126]
00756CA7  C1 E0 03                  SHL EAX,0x3
00756CAA  50                        PUSH EAX
00756CAB  51                        PUSH ECX
00756CAC  E8 BF 31 00 00            CALL 0x00759e70
00756CB1  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
00756CB4  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00756CB7  43                        INC EBX
00756CB8  83 C7 54                  ADD EDI,0x54
00756CBB  3B D8                     CMP EBX,EAX
00756CBD  7C BB                     JL 0x00756c7a
LAB_00756cbf:
00756CBF  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00756CC2  5F                        POP EDI
00756CC3  48                        DEC EAX
00756CC4  5B                        POP EBX
00756CC5  83 F8 04                  CMP EAX,0x4
00756CC8  77 22                     JA 0x00756cec
switchD_00756cca::switchD:
00756CCA  FF 24 85 2C 6D 75 00      JMP dword ptr [EAX*0x4 + 0x756d2c]
switchD_00756cca::caseD_1:
00756CD1  C7 46 70 01 00 00 00      MOV dword ptr [ESI + 0x70],0x1
00756CD8  EB 18                     JMP 0x00756cf2
switchD_00756cca::caseD_2:
00756CDA  C7 46 70 03 00 00 00      MOV dword ptr [ESI + 0x70],0x3
00756CE1  EB 0F                     JMP 0x00756cf2
switchD_00756cca::caseD_4:
00756CE3  C7 46 70 04 00 00 00      MOV dword ptr [ESI + 0x70],0x4
00756CEA  EB 06                     JMP 0x00756cf2
switchD_00756cca::default:
00756CEC  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00756CEF  89 56 70                  MOV dword ptr [ESI + 0x70],EDX
LAB_00756cf2:
00756CF2  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
00756CF5  85 C0                     TEST EAX,EAX
00756CF7  B8 01 00 00 00            MOV EAX,0x1
00756CFC  75 03                     JNZ 0x00756d01
00756CFE  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
LAB_00756d01:
00756D01  56                        PUSH ESI
00756D02  89 46 74                  MOV dword ptr [ESI + 0x74],EAX
00756D05  E8 36 00 00 00            CALL 0x00756d40
00756D0A  85 C0                     TEST EAX,EAX
00756D0C  74 10                     JZ 0x00756d1e
00756D0E  8B 86 26 01 00 00         MOV EAX,dword ptr [ESI + 0x126]
00756D14  89 46 78                  MOV dword ptr [ESI + 0x78],EAX
00756D17  5E                        POP ESI
00756D18  8B E5                     MOV ESP,EBP
00756D1A  5D                        POP EBP
00756D1B  C2 04 00                  RET 0x4
LAB_00756d1e:
00756D1E  C7 46 78 01 00 00 00      MOV dword ptr [ESI + 0x78],0x1
00756D25  5E                        POP ESI
00756D26  8B E5                     MOV ESP,EBP
00756D28  5D                        POP EBP
00756D29  C2 04 00                  RET 0x4
