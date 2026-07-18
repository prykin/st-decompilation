FUN_00716850:
00716850  55                        PUSH EBP
00716851  8B EC                     MOV EBP,ESP
00716853  83 EC 64                  SUB ESP,0x64
00716856  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071685B  53                        PUSH EBX
0071685C  56                        PUSH ESI
0071685D  33 F6                     XOR ESI,ESI
0071685F  57                        PUSH EDI
00716860  8D 55 A0                  LEA EDX,[EBP + -0x60]
00716863  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00716866  56                        PUSH ESI
00716867  52                        PUSH EDX
00716868  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0071686B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0071686E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00716871  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00716874  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071687A  E8 71 6F 01 00            CALL 0x0072d7f0
0071687F  8B F8                     MOV EDI,EAX
00716881  83 C4 08                  ADD ESP,0x8
00716884  3B FE                     CMP EDI,ESI
00716886  0F 85 A7 04 00 00         JNZ 0x00716d33
0071688C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0071688F  3B FE                     CMP EDI,ESI
00716891  75 14                     JNZ 0x007168a7
00716893  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00716898  6A 31                     PUSH 0x31
0071689A  68 04 05 7F 00            PUSH 0x7f0504
0071689F  50                        PUSH EAX
007168A0  6A CC                     PUSH -0x34
007168A2  E8 99 F5 F8 FF            CALL 0x006a5e40
LAB_007168a7:
007168A7  80 7D 10 1D               CMP byte ptr [EBP + 0x10],0x1d
007168AB  0F 85 64 02 00 00         JNZ 0x00716b15
007168B1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007168B4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007168B7  53                        PUSH EBX
007168B8  56                        PUSH ESI
007168B9  51                        PUSH ECX
007168BA  6A 1D                     PUSH 0x1d
007168BC  8B CF                     MOV ECX,EDI
007168BE  E8 1D B4 FD FF            CALL 0x006f1ce0
007168C3  3B C6                     CMP EAX,ESI
007168C5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007168C8  75 18                     JNZ 0x007168e2
007168CA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
007168D0  6A 34                     PUSH 0x34
007168D2  68 04 05 7F 00            PUSH 0x7f0504
007168D7  52                        PUSH EDX
007168D8  6A FC                     PUSH -0x4
007168DA  E8 61 F5 F8 FF            CALL 0x006a5e40
007168DF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_007168e2:
007168E2  8D 4D E0                  LEA ECX,[EBP + -0x20]
007168E5  53                        PUSH EBX
007168E6  51                        PUSH ECX
007168E7  50                        PUSH EAX
007168E8  6A 06                     PUSH 0x6
007168EA  8B CF                     MOV ECX,EDI
007168EC  E8 1F BA FD FF            CALL 0x006f2310
007168F1  85 C0                     TEST EAX,EAX
007168F3  75 15                     JNZ 0x0071690a
007168F5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
007168FB  6A 36                     PUSH 0x36
007168FD  68 04 05 7F 00            PUSH 0x7f0504
00716902  52                        PUSH EDX
00716903  6A FC                     PUSH -0x4
00716905  E8 36 F5 F8 FF            CALL 0x006a5e40
LAB_0071690a:
0071690A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0071690D  8D 45 E0                  LEA EAX,[EBP + -0x20]
00716910  0F BF 75 EA               MOVSX ESI,word ptr [EBP + -0x16]
00716914  6A 01                     PUSH 0x1
00716916  50                        PUSH EAX
00716917  51                        PUSH ECX
00716918  6A 1D                     PUSH 0x1d
0071691A  8B CF                     MOV ECX,EDI
0071691C  E8 EF B9 FD FF            CALL 0x006f2310
00716921  8D 14 B5 35 00 00 00      LEA EDX,[ESI*0x4 + 0x35]
00716928  52                        PUSH EDX
00716929  E8 E2 42 F9 FF            CALL 0x006aac10
0071692E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00716931  89 30                     MOV dword ptr [EAX],ESI
00716933  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716936  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
00716939  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071693C  C6 41 08 1D               MOV byte ptr [ECX + 0x8],0x1d
00716940  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00716943  8B 02                     MOV EAX,dword ptr [EDX]
00716945  C1 E0 02                  SHL EAX,0x2
00716948  50                        PUSH EAX
00716949  E8 C2 42 F9 FF            CALL 0x006aac10
0071694E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716951  89 41 21                  MOV dword ptr [ECX + 0x21],EAX
00716954  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00716957  8B 02                     MOV EAX,dword ptr [EDX]
00716959  C1 E0 02                  SHL EAX,0x2
0071695C  50                        PUSH EAX
0071695D  E8 AE 42 F9 FF            CALL 0x006aac10
00716962  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716965  53                        PUSH EBX
00716966  89 41 29                  MOV dword ptr [ECX + 0x29],EAX
00716969  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0071696C  52                        PUSH EDX
0071696D  6A 06                     PUSH 0x6
0071696F  57                        PUSH EDI
00716970  E8 7B 3D FF FF            CALL 0x0070a6f0
00716975  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716978  53                        PUSH EBX
00716979  89 41 09                  MOV dword ptr [ECX + 0x9],EAX
0071697C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0071697F  52                        PUSH EDX
00716980  6A 06                     PUSH 0x6
00716982  57                        PUSH EDI
00716983  E8 28 3E FF FF            CALL 0x0070a7b0
00716988  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071698B  6A 01                     PUSH 0x1
0071698D  89 41 0D                  MOV dword ptr [ECX + 0xd],EAX
00716990  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716993  0F BF 55 E4               MOVSX EDX,word ptr [EBP + -0x1c]
00716997  89 50 1D                  MOV dword ptr [EAX + 0x1d],EDX
0071699A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071699D  8B 55 E6                  MOV EDX,dword ptr [EBP + -0x1a]
007169A0  89 51 19                  MOV dword ptr [ECX + 0x19],EDX
007169A3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007169A6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007169A9  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
007169AC  89 4A 11                  MOV dword ptr [EDX + 0x11],ECX
007169AF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007169B2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007169B5  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
007169B8  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007169BB  89 4A 15                  MOV dword ptr [EDX + 0x15],ECX
007169BE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007169C1  50                        PUSH EAX
007169C2  51                        PUSH ECX
007169C3  57                        PUSH EDI
007169C4  E8 87 40 FF FF            CALL 0x0070aa50
007169C9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007169CC  83 C4 30                  ADD ESP,0x30
007169CF  8B 4A 21                  MOV ECX,dword ptr [EDX + 0x21]
007169D2  BA 01 00 00 00            MOV EDX,0x1
007169D7  89 01                     MOV dword ptr [ECX],EAX
007169D9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007169DC  8B 48 21                  MOV ECX,dword ptr [EAX + 0x21]
007169DF  39 10                     CMP dword ptr [EAX],EDX
007169E1  8B 31                     MOV ESI,dword ptr [ECX]
007169E3  7E 16                     JLE 0x007169fb
LAB_007169e5:
007169E5  8B 06                     MOV EAX,dword ptr [ESI]
007169E7  03 C6                     ADD EAX,ESI
007169E9  89 04 91                  MOV dword ptr [ECX + EDX*0x4],EAX
007169EC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007169EF  42                        INC EDX
007169F0  8B 48 21                  MOV ECX,dword ptr [EAX + 0x21]
007169F3  3B 10                     CMP EDX,dword ptr [EAX]
007169F5  8B 74 91 FC               MOV ESI,dword ptr [ECX + EDX*0x4 + -0x4]
007169F9  7C EA                     JL 0x007169e5
LAB_007169fb:
007169FB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007169FE  80 79 20 00               CMP byte ptr [ECX + 0x20],0x0
00716A02  8D 51 20                  LEA EDX,[ECX + 0x20]
00716A05  74 7A                     JZ 0x00716a81
00716A07  8D 4D E0                  LEA ECX,[EBP + -0x20]
00716A0A  53                        PUSH EBX
00716A0B  51                        PUSH ECX
00716A0C  52                        PUSH EDX
00716A0D  6A 16                     PUSH 0x16
00716A0F  8B CF                     MOV ECX,EDI
00716A11  E8 FA B8 FD FF            CALL 0x006f2310
00716A16  85 C0                     TEST EAX,EAX
00716A18  75 15                     JNZ 0x00716a2f
00716A1A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00716A20  6A 52                     PUSH 0x52
00716A22  68 04 05 7F 00            PUSH 0x7f0504
00716A27  52                        PUSH EDX
00716A28  6A FC                     PUSH -0x4
00716A2A  E8 11 F4 F8 FF            CALL 0x006a5e40
LAB_00716a2f:
00716A2F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00716A32  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00716A35  6A 01                     PUSH 0x1
00716A37  83 C1 20                  ADD ECX,0x20
00716A3A  50                        PUSH EAX
00716A3B  51                        PUSH ECX
00716A3C  57                        PUSH EDI
00716A3D  E8 4E 40 FF FF            CALL 0x0070aa90
00716A42  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00716A45  33 C9                     XOR ECX,ECX
00716A47  83 C4 10                  ADD ESP,0x10
00716A4A  89 42 25                  MOV dword ptr [EDX + 0x25],EAX
00716A4D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716A50  66 39 4D EA               CMP word ptr [EBP + -0x16],CX
00716A54  8B 50 25                  MOV EDX,dword ptr [EAX + 0x25]
00716A57  7E 25                     JLE 0x00716a7e
LAB_00716a59:
00716A59  3B 08                     CMP ECX,dword ptr [EAX]
00716A5B  7D 18                     JGE 0x00716a75
00716A5D  8B 40 29                  MOV EAX,dword ptr [EAX + 0x29]
00716A60  8D 72 04                  LEA ESI,[EDX + 0x4]
00716A63  89 34 88                  MOV dword ptr [EAX + ECX*0x4],ESI
00716A66  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716A69  8B 1A                     MOV EBX,dword ptr [EDX]
00716A6B  8B 70 29                  MOV ESI,dword ptr [EAX + 0x29]
00716A6E  8B 34 8E                  MOV ESI,dword ptr [ESI + ECX*0x4]
00716A71  03 F3                     ADD ESI,EBX
00716A73  8B D6                     MOV EDX,ESI
LAB_00716a75:
00716A75  0F BF 75 EA               MOVSX ESI,word ptr [EBP + -0x16]
00716A79  41                        INC ECX
00716A7A  3B CE                     CMP ECX,ESI
00716A7C  7C DB                     JL 0x00716a59
LAB_00716a7e:
00716A7E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_00716a81:
00716A81  8B 30                     MOV ESI,dword ptr [EAX]
00716A83  33 D2                     XOR EDX,EDX
00716A85  85 F6                     TEST ESI,ESI
00716A87  7E 14                     JLE 0x00716a9d
LAB_00716a89:
00716A89  8B 49 48                  MOV ECX,dword ptr [ECX + 0x48]
00716A8C  89 4C 90 31               MOV dword ptr [EAX + EDX*0x4 + 0x31],ECX
00716A90  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716A93  42                        INC EDX
00716A94  8B 08                     MOV ECX,dword ptr [EAX]
00716A96  3B D1                     CMP EDX,ECX
00716A98  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00716A9B  7C EC                     JL 0x00716a89
LAB_00716a9d:
00716A9D  8B 51 4C                  MOV EDX,dword ptr [ECX + 0x4c]
00716AA0  33 DB                     XOR EBX,EBX
00716AA2  85 D2                     TEST EDX,EDX
00716AA4  0F 8E 35 02 00 00         JLE 0x00716cdf
00716AAA  33 F6                     XOR ESI,ESI
LAB_00716aac:
00716AAC  8B 54 0E 50               MOV EDX,dword ptr [ESI + ECX*0x1 + 0x50]
00716AB0  85 D2                     TEST EDX,EDX
00716AB2  7C 51                     JL 0x00716b05
00716AB4  3B 10                     CMP EDX,dword ptr [EAX]
00716AB6  7D 4D                     JGE 0x00716b05
00716AB8  8B 4C 0E 58               MOV ECX,dword ptr [ESI + ECX*0x1 + 0x58]
00716ABC  89 4C 90 31               MOV dword ptr [EAX + EDX*0x4 + 0x31],ECX
00716AC0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00716AC3  8A 41 20                  MOV AL,byte ptr [ECX + 0x20]
00716AC6  84 C0                     TEST AL,AL
00716AC8  74 38                     JZ 0x00716b02
00716ACA  8B 44 0E 54               MOV EAX,dword ptr [ESI + ECX*0x1 + 0x54]
00716ACE  8B 54 0E 50               MOV EDX,dword ptr [ESI + ECX*0x1 + 0x50]
00716AD2  3B D0                     CMP EDX,EAX
00716AD4  74 2C                     JZ 0x00716b02
00716AD6  0F BF 55 EA               MOVSX EDX,word ptr [EBP + -0x16]
00716ADA  50                        PUSH EAX
00716ADB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716ADE  52                        PUSH EDX
00716ADF  8B 48 25                  MOV ECX,dword ptr [EAX + 0x25]
00716AE2  51                        PUSH ECX
00716AE3  E8 38 FD FF FF            CALL 0x00716820
00716AE8  83 C4 0C                  ADD ESP,0xc
00716AEB  85 C0                     TEST EAX,EAX
00716AED  74 10                     JZ 0x00716aff
00716AEF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00716AF2  8B 4C 16 50               MOV ECX,dword ptr [ESI + EDX*0x1 + 0x50]
00716AF6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00716AF9  8B 52 29                  MOV EDX,dword ptr [EDX + 0x29]
00716AFC  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
LAB_00716aff:
00716AFF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_00716b02:
00716B02  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00716b05:
00716B05  8B 51 4C                  MOV EDX,dword ptr [ECX + 0x4c]
00716B08  43                        INC EBX
00716B09  83 C6 0C                  ADD ESI,0xc
00716B0C  3B DA                     CMP EBX,EDX
00716B0E  7C 9C                     JL 0x00716aac
00716B10  E9 CA 01 00 00            JMP 0x00716cdf
LAB_00716b15:
00716B15  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00716B18  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00716B1B  50                        PUSH EAX
00716B1C  56                        PUSH ESI
00716B1D  53                        PUSH EBX
00716B1E  6A 13                     PUSH 0x13
00716B20  8B CF                     MOV ECX,EDI
00716B22  E8 B9 B1 FD FF            CALL 0x006f1ce0
00716B27  3B C6                     CMP EAX,ESI
00716B29  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00716B2C  75 15                     JNZ 0x00716b43
00716B2E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00716B34  6A 6D                     PUSH 0x6d
00716B36  68 04 05 7F 00            PUSH 0x7f0504
00716B3B  51                        PUSH ECX
00716B3C  6A FC                     PUSH -0x4
00716B3E  E8 FD F2 F8 FF            CALL 0x006a5e40
LAB_00716b43:
00716B43  8D 55 E0                  LEA EDX,[EBP + -0x20]
00716B46  6A 01                     PUSH 0x1
00716B48  52                        PUSH EDX
00716B49  53                        PUSH EBX
00716B4A  6A 13                     PUSH 0x13
00716B4C  8B CF                     MOV ECX,EDI
00716B4E  E8 BD B7 FD FF            CALL 0x006f2310
00716B53  0F BF 45 E0               MOVSX EAX,word ptr [EBP + -0x20]
00716B57  8D 04 85 35 00 00 00      LEA EAX,[EAX*0x4 + 0x35]
00716B5E  50                        PUSH EAX
00716B5F  E8 AC 40 F9 FF            CALL 0x006aac10
00716B64  0F BF 4D E0               MOVSX ECX,word ptr [EBP + -0x20]
00716B68  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00716B6B  89 08                     MOV dword ptr [EAX],ECX
00716B6D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00716B70  89 7A 04                  MOV dword ptr [EDX + 0x4],EDI
00716B73  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716B76  C6 40 08 13               MOV byte ptr [EAX + 0x8],0x13
00716B7A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716B7D  8B 11                     MOV EDX,dword ptr [ECX]
00716B7F  C1 E2 02                  SHL EDX,0x2
00716B82  52                        PUSH EDX
00716B83  E8 88 40 F9 FF            CALL 0x006aac10
00716B88  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716B8B  89 41 21                  MOV dword ptr [ECX + 0x21],EAX
00716B8E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00716B91  8B 02                     MOV EAX,dword ptr [EDX]
00716B93  C1 E0 02                  SHL EAX,0x2
00716B96  50                        PUSH EAX
00716B97  E8 74 40 F9 FF            CALL 0x006aac10
00716B9C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716B9F  89 41 29                  MOV dword ptr [ECX + 0x29],EAX
00716BA2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716BA5  0F BF 55 E6               MOVSX EDX,word ptr [EBP + -0x1a]
00716BA9  89 50 1D                  MOV dword ptr [EAX + 0x1d],EDX
00716BAC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716BAF  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00716BB2  89 51 19                  MOV dword ptr [ECX + 0x19],EDX
00716BB5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716BB8  8B 01                     MOV EAX,dword ptr [ECX]
00716BBA  8B D0                     MOV EDX,EAX
00716BBC  C1 E2 04                  SHL EDX,0x4
00716BBF  03 D0                     ADD EDX,EAX
00716BC1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00716BC4  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
00716BC7  8B 00                     MOV EAX,dword ptr [EAX]
00716BC9  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00716BCC  25 FF FF 00 00            AND EAX,0xffff
00716BD1  89 41 11                  MOV dword ptr [ECX + 0x11],EAX
00716BD4  8B 4D EE                  MOV ECX,dword ptr [EBP + -0x12]
00716BD7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00716BDA  81 E1 FF FF 00 00         AND ECX,0xffff
00716BE0  89 4A 15                  MOV dword ptr [EDX + 0x15],ECX
00716BE3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716BE6  83 38 00                  CMP dword ptr [EAX],0x0
00716BE9  0F 8E C1 00 00 00         JLE 0x00716cb0
00716BEF  33 DB                     XOR EBX,EBX
LAB_00716bf1:
00716BF1  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00716BF4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00716BF7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00716BFA  51                        PUSH ECX
00716BFB  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
00716BFE  52                        PUSH EDX
00716BFF  51                        PUSH ECX
00716C00  57                        PUSH EDI
00716C01  E8 4A 3E FF FF            CALL 0x0070aa50
00716C06  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00716C09  83 C4 10                  ADD ESP,0x10
00716C0C  8B 4A 21                  MOV ECX,dword ptr [EDX + 0x21]
00716C0F  89 04 B1                  MOV dword ptr [ECX + ESI*0x4],EAX
00716C12  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00716C15  8B 42 21                  MOV EAX,dword ptr [EDX + 0x21]
00716C18  83 3C B0 00               CMP dword ptr [EAX + ESI*0x4],0x0
00716C1C  75 18                     JNZ 0x00716c36
00716C1E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00716C24  68 82 00 00 00            PUSH 0x82
00716C29  68 04 05 7F 00            PUSH 0x7f0504
00716C2E  51                        PUSH ECX
00716C2F  6A FC                     PUSH -0x4
00716C31  E8 0A F2 F8 FF            CALL 0x006a5e40
LAB_00716c36:
00716C36  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00716C39  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716C3C  8B 44 13 20               MOV EAX,dword ptr [EBX + EDX*0x1 + 0x20]
00716C40  89 44 B1 31               MOV dword ptr [ECX + ESI*0x4 + 0x31],EAX
00716C44  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00716C47  8A 4C 13 24               MOV CL,byte ptr [EBX + EDX*0x1 + 0x24]
00716C4B  8D 44 13 24               LEA EAX,[EBX + EDX*0x1 + 0x24]
00716C4F  84 C9                     TEST CL,CL
00716C51  74 41                     JZ 0x00716c94
00716C53  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00716C56  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00716C59  51                        PUSH ECX
00716C5A  52                        PUSH EDX
00716C5B  50                        PUSH EAX
00716C5C  57                        PUSH EDI
00716C5D  E8 2E 3E FF FF            CALL 0x0070aa90
00716C62  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716C65  83 C4 10                  ADD ESP,0x10
00716C68  8B 51 29                  MOV EDX,dword ptr [ECX + 0x29]
00716C6B  89 04 B2                  MOV dword ptr [EDX + ESI*0x4],EAX
00716C6E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716C71  8B 48 29                  MOV ECX,dword ptr [EAX + 0x29]
00716C74  83 3C B1 00               CMP dword ptr [ECX + ESI*0x4],0x0
00716C78  75 27                     JNZ 0x00716ca1
00716C7A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00716C80  68 86 00 00 00            PUSH 0x86
00716C85  68 04 05 7F 00            PUSH 0x7f0504
00716C8A  52                        PUSH EDX
00716C8B  6A FC                     PUSH -0x4
00716C8D  E8 AE F1 F8 FF            CALL 0x006a5e40
00716C92  EB 0D                     JMP 0x00716ca1
LAB_00716c94:
00716C94  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716C97  8B 48 29                  MOV ECX,dword ptr [EAX + 0x29]
00716C9A  C7 04 B1 00 00 00 00      MOV dword ptr [ECX + ESI*0x4],0x0
LAB_00716ca1:
00716CA1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00716CA4  46                        INC ESI
00716CA5  83 C3 44                  ADD EBX,0x44
00716CA8  3B 32                     CMP ESI,dword ptr [EDX]
00716CAA  0F 8C 41 FF FF FF         JL 0x00716bf1
LAB_00716cb0:
00716CB0  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00716CB3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00716CB6  56                        PUSH ESI
00716CB7  50                        PUSH EAX
00716CB8  6A 06                     PUSH 0x6
00716CBA  57                        PUSH EDI
00716CBB  E8 30 3A FF FF            CALL 0x0070a6f0
00716CC0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716CC3  56                        PUSH ESI
00716CC4  89 41 09                  MOV dword ptr [ECX + 0x9],EAX
00716CC7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00716CCA  52                        PUSH EDX
00716CCB  6A 06                     PUSH 0x6
00716CCD  57                        PUSH EDI
00716CCE  E8 DD 3A FF FF            CALL 0x0070a7b0
00716CD3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00716CD6  83 C4 20                  ADD ESP,0x20
00716CD9  89 41 0D                  MOV dword ptr [ECX + 0xd],EAX
00716CDC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00716cdf:
00716CDF  8B 10                     MOV EDX,dword ptr [EAX]
00716CE1  33 F6                     XOR ESI,ESI
00716CE3  85 D2                     TEST EDX,EDX
00716CE5  7E 0F                     JLE 0x00716cf6
00716CE7  8B 48 29                  MOV ECX,dword ptr [EAX + 0x29]
LAB_00716cea:
00716CEA  83 39 00                  CMP dword ptr [ECX],0x0
00716CED  74 01                     JZ 0x00716cf0
00716CEF  46                        INC ESI
LAB_00716cf0:
00716CF0  83 C1 04                  ADD ECX,0x4
00716CF3  4A                        DEC EDX
00716CF4  75 F4                     JNZ 0x00716cea
LAB_00716cf6:
00716CF6  85 F6                     TEST ESI,ESI
00716CF8  75 10                     JNZ 0x00716d0a
00716CFA  8B 48 29                  MOV ECX,dword ptr [EAX + 0x29]
00716CFD  83 C0 29                  ADD EAX,0x29
00716D00  85 C9                     TEST ECX,ECX
00716D02  74 06                     JZ 0x00716d0a
00716D04  50                        PUSH EAX
00716D05  E8 56 43 F9 FF            CALL 0x006ab060
LAB_00716d0a:
00716D0A  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00716D0D  8D 45 F4                  LEA EAX,[EBP + -0xc]
00716D10  50                        PUSH EAX
00716D11  8B CF                     MOV ECX,EDI
00716D13  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00716D19  E8 C2 B3 FD FF            CALL 0x006f20e0
00716D1E  8D 4D F8                  LEA ECX,[EBP + -0x8]
00716D21  51                        PUSH ECX
00716D22  8B CF                     MOV ECX,EDI
00716D24  E8 B7 B3 FD FF            CALL 0x006f20e0
00716D29  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716D2C  5F                        POP EDI
00716D2D  5E                        POP ESI
00716D2E  5B                        POP EBX
00716D2F  8B E5                     MOV ESP,EBP
00716D31  5D                        POP EBP
00716D32  C3                        RET
LAB_00716d33:
00716D33  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00716D36  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00716D39  8D 45 F4                  LEA EAX,[EBP + -0xc]
00716D3C  8B CB                     MOV ECX,EBX
00716D3E  50                        PUSH EAX
00716D3F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00716D45  E8 96 B3 FD FF            CALL 0x006f20e0
00716D4A  8D 4D F8                  LEA ECX,[EBP + -0x8]
00716D4D  51                        PUSH ECX
00716D4E  8B CB                     MOV ECX,EBX
00716D50  E8 8B B3 FD FF            CALL 0x006f20e0
00716D55  8D 55 FC                  LEA EDX,[EBP + -0x4]
00716D58  52                        PUSH EDX
00716D59  E8 52 00 00 00            CALL 0x00716db0
00716D5E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00716D61  83 C4 04                  ADD ESP,0x4
00716D64  3B C6                     CMP EAX,ESI
00716D66  75 05                     JNZ 0x00716d6d
00716D68  83 FF FC                  CMP EDI,-0x4
00716D6B  74 34                     JZ 0x00716da1
LAB_00716d6d:
00716D6D  68 F8 04 7F 00            PUSH 0x7f04f8
00716D72  68 CC 4C 7A 00            PUSH 0x7a4ccc
00716D77  57                        PUSH EDI
00716D78  56                        PUSH ESI
00716D79  68 9A 00 00 00            PUSH 0x9a
00716D7E  68 04 05 7F 00            PUSH 0x7f0504
00716D83  E8 48 67 F9 FF            CALL 0x006ad4d0
00716D88  83 C4 18                  ADD ESP,0x18
00716D8B  85 C0                     TEST EAX,EAX
00716D8D  74 01                     JZ 0x00716d90
00716D8F  CC                        INT3
LAB_00716d90:
00716D90  68 9C 00 00 00            PUSH 0x9c
00716D95  68 04 05 7F 00            PUSH 0x7f0504
00716D9A  56                        PUSH ESI
00716D9B  57                        PUSH EDI
00716D9C  E8 9F F0 F8 FF            CALL 0x006a5e40
LAB_00716da1:
00716DA1  5F                        POP EDI
00716DA2  5E                        POP ESI
00716DA3  33 C0                     XOR EAX,EAX
00716DA5  5B                        POP EBX
00716DA6  8B E5                     MOV ESP,EBP
00716DA8  5D                        POP EBP
00716DA9  C3                        RET
