InfocPanelTy::InitInfocPanel:
0051FF50  55                        PUSH EBP
0051FF51  8B EC                     MOV EBP,ESP
0051FF53  81 EC 2C 04 00 00         SUB ESP,0x42c
0051FF59  53                        PUSH EBX
0051FF5A  56                        PUSH ESI
0051FF5B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0051FF5E  57                        PUSH EDI
0051FF5F  B9 16 00 00 00            MOV ECX,0x16
0051FF64  33 C0                     XOR EAX,EAX
0051FF66  8D 7D 98                  LEA EDI,[EBP + -0x68]
0051FF69  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
0051FF6F  F3 AB                     STOSD.REP ES:EDI
0051FF71  B9 E0 00 00 00            MOV ECX,0xe0
0051FF76  8D BD D4 FB FF FF         LEA EDI,[EBP + 0xfffffbd4]
0051FF7C  F3 AB                     STOSD.REP ES:EDI
0051FF7E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051FF83  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
0051FF89  6A 00                     PUSH 0x0
0051FF8B  52                        PUSH EDX
0051FF8C  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0051FF92  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051FF98  E8 53 D8 20 00            CALL 0x0072d7f0
0051FF9D  8B F0                     MOV ESI,EAX
0051FF9F  83 C4 08                  ADD ESP,0x8
0051FFA2  85 F6                     TEST ESI,ESI
0051FFA4  0F 85 BE 03 00 00         JNZ 0x00520368
0051FFAA  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0051FFAD  68 8B 00 00 00            PUSH 0x8b
0051FFB2  68 D8 00 00 00            PUSH 0xd8
0051FFB7  68 BF 36 00 00            PUSH 0x36bf
0051FFBC  6A 0B                     PUSH 0xb
0051FFBE  68 BF 00 00 00            PUSH 0xbf
0051FFC3  6A 03                     PUSH 0x3
0051FFC5  6A 40                     PUSH 0x40
0051FFC7  50                        PUSH EAX
0051FFC8  68 18 3F 7C 00            PUSH 0x7c3f18
0051FFCD  89 35 98 16 80 00         MOV dword ptr [0x00801698],ESI
0051FFD3  E8 A4 57 EE FF            CALL 0x0040577c
0051FFD8  83 C4 08                  ADD ESP,0x8
0051FFDB  8B CE                     MOV ECX,ESI
0051FFDD  50                        PUSH EAX
0051FFDE  E8 1D 38 EE FF            CALL 0x00403800
0051FFE3  A1 94 67 80 00            MOV EAX,[0x00806794]
0051FFE8  6A 00                     PUSH 0x0
0051FFEA  BF 01 00 00 00            MOV EDI,0x1
0051FFEF  6A 00                     PUSH 0x0
0051FFF1  57                        PUSH EDI
0051FFF2  6A 00                     PUSH 0x0
0051FFF4  6A FF                     PUSH -0x1
0051FFF6  68 08 3F 7C 00            PUSH 0x7c3f08
0051FFFB  6A 0B                     PUSH 0xb
0051FFFD  50                        PUSH EAX
0051FFFE  E8 ED 9A 1E 00            CALL 0x00709af0
00520003  6A 00                     PUSH 0x0
00520005  6A 00                     PUSH 0x0
00520007  57                        PUSH EDI
00520008  6A 00                     PUSH 0x0
0052000A  89 86 C4 03 00 00         MOV dword ptr [ESI + 0x3c4],EAX
00520010  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
00520016  6A FF                     PUSH -0x1
00520018  68 FC 3E 7C 00            PUSH 0x7c3efc
0052001D  6A 0B                     PUSH 0xb
0052001F  51                        PUSH ECX
00520020  E8 CB 9A 1E 00            CALL 0x00709af0
00520025  83 C4 40                  ADD ESP,0x40
00520028  89 86 C8 03 00 00         MOV dword ptr [ESI + 0x3c8],EAX
0052002E  6A 00                     PUSH 0x0
00520030  6A 00                     PUSH 0x0
00520032  57                        PUSH EDI
00520033  6A 00                     PUSH 0x0
00520035  6A FF                     PUSH -0x1
00520037  6A 00                     PUSH 0x0
00520039  68 78 20 7C 00            PUSH 0x7c2078
0052003E  E8 39 57 EE FF            CALL 0x0040577c
00520043  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
00520049  83 C4 08                  ADD ESP,0x8
0052004C  50                        PUSH EAX
0052004D  6A 0B                     PUSH 0xb
0052004F  52                        PUSH EDX
00520050  E8 9B 9A 1E 00            CALL 0x00709af0
00520055  89 86 CC 03 00 00         MOV dword ptr [ESI + 0x3cc],EAX
0052005B  A1 90 67 80 00            MOV EAX,[0x00806790]
00520060  6A 00                     PUSH 0x0
00520062  68 1C 21 7C 00            PUSH 0x7c211c
00520067  50                        PUSH EAX
00520068  68 9D 01 00 00            PUSH 0x19d
0052006D  E8 3E CE 1E 00            CALL 0x0070ceb0
00520072  89 86 D5 03 00 00         MOV dword ptr [ESI + 0x3d5],EAX
00520078  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
0052007B  C7 40 5C 00 00 00 00      MOV dword ptr [EAX + 0x5c],0x0
00520082  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00520085  8B 4E 5C                  MOV ECX,dword ptr [ESI + 0x5c]
00520088  83 C0 1D                  ADD EAX,0x1d
0052008B  83 C4 30                  ADD ESP,0x30
0052008E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00520091  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00520094  33 D2                     XOR EDX,EDX
00520096  8B CF                     MOV ECX,EDI
00520098  8D 85 D8 FB FF FF         LEA EAX,[EBP + 0xfffffbd8]
0052009E  C7 45 FC 07 00 00 00      MOV dword ptr [EBP + -0x4],0x7
LAB_005200a5:
005200A5  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005200A8  89 48 FC                  MOV dword ptr [EAX + -0x4],ECX
005200AB  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
005200B1  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
005200B4  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005200B7  C7 40 10 11 00 00 00      MOV dword ptr [EAX + 0x10],0x11
005200BE  85 DB                     TEST EBX,EBX
005200C0  8B 1D 34 67 80 00         MOV EBX,dword ptr [0x00806734]
005200C6  74 03                     JZ 0x005200cb
005200C8  8B 5E 44                  MOV EBX,dword ptr [ESI + 0x44]
LAB_005200cb:
005200CB  8D 5C 1A 23               LEA EBX,[EDX + EBX*0x1 + 0x23]
005200CF  41                        INC ECX
005200D0  89 58 0C                  MOV dword ptr [EAX + 0xc],EBX
005200D3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005200D6  C7 40 14 0C 00 00 00      MOV dword ptr [EAX + 0x14],0xc
005200DD  83 C2 0D                  ADD EDX,0xd
005200E0  83 C0 70                  ADD EAX,0x70
005200E3  4B                        DEC EBX
005200E4  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005200E7  75 BC                     JNZ 0x005200a5
005200E9  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005200EC  8D 95 D4 FB FF FF         LEA EDX,[EBP + 0xfffffbd4]
005200F2  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005200F5  B9 02 00 00 00            MOV ECX,0x2
005200FA  8D 55 98                  LEA EDX,[EBP + -0x68]
005200FD  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
00520100  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00520103  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00520106  6A 00                     PUSH 0x0
00520108  52                        PUSH EDX
00520109  8D 96 D0 03 00 00         LEA EDX,[ESI + 0x3d0]
0052010F  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
00520112  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00520115  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00520118  C7 45 B0 08 B2 00 00      MOV dword ptr [EBP + -0x50],0xb208
0052011F  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00520122  C7 45 D0 09 B2 00 00      MOV dword ptr [EBP + -0x30],0xb209
00520129  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0052012C  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0052012F  8B 01                     MOV EAX,dword ptr [ECX]
00520131  6A 00                     PUSH 0x0
00520133  52                        PUSH EDX
00520134  6A 05                     PUSH 0x5
00520136  FF 50 08                  CALL dword ptr [EAX + 0x8]
00520139  8D 96 D8 02 00 00         LEA EDX,[ESI + 0x2d8]
0052013F  BF 17 00 00 00            MOV EDI,0x17
00520144  C7 86 D4 02 00 00 56 00 00 00  MOV dword ptr [ESI + 0x2d4],0x56
0052014E  B9 31 00 00 00            MOV ECX,0x31
00520153  89 3A                     MOV dword ptr [EDX],EDI
00520155  B8 20 00 00 00            MOV EAX,0x20
0052015A  89 8E DC 02 00 00         MOV dword ptr [ESI + 0x2dc],ECX
00520160  89 86 E0 02 00 00         MOV dword ptr [ESI + 0x2e0],EAX
00520166  C7 86 E4 02 00 00 60 27 00 00  MOV dword ptr [ESI + 0x2e4],0x2760
00520170  C7 86 E8 02 00 00 88 00 00 00  MOV dword ptr [ESI + 0x2e8],0x88
0052017A  89 BE EC 02 00 00         MOV dword ptr [ESI + 0x2ec],EDI
00520180  89 8E F0 02 00 00         MOV dword ptr [ESI + 0x2f0],ECX
00520186  89 86 F4 02 00 00         MOV dword ptr [ESI + 0x2f4],EAX
0052018C  C7 86 F8 02 00 00 61 27 00 00  MOV dword ptr [ESI + 0x2f8],0x2761
00520196  C7 86 FC 02 00 00 BA 00 00 00  MOV dword ptr [ESI + 0x2fc],0xba
005201A0  89 BE 00 03 00 00         MOV dword ptr [ESI + 0x300],EDI
005201A6  89 8E 04 03 00 00         MOV dword ptr [ESI + 0x304],ECX
005201AC  89 86 08 03 00 00         MOV dword ptr [ESI + 0x308],EAX
005201B2  BB EE 00 00 00            MOV EBX,0xee
005201B7  C7 86 0C 03 00 00 62 27 00 00  MOV dword ptr [ESI + 0x30c],0x2762
005201C1  89 9E 10 03 00 00         MOV dword ptr [ESI + 0x310],EBX
005201C7  89 BE 14 03 00 00         MOV dword ptr [ESI + 0x314],EDI
005201CD  89 8E 18 03 00 00         MOV dword ptr [ESI + 0x318],ECX
005201D3  89 86 1C 03 00 00         MOV dword ptr [ESI + 0x31c],EAX
005201D9  C7 86 20 03 00 00 63 27 00 00  MOV dword ptr [ESI + 0x320],0x2763
005201E3  BF 3E 00 00 00            MOV EDI,0x3e
005201E8  C7 86 24 03 00 00 58 00 00 00  MOV dword ptr [ESI + 0x324],0x58
005201F2  89 BE 28 03 00 00         MOV dword ptr [ESI + 0x328],EDI
005201F8  89 8E 2C 03 00 00         MOV dword ptr [ESI + 0x32c],ECX
005201FE  89 86 30 03 00 00         MOV dword ptr [ESI + 0x330],EAX
00520204  C7 86 34 03 00 00 64 27 00 00  MOV dword ptr [ESI + 0x334],0x2764
0052020E  C7 86 38 03 00 00 88 00 00 00  MOV dword ptr [ESI + 0x338],0x88
00520218  89 BE 3C 03 00 00         MOV dword ptr [ESI + 0x33c],EDI
0052021E  89 8E 40 03 00 00         MOV dword ptr [ESI + 0x340],ECX
00520224  89 86 44 03 00 00         MOV dword ptr [ESI + 0x344],EAX
0052022A  C7 86 48 03 00 00 65 27 00 00  MOV dword ptr [ESI + 0x348],0x2765
00520234  C7 86 4C 03 00 00 BA 00 00 00  MOV dword ptr [ESI + 0x34c],0xba
0052023E  89 BE 50 03 00 00         MOV dword ptr [ESI + 0x350],EDI
00520244  89 8E 54 03 00 00         MOV dword ptr [ESI + 0x354],ECX
0052024A  89 86 58 03 00 00         MOV dword ptr [ESI + 0x358],EAX
00520250  89 BE 64 03 00 00         MOV dword ptr [ESI + 0x364],EDI
00520256  89 8E 68 03 00 00         MOV dword ptr [ESI + 0x368],ECX
0052025C  89 86 6C 03 00 00         MOV dword ptr [ESI + 0x36c],EAX
00520262  B9 65 00 00 00            MOV ECX,0x65
00520267  B8 19 00 00 00            MOV EAX,0x19
0052026C  BF 2A 00 00 00            MOV EDI,0x2a
00520271  C7 86 5C 03 00 00 66 27 00 00  MOV dword ptr [ESI + 0x35c],0x2766
0052027B  89 9E 60 03 00 00         MOV dword ptr [ESI + 0x360],EBX
00520281  C7 86 70 03 00 00 67 27 00 00  MOV dword ptr [ESI + 0x370],0x2767
0052028B  C7 86 74 03 00 00 56 00 00 00  MOV dword ptr [ESI + 0x374],0x56
00520295  89 8E 78 03 00 00         MOV dword ptr [ESI + 0x378],ECX
0052029B  C7 86 7C 03 00 00 1F 00 00 00  MOV dword ptr [ESI + 0x37c],0x1f
005202A5  89 86 80 03 00 00         MOV dword ptr [ESI + 0x380],EAX
005202AB  C7 86 84 03 00 00 1F 27 00 00  MOV dword ptr [ESI + 0x384],0x271f
005202B5  C7 86 88 03 00 00 75 00 00 00  MOV dword ptr [ESI + 0x388],0x75
005202BF  89 8E 8C 03 00 00         MOV dword ptr [ESI + 0x38c],ECX
005202C5  89 BE 90 03 00 00         MOV dword ptr [ESI + 0x390],EDI
005202CB  89 86 94 03 00 00         MOV dword ptr [ESI + 0x394],EAX
005202D1  89 86 A8 03 00 00         MOV dword ptr [ESI + 0x3a8],EAX
005202D7  89 86 BC 03 00 00         MOV dword ptr [ESI + 0x3bc],EAX
005202DD  C7 86 98 03 00 00 1D 27 00 00  MOV dword ptr [ESI + 0x398],0x271d
005202E7  C7 86 9C 03 00 00 9F 00 00 00  MOV dword ptr [ESI + 0x39c],0x9f
005202F1  89 8E A0 03 00 00         MOV dword ptr [ESI + 0x3a0],ECX
005202F7  89 BE A4 03 00 00         MOV dword ptr [ESI + 0x3a4],EDI
005202FD  C7 86 AC 03 00 00 68 27 00 00  MOV dword ptr [ESI + 0x3ac],0x2768
00520307  C7 86 B0 03 00 00 CC 00 00 00  MOV dword ptr [ESI + 0x3b0],0xcc
00520311  89 8E B4 03 00 00         MOV dword ptr [ESI + 0x3b4],ECX
00520317  C7 86 B8 03 00 00 53 00 00 00  MOV dword ptr [ESI + 0x3b8],0x53
00520321  C7 86 C0 03 00 00 69 27 00 00  MOV dword ptr [ESI + 0x3c0],0x2769
0052032B  B8 0C 00 00 00            MOV EAX,0xc
LAB_00520330:
00520330  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
00520333  8B 7A FC                  MOV EDI,dword ptr [EDX + -0x4]
00520336  03 F9                     ADD EDI,ECX
00520338  89 7A FC                  MOV dword ptr [EDX + -0x4],EDI
0052033B  8B 4E 58                  MOV ECX,dword ptr [ESI + 0x58]
0052033E  8B 5E 48                  MOV EBX,dword ptr [ESI + 0x48]
00520341  8B 7E 50                  MOV EDI,dword ptr [ESI + 0x50]
00520344  2B CB                     SUB ECX,EBX
00520346  8B 1A                     MOV EBX,dword ptr [EDX]
00520348  03 CF                     ADD ECX,EDI
0052034A  83 C2 14                  ADD EDX,0x14
0052034D  03 D9                     ADD EBX,ECX
0052034F  48                        DEC EAX
00520350  89 5A EC                  MOV dword ptr [EDX + -0x14],EBX
00520353  75 DB                     JNZ 0x00520330
00520355  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
0052035B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00520361  5F                        POP EDI
00520362  5E                        POP ESI
00520363  5B                        POP EBX
00520364  8B E5                     MOV ESP,EBP
00520366  5D                        POP EBP
00520367  C3                        RET
LAB_00520368:
00520368  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
0052036E  68 D8 3E 7C 00            PUSH 0x7c3ed8
00520373  68 CC 4C 7A 00            PUSH 0x7a4ccc
00520378  56                        PUSH ESI
00520379  BF 3E 00 00 00            MOV EDI,0x3e
0052037E  6A 00                     PUSH 0x0
00520380  57                        PUSH EDI
00520381  68 B0 3E 7C 00            PUSH 0x7c3eb0
00520386  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052038B  E8 40 D1 18 00            CALL 0x006ad4d0
00520390  83 C4 18                  ADD ESP,0x18
00520393  85 C0                     TEST EAX,EAX
00520395  74 01                     JZ 0x00520398
00520397  CC                        INT3
LAB_00520398:
00520398  57                        PUSH EDI
00520399  68 B0 3E 7C 00            PUSH 0x7c3eb0
0052039E  6A 00                     PUSH 0x0
005203A0  56                        PUSH ESI
005203A1  E8 9A 5A 18 00            CALL 0x006a5e40
005203A6  5F                        POP EDI
005203A7  5E                        POP ESI
005203A8  5B                        POP EBX
005203A9  8B E5                     MOV ESP,EBP
005203AB  5D                        POP EBP
005203AC  C3                        RET
