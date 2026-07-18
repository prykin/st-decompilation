CPanelTy::Update5Panel:
004FFE90  55                        PUSH EBP
004FFE91  8B EC                     MOV EBP,ESP
004FFE93  81 EC 84 00 00 00         SUB ESP,0x84
004FFE99  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004FFE9E  53                        PUSH EBX
004FFE9F  56                        PUSH ESI
004FFEA0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004FFEA3  57                        PUSH EDI
004FFEA4  8D 55 80                  LEA EDX,[EBP + -0x80]
004FFEA7  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
004FFEAD  6A 00                     PUSH 0x0
004FFEAF  52                        PUSH EDX
004FFEB0  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
004FFEB6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FFEBC  E8 2F D9 22 00            CALL 0x0072d7f0
004FFEC1  8B F0                     MOV ESI,EAX
004FFEC3  83 C4 08                  ADD ESP,0x8
004FFEC6  85 F6                     TEST ESI,ESI
004FFEC8  0F 85 AB 04 00 00         JNZ 0x00500379
004FFECE  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004FFED1  B9 0D 00 00 00            MOV ECX,0xd
004FFED6  8D 7D C0                  LEA EDI,[EBP + -0x40]
004FFED9  8D 93 51 0C 00 00         LEA EDX,[EBX + 0xc51]
004FFEDF  8B F2                     MOV ESI,EDX
004FFEE1  52                        PUSH EDX
004FFEE2  F3 A5                     MOVSD.REP ES:EDI,ESI
004FFEE4  66 A5                     MOVSW ES:EDI,ESI
004FFEE6  B9 0C 00 00 00            MOV ECX,0xc
004FFEEB  8B FA                     MOV EDI,EDX
004FFEED  F3 AB                     STOSD.REP ES:EDI
004FFEEF  66 AB                     STOSW ES:EDI
004FFEF1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004FFEF7  6A 05                     PUSH 0x5
004FFEF9  E8 BE 36 F0 FF            CALL 0x004035bc
004FFEFE  8A 45 C0                  MOV AL,byte ptr [EBP + -0x40]
004FFF01  8A 8B 51 0C 00 00         MOV CL,byte ptr [EBX + 0xc51]
004FFF07  3A C1                     CMP AL,CL
004FFF09  74 7A                     JZ 0x004fff85
004FFF0B  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
004FFF11  85 C9                     TEST ECX,ECX
004FFF13  74 07                     JZ 0x004fff1c
004FFF15  6A 00                     PUSH 0x0
004FFF17  E8 57 1B F0 FF            CALL 0x00401a73
LAB_004fff1c:
004FFF1C  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
004FFF22  85 C9                     TEST ECX,ECX
004FFF24  74 07                     JZ 0x004fff2d
004FFF26  6A 00                     PUSH 0x0
004FFF28  E8 46 1B F0 FF            CALL 0x00401a73
LAB_004fff2d:
004FFF2D  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
004FFF33  85 C9                     TEST ECX,ECX
004FFF35  74 07                     JZ 0x004fff3e
004FFF37  8B 11                     MOV EDX,dword ptr [ECX]
004FFF39  6A 00                     PUSH 0x0
004FFF3B  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004fff3e:
004FFF3E  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
004FFF44  85 C9                     TEST ECX,ECX
004FFF46  74 09                     JZ 0x004fff51
004FFF48  6A 00                     PUSH 0x0
004FFF4A  6A 00                     PUSH 0x0
004FFF4C  E8 A6 4B F0 FF            CALL 0x00404af7
LAB_004fff51:
004FFF51  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
004FFF57  85 C9                     TEST ECX,ECX
004FFF59  74 07                     JZ 0x004fff62
004FFF5B  6A 00                     PUSH 0x0
004FFF5D  E8 11 1B F0 FF            CALL 0x00401a73
LAB_004fff62:
004FFF62  6A 00                     PUSH 0x0
004FFF64  8B CB                     MOV ECX,EBX
004FFF66  E8 D9 1C F0 FF            CALL 0x00401c44
004FFF6B  8B CB                     MOV ECX,EBX
004FFF6D  E8 8C 35 F0 FF            CALL 0x004034fe
004FFF72  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
004FFF78  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004FFF7E  5F                        POP EDI
004FFF7F  5E                        POP ESI
004FFF80  5B                        POP EBX
004FFF81  8B E5                     MOV ESP,EBP
004FFF83  5D                        POP EBP
004FFF84  C3                        RET
LAB_004fff85:
004FFF85  8A 83 6E 0C 00 00         MOV AL,byte ptr [EBX + 0xc6e]
004FFF8B  8A 4D DD                  MOV CL,byte ptr [EBP + -0x23]
004FFF8E  3A C1                     CMP AL,CL
004FFF90  74 57                     JZ 0x004fffe9
004FFF92  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
004FFF98  85 C9                     TEST ECX,ECX
004FFF9A  74 07                     JZ 0x004fffa3
004FFF9C  6A 00                     PUSH 0x0
004FFF9E  E8 D0 1A F0 FF            CALL 0x00401a73
LAB_004fffa3:
004FFFA3  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
004FFFA9  85 C9                     TEST ECX,ECX
004FFFAB  74 07                     JZ 0x004fffb4
004FFFAD  6A 00                     PUSH 0x0
004FFFAF  E8 BF 1A F0 FF            CALL 0x00401a73
LAB_004fffb4:
004FFFB4  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
004FFFBA  85 C9                     TEST ECX,ECX
004FFFBC  74 07                     JZ 0x004fffc5
004FFFBE  8B 11                     MOV EDX,dword ptr [ECX]
004FFFC0  6A 00                     PUSH 0x0
004FFFC2  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004fffc5:
004FFFC5  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
004FFFCB  85 C9                     TEST ECX,ECX
004FFFCD  74 09                     JZ 0x004fffd8
004FFFCF  6A 00                     PUSH 0x0
004FFFD1  6A 00                     PUSH 0x0
004FFFD3  E8 1F 4B F0 FF            CALL 0x00404af7
LAB_004fffd8:
004FFFD8  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
004FFFDE  85 C9                     TEST ECX,ECX
004FFFE0  74 07                     JZ 0x004fffe9
004FFFE2  6A 00                     PUSH 0x0
004FFFE4  E8 8A 1A F0 FF            CALL 0x00401a73
LAB_004fffe9:
004FFFE9  8A 83 51 0C 00 00         MOV AL,byte ptr [EBX + 0xc51]
004FFFEF  3C 01                     CMP AL,0x1
004FFFF1  74 0C                     JZ 0x004fffff
004FFFF3  3C 04                     CMP AL,0x4
004FFFF5  74 08                     JZ 0x004fffff
004FFFF7  3C 03                     CMP AL,0x3
004FFFF9  0F 85 67 03 00 00         JNZ 0x00500366
LAB_004fffff:
004FFFFF  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00500002  8B 8B 59 0C 00 00         MOV ECX,dword ptr [EBX + 0xc59]
00500008  3B C1                     CMP EAX,ECX
0050000A  75 1A                     JNZ 0x00500026
0050000C  8A 4D C1                  MOV CL,byte ptr [EBP + -0x3f]
0050000F  8A 83 52 0C 00 00         MOV AL,byte ptr [EBX + 0xc52]
00500015  3A C8                     CMP CL,AL
00500017  75 0D                     JNZ 0x00500026
00500019  8A 55 C2                  MOV DL,byte ptr [EBP + -0x3e]
0050001C  8A 83 53 0C 00 00         MOV AL,byte ptr [EBX + 0xc53]
00500022  3A D0                     CMP DL,AL
00500024  74 60                     JZ 0x00500086
LAB_00500026:
00500026  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
0050002C  85 C9                     TEST ECX,ECX
0050002E  74 07                     JZ 0x00500037
00500030  6A 00                     PUSH 0x0
00500032  E8 3C 1A F0 FF            CALL 0x00401a73
LAB_00500037:
00500037  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
0050003D  85 C9                     TEST ECX,ECX
0050003F  74 07                     JZ 0x00500048
00500041  6A 00                     PUSH 0x0
00500043  E8 2B 1A F0 FF            CALL 0x00401a73
LAB_00500048:
00500048  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
0050004E  85 C9                     TEST ECX,ECX
00500050  74 07                     JZ 0x00500059
00500052  8B 01                     MOV EAX,dword ptr [ECX]
00500054  6A 00                     PUSH 0x0
00500056  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_00500059:
00500059  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
0050005F  85 C9                     TEST ECX,ECX
00500061  74 09                     JZ 0x0050006c
00500063  6A 00                     PUSH 0x0
00500065  6A 00                     PUSH 0x0
00500067  E8 8B 4A F0 FF            CALL 0x00404af7
LAB_0050006c:
0050006C  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
00500072  85 C9                     TEST ECX,ECX
00500074  74 07                     JZ 0x0050007d
00500076  6A 00                     PUSH 0x0
00500078  E8 F6 19 F0 FF            CALL 0x00401a73
LAB_0050007d:
0050007D  6A 00                     PUSH 0x0
0050007F  8B CB                     MOV ECX,EBX
00500081  E8 BE 1B F0 FF            CALL 0x00401c44
LAB_00500086:
00500086  8B 4D C3                  MOV ECX,dword ptr [EBP + -0x3d]
00500089  8B 83 54 0C 00 00         MOV EAX,dword ptr [EBX + 0xc54]
0050008F  3B C8                     CMP ECX,EAX
00500091  75 0D                     JNZ 0x005000a0
00500093  8A 55 C7                  MOV DL,byte ptr [EBP + -0x39]
00500096  8A 83 58 0C 00 00         MOV AL,byte ptr [EBX + 0xc58]
0050009C  3A D0                     CMP DL,AL
0050009E  74 50                     JZ 0x005000f0
LAB_005000a0:
005000A0  8B 83 47 0B 00 00         MOV EAX,dword ptr [EBX + 0xb47]
005000A6  8B 8B 9C 01 00 00         MOV ECX,dword ptr [EBX + 0x19c]
005000AC  6A 20                     PUSH 0x20
005000AE  6A 4E                     PUSH 0x4e
005000B0  6A 00                     PUSH 0x0
005000B2  6A 01                     PUSH 0x1
005000B4  6A 00                     PUSH 0x0
005000B6  50                        PUSH EAX
005000B7  6A 00                     PUSH 0x0
005000B9  6A 01                     PUSH 0x1
005000BB  6A 00                     PUSH 0x0
005000BD  51                        PUSH ECX
005000BE  E8 2D 55 1B 00            CALL 0x006b55f0
005000C3  6A 00                     PUSH 0x0
005000C5  8B CB                     MOV ECX,EBX
005000C7  E8 FB 47 F0 FF            CALL 0x004048c7
005000CC  8B 83 64 01 00 00         MOV EAX,dword ptr [EBX + 0x164]
005000D2  85 C0                     TEST EAX,EAX
005000D4  7C 1A                     JL 0x005000f0
005000D6  8B 93 B0 00 00 00         MOV EDX,dword ptr [EBX + 0xb0]
005000DC  8B 4B 58                  MOV ECX,dword ptr [EBX + 0x58]
005000DF  52                        PUSH EDX
005000E0  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005000E6  51                        PUSH ECX
005000E7  6A FF                     PUSH -0x1
005000E9  50                        PUSH EAX
005000EA  52                        PUSH EDX
005000EB  E8 50 35 1B 00            CALL 0x006b3640
LAB_005000f0:
005000F0  8D BB 5D 0C 00 00         LEA EDI,[EBX + 0xc5d]
005000F6  8D 75 CC                  LEA ESI,[EBP + -0x34]
LAB_005000f9:
005000F9  8A 0E                     MOV CL,byte ptr [ESI]
005000FB  8A 17                     MOV DL,byte ptr [EDI]
005000FD  8A C1                     MOV AL,CL
005000FF  3A CA                     CMP CL,DL
00500101  75 1E                     JNZ 0x00500121
00500103  84 C0                     TEST AL,AL
00500105  74 16                     JZ 0x0050011d
00500107  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
0050010A  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
0050010D  8A C2                     MOV AL,DL
0050010F  3A D1                     CMP DL,CL
00500111  75 0E                     JNZ 0x00500121
00500113  83 C6 02                  ADD ESI,0x2
00500116  83 C7 02                  ADD EDI,0x2
00500119  84 C0                     TEST AL,AL
0050011B  75 DC                     JNZ 0x005000f9
LAB_0050011d:
0050011D  33 C0                     XOR EAX,EAX
0050011F  EB 05                     JMP 0x00500126
LAB_00500121:
00500121  1B C0                     SBB EAX,EAX
00500123  83 D8 FF                  SBB EAX,-0x1
LAB_00500126:
00500126  85 C0                     TEST EAX,EAX
00500128  74 50                     JZ 0x0050017a
0050012A  8B 83 47 0B 00 00         MOV EAX,dword ptr [EBX + 0xb47]
00500130  8B 8B 9C 01 00 00         MOV ECX,dword ptr [EBX + 0x19c]
00500136  6A 20                     PUSH 0x20
00500138  6A 4E                     PUSH 0x4e
0050013A  6A 00                     PUSH 0x0
0050013C  6A 01                     PUSH 0x1
0050013E  6A 00                     PUSH 0x0
00500140  50                        PUSH EAX
00500141  6A 00                     PUSH 0x0
00500143  6A 01                     PUSH 0x1
00500145  6A 00                     PUSH 0x0
00500147  51                        PUSH ECX
00500148  E8 A3 54 1B 00            CALL 0x006b55f0
0050014D  6A 00                     PUSH 0x0
0050014F  8B CB                     MOV ECX,EBX
00500151  E8 71 47 F0 FF            CALL 0x004048c7
00500156  8B 83 64 01 00 00         MOV EAX,dword ptr [EBX + 0x164]
0050015C  85 C0                     TEST EAX,EAX
0050015E  7C 1A                     JL 0x0050017a
00500160  8B 93 B0 00 00 00         MOV EDX,dword ptr [EBX + 0xb0]
00500166  8B 4B 58                  MOV ECX,dword ptr [EBX + 0x58]
00500169  52                        PUSH EDX
0050016A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00500170  51                        PUSH ECX
00500171  6A FF                     PUSH -0x1
00500173  50                        PUSH EAX
00500174  52                        PUSH EDX
00500175  E8 C6 34 1B 00            CALL 0x006b3640
LAB_0050017a:
0050017A  8A 45 DB                  MOV AL,byte ptr [EBP + -0x25]
0050017D  8A 8B 6C 0C 00 00         MOV CL,byte ptr [EBX + 0xc6c]
00500183  3A C1                     CMP AL,CL
00500185  75 0D                     JNZ 0x00500194
00500187  8A 4D C2                  MOV CL,byte ptr [EBP + -0x3e]
0050018A  8A 83 53 0C 00 00         MOV AL,byte ptr [EBX + 0xc53]
00500190  3A C8                     CMP CL,AL
00500192  74 6A                     JZ 0x005001fe
LAB_00500194:
00500194  8B 83 54 0C 00 00         MOV EAX,dword ptr [EBX + 0xc54]
0050019A  3D DD 00 00 00            CMP EAX,0xdd
0050019F  74 5D                     JZ 0x005001fe
005001A1  3D DE 00 00 00            CMP EAX,0xde
005001A6  74 56                     JZ 0x005001fe
005001A8  3D E0 00 00 00            CMP EAX,0xe0
005001AD  74 4F                     JZ 0x005001fe
005001AF  8B 93 47 0B 00 00         MOV EDX,dword ptr [EBX + 0xb47]
005001B5  8B 83 9C 01 00 00         MOV EAX,dword ptr [EBX + 0x19c]
005001BB  6A 11                     PUSH 0x11
005001BD  6A 4E                     PUSH 0x4e
005001BF  6A 1F                     PUSH 0x1f
005001C1  6A 01                     PUSH 0x1
005001C3  6A 00                     PUSH 0x0
005001C5  52                        PUSH EDX
005001C6  6A 1F                     PUSH 0x1f
005001C8  6A 01                     PUSH 0x1
005001CA  6A 00                     PUSH 0x0
005001CC  50                        PUSH EAX
005001CD  E8 1E 54 1B 00            CALL 0x006b55f0
005001D2  6A 00                     PUSH 0x0
005001D4  8B CB                     MOV ECX,EBX
005001D6  E8 E9 17 F0 FF            CALL 0x004019c4
005001DB  8B 83 64 01 00 00         MOV EAX,dword ptr [EBX + 0x164]
005001E1  85 C0                     TEST EAX,EAX
005001E3  7C 19                     JL 0x005001fe
005001E5  8B 8B B0 00 00 00         MOV ECX,dword ptr [EBX + 0xb0]
005001EB  8B 53 58                  MOV EDX,dword ptr [EBX + 0x58]
005001EE  51                        PUSH ECX
005001EF  52                        PUSH EDX
005001F0  6A FF                     PUSH -0x1
005001F2  50                        PUSH EAX
005001F3  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005001F8  50                        PUSH EAX
005001F9  E8 42 34 1B 00            CALL 0x006b3640
LAB_005001fe:
005001FE  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
00500205  75 3A                     JNZ 0x00500241
00500207  80 BB 58 0C 00 00 03      CMP byte ptr [EBX + 0xc58],0x3
0050020E  75 31                     JNZ 0x00500241
00500210  8A 4D DC                  MOV CL,byte ptr [EBP + -0x24]
00500213  8A 83 6D 0C 00 00         MOV AL,byte ptr [EBX + 0xc6d]
00500219  3A C8                     CMP CL,AL
0050021B  74 24                     JZ 0x00500241
0050021D  8B 83 54 0C 00 00         MOV EAX,dword ptr [EBX + 0xc54]
00500223  3D DD 00 00 00            CMP EAX,0xdd
00500228  74 17                     JZ 0x00500241
0050022A  3D DE 00 00 00            CMP EAX,0xde
0050022F  74 10                     JZ 0x00500241
00500231  3D E0 00 00 00            CMP EAX,0xe0
00500236  74 09                     JZ 0x00500241
00500238  6A 00                     PUSH 0x0
0050023A  8B CB                     MOV ECX,EBX
0050023C  E8 26 24 F0 FF            CALL 0x00402667
LAB_00500241:
00500241  66 8B 55 DE               MOV DX,word ptr [EBP + -0x22]
00500245  66 3B 93 6F 0C 00 00      CMP DX,word ptr [EBX + 0xc6f]
0050024C  75 41                     JNZ 0x0050028f
0050024E  66 8B 45 E2               MOV AX,word ptr [EBP + -0x1e]
00500252  66 3B 83 73 0C 00 00      CMP AX,word ptr [EBX + 0xc73]
00500259  75 34                     JNZ 0x0050028f
0050025B  66 8B 4D E6               MOV CX,word ptr [EBP + -0x1a]
0050025F  66 3B 8B 77 0C 00 00      CMP CX,word ptr [EBX + 0xc77]
00500266  75 27                     JNZ 0x0050028f
00500268  66 8B 55 E0               MOV DX,word ptr [EBP + -0x20]
0050026C  66 3B 93 71 0C 00 00      CMP DX,word ptr [EBX + 0xc71]
00500273  75 1A                     JNZ 0x0050028f
00500275  66 8B 45 E4               MOV AX,word ptr [EBP + -0x1c]
00500279  66 3B 83 75 0C 00 00      CMP AX,word ptr [EBX + 0xc75]
00500280  75 0D                     JNZ 0x0050028f
00500282  66 8B 4D E8               MOV CX,word ptr [EBP + -0x18]
00500286  66 3B 8B 79 0C 00 00      CMP CX,word ptr [EBX + 0xc79]
0050028D  74 6A                     JZ 0x005002f9
LAB_0050028f:
0050028F  8B 83 54 0C 00 00         MOV EAX,dword ptr [EBX + 0xc54]
00500295  3D DD 00 00 00            CMP EAX,0xdd
0050029A  74 5D                     JZ 0x005002f9
0050029C  3D DE 00 00 00            CMP EAX,0xde
005002A1  74 56                     JZ 0x005002f9
005002A3  3D E0 00 00 00            CMP EAX,0xe0
005002A8  74 4F                     JZ 0x005002f9
005002AA  8B 93 47 0B 00 00         MOV EDX,dword ptr [EBX + 0xb47]
005002B0  8B 83 9C 01 00 00         MOV EAX,dword ptr [EBX + 0x19c]
005002B6  6A 24                     PUSH 0x24
005002B8  6A 4E                     PUSH 0x4e
005002BA  6A 2F                     PUSH 0x2f
005002BC  6A 01                     PUSH 0x1
005002BE  6A 00                     PUSH 0x0
005002C0  52                        PUSH EDX
005002C1  6A 2F                     PUSH 0x2f
005002C3  6A 01                     PUSH 0x1
005002C5  6A 00                     PUSH 0x0
005002C7  50                        PUSH EAX
005002C8  E8 23 53 1B 00            CALL 0x006b55f0
005002CD  6A 00                     PUSH 0x0
005002CF  8B CB                     MOV ECX,EBX
005002D1  E8 BE 23 F0 FF            CALL 0x00402694
005002D6  8B 83 64 01 00 00         MOV EAX,dword ptr [EBX + 0x164]
005002DC  85 C0                     TEST EAX,EAX
005002DE  7C 19                     JL 0x005002f9
005002E0  8B 8B B0 00 00 00         MOV ECX,dword ptr [EBX + 0xb0]
005002E6  8B 53 58                  MOV EDX,dword ptr [EBX + 0x58]
005002E9  51                        PUSH ECX
005002EA  52                        PUSH EDX
005002EB  6A FF                     PUSH -0x1
005002ED  50                        PUSH EAX
005002EE  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005002F3  50                        PUSH EAX
005002F4  E8 47 33 1B 00            CALL 0x006b3640
LAB_005002f9:
005002F9  B9 05 00 00 00            MOV ECX,0x5
005002FE  8D BB 7B 0C 00 00         LEA EDI,[EBX + 0xc7b]
00500304  8D 75 EA                  LEA ESI,[EBP + -0x16]
00500307  33 D2                     XOR EDX,EDX
00500309  F3 A6                     CMPSB.REPE ES:EDI,ESI
0050030B  75 0D                     JNZ 0x0050031a
0050030D  8A 45 C2                  MOV AL,byte ptr [EBP + -0x3e]
00500310  8A 8B 53 0C 00 00         MOV CL,byte ptr [EBX + 0xc53]
00500316  3A C1                     CMP AL,CL
00500318  74 4C                     JZ 0x00500366
LAB_0050031a:
0050031A  6A 00                     PUSH 0x0
0050031C  8B CB                     MOV ECX,EBX
0050031E  E8 54 36 F0 FF            CALL 0x00403977
00500323  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
0050032A  0F 95 C0                  SETNZ AL
0050032D  83 C0 05                  ADD EAX,0x5
00500330  3C 0B                     CMP AL,0xb
00500332  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00500335  73 2F                     JNC 0x00500366
00500337  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0050033A  25 FF 00 00 00            AND EAX,0xff
0050033F  8B 8C 83 48 01 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x148]
00500346  85 C9                     TEST ECX,ECX
00500348  7C 1C                     JL 0x00500366
0050034A  8B 94 83 94 00 00 00      MOV EDX,dword ptr [EBX + EAX*0x4 + 0x94]
00500351  8B 44 83 3C               MOV EAX,dword ptr [EBX + EAX*0x4 + 0x3c]
00500355  52                        PUSH EDX
00500356  50                        PUSH EAX
00500357  6A FF                     PUSH -0x1
00500359  51                        PUSH ECX
0050035A  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00500360  51                        PUSH ECX
00500361  E8 DA 32 1B 00            CALL 0x006b3640
LAB_00500366:
00500366  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
0050036C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00500372  5F                        POP EDI
00500373  5E                        POP ESI
00500374  5B                        POP EBX
00500375  8B E5                     MOV ESP,EBP
00500377  5D                        POP EBP
00500378  C3                        RET
LAB_00500379:
00500379  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0050037F  68 B8 24 7C 00            PUSH 0x7c24b8
00500384  68 CC 4C 7A 00            PUSH 0x7a4ccc
00500389  56                        PUSH ESI
0050038A  6A 00                     PUSH 0x0
0050038C  68 C2 01 00 00            PUSH 0x1c2
00500391  68 CC 23 7C 00            PUSH 0x7c23cc
00500396  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050039B  E8 30 D1 1A 00            CALL 0x006ad4d0
005003A0  83 C4 18                  ADD ESP,0x18
005003A3  85 C0                     TEST EAX,EAX
005003A5  74 01                     JZ 0x005003a8
005003A7  CC                        INT3
LAB_005003a8:
005003A8  68 C2 01 00 00            PUSH 0x1c2
005003AD  68 CC 23 7C 00            PUSH 0x7c23cc
005003B2  6A 00                     PUSH 0x0
005003B4  56                        PUSH ESI
005003B5  E8 86 5A 1A 00            CALL 0x006a5e40
005003BA  5F                        POP EDI
005003BB  5E                        POP ESI
005003BC  5B                        POP EBX
005003BD  8B E5                     MOV ESP,EBP
005003BF  5D                        POP EBP
005003C0  C3                        RET
