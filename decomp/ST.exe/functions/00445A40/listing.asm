FUN_00445a40:
00445A40  55                        PUSH EBP
00445A41  8B EC                     MOV EBP,ESP
00445A43  81 EC 84 00 00 00         SUB ESP,0x84
00445A49  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00445A4E  53                        PUSH EBX
00445A4F  56                        PUSH ESI
00445A50  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00445A53  33 DB                     XOR EBX,EBX
00445A55  57                        PUSH EDI
00445A56  8D 55 80                  LEA EDX,[EBP + -0x80]
00445A59  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
00445A5F  53                        PUSH EBX
00445A60  52                        PUSH EDX
00445A61  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00445A64  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00445A67  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
00445A6A  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
00445A6D  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00445A73  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00445A79  E8 72 7D 2E 00            CALL 0x0072d7f0
00445A7E  8B F0                     MOV ESI,EAX
00445A80  83 C4 08                  ADD ESP,0x8
00445A83  3B F3                     CMP ESI,EBX
00445A85  0F 85 25 05 00 00         JNZ 0x00445fb0
00445A8B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00445A8E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00445A91  3B F3                     CMP ESI,EBX
00445A93  74 1A                     JZ 0x00445aaf
00445A95  3B FB                     CMP EDI,EBX
00445A97  74 16                     JZ 0x00445aaf
00445A99  8B 5E 0C                  MOV EBX,dword ptr [ESI + 0xc]
00445A9C  85 DB                     TEST EBX,EBX
00445A9E  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00445AA1  74 0F                     JZ 0x00445ab2
00445AA3  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00445AA6  85 C0                     TEST EAX,EAX
00445AA8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00445AAB  75 1F                     JNZ 0x00445acc
00445AAD  EB 03                     JMP 0x00445ab2
LAB_00445aaf:
00445AAF  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_00445ab2:
00445AB2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00445AB7  68 37 28 00 00            PUSH 0x2837
00445ABC  68 04 60 7A 00            PUSH 0x7a6004
00445AC1  50                        PUSH EAX
00445AC2  68 09 00 FE AF            PUSH 0xaffe0009
00445AC7  E8 74 03 26 00            CALL 0x006a5e40
LAB_00445acc:
00445ACC  8B D6                     MOV EDX,ESI
00445ACE  8D 4D EC                  LEA ECX,[EBP + -0x14]
00445AD1  E8 6A A3 26 00            CALL 0x006afe40
00445AD6  8B D7                     MOV EDX,EDI
00445AD8  8D 4D F0                  LEA ECX,[EBP + -0x10]
00445ADB  E8 60 A3 26 00            CALL 0x006afe40
00445AE0  33 FF                     XOR EDI,EDI
00445AE2  85 DB                     TEST EBX,EBX
00445AE4  7E 4A                     JLE 0x00445b30
LAB_00445ae6:
00445AE6  8D 4D FC                  LEA ECX,[EBP + -0x4]
00445AE9  8B D7                     MOV EDX,EDI
00445AEB  51                        PUSH ECX
00445AEC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00445AEF  E8 7C 71 26 00            CALL 0x006acc70
00445AF4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00445AF7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00445AFA  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
00445AFD  6A 01                     PUSH 0x1
00445AFF  52                        PUSH EDX
00445B00  50                        PUSH EAX
00445B01  8B CE                     MOV ECX,ESI
00445B03  E8 B2 CD FB FF            CALL 0x004028ba
00445B08  85 C0                     TEST EAX,EAX
00445B0A  74 0E                     JZ 0x00445b1a
00445B0C  8B 10                     MOV EDX,dword ptr [EAX]
00445B0E  8B C8                     MOV ECX,EAX
00445B10  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00445B16  85 C0                     TEST EAX,EAX
00445B18  75 0F                     JNZ 0x00445b29
LAB_00445b1a:
00445B1A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00445B1D  57                        PUSH EDI
00445B1E  50                        PUSH EAX
00445B1F  E8 4C B1 26 00            CALL 0x006b0c70
00445B24  4B                        DEC EBX
00445B25  4F                        DEC EDI
00445B26  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_00445b29:
00445B29  47                        INC EDI
00445B2A  3B FB                     CMP EDI,EBX
00445B2C  7C B8                     JL 0x00445ae6
00445B2E  EB 03                     JMP 0x00445b33
LAB_00445b30:
00445B30  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
LAB_00445b33:
00445B33  85 DB                     TEST EBX,EBX
00445B35  75 1B                     JNZ 0x00445b52
00445B37  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00445B3D  68 42 28 00 00            PUSH 0x2842
00445B42  68 04 60 7A 00            PUSH 0x7a6004
00445B47  51                        PUSH ECX
00445B48  68 09 00 FE AF            PUSH 0xaffe0009
00445B4D  E8 EE 02 26 00            CALL 0x006a5e40
LAB_00445b52:
00445B52  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00445B55  33 DB                     XOR EBX,EBX
00445B57  85 C0                     TEST EAX,EAX
00445B59  7E 62                     JLE 0x00445bbd
LAB_00445b5b:
00445B5B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00445B5E  8D 55 FC                  LEA EDX,[EBP + -0x4]
00445B61  52                        PUSH EDX
00445B62  8B D3                     MOV EDX,EBX
00445B64  E8 07 71 26 00            CALL 0x006acc70
00445B69  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00445B6C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00445B6F  6A 01                     PUSH 0x1
00445B71  50                        PUSH EAX
00445B72  51                        PUSH ECX
00445B73  8B CE                     MOV ECX,ESI
00445B75  E8 40 CD FB FF            CALL 0x004028ba
00445B7A  8B F8                     MOV EDI,EAX
00445B7C  85 FF                     TEST EDI,EDI
00445B7E  74 21                     JZ 0x00445ba1
00445B80  8B CF                     MOV ECX,EDI
00445B82  E8 D1 F2 FB FF            CALL 0x00404e58
00445B87  85 C0                     TEST EAX,EAX
00445B89  74 16                     JZ 0x00445ba1
00445B8B  8B 17                     MOV EDX,dword ptr [EDI]
00445B8D  8B CF                     MOV ECX,EDI
00445B8F  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00445B95  85 C0                     TEST EAX,EAX
00445B97  74 08                     JZ 0x00445ba1
00445B99  66 81 7F 30 FF FF         CMP word ptr [EDI + 0x30],0xffff
00445B9F  75 12                     JNZ 0x00445bb3
LAB_00445ba1:
00445BA1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00445BA4  53                        PUSH EBX
00445BA5  50                        PUSH EAX
00445BA6  E8 C5 B0 26 00            CALL 0x006b0c70
00445BAB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00445BAE  49                        DEC ECX
00445BAF  4B                        DEC EBX
00445BB0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00445bb3:
00445BB3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00445BB6  43                        INC EBX
00445BB7  3B D8                     CMP EBX,EAX
00445BB9  7C A0                     JL 0x00445b5b
00445BBB  85 C0                     TEST EAX,EAX
LAB_00445bbd:
00445BBD  75 1B                     JNZ 0x00445bda
00445BBF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00445BC5  68 4D 28 00 00            PUSH 0x284d
00445BCA  68 04 60 7A 00            PUSH 0x7a6004
00445BCF  51                        PUSH ECX
00445BD0  68 09 00 FE AF            PUSH 0xaffe0009
00445BD5  E8 66 02 26 00            CALL 0x006a5e40
LAB_00445bda:
00445BDA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00445BDD  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
00445BE0  33 DB                     XOR EBX,EBX
00445BE2  85 C0                     TEST EAX,EAX
00445BE4  0F 8E A5 00 00 00         JLE 0x00445c8f
LAB_00445bea:
00445BEA  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00445BED  8D 55 FC                  LEA EDX,[EBP + -0x4]
00445BF0  52                        PUSH EDX
00445BF1  8B D3                     MOV EDX,EBX
00445BF3  E8 78 70 26 00            CALL 0x006acc70
00445BF8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00445BFB  33 F6                     XOR ESI,ESI
00445BFD  85 C0                     TEST EAX,EAX
00445BFF  7E 79                     JLE 0x00445c7a
LAB_00445c01:
00445C01  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00445C04  8D 45 EA                  LEA EAX,[EBP + -0x16]
00445C07  50                        PUSH EAX
00445C08  8B D6                     MOV EDX,ESI
00445C0A  E8 61 70 26 00            CALL 0x006acc70
00445C0F  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
00445C13  66 3B 4D EA               CMP CX,word ptr [EBP + -0x16]
00445C17  75 50                     JNZ 0x00445c69
00445C19  85 FF                     TEST EDI,EDI
00445C1B  75 11                     JNZ 0x00445c2e
00445C1D  6A 01                     PUSH 0x1
00445C1F  6A 02                     PUSH 0x2
00445C21  6A 01                     PUSH 0x1
00445C23  57                        PUSH EDI
00445C24  E8 67 86 26 00            CALL 0x006ae290
00445C29  8B F8                     MOV EDI,EAX
00445C2B  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
LAB_00445c2e:
00445C2E  8D 55 FC                  LEA EDX,[EBP + -0x4]
00445C31  52                        PUSH EDX
00445C32  57                        PUSH EDI
00445C33  E8 88 85 26 00            CALL 0x006ae1c0
00445C38  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00445C3B  53                        PUSH EBX
00445C3C  50                        PUSH EAX
00445C3D  E8 2E B0 26 00            CALL 0x006b0c70
00445C42  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00445C45  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00445C48  48                        DEC EAX
00445C49  56                        PUSH ESI
00445C4A  51                        PUSH ECX
00445C4B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00445C4E  4B                        DEC EBX
00445C4F  E8 1C B0 26 00            CALL 0x006b0c70
00445C54  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00445C57  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00445C5A  4A                        DEC EDX
00445C5B  4E                        DEC ESI
00445C5C  85 C0                     TEST EAX,EAX
00445C5E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00445C61  74 10                     JZ 0x00445c73
00445C63  8B C2                     MOV EAX,EDX
00445C65  85 C0                     TEST EAX,EAX
00445C67  74 0A                     JZ 0x00445c73
LAB_00445c69:
00445C69  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00445C6C  46                        INC ESI
00445C6D  3B F0                     CMP ESI,EAX
00445C6F  7C 90                     JL 0x00445c01
00445C71  EB 07                     JMP 0x00445c7a
LAB_00445c73:
00445C73  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
LAB_00445c7a:
00445C7A  83 7D CC 01               CMP dword ptr [EBP + -0x34],0x1
00445C7E  74 0C                     JZ 0x00445c8c
00445C80  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00445C83  43                        INC EBX
00445C84  3B D8                     CMP EBX,EAX
00445C86  0F 8C 5E FF FF FF         JL 0x00445bea
LAB_00445c8c:
00445C8C  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
LAB_00445c8f:
00445C8F  85 FF                     TEST EDI,EDI
00445C91  0F 84 9C 01 00 00         JZ 0x00445e33
00445C97  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00445C9A  85 C0                     TEST EAX,EAX
00445C9C  0F 85 F5 00 00 00         JNZ 0x00445d97
00445CA2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00445CA5  85 C0                     TEST EAX,EAX
00445CA7  0F 85 EA 00 00 00         JNZ 0x00445d97
00445CAD  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00445CB0  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00445CB3  85 C0                     TEST EAX,EAX
00445CB5  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00445CB8  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
00445CBF  0F 8E 8A 00 00 00         JLE 0x00445d4f
00445CC5  0F BE C3                  MOVSX EAX,BL
00445CC8  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00445CCB  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00445CCE  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00445CD1  C1 E2 04                  SHL EDX,0x4
00445CD4  03 D0                     ADD EDX,EAX
00445CD6  8D 04 55 16 58 7F 00      LEA EAX,[EDX*0x2 + 0x7f5816]
00445CDD  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_00445ce0:
00445CE0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00445CE3  8D 4D FC                  LEA ECX,[EBP + -0x4]
00445CE6  51                        PUSH ECX
00445CE7  8B CF                     MOV ECX,EDI
00445CE9  E8 82 6F 26 00            CALL 0x006acc70
00445CEE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00445CF1  6A 01                     PUSH 0x1
00445CF3  52                        PUSH EDX
00445CF4  53                        PUSH EBX
00445CF5  8B CE                     MOV ECX,ESI
00445CF7  E8 BE CB FB FF            CALL 0x004028ba
00445CFC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00445D02  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00445D08  8D 4D D8                  LEA ECX,[EBP + -0x28]
00445D0B  51                        PUSH ECX
00445D0C  6A 21                     PUSH 0x21
00445D0E  8B C8                     MOV ECX,EAX
00445D10  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00445D13  E8 0E C4 FB FF            CALL 0x00402126
00445D18  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00445D1B  83 3A 00                  CMP dword ptr [EDX],0x0
00445D1E  74 21                     JZ 0x00445d41
00445D20  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00445D23  6A 01                     PUSH 0x1
00445D25  50                        PUSH EAX
00445D26  53                        PUSH EBX
00445D27  8B CE                     MOV ECX,ESI
00445D29  E8 97 CA FB FF            CALL 0x004027c5
00445D2E  83 F8 FF                  CMP EAX,-0x1
00445D31  75 0E                     JNZ 0x00445d41
00445D33  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00445D36  6A 00                     PUSH 0x0
00445D38  51                        PUSH ECX
00445D39  53                        PUSH EBX
00445D3A  8B CE                     MOV ECX,ESI
00445D3C  E8 84 CA FB FF            CALL 0x004027c5
LAB_00445d41:
00445D41  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00445D44  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00445D47  40                        INC EAX
00445D48  3B C1                     CMP EAX,ECX
00445D4A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00445D4D  7C 91                     JL 0x00445ce0
LAB_00445d4f:
00445D4F  0F BE C3                  MOVSX EAX,BL
00445D52  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00445D55  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00445D58  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00445D5B  C1 E2 04                  SHL EDX,0x4
00445D5E  03 D0                     ADD EDX,EAX
00445D60  8B 04 55 16 58 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f5816]
00445D67  85 C0                     TEST EAX,EAX
00445D69  74 10                     JZ 0x00445d7b
00445D6B  53                        PUSH EBX
00445D6C  8B CE                     MOV ECX,ESI
00445D6E  E8 8A BA FB FF            CALL 0x004017fd
00445D73  53                        PUSH EBX
00445D74  8B CE                     MOV ECX,ESI
00445D76  E8 8F B2 FB FF            CALL 0x0040100a
LAB_00445d7b:
00445D7B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00445D80  68 72 28 00 00            PUSH 0x2872
00445D85  68 04 60 7A 00            PUSH 0x7a6004
00445D8A  50                        PUSH EAX
00445D8B  68 09 00 FE AF            PUSH 0xaffe0009
00445D90  E8 AB 00 26 00            CALL 0x006a5e40
00445D95  EB 03                     JMP 0x00445d9a
LAB_00445d97:
00445D97  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_00445d9a:
00445D9A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00445D9D  85 C0                     TEST EAX,EAX
00445D9F  75 11                     JNZ 0x00445db2
00445DA1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00445DA4  85 C0                     TEST EAX,EAX
00445DA6  76 0F                     JBE 0x00445db7
00445DA8  8B D7                     MOV EDX,EDI
00445DAA  8D 4D EC                  LEA ECX,[EBP + -0x14]
00445DAD  E8 8E A0 26 00            CALL 0x006afe40
LAB_00445db2:
00445DB2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00445DB5  85 C0                     TEST EAX,EAX
LAB_00445db7:
00445DB7  75 11                     JNZ 0x00445dca
00445DB9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00445DBC  85 C0                     TEST EAX,EAX
00445DBE  76 52                     JBE 0x00445e12
00445DC0  8B D7                     MOV EDX,EDI
00445DC2  8D 4D F0                  LEA ECX,[EBP + -0x10]
00445DC5  E8 76 A0 26 00            CALL 0x006afe40
LAB_00445dca:
00445DCA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00445DCD  85 C0                     TEST EAX,EAX
00445DCF  76 41                     JBE 0x00445e12
00445DD1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00445DD4  85 C0                     TEST EAX,EAX
00445DD6  76 3A                     JBE 0x00445e12
00445DD8  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00445DDB  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
00445DE2  85 C0                     TEST EAX,EAX
00445DE4  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00445DE7  7E 29                     JLE 0x00445e12
LAB_00445de9:
00445DE9  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00445DEC  8D 4D FC                  LEA ECX,[EBP + -0x4]
00445DEF  51                        PUSH ECX
00445DF0  8B CF                     MOV ECX,EDI
00445DF2  E8 79 6E 26 00            CALL 0x006acc70
00445DF7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00445DFA  8D 55 FC                  LEA EDX,[EBP + -0x4]
00445DFD  52                        PUSH EDX
00445DFE  50                        PUSH EAX
00445DFF  E8 BC 83 26 00            CALL 0x006ae1c0
00445E04  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00445E07  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00445E0A  40                        INC EAX
00445E0B  3B C1                     CMP EAX,ECX
00445E0D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00445E10  7C D7                     JL 0x00445de9
LAB_00445e12:
00445E12  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00445E15  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00445E18  57                        PUSH EDI
00445E19  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00445E1C  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00445E1F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00445E22  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00445E25  E8 E6 82 26 00            CALL 0x006ae110
00445E2A  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
00445E31  EB 03                     JMP 0x00445e36
LAB_00445e33:
00445E33  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_00445e36:
00445E36  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00445E39  33 FF                     XOR EDI,EDI
00445E3B  85 C0                     TEST EAX,EAX
00445E3D  7E 5A                     JLE 0x00445e99
00445E3F  0F BE C3                  MOVSX EAX,BL
00445E42  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00445E45  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00445E48  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00445E4B  C1 E2 04                  SHL EDX,0x4
00445E4E  03 D0                     ADD EDX,EAX
00445E50  8D 04 55 16 58 7F 00      LEA EAX,[EDX*0x2 + 0x7f5816]
00445E57  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_00445e5a:
00445E5A  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00445E5D  83 39 00                  CMP dword ptr [ECX],0x0
00445E60  74 37                     JZ 0x00445e99
00445E62  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00445E65  8D 55 FC                  LEA EDX,[EBP + -0x4]
00445E68  52                        PUSH EDX
00445E69  8B D7                     MOV EDX,EDI
00445E6B  E8 00 6E 26 00            CALL 0x006acc70
00445E70  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00445E73  6A 01                     PUSH 0x1
00445E75  50                        PUSH EAX
00445E76  53                        PUSH EBX
00445E77  8B CE                     MOV ECX,ESI
00445E79  E8 47 C9 FB FF            CALL 0x004027c5
00445E7E  83 F8 FF                  CMP EAX,-0x1
00445E81  75 0E                     JNZ 0x00445e91
00445E83  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00445E86  6A 00                     PUSH 0x0
00445E88  51                        PUSH ECX
00445E89  53                        PUSH EBX
00445E8A  8B CE                     MOV ECX,ESI
00445E8C  E8 34 C9 FB FF            CALL 0x004027c5
LAB_00445e91:
00445E91  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00445E94  47                        INC EDI
00445E95  3B F8                     CMP EDI,EAX
00445E97  7C C1                     JL 0x00445e5a
LAB_00445e99:
00445E99  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00445E9C  33 FF                     XOR EDI,EDI
00445E9E  85 C0                     TEST EAX,EAX
00445EA0  7E 47                     JLE 0x00445ee9
00445EA2  0F BE C3                  MOVSX EAX,BL
00445EA5  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00445EA8  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
00445EAB  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00445EAE  C1 E2 04                  SHL EDX,0x4
00445EB1  03 D0                     ADD EDX,EAX
00445EB3  8D 04 55 16 58 7F 00      LEA EAX,[EDX*0x2 + 0x7f5816]
00445EBA  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_00445ebd:
00445EBD  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00445EC0  83 39 00                  CMP dword ptr [ECX],0x0
00445EC3  74 24                     JZ 0x00445ee9
00445EC5  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00445EC8  8D 55 FC                  LEA EDX,[EBP + -0x4]
00445ECB  52                        PUSH EDX
00445ECC  8B D7                     MOV EDX,EDI
00445ECE  E8 9D 6D 26 00            CALL 0x006acc70
00445ED3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00445ED6  6A 01                     PUSH 0x1
00445ED8  50                        PUSH EAX
00445ED9  53                        PUSH EBX
00445EDA  8B CE                     MOV ECX,ESI
00445EDC  E8 E4 C8 FB FF            CALL 0x004027c5
00445EE1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00445EE4  47                        INC EDI
00445EE5  3B F8                     CMP EDI,EAX
00445EE7  7C D4                     JL 0x00445ebd
LAB_00445ee9:
00445EE9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00445EEC  6A 01                     PUSH 0x1
00445EEE  6A 02                     PUSH 0x2
00445EF0  51                        PUSH ECX
00445EF1  6A 00                     PUSH 0x0
00445EF3  E8 98 83 26 00            CALL 0x006ae290
00445EF8  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00445EFB  8D 4D C0                  LEA ECX,[EBP + -0x40]
00445EFE  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00445F01  E8 3A 9F 26 00            CALL 0x006afe40
00445F06  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00445F09  6A 01                     PUSH 0x1
00445F0B  6A 02                     PUSH 0x2
00445F0D  52                        PUSH EDX
00445F0E  6A 00                     PUSH 0x0
00445F10  E8 7B 83 26 00            CALL 0x006ae290
00445F15  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00445F18  8D 4D C4                  LEA ECX,[EBP + -0x3c]
00445F1B  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00445F1E  E8 1D 9F 26 00            CALL 0x006afe40
00445F23  6A 01                     PUSH 0x1
00445F25  6A 04                     PUSH 0x4
00445F27  6A 01                     PUSH 0x1
00445F29  6A 00                     PUSH 0x0
00445F2B  E8 60 83 26 00            CALL 0x006ae290
00445F30  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00445F33  0F BE C3                  MOVSX EAX,BL
00445F36  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00445F39  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00445F3C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00445F3F  C1 E1 04                  SHL ECX,0x4
00445F42  03 C8                     ADD ECX,EAX
00445F44  8B 04 4D 16 58 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f5816]
00445F4B  85 C0                     TEST EAX,EAX
00445F4D  8D 3C 4D 16 58 7F 00      LEA EDI,[ECX*0x2 + 0x7f5816]
00445F54  75 0F                     JNZ 0x00445f65
00445F56  6A 01                     PUSH 0x1
00445F58  6A 0C                     PUSH 0xc
00445F5A  6A 01                     PUSH 0x1
00445F5C  6A 00                     PUSH 0x0
00445F5E  E8 2D 83 26 00            CALL 0x006ae290
00445F63  89 07                     MOV dword ptr [EDI],EAX
LAB_00445f65:
00445F65  8B 07                     MOV EAX,dword ptr [EDI]
00445F67  8D 55 C0                  LEA EDX,[EBP + -0x40]
00445F6A  52                        PUSH EDX
00445F6B  50                        PUSH EAX
00445F6C  E8 4F 82 26 00            CALL 0x006ae1c0
00445F71  53                        PUSH EBX
00445F72  8B CE                     MOV ECX,ESI
00445F74  E8 84 B8 FB FF            CALL 0x004017fd
00445F79  53                        PUSH EBX
00445F7A  8B CE                     MOV ECX,ESI
00445F7C  E8 89 B0 FB FF            CALL 0x0040100a
00445F81  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00445F84  85 C0                     TEST EAX,EAX
00445F86  74 06                     JZ 0x00445f8e
00445F88  50                        PUSH EAX
00445F89  E8 82 81 26 00            CALL 0x006ae110
LAB_00445f8e:
00445F8E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00445F91  85 C0                     TEST EAX,EAX
00445F93  74 06                     JZ 0x00445f9b
00445F95  50                        PUSH EAX
00445F96  E8 75 81 26 00            CALL 0x006ae110
LAB_00445f9b:
00445F9B  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
00445FA1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00445FA7  5F                        POP EDI
00445FA8  5E                        POP ESI
00445FA9  5B                        POP EBX
00445FAA  8B E5                     MOV ESP,EBP
00445FAC  5D                        POP EBP
00445FAD  C2 0C 00                  RET 0xc
LAB_00445fb0:
00445FB0  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00445FB3  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
00445FB9  3B C3                     CMP EAX,EBX
00445FBB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00445FC1  74 06                     JZ 0x00445fc9
00445FC3  50                        PUSH EAX
00445FC4  E8 47 81 26 00            CALL 0x006ae110
LAB_00445fc9:
00445FC9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00445FCC  3B C3                     CMP EAX,EBX
00445FCE  74 06                     JZ 0x00445fd6
00445FD0  50                        PUSH EAX
00445FD1  E8 3A 81 26 00            CALL 0x006ae110
LAB_00445fd6:
00445FD6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00445FD9  3B C3                     CMP EAX,EBX
00445FDB  74 06                     JZ 0x00445fe3
00445FDD  50                        PUSH EAX
00445FDE  E8 2D 81 26 00            CALL 0x006ae110
LAB_00445fe3:
00445FE3  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
00445FE9  74 34                     JZ 0x0044601f
00445FEB  68 6C 83 7A 00            PUSH 0x7a836c
00445FF0  68 CC 4C 7A 00            PUSH 0x7a4ccc
00445FF5  53                        PUSH EBX
00445FF6  53                        PUSH EBX
00445FF7  68 A2 28 00 00            PUSH 0x28a2
00445FFC  68 04 60 7A 00            PUSH 0x7a6004
00446001  E8 CA 74 26 00            CALL 0x006ad4d0
00446006  83 C4 18                  ADD ESP,0x18
00446009  85 C0                     TEST EAX,EAX
0044600B  74 01                     JZ 0x0044600e
0044600D  CC                        INT3
LAB_0044600e:
0044600E  68 A3 28 00 00            PUSH 0x28a3
00446013  68 04 60 7A 00            PUSH 0x7a6004
00446018  53                        PUSH EBX
00446019  56                        PUSH ESI
0044601A  E8 21 FE 25 00            CALL 0x006a5e40
LAB_0044601f:
0044601F  5F                        POP EDI
00446020  5E                        POP ESI
00446021  5B                        POP EBX
00446022  8B E5                     MOV ESP,EBP
00446024  5D                        POP EBP
00446025  C2 0C 00                  RET 0xc
