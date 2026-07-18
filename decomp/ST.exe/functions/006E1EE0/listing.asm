FUN_006e1ee0:
006E1EE0  55                        PUSH EBP
006E1EE1  8B EC                     MOV EBP,ESP
006E1EE3  83 EC 68                  SUB ESP,0x68
006E1EE6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E1EE9  53                        PUSH EBX
006E1EEA  56                        PUSH ESI
006E1EEB  57                        PUSH EDI
006E1EEC  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
006E1EEF  8B 72 28                  MOV ESI,dword ptr [EDX + 0x28]
006E1EF2  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006E1EF5  33 FF                     XOR EDI,EDI
006E1EF7  0F BF 42 04               MOVSX EAX,word ptr [EDX + 0x4]
006E1EFB  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E1EFE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006E1F01  DB 45 B0                  FILD dword ptr [EBP + -0x50]
006E1F04  0F BF 42 06               MOVSX EAX,word ptr [EDX + 0x6]
006E1F08  DC 89 C8 00 00 00         FMUL double ptr [ECX + 0xc8]
006E1F0E  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E1F11  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
006E1F14  0F BF 42 08               MOVSX EAX,word ptr [EDX + 0x8]
006E1F18  DD 5D 98                  FSTP double ptr [EBP + -0x68]
006E1F1B  DB 45 B0                  FILD dword ptr [EBP + -0x50]
006E1F1E  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E1F21  8B 81 24 01 00 00         MOV EAX,dword ptr [ECX + 0x124]
006E1F27  3B C7                     CMP EAX,EDI
006E1F29  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
006E1F2C  DC 89 C8 00 00 00         FMUL double ptr [ECX + 0xc8]
006E1F32  DD 5D A0                  FSTP double ptr [EBP + -0x60]
006E1F35  DB 45 B0                  FILD dword ptr [EBP + -0x50]
006E1F38  DC 89 D0 00 00 00         FMUL double ptr [ECX + 0xd0]
006E1F3E  DD 5D A8                  FSTP double ptr [EBP + -0x58]
006E1F41  74 0A                     JZ 0x006e1f4d
006E1F43  83 F8 0A                  CMP EAX,0xa
006E1F46  74 05                     JZ 0x006e1f4d
006E1F48  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
006E1F4B  EB 06                     JMP 0x006e1f53
LAB_006e1f4d:
006E1F4D  8B 4A 3C                  MOV ECX,dword ptr [EDX + 0x3c]
006E1F50  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
LAB_006e1f53:
006E1F53  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
006E1F56  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006E1F59  C1 E1 04                  SHL ECX,0x4
006E1F5C  8B D9                     MOV EBX,ECX
006E1F5E  83 C8 FF                  OR EAX,0xffffffff
006E1F61  C1 E9 02                  SHR ECX,0x2
006E1F64  F3 AB                     STOSD.REP ES:EDI
006E1F66  8B CB                     MOV ECX,EBX
006E1F68  BB FF FF FF 7F            MOV EBX,0x7fffffff
006E1F6D  83 E1 03                  AND ECX,0x3
006E1F70  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
006E1F73  F3 AA                     STOSB.REP ES:EDI
006E1F75  8B 52 24                  MOV EDX,dword ptr [EDX + 0x24]
006E1F78  B8 01 00 00 80            MOV EAX,0x80000001
006E1F7D  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006E1F80  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006E1F83  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006E1F86  8D 42 FF                  LEA EAX,[EDX + -0x1]
006E1F89  83 F8 03                  CMP EAX,0x3
006E1F8C  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006E1F8F  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006E1F92  C7 45 EC FF FF FF FF      MOV dword ptr [EBP + -0x14],0xffffffff
006E1F99  77 3B                     JA 0x006e1fd6
switchD_006e1f9b::switchD:
006E1F9B  FF 24 85 B8 25 6E 00      JMP dword ptr [EAX*0x4 + 0x6e25b8]
switchD_006e1f9b::caseD_4:
006E1FA2  8A 46 54                  MOV AL,byte ptr [ESI + 0x54]
006E1FA5  83 E0 20                  AND EAX,0x20
006E1FA8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
switchD_006e1f9b::caseD_3:
006E1FAB  8A 4E 38                  MOV CL,byte ptr [ESI + 0x38]
006E1FAE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006E1FB1  83 E1 20                  AND ECX,0x20
006E1FB4  23 C1                     AND EAX,ECX
006E1FB6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
switchD_006e1f9b::caseD_2:
006E1FB9  8A 46 1C                  MOV AL,byte ptr [ESI + 0x1c]
006E1FBC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006E1FBF  83 E0 20                  AND EAX,0x20
006E1FC2  23 C8                     AND ECX,EAX
006E1FC4  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
switchD_006e1f9b::caseD_1:
006E1FC7  8A 0E                     MOV CL,byte ptr [ESI]
006E1FC9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006E1FCC  83 E1 20                  AND ECX,0x20
006E1FCF  23 C1                     AND EAX,ECX
006E1FD1  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006E1FD4  EB 07                     JMP 0x006e1fdd
switchD_006e1f9b::default:
006E1FD6  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_006e1fdd:
006E1FDD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006E1FE0  8B 88 A8 00 00 00         MOV ECX,dword ptr [EAX + 0xa8]
006E1FE6  B0 02                     MOV AL,0x2
006E1FE8  D1 E1                     SHL ECX,0x1
006E1FEA  D2 E0                     SHL AL,CL
006E1FEC  33 C9                     XOR ECX,ECX
006E1FEE  3B D1                     CMP EDX,ECX
006E1FF0  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006E1FF3  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006E1FF6  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
006E1FF9  0F 8E 45 03 00 00         JLE 0x006e2344
LAB_006e1fff:
006E1FFF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006E2002  8A 16                     MOV DL,byte ptr [ESI]
006E2004  84 90 AC 00 00 00         TEST byte ptr [EAX + 0xac],DL
006E200A  0F 84 16 03 00 00         JZ 0x006e2326
006E2010  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006E2013  85 C0                     TEST EAX,EAX
006E2015  74 0E                     JZ 0x006e2025
006E2017  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
006E201A  8A 1C 01                  MOV BL,byte ptr [ECX + EAX*0x1]
006E201D  84 DA                     TEST DL,BL
006E201F  0F 84 01 03 00 00         JZ 0x006e2326
LAB_006e2025:
006E2025  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E2028  33 C0                     XOR EAX,EAX
006E202A  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006E202D  8B C8                     MOV ECX,EAX
006E202F  C1 E1 04                  SHL ECX,0x4
006E2032  03 CA                     ADD ECX,EDX
006E2034  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
006E2037  83 FF FF                  CMP EDI,-0x1
006E203A  75 33                     JNZ 0x006e206f
006E203C  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006E203F  6A 01                     PUSH 0x1
006E2041  52                        PUSH EDX
006E2042  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006E2045  52                        PUSH EDX
006E2046  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
006E2049  52                        PUSH EDX
006E204A  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006E204D  52                        PUSH EDX
006E204E  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
006E2051  52                        PUSH EDX
006E2052  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006E2055  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006E2058  52                        PUSH EDX
006E2059  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006E205C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E205F  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
006E2062  50                        PUSH EAX
006E2063  51                        PUSH ECX
006E2064  8B CB                     MOV ECX,EBX
006E2066  E8 65 05 00 00            CALL 0x006e25d0
006E206B  8B F8                     MOV EDI,EAX
006E206D  EB 03                     JMP 0x006e2072
LAB_006e206f:
006E206F  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_006e2072:
006E2072  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E2075  33 C0                     XOR EAX,EAX
006E2077  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
006E207A  8B C8                     MOV ECX,EAX
006E207C  C1 E1 04                  SHL ECX,0x4
006E207F  03 CA                     ADD ECX,EDX
006E2081  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006E2084  83 FA FF                  CMP EDX,-0x1
006E2087  75 30                     JNZ 0x006e20b9
006E2089  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006E208C  6A 01                     PUSH 0x1
006E208E  52                        PUSH EDX
006E208F  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006E2092  52                        PUSH EDX
006E2093  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
006E2096  52                        PUSH EDX
006E2097  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006E209A  52                        PUSH EDX
006E209B  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
006E209E  52                        PUSH EDX
006E209F  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006E20A2  52                        PUSH EDX
006E20A3  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006E20A6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E20A9  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
006E20AC  50                        PUSH EAX
006E20AD  51                        PUSH ECX
006E20AE  8B CB                     MOV ECX,EBX
006E20B0  E8 1B 05 00 00            CALL 0x006e25d0
006E20B5  0B F8                     OR EDI,EAX
006E20B7  EB 02                     JMP 0x006e20bb
LAB_006e20b9:
006E20B9  0B FA                     OR EDI,EDX
LAB_006e20bb:
006E20BB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E20BE  33 C0                     XOR EAX,EAX
006E20C0  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
006E20C3  8B C8                     MOV ECX,EAX
006E20C5  C1 E1 04                  SHL ECX,0x4
006E20C8  03 CA                     ADD ECX,EDX
006E20CA  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006E20CD  83 FA FF                  CMP EDX,-0x1
006E20D0  75 30                     JNZ 0x006e2102
006E20D2  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006E20D5  6A 01                     PUSH 0x1
006E20D7  52                        PUSH EDX
006E20D8  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006E20DB  52                        PUSH EDX
006E20DC  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
006E20DF  52                        PUSH EDX
006E20E0  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006E20E3  52                        PUSH EDX
006E20E4  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
006E20E7  52                        PUSH EDX
006E20E8  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006E20EB  52                        PUSH EDX
006E20EC  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006E20EF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E20F2  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
006E20F5  50                        PUSH EAX
006E20F6  51                        PUSH ECX
006E20F7  8B CB                     MOV ECX,EBX
006E20F9  E8 D2 04 00 00            CALL 0x006e25d0
006E20FE  0B F8                     OR EDI,EAX
006E2100  EB 02                     JMP 0x006e2104
LAB_006e2102:
006E2102  0B FA                     OR EDI,EDX
LAB_006e2104:
006E2104  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E2107  33 C9                     XOR ECX,ECX
006E2109  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
006E210C  33 C0                     XOR EAX,EAX
006E210E  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
006E2111  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006E2114  C1 E1 04                  SHL ECX,0x4
006E2117  C1 E0 04                  SHL EAX,0x4
006E211A  8B 5C 11 04               MOV EBX,dword ptr [ECX + EDX*0x1 + 0x4]
006E211E  03 CA                     ADD ECX,EDX
006E2120  03 F0                     ADD ESI,EAX
006E2122  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
006E2125  8B 11                     MOV EDX,dword ptr [ECX]
006E2127  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
006E212A  8B 06                     MOV EAX,dword ptr [ESI]
006E212C  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006E212F  3B D0                     CMP EDX,EAX
006E2131  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006E2134  7E 03                     JLE 0x006e2139
006E2136  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_006e2139:
006E2139  7D 05                     JGE 0x006e2140
006E213B  8B D0                     MOV EDX,EAX
006E213D  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
LAB_006e2140:
006E2140  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006E2143  3B D8                     CMP EBX,EAX
006E2145  7E 08                     JLE 0x006e214f
006E2147  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006E214A  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006E214D  3B D8                     CMP EBX,EAX
LAB_006e214f:
006E214F  7D 03                     JGE 0x006e2154
006E2151  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_006e2154:
006E2154  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006E2157  33 C0                     XOR EAX,EAX
006E2159  8A 43 03                  MOV AL,byte ptr [EBX + 0x3]
006E215C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006E215F  C1 E0 04                  SHL EAX,0x4
006E2162  03 C3                     ADD EAX,EBX
006E2164  8B 5D C4                  MOV EBX,dword ptr [EBP + -0x3c]
006E2167  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E216A  8B 00                     MOV EAX,dword ptr [EAX]
006E216C  3B D8                     CMP EBX,EAX
006E216E  7E 03                     JLE 0x006e2173
006E2170  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_006e2173:
006E2173  3B D0                     CMP EDX,EAX
006E2175  7D 05                     JGE 0x006e217c
006E2177  8B D0                     MOV EDX,EAX
006E2179  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
LAB_006e217c:
006E217C  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006E217F  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
006E2182  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006E2185  3B D8                     CMP EBX,EAX
006E2187  7E 03                     JLE 0x006e218c
006E2189  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_006e218c:
006E218C  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006E218F  3B D8                     CMP EBX,EAX
006E2191  7D 05                     JGE 0x006e2198
006E2193  8B D8                     MOV EBX,EAX
006E2195  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
LAB_006e2198:
006E2198  85 FF                     TEST EDI,EDI
006E219A  75 3D                     JNZ 0x006e21d9
006E219C  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
006E219F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006E21A2  C1 FF 10                  SAR EDI,0x10
006E21A5  3B 78 38                  CMP EDI,dword ptr [EAX + 0x38]
006E21A8  0F 8D 75 01 00 00         JGE 0x006e2323
006E21AE  8B FA                     MOV EDI,EDX
006E21B0  C1 FF 10                  SAR EDI,0x10
006E21B3  3B 78 30                  CMP EDI,dword ptr [EAX + 0x30]
006E21B6  0F 8C 67 01 00 00         JL 0x006e2323
006E21BC  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
006E21BF  C1 FF 10                  SAR EDI,0x10
006E21C2  3B 78 3C                  CMP EDI,dword ptr [EAX + 0x3c]
006E21C5  0F 8D 58 01 00 00         JGE 0x006e2323
006E21CB  8B 78 34                  MOV EDI,dword ptr [EAX + 0x34]
006E21CE  C1 FB 10                  SAR EBX,0x10
006E21D1  3B DF                     CMP EBX,EDI
006E21D3  0F 8C 4A 01 00 00         JL 0x006e2323
LAB_006e21d9:
006E21D9  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
006E21DC  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006E21DF  3B F8                     CMP EDI,EAX
006E21E1  7E 02                     JLE 0x006e21e5
006E21E3  8B F8                     MOV EDI,EAX
LAB_006e21e5:
006E21E5  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006E21E8  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006E21EB  3B F8                     CMP EDI,EAX
006E21ED  7E 02                     JLE 0x006e21f1
006E21EF  8B F8                     MOV EDI,EAX
LAB_006e21f1:
006E21F1  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
006E21F4  33 C9                     XOR ECX,ECX
006E21F6  85 DB                     TEST EBX,EBX
006E21F8  0F 8E 8E 00 00 00         JLE 0x006e228c
006E21FE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E2201  8B 72 28                  MOV ESI,dword ptr [EDX + 0x28]
006E2204  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_006e2207:
006E2207  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006E220A  33 C0                     XOR EAX,EAX
006E220C  8A 04 19                  MOV AL,byte ptr [ECX + EBX*0x1]
006E220F  8D 1C C5 00 00 00 00      LEA EBX,[EAX*0x8 + 0x0]
006E2216  2B D8                     SUB EBX,EAX
006E2218  8D 04 9E                  LEA EAX,[ESI + EBX*0x4]
006E221B  33 DB                     XOR EBX,EBX
006E221D  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
006E2220  C1 E3 04                  SHL EBX,0x4
006E2223  3B 7C 13 08               CMP EDI,dword ptr [EBX + EDX*0x1 + 0x8]
006E2227  7F 2C                     JG 0x006e2255
006E2229  33 DB                     XOR EBX,EBX
006E222B  8A 58 02                  MOV BL,byte ptr [EAX + 0x2]
006E222E  C1 E3 04                  SHL EBX,0x4
006E2231  3B 7C 13 08               CMP EDI,dword ptr [EBX + EDX*0x1 + 0x8]
006E2235  7F 1E                     JG 0x006e2255
006E2237  33 DB                     XOR EBX,EBX
006E2239  8A 58 03                  MOV BL,byte ptr [EAX + 0x3]
006E223C  C1 E3 04                  SHL EBX,0x4
006E223F  3B 7C 13 08               CMP EDI,dword ptr [EBX + EDX*0x1 + 0x8]
006E2243  7F 10                     JG 0x006e2255
006E2245  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
006E2248  41                        INC ECX
006E2249  3B CB                     CMP ECX,EBX
006E224B  7C BA                     JL 0x006e2207
LAB_006e224d:
006E224D  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
006E2250  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006E2253  EB 3A                     JMP 0x006e228f
LAB_006e2255:
006E2255  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
006E2258  3B CB                     CMP ECX,EBX
006E225A  7D F1                     JGE 0x006e224d
006E225C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E225F  8B D3                     MOV EDX,EBX
006E2261  2B D1                     SUB EDX,ECX
006E2263  8D 34 01                  LEA ESI,[ECX + EAX*0x1]
006E2266  52                        PUSH EDX
006E2267  8D 44 01 01               LEA EAX,[ECX + EAX*0x1 + 0x1]
006E226B  56                        PUSH ESI
006E226C  50                        PUSH EAX
006E226D  E8 FE B7 04 00            CALL 0x0072da70
006E2272  8A 4D BC                  MOV CL,byte ptr [EBP + -0x44]
006E2275  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006E2278  83 C4 0C                  ADD ESP,0xc
006E227B  43                        INC EBX
006E227C  88 0E                     MOV byte ptr [ESI],CL
006E227E  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
006E2281  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006E2284  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006E2287  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006E228A  EB 16                     JMP 0x006e22a2
LAB_006e228c:
006E228C  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
LAB_006e228f:
006E228F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E2292  8A 4D BC                  MOV CL,byte ptr [EBP + -0x44]
006E2295  88 0C 03                  MOV byte ptr [EBX + EAX*0x1],CL
006E2298  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006E229B  43                        INC EBX
006E229C  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006E229F  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_006e22a2:
006E22A2  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006E22A5  85 C0                     TEST EAX,EAX
006E22A7  74 39                     JZ 0x006e22e2
006E22A9  33 C0                     XOR EAX,EAX
006E22AB  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006E22AE  C1 E0 04                  SHL EAX,0x4
006E22B1  8B 4C 18 08               MOV ECX,dword ptr [EAX + EBX*0x1 + 0x8]
006E22B5  33 C0                     XOR EAX,EAX
006E22B7  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
006E22BA  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006E22BD  C1 E0 04                  SHL EAX,0x4
006E22C0  8B 44 18 08               MOV EAX,dword ptr [EAX + EBX*0x1 + 0x8]
006E22C4  3B C8                     CMP ECX,EAX
006E22C6  7D 05                     JGE 0x006e22cd
006E22C8  8B C8                     MOV ECX,EAX
006E22CA  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
LAB_006e22cd:
006E22CD  33 C0                     XOR EAX,EAX
006E22CF  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
006E22D2  C1 E0 04                  SHL EAX,0x4
006E22D5  8B 44 18 08               MOV EAX,dword ptr [EAX + EBX*0x1 + 0x8]
006E22D9  3B C8                     CMP ECX,EAX
006E22DB  7D 05                     JGE 0x006e22e2
006E22DD  8B C8                     MOV ECX,EAX
006E22DF  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
LAB_006e22e2:
006E22E2  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006E22E5  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
006E22E8  3B D8                     CMP EBX,EAX
006E22EA  7E 03                     JLE 0x006e22ef
006E22EC  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_006e22ef:
006E22EF  39 55 D0                  CMP dword ptr [EBP + -0x30],EDX
006E22F2  7D 03                     JGE 0x006e22f7
006E22F4  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
LAB_006e22f7:
006E22F7  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006E22FA  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006E22FD  3B D0                     CMP EDX,EAX
006E22FF  7E 03                     JLE 0x006e2304
006E2301  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_006e2304:
006E2304  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006E2307  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006E230A  3B D0                     CMP EDX,EAX
006E230C  7D 03                     JGE 0x006e2311
006E230E  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_006e2311:
006E2311  39 7D F8                  CMP dword ptr [EBP + -0x8],EDI
006E2314  7E 03                     JLE 0x006e2319
006E2316  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_006e2319:
006E2319  39 4D F0                  CMP dword ptr [EBP + -0x10],ECX
006E231C  7D 08                     JGE 0x006e2326
006E231E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006E2321  EB 03                     JMP 0x006e2326
LAB_006e2323:
006E2323  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
LAB_006e2326:
006E2326  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E2329  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006E232C  41                        INC ECX
006E232D  83 C6 1C                  ADD ESI,0x1c
006E2330  8B 42 24                  MOV EAX,dword ptr [EDX + 0x24]
006E2333  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006E2336  3B C8                     CMP ECX,EAX
006E2338  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
006E233B  0F 8C BE FC FF FF         JL 0x006e1fff
006E2341  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_006e2344:
006E2344  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006E2347  8B 88 B0 02 00 00         MOV ECX,dword ptr [EAX + 0x2b0]
006E234D  85 C9                     TEST ECX,ECX
006E234F  0F 84 40 02 00 00         JZ 0x006e2595
006E2355  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006E2358  85 C0                     TEST EAX,EAX
006E235A  0F 8E 35 02 00 00         JLE 0x006e2595
006E2360  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006E2363  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006E2366  C1 F8 10                  SAR EAX,0x10
006E2369  8B B9 C8 02 00 00         MOV EDI,dword ptr [ECX + 0x2c8]
006E236F  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006E2372  2B C7                     SUB EAX,EDI
006E2374  79 03                     JNS 0x006e2379
006E2376  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
LAB_006e2379:
006E2379  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006E237C  8B B1 C0 02 00 00         MOV ESI,dword ptr [ECX + 0x2c0]
006E2382  2B C7                     SUB EAX,EDI
006E2384  99                        CDQ
006E2385  F7 FE                     IDIV ESI
006E2387  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006E238A  C1 FA 10                  SAR EDX,0x10
006E238D  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006E2390  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006E2393  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
006E2396  3B D0                     CMP EDX,EAX
006E2398  7E 03                     JLE 0x006e239d
006E239A  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_006e239d:
006E239D  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006E23A0  2B C7                     SUB EAX,EDI
006E23A2  99                        CDQ
006E23A3  F7 FE                     IDIV ESI
006E23A5  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006E23A8  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006E23AB  85 C0                     TEST EAX,EAX
006E23AD  0F 85 A3 00 00 00         JNZ 0x006e2456
006E23B3  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006E23B6  8B B9 CC 02 00 00         MOV EDI,dword ptr [ECX + 0x2cc]
006E23BC  C1 FB 10                  SAR EBX,0x10
006E23BF  C1 FE 10                  SAR ESI,0x10
006E23C2  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006E23C5  2B DF                     SUB EBX,EDI
006E23C7  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006E23CA  79 03                     JNS 0x006e23cf
006E23CC  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
LAB_006e23cf:
006E23CF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006E23D2  8B 99 C4 02 00 00         MOV EBX,dword ptr [ECX + 0x2c4]
006E23D8  2B C7                     SUB EAX,EDI
006E23DA  99                        CDQ
006E23DB  F7 FB                     IDIV EBX
006E23DD  8B 51 2C                  MOV EDX,dword ptr [ECX + 0x2c]
006E23E0  8B F0                     MOV ESI,EAX
006E23E2  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006E23E5  C1 F8 10                  SAR EAX,0x10
006E23E8  3B C2                     CMP EAX,EDX
006E23EA  7E 02                     JLE 0x006e23ee
006E23EC  8B C2                     MOV EAX,EDX
LAB_006e23ee:
006E23EE  2B C7                     SUB EAX,EDI
006E23F0  99                        CDQ
006E23F1  F7 FB                     IDIV EBX
006E23F3  8B D6                     MOV EDX,ESI
006E23F5  0F AF 91 B8 02 00 00      IMUL EDX,dword ptr [ECX + 0x2b8]
006E23FC  8B 89 B0 02 00 00         MOV ECX,dword ptr [ECX + 0x2b0]
006E2402  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006E2405  3B F0                     CMP ESI,EAX
006E2407  0F 8F 88 01 00 00         JG 0x006e2595
006E240D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E2410  2B C6                     SUB EAX,ESI
006E2412  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006E2415  40                        INC EAX
006E2416  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006e2419:
006E2419  3B F7                     CMP ESI,EDI
006E241B  7F 1F                     JG 0x006e243c
006E241D  8B C7                     MOV EAX,EDI
006E241F  8D 0C 72                  LEA ECX,[EDX + ESI*0x2]
006E2422  2B C6                     SUB EAX,ESI
006E2424  40                        INC EAX
LAB_006e2425:
006E2425  33 DB                     XOR EBX,EBX
006E2427  66 8B 19                  MOV BX,word ptr [ECX]
006E242A  3B 5D F8                  CMP EBX,dword ptr [EBP + -0x8]
006E242D  7E 07                     JLE 0x006e2436
006E242F  66 8B 5D F8               MOV BX,word ptr [EBP + -0x8]
006E2433  66 89 19                  MOV word ptr [ECX],BX
LAB_006e2436:
006E2436  83 C1 02                  ADD ECX,0x2
006E2439  48                        DEC EAX
006E243A  75 E9                     JNZ 0x006e2425
LAB_006e243c:
006E243C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006E243F  8B 88 B8 02 00 00         MOV ECX,dword ptr [EAX + 0x2b8]
006E2445  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E2448  48                        DEC EAX
006E2449  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
006E244C  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006E244F  75 C8                     JNZ 0x006e2419
006E2451  E9 3F 01 00 00            JMP 0x006e2595
LAB_006e2456:
006E2456  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006E2459  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006E245C  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006E245F  8B C6                     MOV EAX,ESI
006E2461  2B C2                     SUB EAX,EDX
006E2463  2B FB                     SUB EDI,EBX
006E2465  99                        CDQ
006E2466  C1 FF 10                  SAR EDI,0x10
006E2469  F7 FF                     IDIV EDI
006E246B  8B B9 CC 02 00 00         MOV EDI,dword ptr [ECX + 0x2cc]
006E2471  C1 FB 10                  SAR EBX,0x10
006E2474  8B D3                     MOV EDX,EBX
006E2476  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006E2479  C1 FE 10                  SAR ESI,0x10
006E247C  2B D7                     SUB EDX,EDI
006E247E  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006E2481  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006E2484  79 14                     JNS 0x006e249a
006E2486  8B CF                     MOV ECX,EDI
006E2488  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006E248B  2B CB                     SUB ECX,EBX
006E248D  0F AF C8                  IMUL ECX,EAX
006E2490  C1 F9 10                  SAR ECX,0x10
006E2493  8B C6                     MOV EAX,ESI
006E2495  2B C1                     SUB EAX,ECX
006E2497  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006e249a:
006E249A  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006E249D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006E24A0  2B F7                     SUB ESI,EDI
006E24A2  8B 8A C4 02 00 00         MOV ECX,dword ptr [EDX + 0x2c4]
006E24A8  8B C6                     MOV EAX,ESI
006E24AA  99                        CDQ
006E24AB  F7 F9                     IDIV ECX
006E24AD  8B D8                     MOV EBX,EAX
006E24AF  8B C6                     MOV EAX,ESI
006E24B1  99                        CDQ
006E24B2  F7 F9                     IDIV ECX
006E24B4  8B C1                     MOV EAX,ECX
006E24B6  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006E24B9  2B C2                     SUB EAX,EDX
006E24BB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006E24BE  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
006E24C2  C1 F8 10                  SAR EAX,0x10
006E24C5  C1 FA 10                  SAR EDX,0x10
006E24C8  2B F0                     SUB ESI,EAX
006E24CA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006E24CD  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006E24D0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006E24D3  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
006E24D6  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006E24D9  C1 FA 10                  SAR EDX,0x10
006E24DC  3B D0                     CMP EDX,EAX
006E24DE  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006E24E1  7E 13                     JLE 0x006e24f6
006E24E3  2B D0                     SUB EDX,EAX
006E24E5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006E24E8  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
006E24EC  C1 FA 10                  SAR EDX,0x10
006E24EF  03 F2                     ADD ESI,EDX
006E24F1  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006E24F4  EB 06                     JMP 0x006e24fc
LAB_006e24f6:
006E24F6  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006E24F9  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_006e24fc:
006E24FC  2B C7                     SUB EAX,EDI
006E24FE  8B FB                     MOV EDI,EBX
006E2500  99                        CDQ
006E2501  F7 F9                     IDIV ECX
006E2503  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006E2506  0F AF B9 B8 02 00 00      IMUL EDI,dword ptr [ECX + 0x2b8]
006E250D  8B 91 B0 02 00 00         MOV EDX,dword ptr [ECX + 0x2b0]
006E2513  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
006E2516  3B D8                     CMP EBX,EAX
006E2518  0F 8D 91 00 00 00         JGE 0x006e25af
006E251E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E2521  2B C3                     SUB EAX,EBX
006E2523  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006E2526  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
LAB_006e2529:
006E2529  3B DF                     CMP EBX,EDI
006E252B  7F 22                     JG 0x006e254f
006E252D  8B C7                     MOV EAX,EDI
006E252F  8D 0C 5A                  LEA ECX,[EDX + EBX*0x2]
006E2532  2B C3                     SUB EAX,EBX
006E2534  40                        INC EAX
LAB_006e2535:
006E2535  33 F6                     XOR ESI,ESI
006E2537  66 8B 31                  MOV SI,word ptr [ECX]
006E253A  3B 75 F8                  CMP ESI,dword ptr [EBP + -0x8]
006E253D  7E 07                     JLE 0x006e2546
006E253F  66 8B 75 F0               MOV SI,word ptr [EBP + -0x10]
006E2543  66 89 31                  MOV word ptr [ECX],SI
LAB_006e2546:
006E2546  83 C1 02                  ADD ECX,0x2
006E2549  48                        DEC EAX
006E254A  75 E9                     JNZ 0x006e2535
006E254C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_006e254f:
006E254F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E2552  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006E2555  0F AF 81 C4 02 00 00      IMUL EAX,dword ptr [ECX + 0x2c4]
006E255C  C1 F8 10                  SAR EAX,0x10
006E255F  2B F0                     SUB ESI,EAX
006E2561  8B 81 B8 02 00 00         MOV EAX,dword ptr [ECX + 0x2b8]
006E2567  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006E256A  8D 14 42                  LEA EDX,[EDX + EAX*0x2]
006E256D  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006E2570  48                        DEC EAX
006E2571  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E2574  75 B3                     JNZ 0x006e2529
006E2576  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_006e2579:
006E2579  3B DF                     CMP EBX,EDI
006E257B  7F 18                     JG 0x006e2595
006E257D  2B FB                     SUB EDI,EBX
006E257F  8D 04 5A                  LEA EAX,[EDX + EBX*0x2]
006E2582  47                        INC EDI
LAB_006e2583:
006E2583  33 C9                     XOR ECX,ECX
006E2585  66 8B 08                  MOV CX,word ptr [EAX]
006E2588  3B CE                     CMP ECX,ESI
006E258A  7E 03                     JLE 0x006e258f
006E258C  66 89 30                  MOV word ptr [EAX],SI
LAB_006e258f:
006E258F  83 C0 02                  ADD EAX,0x2
006E2592  4F                        DEC EDI
006E2593  75 EE                     JNZ 0x006e2583
LAB_006e2595:
006E2595  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006E2598  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E259B  33 C9                     XOR ECX,ECX
006E259D  5F                        POP EDI
006E259E  85 C0                     TEST EAX,EAX
006E25A0  0F 95 C1                  SETNZ CL
006E25A3  89 02                     MOV dword ptr [EDX],EAX
006E25A5  5E                        POP ESI
006E25A6  8B C1                     MOV EAX,ECX
006E25A8  5B                        POP EBX
006E25A9  8B E5                     MOV ESP,EBP
006E25AB  5D                        POP EBP
006E25AC  C2 10 00                  RET 0x10
LAB_006e25af:
006E25AF  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006E25B2  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E25B5  EB C2                     JMP 0x006e2579
