STSprGameObjC::CheckRay:
0041F9B0  55                        PUSH EBP
0041F9B1  8B EC                     MOV EBP,ESP
0041F9B3  81 EC A8 00 00 00         SUB ESP,0xa8
0041F9B9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0041F9BE  53                        PUSH EBX
0041F9BF  56                        PUSH ESI
0041F9C0  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0041F9C3  57                        PUSH EDI
0041F9C4  8D 95 5C FF FF FF         LEA EDX,[EBP + 0xffffff5c]
0041F9CA  8D 8D 58 FF FF FF         LEA ECX,[EBP + 0xffffff58]
0041F9D0  6A 00                     PUSH 0x0
0041F9D2  52                        PUSH EDX
0041F9D3  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
0041F9D9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0041F9DF  E8 0C DE 30 00            CALL 0x0072d7f0
0041F9E4  8B F0                     MOV ESI,EAX
0041F9E6  83 C4 08                  ADD ESP,0x8
0041F9E9  85 F6                     TEST ESI,ESI
0041F9EB  0F 85 C5 06 00 00         JNZ 0x004200b6
0041F9F1  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0041F9F4  05 65 FF FF FF            ADD EAX,0xffffff65
0041F9F9  83 F8 21                  CMP EAX,0x21
0041F9FC  77 2A                     JA 0x0041fa28
0041F9FE  33 C9                     XOR ECX,ECX
0041FA00  8A 88 28 01 42 00         MOV CL,byte ptr [EAX + 0x420128]
switchD_0041fa06::switchD:
0041FA06  FF 24 8D 20 01 42 00      JMP dword ptr [ECX*0x4 + 0x420120]
switchD_0041fa06::caseD_9b:
0041FA0D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0041FA13  68 69 0B 00 00            PUSH 0xb69
0041FA18  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041FA1D  52                        PUSH EDX
0041FA1E  68 0A 00 FE AF            PUSH 0xaffe000a
0041FA23  E8 18 64 28 00            CALL 0x006a5e40
switchD_0041fa06::caseD_9c:
0041FA28  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0041FA2B  85 C0                     TEST EAX,EAX
0041FA2D  74 06                     JZ 0x0041fa35
0041FA2F  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_0041fa35:
0041FA35  0F BF 75 1C               MOVSX ESI,word ptr [EBP + 0x1c]
0041FA39  0F BF 7D 18               MOVSX EDI,word ptr [EBP + 0x18]
0041FA3D  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
0041FA41  0F BF 4D 10               MOVSX ECX,word ptr [EBP + 0x10]
0041FA45  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
0041FA49  0F BF 5D 08               MOVSX EBX,word ptr [EBP + 0x8]
0041FA4D  56                        PUSH ESI
0041FA4E  57                        PUSH EDI
0041FA4F  50                        PUSH EAX
0041FA50  51                        PUSH ECX
0041FA51  52                        PUSH EDX
0041FA52  53                        PUSH EBX
0041FA53  E8 B5 D4 28 00            CALL 0x006acf0d
0041FA58  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041FA5E  83 C4 18                  ADD ESP,0x18
0041FA61  8B D8                     MOV EBX,EAX
0041FA63  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0041FA66  50                        PUSH EAX
0041FA67  E8 42 2B FE FF            CALL 0x004025ae
0041FA6C  8A C8                     MOV CL,AL
0041FA6E  8B C3                     MOV EAX,EBX
0041FA70  99                        CDQ
0041FA71  81 E1 FF 00 00 00         AND ECX,0xff
0041FA77  F7 F9                     IDIV ECX
0041FA79  8B D0                     MOV EDX,EAX
0041FA7B  83 FA 01                  CMP EDX,0x1
0041FA7E  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0041FA81  7D 08                     JGE 0x0041fa8b
0041FA83  BA 01 00 00 00            MOV EDX,0x1
0041FA88  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
LAB_0041fa8b:
0041FA8B  0F BF 5D 08               MOVSX EBX,word ptr [EBP + 0x8]
0041FA8F  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
0041FA93  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
0041FA97  83 FA 01                  CMP EDX,0x1
0041FA9A  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0041FA9D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0041FAA0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0041FAA3  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
0041FAAA  0F 8C EC 05 00 00         JL 0x0042009c
0041FAB0  0F BF 55 14               MOVSX EDX,word ptr [EBP + 0x14]
0041FAB4  2B D3                     SUB EDX,EBX
0041FAB6  2B F9                     SUB EDI,ECX
0041FAB8  2B F0                     SUB ESI,EAX
0041FABA  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
0041FABD  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
0041FAC0  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
0041FAC3  EB 03                     JMP 0x0041fac8
LAB_0041fac5:
0041FAC5  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
LAB_0041fac8:
0041FAC8  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0041FACB  8B C2                     MOV EAX,EDX
0041FACD  0F AF C1                  IMUL EAX,ECX
0041FAD0  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
0041FAD3  99                        CDQ
0041FAD4  F7 FF                     IDIV EDI
0041FAD6  8B F0                     MOV ESI,EAX
0041FAD8  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
0041FADC  03 F0                     ADD ESI,EAX
0041FADE  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0041FAE1  0F AF C1                  IMUL EAX,ECX
0041FAE4  99                        CDQ
0041FAE5  F7 FF                     IDIV EDI
0041FAE7  89 75 A0                  MOV dword ptr [EBP + -0x60],ESI
0041FAEA  8B D8                     MOV EBX,EAX
0041FAEC  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
0041FAF0  03 D8                     ADD EBX,EAX
0041FAF2  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0041FAF5  0F AF C1                  IMUL EAX,ECX
0041FAF8  99                        CDQ
0041FAF9  F7 FF                     IDIV EDI
0041FAFB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0041FAFE  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0041FB01  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
0041FB04  8B F8                     MOV EDI,EAX
0041FB06  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
0041FB0A  03 F8                     ADD EDI,EAX
0041FB0C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0041FB0F  57                        PUSH EDI
0041FB10  53                        PUSH EBX
0041FB11  56                        PUSH ESI
0041FB12  52                        PUSH EDX
0041FB13  50                        PUSH EAX
0041FB14  51                        PUSH ECX
0041FB15  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
0041FB18  E8 F0 D3 28 00            CALL 0x006acf0d
0041FB1D  8B C8                     MOV ECX,EAX
0041FB1F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0041FB24  F7 E9                     IMUL ECX
0041FB26  C1 FA 04                  SAR EDX,0x4
0041FB29  8B C2                     MOV EAX,EDX
0041FB2B  83 C4 18                  ADD ESP,0x18
0041FB2E  C1 E8 1F                  SHR EAX,0x1f
0041FB31  03 D0                     ADD EDX,EAX
0041FB33  B8 01 00 00 00            MOV EAX,0x1
0041FB38  3B D0                     CMP EDX,EAX
0041FB3A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0041FB3D  7D 03                     JGE 0x0041fb42
0041FB3F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0041fb42:
0041FB42  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
0041FB45  0F 8C 36 05 00 00         JL 0x00420081
0041FB4B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0041FB4E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0041FB51  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0041FB54  2B FA                     SUB EDI,EDX
0041FB56  2B D9                     SUB EBX,ECX
0041FB58  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0041FB5B  2B F0                     SUB ESI,EAX
0041FB5D  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
0041FB60  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0041FB63  89 5D 9C                  MOV dword ptr [EBP + -0x64],EBX
0041FB66  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
0041FB69  89 75 AC                  MOV dword ptr [EBP + -0x54],ESI
0041FB6C  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0041FB6F  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_0041fb72:
0041FB72  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0041FB75  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0041FB78  99                        CDQ
0041FB79  F7 FF                     IDIV EDI
0041FB7B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0041FB7E  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
0041FB81  B8 79 19 8C 02            MOV EAX,0x28c1979
0041FB86  85 C9                     TEST ECX,ECX
0041FB88  7C 10                     JL 0x0041fb9a
0041FB8A  F7 E9                     IMUL ECX
0041FB8C  D1 FA                     SAR EDX,0x1
0041FB8E  8B C2                     MOV EAX,EDX
0041FB90  C1 E8 1F                  SHR EAX,0x1f
0041FB93  03 D0                     ADD EDX,EAX
0041FB95  0F BF F2                  MOVSX ESI,DX
0041FB98  EB 0F                     JMP 0x0041fba9
LAB_0041fb9a:
0041FB9A  F7 E9                     IMUL ECX
0041FB9C  D1 FA                     SAR EDX,0x1
0041FB9E  8B CA                     MOV ECX,EDX
0041FBA0  C1 E9 1F                  SHR ECX,0x1f
0041FBA3  03 D1                     ADD EDX,ECX
0041FBA5  0F BF F2                  MOVSX ESI,DX
0041FBA8  4E                        DEC ESI
LAB_0041fba9:
0041FBA9  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0041FBAC  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0041FBAF  99                        CDQ
0041FBB0  F7 FF                     IDIV EDI
0041FBB2  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0041FBB5  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
0041FBB8  B8 79 19 8C 02            MOV EAX,0x28c1979
0041FBBD  85 C9                     TEST ECX,ECX
0041FBBF  7C 10                     JL 0x0041fbd1
0041FBC1  F7 E9                     IMUL ECX
0041FBC3  D1 FA                     SAR EDX,0x1
0041FBC5  8B C2                     MOV EAX,EDX
0041FBC7  C1 E8 1F                  SHR EAX,0x1f
0041FBCA  03 D0                     ADD EDX,EAX
0041FBCC  0F BF DA                  MOVSX EBX,DX
0041FBCF  EB 0F                     JMP 0x0041fbe0
LAB_0041fbd1:
0041FBD1  F7 E9                     IMUL ECX
0041FBD3  D1 FA                     SAR EDX,0x1
0041FBD5  8B CA                     MOV ECX,EDX
0041FBD7  C1 E9 1F                  SHR ECX,0x1f
0041FBDA  03 D1                     ADD EDX,ECX
0041FBDC  0F BF DA                  MOVSX EBX,DX
0041FBDF  4B                        DEC EBX
LAB_0041fbe0:
0041FBE0  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0041FBE3  99                        CDQ
0041FBE4  F7 FF                     IDIV EDI
0041FBE6  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0041FBE9  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
0041FBEC  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0041FBF1  85 C9                     TEST ECX,ECX
0041FBF3  7C 11                     JL 0x0041fc06
0041FBF5  F7 E9                     IMUL ECX
0041FBF7  C1 FA 06                  SAR EDX,0x6
0041FBFA  8B C2                     MOV EAX,EDX
0041FBFC  C1 E8 1F                  SHR EAX,0x1f
0041FBFF  03 D0                     ADD EDX,EAX
0041FC01  0F BF FA                  MOVSX EDI,DX
0041FC04  EB 10                     JMP 0x0041fc16
LAB_0041fc06:
0041FC06  F7 E9                     IMUL ECX
0041FC08  C1 FA 06                  SAR EDX,0x6
0041FC0B  8B CA                     MOV ECX,EDX
0041FC0D  C1 E9 1F                  SHR ECX,0x1f
0041FC10  03 D1                     ADD EDX,ECX
0041FC12  0F BF FA                  MOVSX EDI,DX
0041FC15  4F                        DEC EDI
LAB_0041fc16:
0041FC16  66 85 F6                  TEST SI,SI
0041FC19  7C 53                     JL 0x0041fc6e
0041FC1B  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
0041FC22  7D 4A                     JGE 0x0041fc6e
0041FC24  66 85 DB                  TEST BX,BX
0041FC27  7C 45                     JL 0x0041fc6e
0041FC29  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
0041FC30  7D 3C                     JGE 0x0041fc6e
0041FC32  66 85 FF                  TEST DI,DI
0041FC35  7C 37                     JL 0x0041fc6e
0041FC37  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
0041FC3E  7D 2E                     JGE 0x0041fc6e
0041FC40  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0041FC47  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0041FC4E  0F BF C7                  MOVSX EAX,DI
0041FC51  0F AF D0                  IMUL EDX,EAX
0041FC54  0F BF C3                  MOVSX EAX,BX
0041FC57  0F AF C8                  IMUL ECX,EAX
0041FC5A  03 D1                     ADD EDX,ECX
0041FC5C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0041FC5F  0F BF C1                  MOVSX EAX,CX
0041FC62  03 D0                     ADD EDX,EAX
0041FC64  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0041FC69  8B 34 D0                  MOV ESI,dword ptr [EAX + EDX*0x8]
0041FC6C  EB 05                     JMP 0x0041fc73
LAB_0041fc6e:
0041FC6E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0041FC71  33 F6                     XOR ESI,ESI
LAB_0041fc73:
0041FC73  85 F6                     TEST ESI,ESI
0041FC75  0F 84 92 01 00 00         JZ 0x0041fe0d
0041FC7B  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041FC7E  83 F8 08                  CMP EAX,0x8
0041FC81  0F 83 86 01 00 00         JNC 0x0041fe0d
0041FC87  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0041FC8D  85 D2                     TEST EDX,EDX
0041FC8F  74 11                     JZ 0x0041fca2
0041FC91  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0041FC94  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0041FC9C  0F 83 6B 01 00 00         JNC 0x0041fe0d
LAB_0041fca2:
0041FCA2  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0041FCA5  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041FCA8  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0041FCAB  3B D0                     CMP EDX,EAX
0041FCAD  0F 84 97 03 00 00         JZ 0x0042004a
0041FCB3  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0041FCB6  85 C0                     TEST EAX,EAX
0041FCB8  74 02                     JZ 0x0041fcbc
0041FCBA  89 30                     MOV dword ptr [EAX],ESI
LAB_0041fcbc:
0041FCBC  F6 86 D1 01 00 00 10      TEST byte ptr [ESI + 0x1d1],0x10
0041FCC3  74 1A                     JZ 0x0041fcdf
0041FCC5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0041FCCA  68 7E 0B 00 00            PUSH 0xb7e
0041FCCF  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041FCD4  50                        PUSH EAX
0041FCD5  68 09 00 FE AF            PUSH 0xaffe0009
0041FCDA  E8 61 61 28 00            CALL 0x006a5e40
LAB_0041fcdf:
0041FCDF  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0041FCE2  85 C0                     TEST EAX,EAX
0041FCE4  0F 85 05 01 00 00         JNZ 0x0041fdef
0041FCEA  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041FCED  83 F8 08                  CMP EAX,0x8
0041FCF0  0F 83 54 03 00 00         JNC 0x0042004a
0041FCF6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0041FCFC  85 C9                     TEST ECX,ECX
0041FCFE  74 11                     JZ 0x0041fd11
0041FD00  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0041FD03  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0041FD0B  0F 83 39 03 00 00         JNC 0x0042004a
LAB_0041fd11:
0041FD11  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0041FD14  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0041FD1A  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0041FD1D  8A 49 24                  MOV CL,byte ptr [ECX + 0x24]
0041FD20  88 45 C4                  MOV byte ptr [EBP + -0x3c],AL
0041FD23  84 D2                     TEST DL,DL
0041FD25  88 4D D0                  MOV byte ptr [EBP + -0x30],CL
0041FD28  74 2D                     JZ 0x0041fd57
0041FD2A  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0041FD2D  25 FF 00 00 00            AND EAX,0xff
0041FD32  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0041FD35  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0041FD38  25 FF 00 00 00            AND EAX,0xff
0041FD3D  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0041FD44  33 C9                     XOR ECX,ECX
0041FD46  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0041FD49  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0041FD50  0F 95 C1                  SETNZ CL
0041FD53  8B C1                     MOV EAX,ECX
0041FD55  EB 7A                     JMP 0x0041fdd1
LAB_0041fd57:
0041FD57  3A C1                     CMP AL,CL
0041FD59  74 6B                     JZ 0x0041fdc6
0041FD5B  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0041FD5E  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0041FD61  25 FF 00 00 00            AND EAX,0xff
0041FD66  81 E1 FF 00 00 00         AND ECX,0xff
0041FD6C  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0041FD73  84 D2                     TEST DL,DL
0041FD75  75 10                     JNZ 0x0041fd87
0041FD77  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0041FD7E  75 07                     JNZ 0x0041fd87
0041FD80  B8 FE FF FF FF            MOV EAX,0xfffffffe
0041FD85  EB 41                     JMP 0x0041fdc8
LAB_0041fd87:
0041FD87  80 FA 01                  CMP DL,0x1
0041FD8A  75 0F                     JNZ 0x0041fd9b
0041FD8C  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0041FD94  75 05                     JNZ 0x0041fd9b
0041FD96  83 C8 FF                  OR EAX,0xffffffff
0041FD99  EB 2D                     JMP 0x0041fdc8
LAB_0041fd9b:
0041FD9B  84 D2                     TEST DL,DL
0041FD9D  75 11                     JNZ 0x0041fdb0
0041FD9F  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0041FDA7  75 07                     JNZ 0x0041fdb0
0041FDA9  B8 01 00 00 00            MOV EAX,0x1
0041FDAE  EB 18                     JMP 0x0041fdc8
LAB_0041fdb0:
0041FDB0  80 FA 01                  CMP DL,0x1
0041FDB3  75 11                     JNZ 0x0041fdc6
0041FDB5  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0041FDBD  75 07                     JNZ 0x0041fdc6
0041FDBF  B8 02 00 00 00            MOV EAX,0x2
0041FDC4  EB 02                     JMP 0x0041fdc8
LAB_0041fdc6:
0041FDC6  33 C0                     XOR EAX,EAX
LAB_0041fdc8:
0041FDC8  33 D2                     XOR EDX,EDX
0041FDCA  85 C0                     TEST EAX,EAX
0041FDCC  0F 9C C2                  SETL DL
0041FDCF  8B C2                     MOV EAX,EDX
LAB_0041fdd1:
0041FDD1  85 C0                     TEST EAX,EAX
0041FDD3  75 1A                     JNZ 0x0041fdef
0041FDD5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0041FDDA  68 81 0B 00 00            PUSH 0xb81
0041FDDF  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041FDE4  50                        PUSH EAX
0041FDE5  68 09 00 FE AF            PUSH 0xaffe0009
0041FDEA  E8 51 60 28 00            CALL 0x006a5e40
LAB_0041fdef:
0041FDEF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0041FDF5  68 83 0B 00 00            PUSH 0xb83
0041FDFA  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041FDFF  51                        PUSH ECX
0041FE00  68 0A 00 FE AF            PUSH 0xaffe000a
0041FE05  E8 36 60 28 00            CALL 0x006a5e40
0041FE0A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0041fe0d:
0041FE0D  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
0041FE14  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0041FE1B  0F AF D7                  IMUL EDX,EDI
0041FE1E  0F AF C3                  IMUL EAX,EBX
0041FE21  8B F1                     MOV ESI,ECX
0041FE23  03 F2                     ADD ESI,EDX
0041FE25  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0041FE2B  03 C6                     ADD EAX,ESI
0041FE2D  66 83 3C 42 00            CMP word ptr [EDX + EAX*0x2],0x0
0041FE32  7D 1D                     JGE 0x0041fe51
0041FE34  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0041FE39  68 85 0B 00 00            PUSH 0xb85
0041FE3E  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041FE43  50                        PUSH EAX
0041FE44  68 09 00 FE AF            PUSH 0xaffe0009
0041FE49  E8 F2 5F 28 00            CALL 0x006a5e40
0041FE4E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0041fe51:
0041FE51  66 85 C9                  TEST CX,CX
0041FE54  7C 4F                     JL 0x0041fea5
0041FE56  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
0041FE5C  66 3B C8                  CMP CX,AX
0041FE5F  7D 44                     JGE 0x0041fea5
0041FE61  66 85 DB                  TEST BX,BX
0041FE64  7C 3F                     JL 0x0041fea5
0041FE66  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
0041FE6D  7D 36                     JGE 0x0041fea5
0041FE6F  66 85 FF                  TEST DI,DI
0041FE72  7C 31                     JL 0x0041fea5
0041FE74  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
0041FE7B  7D 28                     JGE 0x0041fea5
0041FE7D  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0041FE84  0F BF F7                  MOVSX ESI,DI
0041FE87  0F AF D6                  IMUL EDX,ESI
0041FE8A  0F BF C0                  MOVSX EAX,AX
0041FE8D  0F BF F3                  MOVSX ESI,BX
0041FE90  0F AF C6                  IMUL EAX,ESI
0041FE93  0F BF C9                  MOVSX ECX,CX
0041FE96  03 D0                     ADD EDX,EAX
0041FE98  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0041FE9D  03 D1                     ADD EDX,ECX
0041FE9F  8B 74 D0 04               MOV ESI,dword ptr [EAX + EDX*0x8 + 0x4]
0041FEA3  EB 02                     JMP 0x0041fea7
LAB_0041fea5:
0041FEA5  33 F6                     XOR ESI,ESI
LAB_0041fea7:
0041FEA7  85 F6                     TEST ESI,ESI
0041FEA9  0F 84 9B 01 00 00         JZ 0x0042004a
0041FEAF  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041FEB2  83 F8 08                  CMP EAX,0x8
0041FEB5  0F 83 8F 01 00 00         JNC 0x0042004a
0041FEBB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0041FEC1  85 C9                     TEST ECX,ECX
0041FEC3  74 11                     JZ 0x0041fed6
0041FEC5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0041FEC8  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0041FED0  0F 83 74 01 00 00         JNC 0x0042004a
LAB_0041fed6:
0041FED6  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0041FED9  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041FEDC  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0041FEDF  3B D0                     CMP EDX,EAX
0041FEE1  0F 84 63 01 00 00         JZ 0x0042004a
0041FEE7  F6 86 D1 01 00 00 10      TEST byte ptr [ESI + 0x1d1],0x10
0041FEEE  74 23                     JZ 0x0041ff13
0041FEF0  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0041FEF3  85 C0                     TEST EAX,EAX
0041FEF5  74 02                     JZ 0x0041fef9
0041FEF7  89 30                     MOV dword ptr [EAX],ESI
LAB_0041fef9:
0041FEF9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0041FEFE  68 8C 0B 00 00            PUSH 0xb8c
0041FF03  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041FF08  50                        PUSH EAX
0041FF09  68 09 00 FE AF            PUSH 0xaffe0009
0041FF0E  E8 2D 5F 28 00            CALL 0x006a5e40
LAB_0041ff13:
0041FF13  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0041FF16  85 C0                     TEST EAX,EAX
0041FF18  0F 85 11 01 00 00         JNZ 0x0042002f
0041FF1E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041FF21  83 F8 08                  CMP EAX,0x8
0041FF24  0F 83 20 01 00 00         JNC 0x0042004a
0041FF2A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0041FF30  85 C9                     TEST ECX,ECX
0041FF32  74 11                     JZ 0x0041ff45
0041FF34  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0041FF37  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0041FF3F  0F 83 05 01 00 00         JNC 0x0042004a
LAB_0041ff45:
0041FF45  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0041FF48  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0041FF4E  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0041FF51  8A 49 24                  MOV CL,byte ptr [ECX + 0x24]
0041FF54  88 45 CC                  MOV byte ptr [EBP + -0x34],AL
0041FF57  84 D2                     TEST DL,DL
0041FF59  88 4D C8                  MOV byte ptr [EBP + -0x38],CL
0041FF5C  74 2D                     JZ 0x0041ff8b
0041FF5E  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0041FF61  25 FF 00 00 00            AND EAX,0xff
0041FF66  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0041FF69  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0041FF6C  25 FF 00 00 00            AND EAX,0xff
0041FF71  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0041FF78  33 C9                     XOR ECX,ECX
0041FF7A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0041FF7D  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0041FF84  0F 95 C1                  SETNZ CL
0041FF87  8B C1                     MOV EAX,ECX
0041FF89  EB 7D                     JMP 0x00420008
LAB_0041ff8b:
0041FF8B  3A C1                     CMP AL,CL
0041FF8D  74 6E                     JZ 0x0041fffd
0041FF8F  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0041FF92  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0041FF95  25 FF 00 00 00            AND EAX,0xff
0041FF9A  81 E1 FF 00 00 00         AND ECX,0xff
0041FFA0  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0041FFA7  84 D2                     TEST DL,DL
0041FFA9  75 12                     JNZ 0x0041ffbd
0041FFAB  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0041FFB2  84 DB                     TEST BL,BL
0041FFB4  75 07                     JNZ 0x0041ffbd
0041FFB6  B8 FE FF FF FF            MOV EAX,0xfffffffe
0041FFBB  EB 42                     JMP 0x0041ffff
LAB_0041ffbd:
0041FFBD  80 FA 01                  CMP DL,0x1
0041FFC0  75 10                     JNZ 0x0041ffd2
0041FFC2  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0041FFC9  84 DB                     TEST BL,BL
0041FFCB  75 05                     JNZ 0x0041ffd2
0041FFCD  83 C8 FF                  OR EAX,0xffffffff
0041FFD0  EB 2D                     JMP 0x0041ffff
LAB_0041ffd2:
0041FFD2  84 D2                     TEST DL,DL
0041FFD4  75 11                     JNZ 0x0041ffe7
0041FFD6  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0041FFDE  75 07                     JNZ 0x0041ffe7
0041FFE0  B8 01 00 00 00            MOV EAX,0x1
0041FFE5  EB 18                     JMP 0x0041ffff
LAB_0041ffe7:
0041FFE7  80 FA 01                  CMP DL,0x1
0041FFEA  75 11                     JNZ 0x0041fffd
0041FFEC  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0041FFF4  75 07                     JNZ 0x0041fffd
0041FFF6  B8 02 00 00 00            MOV EAX,0x2
0041FFFB  EB 02                     JMP 0x0041ffff
LAB_0041fffd:
0041FFFD  33 C0                     XOR EAX,EAX
LAB_0041ffff:
0041FFFF  33 D2                     XOR EDX,EDX
00420001  85 C0                     TEST EAX,EAX
00420003  0F 9C C2                  SETL DL
00420006  8B C2                     MOV EAX,EDX
LAB_00420008:
00420008  85 C0                     TEST EAX,EAX
0042000A  75 23                     JNZ 0x0042002f
0042000C  81 7E 20 AE 01 00 00      CMP dword ptr [ESI + 0x20],0x1ae
00420013  75 1A                     JNZ 0x0042002f
00420015  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042001A  68 91 0B 00 00            PUSH 0xb91
0042001F  68 0C 4E 7A 00            PUSH 0x7a4e0c
00420024  50                        PUSH EAX
00420025  68 09 00 FE AF            PUSH 0xaffe0009
0042002A  E8 11 5E 28 00            CALL 0x006a5e40
LAB_0042002f:
0042002F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00420035  68 93 0B 00 00            PUSH 0xb93
0042003A  68 0C 4E 7A 00            PUSH 0x7a4e0c
0042003F  51                        PUSH ECX
00420040  68 0A 00 FE AF            PUSH 0xaffe000a
00420045  E8 F6 5D 28 00            CALL 0x006a5e40
LAB_0042004a:
0042004A  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0042004D  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
00420050  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00420053  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
00420056  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00420059  03 FA                     ADD EDI,EDX
0042005B  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0042005E  03 F0                     ADD ESI,EAX
00420060  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00420063  03 D1                     ADD EDX,ECX
00420065  48                        DEC EAX
00420066  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00420069  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
0042006C  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0042006F  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00420072  0F 85 FA FA FF FF         JNZ 0x0041fb72
00420078  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
0042007B  8B 5D A8                  MOV EBX,dword ptr [EBP + -0x58]
0042007E  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
LAB_00420081:
00420081  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00420084  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00420087  40                        INC EAX
00420088  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0042008B  3B C1                     CMP EAX,ECX
0042008D  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00420090  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00420093  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00420096  0F 8E 29 FA FF FF         JLE 0x0041fac5
LAB_0042009c:
0042009C  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
004200A2  B8 01 00 00 00            MOV EAX,0x1
004200A7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004200AD  5F                        POP EDI
004200AE  5E                        POP ESI
004200AF  5B                        POP EBX
004200B0  8B E5                     MOV ESP,EBP
004200B2  5D                        POP EBP
004200B3  C2 24 00                  RET 0x24
LAB_004200b6:
004200B6  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
004200BC  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004200C2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004200C7  74 4C                     JZ 0x00420115
004200C9  81 FE 0A 00 FE AF         CMP ESI,0xaffe000a
004200CF  75 0E                     JNZ 0x004200df
004200D1  B8 01 00 00 00            MOV EAX,0x1
004200D6  5F                        POP EDI
004200D7  5E                        POP ESI
004200D8  5B                        POP EBX
004200D9  8B E5                     MOV ESP,EBP
004200DB  5D                        POP EBP
004200DC  C2 24 00                  RET 0x24
LAB_004200df:
004200DF  68 54 4F 7A 00            PUSH 0x7a4f54
004200E4  68 CC 4C 7A 00            PUSH 0x7a4ccc
004200E9  56                        PUSH ESI
004200EA  6A 00                     PUSH 0x0
004200EC  68 9B 0B 00 00            PUSH 0xb9b
004200F1  68 0C 4E 7A 00            PUSH 0x7a4e0c
004200F6  E8 D5 D3 28 00            CALL 0x006ad4d0
004200FB  83 C4 18                  ADD ESP,0x18
004200FE  85 C0                     TEST EAX,EAX
00420100  74 01                     JZ 0x00420103
00420102  CC                        INT3
LAB_00420103:
00420103  68 9C 0B 00 00            PUSH 0xb9c
00420108  68 0C 4E 7A 00            PUSH 0x7a4e0c
0042010D  6A 00                     PUSH 0x0
0042010F  56                        PUSH ESI
00420110  E8 2B 5D 28 00            CALL 0x006a5e40
LAB_00420115:
00420115  5F                        POP EDI
00420116  5E                        POP ESI
00420117  33 C0                     XOR EAX,EAX
00420119  5B                        POP EBX
0042011A  8B E5                     MOV ESP,EBP
0042011C  5D                        POP EBP
0042011D  C2 24 00                  RET 0x24
