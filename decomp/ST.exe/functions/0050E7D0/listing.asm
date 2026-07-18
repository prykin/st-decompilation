CPanelTy::SetControlObjSI:
0050E7D0  55                        PUSH EBP
0050E7D1  8B EC                     MOV EBP,ESP
0050E7D3  81 EC 48 08 00 00         SUB ESP,0x848
0050E7D9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0050E7DE  53                        PUSH EBX
0050E7DF  56                        PUSH ESI
0050E7E0  57                        PUSH EDI
0050E7E1  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0050E7E4  33 FF                     XOR EDI,EDI
0050E7E6  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
0050E7EC  8D 8D F8 FE FF FF         LEA ECX,[EBP + 0xfffffef8]
0050E7F2  57                        PUSH EDI
0050E7F3  52                        PUSH EDX
0050E7F4  89 85 F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EAX
0050E7FA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050E800  E8 EB EF 21 00            CALL 0x0072d7f0
0050E805  8B F0                     MOV ESI,EAX
0050E807  83 C4 08                  ADD ESP,0x8
0050E80A  3B F7                     CMP ESI,EDI
0050E80C  0F 85 15 09 00 00         JNZ 0x0050f127
0050E812  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0050E815  84 C0                     TEST AL,AL
0050E817  74 0B                     JZ 0x0050e824
0050E819  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0050E81F  E8 D8 58 EF FF            CALL 0x004040fc
LAB_0050e824:
0050E824  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0050E827  8B 86 02 03 00 00         MOV EAX,dword ptr [ESI + 0x302]
0050E82D  3B C7                     CMP EAX,EDI
0050E82F  74 09                     JZ 0x0050e83a
0050E831  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050E834  50                        PUSH EAX
0050E835  E8 76 6E 1D 00            CALL 0x006e56b0
LAB_0050e83a:
0050E83A  89 BE 02 03 00 00         MOV dword ptr [ESI + 0x302],EDI
0050E840  8B 86 0C 03 00 00         MOV EAX,dword ptr [ESI + 0x30c]
0050E846  3B C7                     CMP EAX,EDI
0050E848  74 09                     JZ 0x0050e853
0050E84A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050E84D  50                        PUSH EAX
0050E84E  E8 5D 6E 1D 00            CALL 0x006e56b0
LAB_0050e853:
0050E853  8B 86 14 03 00 00         MOV EAX,dword ptr [ESI + 0x314]
0050E859  89 BE 0C 03 00 00         MOV dword ptr [ESI + 0x30c],EDI
0050E85F  3B C7                     CMP EAX,EDI
0050E861  74 09                     JZ 0x0050e86c
0050E863  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050E866  50                        PUSH EAX
0050E867  E8 44 6E 1D 00            CALL 0x006e56b0
LAB_0050e86c:
0050E86C  8B 86 18 03 00 00         MOV EAX,dword ptr [ESI + 0x318]
0050E872  89 BE 14 03 00 00         MOV dword ptr [ESI + 0x314],EDI
0050E878  3B C7                     CMP EAX,EDI
0050E87A  74 09                     JZ 0x0050e885
0050E87C  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050E87F  50                        PUSH EAX
0050E880  E8 2B 6E 1D 00            CALL 0x006e56b0
LAB_0050e885:
0050E885  8B 86 D0 09 00 00         MOV EAX,dword ptr [ESI + 0x9d0]
0050E88B  89 BE 18 03 00 00         MOV dword ptr [ESI + 0x318],EDI
0050E891  3B C7                     CMP EAX,EDI
0050E893  74 09                     JZ 0x0050e89e
0050E895  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050E898  50                        PUSH EAX
0050E899  E8 12 6E 1D 00            CALL 0x006e56b0
LAB_0050e89e:
0050E89E  89 BE D0 09 00 00         MOV dword ptr [ESI + 0x9d0],EDI
0050E8A4  8D BE 15 0A 00 00         LEA EDI,[ESI + 0xa15]
0050E8AA  BB 06 00 00 00            MOV EBX,0x6
LAB_0050e8af:
0050E8AF  8B 07                     MOV EAX,dword ptr [EDI]
0050E8B1  85 C0                     TEST EAX,EAX
0050E8B3  74 0F                     JZ 0x0050e8c4
0050E8B5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050E8B8  50                        PUSH EAX
0050E8B9  E8 F2 6D 1D 00            CALL 0x006e56b0
0050E8BE  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_0050e8c4:
0050E8C4  83 C7 04                  ADD EDI,0x4
0050E8C7  4B                        DEC EBX
0050E8C8  75 E5                     JNZ 0x0050e8af
0050E8CA  8D BE 1F 0B 00 00         LEA EDI,[ESI + 0xb1f]
0050E8D0  BB 06 00 00 00            MOV EBX,0x6
LAB_0050e8d5:
0050E8D5  8B 07                     MOV EAX,dword ptr [EDI]
0050E8D7  85 C0                     TEST EAX,EAX
0050E8D9  74 0F                     JZ 0x0050e8ea
0050E8DB  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050E8DE  50                        PUSH EAX
0050E8DF  E8 CC 6D 1D 00            CALL 0x006e56b0
0050E8E4  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_0050e8ea:
0050E8EA  83 C7 04                  ADD EDI,0x4
0050E8ED  4B                        DEC EBX
0050E8EE  75 E5                     JNZ 0x0050e8d5
0050E8F0  8B 86 37 0B 00 00         MOV EAX,dword ptr [ESI + 0xb37]
0050E8F6  85 C0                     TEST EAX,EAX
0050E8F8  74 09                     JZ 0x0050e903
0050E8FA  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050E8FD  50                        PUSH EAX
0050E8FE  E8 AD 6D 1D 00            CALL 0x006e56b0
LAB_0050e903:
0050E903  8A 86 FA 0B 00 00         MOV AL,byte ptr [ESI + 0xbfa]
0050E909  33 C9                     XOR ECX,ECX
0050E90B  84 C0                     TEST AL,AL
0050E90D  89 8E 37 0B 00 00         MOV dword ptr [ESI + 0xb37],ECX
0050E913  0F 84 D7 07 00 00         JZ 0x0050f0f0
0050E919  3C 03                     CMP AL,0x3
0050E91B  0F 84 CF 07 00 00         JZ 0x0050f0f0
0050E921  3C 04                     CMP AL,0x4
0050E923  0F 84 C7 07 00 00         JZ 0x0050f0f0
0050E929  B9 14 00 00 00            MOV ECX,0x14
0050E92E  33 C0                     XOR EAX,EAX
0050E930  8D 7D 94                  LEA EDI,[EBP + -0x6c]
0050E933  88 45 EC                  MOV byte ptr [EBP + -0x14],AL
0050E936  F3 AB                     STOSD.REP ES:EDI
0050E938  8D 8E 6A 08 00 00         LEA ECX,[ESI + 0x86a]
0050E93E  8D 86 FE 0B 00 00         LEA EAX,[ESI + 0xbfe]
0050E944  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0050E947  B9 02 F4 FF FF            MOV ECX,0xfffff402
0050E94C  2B CE                     SUB ECX,ESI
0050E94E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050E951  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0050e954:
0050E954  80 38 00                  CMP byte ptr [EAX],0x0
0050E957  0F 84 02 01 00 00         JZ 0x0050ea5f
0050E95D  03 C1                     ADD EAX,ECX
0050E95F  BF 0C 00 00 00            MOV EDI,0xc
0050E964  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0050E967  48                        DEC EAX
0050E968  BB 0D 00 00 00            MOV EBX,0xd
0050E96D  74 1E                     JZ 0x0050e98d
0050E96F  48                        DEC EAX
0050E970  74 0F                     JZ 0x0050e981
0050E972  48                        DEC EAX
0050E973  75 1D                     JNZ 0x0050e992
0050E975  BF 49 00 00 00            MOV EDI,0x49
0050E97A  BB 27 00 00 00            MOV EBX,0x27
0050E97F  EB 11                     JMP 0x0050e992
LAB_0050e981:
0050E981  BF 0C 00 00 00            MOV EDI,0xc
0050E986  BB 27 00 00 00            MOV EBX,0x27
0050E98B  EB 05                     JMP 0x0050e992
LAB_0050e98d:
0050E98D  BF 49 00 00 00            MOV EDI,0x49
LAB_0050e992:
0050E992  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0050E995  8B CE                     MOV ECX,ESI
0050E997  52                        PUSH EDX
0050E998  6A 00                     PUSH 0x0
0050E99A  E8 9F 47 EF FF            CALL 0x0040313e
0050E99F  8A 86 FC 0B 00 00         MOV AL,byte ptr [ESI + 0xbfc]
0050E9A5  84 C0                     TEST AL,AL
0050E9A7  74 0D                     JZ 0x0050e9b6
0050E9A9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0050E9AC  33 C0                     XOR EAX,EAX
0050E9AE  8A 41 06                  MOV AL,byte ptr [ECX + 0x6]
0050E9B1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0050E9B4  EB 07                     JMP 0x0050e9bd
LAB_0050e9b6:
0050E9B6  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0050e9bd:
0050E9BD  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0050E9C0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0050E9C3  8B 86 F5 0B 00 00         MOV EAX,dword ptr [ESI + 0xbf5]
0050E9C9  6A 00                     PUSH 0x0
0050E9CB  52                        PUSH EDX
0050E9CC  8A 11                     MOV DL,byte ptr [ECX]
0050E9CE  6A 00                     PUSH 0x0
0050E9D0  6A 01                     PUSH 0x1
0050E9D2  6A 00                     PUSH 0x0
0050E9D4  50                        PUSH EAX
0050E9D5  52                        PUSH EDX
0050E9D6  E8 B8 6A EF FF            CALL 0x00405493
0050E9DB  83 C4 08                  ADD ESP,0x8
0050E9DE  50                        PUSH EAX
0050E9DF  E8 98 6D EF FF            CALL 0x0040577c
0050E9E4  83 C4 08                  ADD ESP,0x8
0050E9E7  50                        PUSH EAX
0050E9E8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0050E9EB  6A 06                     PUSH 0x6
0050E9ED  53                        PUSH EBX
0050E9EE  57                        PUSH EDI
0050E9EF  50                        PUSH EAX
0050E9F0  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0050E9F3  6A 05                     PUSH 0x5
0050E9F5  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0050E9F8  C1 E1 05                  SHL ECX,0x5
0050E9FB  2B C8                     SUB ECX,EAX
0050E9FD  8D 94 8D B8 F7 FF FF      LEA EDX,[EBP + ECX*0x4 + 0xfffff7b8]
0050EA04  8B CE                     MOV ECX,ESI
0050EA06  52                        PUSH EDX
0050EA07  E8 AE 57 EF FF            CALL 0x004041ba
0050EA0C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0050EA0F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0050EA12  52                        PUSH EDX
0050EA13  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0050EA16  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
0050EA19  C1 E1 05                  SHL ECX,0x5
0050EA1C  C1 E7 05                  SHL EDI,0x5
0050EA1F  2B C8                     SUB ECX,EAX
0050EA21  2B F8                     SUB EDI,EAX
0050EA23  8B 86 DE 02 00 00         MOV EAX,dword ptr [ESI + 0x2de]
0050EA29  50                        PUSH EAX
0050EA2A  C7 84 8D C8 F8 FF FF 01 00 00 00  MOV dword ptr [EBP + ECX*0x4 + 0xfffff8c8],0x1
0050EA35  C1 E7 02                  SHL EDI,0x2
0050EA38  E8 63 C9 1F 00            CALL 0x0070b3a0
0050EA3D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0050EA40  89 84 3D DC F8 FF FF      MOV dword ptr [EBP + EDI*0x1 + 0xfffff8dc],EAX
0050EA47  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0050EA4A  83 C4 08                  ADD ESP,0x8
0050EA4D  40                        INC EAX
0050EA4E  C7 84 3D E0 F8 FF FF 3C 00 00 00  MOV dword ptr [EBP + EDI*0x1 + 0xfffff8e0],0x3c
0050EA59  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0050EA5C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0050ea5f:
0050EA5F  8A 55 EC                  MOV DL,byte ptr [EBP + -0x14]
0050EA62  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0050EA65  FE C2                     INC DL
0050EA67  83 C7 27                  ADD EDI,0x27
0050EA6A  40                        INC EAX
0050EA6B  80 FA 04                  CMP DL,0x4
0050EA6E  88 55 EC                  MOV byte ptr [EBP + -0x14],DL
0050EA71  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0050EA74  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050EA77  0F 82 D7 FE FF FF         JC 0x0050e954
0050EA7D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0050EA80  8D 8D B8 F7 FF FF         LEA ECX,[EBP + 0xfffff7b8]
0050EA86  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0050EA89  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0050EA8C  8D 45 94                  LEA EAX,[EBP + -0x6c]
0050EA8F  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0050EA92  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050EA95  6A 00                     PUSH 0x0
0050EA97  BB 02 00 00 00            MOV EBX,0x2
0050EA9C  50                        PUSH EAX
0050EA9D  8D 86 02 03 00 00         LEA EAX,[ESI + 0x302]
0050EAA3  C7 45 94 01 00 00 00      MOV dword ptr [EBP + -0x6c],0x1
0050EAAA  C7 45 98 FF FF FF FF      MOV dword ptr [EBP + -0x68],0xffffffff
0050EAB1  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
0050EAB4  C7 45 AC 0F B2 00 00      MOV dword ptr [EBP + -0x54],0xb20f
0050EABB  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
0050EABE  C7 45 CC 10 B2 00 00      MOV dword ptr [EBP + -0x34],0xb210
0050EAC5  8B 11                     MOV EDX,dword ptr [ECX]
0050EAC7  6A 00                     PUSH 0x0
0050EAC9  50                        PUSH EAX
0050EACA  6A 09                     PUSH 0x9
0050EACC  FF 52 08                  CALL dword ptr [EDX + 0x8]
0050EACF  6A 00                     PUSH 0x0
0050EAD1  8B CE                     MOV ECX,ESI
0050EAD3  E8 C9 60 EF FF            CALL 0x00404ba1
0050EAD8  8B 86 C4 09 00 00         MOV EAX,dword ptr [ESI + 0x9c4]
0050EADE  85 C0                     TEST EAX,EAX
0050EAE0  74 2D                     JZ 0x0050eb0f
0050EAE2  8A 8E FC 0B 00 00         MOV CL,byte ptr [ESI + 0xbfc]
0050EAE8  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
0050EAEF  84 C9                     TEST CL,CL
0050EAF1  74 0A                     JZ 0x0050eafd
0050EAF3  33 C9                     XOR ECX,ECX
0050EAF5  8A 8E 0A 0C 00 00         MOV CL,byte ptr [ESI + 0xc0a]
0050EAFB  EB 02                     JMP 0x0050eaff
LAB_0050eafd:
0050EAFD  33 C9                     XOR ECX,ECX
LAB_0050eaff:
0050EAFF  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
0050EB02  8D 4E 18                  LEA ECX,[ESI + 0x18]
0050EB05  51                        PUSH ECX
0050EB06  50                        PUSH EAX
0050EB07  53                        PUSH EBX
0050EB08  8B CE                     MOV ECX,ESI
0050EB0A  E8 71 75 1D 00            CALL 0x006e6080
LAB_0050eb0f:
0050EB0F  80 BE FB 0B 00 00 02      CMP byte ptr [ESI + 0xbfb],0x2
0050EB16  74 2F                     JZ 0x0050eb47
0050EB18  8B 86 F5 0B 00 00         MOV EAX,dword ptr [ESI + 0xbf5]
0050EB1E  83 C0 AD                  ADD EAX,-0x53
0050EB21  83 F8 1A                  CMP EAX,0x1a
0050EB24  0F 87 E8 05 00 00         JA 0x0050f112
0050EB2A  33 D2                     XOR EDX,EDX
0050EB2C  8A 90 8C F1 50 00         MOV DL,byte ptr [EAX + 0x50f18c]
switchD_0050eb32::switchD:
0050EB32  FF 24 95 70 F1 50 00      JMP dword ptr [EDX*0x4 + 0x50f170]
switchD_0050eb32::caseD_54:
0050EB39  8A 86 31 0C 00 00         MOV AL,byte ptr [ESI + 0xc31]
0050EB3F  84 C0                     TEST AL,AL
0050EB41  0F 84 CB 05 00 00         JZ 0x0050f112
LAB_0050eb47:
0050EB47  6A 00                     PUSH 0x0
0050EB49  6A 00                     PUSH 0x0
0050EB4B  6A 00                     PUSH 0x0
0050EB4D  6A 00                     PUSH 0x0
0050EB4F  6A 00                     PUSH 0x0
0050EB51  6A 00                     PUSH 0x0
0050EB53  6A 00                     PUSH 0x0
0050EB55  68 3F B1 00 00            PUSH 0xb13f
0050EB5A  68 2F B1 00 00            PUSH 0xb12f
0050EB5F  6A 00                     PUSH 0x0
0050EB61  68 B4 23 7C 00            PUSH 0x7c23b4
0050EB66  E8 11 6C EF FF            CALL 0x0040577c
0050EB6B  8A 9E FC 0B 00 00         MOV BL,byte ptr [ESI + 0xbfc]
0050EB71  83 C4 08                  ADD ESP,0x8
0050EB74  50                        PUSH EAX
0050EB75  33 C0                     XOR EAX,EAX
0050EB77  84 DB                     TEST BL,BL
0050EB79  6A 01                     PUSH 0x1
0050EB7B  6A 59                     PUSH 0x59
0050EB7D  0F 95 C0                  SETNZ AL
0050EB80  68 9A 00 00 00            PUSH 0x9a
0050EB85  50                        PUSH EAX
LAB_0050eb86:
0050EB86  6A 00                     PUSH 0x0
0050EB88  6A 05                     PUSH 0x5
0050EB8A  8B CE                     MOV ECX,ESI
0050EB8C  E8 58 2C EF FF            CALL 0x004017e9
0050EB91  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
0050EB97  89 86 14 03 00 00         MOV dword ptr [ESI + 0x314],EAX
0050EB9D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0050EBA3  5F                        POP EDI
0050EBA4  5E                        POP ESI
0050EBA5  5B                        POP EBX
0050EBA6  8B E5                     MOV ESP,EBP
0050EBA8  5D                        POP EBP
0050EBA9  C2 04 00                  RET 0x4
switchD_0050eb32::caseD_5c:
0050EBAC  8B 86 12 0C 00 00         MOV EAX,dword ptr [ESI + 0xc12]
0050EBB2  85 C0                     TEST EAX,EAX
0050EBB4  0F 84 58 05 00 00         JZ 0x0050f112
0050EBBA  6A 00                     PUSH 0x0
0050EBBC  6A 00                     PUSH 0x0
0050EBBE  6A 00                     PUSH 0x0
0050EBC0  6A 00                     PUSH 0x0
0050EBC2  6A 00                     PUSH 0x0
0050EBC4  6A 00                     PUSH 0x0
0050EBC6  6A 00                     PUSH 0x0
0050EBC8  68 3F B1 00 00            PUSH 0xb13f
0050EBCD  68 2F B1 00 00            PUSH 0xb12f
0050EBD2  6A 00                     PUSH 0x0
0050EBD4  68 B4 23 7C 00            PUSH 0x7c23b4
0050EBD9  E8 9E 6B EF FF            CALL 0x0040577c
0050EBDE  8A 9E FC 0B 00 00         MOV BL,byte ptr [ESI + 0xbfc]
0050EBE4  83 C4 08                  ADD ESP,0x8
0050EBE7  33 C9                     XOR ECX,ECX
0050EBE9  50                        PUSH EAX
0050EBEA  6A 01                     PUSH 0x1
0050EBEC  84 DB                     TEST BL,BL
0050EBEE  6A 59                     PUSH 0x59
0050EBF0  68 9A 00 00 00            PUSH 0x9a
0050EBF5  0F 95 C1                  SETNZ CL
0050EBF8  51                        PUSH ECX
0050EBF9  EB 8B                     JMP 0x0050eb86
switchD_0050eb32::caseD_53:
0050EBFB  80 BE 3C 0C 00 00 01      CMP byte ptr [ESI + 0xc3c],0x1
0050EC02  0F 85 0A 05 00 00         JNZ 0x0050f112
0050EC08  6A 00                     PUSH 0x0
0050EC0A  6A 00                     PUSH 0x0
0050EC0C  6A 00                     PUSH 0x0
0050EC0E  6A 00                     PUSH 0x0
0050EC10  6A 00                     PUSH 0x0
0050EC12  6A 00                     PUSH 0x0
0050EC14  6A 00                     PUSH 0x0
0050EC16  68 3F B1 00 00            PUSH 0xb13f
0050EC1B  68 2F B1 00 00            PUSH 0xb12f
0050EC20  6A 00                     PUSH 0x0
0050EC22  68 B4 23 7C 00            PUSH 0x7c23b4
0050EC27  E8 50 6B EF FF            CALL 0x0040577c
0050EC2C  8A 9E FC 0B 00 00         MOV BL,byte ptr [ESI + 0xbfc]
0050EC32  83 C4 08                  ADD ESP,0x8
0050EC35  33 D2                     XOR EDX,EDX
0050EC37  50                        PUSH EAX
0050EC38  6A 01                     PUSH 0x1
0050EC3A  84 DB                     TEST BL,BL
0050EC3C  6A 59                     PUSH 0x59
0050EC3E  68 9A 00 00 00            PUSH 0x9a
0050EC43  0F 95 C2                  SETNZ DL
0050EC46  52                        PUSH EDX
0050EC47  E9 3A FF FF FF            JMP 0x0050eb86
switchD_0050eb32::caseD_67:
0050EC4C  8A 86 FC 0B 00 00         MOV AL,byte ptr [ESI + 0xbfc]
0050EC52  84 C0                     TEST AL,AL
0050EC54  74 0A                     JZ 0x0050ec60
0050EC56  33 C0                     XOR EAX,EAX
0050EC58  8A 86 0B 0C 00 00         MOV AL,byte ptr [ESI + 0xc0b]
0050EC5E  EB 02                     JMP 0x0050ec62
LAB_0050ec60:
0050EC60  33 C0                     XOR EAX,EAX
LAB_0050ec62:
0050EC62  6A 00                     PUSH 0x0
0050EC64  6A 00                     PUSH 0x0
0050EC66  6A 00                     PUSH 0x0
0050EC68  6A 00                     PUSH 0x0
0050EC6A  6A 00                     PUSH 0x0
0050EC6C  6A 00                     PUSH 0x0
0050EC6E  6A 00                     PUSH 0x0
0050EC70  68 12 B2 00 00            PUSH 0xb212
0050EC75  68 11 B2 00 00            PUSH 0xb211
0050EC7A  68 00 23 7C 00            PUSH 0x7c2300
0050EC7F  6A 01                     PUSH 0x1
0050EC81  6A 5D                     PUSH 0x5d
0050EC83  6A 1A                     PUSH 0x1a
0050EC85  50                        PUSH EAX
0050EC86  6A 00                     PUSH 0x0
0050EC88  6A 05                     PUSH 0x5
0050EC8A  8B CE                     MOV ECX,ESI
0050EC8C  E8 58 2B EF FF            CALL 0x004017e9
0050EC91  89 86 1F 0B 00 00         MOV dword ptr [ESI + 0xb1f],EAX
0050EC97  8A 86 FC 0B 00 00         MOV AL,byte ptr [ESI + 0xbfc]
0050EC9D  84 C0                     TEST AL,AL
0050EC9F  74 0A                     JZ 0x0050ecab
0050ECA1  33 C0                     XOR EAX,EAX
0050ECA3  8A 86 0C 0C 00 00         MOV AL,byte ptr [ESI + 0xc0c]
0050ECA9  EB 02                     JMP 0x0050ecad
LAB_0050ecab:
0050ECAB  33 C0                     XOR EAX,EAX
LAB_0050ecad:
0050ECAD  6A 00                     PUSH 0x0
0050ECAF  6A 00                     PUSH 0x0
0050ECB1  6A 00                     PUSH 0x0
0050ECB3  6A 00                     PUSH 0x0
0050ECB5  6A 00                     PUSH 0x0
0050ECB7  6A 00                     PUSH 0x0
0050ECB9  6A 00                     PUSH 0x0
0050ECBB  68 14 B2 00 00            PUSH 0xb214
0050ECC0  68 13 B2 00 00            PUSH 0xb213
0050ECC5  68 E4 22 7C 00            PUSH 0x7c22e4
0050ECCA  6A 01                     PUSH 0x1
0050ECCC  6A 5D                     PUSH 0x5d
0050ECCE  68 BA 00 00 00            PUSH 0xba
0050ECD3  50                        PUSH EAX
0050ECD4  6A 00                     PUSH 0x0
0050ECD6  6A 05                     PUSH 0x5
0050ECD8  8B CE                     MOV ECX,ESI
0050ECDA  E8 0A 2B EF FF            CALL 0x004017e9
0050ECDF  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
0050ECE5  89 86 23 0B 00 00         MOV dword ptr [ESI + 0xb23],EAX
0050ECEB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0050ECF1  5F                        POP EDI
0050ECF2  5E                        POP ESI
0050ECF3  5B                        POP EBX
0050ECF4  8B E5                     MOV ESP,EBP
0050ECF6  5D                        POP EBP
0050ECF7  C2 04 00                  RET 0x4
switchD_0050eb32::caseD_5b:
0050ECFA  B9 16 00 00 00            MOV ECX,0x16
0050ECFF  33 C0                     XOR EAX,EAX
0050ED01  8D BD 3C FF FF FF         LEA EDI,[EBP + 0xffffff3c]
0050ED07  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0050ED0A  F3 AB                     STOSD.REP ES:EDI
0050ED0C  B9 54 00 00 00            MOV ECX,0x54
0050ED11  8D BD A8 FD FF FF         LEA EDI,[EBP + 0xfffffda8]
0050ED17  F3 AB                     STOSD.REP ES:EDI
0050ED19  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0050ED1C  33 C9                     XOR ECX,ECX
0050ED1E  83 C0 23                  ADD EAX,0x23
0050ED21  33 FF                     XOR EDI,EDI
0050ED23  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0050ED26  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
0050ED2C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0050ED2F  8D 85 AC FD FF FF         LEA EAX,[EBP + 0xfffffdac]
LAB_0050ed35:
0050ED35  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0050ED38  8D 59 01                  LEA EBX,[ECX + 0x1]
0050ED3B  89 58 FC                  MOV dword ptr [EAX + -0x4],EBX
0050ED3E  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0050ED44  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
0050ED47  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0050ED4A  85 D2                     TEST EDX,EDX
0050ED4C  C7 40 10 1D 00 00 00      MOV dword ptr [EAX + 0x10],0x1d
0050ED53  74 08                     JZ 0x0050ed5d
0050ED55  8B 96 A8 00 00 00         MOV EDX,dword ptr [ESI + 0xa8]
0050ED5B  EB 06                     JMP 0x0050ed63
LAB_0050ed5d:
0050ED5D  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
LAB_0050ed63:
0050ED63  8D 54 3A 59               LEA EDX,[EDX + EDI*0x1 + 0x59]
0050ED67  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0050ED6A  C7 40 14 11 00 00 00      MOV dword ptr [EAX + 0x14],0x11
0050ED71  BA 01 01 00 00            MOV EDX,0x101
0050ED76  C7 40 44 00 00 00 00      MOV dword ptr [EAX + 0x44],0x0
0050ED7D  89 50 54                  MOV dword ptr [EAX + 0x54],EDX
0050ED80  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
0050ED83  BA 03 00 00 00            MOV EDX,0x3
0050ED88  89 50 58                  MOV dword ptr [EAX + 0x58],EDX
0050ED8B  89 50 2C                  MOV dword ptr [EAX + 0x2c],EDX
0050ED8E  C7 40 30 01 42 00 00      MOV dword ptr [EAX + 0x30],0x4201
0050ED95  33 D2                     XOR EDX,EDX
0050ED97  C7 40 5C 02 42 00 00      MOV dword ptr [EAX + 0x5c],0x4202
0050ED9E  66 89 50 60               MOV word ptr [EAX + 0x60],DX
0050EDA2  66 89 50 34               MOV word ptr [EAX + 0x34],DX
0050EDA6  66 C7 40 62 02 00         MOV word ptr [EAX + 0x62],0x2
0050EDAC  2B CA                     SUB ECX,EDX
0050EDAE  66 C7 40 36 02 00         MOV word ptr [EAX + 0x36],0x2
0050EDB4  74 0A                     JZ 0x0050edc0
0050EDB6  49                        DEC ECX
0050EDB7  75 12                     JNZ 0x0050edcb
0050EDB9  B9 AA 3A 00 00            MOV ECX,0x3aaa
0050EDBE  EB 05                     JMP 0x0050edc5
LAB_0050edc0:
0050EDC0  B9 A9 3A 00 00            MOV ECX,0x3aa9
LAB_0050edc5:
0050EDC5  89 48 64                  MOV dword ptr [EAX + 0x64],ECX
0050EDC8  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
LAB_0050edcb:
0050EDCB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0050EDCE  83 C7 12                  ADD EDI,0x12
0050EDD1  83 C0 70                  ADD EAX,0x70
0050EDD4  4A                        DEC EDX
0050EDD5  8B CB                     MOV ECX,EBX
0050EDD7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0050EDDA  0F 85 55 FF FF FF         JNZ 0x0050ed35
0050EDE0  33 C0                     XOR EAX,EAX
0050EDE2  B9 01 00 00 00            MOV ECX,0x1
0050EDE7  8A 86 D4 09 00 00         MOV AL,byte ptr [ESI + 0x9d4]
0050EDED  8D 95 A8 FD FF FF         LEA EDX,[EBP + 0xfffffda8]
0050EDF3  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
0050EDF6  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0050EDF9  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
0050EDFF  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
0050EE05  8D 85 3C FF FF FF         LEA EAX,[EBP + 0xffffff3c]
0050EE0B  89 8D 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ECX
0050EE11  89 8D 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],ECX
0050EE17  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
0050EE1A  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
0050EE1D  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
0050EE20  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050EE23  6A 00                     PUSH 0x0
0050EE25  BA 02 00 00 00            MOV EDX,0x2
0050EE2A  50                        PUSH EAX
0050EE2B  8D 86 D0 09 00 00         LEA EAX,[ESI + 0x9d0]
0050EE31  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
0050EE37  C7 85 54 FF FF FF 07 B2 00 00  MOV dword ptr [EBP + 0xffffff54],0xb207
0050EE41  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
0050EE47  C7 85 74 FF FF FF 06 B2 00 00  MOV dword ptr [EBP + 0xffffff74],0xb206
0050EE51  8B 11                     MOV EDX,dword ptr [ECX]
0050EE53  6A 00                     PUSH 0x0
0050EE55  50                        PUSH EAX
0050EE56  6A 05                     PUSH 0x5
0050EE58  FF 52 08                  CALL dword ptr [EDX + 0x8]
0050EE5B  B9 3A 00 00 00            MOV ECX,0x3a
0050EE60  33 C0                     XOR EAX,EAX
0050EE62  8D BE 2D 0A 00 00         LEA EDI,[ESI + 0xa2d]
0050EE68  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
0050EE6C  F3 AB                     STOSD.REP ES:EDI
0050EE6E  66 AB                     STOSW ES:EDI
LAB_0050ee70:
0050EE70  33 C9                     XOR ECX,ECX
0050EE72  8A 8E D4 09 00 00         MOV CL,byte ptr [ESI + 0x9d4]
0050EE78  49                        DEC ECX
0050EE79  75 0A                     JNZ 0x0050ee85
0050EE7B  80 7D FC 03               CMP byte ptr [EBP + -0x4],0x3
0050EE7F  75 04                     JNZ 0x0050ee85
0050EE81  33 C9                     XOR ECX,ECX
0050EE83  EB 05                     JMP 0x0050ee8a
LAB_0050ee85:
0050EE85  B9 02 00 00 00            MOV ECX,0x2
LAB_0050ee8a:
0050EE8A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0050EE8D  8B F8                     MOV EDI,EAX
0050EE8F  50                        PUSH EAX
0050EE90  81 E7 FF 00 00 00         AND EDI,0xff
0050EE96  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
0050EE99  C1 E2 03                  SHL EDX,0x3
0050EE9C  2B D7                     SUB EDX,EDI
0050EE9E  8D 1C 32                  LEA EBX,[EDX + ESI*0x1]
0050EEA1  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0050EEA4  81 C3 2D 0A 00 00         ADD EBX,0xa2d
0050EEAA  88 0B                     MOV byte ptr [EBX],CL
0050EEAC  8A 86 D4 09 00 00         MOV AL,byte ptr [ESI + 0x9d4]
0050EEB2  04 02                     ADD AL,0x2
0050EEB4  50                        PUSH EAX
0050EEB5  E8 03 46 EF FF            CALL 0x004034bd
0050EEBA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0050EEBD  33 D2                     XOR EDX,EDX
0050EEBF  83 C4 08                  ADD ESP,0x8
0050EEC2  89 81 2E 0A 00 00         MOV dword ptr [ECX + 0xa2e],EAX
0050EEC8  8A 96 D4 09 00 00         MOV DL,byte ptr [ESI + 0x9d4]
0050EECE  4A                        DEC EDX
0050EECF  75 0A                     JNZ 0x0050eedb
0050EED1  80 7D FC 03               CMP byte ptr [EBP + -0x4],0x3
0050EED5  75 04                     JNZ 0x0050eedb
0050EED7  33 C0                     XOR EAX,EAX
0050EED9  EB 0D                     JMP 0x0050eee8
LAB_0050eedb:
0050EEDB  8A 8E FC 0B 00 00         MOV CL,byte ptr [ESI + 0xbfc]
0050EEE1  33 C0                     XOR EAX,EAX
0050EEE3  84 C9                     TEST CL,CL
0050EEE5  0F 95 C0                  SETNZ AL
LAB_0050eee8:
0050EEE8  6A 00                     PUSH 0x0
0050EEEA  6A 0A                     PUSH 0xa
0050EEEC  6A 11                     PUSH 0x11
0050EEEE  6A 00                     PUSH 0x0
0050EEF0  53                        PUSH EBX
0050EEF1  6A 00                     PUSH 0x0
0050EEF3  8D 8F 9F B1 00 00         LEA ECX,[EDI + 0xb19f]
0050EEF9  6A 01                     PUSH 0x1
0050EEFB  51                        PUSH ECX
0050EEFC  8D 97 8F B1 00 00         LEA EDX,[EDI + 0xb18f]
0050EF02  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
0050EF05  52                        PUSH EDX
0050EF06  6A 00                     PUSH 0x0
0050EF08  6A 00                     PUSH 0x0
0050EF0A  8D 54 4F 55               LEA EDX,[EDI + ECX*0x2 + 0x55]
0050EF0E  8B CE                     MOV ECX,ESI
0050EF10  52                        PUSH EDX
0050EF11  68 BA 00 00 00            PUSH 0xba
0050EF16  50                        PUSH EAX
0050EF17  6A 00                     PUSH 0x0
0050EF19  6A 05                     PUSH 0x5
0050EF1B  E8 C9 28 EF FF            CALL 0x004017e9
0050EF20  89 84 BE 15 0A 00 00      MOV dword ptr [ESI + EDI*0x4 + 0xa15],EAX
0050EF27  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
0050EF2A  FE C0                     INC AL
0050EF2C  3C 04                     CMP AL,0x4
0050EF2E  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0050EF31  0F 82 39 FF FF FF         JC 0x0050ee70
0050EF37  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
0050EF3D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0050EF43  5F                        POP EDI
0050EF44  5E                        POP ESI
0050EF45  5B                        POP EBX
0050EF46  8B E5                     MOV ESP,EBP
0050EF48  5D                        POP EBP
0050EF49  C2 04 00                  RET 0x4
switchD_0050eb32::caseD_6d:
0050EF4C  8A 96 FC 0B 00 00         MOV DL,byte ptr [ESI + 0xbfc]
0050EF52  6A 00                     PUSH 0x0
0050EF54  6A 00                     PUSH 0x0
0050EF56  6A 00                     PUSH 0x0
0050EF58  6A 00                     PUSH 0x0
0050EF5A  6A 00                     PUSH 0x0
0050EF5C  6A 00                     PUSH 0x0
0050EF5E  6A 00                     PUSH 0x0
0050EF60  68 12 B2 00 00            PUSH 0xb212
0050EF65  68 11 B2 00 00            PUSH 0xb211
0050EF6A  33 C0                     XOR EAX,EAX
0050EF6C  68 00 23 7C 00            PUSH 0x7c2300
0050EF71  84 D2                     TEST DL,DL
0050EF73  6A 01                     PUSH 0x1
0050EF75  6A 7B                     PUSH 0x7b
0050EF77  0F 95 C0                  SETNZ AL
0050EF7A  6A 2A                     PUSH 0x2a
0050EF7C  50                        PUSH EAX
0050EF7D  6A 00                     PUSH 0x0
0050EF7F  6A 05                     PUSH 0x5
0050EF81  8B CE                     MOV ECX,ESI
0050EF83  E8 61 28 EF FF            CALL 0x004017e9
0050EF88  8A 9E FC 0B 00 00         MOV BL,byte ptr [ESI + 0xbfc]
0050EF8E  6A 00                     PUSH 0x0
0050EF90  6A 00                     PUSH 0x0
0050EF92  6A 00                     PUSH 0x0
0050EF94  6A 00                     PUSH 0x0
0050EF96  6A 00                     PUSH 0x0
0050EF98  6A 00                     PUSH 0x0
0050EF9A  6A 00                     PUSH 0x0
0050EF9C  68 14 B2 00 00            PUSH 0xb214
0050EFA1  68 13 B2 00 00            PUSH 0xb213
0050EFA6  33 C9                     XOR ECX,ECX
0050EFA8  68 E4 22 7C 00            PUSH 0x7c22e4
0050EFAD  84 DB                     TEST BL,BL
0050EFAF  6A 01                     PUSH 0x1
0050EFB1  6A 7B                     PUSH 0x7b
0050EFB3  0F 95 C1                  SETNZ CL
0050EFB6  6A 45                     PUSH 0x45
0050EFB8  51                        PUSH ECX
0050EFB9  6A 00                     PUSH 0x0
0050EFBB  6A 05                     PUSH 0x5
0050EFBD  8B CE                     MOV ECX,ESI
0050EFBF  89 86 1F 0B 00 00         MOV dword ptr [ESI + 0xb1f],EAX
0050EFC5  E8 1F 28 EF FF            CALL 0x004017e9
0050EFCA  8A 8E FC 0B 00 00         MOV CL,byte ptr [ESI + 0xbfc]
0050EFD0  6A 00                     PUSH 0x0
0050EFD2  6A 00                     PUSH 0x0
0050EFD4  6A 00                     PUSH 0x0
0050EFD6  6A 00                     PUSH 0x0
0050EFD8  6A 00                     PUSH 0x0
0050EFDA  6A 00                     PUSH 0x0
0050EFDC  6A 00                     PUSH 0x0
0050EFDE  68 16 B2 00 00            PUSH 0xb216
0050EFE3  68 15 B2 00 00            PUSH 0xb215
0050EFE8  33 D2                     XOR EDX,EDX
0050EFEA  68 00 23 7C 00            PUSH 0x7c2300
0050EFEF  84 C9                     TEST CL,CL
0050EFF1  6A 01                     PUSH 0x1
0050EFF3  6A 7B                     PUSH 0x7b
0050EFF5  0F 95 C2                  SETNZ DL
0050EFF8  68 8F 00 00 00            PUSH 0x8f
0050EFFD  52                        PUSH EDX
0050EFFE  6A 00                     PUSH 0x0
0050F000  6A 05                     PUSH 0x5
0050F002  8B CE                     MOV ECX,ESI
0050F004  89 86 23 0B 00 00         MOV dword ptr [ESI + 0xb23],EAX
0050F00A  E8 DA 27 EF FF            CALL 0x004017e9
0050F00F  6A 00                     PUSH 0x0
0050F011  6A 00                     PUSH 0x0
0050F013  6A 00                     PUSH 0x0
0050F015  6A 00                     PUSH 0x0
0050F017  6A 00                     PUSH 0x0
0050F019  6A 00                     PUSH 0x0
0050F01B  6A 00                     PUSH 0x0
0050F01D  68 18 B2 00 00            PUSH 0xb218
0050F022  68 17 B2 00 00            PUSH 0xb217
0050F027  68 E4 22 7C 00            PUSH 0x7c22e4
0050F02C  6A 01                     PUSH 0x1
0050F02E  89 86 27 0B 00 00         MOV dword ptr [ESI + 0xb27],EAX
0050F034  6A 7B                     PUSH 0x7b
0050F036  8A 9E FC 0B 00 00         MOV BL,byte ptr [ESI + 0xbfc]
0050F03C  33 C0                     XOR EAX,EAX
0050F03E  84 DB                     TEST BL,BL
0050F040  0F 95 C0                  SETNZ AL
0050F043  68 AA 00 00 00            PUSH 0xaa
0050F048  50                        PUSH EAX
0050F049  6A 00                     PUSH 0x0
0050F04B  6A 05                     PUSH 0x5
0050F04D  8B CE                     MOV ECX,ESI
0050F04F  E8 95 27 EF FF            CALL 0x004017e9
0050F054  8A 96 FC 0B 00 00         MOV DL,byte ptr [ESI + 0xbfc]
0050F05A  6A 00                     PUSH 0x0
0050F05C  6A 0A                     PUSH 0xa
0050F05E  6A 11                     PUSH 0x11
0050F060  6A 00                     PUSH 0x0
0050F062  6A 00                     PUSH 0x0
0050F064  6A 00                     PUSH 0x0
0050F066  6A 00                     PUSH 0x0
0050F068  68 1A B2 00 00            PUSH 0xb21a
0050F06D  68 19 B2 00 00            PUSH 0xb219
0050F072  33 C9                     XOR ECX,ECX
0050F074  6A 00                     PUSH 0x0
0050F076  84 D2                     TEST DL,DL
0050F078  6A 00                     PUSH 0x0
0050F07A  6A 64                     PUSH 0x64
0050F07C  0F 95 C1                  SETNZ CL
0050F07F  6A 17                     PUSH 0x17
0050F081  51                        PUSH ECX
0050F082  6A 00                     PUSH 0x0
0050F084  6A 05                     PUSH 0x5
0050F086  8B CE                     MOV ECX,ESI
0050F088  89 86 2B 0B 00 00         MOV dword ptr [ESI + 0xb2b],EAX
0050F08E  E8 56 27 EF FF            CALL 0x004017e9
0050F093  8A 9E FC 0B 00 00         MOV BL,byte ptr [ESI + 0xbfc]
0050F099  6A 00                     PUSH 0x0
0050F09B  6A 0A                     PUSH 0xa
0050F09D  6A 11                     PUSH 0x11
0050F09F  6A 00                     PUSH 0x0
0050F0A1  6A 00                     PUSH 0x0
0050F0A3  6A 00                     PUSH 0x0
0050F0A5  6A 00                     PUSH 0x0
0050F0A7  68 1C B2 00 00            PUSH 0xb21c
0050F0AC  68 1B B2 00 00            PUSH 0xb21b
0050F0B1  33 D2                     XOR EDX,EDX
0050F0B3  6A 00                     PUSH 0x0
0050F0B5  84 DB                     TEST BL,BL
0050F0B7  6A 00                     PUSH 0x0
0050F0B9  6A 64                     PUSH 0x64
0050F0BB  0F 95 C2                  SETNZ DL
0050F0BE  68 C5 00 00 00            PUSH 0xc5
0050F0C3  52                        PUSH EDX
0050F0C4  6A 00                     PUSH 0x0
0050F0C6  6A 05                     PUSH 0x5
0050F0C8  8B CE                     MOV ECX,ESI
0050F0CA  89 86 2F 0B 00 00         MOV dword ptr [ESI + 0xb2f],EAX
0050F0D0  E8 14 27 EF FF            CALL 0x004017e9
0050F0D5  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
0050F0DB  89 86 33 0B 00 00         MOV dword ptr [ESI + 0xb33],EAX
0050F0E1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0050F0E7  5F                        POP EDI
0050F0E8  5E                        POP ESI
0050F0E9  5B                        POP EBX
0050F0EA  8B E5                     MOV ESP,EBP
0050F0EC  5D                        POP EBP
0050F0ED  C2 04 00                  RET 0x4
LAB_0050f0f0:
0050F0F0  8B 86 C4 09 00 00         MOV EAX,dword ptr [ESI + 0x9c4]
0050F0F6  3B C1                     CMP EAX,ECX
0050F0F8  74 18                     JZ 0x0050f112
0050F0FA  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
0050F0FD  8D 4E 18                  LEA ECX,[ESI + 0x18]
0050F100  51                        PUSH ECX
0050F101  50                        PUSH EAX
0050F102  6A 02                     PUSH 0x2
0050F104  8B CE                     MOV ECX,ESI
0050F106  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
0050F10D  E8 6E 6F 1D 00            CALL 0x006e6080
switchD_0050eb32::caseD_5d:
0050F112  8B 95 F8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef8]
0050F118  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0050F11E  5F                        POP EDI
0050F11F  5E                        POP ESI
0050F120  5B                        POP EBX
0050F121  8B E5                     MOV ESP,EBP
0050F123  5D                        POP EBP
0050F124  C2 04 00                  RET 0x4
LAB_0050f127:
0050F127  8B 85 F8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef8]
0050F12D  68 20 29 7C 00            PUSH 0x7c2920
0050F132  68 CC 4C 7A 00            PUSH 0x7a4ccc
0050F137  56                        PUSH ESI
0050F138  57                        PUSH EDI
0050F139  68 4E 09 00 00            PUSH 0x94e
0050F13E  68 00 27 7C 00            PUSH 0x7c2700
0050F143  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0050F148  E8 83 E3 19 00            CALL 0x006ad4d0
0050F14D  83 C4 18                  ADD ESP,0x18
0050F150  85 C0                     TEST EAX,EAX
0050F152  74 01                     JZ 0x0050f155
0050F154  CC                        INT3
LAB_0050f155:
0050F155  68 4E 09 00 00            PUSH 0x94e
0050F15A  68 00 27 7C 00            PUSH 0x7c2700
0050F15F  57                        PUSH EDI
0050F160  56                        PUSH ESI
0050F161  E8 DA 6C 19 00            CALL 0x006a5e40
0050F166  5F                        POP EDI
0050F167  5E                        POP ESI
0050F168  5B                        POP EBX
0050F169  8B E5                     MOV ESP,EBP
0050F16B  5D                        POP EBP
0050F16C  C2 04 00                  RET 0x4
