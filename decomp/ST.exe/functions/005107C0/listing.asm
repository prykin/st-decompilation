FrmPanelTy::GetMessage:
005107C0  55                        PUSH EBP
005107C1  8B EC                     MOV EBP,ESP
005107C3  83 EC 5C                  SUB ESP,0x5c
005107C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005107CB  53                        PUSH EBX
005107CC  56                        PUSH ESI
005107CD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005107D0  57                        PUSH EDI
005107D1  8D 55 A8                  LEA EDX,[EBP + -0x58]
005107D4  8D 4D A4                  LEA ECX,[EBP + -0x5c]
005107D7  6A 00                     PUSH 0x0
005107D9  52                        PUSH EDX
005107DA  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
005107DD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005107E3  E8 08 D0 21 00            CALL 0x0072d7f0
005107E8  8B F0                     MOV ESI,EAX
005107EA  83 C4 08                  ADD ESP,0x8
005107ED  85 F6                     TEST ESI,ESI
005107EF  0F 85 8E 02 00 00         JNZ 0x00510a83
005107F5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005107F8  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005107FB  57                        PUSH EDI
005107FC  8B CE                     MOV ECX,ESI
005107FE  E8 FE 0B EF FF            CALL 0x00401401
00510803  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00510806  3D A5 C0 00 00            CMP EAX,0xc0a5
0051080B  0F 87 76 01 00 00         JA 0x00510987
00510811  3D 9F C0 00 00            CMP EAX,0xc09f
00510816  0F 83 0A 01 00 00         JNC 0x00510926
0051081C  3D 0B B1 00 00            CMP EAX,0xb10b
00510821  0F 87 9F 00 00 00         JA 0x005108c6
00510827  0F 84 85 00 00 00         JZ 0x005108b2
0051082D  3D 08 B1 00 00            CMP EAX,0xb108
00510832  77 46                     JA 0x0051087a
00510834  0F 84 6B 01 00 00         JZ 0x005109a5
0051083A  83 E8 02                  SUB EAX,0x2
0051083D  74 21                     JZ 0x00510860
0051083F  48                        DEC EAX
00510840  0F 85 2A 02 00 00         JNZ 0x00510a70
00510846  8B CE                     MOV ECX,ESI
00510848  E8 06 23 EF FF            CALL 0x00402b53
0051084D  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00510850  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00510855  33 C0                     XOR EAX,EAX
00510857  5F                        POP EDI
00510858  5E                        POP ESI
00510859  5B                        POP EBX
0051085A  8B E5                     MOV ESP,EBP
0051085C  5D                        POP EBP
0051085D  C2 04 00                  RET 0x4
LAB_00510860:
00510860  8B CE                     MOV ECX,ESI
00510862  E8 1D 3D EF FF            CALL 0x00404584
00510867  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0051086A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051086F  33 C0                     XOR EAX,EAX
00510871  5F                        POP EDI
00510872  5E                        POP ESI
00510873  5B                        POP EBX
00510874  8B E5                     MOV ESP,EBP
00510876  5D                        POP EBP
00510877  C2 04 00                  RET 0x4
LAB_0051087a:
0051087A  8B C8                     MOV ECX,EAX
0051087C  81 E9 09 B1 00 00         SUB ECX,0xb109
00510882  74 1A                     JZ 0x0051089e
00510884  49                        DEC ECX
00510885  0F 84 1A 01 00 00         JZ 0x005109a5
0051088B  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0051088E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00510893  33 C0                     XOR EAX,EAX
00510895  5F                        POP EDI
00510896  5E                        POP ESI
00510897  5B                        POP EBX
00510898  8B E5                     MOV ESP,EBP
0051089A  5D                        POP EBP
0051089B  C2 04 00                  RET 0x4
LAB_0051089e:
0051089E  8B 1E                     MOV EBX,dword ptr [ESI]
005108A0  6A 01                     PUSH 0x1
005108A2  6A 00                     PUSH 0x0
005108A4  68 FD 30 40 00            PUSH 0x4030fd
005108A9  6A 00                     PUSH 0x0
005108AB  68 D0 29 7C 00            PUSH 0x7c29d0
005108B0  EB 50                     JMP 0x00510902
LAB_005108b2:
005108B2  8B 1E                     MOV EBX,dword ptr [ESI]
005108B4  6A 01                     PUSH 0x1
005108B6  6A 00                     PUSH 0x0
005108B8  68 FD 30 40 00            PUSH 0x4030fd
005108BD  6A 00                     PUSH 0x0
005108BF  68 B8 29 7C 00            PUSH 0x7c29b8
005108C4  EB 3C                     JMP 0x00510902
LAB_005108c6:
005108C6  8D 88 F4 4E FF FF         LEA ECX,[EAX + 0xffff4ef4]
005108CC  83 F9 03                  CMP ECX,0x3
005108CF  0F 87 9B 01 00 00         JA 0x00510a70
switchD_005108d5::switchD:
005108D5  FF 24 8D D0 0A 51 00      JMP dword ptr [ECX*0x4 + 0x510ad0]
switchD_005108d5::caseD_b10d:
005108DC  8B 1E                     MOV EBX,dword ptr [ESI]
005108DE  6A 01                     PUSH 0x1
005108E0  6A 00                     PUSH 0x0
005108E2  68 FD 30 40 00            PUSH 0x4030fd
005108E7  6A 00                     PUSH 0x0
005108E9  68 AC 29 7C 00            PUSH 0x7c29ac
005108EE  EB 12                     JMP 0x00510902
switchD_005108d5::caseD_b10f:
005108F0  8B 1E                     MOV EBX,dword ptr [ESI]
005108F2  6A 01                     PUSH 0x1
005108F4  6A 00                     PUSH 0x0
005108F6  68 FD 30 40 00            PUSH 0x4030fd
005108FB  6A 00                     PUSH 0x0
005108FD  68 A0 29 7C 00            PUSH 0x7c29a0
LAB_00510902:
00510902  E8 75 4E EF FF            CALL 0x0040577c
00510907  83 C4 08                  ADD ESP,0x8
0051090A  8B CE                     MOV ECX,ESI
0051090C  50                        PUSH EAX
0051090D  6A 06                     PUSH 0x6
0051090F  57                        PUSH EDI
00510910  FF 53 08                  CALL dword ptr [EBX + 0x8]
00510913  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00510916  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051091B  33 C0                     XOR EAX,EAX
0051091D  5F                        POP EDI
0051091E  5E                        POP ESI
0051091F  5B                        POP EBX
00510920  8B E5                     MOV ESP,EBP
00510922  5D                        POP EBP
00510923  C2 04 00                  RET 0x4
LAB_00510926:
00510926  05 61 3F FF FF            ADD EAX,0xffff3f61
0051092B  83 F8 06                  CMP EAX,0x6
0051092E  77 2E                     JA 0x0051095e
switchD_00510930::switchD:
00510930  FF 24 85 E0 0A 51 00      JMP dword ptr [EAX*0x4 + 0x510ae0]
switchD_00510930::caseD_c09f:
00510937  6A 01                     PUSH 0x1
00510939  EB 16                     JMP 0x00510951
switchD_00510930::caseD_c0a0:
0051093B  6A 03                     PUSH 0x3
0051093D  EB 12                     JMP 0x00510951
switchD_00510930::caseD_c0a1:
0051093F  6A 06                     PUSH 0x6
00510941  EB 0E                     JMP 0x00510951
switchD_00510930::caseD_c0a2:
00510943  6A 07                     PUSH 0x7
00510945  EB 0A                     JMP 0x00510951
switchD_00510930::caseD_c0a3:
00510947  6A 02                     PUSH 0x2
00510949  EB 06                     JMP 0x00510951
switchD_00510930::caseD_c0a4:
0051094B  6A 04                     PUSH 0x4
0051094D  EB 02                     JMP 0x00510951
switchD_00510930::caseD_c0a5:
0051094F  6A 05                     PUSH 0x5
LAB_00510951:
00510951  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00510957  6A 4E                     PUSH 0x4e
00510959  E8 4F 2C EF FF            CALL 0x004035ad
switchD_00510930::default:
0051095E  8B 06                     MOV EAX,dword ptr [ESI]
00510960  6A 00                     PUSH 0x0
00510962  8B CE                     MOV ECX,ESI
00510964  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
00510967  68 AE 00 00 00            PUSH 0xae
0051096C  E8 BE 54 EF FF            CALL 0x00405e2f
00510971  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00510974  83 C4 04                  ADD ESP,0x4
00510977  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051097C  33 C0                     XOR EAX,EAX
0051097E  5F                        POP EDI
0051097F  5E                        POP ESI
00510980  5B                        POP EBX
00510981  8B E5                     MOV ESP,EBP
00510983  5D                        POP EBP
00510984  C2 04 00                  RET 0x4
LAB_00510987:
00510987  8D 88 5A 3F FF FF         LEA ECX,[EAX + 0xffff3f5a]
0051098D  83 F9 10                  CMP ECX,0x10
00510990  0F 87 DA 00 00 00         JA 0x00510a70
00510996  33 D2                     XOR EDX,EDX
00510998  8A 91 24 0B 51 00         MOV DL,byte ptr [ECX + 0x510b24]
switchD_0051099e::switchD:
0051099E  FF 24 95 FC 0A 51 00      JMP dword ptr [EDX*0x4 + 0x510afc]
FrmPanelTy::GetMessage::cf_common_exit_005109A5:
005109A5  33 C9                     XOR ECX,ECX
005109A7  05 F8 4E FF FF            ADD EAX,0xffff4ef8
005109AC  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005109AF  83 F8 06                  CMP EAX,0x6
005109B2  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005109B5  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005109B8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005109BB  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
005109BF  77 1F                     JA 0x005109e0
switchD_005109c1::switchD:
005109C1  FF 24 85 38 0B 51 00      JMP dword ptr [EAX*0x4 + 0x510b38]
switchD_005109c1::caseD_b108:
005109C8  C6 45 E8 09               MOV byte ptr [EBP + -0x18],0x9
005109CC  EB 16                     JMP 0x005109e4
switchD_005109c1::caseD_b10a:
005109CE  C6 45 E8 0A               MOV byte ptr [EBP + -0x18],0xa
005109D2  EB 10                     JMP 0x005109e4
switchD_005109c1::caseD_b10c:
005109D4  C6 45 E8 0B               MOV byte ptr [EBP + -0x18],0xb
005109D8  EB 0A                     JMP 0x005109e4
switchD_005109c1::caseD_b10e:
005109DA  C6 45 E8 0C               MOV byte ptr [EBP + -0x18],0xc
005109DE  EB 04                     JMP 0x005109e4
switchD_005109c1::caseD_b109:
005109E0  C6 45 E8 08               MOV byte ptr [EBP + -0x18],0x8
LAB_005109e4:
005109E4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005109EA  6A FF                     PUSH -0x1
005109EC  8D 55 E8                  LEA EDX,[EBP + -0x18]
005109EF  6A 00                     PUSH 0x0
005109F1  52                        PUSH EDX
005109F2  6A 18                     PUSH 0x18
005109F4  E8 3A 32 EF FF            CALL 0x00403c33
005109F9  68 AE 00 00 00            PUSH 0xae
005109FE  E8 2C 54 EF FF            CALL 0x00405e2f
00510A03  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00510A06  83 C4 04                  ADD ESP,0x4
00510A09  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00510A0E  33 C0                     XOR EAX,EAX
00510A10  5F                        POP EDI
00510A11  5E                        POP ESI
00510A12  5B                        POP EBX
00510A13  8B E5                     MOV ESP,EBP
00510A15  5D                        POP EBP
00510A16  C2 04 00                  RET 0x4
switchD_0051099e::caseD_c0af:
00510A19  6A 00                     PUSH 0x0
00510A1B  68 4C 2A 7C 00            PUSH 0x7c2a4c
00510A20  EB 3D                     JMP 0x00510a5f
switchD_0051099e::caseD_c0b0:
00510A22  6A 00                     PUSH 0x0
00510A24  68 3C 2A 7C 00            PUSH 0x7c2a3c
00510A29  EB 34                     JMP 0x00510a5f
switchD_0051099e::caseD_c0b1:
00510A2B  6A 00                     PUSH 0x0
00510A2D  68 30 2A 7C 00            PUSH 0x7c2a30
00510A32  EB 2B                     JMP 0x00510a5f
switchD_0051099e::caseD_c0b2:
00510A34  6A 00                     PUSH 0x0
00510A36  68 24 2A 7C 00            PUSH 0x7c2a24
00510A3B  EB 22                     JMP 0x00510a5f
switchD_0051099e::caseD_c0b3:
00510A3D  6A 00                     PUSH 0x0
00510A3F  68 18 2A 7C 00            PUSH 0x7c2a18
00510A44  EB 19                     JMP 0x00510a5f
switchD_0051099e::caseD_c0b4:
00510A46  6A 00                     PUSH 0x0
00510A48  68 08 2A 7C 00            PUSH 0x7c2a08
00510A4D  EB 10                     JMP 0x00510a5f
switchD_0051099e::caseD_c0b5:
00510A4F  6A 00                     PUSH 0x0
00510A51  68 F8 29 7C 00            PUSH 0x7c29f8
00510A56  EB 07                     JMP 0x00510a5f
switchD_0051099e::caseD_c0b6:
00510A58  6A 00                     PUSH 0x0
00510A5A  68 E8 29 7C 00            PUSH 0x7c29e8
LAB_00510a5f:
00510A5F  E8 18 4D EF FF            CALL 0x0040577c
00510A64  83 C4 08                  ADD ESP,0x8
00510A67  8B CE                     MOV ECX,ESI
00510A69  50                        PUSH EAX
00510A6A  57                        PUSH EDI
00510A6B  E8 2E 53 EF FF            CALL 0x00405d9e
switchD_005108d5::default:
00510A70  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00510A73  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00510A78  33 C0                     XOR EAX,EAX
00510A7A  5F                        POP EDI
00510A7B  5E                        POP ESI
00510A7C  5B                        POP EBX
00510A7D  8B E5                     MOV ESP,EBP
00510A7F  5D                        POP EBP
00510A80  C2 04 00                  RET 0x4
LAB_00510a83:
00510A83  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00510A86  68 E0 2A 7C 00            PUSH 0x7c2ae0
00510A8B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00510A90  56                        PUSH ESI
00510A91  6A 00                     PUSH 0x0
00510A93  68 E0 00 00 00            PUSH 0xe0
00510A98  68 58 29 7C 00            PUSH 0x7c2958
00510A9D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00510AA3  E8 28 CA 19 00            CALL 0x006ad4d0
00510AA8  83 C4 18                  ADD ESP,0x18
00510AAB  85 C0                     TEST EAX,EAX
00510AAD  74 01                     JZ 0x00510ab0
00510AAF  CC                        INT3
LAB_00510ab0:
00510AB0  68 E0 00 00 00            PUSH 0xe0
00510AB5  68 58 29 7C 00            PUSH 0x7c2958
00510ABA  6A 00                     PUSH 0x0
00510ABC  56                        PUSH ESI
00510ABD  E8 7E 53 19 00            CALL 0x006a5e40
00510AC2  5F                        POP EDI
00510AC3  5E                        POP ESI
00510AC4  B8 FF FF 00 00            MOV EAX,0xffff
00510AC9  5B                        POP EBX
00510ACA  8B E5                     MOV ESP,EBP
00510ACC  5D                        POP EBP
00510ACD  C2 04 00                  RET 0x4
