FUN_004f05c0:
004F05C0  55                        PUSH EBP
004F05C1  8B EC                     MOV EBP,ESP
004F05C3  81 EC 54 03 00 00         SUB ESP,0x354
004F05C9  53                        PUSH EBX
004F05CA  56                        PUSH ESI
004F05CB  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004F05CE  57                        PUSH EDI
004F05CF  B9 16 00 00 00            MOV ECX,0x16
004F05D4  33 C0                     XOR EAX,EAX
004F05D6  8D 7D 90                  LEA EDI,[EBP + -0x70]
004F05D9  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
004F05DF  F3 AB                     STOSD.REP ES:EDI
004F05E1  B9 A8 00 00 00            MOV ECX,0xa8
004F05E6  8D BD AC FC FF FF         LEA EDI,[EBP + 0xfffffcac]
004F05EC  F3 AB                     STOSD.REP ES:EDI
004F05EE  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F05F3  8D 8D 4C FF FF FF         LEA ECX,[EBP + 0xffffff4c]
004F05F9  6A 00                     PUSH 0x0
004F05FB  52                        PUSH EDX
004F05FC  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
004F0602  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F0608  E8 E3 D1 23 00            CALL 0x0072d7f0
004F060D  8B F0                     MOV ESI,EAX
004F060F  83 C4 08                  ADD ESP,0x8
004F0612  85 F6                     TEST ESI,ESI
004F0614  0F 85 FC 02 00 00         JNZ 0x004f0916
004F061A  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
004F061D  BB 05 00 00 00            MOV EBX,0x5
004F0622  89 35 84 16 80 00         MOV dword ptr [0x00801684],ESI
004F0628  8D BE 7E 02 00 00         LEA EDI,[ESI + 0x27e]
LAB_004f062e:
004F062E  6A 05                     PUSH 0x5
004F0630  6A 30                     PUSH 0x30
004F0632  6A 0A                     PUSH 0xa
004F0634  6A 00                     PUSH 0x0
004F0636  E8 55 DC 1B 00            CALL 0x006ae290
004F063B  89 07                     MOV dword ptr [EDI],EAX
004F063D  83 C7 04                  ADD EDI,0x4
004F0640  4B                        DEC EBX
004F0641  75 EB                     JNZ 0x004f062e
004F0643  A1 30 67 80 00            MOV EAX,[0x00806730]
004F0648  8B 5E 3C                  MOV EBX,dword ptr [ESI + 0x3c]
004F064B  05 E0 FC FF FF            ADD EAX,0xfffffce0
004F0650  6A 01                     PUSH 0x1
004F0652  99                        CDQ
004F0653  2B C2                     SUB EAX,EDX
004F0655  D1 F8                     SAR EAX,0x1
004F0657  03 D8                     ADD EBX,EAX
004F0659  89 5E 3C                  MOV dword ptr [ESI + 0x3c],EBX
004F065C  33 DB                     XOR EBX,EBX
004F065E  53                        PUSH EBX
004F065F  53                        PUSH EBX
004F0660  68 E0 19 7C 00            PUSH 0x7c19e0
004F0665  E8 12 51 F1 FF            CALL 0x0040577c
004F066A  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F0670  83 C4 08                  ADD ESP,0x8
004F0673  50                        PUSH EAX
004F0674  6A 01                     PUSH 0x1
004F0676  E8 65 16 20 00            CALL 0x006f1ce0
004F067B  53                        PUSH EBX
004F067C  68 D0 19 7C 00            PUSH 0x7c19d0
004F0681  89 86 84 01 00 00         MOV dword ptr [ESI + 0x184],EAX
004F0687  8D 7E 6C                  LEA EDI,[ESI + 0x6c]
004F068A  E8 ED 50 F1 FF            CALL 0x0040577c
004F068F  50                        PUSH EAX
004F0690  68 1C 18 7C 00            PUSH 0x7c181c
004F0695  57                        PUSH EDI
004F0696  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F069C  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F06A2  83 C4 14                  ADD ESP,0x14
004F06A5  6A 01                     PUSH 0x1
004F06A7  53                        PUSH EBX
004F06A8  57                        PUSH EDI
004F06A9  6A 01                     PUSH 0x1
004F06AB  E8 30 16 20 00            CALL 0x006f1ce0
004F06B0  53                        PUSH EBX
004F06B1  BF 01 00 00 00            MOV EDI,0x1
004F06B6  53                        PUSH EBX
004F06B7  57                        PUSH EDI
004F06B8  53                        PUSH EBX
004F06B9  89 86 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EAX
004F06BF  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004F06C5  6A FF                     PUSH -0x1
004F06C7  68 10 19 7C 00            PUSH 0x7c1910
004F06CC  6A 0B                     PUSH 0xb
004F06CE  51                        PUSH ECX
004F06CF  E8 1C 94 21 00            CALL 0x00709af0
004F06D4  53                        PUSH EBX
004F06D5  53                        PUSH EBX
004F06D6  57                        PUSH EDI
004F06D7  53                        PUSH EBX
004F06D8  89 86 88 01 00 00         MOV dword ptr [ESI + 0x188],EAX
004F06DE  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
004F06E4  6A FF                     PUSH -0x1
004F06E6  68 08 19 7C 00            PUSH 0x7c1908
004F06EB  6A 0B                     PUSH 0xb
004F06ED  52                        PUSH EDX
004F06EE  E8 FD 93 21 00            CALL 0x00709af0
004F06F3  83 C4 40                  ADD ESP,0x40
004F06F6  89 86 8C 01 00 00         MOV dword ptr [ESI + 0x18c],EAX
004F06FC  53                        PUSH EBX
004F06FD  68 D0 19 7C 00            PUSH 0x7c19d0
004F0702  E8 75 50 F1 FF            CALL 0x0040577c
004F0707  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
004F070D  83 C4 08                  ADD ESP,0x8
004F0710  50                        PUSH EAX
004F0711  33 C0                     XOR EAX,EAX
004F0713  80 FA 03                  CMP DL,0x3
004F0716  6A 31                     PUSH 0x31
004F0718  0F 94 C0                  SETZ AL
004F071B  83 C0 13                  ADD EAX,0x13
004F071E  50                        PUSH EAX
004F071F  6A 1C                     PUSH 0x1c
004F0721  6A 63                     PUSH 0x63
004F0723  68 B7 00 00 00            PUSH 0xb7
004F0728  6A 5B                     PUSH 0x5b
004F072A  6A 63                     PUSH 0x63
004F072C  6A 79                     PUSH 0x79
004F072E  6A 0C                     PUSH 0xc
004F0730  68 C1 00 00 00            PUSH 0xc1
004F0735  6A 02                     PUSH 0x2
004F0737  6A 36                     PUSH 0x36
004F0739  68 24 27 00 00            PUSH 0x2724
004F073E  8B CE                     MOV ECX,ESI
004F0740  E8 FC 3A F1 FF            CALL 0x00404241
004F0745  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F074A  33 C9                     XOR ECX,ECX
004F074C  3C 03                     CMP AL,0x3
004F074E  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
004F0751  0F 95 C1                  SETNZ CL
004F0754  83 C1 04                  ADD ECX,0x4
004F0757  3B CB                     CMP ECX,EBX
004F0759  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004F075C  0F 8E 47 01 00 00         JLE 0x004f08a9
004F0762  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004F0765  2C 03                     SUB AL,0x3
004F0767  8B 56 5C                  MOV EDX,dword ptr [ESI + 0x5c]
004F076A  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004F076D  F6 D8                     NEG AL
004F076F  1B C0                     SBB EAX,EAX
004F0771  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004F0774  24 EB                     AND AL,0xeb
004F0776  83 C0 3D                  ADD EAX,0x3d
004F0779  33 C9                     XOR ECX,ECX
004F077B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_004f077e:
004F077E  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
004F0785  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004F0788  2B C1                     SUB EAX,ECX
004F078A  8D 51 01                  LEA EDX,[ECX + 0x1]
004F078D  C1 E0 04                  SHL EAX,0x4
004F0790  89 94 05 AC FC FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffcac],EDX
004F0797  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004F079A  89 9C 05 B0 FC FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffcb0],EBX
004F07A1  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004F07A4  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004F07A7  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
004F07AA  03 D7                     ADD EDX,EDI
004F07AC  89 94 05 B8 FC FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffcb8],EDX
004F07B3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004F07B6  3B D3                     CMP EDX,EBX
004F07B8  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
004F07BE  C7 84 05 C0 FC FF FF 2B 00 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffffcc0],0x2b
004F07C9  74 03                     JZ 0x004f07ce
004F07CB  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
LAB_004f07ce:
004F07CE  83 C2 3D                  ADD EDX,0x3d
004F07D1  83 F9 04                  CMP ECX,0x4
004F07D4  89 94 05 BC FC FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffcbc],EDX
004F07DB  C7 84 05 C4 FC FF FF 1B 00 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffffcc4],0x1b
004F07E6  BA 01 01 00 00            MOV EDX,0x101
004F07EB  89 9C 05 F4 FC FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffcf4],EBX
004F07F2  89 94 05 04 FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd04],EDX
004F07F9  89 94 05 D8 FC FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffcd8],EDX
004F0800  BA 03 00 00 00            MOV EDX,0x3
004F0805  89 94 05 08 FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd08],EDX
004F080C  89 94 05 DC FC FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffcdc],EDX
004F0813  C7 84 05 E0 FC FF FF 01 42 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffffce0],0x4201
004F081E  C7 84 05 0C FD FF FF 02 42 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffffd0c],0x4202
004F0829  66 89 9C 05 10 FD FF FF   MOV word ptr [EBP + EAX*0x1 + 0xfffffd10],BX
004F0831  BA 02 00 00 00            MOV EDX,0x2
004F0836  66 89 9C 05 E4 FC FF FF   MOV word ptr [EBP + EAX*0x1 + 0xfffffce4],BX
004F083E  66 89 94 05 12 FD FF FF   MOV word ptr [EBP + EAX*0x1 + 0xfffffd12],DX
004F0846  66 89 94 05 E6 FC FF FF   MOV word ptr [EBP + EAX*0x1 + 0xfffffce6],DX
004F084E  77 36                     JA 0x004f0886
switchD_004f0850::switchD:
004F0850  FF 24 8D 5C 09 4F 00      JMP dword ptr [ECX*0x4 + 0x4f095c]
switchD_004f0850::caseD_0:
004F0857  B9 9B 3A 00 00            MOV ECX,0x3a9b
004F085C  EB 1A                     JMP 0x004f0878
switchD_004f0850::caseD_1:
004F085E  B9 9C 3A 00 00            MOV ECX,0x3a9c
004F0863  EB 13                     JMP 0x004f0878
switchD_004f0850::caseD_2:
004F0865  B9 9D 3A 00 00            MOV ECX,0x3a9d
004F086A  EB 0C                     JMP 0x004f0878
switchD_004f0850::caseD_3:
004F086C  B9 A8 3A 00 00            MOV ECX,0x3aa8
004F0871  EB 05                     JMP 0x004f0878
switchD_004f0850::caseD_4:
004F0873  B9 9E 3A 00 00            MOV ECX,0x3a9e
LAB_004f0878:
004F0878  89 8C 05 14 FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd14],ECX
004F087F  89 8C 05 E8 FC FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffce8],ECX
switchD_004f0850::default:
004F0886  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
004F0889  FE C0                     INC AL
004F088B  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
004F088E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004F0891  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004F0894  81 E1 FF 00 00 00         AND ECX,0xff
004F089A  3B C8                     CMP ECX,EAX
004F089C  0F 8C DC FE FF FF         JL 0x004f077e
004F08A2  BF 01 00 00 00            MOV EDI,0x1
004F08A7  EB 05                     JMP 0x004f08ae
LAB_004f08a9:
004F08A9  BA 02 00 00 00            MOV EDX,0x2
LAB_004f08ae:
004F08AE  33 C0                     XOR EAX,EAX
004F08B0  8D 8D AC FC FF FF         LEA ECX,[EBP + 0xfffffcac]
004F08B6  8A 86 78 02 00 00         MOV AL,byte ptr [ESI + 0x278]
004F08BC  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
004F08BF  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004F08C2  40                        INC EAX
004F08C3  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004F08C6  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
004F08C9  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004F08CC  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
004F08CF  8D 45 90                  LEA EAX,[EBP + -0x70]
004F08D2  53                        PUSH EBX
004F08D3  50                        PUSH EAX
004F08D4  81 C6 92 02 00 00         ADD ESI,0x292
004F08DA  89 7D 90                  MOV dword ptr [EBP + -0x70],EDI
004F08DD  89 7D 94                  MOV dword ptr [EBP + -0x6c],EDI
004F08E0  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
004F08E3  C7 45 A8 05 B2 00 00      MOV dword ptr [EBP + -0x58],0xb205
004F08EA  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
004F08ED  C7 45 C8 06 B2 00 00      MOV dword ptr [EBP + -0x38],0xb206
004F08F4  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
004F08F7  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
004F08FA  8B 11                     MOV EDX,dword ptr [ECX]
004F08FC  53                        PUSH EBX
004F08FD  56                        PUSH ESI
004F08FE  6A 05                     PUSH 0x5
004F0900  FF 52 08                  CALL dword ptr [EDX + 0x8]
004F0903  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
004F0909  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F090F  5F                        POP EDI
004F0910  5E                        POP ESI
004F0911  5B                        POP EBX
004F0912  8B E5                     MOV ESP,EBP
004F0914  5D                        POP EBP
004F0915  C3                        RET
LAB_004f0916:
004F0916  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
004F091C  68 A8 19 7C 00            PUSH 0x7c19a8
004F0921  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F0926  56                        PUSH ESI
004F0927  6A 00                     PUSH 0x0
004F0929  6A 3D                     PUSH 0x3d
004F092B  68 84 19 7C 00            PUSH 0x7c1984
004F0930  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F0936  E8 95 CB 1B 00            CALL 0x006ad4d0
004F093B  83 C4 18                  ADD ESP,0x18
004F093E  85 C0                     TEST EAX,EAX
004F0940  74 01                     JZ 0x004f0943
004F0942  CC                        INT3
LAB_004f0943:
004F0943  6A 3D                     PUSH 0x3d
004F0945  68 84 19 7C 00            PUSH 0x7c1984
004F094A  6A 00                     PUSH 0x0
004F094C  56                        PUSH ESI
004F094D  E8 EE 54 1B 00            CALL 0x006a5e40
004F0952  5F                        POP EDI
004F0953  5E                        POP ESI
004F0954  5B                        POP EBX
004F0955  8B E5                     MOV ESP,EBP
004F0957  5D                        POP EBP
004F0958  C3                        RET
