STAllPlayersC::GetMessage:
00430A90  55                        PUSH EBP
00430A91  8B EC                     MOV EBP,ESP
00430A93  83 EC 68                  SUB ESP,0x68
00430A96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00430A9B  53                        PUSH EBX
00430A9C  56                        PUSH ESI
00430A9D  57                        PUSH EDI
00430A9E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00430AA1  33 FF                     XOR EDI,EDI
00430AA3  8D 55 9C                  LEA EDX,[EBP + -0x64]
00430AA6  8D 4D 98                  LEA ECX,[EBP + -0x68]
00430AA9  57                        PUSH EDI
00430AAA  52                        PUSH EDX
00430AAB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00430AAE  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00430AB1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00430AB7  E8 34 CD 2F 00            CALL 0x0072d7f0
00430ABC  8B F0                     MOV ESI,EAX
00430ABE  83 C4 08                  ADD ESP,0x8
00430AC1  3B F7                     CMP ESI,EDI
00430AC3  0F 85 BA 07 00 00         JNZ 0x00431283
00430AC9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00430ACC  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00430ACF  56                        PUSH ESI
00430AD0  8B CB                     MOV ECX,EBX
00430AD2  E8 F9 54 2B 00            CALL 0x006e5fd0
00430AD7  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00430ADA  83 F8 03                  CMP EAX,0x3
00430ADD  0F 87 C2 06 00 00         JA 0x004311a5
00430AE3  0F 84 06 03 00 00         JZ 0x00430def
00430AE9  2B C7                     SUB EAX,EDI
00430AEB  0F 84 62 02 00 00         JZ 0x00430d53
00430AF1  83 E8 02                  SUB EAX,0x2
00430AF4  0F 85 75 07 00 00         JNZ 0x0043126f
00430AFA  B9 20 4E 7F 00            MOV ECX,0x7f4e20
00430AFF  B8 E8 87 80 00            MOV EAX,0x8087e8
LAB_00430b04:
00430B04  8A 10                     MOV DL,byte ptr [EAX]
00430B06  83 C0 51                  ADD EAX,0x51
00430B09  88 11                     MOV byte ptr [ECX],DL
00430B0B  81 C1 62 0A 00 00         ADD ECX,0xa62
00430B11  3D 70 8A 80 00            CMP EAX,0x808a70
00430B16  7C EC                     JL 0x00430b04
00430B18  68 7B 30 40 00            PUSH 0x40307b
00430B1D  6A 01                     PUSH 0x1
00430B1F  6A 04                     PUSH 0x4
00430B21  6A 00                     PUSH 0x0
00430B23  6A 00                     PUSH 0x0
00430B25  E8 E6 D7 27 00            CALL 0x006ae310
00430B2A  68 7B 30 40 00            PUSH 0x40307b
00430B2F  6A 01                     PUSH 0x1
00430B31  6A 04                     PUSH 0x4
00430B33  6A 00                     PUSH 0x0
00430B35  6A 00                     PUSH 0x0
00430B37  A3 54 A1 7F 00            MOV [0x007fa154],EAX
00430B3C  E8 CF D7 27 00            CALL 0x006ae310
00430B41  68 7B 30 40 00            PUSH 0x40307b
00430B46  6A 01                     PUSH 0x1
00430B48  6A 04                     PUSH 0x4
00430B4A  6A 00                     PUSH 0x0
00430B4C  6A 00                     PUSH 0x0
00430B4E  A3 58 A1 7F 00            MOV [0x007fa158],EAX
00430B53  E8 B8 D7 27 00            CALL 0x006ae310
00430B58  68 7B 30 40 00            PUSH 0x40307b
00430B5D  6A 01                     PUSH 0x1
00430B5F  6A 04                     PUSH 0x4
00430B61  6A 00                     PUSH 0x0
00430B63  6A 00                     PUSH 0x0
00430B65  A3 5C A1 7F 00            MOV [0x007fa15c],EAX
00430B6A  E8 A1 D7 27 00            CALL 0x006ae310
00430B6F  68 7B 30 40 00            PUSH 0x40307b
00430B74  6A 01                     PUSH 0x1
00430B76  6A 04                     PUSH 0x4
00430B78  6A 00                     PUSH 0x0
00430B7A  6A 00                     PUSH 0x0
00430B7C  A3 60 A1 7F 00            MOV [0x007fa160],EAX
00430B81  E8 8A D7 27 00            CALL 0x006ae310
00430B86  68 7B 30 40 00            PUSH 0x40307b
00430B8B  6A 01                     PUSH 0x1
00430B8D  6A 04                     PUSH 0x4
00430B8F  6A 00                     PUSH 0x0
00430B91  6A 00                     PUSH 0x0
00430B93  A3 64 A1 7F 00            MOV [0x007fa164],EAX
00430B98  E8 73 D7 27 00            CALL 0x006ae310
00430B9D  A3 30 A1 7F 00            MOV [0x007fa130],EAX
00430BA2  A1 54 67 80 00            MOV EAX,[0x00806754]
00430BA7  85 C0                     TEST EAX,EAX
00430BA9  C7 05 34 A1 7F 00 00 00 00 00  MOV dword ptr [0x007fa134],0x0
00430BB3  74 15                     JZ 0x00430bca
00430BB5  6A 00                     PUSH 0x0
00430BB7  6A 00                     PUSH 0x0
00430BB9  68 D8 67 7A 00            PUSH 0x7a67d8
00430BBE  50                        PUSH EAX
00430BBF  E8 CC 21 2C 00            CALL 0x006f2d90
00430BC4  83 C4 10                  ADD ESP,0x10
00430BC7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00430bca:
00430BCA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00430BCD  85 C0                     TEST EAX,EAX
00430BCF  74 75                     JZ 0x00430c46
00430BD1  33 FF                     XOR EDI,EDI
00430BD3  BE 25 4E 7F 00            MOV ESI,0x7f4e25
LAB_00430bd8:
00430BD8  68 7B 30 40 00            PUSH 0x40307b
00430BDD  6A 05                     PUSH 0x5
00430BDF  6A 04                     PUSH 0x4
00430BE1  6A 0F                     PUSH 0xf
00430BE3  6A 00                     PUSH 0x0
00430BE5  E8 26 D7 27 00            CALL 0x006ae310
00430BEA  68 7B 30 40 00            PUSH 0x40307b
00430BEF  6A 05                     PUSH 0x5
00430BF1  6A 04                     PUSH 0x4
00430BF3  6A 0F                     PUSH 0xf
00430BF5  6A 00                     PUSH 0x0
00430BF7  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
00430BFA  E8 11 D7 27 00            CALL 0x006ae310
00430BFF  57                        PUSH EDI
00430C00  8B CB                     MOV ECX,EBX
00430C02  89 06                     MOV dword ptr [ESI],EAX
00430C04  E8 87 32 FD FF            CALL 0x00403e90
00430C09  81 C6 62 0A 00 00         ADD ESI,0xa62
00430C0F  47                        INC EDI
00430C10  81 FE 35 A1 7F 00         CMP ESI,0x7fa135
00430C16  7C C0                     JL 0x00430bd8
00430C18  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00430C1B  8B CB                     MOV ECX,EBX
00430C1D  50                        PUSH EAX
00430C1E  E8 6F 4E FD FF            CALL 0x00405a92
00430C23  8D 4D F8                  LEA ECX,[EBP + -0x8]
00430C26  51                        PUSH ECX
00430C27  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
00430C2D  E8 AE 14 2C 00            CALL 0x006f20e0
00430C32  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00430C35  33 C0                     XOR EAX,EAX
00430C37  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00430C3D  5F                        POP EDI
00430C3E  5E                        POP ESI
00430C3F  5B                        POP EBX
00430C40  8B E5                     MOV ESP,EBP
00430C42  5D                        POP EBP
00430C43  C2 04 00                  RET 0x4
LAB_00430c46:
00430C46  33 FF                     XOR EDI,EDI
00430C48  BB E9 87 80 00            MOV EBX,0x8087e9
00430C4D  BE 25 4E 7F 00            MOV ESI,0x7f4e25
LAB_00430c52:
00430C52  68 7B 30 40 00            PUSH 0x40307b
00430C57  6A 05                     PUSH 0x5
00430C59  6A 04                     PUSH 0x4
00430C5B  6A 0F                     PUSH 0xf
00430C5D  6A 00                     PUSH 0x0
00430C5F  E8 AC D6 27 00            CALL 0x006ae310
00430C64  68 7B 30 40 00            PUSH 0x40307b
00430C69  6A 05                     PUSH 0x5
00430C6B  6A 04                     PUSH 0x4
00430C6D  6A 0F                     PUSH 0xf
00430C6F  6A 00                     PUSH 0x0
00430C71  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
00430C74  E8 97 D6 27 00            CALL 0x006ae310
00430C79  89 06                     MOV dword ptr [ESI],EAX
00430C7B  8A 03                     MOV AL,byte ptr [EBX]
00430C7D  3C FF                     CMP AL,0xff
00430C7F  74 59                     JZ 0x00430cda
00430C81  57                        PUSH EDI
00430C82  E8 39 39 FD FF            CALL 0x004045c0
00430C87  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00430C8A  83 C4 04                  ADD ESP,0x4
00430C8D  57                        PUSH EDI
00430C8E  E8 35 13 FD FF            CALL 0x00401fc8
00430C93  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00430C96  57                        PUSH EDI
00430C97  E8 E1 44 FD FF            CALL 0x0040517d
00430C9C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00430C9F  57                        PUSH EDI
00430CA0  E8 EB 31 FD FF            CALL 0x00403e90
00430CA5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00430CA8  33 D2                     XOR EDX,EDX
00430CAA  8A 15 93 8A 80 00         MOV DL,byte ptr [0x00808a93]
00430CB0  33 C0                     XOR EAX,EAX
00430CB2  A0 92 8A 80 00            MOV AL,[0x00808a92]
00430CB7  52                        PUSH EDX
00430CB8  50                        PUSH EAX
00430CB9  57                        PUSH EDI
00430CBA  E8 2F 29 FD FF            CALL 0x004035ee
00430CBF  33 C9                     XOR ECX,ECX
00430CC1  8A 0D 91 8A 80 00         MOV CL,byte ptr [0x00808a91]
00430CC7  51                        PUSH ECX
00430CC8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00430CCB  57                        PUSH EDI
00430CCC  E8 1D 24 FD FF            CALL 0x004030ee
00430CD1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00430CD4  57                        PUSH EDI
00430CD5  E8 1C 1C FD FF            CALL 0x004028f6
LAB_00430cda:
00430CDA  81 C6 62 0A 00 00         ADD ESI,0xa62
00430CE0  47                        INC EDI
00430CE1  83 C3 51                  ADD EBX,0x51
00430CE4  81 FE 35 A1 7F 00         CMP ESI,0x7fa135
00430CEA  0F 8C 62 FF FF FF         JL 0x00430c52
00430CF0  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00430CF3  6A 00                     PUSH 0x0
00430CF5  8B CE                     MOV ECX,ESI
00430CF7  E8 68 26 FD FF            CALL 0x00403364
00430CFC  8B 15 90 8A 80 00         MOV EDX,dword ptr [0x00808a90]
00430D02  8B CE                     MOV ECX,ESI
00430D04  81 E2 FF 00 00 00         AND EDX,0xff
00430D0A  52                        PUSH EDX
00430D0B  E8 27 12 FD FF            CALL 0x00401f37
00430D10  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
00430D17  50                        PUSH EAX
00430D18  E8 53 9F 27 00            CALL 0x006aac70
00430D1D  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00430D24  8B D1                     MOV EDX,ECX
00430D26  8B F8                     MOV EDI,EAX
00430D28  B8 50 50 50 50            MOV EAX,0x50505050
00430D2D  89 3D 68 A1 7F 00         MOV dword ptr [0x007fa168],EDI
00430D33  C1 E9 02                  SHR ECX,0x2
00430D36  F3 AB                     STOSD.REP ES:EDI
00430D38  8B CA                     MOV ECX,EDX
00430D3A  83 E1 03                  AND ECX,0x3
00430D3D  F3 AA                     STOSB.REP ES:EDI
00430D3F  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00430D42  33 C0                     XOR EAX,EAX
00430D44  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00430D4A  5F                        POP EDI
00430D4B  5E                        POP ESI
00430D4C  5B                        POP EBX
00430D4D  8B E5                     MOV ESP,EBP
00430D4F  5D                        POP EBP
00430D50  C2 04 00                  RET 0x4
LAB_00430d53:
00430D53  33 F6                     XOR ESI,ESI
00430D55  C7 45 F0 E9 87 80 00      MOV dword ptr [EBP + -0x10],0x8087e9
00430D5C  BF 2A 58 7F 00            MOV EDI,0x7f582a
LAB_00430d61:
00430D61  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00430D66  8B 17                     MOV EDX,dword ptr [EDI]
00430D68  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00430D6E  2B CA                     SUB ECX,EDX
00430D70  83 F9 19                  CMP ECX,0x19
00430D73  72 10                     JC 0x00430d85
00430D75  56                        PUSH ESI
00430D76  8B CB                     MOV ECX,EBX
00430D78  E8 80 0A FD FF            CALL 0x004017fd
00430D7D  56                        PUSH ESI
00430D7E  8B CB                     MOV ECX,EBX
00430D80  E8 85 02 FD FF            CALL 0x0040100a
LAB_00430d85:
00430D85  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00430D88  80 3A FF                  CMP byte ptr [EDX],0xff
00430D8B  74 28                     JZ 0x00430db5
00430D8D  56                        PUSH ESI
00430D8E  8B CB                     MOV ECX,EBX
00430D90  E8 30 4C FD FF            CALL 0x004059c5
00430D95  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00430D9A  33 D2                     XOR EDX,EDX
00430D9C  B9 0A 00 00 00            MOV ECX,0xa
00430DA1  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00430DA7  F7 F1                     DIV ECX
00430DA9  85 D2                     TEST EDX,EDX
00430DAB  75 08                     JNZ 0x00430db5
00430DAD  56                        PUSH ESI
00430DAE  8B CB                     MOV ECX,EBX
00430DB0  E8 41 1B FD FF            CALL 0x004028f6
LAB_00430db5:
00430DB5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00430DB8  81 C7 62 0A 00 00         ADD EDI,0xa62
00430DBE  46                        INC ESI
00430DBF  83 C1 51                  ADD ECX,0x51
00430DC2  81 FF 3A AB 7F 00         CMP EDI,0x7fab3a
00430DC8  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00430DCB  7C 94                     JL 0x00430d61
00430DCD  8B CB                     MOV ECX,EBX
00430DCF  E8 13 43 FD FF            CALL 0x004050e7
00430DD4  8B CB                     MOV ECX,EBX
00430DD6  E8 F0 27 FD FF            CALL 0x004035cb
00430DDB  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00430DDE  33 C0                     XOR EAX,EAX
00430DE0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00430DE6  5F                        POP EDI
00430DE7  5E                        POP ESI
00430DE8  5B                        POP EBX
00430DE9  8B E5                     MOV ESP,EBP
00430DEB  5D                        POP EBP
00430DEC  C2 04 00                  RET 0x4
LAB_00430def:
00430DEF  8B CB                     MOV ECX,EBX
00430DF1  E8 84 41 FD FF            CALL 0x00404f7a
00430DF6  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00430DF9  C7 45 F0 29 4E 7F 00      MOV dword ptr [EBP + -0x10],0x7f4e29
LAB_00430e00:
00430E00  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00430E03  33 F6                     XOR ESI,ESI
00430E05  8B 78 FC                  MOV EDI,dword ptr [EAX + -0x4]
00430E08  8B 18                     MOV EBX,dword ptr [EAX]
00430E0A  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
00430E0D  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00430E10  85 C0                     TEST EAX,EAX
00430E12  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00430E15  7E 3D                     JLE 0x00430e54
LAB_00430e17:
00430E17  8D 55 EC                  LEA EDX,[EBP + -0x14]
00430E1A  8B CF                     MOV ECX,EDI
00430E1C  52                        PUSH EDX
00430E1D  8B D6                     MOV EDX,ESI
00430E1F  E8 4C BE 27 00            CALL 0x006acc70
00430E24  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00430E27  85 C0                     TEST EAX,EAX
00430E29  74 21                     JZ 0x00430e4c
00430E2B  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
00430E2E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00430E34  50                        PUSH EAX
00430E35  E8 F2 34 FD FF            CALL 0x0040432c
00430E3A  8D 4D EC                  LEA ECX,[EBP + -0x14]
00430E3D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00430E44  51                        PUSH ECX
00430E45  56                        PUSH ESI
00430E46  57                        PUSH EDI
00430E47  E8 F4 D2 27 00            CALL 0x006ae140
LAB_00430e4c:
00430E4C  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00430E4F  46                        INC ESI
00430E50  3B F0                     CMP ESI,EAX
00430E52  7C C3                     JL 0x00430e17
LAB_00430e54:
00430E54  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
00430E57  33 F6                     XOR ESI,ESI
00430E59  85 FF                     TEST EDI,EDI
00430E5B  7E 3A                     JLE 0x00430e97
LAB_00430e5d:
00430E5D  8D 55 FC                  LEA EDX,[EBP + -0x4]
00430E60  8B CB                     MOV ECX,EBX
00430E62  52                        PUSH EDX
00430E63  8B D6                     MOV EDX,ESI
00430E65  E8 06 BE 27 00            CALL 0x006acc70
00430E6A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00430E6D  85 C0                     TEST EAX,EAX
00430E6F  74 21                     JZ 0x00430e92
00430E71  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
00430E74  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00430E7A  50                        PUSH EAX
00430E7B  E8 AC 34 FD FF            CALL 0x0040432c
00430E80  8D 4D FC                  LEA ECX,[EBP + -0x4]
00430E83  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00430E8A  51                        PUSH ECX
00430E8B  56                        PUSH ESI
00430E8C  53                        PUSH EBX
00430E8D  E8 AE D2 27 00            CALL 0x006ae140
LAB_00430e92:
00430E92  46                        INC ESI
00430E93  3B F7                     CMP ESI,EDI
00430E95  7C C6                     JL 0x00430e5d
LAB_00430e97:
00430E97  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00430E9A  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00430E9D  56                        PUSH ESI
00430E9E  8B CF                     MOV ECX,EDI
00430EA0  E8 F6 1A FD FF            CALL 0x0040299b
00430EA5  56                        PUSH ESI
00430EA6  8B CF                     MOV ECX,EDI
00430EA8  E8 C4 21 FD FF            CALL 0x00403071
00430EAD  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00430EB0  46                        INC ESI
00430EB1  05 62 0A 00 00            ADD EAX,0xa62
00430EB6  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00430EB9  3D 39 A1 7F 00            CMP EAX,0x7fa139
00430EBE  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00430EC1  0F 8C 39 FF FF FF         JL 0x00430e00
00430EC7  8B 15 54 A1 7F 00         MOV EDX,dword ptr [0x007fa154]
00430ECD  33 F6                     XOR ESI,ESI
00430ECF  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
00430ED2  85 FF                     TEST EDI,EDI
00430ED4  7E 3E                     JLE 0x00430f14
LAB_00430ed6:
00430ED6  8B 0D 54 A1 7F 00         MOV ECX,dword ptr [0x007fa154]
00430EDC  8D 45 FC                  LEA EAX,[EBP + -0x4]
00430EDF  50                        PUSH EAX
00430EE0  8B D6                     MOV EDX,ESI
00430EE2  E8 89 BD 27 00            CALL 0x006acc70
00430EE7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00430EEA  85 C0                     TEST EAX,EAX
00430EEC  74 21                     JZ 0x00430f0f
00430EEE  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00430EF1  51                        PUSH ECX
00430EF2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00430EF8  E8 2F 34 FD FF            CALL 0x0040432c
00430EFD  8D 55 FC                  LEA EDX,[EBP + -0x4]
00430F00  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00430F07  52                        PUSH EDX
00430F08  56                        PUSH ESI
00430F09  53                        PUSH EBX
00430F0A  E8 31 D2 27 00            CALL 0x006ae140
LAB_00430f0f:
00430F0F  46                        INC ESI
00430F10  3B F7                     CMP ESI,EDI
00430F12  7C C2                     JL 0x00430ed6
LAB_00430f14:
00430F14  A1 58 A1 7F 00            MOV EAX,[0x007fa158]
00430F19  33 F6                     XOR ESI,ESI
00430F1B  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00430F1E  85 FF                     TEST EDI,EDI
00430F20  7E 3E                     JLE 0x00430f60
LAB_00430f22:
00430F22  8D 4D FC                  LEA ECX,[EBP + -0x4]
00430F25  8B D6                     MOV EDX,ESI
00430F27  51                        PUSH ECX
00430F28  8B 0D 58 A1 7F 00         MOV ECX,dword ptr [0x007fa158]
00430F2E  E8 3D BD 27 00            CALL 0x006acc70
00430F33  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00430F36  85 C0                     TEST EAX,EAX
00430F38  74 21                     JZ 0x00430f5b
00430F3A  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00430F3D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00430F43  52                        PUSH EDX
00430F44  E8 E3 33 FD FF            CALL 0x0040432c
00430F49  8D 45 FC                  LEA EAX,[EBP + -0x4]
00430F4C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00430F53  50                        PUSH EAX
00430F54  56                        PUSH ESI
00430F55  53                        PUSH EBX
00430F56  E8 E5 D1 27 00            CALL 0x006ae140
LAB_00430f5b:
00430F5B  46                        INC ESI
00430F5C  3B F7                     CMP ESI,EDI
00430F5E  7C C2                     JL 0x00430f22
LAB_00430f60:
00430F60  8B 0D 5C A1 7F 00         MOV ECX,dword ptr [0x007fa15c]
00430F66  33 F6                     XOR ESI,ESI
00430F68  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
00430F6B  85 FF                     TEST EDI,EDI
00430F6D  7E 3E                     JLE 0x00430fad
LAB_00430f6f:
00430F6F  8B 0D 5C A1 7F 00         MOV ECX,dword ptr [0x007fa15c]
00430F75  8D 55 FC                  LEA EDX,[EBP + -0x4]
00430F78  52                        PUSH EDX
00430F79  8B D6                     MOV EDX,ESI
00430F7B  E8 F0 BC 27 00            CALL 0x006acc70
00430F80  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00430F83  85 C0                     TEST EAX,EAX
00430F85  74 21                     JZ 0x00430fa8
00430F87  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
00430F8A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00430F90  50                        PUSH EAX
00430F91  E8 96 33 FD FF            CALL 0x0040432c
00430F96  8D 4D FC                  LEA ECX,[EBP + -0x4]
00430F99  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00430FA0  51                        PUSH ECX
00430FA1  56                        PUSH ESI
00430FA2  53                        PUSH EBX
00430FA3  E8 98 D1 27 00            CALL 0x006ae140
LAB_00430fa8:
00430FA8  46                        INC ESI
00430FA9  3B F7                     CMP ESI,EDI
00430FAB  7C C2                     JL 0x00430f6f
LAB_00430fad:
00430FAD  8B 15 60 A1 7F 00         MOV EDX,dword ptr [0x007fa160]
00430FB3  33 F6                     XOR ESI,ESI
00430FB5  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
00430FB8  85 FF                     TEST EDI,EDI
00430FBA  7E 3E                     JLE 0x00430ffa
LAB_00430fbc:
00430FBC  8B 0D 60 A1 7F 00         MOV ECX,dword ptr [0x007fa160]
00430FC2  8D 45 FC                  LEA EAX,[EBP + -0x4]
00430FC5  50                        PUSH EAX
00430FC6  8B D6                     MOV EDX,ESI
00430FC8  E8 A3 BC 27 00            CALL 0x006acc70
00430FCD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00430FD0  85 C0                     TEST EAX,EAX
00430FD2  74 21                     JZ 0x00430ff5
00430FD4  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00430FD7  51                        PUSH ECX
00430FD8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00430FDE  E8 49 33 FD FF            CALL 0x0040432c
00430FE3  8D 55 FC                  LEA EDX,[EBP + -0x4]
00430FE6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00430FED  52                        PUSH EDX
00430FEE  56                        PUSH ESI
00430FEF  53                        PUSH EBX
00430FF0  E8 4B D1 27 00            CALL 0x006ae140
LAB_00430ff5:
00430FF5  46                        INC ESI
00430FF6  3B F7                     CMP ESI,EDI
00430FF8  7C C2                     JL 0x00430fbc
LAB_00430ffa:
00430FFA  A1 64 A1 7F 00            MOV EAX,[0x007fa164]
00430FFF  33 F6                     XOR ESI,ESI
00431001  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00431004  85 FF                     TEST EDI,EDI
00431006  7E 3E                     JLE 0x00431046
LAB_00431008:
00431008  8D 4D FC                  LEA ECX,[EBP + -0x4]
0043100B  8B D6                     MOV EDX,ESI
0043100D  51                        PUSH ECX
0043100E  8B 0D 64 A1 7F 00         MOV ECX,dword ptr [0x007fa164]
00431014  E8 57 BC 27 00            CALL 0x006acc70
00431019  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043101C  85 C0                     TEST EAX,EAX
0043101E  74 21                     JZ 0x00431041
00431020  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00431023  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00431029  52                        PUSH EDX
0043102A  E8 FD 32 FD FF            CALL 0x0040432c
0043102F  8D 45 FC                  LEA EAX,[EBP + -0x4]
00431032  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00431039  50                        PUSH EAX
0043103A  56                        PUSH ESI
0043103B  53                        PUSH EBX
0043103C  E8 FF D0 27 00            CALL 0x006ae140
LAB_00431041:
00431041  46                        INC ESI
00431042  3B F7                     CMP ESI,EDI
00431044  7C C2                     JL 0x00431008
LAB_00431046:
00431046  C7 45 F0 25 4E 7F 00      MOV dword ptr [EBP + -0x10],0x7f4e25
0043104D  33 DB                     XOR EBX,EBX
LAB_0043104f:
0043104F  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00431052  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00431055  51                        PUSH ECX
00431056  E8 B5 D0 27 00            CALL 0x006ae110
0043105B  8B 16                     MOV EDX,dword ptr [ESI]
0043105D  52                        PUSH EDX
0043105E  E8 AD D0 27 00            CALL 0x006ae110
00431063  8B 86 E2 02 00 00         MOV EAX,dword ptr [ESI + 0x2e2]
00431069  50                        PUSH EAX
0043106A  E8 A1 D0 27 00            CALL 0x006ae110
0043106F  83 C6 0A                  ADD ESI,0xa
00431072  BF 04 00 00 00            MOV EDI,0x4
LAB_00431077:
00431077  8B 0E                     MOV ECX,dword ptr [ESI]
00431079  51                        PUSH ECX
0043107A  E8 91 D0 27 00            CALL 0x006ae110
0043107F  89 1E                     MOV dword ptr [ESI],EBX
00431081  83 C6 04                  ADD ESI,0x4
00431084  4F                        DEC EDI
00431085  75 F0                     JNZ 0x00431077
00431087  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0043108A  BF 05 00 00 00            MOV EDI,0x5
0043108F  8D B2 68 01 00 00         LEA ESI,[EDX + 0x168]
LAB_00431095:
00431095  8B 06                     MOV EAX,dword ptr [ESI]
00431097  3B C3                     CMP EAX,EBX
00431099  74 0B                     JZ 0x004310a6
0043109B  50                        PUSH EAX
0043109C  E8 6F D0 27 00            CALL 0x006ae110
004310A1  89 1E                     MOV dword ptr [ESI],EBX
004310A3  89 5E F6                  MOV dword ptr [ESI + -0xa],EBX
LAB_004310a6:
004310A6  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
004310A9  3B C3                     CMP EAX,EBX
004310AB  74 0C                     JZ 0x004310b9
004310AD  50                        PUSH EAX
004310AE  E8 5D D0 27 00            CALL 0x006ae110
004310B3  89 5E 50                  MOV dword ptr [ESI + 0x50],EBX
004310B6  89 5E 46                  MOV dword ptr [ESI + 0x46],EBX
LAB_004310b9:
004310B9  83 C6 10                  ADD ESI,0x10
004310BC  4F                        DEC EDI
004310BD  75 D6                     JNZ 0x00431095
004310BF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004310C2  BF 0A 00 00 00            MOV EDI,0xa
004310C7  8D B0 0C 02 00 00         LEA ESI,[EAX + 0x20c]
LAB_004310cd:
004310CD  8B 06                     MOV EAX,dword ptr [ESI]
004310CF  3B C3                     CMP EAX,EBX
004310D1  74 0B                     JZ 0x004310de
004310D3  50                        PUSH EAX
004310D4  E8 37 D0 27 00            CALL 0x006ae110
004310D9  89 1E                     MOV dword ptr [ESI],EBX
004310DB  89 5E F6                  MOV dword ptr [ESI + -0xa],EBX
LAB_004310de:
004310DE  83 C6 10                  ADD ESI,0x10
004310E1  4F                        DEC EDI
004310E2  75 E9                     JNZ 0x004310cd
004310E4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004310E7  05 62 0A 00 00            ADD EAX,0xa62
004310EC  3D 35 A1 7F 00            CMP EAX,0x7fa135
004310F1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004310F4  0F 8C 55 FF FF FF         JL 0x0043104f
004310FA  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
00431100  51                        PUSH ECX
00431101  E8 0A D0 27 00            CALL 0x006ae110
00431106  8B 15 54 A1 7F 00         MOV EDX,dword ptr [0x007fa154]
0043110C  89 1D 30 A1 7F 00         MOV dword ptr [0x007fa130],EBX
00431112  52                        PUSH EDX
00431113  E8 F8 CF 27 00            CALL 0x006ae110
00431118  A1 58 A1 7F 00            MOV EAX,[0x007fa158]
0043111D  89 1D 54 A1 7F 00         MOV dword ptr [0x007fa154],EBX
00431123  50                        PUSH EAX
00431124  E8 E7 CF 27 00            CALL 0x006ae110
00431129  8B 0D 5C A1 7F 00         MOV ECX,dword ptr [0x007fa15c]
0043112F  89 1D 58 A1 7F 00         MOV dword ptr [0x007fa158],EBX
00431135  51                        PUSH ECX
00431136  E8 D5 CF 27 00            CALL 0x006ae110
0043113B  8B 15 60 A1 7F 00         MOV EDX,dword ptr [0x007fa160]
00431141  89 1D 5C A1 7F 00         MOV dword ptr [0x007fa15c],EBX
00431147  52                        PUSH EDX
00431148  E8 C3 CF 27 00            CALL 0x006ae110
0043114D  A1 64 A1 7F 00            MOV EAX,[0x007fa164]
00431152  89 1D 60 A1 7F 00         MOV dword ptr [0x007fa160],EBX
00431158  50                        PUSH EAX
00431159  E8 B2 CF 27 00            CALL 0x006ae110
0043115E  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
00431163  89 1D 64 A1 7F 00         MOV dword ptr [0x007fa164],EBX
00431169  3B C3                     CMP EAX,EBX
0043116B  74 0C                     JZ 0x00431179
0043116D  50                        PUSH EAX
0043116E  E8 9D CF 27 00            CALL 0x006ae110
00431173  89 1D 50 A1 7F 00         MOV dword ptr [0x007fa150],EBX
LAB_00431179:
00431179  39 1D 68 A1 7F 00         CMP dword ptr [0x007fa168],EBX
0043117F  74 0A                     JZ 0x0043118b
00431181  68 68 A1 7F 00            PUSH 0x7fa168
00431186  E8 D5 9E 27 00            CALL 0x006ab060
LAB_0043118b:
0043118B  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0043118E  89 1D 74 A1 7F 00         MOV dword ptr [0x007fa174],EBX
00431194  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043119A  33 C0                     XOR EAX,EAX
0043119C  5F                        POP EDI
0043119D  5E                        POP ESI
0043119E  5B                        POP EBX
0043119F  8B E5                     MOV ESP,EBP
004311A1  5D                        POP EBP
004311A2  C2 04 00                  RET 0x4
LAB_004311a5:
004311A5  2D 0F 01 00 00            SUB EAX,0x10f
004311AA  0F 84 91 00 00 00         JZ 0x00431241
004311B0  83 E8 02                  SUB EAX,0x2
004311B3  0F 85 B6 00 00 00         JNZ 0x0043126f
004311B9  A1 54 67 80 00            MOV EAX,[0x00806754]
004311BE  3B C7                     CMP EAX,EDI
004311C0  74 3A                     JZ 0x004311fc
004311C2  57                        PUSH EDI
004311C3  57                        PUSH EDI
004311C4  68 D8 67 7A 00            PUSH 0x7a67d8
004311C9  50                        PUSH EAX
004311CA  E8 C1 1B 2C 00            CALL 0x006f2d90
004311CF  83 C4 10                  ADD ESP,0x10
004311D2  3B C7                     CMP EAX,EDI
004311D4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004311D7  74 11                     JZ 0x004311ea
004311D9  8D 4D F8                  LEA ECX,[EBP + -0x8]
004311DC  51                        PUSH ECX
004311DD  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
004311E3  E8 F8 0E 2C 00            CALL 0x006f20e0
004311E8  EB 22                     JMP 0x0043120c
LAB_004311ea:
004311EA  33 F6                     XOR ESI,ESI
LAB_004311ec:
004311EC  56                        PUSH ESI
004311ED  8B CB                     MOV ECX,EBX
004311EF  E8 CE 4A FD FF            CALL 0x00405cc2
004311F4  46                        INC ESI
004311F5  83 FE 08                  CMP ESI,0x8
004311F8  7C F2                     JL 0x004311ec
004311FA  EB 10                     JMP 0x0043120c
LAB_004311fc:
004311FC  33 F6                     XOR ESI,ESI
LAB_004311fe:
004311FE  56                        PUSH ESI
004311FF  8B CB                     MOV ECX,EBX
00431201  E8 BC 4A FD FF            CALL 0x00405cc2
00431206  46                        INC ESI
00431207  83 FE 08                  CMP ESI,0x8
0043120A  7C F2                     JL 0x004311fe
LAB_0043120c:
0043120C  8B 53 10                  MOV EDX,dword ptr [EBX + 0x10]
0043120F  8B CB                     MOV ECX,EBX
00431211  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
00431217  50                        PUSH EAX
00431218  E8 70 39 FD FF            CALL 0x00404b8d
0043121D  33 F6                     XOR ESI,ESI
LAB_0043121f:
0043121F  56                        PUSH ESI
00431220  8B CB                     MOV ECX,EBX
00431222  E8 6C 06 FD FF            CALL 0x00401893
00431227  46                        INC ESI
00431228  83 FE 08                  CMP ESI,0x8
0043122B  7C F2                     JL 0x0043121f
0043122D  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00431230  33 C0                     XOR EAX,EAX
00431232  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00431238  5F                        POP EDI
00431239  5E                        POP ESI
0043123A  5B                        POP EBX
0043123B  8B E5                     MOV ESP,EBP
0043123D  5D                        POP EBP
0043123E  C2 04 00                  RET 0x4
LAB_00431241:
00431241  8D 4D E8                  LEA ECX,[EBP + -0x18]
00431244  51                        PUSH ECX
00431245  8B CB                     MOV ECX,EBX
00431247  E8 61 46 FD FF            CALL 0x004058ad
0043124C  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0043124F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00431255  6A 0C                     PUSH 0xc
00431257  52                        PUSH EDX
00431258  50                        PUSH EAX
00431259  68 D8 67 7A 00            PUSH 0x7a67d8
0043125E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00431261  E8 12 FE FC FF            CALL 0x00401078
00431266  8D 45 F8                  LEA EAX,[EBP + -0x8]
00431269  50                        PUSH EAX
0043126A  E8 F1 9D 27 00            CALL 0x006ab060
LAB_0043126f:
0043126F  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00431272  33 C0                     XOR EAX,EAX
00431274  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043127A  5F                        POP EDI
0043127B  5E                        POP ESI
0043127C  5B                        POP EBX
0043127D  8B E5                     MOV ESP,EBP
0043127F  5D                        POP EBP
00431280  C2 04 00                  RET 0x4
LAB_00431283:
00431283  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00431286  68 B8 67 7A 00            PUSH 0x7a67b8
0043128B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00431290  56                        PUSH ESI
00431291  57                        PUSH EDI
00431292  68 05 0A 00 00            PUSH 0xa05
00431297  68 04 60 7A 00            PUSH 0x7a6004
0043129C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004312A2  E8 29 C2 27 00            CALL 0x006ad4d0
004312A7  83 C4 18                  ADD ESP,0x18
004312AA  85 C0                     TEST EAX,EAX
004312AC  74 01                     JZ 0x004312af
004312AE  CC                        INT3
LAB_004312af:
004312AF  68 06 0A 00 00            PUSH 0xa06
004312B4  68 04 60 7A 00            PUSH 0x7a6004
004312B9  57                        PUSH EDI
004312BA  56                        PUSH ESI
004312BB  E8 80 4B 27 00            CALL 0x006a5e40
004312C0  5F                        POP EDI
004312C1  5E                        POP ESI
004312C2  B8 FF FF 00 00            MOV EAX,0xffff
004312C7  5B                        POP EBX
004312C8  8B E5                     MOV ESP,EBP
004312CA  5D                        POP EBP
004312CB  C2 04 00                  RET 0x4
