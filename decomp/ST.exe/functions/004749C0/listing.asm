STBoatC::WaitLoad:
004749C0  55                        PUSH EBP
004749C1  8B EC                     MOV EBP,ESP
004749C3  83 EC 48                  SUB ESP,0x48
004749C6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004749C9  53                        PUSH EBX
004749CA  33 DB                     XOR EBX,EBX
004749CC  56                        PUSH ESI
004749CD  3B C3                     CMP EAX,EBX
004749CF  57                        PUSH EDI
004749D0  8B F1                     MOV ESI,ECX
004749D2  74 05                     JZ 0x004749d9
004749D4  83 F8 01                  CMP EAX,0x1
004749D7  75 36                     JNZ 0x00474a0f
LAB_004749d9:
004749D9  B9 17 00 00 00            MOV ECX,0x17
004749DE  33 C0                     XOR EAX,EAX
004749E0  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
004749E6  8D 96 A0 05 00 00         LEA EDX,[ESI + 0x5a0]
004749EC  F3 AB                     STOSD.REP ES:EDI
004749EE  B9 0A 00 00 00            MOV ECX,0xa
004749F3  8B FA                     MOV EDI,EDX
004749F5  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
004749FB  F3 AB                     STOSD.REP ES:EDI
004749FD  66 AB                     STOSW ES:EDI
004749FF  66 8B 86 C8 03 00 00      MOV AX,word ptr [ESI + 0x3c8]
00474A06  66 89 02                  MOV word ptr [EDX],AX
00474A09  89 9E C0 05 00 00         MOV dword ptr [ESI + 0x5c0],EBX
LAB_00474a0f:
00474A0F  8B 86 C0 05 00 00         MOV EAX,dword ptr [ESI + 0x5c0]
00474A15  3B C3                     CMP EAX,EBX
00474A17  0F 84 2F 06 00 00         JZ 0x0047504c
00474A1D  83 F8 01                  CMP EAX,0x1
00474A20  0F 85 42 06 00 00         JNZ 0x00475068
00474A26  8B 86 C4 05 00 00         MOV EAX,dword ptr [ESI + 0x5c4]
00474A2C  3B C3                     CMP EAX,EBX
00474A2E  0F 85 BF 01 00 00         JNZ 0x00474bf3
00474A34  6A 02                     PUSH 0x2
00474A36  8B CE                     MOV ECX,ESI
00474A38  E8 A1 E7 F8 FF            CALL 0x004031de
00474A3D  40                        INC EAX
00474A3E  83 F8 04                  CMP EAX,0x4
00474A41  0F 87 9E 01 00 00         JA 0x00474be5
switchD_00474a47::switchD:
00474A47  FF 24 85 C0 52 47 00      JMP dword ptr [EAX*0x4 + 0x4752c0]
switchD_00474a47::caseD_ffffffff:
00474A4E  68 B0 AF 7A 00            PUSH 0x7aafb0
00474A53  68 CC 4C 7A 00            PUSH 0x7a4ccc
00474A58  53                        PUSH EBX
00474A59  53                        PUSH EBX
00474A5A  68 61 2F 00 00            PUSH 0x2f61
00474A5F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00474A64  E8 67 8A 23 00            CALL 0x006ad4d0
00474A69  83 C4 18                  ADD ESP,0x18
00474A6C  85 C0                     TEST EAX,EAX
00474A6E  0F 84 3F 08 00 00         JZ 0x004752b3
00474A74  CC                        INT3
switchD_00474a47::caseD_3:
00474A81  8B 8E A2 05 00 00         MOV ECX,dword ptr [ESI + 0x5a2]
00474A87  8D 45 08                  LEA EAX,[EBP + 0x8]
00474A8A  50                        PUSH EAX
00474A8B  89 9E C0 05 00 00         MOV dword ptr [ESI + 0x5c0],EBX
00474A91  51                        PUSH ECX
00474A92  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00474A98  E8 33 18 27 00            CALL 0x006e62d0
00474A9D  83 F8 FC                  CMP EAX,-0x4
00474AA0  75 33                     JNZ 0x00474ad5
00474AA2  68 7C AF 7A 00            PUSH 0x7aaf7c
00474AA7  68 CC 4C 7A 00            PUSH 0x7a4ccc
00474AAC  53                        PUSH EBX
00474AAD  53                        PUSH EBX
00474AAE  68 68 2F 00 00            PUSH 0x2f68
00474AB3  68 3C 9D 7A 00            PUSH 0x7a9d3c
00474AB8  E8 13 8A 23 00            CALL 0x006ad4d0
00474ABD  83 C4 18                  ADD ESP,0x18
00474AC0  85 C0                     TEST EAX,EAX
00474AC2  0F 84 EB 07 00 00         JZ 0x004752b3
00474AC8  CC                        INT3
LAB_00474ad5:
00474AD5  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00474AD8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00474ADB  52                        PUSH EDX
00474ADC  E8 02 0A F9 FF            CALL 0x004054e3
00474AE1  B8 02 00 00 00            MOV EAX,0x2
00474AE6  5F                        POP EDI
00474AE7  5E                        POP ESI
00474AE8  5B                        POP EBX
00474AE9  8B E5                     MOV ESP,EBP
00474AEB  5D                        POP EBP
00474AEC  C2 04 00                  RET 0x4
switchD_00474a47::caseD_0:
00474AEF  8B CE                     MOV ECX,ESI
00474AF1  E8 5F ED F8 FF            CALL 0x00403855
00474AF6  8B 96 BC 05 00 00         MOV EDX,dword ptr [ESI + 0x5bc]
00474AFC  42                        INC EDX
00474AFD  8B C2                     MOV EAX,EDX
00474AFF  89 96 BC 05 00 00         MOV dword ptr [ESI + 0x5bc],EDX
00474B05  66 83 BC 46 B2 05 00 00 FF  CMP word ptr [ESI + EAX*0x2 + 0x5b2],-0x1
00474B0E  74 4D                     JZ 0x00474b5d
00474B10  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
00474B14  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00474B17  50                        PUSH EAX
00474B18  51                        PUSH ECX
00474B19  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00474B1F  E8 D5 11 F9 FF            CALL 0x00405cf9
00474B24  8B 96 BC 05 00 00         MOV EDX,dword ptr [ESI + 0x5bc]
00474B2A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00474B2D  0F BF 4E 5D               MOVSX ECX,word ptr [ESI + 0x5d]
00474B31  0F BF 84 56 B2 05 00 00   MOVSX EAX,word ptr [ESI + EDX*0x2 + 0x5b2]
00474B39  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
00474B3D  50                        PUSH EAX
00474B3E  51                        PUSH ECX
00474B3F  52                        PUSH EDX
00474B40  8B CE                     MOV ECX,ESI
00474B42  E8 24 04 F9 FF            CALL 0x00404f6b
00474B47  53                        PUSH EBX
00474B48  8B CE                     MOV ECX,ESI
00474B4A  E8 8F E6 F8 FF            CALL 0x004031de
00474B4F  B8 02 00 00 00            MOV EAX,0x2
00474B54  5F                        POP EDI
00474B55  5E                        POP ESI
00474B56  5B                        POP EBX
00474B57  8B E5                     MOV ESP,EBP
00474B59  5D                        POP EBP
00474B5A  C2 04 00                  RET 0x4
LAB_00474b5d:
00474B5D  66 8B 86 AA 05 00 00      MOV AX,word ptr [ESI + 0x5aa]
00474B64  66 69 C0 C9 00            IMUL AX,AX,0xc9
00474B69  83 C0 64                  ADD EAX,0x64
00474B6C  66 39 46 41               CMP word ptr [ESI + 0x41],AX
00474B70  75 69                     JNZ 0x00474bdb
00474B72  66 8B 8E AC 05 00 00      MOV CX,word ptr [ESI + 0x5ac]
00474B79  66 69 C9 C9 00            IMUL CX,CX,0xc9
00474B7E  83 C1 64                  ADD ECX,0x64
00474B81  66 39 4E 43               CMP word ptr [ESI + 0x43],CX
00474B85  75 54                     JNZ 0x00474bdb
00474B87  66 8B 96 AE 05 00 00      MOV DX,word ptr [ESI + 0x5ae]
00474B8E  66 69 D2 C8 00            IMUL DX,DX,0xc8
00474B93  83 C2 64                  ADD EDX,0x64
00474B96  66 39 56 45               CMP word ptr [ESI + 0x45],DX
00474B9A  74 18                     JZ 0x00474bb4
00474B9C  C7 86 C4 05 00 00 03 00 00 00  MOV dword ptr [ESI + 0x5c4],0x3
00474BA6  B8 02 00 00 00            MOV EAX,0x2
00474BAB  5F                        POP EDI
00474BAC  5E                        POP ESI
00474BAD  5B                        POP EBX
00474BAE  8B E5                     MOV ESP,EBP
00474BB0  5D                        POP EBP
00474BB1  C2 04 00                  RET 0x4
LAB_00474bb4:
00474BB4  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
00474BB8  66 2B 86 B0 05 00 00      SUB AX,word ptr [ESI + 0x5b0]
00474BBF  66 F7 D8                  NEG AX
00474BC2  1B C0                     SBB EAX,EAX
00474BC4  83 C0 06                  ADD EAX,0x6
00474BC7  89 86 C4 05 00 00         MOV dword ptr [ESI + 0x5c4],EAX
00474BCD  B8 02 00 00 00            MOV EAX,0x2
00474BD2  5F                        POP EDI
00474BD3  5E                        POP ESI
00474BD4  5B                        POP EBX
00474BD5  8B E5                     MOV ESP,EBP
00474BD7  5D                        POP EBP
00474BD8  C2 04 00                  RET 0x4
LAB_00474bdb:
00474BDB  C7 86 C4 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x5c4],0x1
switchD_00474a47::default:
00474BE5  B8 02 00 00 00            MOV EAX,0x2
00474BEA  5F                        POP EDI
00474BEB  5E                        POP ESI
00474BEC  5B                        POP EBX
00474BED  8B E5                     MOV ESP,EBP
00474BEF  5D                        POP EBP
00474BF0  C2 04 00                  RET 0x4
LAB_00474bf3:
00474BF3  83 F8 01                  CMP EAX,0x1
00474BF6  75 57                     JNZ 0x00474c4f
00474BF8  66 8B 86 AE 05 00 00      MOV AX,word ptr [ESI + 0x5ae]
00474BFF  66 8B 8E AC 05 00 00      MOV CX,word ptr [ESI + 0x5ac]
00474C06  66 69 C0 C8 00            IMUL AX,AX,0xc8
00474C0B  66 69 C9 C9 00            IMUL CX,CX,0xc9
00474C10  83 C0 64                  ADD EAX,0x64
00474C13  8B 16                     MOV EDX,dword ptr [ESI]
00474C15  50                        PUSH EAX
00474C16  66 8B 86 AA 05 00 00      MOV AX,word ptr [ESI + 0x5aa]
00474C1D  66 69 C0 C9 00            IMUL AX,AX,0xc9
00474C22  83 C1 64                  ADD ECX,0x64
00474C25  83 C0 64                  ADD EAX,0x64
00474C28  51                        PUSH ECX
00474C29  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00474C2D  50                        PUSH EAX
00474C2E  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00474C32  51                        PUSH ECX
00474C33  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00474C37  50                        PUSH EAX
00474C38  51                        PUSH ECX
00474C39  8B CE                     MOV ECX,ESI
00474C3B  FF 52 10                  CALL dword ptr [EDX + 0x10]
00474C3E  66 89 86 C8 05 00 00      MOV word ptr [ESI + 0x5c8],AX
00474C45  C7 86 C4 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x5c4],0x2
LAB_00474c4f:
00474C4F  8B 86 C4 05 00 00         MOV EAX,dword ptr [ESI + 0x5c4]
00474C55  83 F8 02                  CMP EAX,0x2
00474C58  75 79                     JNZ 0x00474cd3
00474C5A  66 8B 96 C8 05 00 00      MOV DX,word ptr [ESI + 0x5c8]
00474C61  8B CE                     MOV ECX,ESI
00474C63  52                        PUSH EDX
00474C64  E8 49 E4 F8 FF            CALL 0x004030b2
00474C69  50                        PUSH EAX
00474C6A  8B CE                     MOV ECX,ESI
00474C6C  E8 8B D6 F8 FF            CALL 0x004022fc
00474C71  83 F8 FF                  CMP EAX,-0x1
00474C74  74 2A                     JZ 0x00474ca0
00474C76  3B C3                     CMP EAX,EBX
00474C78  75 0A                     JNZ 0x00474c84
00474C7A  C7 86 C4 05 00 00 03 00 00 00  MOV dword ptr [ESI + 0x5c4],0x3
LAB_00474c84:
00474C84  8B 06                     MOV EAX,dword ptr [ESI]
00474C86  8B CE                     MOV ECX,ESI
00474C88  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00474C8E  F7 D8                     NEG EAX
00474C90  1B C0                     SBB EAX,EAX
00474C92  24 FD                     AND AL,0xfd
00474C94  83 C0 02                  ADD EAX,0x2
00474C97  5F                        POP EDI
00474C98  5E                        POP ESI
00474C99  5B                        POP EBX
00474C9A  8B E5                     MOV ESP,EBP
00474C9C  5D                        POP EBP
00474C9D  C2 04 00                  RET 0x4
LAB_00474ca0:
00474CA0  68 54 AF 7A 00            PUSH 0x7aaf54
00474CA5  68 CC 4C 7A 00            PUSH 0x7a4ccc
00474CAA  53                        PUSH EBX
00474CAB  53                        PUSH EBX
00474CAC  68 8F 2F 00 00            PUSH 0x2f8f
00474CB1  68 3C 9D 7A 00            PUSH 0x7a9d3c
00474CB6  E8 15 88 23 00            CALL 0x006ad4d0
00474CBB  83 C4 18                  ADD ESP,0x18
00474CBE  85 C0                     TEST EAX,EAX
00474CC0  0F 84 ED 05 00 00         JZ 0x004752b3
00474CC6  CC                        INT3
LAB_00474cd3:
00474CD3  83 F8 03                  CMP EAX,0x3
00474CD6  75 54                     JNZ 0x00474d2c
00474CD8  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
00474CDB  66 8B 96 AE 05 00 00      MOV DX,word ptr [ESI + 0x5ae]
00474CE2  66 8B 86 AC 05 00 00      MOV AX,word ptr [ESI + 0x5ac]
00474CE9  51                        PUSH ECX
00474CEA  66 8B 8E AA 05 00 00      MOV CX,word ptr [ESI + 0x5aa]
00474CF1  66 69 D2 C8 00            IMUL DX,DX,0xc8
00474CF6  66 69 C0 C9 00            IMUL AX,AX,0xc9
00474CFB  66 69 C9 C9 00            IMUL CX,CX,0xc9
00474D00  83 C2 64                  ADD EDX,0x64
00474D03  83 C0 64                  ADD EAX,0x64
00474D06  52                        PUSH EDX
00474D07  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00474D0B  83 C1 64                  ADD ECX,0x64
00474D0E  50                        PUSH EAX
00474D0F  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00474D13  51                        PUSH ECX
00474D14  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00474D18  52                        PUSH EDX
00474D19  50                        PUSH EAX
00474D1A  51                        PUSH ECX
00474D1B  8B CE                     MOV ECX,ESI
00474D1D  E8 33 D7 F8 FF            CALL 0x00402455
00474D22  C7 86 C4 05 00 00 04 00 00 00  MOV dword ptr [ESI + 0x5c4],0x4
LAB_00474d2c:
00474D2C  8B 86 C4 05 00 00         MOV EAX,dword ptr [ESI + 0x5c4]
00474D32  83 F8 04                  CMP EAX,0x4
00474D35  0F 85 0E 02 00 00         JNZ 0x00474f49
00474D3B  8D 55 F0                  LEA EDX,[EBP + -0x10]
00474D3E  8D 45 EC                  LEA EAX,[EBP + -0x14]
00474D41  52                        PUSH EDX
00474D42  50                        PUSH EAX
00474D43  8B CE                     MOV ECX,ESI
00474D45  E8 FD DA F8 FF            CALL 0x00402847
00474D4A  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00474D4D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00474D50  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00474D56  33 D2                     XOR EDX,EDX
00474D58  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00474D5E  B9 07 00 00 00            MOV ECX,0x7
00474D63  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00474D66  C1 E8 10                  SHR EAX,0x10
00474D69  F7 F1                     DIV ECX
00474D6B  8B FA                     MOV EDI,EDX
00474D6D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00474D70  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00474D76  83 EF 03                  SUB EDI,0x3
00474D79  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00474D7F  33 D2                     XOR EDX,EDX
00474D81  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00474D84  C1 E8 10                  SHR EAX,0x10
00474D87  F7 F1                     DIV ECX
00474D89  8B DA                     MOV EBX,EDX
00474D8B  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00474D8E  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00474D94  83 EB 03                  SUB EBX,0x3
00474D97  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00474D9D  33 D2                     XOR EDX,EDX
00474D9F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00474DA2  C1 E8 10                  SHR EAX,0x10
00474DA5  F7 F1                     DIV ECX
00474DA7  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
00474DAD  83 EA 03                  SUB EDX,0x3
00474DB0  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00474DB3  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
00474DB9  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
00474DBD  99                        CDQ
00474DBE  2B C2                     SUB EAX,EDX
00474DC0  D1 F8                     SAR EAX,0x1
00474DC2  3B C8                     CMP ECX,EAX
00474DC4  0F 8F 09 01 00 00         JG 0x00474ed3
00474DCA  8A 86 BF 02 00 00         MOV AL,byte ptr [ESI + 0x2bf]
00474DD0  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00474DD7  84 C0                     TEST AL,AL
00474DD9  0F 86 F4 00 00 00         JBE 0x00474ed3
00474DDF  8D 86 B3 02 00 00         LEA EAX,[ESI + 0x2b3]
00474DE5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00474de8:
00474DE8  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00474DEC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00474DEF  51                        PUSH ECX
00474DF0  8B 0A                     MOV ECX,dword ptr [EDX]
00474DF2  83 EC 08                  SUB ESP,0x8
00474DF5  8B C4                     MOV EAX,ESP
00474DF7  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
00474DFB  89 08                     MOV dword ptr [EAX],ECX
00474DFD  8B CE                     MOV ECX,ESI
00474DFF  66 89 50 04               MOV word ptr [EAX + 0x4],DX
00474E03  8D 45 D8                  LEA EAX,[EBP + -0x28]
00474E06  50                        PUSH EAX
00474E07  E8 20 E6 F8 FF            CALL 0x0040342c
00474E0C  8B 08                     MOV ECX,dword ptr [EAX]
00474E0E  6A 00                     PUSH 0x0
00474E10  6A 00                     PUSH 0x0
00474E12  6A FF                     PUSH -0x1
00474E14  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
00474E18  A1 2C 73 80 00            MOV EAX,[0x0080732c]
00474E1D  6A 00                     PUSH 0x0
00474E1F  6A 00                     PUSH 0x0
00474E21  6A 00                     PUSH 0x0
00474E23  6A 00                     PUSH 0x0
00474E25  83 F8 01                  CMP EAX,0x1
00474E28  6A 00                     PUSH 0x0
00474E2A  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00474E2D  66 89 55 E4               MOV word ptr [EBP + -0x1c],DX
00474E31  6A 00                     PUSH 0x0
00474E33  75 41                     JNZ 0x00474e76
00474E35  D9 46 70                  FLD float ptr [ESI + 0x70]
00474E38  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00474E3E  E8 45 94 2B 00            CALL 0x0072e288
00474E43  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
00474E47  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00474E4A  0F BF C0                  MOVSX EAX,AX
00474E4D  03 CA                     ADD ECX,EDX
00474E4F  0F BF 55 E4               MOVSX EDX,word ptr [EBP + -0x1c]
00474E53  03 C8                     ADD ECX,EAX
00474E55  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00474E59  03 D1                     ADD EDX,ECX
00474E5B  0F BF 4D E2               MOVSX ECX,word ptr [EBP + -0x1e]
00474E5F  2B C1                     SUB EAX,ECX
00474E61  52                        PUSH EDX
00474E62  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
00474E66  03 C3                     ADD EAX,EBX
00474E68  8B CF                     MOV ECX,EDI
00474E6A  50                        PUSH EAX
00474E6B  03 CA                     ADD ECX,EDX
00474E6D  0F BF 45 E0               MOVSX EAX,word ptr [EBP + -0x20]
00474E71  03 C1                     ADD EAX,ECX
00474E73  50                        PUSH EAX
00474E74  EB 2C                     JMP 0x00474ea2
LAB_00474e76:
00474E76  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
00474E7A  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
00474E7E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00474E81  03 CA                     ADD ECX,EDX
00474E83  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00474E87  03 C1                     ADD EAX,ECX
00474E89  50                        PUSH EAX
00474E8A  0F BF 45 E2               MOVSX EAX,word ptr [EBP + -0x1e]
00474E8E  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
00474E92  2B D0                     SUB EDX,EAX
00474E94  8B C7                     MOV EAX,EDI
00474E96  03 D3                     ADD EDX,EBX
00474E98  03 C1                     ADD EAX,ECX
00474E9A  52                        PUSH EDX
00474E9B  0F BF 55 E0               MOVSX EDX,word ptr [EBP + -0x20]
00474E9F  03 D0                     ADD EDX,EAX
00474EA1  52                        PUSH EDX
LAB_00474ea2:
00474EA2  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00474EA8  6A 07                     PUSH 0x7
00474EAA  6A 02                     PUSH 0x2
00474EAC  6A 01                     PUSH 0x1
00474EAE  E8 80 C5 F8 FF            CALL 0x00401433
00474EB3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00474EB6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00474EB9  83 C1 06                  ADD ECX,0x6
00474EBC  40                        INC EAX
00474EBD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00474EC0  33 C9                     XOR ECX,ECX
00474EC2  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
00474EC8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00474ECB  3B C1                     CMP EAX,ECX
00474ECD  0F 8C 15 FF FF FF         JL 0x00474de8
LAB_00474ed3:
00474ED3  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00474ED6  83 F8 FF                  CMP EAX,-0x1
00474ED9  74 39                     JZ 0x00474f14
00474EDB  85 C0                     TEST EAX,EAX
00474EDD  75 19                     JNZ 0x00474ef8
00474EDF  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
00474EE3  66 2B 96 B0 05 00 00      SUB DX,word ptr [ESI + 0x5b0]
00474EEA  66 F7 DA                  NEG DX
00474EED  1B D2                     SBB EDX,EDX
00474EEF  83 C2 06                  ADD EDX,0x6
00474EF2  89 96 C4 05 00 00         MOV dword ptr [ESI + 0x5c4],EDX
LAB_00474ef8:
00474EF8  8B 06                     MOV EAX,dword ptr [ESI]
00474EFA  8B CE                     MOV ECX,ESI
00474EFC  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00474F02  F7 D8                     NEG EAX
00474F04  1B C0                     SBB EAX,EAX
00474F06  24 FD                     AND AL,0xfd
00474F08  83 C0 02                  ADD EAX,0x2
00474F0B  5F                        POP EDI
00474F0C  5E                        POP ESI
00474F0D  5B                        POP EBX
00474F0E  8B E5                     MOV ESP,EBP
00474F10  5D                        POP EBP
00474F11  C2 04 00                  RET 0x4
LAB_00474f14:
00474F14  68 2C AF 7A 00            PUSH 0x7aaf2c
00474F19  68 CC 4C 7A 00            PUSH 0x7a4ccc
00474F1E  6A 00                     PUSH 0x0
00474F20  6A 00                     PUSH 0x0
00474F22  68 B6 2F 00 00            PUSH 0x2fb6
00474F27  68 3C 9D 7A 00            PUSH 0x7a9d3c
00474F2C  E8 9F 85 23 00            CALL 0x006ad4d0
00474F31  83 C4 18                  ADD ESP,0x18
00474F34  85 C0                     TEST EAX,EAX
00474F36  0F 84 77 03 00 00         JZ 0x004752b3
00474F3C  CC                        INT3
LAB_00474f49:
00474F49  83 F8 05                  CMP EAX,0x5
00474F4C  75 66                     JNZ 0x00474fb4
00474F4E  66 8B 8E B0 05 00 00      MOV CX,word ptr [ESI + 0x5b0]
00474F55  51                        PUSH ECX
00474F56  8B CE                     MOV ECX,ESI
00474F58  E8 55 E1 F8 FF            CALL 0x004030b2
00474F5D  50                        PUSH EAX
00474F5E  8B CE                     MOV ECX,ESI
00474F60  E8 97 D3 F8 FF            CALL 0x004022fc
00474F65  83 F8 FF                  CMP EAX,-0x1
00474F68  74 17                     JZ 0x00474f81
00474F6A  3B C3                     CMP EAX,EBX
00474F6C  0F 85 DA 00 00 00         JNZ 0x0047504c
00474F72  C7 86 C4 05 00 00 06 00 00 00  MOV dword ptr [ESI + 0x5c4],0x6
00474F7C  E9 CB 00 00 00            JMP 0x0047504c
LAB_00474f81:
00474F81  68 04 AF 7A 00            PUSH 0x7aaf04
00474F86  68 CC 4C 7A 00            PUSH 0x7a4ccc
00474F8B  53                        PUSH EBX
00474F8C  53                        PUSH EBX
00474F8D  68 C5 2F 00 00            PUSH 0x2fc5
00474F92  68 3C 9D 7A 00            PUSH 0x7a9d3c
00474F97  E8 34 85 23 00            CALL 0x006ad4d0
00474F9C  83 C4 18                  ADD ESP,0x18
00474F9F  85 C0                     TEST EAX,EAX
00474FA1  0F 84 0C 03 00 00         JZ 0x004752b3
00474FA7  CC                        INT3
LAB_00474fb4:
00474FB4  83 F8 06                  CMP EAX,0x6
00474FB7  0F 85 8A 00 00 00         JNZ 0x00475047
00474FBD  66 83 7E 6E 2F            CMP word ptr [ESI + 0x6e],0x2f
00474FC2  75 67                     JNZ 0x0047502b
00474FC4  8B 8E A2 05 00 00         MOV ECX,dword ptr [ESI + 0x5a2]
00474FCA  8D 45 08                  LEA EAX,[EBP + 0x8]
00474FCD  50                        PUSH EAX
00474FCE  89 5E 76                  MOV dword ptr [ESI + 0x76],EBX
00474FD1  51                        PUSH ECX
00474FD2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00474FD8  E8 F3 12 27 00            CALL 0x006e62d0
00474FDD  83 F8 FC                  CMP EAX,-0x4
00474FE0  75 33                     JNZ 0x00475015
00474FE2  68 CC AE 7A 00            PUSH 0x7aaecc
00474FE7  68 CC 4C 7A 00            PUSH 0x7a4ccc
00474FEC  53                        PUSH EBX
00474FED  53                        PUSH EBX
00474FEE  68 D1 2F 00 00            PUSH 0x2fd1
00474FF3  68 3C 9D 7A 00            PUSH 0x7a9d3c
00474FF8  E8 D3 84 23 00            CALL 0x006ad4d0
00474FFD  83 C4 18                  ADD ESP,0x18
00475000  85 C0                     TEST EAX,EAX
00475002  0F 84 AB 02 00 00         JZ 0x004752b3
00475008  CC                        INT3
LAB_00475015:
00475015  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00475018  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047501B  52                        PUSH EDX
0047501C  E8 29 C6 F8 FF            CALL 0x0040164a
00475021  C7 86 C4 05 00 00 07 00 00 00  MOV dword ptr [ESI + 0x5c4],0x7
LAB_0047502b:
0047502B  8B 06                     MOV EAX,dword ptr [ESI]
0047502D  8B CE                     MOV ECX,ESI
0047502F  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00475035  F7 D8                     NEG EAX
00475037  1B C0                     SBB EAX,EAX
00475039  24 FD                     AND AL,0xfd
0047503B  83 C0 02                  ADD EAX,0x2
0047503E  5F                        POP EDI
0047503F  5E                        POP ESI
00475040  5B                        POP EBX
00475041  8B E5                     MOV ESP,EBP
00475043  5D                        POP EBP
00475044  C2 04 00                  RET 0x4
LAB_00475047:
00475047  83 F8 07                  CMP EAX,0x7
0047504A  75 1C                     JNZ 0x00475068
LAB_0047504c:
0047504C  8B 16                     MOV EDX,dword ptr [ESI]
0047504E  8B CE                     MOV ECX,ESI
00475050  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00475056  F7 D8                     NEG EAX
00475058  1B C0                     SBB EAX,EAX
0047505A  24 FD                     AND AL,0xfd
0047505C  83 C0 02                  ADD EAX,0x2
0047505F  5F                        POP EDI
00475060  5E                        POP ESI
00475061  5B                        POP EBX
00475062  8B E5                     MOV ESP,EBP
00475064  5D                        POP EBP
00475065  C2 04 00                  RET 0x4
LAB_00475068:
00475068  8B 86 C0 05 00 00         MOV EAX,dword ptr [ESI + 0x5c0]
0047506E  83 F8 02                  CMP EAX,0x2
00475071  75 20                     JNZ 0x00475093
00475073  50                        PUSH EAX
00475074  8B CE                     MOV ECX,ESI
00475076  E8 DD D5 F8 FF            CALL 0x00402658
0047507B  85 C0                     TEST EAX,EAX
0047507D  75 06                     JNZ 0x00475085
0047507F  89 9E C0 05 00 00         MOV dword ptr [ESI + 0x5c0],EBX
LAB_00475085:
00475085  B8 02 00 00 00            MOV EAX,0x2
0047508A  5F                        POP EDI
0047508B  5E                        POP ESI
0047508C  5B                        POP EBX
0047508D  8B E5                     MOV ESP,EBP
0047508F  5D                        POP EBP
00475090  C2 04 00                  RET 0x4
LAB_00475093:
00475093  83 F8 03                  CMP EAX,0x3
00475096  0F 85 F4 01 00 00         JNZ 0x00475290
0047509C  8B 86 A6 05 00 00         MOV EAX,dword ptr [ESI + 0x5a6]
004750A2  8D BE A6 05 00 00         LEA EDI,[ESI + 0x5a6]
004750A8  3B C3                     CMP EAX,EBX
004750AA  75 33                     JNZ 0x004750df
004750AC  8B 86 A2 05 00 00         MOV EAX,dword ptr [ESI + 0x5a2]
004750B2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004750B8  57                        PUSH EDI
004750B9  50                        PUSH EAX
004750BA  E8 11 12 27 00            CALL 0x006e62d0
004750BF  83 F8 FC                  CMP EAX,-0x4
004750C2  75 1B                     JNZ 0x004750df
004750C4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004750CA  68 EA 2F 00 00            PUSH 0x2fea
004750CF  68 3C 9D 7A 00            PUSH 0x7a9d3c
004750D4  51                        PUSH ECX
004750D5  68 FF FF 00 00            PUSH 0xffff
004750DA  E8 61 0D 23 00            CALL 0x006a5e40
LAB_004750df:
004750DF  8B 17                     MOV EDX,dword ptr [EDI]
004750E1  39 9A CE 07 00 00         CMP dword ptr [EDX + 0x7ce],EBX
004750E7  0F 84 72 01 00 00         JZ 0x0047525f
004750ED  8B 86 16 07 00 00         MOV EAX,dword ptr [ESI + 0x716]
004750F3  8B 8E 12 07 00 00         MOV ECX,dword ptr [ESI + 0x712]
004750F9  3B C1                     CMP EAX,ECX
004750FB  0F 8D 5E 01 00 00         JGE 0x0047525f
00475101  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00475107  33 D2                     XOR EDX,EDX
00475109  BF 19 00 00 00            MOV EDI,0x19
0047510E  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
00475114  8B C1                     MOV EAX,ECX
00475116  F7 F7                     DIV EDI
00475118  85 D2                     TEST EDX,EDX
0047511A  0F 85 3F 01 00 00         JNZ 0x0047525f
00475120  8B C1                     MOV EAX,ECX
00475122  B9 64 00 00 00            MOV ECX,0x64
00475127  F7 F1                     DIV ECX
00475129  8B 9E F7 06 00 00         MOV EBX,dword ptr [ESI + 0x6f7]
0047512F  4B                        DEC EBX
00475130  85 D2                     TEST EDX,EDX
00475132  75 2C                     JNZ 0x00475160
00475134  8B 16                     MOV EDX,dword ptr [ESI]
00475136  68 63 03 00 00            PUSH 0x363
0047513B  6A 03                     PUSH 0x3
0047513D  8B CE                     MOV ECX,ESI
0047513F  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
00475145  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
0047514B  6A 00                     PUSH 0x0
0047514D  6A 00                     PUSH 0x0
0047514F  6A 9C                     PUSH -0x64
00475151  6A 9C                     PUSH -0x64
00475153  6A 9C                     PUSH -0x64
00475155  6A 01                     PUSH 0x1
00475157  50                        PUSH EAX
00475158  E8 7B DC F8 FF            CALL 0x00402dd8
0047515D  83 C4 1C                  ADD ESP,0x1c
LAB_00475160:
00475160  8B 8E 12 07 00 00         MOV ECX,dword ptr [ESI + 0x712]
00475166  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00475169  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0047516C  99                        CDQ
0047516D  F7 3C 9D A0 04 7E 00      IDIV dword ptr [EBX*0x4 + 0x7e04a0]
00475174  8B F8                     MOV EDI,EAX
00475176  8B 86 16 07 00 00         MOV EAX,dword ptr [ESI + 0x716]
0047517C  8D 14 38                  LEA EDX,[EAX + EDI*0x1]
0047517F  3B D1                     CMP EDX,ECX
00475181  7E 04                     JLE 0x00475187
00475183  8B F9                     MOV EDI,ECX
00475185  2B F8                     SUB EDI,EAX
LAB_00475187:
00475187  8B 04 9D 2C 44 85 00      MOV EAX,dword ptr [EBX*0x4 + 0x85442c]
0047518E  6A 00                     PUSH 0x0
00475190  0F AF C7                  IMUL EAX,EDI
00475193  99                        CDQ
00475194  F7 F9                     IDIV ECX
00475196  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00475199  8B 04 9D A0 07 7E 00      MOV EAX,dword ptr [EBX*0x4 + 0x7e07a0]
004751A0  0F AF C7                  IMUL EAX,EDI
004751A3  99                        CDQ
004751A4  F7 F9                     IDIV ECX
004751A6  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004751A9  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004751AC  8B D8                     MOV EBX,EAX
004751AE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004751B1  53                        PUSH EBX
004751B2  6A 00                     PUSH 0x0
004751B4  50                        PUSH EAX
004751B5  51                        PUSH ECX
004751B6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004751BC  6A 04                     PUSH 0x4
004751BE  52                        PUSH EDX
004751BF  E8 92 03 F9 FF            CALL 0x00405556
004751C4  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004751C7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004751CD  6A 04                     PUSH 0x4
004751CF  50                        PUSH EAX
004751D0  E8 28 0C F9 FF            CALL 0x00405dfd
004751D5  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
004751D8  7F 70                     JG 0x0047524a
004751DA  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004751DD  6A 04                     PUSH 0x4
004751DF  51                        PUSH ECX
004751E0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004751E6  E8 C0 D1 F8 FF            CALL 0x004023ab
004751EB  3B D8                     CMP EBX,EAX
004751ED  7F 5B                     JG 0x0047524a
004751EF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004751F2  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004751F5  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004751F8  52                        PUSH EDX
004751F9  50                        PUSH EAX
004751FA  6A 04                     PUSH 0x4
004751FC  51                        PUSH ECX
004751FD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00475203  E8 F1 D8 F8 FF            CALL 0x00402af9
00475208  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0047520B  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0047520E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00475214  53                        PUSH EBX
00475215  52                        PUSH EDX
00475216  6A 04                     PUSH 0x4
00475218  50                        PUSH EAX
00475219  E8 75 D5 F8 FF            CALL 0x00402793
0047521E  8B 8E 16 07 00 00         MOV ECX,dword ptr [ESI + 0x716]
00475224  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00475227  03 CF                     ADD ECX,EDI
00475229  33 D2                     XOR EDX,EDX
0047522B  89 8E 16 07 00 00         MOV dword ptr [ESI + 0x716],ECX
00475231  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00475234  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
0047523A  3B C2                     CMP EAX,EDX
0047523C  75 0C                     JNZ 0x0047524a
0047523E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00475244  50                        PUSH EAX
00475245  E8 43 F9 F8 FF            CALL 0x00404b8d
LAB_0047524a:
0047524A  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0047524D  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00475250  51                        PUSH ECX
00475251  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00475257  6A 04                     PUSH 0x4
00475259  52                        PUSH EDX
0047525A  E8 8C FF F8 FF            CALL 0x004051eb
LAB_0047525f:
0047525F  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00475262  8D 4D B8                  LEA ECX,[EBP + -0x48]
00475265  51                        PUSH ECX
00475266  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047526C  C7 45 C8 29 01 00 00      MOV dword ptr [EBP + -0x38],0x129
00475273  C7 45 C4 02 00 00 00      MOV dword ptr [EBP + -0x3c],0x2
0047527A  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0047527D  E8 8E 05 27 00            CALL 0x006e5810
switchD_00474a47::caseD_2:
00475282  B8 02 00 00 00            MOV EAX,0x2
00475287  5F                        POP EDI
00475288  5E                        POP ESI
00475289  5B                        POP EBX
0047528A  8B E5                     MOV ESP,EBP
0047528C  5D                        POP EBP
0047528D  C2 04 00                  RET 0x4
LAB_00475290:
00475290  68 9C AE 7A 00            PUSH 0x7aae9c
00475295  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047529A  53                        PUSH EBX
0047529B  53                        PUSH EBX
0047529C  68 07 30 00 00            PUSH 0x3007
004752A1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004752A6  E8 25 82 23 00            CALL 0x006ad4d0
004752AB  83 C4 18                  ADD ESP,0x18
004752AE  85 C0                     TEST EAX,EAX
004752B0  74 01                     JZ 0x004752b3
004752B2  CC                        INT3
LAB_004752b3:
004752B3  5F                        POP EDI
004752B4  5E                        POP ESI
004752B5  83 C8 FF                  OR EAX,0xffffffff
004752B8  5B                        POP EBX
004752B9  8B E5                     MOV ESP,EBP
004752BB  5D                        POP EBP
004752BC  C2 04 00                  RET 0x4
