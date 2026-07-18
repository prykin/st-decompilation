FUN_0071cfd0:
0071CFD0  55                        PUSH EBP
0071CFD1  8B EC                     MOV EBP,ESP
0071CFD3  83 EC 70                  SUB ESP,0x70
0071CFD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071CFDB  53                        PUSH EBX
0071CFDC  56                        PUSH ESI
0071CFDD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0071CFE0  57                        PUSH EDI
0071CFE1  8D 55 94                  LEA EDX,[EBP + -0x6c]
0071CFE4  8D 4D 90                  LEA ECX,[EBP + -0x70]
0071CFE7  6A 00                     PUSH 0x0
0071CFE9  52                        PUSH EDX
0071CFEA  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0071CFF1  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0071CFF4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071CFFA  E8 F1 07 01 00            CALL 0x0072d7f0
0071CFFF  83 C4 08                  ADD ESP,0x8
0071D002  85 C0                     TEST EAX,EAX
0071D004  0F 85 12 0E 00 00         JNZ 0x0071de1c
0071D00A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071D00D  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0071D010  BF 02 00 00 00            MOV EDI,0x2
0071D015  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0071D018  83 C0 FE                  ADD EAX,-0x2
0071D01B  83 F8 5E                  CMP EAX,0x5e
0071D01E  0F 87 F2 04 00 00         JA 0x0071d516
0071D024  33 C9                     XOR ECX,ECX
0071D026  8A 88 98 DE 71 00         MOV CL,byte ptr [EAX + 0x71de98]
switchD_0071d02c::switchD:
0071D02C  FF 24 8D 70 DE 71 00      JMP dword ptr [ECX*0x4 + 0x71de70]
switchD_0071d02c::caseD_2:
0071D033  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
0071D036  85 F6                     TEST ESI,ESI
0071D038  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0071D03B  75 0D                     JNZ 0x0071d04a
0071D03D  BF FF FF 00 00            MOV EDI,0xffff
0071D042  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071D045  E9 D1 04 00 00            JMP 0x0071d51b
LAB_0071d04a:
0071D04A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0071D04D  8D BB 34 01 00 00         LEA EDI,[EBX + 0x134]
0071D053  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0071D056  8D 70 18                  LEA ESI,[EAX + 0x18]
0071D059  89 53 20                  MOV dword ptr [EBX + 0x20],EDX
0071D05C  8B 08                     MOV ECX,dword ptr [EAX]
0071D05E  89 4B 1C                  MOV dword ptr [EBX + 0x1c],ECX
0071D061  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0071D064  89 53 24                  MOV dword ptr [EBX + 0x24],EDX
0071D067  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0071D06A  89 4B 28                  MOV dword ptr [EBX + 0x28],ECX
0071D06D  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
0071D070  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
0071D073  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0071D076  89 4B 30                  MOV dword ptr [EBX + 0x30],ECX
0071D079  B9 08 00 00 00            MOV ECX,0x8
0071D07E  F3 A5                     MOVSD.REP ES:EDI,ESI
0071D080  8D 70 38                  LEA ESI,[EAX + 0x38]
0071D083  8D BB 54 01 00 00         LEA EDI,[EBX + 0x154]
0071D089  B9 08 00 00 00            MOV ECX,0x8
0071D08E  89 9B 50 01 00 00         MOV dword ptr [EBX + 0x150],EBX
0071D094  F3 A5                     MOVSD.REP ES:EDI,ESI
0071D096  8D 70 58                  LEA ESI,[EAX + 0x58]
0071D099  8D BB 78 01 00 00         LEA EDI,[EBX + 0x178]
0071D09F  B9 08 00 00 00            MOV ECX,0x8
0071D0A4  89 9B 70 01 00 00         MOV dword ptr [EBX + 0x170],EBX
0071D0AA  F3 A5                     MOVSD.REP ES:EDI,ESI
0071D0AC  8D 70 78                  LEA ESI,[EAX + 0x78]
0071D0AF  8D 7B 3C                  LEA EDI,[EBX + 0x3c]
0071D0B2  B9 08 00 00 00            MOV ECX,0x8
0071D0B7  89 9B 94 01 00 00         MOV dword ptr [EBX + 0x194],EBX
0071D0BD  F3 A5                     MOVSD.REP ES:EDI,ESI
0071D0BF  8D B0 9C 00 00 00         LEA ESI,[EAX + 0x9c]
0071D0C5  8D 7B 60                  LEA EDI,[EBX + 0x60]
0071D0C8  B9 08 00 00 00            MOV ECX,0x8
0071D0CD  89 5B 58                  MOV dword ptr [EBX + 0x58],EBX
0071D0D0  F3 A5                     MOVSD.REP ES:EDI,ESI
0071D0D2  89 5B 7C                  MOV dword ptr [EBX + 0x7c],EBX
0071D0D5  8B 90 98 00 00 00         MOV EDX,dword ptr [EAX + 0x98]
0071D0DB  89 53 5C                  MOV dword ptr [EBX + 0x5c],EDX
0071D0DE  8B 88 BC 00 00 00         MOV ECX,dword ptr [EAX + 0xbc]
0071D0E4  89 8B 88 00 00 00         MOV dword ptr [EBX + 0x88],ECX
0071D0EA  8D B0 C0 00 00 00         LEA ESI,[EAX + 0xc0]
0071D0F0  8D BB 8C 00 00 00         LEA EDI,[EBX + 0x8c]
0071D0F6  B9 08 00 00 00            MOV ECX,0x8
0071D0FB  F3 A5                     MOVSD.REP ES:EDI,ESI
0071D0FD  8D B0 E4 00 00 00         LEA ESI,[EAX + 0xe4]
0071D103  8D BB B0 00 00 00         LEA EDI,[EBX + 0xb0]
0071D109  B9 08 00 00 00            MOV ECX,0x8
0071D10E  89 9B A8 00 00 00         MOV dword ptr [EBX + 0xa8],EBX
0071D114  F3 A5                     MOVSD.REP ES:EDI,ESI
0071D116  89 9B CC 00 00 00         MOV dword ptr [EBX + 0xcc],EBX
0071D11C  8B 90 E0 00 00 00         MOV EDX,dword ptr [EAX + 0xe0]
0071D122  89 93 AC 00 00 00         MOV dword ptr [EBX + 0xac],EDX
0071D128  8B 88 04 01 00 00         MOV ECX,dword ptr [EAX + 0x104]
0071D12E  89 8B D8 00 00 00         MOV dword ptr [EBX + 0xd8],ECX
0071D134  8B 90 24 01 00 00         MOV EDX,dword ptr [EAX + 0x124]
0071D13A  89 93 2C 01 00 00         MOV dword ptr [EBX + 0x12c],EDX
0071D140  8B 88 28 01 00 00         MOV ECX,dword ptr [EAX + 0x128]
0071D146  89 8B 30 01 00 00         MOV dword ptr [EBX + 0x130],ECX
0071D14C  8B B8 08 01 00 00         MOV EDI,dword ptr [EAX + 0x108]
0071D152  33 D2                     XOR EDX,EDX
0071D154  85 FF                     TEST EDI,EDI
0071D156  0F 94 C2                  SETZ DL
0071D159  89 53 34                  MOV dword ptr [EBX + 0x34],EDX
0071D15C  8B B0 0C 01 00 00         MOV ESI,dword ptr [EAX + 0x10c]
0071D162  33 C9                     XOR ECX,ECX
0071D164  85 F6                     TEST ESI,ESI
0071D166  0F 94 C1                  SETZ CL
0071D169  89 4B 38                  MOV dword ptr [EBX + 0x38],ECX
0071D16C  8B 90 78 01 00 00         MOV EDX,dword ptr [EAX + 0x178]
0071D172  89 93 E0 01 00 00         MOV dword ptr [EBX + 0x1e0],EDX
0071D178  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
0071D17B  83 C1 FE                  ADD ECX,-0x2
0071D17E  83 F9 05                  CMP ECX,0x5
0071D181  77 69                     JA 0x0071d1ec
switchD_0071d183::switchD:
0071D183  FF 24 8D F8 DE 71 00      JMP dword ptr [ECX*0x4 + 0x71def8]
switchD_0071d183::caseD_2:
0071D18A  8B 88 10 01 00 00         MOV ECX,dword ptr [EAX + 0x110]
0071D190  89 8B A4 01 00 00         MOV dword ptr [EBX + 0x1a4],ECX
0071D196  8B 90 14 01 00 00         MOV EDX,dword ptr [EAX + 0x114]
0071D19C  89 93 A8 01 00 00         MOV dword ptr [EBX + 0x1a8],EDX
0071D1A2  EB 48                     JMP 0x0071d1ec
switchD_0071d183::caseD_4:
0071D1A4  8D 88 10 01 00 00         LEA ECX,[EAX + 0x110]
0071D1AA  8D 93 B0 01 00 00         LEA EDX,[EBX + 0x1b0]
0071D1B0  8B 31                     MOV ESI,dword ptr [ECX]
0071D1B2  89 32                     MOV dword ptr [EDX],ESI
0071D1B4  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
0071D1B7  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
0071D1BA  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0071D1BD  89 72 08                  MOV dword ptr [EDX + 0x8],ESI
0071D1C0  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0071D1C3  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0071D1C6  8B 90 20 01 00 00         MOV EDX,dword ptr [EAX + 0x120]
0071D1CC  89 93 A8 01 00 00         MOV dword ptr [EBX + 0x1a8],EDX
0071D1D2  EB 18                     JMP 0x0071d1ec
switchD_0071d183::caseD_3:
0071D1D4  8B 88 10 01 00 00         MOV ECX,dword ptr [EAX + 0x110]
0071D1DA  89 8B D8 01 00 00         MOV dword ptr [EBX + 0x1d8],ECX
0071D1E0  8B 90 14 01 00 00         MOV EDX,dword ptr [EAX + 0x114]
0071D1E6  89 93 DC 01 00 00         MOV dword ptr [EBX + 0x1dc],EDX
switchD_0071d183::caseD_6:
0071D1EC  33 F6                     XOR ESI,ESI
0071D1EE  89 B3 E8 01 00 00         MOV dword ptr [EBX + 0x1e8],ESI
0071D1F4  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0071D1F7  E8 B4 7F FC FF            CALL 0x006e51b0
0071D1FC  89 83 C0 01 00 00         MOV dword ptr [EBX + 0x1c0],EAX
0071D202  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0071D205  89 B3 E4 01 00 00         MOV dword ptr [EBX + 0x1e4],ESI
0071D20B  8D BB DC 00 00 00         LEA EDI,[EBX + 0xdc]
0071D211  8D B0 2C 01 00 00         LEA ESI,[EAX + 0x12c]
0071D217  B9 13 00 00 00            MOV ECX,0x13
0071D21C  33 C0                     XOR EAX,EAX
0071D21E  F3 A5                     MOVSD.REP ES:EDI,ESI
0071D220  89 83 98 01 00 00         MOV dword ptr [EBX + 0x198],EAX
0071D226  89 83 9C 01 00 00         MOV dword ptr [EBX + 0x19c],EAX
0071D22C  89 83 C4 01 00 00         MOV dword ptr [EBX + 0x1c4],EAX
0071D232  89 83 C8 01 00 00         MOV dword ptr [EBX + 0x1c8],EAX
0071D238  89 83 CC 01 00 00         MOV dword ptr [EBX + 0x1cc],EAX
0071D23E  89 83 D0 01 00 00         MOV dword ptr [EBX + 0x1d0],EAX
0071D244  E9 CD 02 00 00            JMP 0x0071d516
switchD_0071d02c::caseD_8:
0071D249  F7 43 1C 00 00 00 70      TEST dword ptr [EBX + 0x1c],0x70000000
0071D250  0F 84 C0 02 00 00         JZ 0x0071d516
0071D256  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0071D259  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0071D25C  52                        PUSH EDX
0071D25D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0071D260  33 F6                     XOR ESI,ESI
0071D262  6A 01                     PUSH 0x1
0071D264  6A 03                     PUSH 0x3
0071D266  8B CB                     MOV ECX,EBX
0071D268  C7 45 E4 13 00 00 00      MOV dword ptr [EBP + -0x1c],0x13
0071D26F  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0071D272  E8 89 8D FC FF            CALL 0x006e6000
0071D277  85 C0                     TEST EAX,EAX
0071D279  74 0C                     JZ 0x0071d287
0071D27B  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
0071D282  E9 8F 02 00 00            JMP 0x0071d516
LAB_0071d287:
0071D287  8A 83 DC 00 00 00         MOV AL,byte ptr [EBX + 0xdc]
0071D28D  8D 8B DC 00 00 00         LEA ECX,[EBX + 0xdc]
0071D293  A8 08                     TEST AL,0x8
0071D295  74 08                     JZ 0x0071d29f
0071D297  39 B3 E0 00 00 00         CMP dword ptr [EBX + 0xe0],ESI
0071D29D  75 0A                     JNZ 0x0071d2a9
LAB_0071d29f:
0071D29F  8A 83 E0 00 00 00         MOV AL,byte ptr [EBX + 0xe0]
0071D2A5  84 C0                     TEST AL,AL
0071D2A7  74 5D                     JZ 0x0071d306
LAB_0071d2a9:
0071D2A9  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0071D2AC  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0071D2AF  89 83 10 01 00 00         MOV dword ptr [EBX + 0x110],EAX
0071D2B5  89 83 F0 00 00 00         MOV dword ptr [EBX + 0xf0],EAX
0071D2BB  8D 45 D4                  LEA EAX,[EBP + -0x2c]
0071D2BE  8B CB                     MOV ECX,EBX
0071D2C0  50                        PUSH EAX
0071D2C1  6A 01                     PUSH 0x1
0071D2C3  6A 03                     PUSH 0x3
0071D2C5  89 BB 14 01 00 00         MOV dword ptr [EBX + 0x114],EDI
0071D2CB  89 BB F4 00 00 00         MOV dword ptr [EBX + 0xf4],EDI
0071D2D1  C7 83 F8 00 00 00 2C 00 00 00  MOV dword ptr [EBX + 0xf8],0x2c
0071D2DB  C7 83 18 01 00 00 2E 00 00 00  MOV dword ptr [EBX + 0x118],0x2e
0071D2E5  C7 45 E4 10 00 00 00      MOV dword ptr [EBP + -0x1c],0x10
0071D2EC  E8 0F 8D FC FF            CALL 0x006e6000
0071D2F1  3B C6                     CMP EAX,ESI
0071D2F3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071D2F6  0F 85 1A 02 00 00         JNZ 0x0071d516
0071D2FC  C7 83 28 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x128],0x1
LAB_0071d306:
0071D306  89 B3 E8 01 00 00         MOV dword ptr [EBX + 0x1e8],ESI
0071D30C  8B 83 2C 01 00 00         MOV EAX,dword ptr [EBX + 0x12c]
0071D312  3B C6                     CMP EAX,ESI
0071D314  0F 84 FC 01 00 00         JZ 0x0071d516
0071D31A  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0071D31D  8B 13                     MOV EDX,dword ptr [EBX]
0071D31F  25 FF FF FF 8F            AND EAX,0x8fffffff
0071D324  8B CB                     MOV ECX,EBX
0071D326  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0071D329  FF 52 04                  CALL dword ptr [EDX + 0x4]
0071D32C  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0071D32F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071D334  33 C0                     XOR EAX,EAX
0071D336  5F                        POP EDI
0071D337  5E                        POP ESI
0071D338  5B                        POP EBX
0071D339  8B E5                     MOV ESP,EBP
0071D33B  5D                        POP EBP
0071D33C  C2 04 00                  RET 0x4
switchD_0071d02c::caseD_5a:
0071D33F  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0071D342  89 BB 14 01 00 00         MOV dword ptr [EBX + 0x114],EDI
0071D348  89 83 10 01 00 00         MOV dword ptr [EBX + 0x110],EAX
0071D34E  89 83 F0 00 00 00         MOV dword ptr [EBX + 0xf0],EAX
0071D354  89 BB F4 00 00 00         MOV dword ptr [EBX + 0xf4],EDI
0071D35A  C7 83 F8 00 00 00 2C 00 00 00  MOV dword ptr [EBX + 0xf8],0x2c
0071D364  C7 83 18 01 00 00 2E 00 00 00  MOV dword ptr [EBX + 0x118],0x2e
0071D36E  E9 A3 01 00 00            JMP 0x0071d516
switchD_0071d02c::caseD_6:
0071D373  8B 83 2C 01 00 00         MOV EAX,dword ptr [EBX + 0x12c]
0071D379  85 C0                     TEST EAX,EAX
0071D37B  0F 84 95 01 00 00         JZ 0x0071d516
0071D381  F6 46 18 01               TEST byte ptr [ESI + 0x18],0x1
0071D385  0F 85 8B 01 00 00         JNZ 0x0071d516
0071D38B  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0071D38E  33 C0                     XOR EAX,EAX
0071D390  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071D396  5F                        POP EDI
0071D397  5E                        POP ESI
0071D398  5B                        POP EBX
0071D399  8B E5                     MOV ESP,EBP
0071D39B  5D                        POP EBP
0071D39C  C2 04 00                  RET 0x4
switchD_0071d02c::caseD_9:
0071D39F  F7 43 1C 00 00 00 70      TEST dword ptr [EBX + 0x1c],0x70000000
0071D3A6  0F 85 6A 01 00 00         JNZ 0x0071d516
0071D3AC  8A 8B DC 00 00 00         MOV CL,byte ptr [EBX + 0xdc]
0071D3B2  8D 83 DC 00 00 00         LEA EAX,[EBX + 0xdc]
0071D3B8  F6 C1 08                  TEST CL,0x8
0071D3BB  74 0A                     JZ 0x0071d3c7
0071D3BD  8B 8B E0 00 00 00         MOV ECX,dword ptr [EBX + 0xe0]
0071D3C3  85 C9                     TEST ECX,ECX
0071D3C5  75 0A                     JNZ 0x0071d3d1
LAB_0071d3c7:
0071D3C7  8A 8B E0 00 00 00         MOV CL,byte ptr [EBX + 0xe0]
0071D3CD  84 C9                     TEST CL,CL
0071D3CF  74 23                     JZ 0x0071d3f4
LAB_0071d3d1:
0071D3D1  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0071D3D4  8B CB                     MOV ECX,EBX
0071D3D6  52                        PUSH EDX
0071D3D7  6A 01                     PUSH 0x1
0071D3D9  6A 03                     PUSH 0x3
0071D3DB  C7 45 E4 11 00 00 00      MOV dword ptr [EBP + -0x1c],0x11
0071D3E2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0071D3E5  E8 16 8C FC FF            CALL 0x006e6000
0071D3EA  C7 83 28 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x128],0x0
LAB_0071d3f4:
0071D3F4  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0071D3F7  8D 4D D4                  LEA ECX,[EBP + -0x2c]
0071D3FA  51                        PUSH ECX
0071D3FB  6A 01                     PUSH 0x1
0071D3FD  6A 03                     PUSH 0x3
0071D3FF  8B CB                     MOV ECX,EBX
0071D401  C7 45 E4 14 00 00 00      MOV dword ptr [EBP + -0x1c],0x14
0071D408  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0071D40B  E8 F0 8B FC FF            CALL 0x006e6000
0071D410  E9 01 01 00 00            JMP 0x0071d516
switchD_0071d02c::caseD_20:
0071D415  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0071D418  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0071D41B  25 00 00 00 FF            AND EAX,0xff000000
0071D420  0B C2                     OR EAX,EDX
0071D422  A9 FF FF FF 00            TEST EAX,0xffffff
0071D427  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0071D42A  75 32                     JNZ 0x0071d45e
0071D42C  8B 83 80 00 00 00         MOV EAX,dword ptr [EBX + 0x80]
0071D432  33 F6                     XOR ESI,ESI
0071D434  3B C6                     CMP EAX,ESI
0071D436  74 16                     JZ 0x0071d44e
0071D438  39 73 70                  CMP dword ptr [EBX + 0x70],ESI
0071D43B  74 0B                     JZ 0x0071d448
0071D43D  8D 53 60                  LEA EDX,[EBX + 0x60]
0071D440  8B CB                     MOV ECX,EBX
0071D442  52                        PUSH EDX
0071D443  E8 98 8B FC FF            CALL 0x006e5fe0
LAB_0071d448:
0071D448  89 B3 80 00 00 00         MOV dword ptr [EBX + 0x80],ESI
LAB_0071d44e:
0071D44E  39 B3 84 00 00 00         CMP dword ptr [EBX + 0x84],ESI
0071D454  74 0A                     JZ 0x0071d460
0071D456  89 B3 84 00 00 00         MOV dword ptr [EBX + 0x84],ESI
0071D45C  EB 02                     JMP 0x0071d460
LAB_0071d45e:
0071D45E  33 F6                     XOR ESI,ESI
LAB_0071d460:
0071D460  8B 03                     MOV EAX,dword ptr [EBX]
0071D462  8B CB                     MOV ECX,EBX
0071D464  89 B3 98 01 00 00         MOV dword ptr [EBX + 0x198],ESI
0071D46A  89 B3 9C 01 00 00         MOV dword ptr [EBX + 0x19c],ESI
0071D470  89 B3 E8 01 00 00         MOV dword ptr [EBX + 0x1e8],ESI
0071D476  FF 50 04                  CALL dword ptr [EAX + 0x4]
0071D479  85 C0                     TEST EAX,EAX
0071D47B  0F 84 95 00 00 00         JZ 0x0071d516
0071D481  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
0071D488  E9 89 00 00 00            JMP 0x0071d516
switchD_0071d02c::caseD_52:
0071D48D  33 C9                     XOR ECX,ECX
0071D48F  33 D2                     XOR EDX,EDX
0071D491  66 8B 4E 14               MOV CX,word ptr [ESI + 0x14]
0071D495  89 4B 2C                  MOV dword ptr [EBX + 0x2c],ECX
0071D498  66 8B 56 16               MOV DX,word ptr [ESI + 0x16]
0071D49C  89 53 30                  MOV dword ptr [EBX + 0x30],EDX
0071D49F  EB 75                     JMP 0x0071d516
switchD_0071d02c::caseD_60:
0071D4A1  33 C0                     XOR EAX,EAX
0071D4A3  33 C9                     XOR ECX,ECX
0071D4A5  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0071D4A9  66 8B 4E 1A               MOV CX,word ptr [ESI + 0x1a]
0071D4AD  8B 73 24                  MOV ESI,dword ptr [EBX + 0x24]
0071D4B0  3B C6                     CMP EAX,ESI
0071D4B2  7C 4B                     JL 0x0071d4ff
0071D4B4  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
0071D4B7  03 D6                     ADD EDX,ESI
0071D4B9  3B C2                     CMP EAX,EDX
0071D4BB  7D 42                     JGE 0x0071d4ff
0071D4BD  8B 7B 28                  MOV EDI,dword ptr [EBX + 0x28]
0071D4C0  3B CF                     CMP ECX,EDI
0071D4C2  7C 3B                     JL 0x0071d4ff
0071D4C4  8B 53 30                  MOV EDX,dword ptr [EBX + 0x30]
0071D4C7  03 D7                     ADD EDX,EDI
0071D4C9  3B CA                     CMP ECX,EDX
0071D4CB  7D 32                     JGE 0x0071d4ff
0071D4CD  8B 93 2C 01 00 00         MOV EDX,dword ptr [EBX + 0x12c]
0071D4D3  85 D2                     TEST EDX,EDX
0071D4D5  74 1C                     JZ 0x0071d4f3
0071D4D7  83 FA FF                  CMP EDX,-0x1
0071D4DA  74 17                     JZ 0x0071d4f3
0071D4DC  2B CF                     SUB ECX,EDI
0071D4DE  2B C6                     SUB EAX,ESI
0071D4E0  51                        PUSH ECX
0071D4E1  50                        PUSH EAX
0071D4E2  8B 83 30 01 00 00         MOV EAX,dword ptr [EBX + 0x130]
0071D4E8  50                        PUSH EAX
0071D4E9  52                        PUSH EDX
0071D4EA  E8 D1 80 F9 FF            CALL 0x006b55c0
0071D4EF  85 C0                     TEST EAX,EAX
0071D4F1  74 0C                     JZ 0x0071d4ff
LAB_0071d4f3:
0071D4F3  C7 83 C8 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1c8],0x1
0071D4FD  EB 17                     JMP 0x0071d516
LAB_0071d4ff:
0071D4FF  C7 83 C8 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1c8],0x0
0071D509  EB 0B                     JMP 0x0071d516
switchD_0071d02c::caseD_2b:
0071D50B  66 8B 8B C8 01 00 00      MOV CX,word ptr [EBX + 0x1c8]
0071D512  66 89 4E 14               MOV word ptr [ESI + 0x14],CX
switchD_0071d02c::caseD_3:
0071D516  BF FF FF 00 00            MOV EDI,0xffff
LAB_0071d51b:
0071D51B  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0071D51E  85 C9                     TEST ECX,ECX
0071D520  0F 84 9A 08 00 00         JZ 0x0071ddc0
0071D526  F7 C1 00 00 00 F0         TEST ECX,0xf0000000
0071D52C  0F 85 8E 08 00 00         JNZ 0x0071ddc0
0071D532  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071D535  8B 72 10                  MOV ESI,dword ptr [EDX + 0x10]
0071D538  83 FE 64                  CMP ESI,0x64
0071D53B  0F 87 7F 08 00 00         JA 0x0071ddc0
0071D541  33 C0                     XOR EAX,EAX
0071D543  8A 86 34 DF 71 00         MOV AL,byte ptr [ESI + 0x71df34]
switchD_0071d549::switchD:
0071D549  FF 24 85 10 DF 71 00      JMP dword ptr [EAX*0x4 + 0x71df10]
switchD_0071d549::caseD_60:
0071D550  8B 83 D0 01 00 00         MOV EAX,dword ptr [EBX + 0x1d0]
0071D556  85 C0                     TEST EAX,EAX
0071D558  0F 85 62 08 00 00         JNZ 0x0071ddc0
0071D55E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071D561  8B 73 24                  MOV ESI,dword ptr [EBX + 0x24]
0071D564  33 C0                     XOR EAX,EAX
0071D566  33 C9                     XOR ECX,ECX
0071D568  66 8B 42 18               MOV AX,word ptr [EDX + 0x18]
0071D56C  66 8B 4A 1A               MOV CX,word ptr [EDX + 0x1a]
0071D570  3B C6                     CMP EAX,ESI
0071D572  0F 8C D4 00 00 00         JL 0x0071d64c
0071D578  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
0071D57B  03 D6                     ADD EDX,ESI
0071D57D  3B C2                     CMP EAX,EDX
0071D57F  0F 8D C7 00 00 00         JGE 0x0071d64c
0071D585  8B 7B 28                  MOV EDI,dword ptr [EBX + 0x28]
0071D588  3B CF                     CMP ECX,EDI
0071D58A  0F 8C B7 00 00 00         JL 0x0071d647
0071D590  8B 53 30                  MOV EDX,dword ptr [EBX + 0x30]
0071D593  03 D7                     ADD EDX,EDI
0071D595  3B CA                     CMP ECX,EDX
0071D597  0F 8D AA 00 00 00         JGE 0x0071d647
0071D59D  8B 93 2C 01 00 00         MOV EDX,dword ptr [EBX + 0x12c]
0071D5A3  85 D2                     TEST EDX,EDX
0071D5A5  74 20                     JZ 0x0071d5c7
0071D5A7  83 FA FF                  CMP EDX,-0x1
0071D5AA  74 1B                     JZ 0x0071d5c7
0071D5AC  2B CF                     SUB ECX,EDI
0071D5AE  2B C6                     SUB EAX,ESI
0071D5B0  51                        PUSH ECX
0071D5B1  50                        PUSH EAX
0071D5B2  8B 83 30 01 00 00         MOV EAX,dword ptr [EBX + 0x130]
0071D5B8  50                        PUSH EAX
0071D5B9  52                        PUSH EDX
0071D5BA  E8 01 80 F9 FF            CALL 0x006b55c0
0071D5BF  85 C0                     TEST EAX,EAX
0071D5C1  0F 84 80 00 00 00         JZ 0x0071d647
LAB_0071d5c7:
0071D5C7  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0071D5CA  48                        DEC EAX
0071D5CB  83 F8 06                  CMP EAX,0x6
0071D5CE  77 51                     JA 0x0071d621
switchD_0071d5d0::switchD:
0071D5D0  FF 24 85 9C DF 71 00      JMP dword ptr [EAX*0x4 + 0x71df9c]
switchD_0071d5d0::caseD_5:
0071D5D7  8B 83 CC 01 00 00         MOV EAX,dword ptr [EBX + 0x1cc]
0071D5DD  85 C0                     TEST EAX,EAX
0071D5DF  75 40                     JNZ 0x0071d621
switchD_0071d5d0::caseD_1:
0071D5E1  8B 83 9C 01 00 00         MOV EAX,dword ptr [EBX + 0x19c]
0071D5E7  85 C0                     TEST EAX,EAX
0071D5E9  75 36                     JNZ 0x0071d621
0071D5EB  8B 13                     MOV EDX,dword ptr [EBX]
0071D5ED  C7 43 1C 03 00 00 00      MOV dword ptr [EBX + 0x1c],0x3
0071D5F4  8B CB                     MOV ECX,EBX
0071D5F6  C7 83 E8 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1e8],0x0
0071D600  FF 52 04                  CALL dword ptr [EDX + 0x4]
0071D603  85 C0                     TEST EAX,EAX
0071D605  74 09                     JZ 0x0071d610
0071D607  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
0071D60E  EB 11                     JMP 0x0071d621
LAB_0071d610:
0071D610  B8 01 00 00 00            MOV EAX,0x1
0071D615  89 83 9C 01 00 00         MOV dword ptr [EBX + 0x19c],EAX
0071D61B  89 83 C4 01 00 00         MOV dword ptr [EBX + 0x1c4],EAX
switchD_0071d5d0::caseD_2:
0071D621  8B 83 98 01 00 00         MOV EAX,dword ptr [EBX + 0x198]
0071D627  C7 83 C8 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1c8],0x1
0071D631  85 C0                     TEST EAX,EAX
0071D633  0F 85 87 07 00 00         JNZ 0x0071ddc0
0071D639  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0071D63C  89 83 A0 01 00 00         MOV dword ptr [EBX + 0x1a0],EAX
0071D642  E9 79 07 00 00            JMP 0x0071ddc0
LAB_0071d647:
0071D647  BF FF FF 00 00            MOV EDI,0xffff
LAB_0071d64c:
0071D64C  8B 83 98 01 00 00         MOV EAX,dword ptr [EBX + 0x198]
0071D652  33 F6                     XOR ESI,ESI
0071D654  3B C6                     CMP EAX,ESI
0071D656  75 14                     JNZ 0x0071d66c
0071D658  39 B3 9C 01 00 00         CMP dword ptr [EBX + 0x19c],ESI
0071D65E  75 0C                     JNZ 0x0071d66c
0071D660  39 B3 C8 01 00 00         CMP dword ptr [EBX + 0x1c8],ESI
0071D666  0F 84 54 07 00 00         JZ 0x0071ddc0
LAB_0071d66c:
0071D66C  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0071D66F  83 C0 FD                  ADD EAX,-0x3
0071D672  83 F8 04                  CMP EAX,0x4
0071D675  77 73                     JA 0x0071d6ea
switchD_0071d677::switchD:
0071D677  FF 24 85 B8 DF 71 00      JMP dword ptr [EAX*0x4 + 0x71dfb8]
switchD_0071d677::caseD_3:
0071D67E  8B 8B A0 01 00 00         MOV ECX,dword ptr [EBX + 0x1a0]
0071D684  89 4B 1C                  MOV dword ptr [EBX + 0x1c],ECX
0071D687  EB 6E                     JMP 0x0071d6f7
switchD_0071d677::caseD_5:
0071D689  8B 83 C4 01 00 00         MOV EAX,dword ptr [EBX + 0x1c4]
0071D68F  89 B3 CC 01 00 00         MOV dword ptr [EBX + 0x1cc],ESI
0071D695  3B C6                     CMP EAX,ESI
0071D697  75 64                     JNZ 0x0071d6fd
0071D699  C7 43 1C 01 00 00 00      MOV dword ptr [EBX + 0x1c],0x1
0071D6A0  89 B3 9C 01 00 00         MOV dword ptr [EBX + 0x19c],ESI
0071D6A6  89 B3 E8 01 00 00         MOV dword ptr [EBX + 0x1e8],ESI
0071D6AC  EB 4F                     JMP 0x0071d6fd
switchD_0071d677::caseD_6:
0071D6AE  39 B3 74 01 00 00         CMP dword ptr [EBX + 0x174],ESI
0071D6B4  74 13                     JZ 0x0071d6c9
0071D6B6  8D 93 54 01 00 00         LEA EDX,[EBX + 0x154]
0071D6BC  C7 83 68 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x168],0x1
0071D6C6  52                        PUSH EDX
0071D6C7  EB 11                     JMP 0x0071d6da
LAB_0071d6c9:
0071D6C9  8D 83 34 01 00 00         LEA EAX,[EBX + 0x134]
0071D6CF  C7 83 48 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x148],0x1
0071D6D9  50                        PUSH EAX
LAB_0071d6da:
0071D6DA  8B CB                     MOV ECX,EBX
0071D6DC  E8 3F 89 FC FF            CALL 0x006e6020
0071D6E1  85 C0                     TEST EAX,EAX
0071D6E3  74 05                     JZ 0x0071d6ea
0071D6E5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071D6E8  EB 13                     JMP 0x0071d6fd
switchD_0071d677::caseD_4:
0071D6EA  C7 43 1C 01 00 00 00      MOV dword ptr [EBX + 0x1c],0x1
0071D6F1  89 B3 E8 01 00 00         MOV dword ptr [EBX + 0x1e8],ESI
LAB_0071d6f7:
0071D6F7  89 B3 9C 01 00 00         MOV dword ptr [EBX + 0x19c],ESI
LAB_0071d6fd:
0071D6FD  8B 13                     MOV EDX,dword ptr [EBX]
0071D6FF  8B CB                     MOV ECX,EBX
0071D701  FF 52 04                  CALL dword ptr [EDX + 0x4]
0071D704  85 C0                     TEST EAX,EAX
0071D706  74 08                     JZ 0x0071d710
0071D708  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071D70B  E9 B0 06 00 00            JMP 0x0071ddc0
LAB_0071d710:
0071D710  89 B3 98 01 00 00         MOV dword ptr [EBX + 0x198],ESI
0071D716  89 B3 C8 01 00 00         MOV dword ptr [EBX + 0x1c8],ESI
0071D71C  89 B3 74 01 00 00         MOV dword ptr [EBX + 0x174],ESI
0071D722  E9 99 06 00 00            JMP 0x0071ddc0
switchD_0071d549::caseD_63:
0071D727  8B 83 64 01 00 00         MOV EAX,dword ptr [EBX + 0x164]
0071D72D  85 C0                     TEST EAX,EAX
0071D72F  0F 84 8B 06 00 00         JZ 0x0071ddc0
0071D735  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071D738  33 C0                     XOR EAX,EAX
0071D73A  33 C9                     XOR ECX,ECX
0071D73C  66 8B 42 18               MOV AX,word ptr [EDX + 0x18]
0071D740  66 8B 4A 1A               MOV CX,word ptr [EDX + 0x1a]
0071D744  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
0071D747  C7 83 74 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x174],0x0
0071D751  3B C2                     CMP EAX,EDX
0071D753  7C 50                     JL 0x0071d7a5
0071D755  8B 73 2C                  MOV ESI,dword ptr [EBX + 0x2c]
0071D758  03 F2                     ADD ESI,EDX
0071D75A  3B C6                     CMP EAX,ESI
0071D75C  7D 47                     JGE 0x0071d7a5
0071D75E  8B 7B 28                  MOV EDI,dword ptr [EBX + 0x28]
0071D761  3B CF                     CMP ECX,EDI
0071D763  7C 40                     JL 0x0071d7a5
0071D765  8B 73 30                  MOV ESI,dword ptr [EBX + 0x30]
0071D768  03 F7                     ADD ESI,EDI
0071D76A  3B CE                     CMP ECX,ESI
0071D76C  7D 37                     JGE 0x0071d7a5
0071D76E  8B B3 2C 01 00 00         MOV ESI,dword ptr [EBX + 0x12c]
0071D774  85 F6                     TEST ESI,ESI
0071D776  74 1C                     JZ 0x0071d794
0071D778  83 FE FF                  CMP ESI,-0x1
0071D77B  74 17                     JZ 0x0071d794
0071D77D  2B CF                     SUB ECX,EDI
0071D77F  2B C2                     SUB EAX,EDX
0071D781  51                        PUSH ECX
0071D782  50                        PUSH EAX
0071D783  8B 83 30 01 00 00         MOV EAX,dword ptr [EBX + 0x130]
0071D789  50                        PUSH EAX
0071D78A  56                        PUSH ESI
0071D78B  E8 30 7E F9 FF            CALL 0x006b55c0
0071D790  85 C0                     TEST EAX,EAX
0071D792  74 11                     JZ 0x0071d7a5
LAB_0071d794:
0071D794  B8 01 00 00 00            MOV EAX,0x1
0071D799  89 83 74 01 00 00         MOV dword ptr [EBX + 0x174],EAX
0071D79F  89 83 C8 01 00 00         MOV dword ptr [EBX + 0x1c8],EAX
switchD_0071d549::caseD_61:
0071D7A5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071D7A8  8B 73 24                  MOV ESI,dword ptr [EBX + 0x24]
0071D7AB  33 C0                     XOR EAX,EAX
0071D7AD  33 C9                     XOR ECX,ECX
0071D7AF  66 8B 42 18               MOV AX,word ptr [EDX + 0x18]
0071D7B3  66 8B 4A 1A               MOV CX,word ptr [EDX + 0x1a]
0071D7B7  3B C6                     CMP EAX,ESI
0071D7B9  0F 8C 01 06 00 00         JL 0x0071ddc0
0071D7BF  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
0071D7C2  03 D6                     ADD EDX,ESI
0071D7C4  3B C2                     CMP EAX,EDX
0071D7C6  0F 8D F4 05 00 00         JGE 0x0071ddc0
0071D7CC  8B 7B 28                  MOV EDI,dword ptr [EBX + 0x28]
0071D7CF  3B CF                     CMP ECX,EDI
0071D7D1  0F 8C E9 05 00 00         JL 0x0071ddc0
0071D7D7  8B 53 30                  MOV EDX,dword ptr [EBX + 0x30]
0071D7DA  03 D7                     ADD EDX,EDI
0071D7DC  3B CA                     CMP ECX,EDX
0071D7DE  0F 8D DC 05 00 00         JGE 0x0071ddc0
0071D7E4  8B 93 2C 01 00 00         MOV EDX,dword ptr [EBX + 0x12c]
0071D7EA  85 D2                     TEST EDX,EDX
0071D7EC  74 20                     JZ 0x0071d80e
0071D7EE  83 FA FF                  CMP EDX,-0x1
0071D7F1  74 1B                     JZ 0x0071d80e
0071D7F3  2B CF                     SUB ECX,EDI
0071D7F5  2B C6                     SUB EAX,ESI
0071D7F7  51                        PUSH ECX
0071D7F8  50                        PUSH EAX
0071D7F9  8B 83 30 01 00 00         MOV EAX,dword ptr [EBX + 0x130]
0071D7FF  50                        PUSH EAX
0071D800  52                        PUSH EDX
0071D801  E8 BA 7D F9 FF            CALL 0x006b55c0
0071D806  85 C0                     TEST EAX,EAX
0071D808  0F 84 B2 05 00 00         JZ 0x0071ddc0
LAB_0071d80e:
0071D80E  C7 83 C8 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1c8],0x1
0071D818  BF FF FF 00 00            MOV EDI,0xffff
switchD_0071d549::caseD_2c:
0071D81D  8B 83 98 01 00 00         MOV EAX,dword ptr [EBX + 0x198]
0071D823  85 C0                     TEST EAX,EAX
0071D825  0F 85 95 05 00 00         JNZ 0x0071ddc0
0071D82B  8B 93 C8 01 00 00         MOV EDX,dword ptr [EBX + 0x1c8]
0071D831  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0071D834  33 F6                     XOR ESI,ESI
0071D836  33 C9                     XOR ECX,ECX
0071D838  3B D6                     CMP EDX,ESI
0071D83A  0F 94 C1                  SETZ CL
0071D83D  83 C0 FE                  ADD EAX,-0x2
0071D840  89 8B D0 01 00 00         MOV dword ptr [EBX + 0x1d0],ECX
0071D846  83 F8 05                  CMP EAX,0x5
0071D849  0F 87 09 01 00 00         JA 0x0071d958
switchD_0071d84f::switchD:
0071D84F  FF 24 85 CC DF 71 00      JMP dword ptr [EAX*0x4 + 0x71dfcc]
switchD_0071d84f::caseD_3:
0071D856  39 B3 DC 01 00 00         CMP dword ptr [EBX + 0x1dc],ESI
0071D85C  74 0C                     JZ 0x0071d86a
0071D85E  83 7B 1C 03               CMP dword ptr [EBX + 0x1c],0x3
0071D862  0F 84 58 05 00 00         JZ 0x0071ddc0
0071D868  33 F6                     XOR ESI,ESI
LAB_0071d86a:
0071D86A  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0071D86D  89 93 A0 01 00 00         MOV dword ptr [EBX + 0x1a0],EDX
0071D873  E9 E0 00 00 00            JMP 0x0071d958
switchD_0071d84f::caseD_2:
0071D878  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0071D87B  C7 83 AC 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1ac],0x1
0071D885  E8 26 79 FC FF            CALL 0x006e51b0
0071D88A  89 83 C0 01 00 00         MOV dword ptr [EBX + 0x1c0],EAX
0071D890  8B 83 74 01 00 00         MOV EAX,dword ptr [EBX + 0x174]
0071D896  3B C6                     CMP EAX,ESI
0071D898  89 B3 E4 01 00 00         MOV dword ptr [EBX + 0x1e4],ESI
0071D89E  74 3D                     JZ 0x0071d8dd
0071D8A0  C7 83 68 01 00 00 02 00 00 00  MOV dword ptr [EBX + 0x168],0x2
0071D8AA  8B 83 E0 01 00 00         MOV EAX,dword ptr [EBX + 0x1e0]
0071D8B0  3B C6                     CMP EAX,ESI
0071D8B2  74 0E                     JZ 0x0071d8c2
0071D8B4  66 8B 83 E4 01 00 00      MOV AX,word ptr [EBX + 0x1e4]
0071D8BB  66 89 83 6C 01 00 00      MOV word ptr [EBX + 0x16c],AX
LAB_0071d8c2:
0071D8C2  8D 8B 54 01 00 00         LEA ECX,[EBX + 0x154]
0071D8C8  51                        PUSH ECX
0071D8C9  8B CB                     MOV ECX,EBX
0071D8CB  E8 50 87 FC FF            CALL 0x006e6020
0071D8D0  85 C0                     TEST EAX,EAX
0071D8D2  0F 84 80 00 00 00         JZ 0x0071d958
0071D8D8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071D8DB  EB 7B                     JMP 0x0071d958
LAB_0071d8dd:
0071D8DD  C7 83 48 01 00 00 02 00 00 00  MOV dword ptr [EBX + 0x148],0x2
0071D8E7  8B 83 E0 01 00 00         MOV EAX,dword ptr [EBX + 0x1e0]
0071D8ED  3B C6                     CMP EAX,ESI
0071D8EF  74 0E                     JZ 0x0071d8ff
0071D8F1  66 8B 93 E4 01 00 00      MOV DX,word ptr [EBX + 0x1e4]
0071D8F8  66 89 93 4C 01 00 00      MOV word ptr [EBX + 0x14c],DX
LAB_0071d8ff:
0071D8FF  8D 83 34 01 00 00         LEA EAX,[EBX + 0x134]
0071D905  8B CB                     MOV ECX,EBX
0071D907  50                        PUSH EAX
0071D908  E8 13 87 FC FF            CALL 0x006e6020
0071D90D  85 C0                     TEST EAX,EAX
0071D90F  74 47                     JZ 0x0071d958
0071D911  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071D914  EB 42                     JMP 0x0071d958
switchD_0071d84f::caseD_6:
0071D916  39 B3 74 01 00 00         CMP dword ptr [EBX + 0x174],ESI
0071D91C  74 13                     JZ 0x0071d931
0071D91E  8D 8B 54 01 00 00         LEA ECX,[EBX + 0x154]
0071D924  C7 83 68 01 00 00 02 00 00 00  MOV dword ptr [EBX + 0x168],0x2
0071D92E  51                        PUSH ECX
0071D92F  EB 11                     JMP 0x0071d942
LAB_0071d931:
0071D931  8D 93 34 01 00 00         LEA EDX,[EBX + 0x134]
0071D937  C7 83 48 01 00 00 02 00 00 00  MOV dword ptr [EBX + 0x148],0x2
0071D941  52                        PUSH EDX
LAB_0071d942:
0071D942  8B CB                     MOV ECX,EBX
0071D944  E8 D7 86 FC FF            CALL 0x006e6020
0071D949  85 C0                     TEST EAX,EAX
0071D94B  74 05                     JZ 0x0071d952
0071D94D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071D950  EB 06                     JMP 0x0071d958
LAB_0071d952:
0071D952  89 B3 74 01 00 00         MOV dword ptr [EBX + 0x174],ESI
switchD_0071d84f::caseD_4:
0071D958  8B 03                     MOV EAX,dword ptr [EBX]
0071D95A  C7 43 1C 02 00 00 00      MOV dword ptr [EBX + 0x1c],0x2
0071D961  8B CB                     MOV ECX,EBX
0071D963  89 B3 E8 01 00 00         MOV dword ptr [EBX + 0x1e8],ESI
0071D969  C7 83 C4 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1c4],0x1
0071D973  FF 50 04                  CALL dword ptr [EAX + 0x4]
0071D976  85 C0                     TEST EAX,EAX
0071D978  74 08                     JZ 0x0071d982
0071D97A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071D97D  E9 3E 04 00 00            JMP 0x0071ddc0
LAB_0071d982:
0071D982  C7 83 98 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x198],0x1
0071D98C  E9 2F 04 00 00            JMP 0x0071ddc0
switchD_0071d549::caseD_64:
0071D991  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071D994  33 C0                     XOR EAX,EAX
0071D996  33 C9                     XOR ECX,ECX
0071D998  66 8B 42 18               MOV AX,word ptr [EDX + 0x18]
0071D99C  66 8B 4A 1A               MOV CX,word ptr [EDX + 0x1a]
0071D9A0  8B 93 64 01 00 00         MOV EDX,dword ptr [EBX + 0x164]
0071D9A6  85 D2                     TEST EDX,EDX
0071D9A8  0F 84 12 04 00 00         JZ 0x0071ddc0
0071D9AE  8B 7B 24                  MOV EDI,dword ptr [EBX + 0x24]
0071D9B1  C7 83 74 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x174],0x0
0071D9BB  3B C7                     CMP EAX,EDI
0071D9BD  7C 49                     JL 0x0071da08
0071D9BF  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
0071D9C2  03 D7                     ADD EDX,EDI
0071D9C4  3B C2                     CMP EAX,EDX
0071D9C6  7F 40                     JG 0x0071da08
0071D9C8  8B 73 28                  MOV ESI,dword ptr [EBX + 0x28]
0071D9CB  3B CE                     CMP ECX,ESI
0071D9CD  7C 39                     JL 0x0071da08
0071D9CF  8B 53 30                  MOV EDX,dword ptr [EBX + 0x30]
0071D9D2  03 D6                     ADD EDX,ESI
0071D9D4  3B CA                     CMP ECX,EDX
0071D9D6  7F 30                     JG 0x0071da08
0071D9D8  8B 93 2C 01 00 00         MOV EDX,dword ptr [EBX + 0x12c]
0071D9DE  85 D2                     TEST EDX,EDX
0071D9E0  74 1C                     JZ 0x0071d9fe
0071D9E2  83 FA FF                  CMP EDX,-0x1
0071D9E5  74 17                     JZ 0x0071d9fe
0071D9E7  2B CE                     SUB ECX,ESI
0071D9E9  2B C7                     SUB EAX,EDI
0071D9EB  51                        PUSH ECX
0071D9EC  50                        PUSH EAX
0071D9ED  8B 83 30 01 00 00         MOV EAX,dword ptr [EBX + 0x130]
0071D9F3  50                        PUSH EAX
0071D9F4  52                        PUSH EDX
0071D9F5  E8 C6 7B F9 FF            CALL 0x006b55c0
0071D9FA  85 C0                     TEST EAX,EAX
0071D9FC  74 0A                     JZ 0x0071da08
LAB_0071d9fe:
0071D9FE  C7 83 74 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x174],0x1
switchD_0071d549::caseD_62:
0071DA08  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071DA0B  8B 73 24                  MOV ESI,dword ptr [EBX + 0x24]
0071DA0E  33 C0                     XOR EAX,EAX
0071DA10  33 C9                     XOR ECX,ECX
0071DA12  66 8B 42 18               MOV AX,word ptr [EDX + 0x18]
0071DA16  66 8B 4A 1A               MOV CX,word ptr [EDX + 0x1a]
0071DA1A  3B C6                     CMP EAX,ESI
0071DA1C  0F 8C 9E 03 00 00         JL 0x0071ddc0
0071DA22  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
0071DA25  03 D6                     ADD EDX,ESI
0071DA27  3B C2                     CMP EAX,EDX
0071DA29  0F 8F 91 03 00 00         JG 0x0071ddc0
0071DA2F  8B 7B 28                  MOV EDI,dword ptr [EBX + 0x28]
0071DA32  3B CF                     CMP ECX,EDI
0071DA34  0F 8C 86 03 00 00         JL 0x0071ddc0
0071DA3A  8B 53 30                  MOV EDX,dword ptr [EBX + 0x30]
0071DA3D  03 D7                     ADD EDX,EDI
0071DA3F  3B CA                     CMP ECX,EDX
0071DA41  0F 8F 79 03 00 00         JG 0x0071ddc0
0071DA47  8B 93 2C 01 00 00         MOV EDX,dword ptr [EBX + 0x12c]
0071DA4D  85 D2                     TEST EDX,EDX
0071DA4F  74 20                     JZ 0x0071da71
0071DA51  83 FA FF                  CMP EDX,-0x1
0071DA54  74 1B                     JZ 0x0071da71
0071DA56  2B CF                     SUB ECX,EDI
0071DA58  2B C6                     SUB EAX,ESI
0071DA5A  51                        PUSH ECX
0071DA5B  50                        PUSH EAX
0071DA5C  8B 83 30 01 00 00         MOV EAX,dword ptr [EBX + 0x130]
0071DA62  50                        PUSH EAX
0071DA63  52                        PUSH EDX
0071DA64  E8 57 7B F9 FF            CALL 0x006b55c0
0071DA69  85 C0                     TEST EAX,EAX
0071DA6B  0F 84 4F 03 00 00         JZ 0x0071ddc0
LAB_0071da71:
0071DA71  BF FF FF 00 00            MOV EDI,0xffff
switchD_0071d549::caseD_2e:
0071DA76  8B 83 98 01 00 00         MOV EAX,dword ptr [EBX + 0x198]
0071DA7C  85 C0                     TEST EAX,EAX
0071DA7E  0F 84 3C 03 00 00         JZ 0x0071ddc0
0071DA84  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0071DA87  48                        DEC EAX
0071DA88  74 38                     JZ 0x0071dac2
0071DA8A  83 E8 02                  SUB EAX,0x2
0071DA8D  74 09                     JZ 0x0071da98
0071DA8F  C7 43 1C 01 00 00 00      MOV dword ptr [EBX + 0x1c],0x1
0071DA96  EB 3B                     JMP 0x0071dad3
LAB_0071da98:
0071DA98  8B 83 A0 01 00 00         MOV EAX,dword ptr [EBX + 0x1a0]
0071DA9E  83 F8 03                  CMP EAX,0x3
0071DAA1  75 0F                     JNZ 0x0071dab2
0071DAA3  8B 8B D8 01 00 00         MOV ECX,dword ptr [EBX + 0x1d8]
0071DAA9  85 C9                     TEST ECX,ECX
0071DAAB  74 05                     JZ 0x0071dab2
0071DAAD  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0071DAB0  EB 21                     JMP 0x0071dad3
LAB_0071dab2:
0071DAB2  83 E8 03                  SUB EAX,0x3
0071DAB5  F7 D8                     NEG EAX
0071DAB7  1B C0                     SBB EAX,EAX
0071DAB9  83 E0 02                  AND EAX,0x2
0071DABC  40                        INC EAX
0071DABD  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0071DAC0  EB 11                     JMP 0x0071dad3
LAB_0071dac2:
0071DAC2  8B 8B C8 01 00 00         MOV ECX,dword ptr [EBX + 0x1c8]
0071DAC8  F7 D9                     NEG ECX
0071DACA  1B C9                     SBB ECX,ECX
0071DACC  83 E1 02                  AND ECX,0x2
0071DACF  41                        INC ECX
0071DAD0  89 4B 1C                  MOV dword ptr [EBX + 0x1c],ECX
LAB_0071dad3:
0071DAD3  8B 13                     MOV EDX,dword ptr [EBX]
0071DAD5  33 F6                     XOR ESI,ESI
0071DAD7  8B CB                     MOV ECX,EBX
0071DAD9  89 B3 E8 01 00 00         MOV dword ptr [EBX + 0x1e8],ESI
0071DADF  C7 83 C4 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1c4],0x1
0071DAE9  FF 52 04                  CALL dword ptr [EDX + 0x4]
0071DAEC  85 C0                     TEST EAX,EAX
0071DAEE  74 08                     JZ 0x0071daf8
0071DAF0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071DAF3  E9 C8 02 00 00            JMP 0x0071ddc0
LAB_0071daf8:
0071DAF8  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0071DAFB  83 E8 02                  SUB EAX,0x2
0071DAFE  74 3F                     JZ 0x0071db3f
0071DB00  83 E8 05                  SUB EAX,0x5
0071DB03  74 42                     JZ 0x0071db47
0071DB05  39 B3 74 01 00 00         CMP dword ptr [EBX + 0x174],ESI
0071DB0B  74 12                     JZ 0x0071db1f
0071DB0D  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0071DB10  8D 8B 54 01 00 00         LEA ECX,[EBX + 0x154]
0071DB16  89 83 68 01 00 00         MOV dword ptr [EBX + 0x168],EAX
0071DB1C  51                        PUSH ECX
0071DB1D  EB 10                     JMP 0x0071db2f
LAB_0071db1f:
0071DB1F  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0071DB22  8D 83 34 01 00 00         LEA EAX,[EBX + 0x134]
0071DB28  89 93 48 01 00 00         MOV dword ptr [EBX + 0x148],EDX
0071DB2E  50                        PUSH EAX
LAB_0071db2f:
0071DB2F  8B CB                     MOV ECX,EBX
0071DB31  E8 EA 84 FC FF            CALL 0x006e6020
0071DB36  85 C0                     TEST EAX,EAX
0071DB38  74 0D                     JZ 0x0071db47
0071DB3A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071DB3D  EB 08                     JMP 0x0071db47
LAB_0071db3f:
0071DB3F  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0071DB42  E8 69 76 FC FF            CALL 0x006e51b0
LAB_0071db47:
0071DB47  89 B3 98 01 00 00         MOV dword ptr [EBX + 0x198],ESI
0071DB4D  C7 83 CC 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1cc],0x1
0071DB57  89 B3 D0 01 00 00         MOV dword ptr [EBX + 0x1d0],ESI
0071DB5D  89 B3 74 01 00 00         MOV dword ptr [EBX + 0x174],ESI
0071DB63  E9 58 02 00 00            JMP 0x0071ddc0
switchD_0071d549::caseD_0:
0071DB68  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0071DB6B  83 C0 FE                  ADD EAX,-0x2
0071DB6E  83 F8 05                  CMP EAX,0x5
0071DB71  0F 87 49 02 00 00         JA 0x0071ddc0
switchD_0071db77::switchD:
0071DB77  FF 24 85 E4 DF 71 00      JMP dword ptr [EAX*0x4 + 0x71dfe4]
switchD_0071db77::caseD_2:
0071DB7E  8B 83 98 01 00 00         MOV EAX,dword ptr [EBX + 0x198]
0071DB84  85 C0                     TEST EAX,EAX
0071DB86  0F 84 34 02 00 00         JZ 0x0071ddc0
0071DB8C  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0071DB8F  E8 1C 76 FC FF            CALL 0x006e51b0
0071DB94  8B F0                     MOV ESI,EAX
0071DB96  8B 83 AC 01 00 00         MOV EAX,dword ptr [EBX + 0x1ac]
0071DB9C  85 C0                     TEST EAX,EAX
0071DB9E  0F 84 A2 00 00 00         JZ 0x0071dc46
0071DBA4  8B 93 C0 01 00 00         MOV EDX,dword ptr [EBX + 0x1c0]
0071DBAA  8B 83 A4 01 00 00         MOV EAX,dword ptr [EBX + 0x1a4]
0071DBB0  8B CE                     MOV ECX,ESI
0071DBB2  2B CA                     SUB ECX,EDX
0071DBB4  3B C8                     CMP ECX,EAX
0071DBB6  0F 82 04 02 00 00         JC 0x0071ddc0
0071DBBC  8B 8B E4 01 00 00         MOV ECX,dword ptr [EBX + 0x1e4]
0071DBC2  8B 83 74 01 00 00         MOV EAX,dword ptr [EBX + 0x174]
0071DBC8  41                        INC ECX
0071DBC9  C7 83 AC 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1ac],0x0
0071DBD3  89 8B E4 01 00 00         MOV dword ptr [EBX + 0x1e4],ECX
0071DBD9  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0071DBDC  85 C0                     TEST EAX,EAX
0071DBDE  74 2A                     JZ 0x0071dc0a
0071DBE0  89 93 68 01 00 00         MOV dword ptr [EBX + 0x168],EDX
0071DBE6  8B 83 E0 01 00 00         MOV EAX,dword ptr [EBX + 0x1e0]
0071DBEC  85 C0                     TEST EAX,EAX
0071DBEE  74 0E                     JZ 0x0071dbfe
0071DBF0  66 8B 83 E4 01 00 00      MOV AX,word ptr [EBX + 0x1e4]
0071DBF7  66 89 83 6C 01 00 00      MOV word ptr [EBX + 0x16c],AX
LAB_0071dbfe:
0071DBFE  8D 8B 54 01 00 00         LEA ECX,[EBX + 0x154]
0071DC04  51                        PUSH ECX
0071DC05  E9 93 00 00 00            JMP 0x0071dc9d
LAB_0071dc0a:
0071DC0A  89 93 48 01 00 00         MOV dword ptr [EBX + 0x148],EDX
0071DC10  8B 83 E0 01 00 00         MOV EAX,dword ptr [EBX + 0x1e0]
0071DC16  85 C0                     TEST EAX,EAX
0071DC18  74 0E                     JZ 0x0071dc28
0071DC1A  66 8B 83 E4 01 00 00      MOV AX,word ptr [EBX + 0x1e4]
0071DC21  66 89 83 4C 01 00 00      MOV word ptr [EBX + 0x14c],AX
LAB_0071dc28:
0071DC28  8D 8B 34 01 00 00         LEA ECX,[EBX + 0x134]
0071DC2E  51                        PUSH ECX
0071DC2F  8B CB                     MOV ECX,EBX
0071DC31  E8 EA 83 FC FF            CALL 0x006e6020
0071DC36  85 C0                     TEST EAX,EAX
0071DC38  0F 84 7C 01 00 00         JZ 0x0071ddba
0071DC3E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071DC41  E9 7A 01 00 00            JMP 0x0071ddc0
LAB_0071dc46:
0071DC46  8B 8B C0 01 00 00         MOV ECX,dword ptr [EBX + 0x1c0]
0071DC4C  8B 83 A8 01 00 00         MOV EAX,dword ptr [EBX + 0x1a8]
0071DC52  8B D6                     MOV EDX,ESI
0071DC54  2B D1                     SUB EDX,ECX
0071DC56  3B D0                     CMP EDX,EAX
0071DC58  0F 82 62 01 00 00         JC 0x0071ddc0
0071DC5E  8B 8B E4 01 00 00         MOV ECX,dword ptr [EBX + 0x1e4]
0071DC64  8B 83 74 01 00 00         MOV EAX,dword ptr [EBX + 0x174]
0071DC6A  41                        INC ECX
0071DC6B  89 8B E4 01 00 00         MOV dword ptr [EBX + 0x1e4],ECX
0071DC71  85 C0                     TEST EAX,EAX
0071DC73  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0071DC76  74 3C                     JZ 0x0071dcb4
0071DC78  89 83 68 01 00 00         MOV dword ptr [EBX + 0x168],EAX
0071DC7E  8B 83 E0 01 00 00         MOV EAX,dword ptr [EBX + 0x1e0]
0071DC84  85 C0                     TEST EAX,EAX
0071DC86  74 0E                     JZ 0x0071dc96
0071DC88  66 8B 8B E4 01 00 00      MOV CX,word ptr [EBX + 0x1e4]
0071DC8F  66 89 8B 6C 01 00 00      MOV word ptr [EBX + 0x16c],CX
LAB_0071dc96:
0071DC96  8D 93 54 01 00 00         LEA EDX,[EBX + 0x154]
0071DC9C  52                        PUSH EDX
LAB_0071dc9d:
0071DC9D  8B CB                     MOV ECX,EBX
0071DC9F  E8 7C 83 FC FF            CALL 0x006e6020
0071DCA4  85 C0                     TEST EAX,EAX
0071DCA6  0F 84 0E 01 00 00         JZ 0x0071ddba
0071DCAC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071DCAF  E9 0C 01 00 00            JMP 0x0071ddc0
LAB_0071dcb4:
0071DCB4  89 83 48 01 00 00         MOV dword ptr [EBX + 0x148],EAX
0071DCBA  8B 83 E0 01 00 00         MOV EAX,dword ptr [EBX + 0x1e0]
0071DCC0  85 C0                     TEST EAX,EAX
0071DCC2  74 0E                     JZ 0x0071dcd2
0071DCC4  66 8B 8B E4 01 00 00      MOV CX,word ptr [EBX + 0x1e4]
0071DCCB  66 89 8B 4C 01 00 00      MOV word ptr [EBX + 0x14c],CX
LAB_0071dcd2:
0071DCD2  8D 93 34 01 00 00         LEA EDX,[EBX + 0x134]
0071DCD8  8B CB                     MOV ECX,EBX
0071DCDA  52                        PUSH EDX
0071DCDB  E8 40 83 FC FF            CALL 0x006e6020
0071DCE0  85 C0                     TEST EAX,EAX
0071DCE2  0F 84 D2 00 00 00         JZ 0x0071ddba
0071DCE8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071DCEB  E9 D0 00 00 00            JMP 0x0071ddc0
switchD_0071db77::caseD_5:
0071DCF0  8B 83 C4 01 00 00         MOV EAX,dword ptr [EBX + 0x1c4]
0071DCF6  85 C0                     TEST EAX,EAX
0071DCF8  0F 84 C2 00 00 00         JZ 0x0071ddc0
0071DCFE  8B 84 8B B0 01 00 00      MOV EAX,dword ptr [EBX + ECX*0x4 + 0x1b0]
0071DD05  8B 93 E8 01 00 00         MOV EDX,dword ptr [EBX + 0x1e8]
0071DD0B  48                        DEC EAX
0071DD0C  3B D0                     CMP EDX,EAX
0071DD0E  7C 54                     JL 0x0071dd64
0071DD10  33 C9                     XOR ECX,ECX
0071DD12  89 8B E8 01 00 00         MOV dword ptr [EBX + 0x1e8],ECX
0071DD18  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0071DD1B  48                        DEC EAX
0071DD1C  89 8B C4 01 00 00         MOV dword ptr [EBX + 0x1c4],ECX
0071DD22  89 8B 74 01 00 00         MOV dword ptr [EBX + 0x174],ECX
0071DD28  74 16                     JZ 0x0071dd40
0071DD2A  83 E8 02                  SUB EAX,0x2
0071DD2D  75 25                     JNZ 0x0071dd54
0071DD2F  39 8B C8 01 00 00         CMP dword ptr [EBX + 0x1c8],ECX
0071DD35  75 1D                     JNZ 0x0071dd54
0071DD37  C7 43 1C 01 00 00 00      MOV dword ptr [EBX + 0x1c],0x1
0071DD3E  EB 0E                     JMP 0x0071dd4e
LAB_0071dd40:
0071DD40  39 8B C8 01 00 00         CMP dword ptr [EBX + 0x1c8],ECX
0071DD46  75 0C                     JNZ 0x0071dd54
0071DD48  89 8B CC 01 00 00         MOV dword ptr [EBX + 0x1cc],ECX
LAB_0071dd4e:
0071DD4E  89 8B 9C 01 00 00         MOV dword ptr [EBX + 0x19c],ECX
LAB_0071dd54:
0071DD54  8B 13                     MOV EDX,dword ptr [EBX]
0071DD56  8B CB                     MOV ECX,EBX
0071DD58  FF 52 04                  CALL dword ptr [EDX + 0x4]
0071DD5B  85 C0                     TEST EAX,EAX
0071DD5D  74 61                     JZ 0x0071ddc0
0071DD5F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071DD62  EB 5C                     JMP 0x0071ddc0
switchD_0071db77::caseD_4:
0071DD64  83 BC 8B B0 01 00 00 01   CMP dword ptr [EBX + ECX*0x4 + 0x1b0],0x1
0071DD6C  7E 52                     JLE 0x0071ddc0
0071DD6E  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0071DD71  E8 3A 74 FC FF            CALL 0x006e51b0
0071DD76  8B 93 C0 01 00 00         MOV EDX,dword ptr [EBX + 0x1c0]
0071DD7C  8B 8B A8 01 00 00         MOV ECX,dword ptr [EBX + 0x1a8]
0071DD82  8B F0                     MOV ESI,EAX
0071DD84  2B C2                     SUB EAX,EDX
0071DD86  3B C1                     CMP EAX,ECX
0071DD88  76 36                     JBE 0x0071ddc0
0071DD8A  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0071DD8D  8B 83 E8 01 00 00         MOV EAX,dword ptr [EBX + 0x1e8]
0071DD93  8B 94 8B B0 01 00 00      MOV EDX,dword ptr [EBX + ECX*0x4 + 0x1b0]
0071DD9A  4A                        DEC EDX
0071DD9B  3B C2                     CMP EAX,EDX
0071DD9D  7D 03                     JGE 0x0071dda2
0071DD9F  40                        INC EAX
0071DDA0  EB 02                     JMP 0x0071dda4
LAB_0071dda2:
0071DDA2  33 C0                     XOR EAX,EAX
LAB_0071dda4:
0071DDA4  89 83 E8 01 00 00         MOV dword ptr [EBX + 0x1e8],EAX
0071DDAA  8B 03                     MOV EAX,dword ptr [EBX]
0071DDAC  8B CB                     MOV ECX,EBX
0071DDAE  FF 50 04                  CALL dword ptr [EAX + 0x4]
0071DDB1  85 C0                     TEST EAX,EAX
0071DDB3  74 05                     JZ 0x0071ddba
0071DDB5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071DDB8  EB 06                     JMP 0x0071ddc0
LAB_0071ddba:
0071DDBA  89 B3 C0 01 00 00         MOV dword ptr [EBX + 0x1c0],ESI
switchD_0071d549::caseD_1:
0071DDC0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071DDC3  85 C0                     TEST EAX,EAX
0071DDC5  74 17                     JZ 0x0071ddde
0071DDC7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0071DDCD  68 A6 01 00 00            PUSH 0x1a6
0071DDD2  68 30 0A 7F 00            PUSH 0x7f0a30
0071DDD7  51                        PUSH ECX
0071DDD8  50                        PUSH EAX
0071DDD9  E8 62 80 F8 FF            CALL 0x006a5e40
LAB_0071ddde:
0071DDDE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071DDE1  8B CB                     MOV ECX,EBX
0071DDE3  52                        PUSH EDX
0071DDE4  E8 97 D9 00 00            CALL 0x0072b780
0071DDE9  8B F0                     MOV ESI,EAX
0071DDEB  85 F6                     TEST ESI,ESI
0071DDED  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0071DDF0  74 16                     JZ 0x0071de08
0071DDF2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071DDF7  68 A8 01 00 00            PUSH 0x1a8
0071DDFC  68 30 0A 7F 00            PUSH 0x7f0a30
0071DE01  50                        PUSH EAX
0071DE02  56                        PUSH ESI
0071DE03  E8 38 80 F8 FF            CALL 0x006a5e40
LAB_0071de08:
0071DE08  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0071DE0B  8B C6                     MOV EAX,ESI
0071DE0D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071DE13  5F                        POP EDI
0071DE14  5E                        POP ESI
0071DE15  5B                        POP EBX
0071DE16  8B E5                     MOV ESP,EBP
0071DE18  5D                        POP EBP
0071DE19  C2 04 00                  RET 0x4
LAB_0071de1c:
0071DE1C  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0071DE1F  68 0C 0A 7F 00            PUSH 0x7f0a0c
0071DE24  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071DE29  50                        PUSH EAX
0071DE2A  6A 00                     PUSH 0x0
0071DE2C  68 AA 01 00 00            PUSH 0x1aa
0071DE31  68 30 0A 7F 00            PUSH 0x7f0a30
0071DE36  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071DE3C  E8 8F F6 F8 FF            CALL 0x006ad4d0
0071DE41  83 C4 18                  ADD ESP,0x18
0071DE44  85 C0                     TEST EAX,EAX
0071DE46  74 01                     JZ 0x0071de49
0071DE48  CC                        INT3
LAB_0071de49:
0071DE49  68 AB 01 00 00            PUSH 0x1ab
0071DE4E  68 30 0A 7F 00            PUSH 0x7f0a30
0071DE53  6A 00                     PUSH 0x0
0071DE55  68 FF FF 00 00            PUSH 0xffff
0071DE5A  E8 E1 7F F8 FF            CALL 0x006a5e40
0071DE5F  5F                        POP EDI
0071DE60  5E                        POP ESI
0071DE61  B8 FF FF 00 00            MOV EAX,0xffff
0071DE66  5B                        POP EBX
0071DE67  8B E5                     MOV ESP,EBP
0071DE69  5D                        POP EBP
0071DE6A  C2 04 00                  RET 0x4
