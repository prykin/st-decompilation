FUN_006001e0:
006001E0  55                        PUSH EBP
006001E1  8B EC                     MOV EBP,ESP
006001E3  83 EC 14                  SUB ESP,0x14
006001E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006001E9  53                        PUSH EBX
006001EA  56                        PUSH ESI
006001EB  8B F1                     MOV ESI,ECX
006001ED  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006001F0  57                        PUSH EDI
006001F1  8B 96 33 02 00 00         MOV EDX,dword ptr [ESI + 0x233]
006001F7  33 DB                     XOR EBX,EBX
006001F9  8D 3C C8                  LEA EDI,[EAX + ECX*0x8]
006001FC  D1 E7                     SHL EDI,0x1
006001FE  66 8B 4C 17 06            MOV CX,word ptr [EDI + EDX*0x1 + 0x6]
00600203  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00600206  66 89 48 12               MOV word ptr [EAX + 0x12],CX
0060020A  8B 96 33 02 00 00         MOV EDX,dword ptr [ESI + 0x233]
00600210  66 8B 4C 17 08            MOV CX,word ptr [EDI + EDX*0x1 + 0x8]
00600215  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00600218  66 89 48 14               MOV word ptr [EAX + 0x14],CX
0060021C  8B 96 33 02 00 00         MOV EDX,dword ptr [ESI + 0x233]
00600222  66 8B 4C 17 0A            MOV CX,word ptr [EDI + EDX*0x1 + 0xa]
00600227  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
0060022A  66 89 48 16               MOV word ptr [EAX + 0x16],CX
0060022E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00600234  F6 82 E4 00 00 00 01      TEST byte ptr [EDX + 0xe4],0x1
0060023B  75 40                     JNZ 0x0060027d
0060023D  8B 86 33 02 00 00         MOV EAX,dword ptr [ESI + 0x233]
00600243  03 C7                     ADD EAX,EDI
00600245  0F BF 48 0A               MOVSX ECX,word ptr [EAX + 0xa]
00600249  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
0060024D  2B D1                     SUB EDX,ECX
0060024F  83 FA 32                  CMP EDX,0x32
00600252  7C 29                     JL 0x0060027d
00600254  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
00600258  0F BF 50 14               MOVSX EDX,word ptr [EAX + 0x14]
0060025C  0F BF 40 12               MOVSX EAX,word ptr [EAX + 0x12]
00600260  53                        PUSH EBX
00600261  53                        PUSH EBX
00600262  6A FF                     PUSH -0x1
00600264  53                        PUSH EBX
00600265  53                        PUSH EBX
00600266  53                        PUSH EBX
00600267  53                        PUSH EBX
00600268  53                        PUSH EBX
00600269  53                        PUSH EBX
0060026A  51                        PUSH ECX
0060026B  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00600271  52                        PUSH EDX
00600272  50                        PUSH EAX
00600273  53                        PUSH EBX
00600274  6A 01                     PUSH 0x1
00600276  6A 01                     PUSH 0x1
00600278  E8 B6 11 E0 FF            CALL 0x00401433
LAB_0060027d:
0060027D  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
00600283  8B 54 0F 46               MOV EDX,dword ptr [EDI + ECX*0x1 + 0x46]
00600287  8D 04 0F                  LEA EAX,[EDI + ECX*0x1]
0060028A  8B 4C 0F 4A               MOV ECX,dword ptr [EDI + ECX*0x1 + 0x4a]
0060028E  3B CA                     CMP ECX,EDX
00600290  7D 47                     JGE 0x006002d9
00600292  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
00600295  8B 48 4E                  MOV ECX,dword ptr [EAX + 0x4e]
00600298  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
0060029C  66 89 50 06               MOV word ptr [EAX + 0x6],DX
006002A0  8B 86 33 02 00 00         MOV EAX,dword ptr [ESI + 0x233]
006002A6  03 C7                     ADD EAX,EDI
006002A8  8B 48 4A                  MOV ECX,dword ptr [EAX + 0x4a]
006002AB  8B 50 4E                  MOV EDX,dword ptr [EAX + 0x4e]
006002AE  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006002B1  66 8B 4C 4A 02            MOV CX,word ptr [EDX + ECX*0x2 + 0x2]
006002B6  66 89 48 08               MOV word ptr [EAX + 0x8],CX
006002BA  8B 96 33 02 00 00         MOV EDX,dword ptr [ESI + 0x233]
006002C0  8B 4C 17 4A               MOV ECX,dword ptr [EDI + EDX*0x1 + 0x4a]
006002C4  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
006002C7  8B 54 17 4E               MOV EDX,dword ptr [EDI + EDX*0x1 + 0x4e]
006002CB  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006002CE  66 8B 4C 4A 04            MOV CX,word ptr [EDX + ECX*0x2 + 0x4]
006002D3  66 89 48 0A               MOV word ptr [EAX + 0xa],CX
006002D7  EB 52                     JMP 0x0060032b
LAB_006002d9:
006002D9  8D 4D F0                  LEA ECX,[EBP + -0x10]
006002DC  8D 55 F4                  LEA EDX,[EBP + -0xc]
006002DF  51                        PUSH ECX
006002E0  52                        PUSH EDX
006002E1  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006002E7  8D 4D F8                  LEA ECX,[EBP + -0x8]
006002EA  51                        PUSH ECX
006002EB  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
006002F1  51                        PUSH ECX
006002F2  50                        PUSH EAX
006002F3  8B CE                     MOV ECX,ESI
006002F5  E8 2E 30 E0 FF            CALL 0x00403328
006002FA  85 C0                     TEST EAX,EAX
006002FC  74 3E                     JZ 0x0060033c
006002FE  8B 96 33 02 00 00         MOV EDX,dword ptr [ESI + 0x233]
00600304  66 8B 45 F8               MOV AX,word ptr [EBP + -0x8]
00600308  66 89 44 17 06            MOV word ptr [EDI + EDX*0x1 + 0x6],AX
0060030D  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
00600313  66 8B 55 F4               MOV DX,word ptr [EBP + -0xc]
00600317  66 89 54 0F 08            MOV word ptr [EDI + ECX*0x1 + 0x8],DX
0060031C  8B 86 33 02 00 00         MOV EAX,dword ptr [ESI + 0x233]
00600322  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
00600326  66 89 4C 07 0A            MOV word ptr [EDI + EAX*0x1 + 0xa],CX
LAB_0060032b:
0060032B  8B 96 33 02 00 00         MOV EDX,dword ptr [ESI + 0x233]
00600331  8B 4C 17 4A               MOV ECX,dword ptr [EDI + EDX*0x1 + 0x4a]
00600335  8D 44 17 4A               LEA EAX,[EDI + EDX*0x1 + 0x4a]
00600339  41                        INC ECX
0060033A  89 08                     MOV dword ptr [EAX],ECX
LAB_0060033c:
0060033C  8B 86 33 02 00 00         MOV EAX,dword ptr [ESI + 0x233]
00600342  03 C7                     ADD EAX,EDI
00600344  0F BF 48 0A               MOVSX ECX,word ptr [EAX + 0xa]
00600348  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
0060034C  2B D1                     SUB EDX,ECX
0060034E  83 FA 64                  CMP EDX,0x64
00600351  0F 8C 57 01 00 00         JL 0x006004ae
00600357  66 8B 96 24 02 00 00      MOV DX,word ptr [ESI + 0x224]
0060035E  6A 00                     PUSH 0x0
00600360  6A 00                     PUSH 0x0
00600362  68 A9 00 00 00            PUSH 0xa9
00600367  52                        PUSH EDX
00600368  8B 96 20 02 00 00         MOV EDX,dword ptr [ESI + 0x220]
0060036E  52                        PUSH EDX
0060036F  8B 96 2A 02 00 00         MOV EDX,dword ptr [ESI + 0x22a]
00600375  52                        PUSH EDX
00600376  8B 96 0A 02 00 00         MOV EDX,dword ptr [ESI + 0x20a]
0060037C  52                        PUSH EDX
0060037D  0F BF 50 16               MOVSX EDX,word ptr [EAX + 0x16]
00600381  52                        PUSH EDX
00600382  0F BF 50 14               MOVSX EDX,word ptr [EAX + 0x14]
00600386  52                        PUSH EDX
00600387  0F BF 50 12               MOVSX EDX,word ptr [EAX + 0x12]
0060038B  52                        PUSH EDX
0060038C  51                        PUSH ECX
0060038D  0F BF 48 08               MOVSX ECX,word ptr [EAX + 0x8]
00600391  0F BF 50 06               MOVSX EDX,word ptr [EAX + 0x6]
00600395  51                        PUSH ECX
00600396  52                        PUSH EDX
00600397  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0060039D  E8 74 41 E0 FF            CALL 0x00404516
006003A2  8B D8                     MOV EBX,EAX
006003A4  85 DB                     TEST EBX,EBX
006003A6  0F 84 02 01 00 00         JZ 0x006004ae
006003AC  83 FB 01                  CMP EBX,0x1
006003AF  75 4B                     JNZ 0x006003fc
006003B1  8B 86 33 02 00 00         MOV EAX,dword ptr [ESI + 0x233]
006003B7  66 8B 8E F5 01 00 00      MOV CX,word ptr [ESI + 0x1f5]
006003BE  66 89 4C 07 06            MOV word ptr [EDI + EAX*0x1 + 0x6],CX
006003C3  8B 96 33 02 00 00         MOV EDX,dword ptr [ESI + 0x233]
006003C9  66 8B 86 F9 01 00 00      MOV AX,word ptr [ESI + 0x1f9]
006003D0  66 89 44 17 08            MOV word ptr [EDI + EDX*0x1 + 0x8],AX
006003D5  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
006003DB  66 8B 96 FD 01 00 00      MOV DX,word ptr [ESI + 0x1fd]
006003E2  8B C3                     MOV EAX,EBX
006003E4  66 89 54 0F 0A            MOV word ptr [EDI + ECX*0x1 + 0xa],DX
006003E9  C7 86 E9 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1e9],0x0
006003F3  5F                        POP EDI
006003F4  5E                        POP ESI
006003F5  5B                        POP EBX
006003F6  8B E5                     MOV ESP,EBP
006003F8  5D                        POP EBP
006003F9  C2 04 00                  RET 0x4
LAB_006003fc:
006003FC  83 FB 05                  CMP EBX,0x5
006003FF  0F 84 A2 00 00 00         JZ 0x006004a7
00600405  83 FB 02                  CMP EBX,0x2
00600408  0F 85 A0 00 00 00         JNZ 0x006004ae
0060040E  8B 8E E9 01 00 00         MOV ECX,dword ptr [ESI + 0x1e9]
00600414  85 C9                     TEST ECX,ECX
00600416  0F 84 8B 00 00 00         JZ 0x006004a7
0060041C  8D 55 EC                  LEA EDX,[EBP + -0x14]
0060041F  8B 01                     MOV EAX,dword ptr [ECX]
00600421  52                        PUSH EDX
00600422  8D 55 FC                  LEA EDX,[EBP + -0x4]
00600425  52                        PUSH EDX
00600426  8D 55 FE                  LEA EDX,[EBP + -0x2]
00600429  52                        PUSH EDX
0060042A  8D 55 0A                  LEA EDX,[EBP + 0xa]
0060042D  52                        PUSH EDX
0060042E  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
00600434  52                        PUSH EDX
00600435  FF 90 E0 00 00 00         CALL dword ptr [EAX + 0xe0]
0060043B  85 C0                     TEST EAX,EAX
0060043D  75 68                     JNZ 0x006004a7
0060043F  0F BF 45 0A               MOVSX EAX,word ptr [EBP + 0xa]
00600443  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
00600447  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
0060044B  89 86 F5 01 00 00         MOV dword ptr [ESI + 0x1f5],EAX
00600451  8B 86 33 02 00 00         MOV EAX,dword ptr [ESI + 0x233]
00600457  89 8E F9 01 00 00         MOV dword ptr [ESI + 0x1f9],ECX
0060045D  66 8B 8E F5 01 00 00      MOV CX,word ptr [ESI + 0x1f5]
00600464  89 96 FD 01 00 00         MOV dword ptr [ESI + 0x1fd],EDX
0060046A  66 89 4C 07 06            MOV word ptr [EDI + EAX*0x1 + 0x6],CX
0060046F  8B 96 33 02 00 00         MOV EDX,dword ptr [ESI + 0x233]
00600475  66 8B 86 F9 01 00 00      MOV AX,word ptr [ESI + 0x1f9]
0060047C  66 89 44 17 08            MOV word ptr [EDI + EDX*0x1 + 0x8],AX
00600481  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
00600487  66 8B 96 FD 01 00 00      MOV DX,word ptr [ESI + 0x1fd]
0060048E  66 89 54 0F 0A            MOV word ptr [EDI + ECX*0x1 + 0xa],DX
00600493  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00600496  89 86 F1 01 00 00         MOV dword ptr [ESI + 0x1f1],EAX
0060049C  5F                        POP EDI
0060049D  8B C3                     MOV EAX,EBX
0060049F  5E                        POP ESI
006004A0  5B                        POP EBX
006004A1  8B E5                     MOV ESP,EBP
006004A3  5D                        POP EBP
006004A4  C2 04 00                  RET 0x4
LAB_006004a7:
006004A7  8B CE                     MOV ECX,ESI
006004A9  E8 62 37 E0 FF            CALL 0x00403c10
LAB_006004ae:
006004AE  5F                        POP EDI
006004AF  8B C3                     MOV EAX,EBX
006004B1  5E                        POP ESI
006004B2  5B                        POP EBX
006004B3  8B E5                     MOV ESP,EBP
006004B5  5D                        POP EBP
006004B6  C2 04 00                  RET 0x4
