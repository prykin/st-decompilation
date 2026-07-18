HelpPanelTy::BackBut:
00513810  55                        PUSH EBP
00513811  8B EC                     MOV EBP,ESP
00513813  83 EC 4C                  SUB ESP,0x4c
00513816  8A 81 A1 01 00 00         MOV AL,byte ptr [ECX + 0x1a1]
0051381C  8A 91 A2 01 00 00         MOV DL,byte ptr [ECX + 0x1a2]
00513822  53                        PUSH EBX
00513823  56                        PUSH ESI
00513824  3A C2                     CMP AL,DL
00513826  57                        PUSH EDI
00513827  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0051382A  0F 84 8C 01 00 00         JZ 0x005139bc
00513830  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00513836  8D 45 B8                  LEA EAX,[EBP + -0x48]
00513839  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0051383C  6A 00                     PUSH 0x0
0051383E  50                        PUSH EAX
0051383F  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00513842  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00513848  E8 A3 9F 21 00            CALL 0x0072d7f0
0051384D  8B F0                     MOV ESI,EAX
0051384F  83 C4 08                  ADD ESP,0x8
00513852  85 F6                     TEST ESI,ESI
00513854  0F 85 23 01 00 00         JNZ 0x0051397d
0051385A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0051385D  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
00513863  85 C0                     TEST EAX,EAX
00513865  74 28                     JZ 0x0051388f
00513867  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
0051386E  66 C7 46 2C 00 00         MOV word ptr [ESI + 0x2c],0x0
00513874  66 C7 46 2E 02 00         MOV word ptr [ESI + 0x2e],0x2
0051387A  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0051387D  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00513883  85 C9                     TEST ECX,ECX
00513885  74 08                     JZ 0x0051388f
00513887  8B 11                     MOV EDX,dword ptr [ECX]
00513889  8D 46 18                  LEA EAX,[ESI + 0x18]
0051388C  50                        PUSH EAX
0051388D  FF 12                     CALL dword ptr [EDX]
LAB_0051388f:
0051388F  8A 86 A2 01 00 00         MOV AL,byte ptr [ESI + 0x1a2]
00513895  84 C0                     TEST AL,AL
00513897  74 3D                     JZ 0x005138d6
00513899  3C 06                     CMP AL,0x6
0051389B  74 13                     JZ 0x005138b0
0051389D  3C 0A                     CMP AL,0xa
0051389F  74 35                     JZ 0x005138d6
005138A1  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005138A4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005138A9  5F                        POP EDI
005138AA  5E                        POP ESI
005138AB  5B                        POP EBX
005138AC  8B E5                     MOV ESP,EBP
005138AE  5D                        POP EBP
005138AF  C3                        RET
LAB_005138b0:
005138B0  8B 8E AB 01 00 00         MOV ECX,dword ptr [ESI + 0x1ab]
005138B6  6A 00                     PUSH 0x0
005138B8  51                        PUSH ECX
005138B9  8B CE                     MOV ECX,ESI
005138BB  E8 A1 25 EF FF            CALL 0x00405e61
005138C0  8B CE                     MOV ECX,ESI
005138C2  E8 39 18 EF FF            CALL 0x00405100
005138C7  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005138CA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005138CF  5F                        POP EDI
005138D0  5E                        POP ESI
005138D1  5B                        POP EBX
005138D2  8B E5                     MOV ESP,EBP
005138D4  5D                        POP EBP
005138D5  C3                        RET
LAB_005138d6:
005138D6  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
005138D9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005138DC  68 18 01 00 00            PUSH 0x118
005138E1  68 B8 01 00 00            PUSH 0x1b8
005138E6  88 86 A1 01 00 00         MOV byte ptr [ESI + 0x1a1],AL
005138EC  8B 86 DC 01 00 00         MOV EAX,dword ptr [ESI + 0x1dc]
005138F2  6A 16                     PUSH 0x16
005138F4  6A 21                     PUSH 0x21
005138F6  6A 00                     PUSH 0x0
005138F8  50                        PUSH EAX
005138F9  6A 16                     PUSH 0x16
005138FB  6A 21                     PUSH 0x21
005138FD  6A 00                     PUSH 0x0
005138FF  51                        PUSH ECX
00513900  89 96 A3 01 00 00         MOV dword ptr [ESI + 0x1a3],EDX
00513906  E8 E5 1C 1A 00            CALL 0x006b55f0
0051390B  8B CE                     MOV ECX,ESI
0051390D  E8 BB E1 EE FF            CALL 0x00401acd
00513912  8A 86 A2 01 00 00         MOV AL,byte ptr [ESI + 0x1a2]
00513918  84 C0                     TEST AL,AL
0051391A  75 08                     JNZ 0x00513924
0051391C  8B 9E B7 01 00 00         MOV EBX,dword ptr [ESI + 0x1b7]
00513922  EB 06                     JMP 0x0051392a
LAB_00513924:
00513924  8B 9E BF 01 00 00         MOV EBX,dword ptr [ESI + 0x1bf]
LAB_0051392a:
0051392A  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
00513930  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00513933  85 C0                     TEST EAX,EAX
00513935  74 37                     JZ 0x0051396e
00513937  8D 56 18                  LEA EDX,[ESI + 0x18]
0051393A  B9 08 00 00 00            MOV ECX,0x8
0051393F  33 C0                     XOR EAX,EAX
00513941  8B FA                     MOV EDI,EDX
00513943  F3 AB                     STOSD.REP ES:EDI
00513945  52                        PUSH EDX
00513946  8B 96 9C 01 00 00         MOV EDX,dword ptr [ESI + 0x19c]
0051394C  B8 01 00 00 00            MOV EAX,0x1
00513951  52                        PUSH EDX
00513952  6A 02                     PUSH 0x2
00513954  8B CE                     MOV ECX,ESI
00513956  C7 46 28 22 00 00 00      MOV dword ptr [ESI + 0x28],0x22
0051395D  66 89 5E 2C               MOV word ptr [ESI + 0x2c],BX
00513961  66 89 46 30               MOV word ptr [ESI + 0x30],AX
00513965  66 89 46 32               MOV word ptr [ESI + 0x32],AX
00513969  E8 12 27 1D 00            CALL 0x006e6080
LAB_0051396e:
0051396E  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00513971  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00513976  5F                        POP EDI
00513977  5E                        POP ESI
00513978  5B                        POP EBX
00513979  8B E5                     MOV ESP,EBP
0051397B  5D                        POP EBP
0051397C  C3                        RET
LAB_0051397d:
0051397D  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00513980  68 80 3A 7C 00            PUSH 0x7c3a80
00513985  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051398A  56                        PUSH ESI
0051398B  6A 00                     PUSH 0x0
0051398D  68 B3 02 00 00            PUSH 0x2b3
00513992  68 3C 38 7C 00            PUSH 0x7c383c
00513997  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051399D  E8 2E 9B 19 00            CALL 0x006ad4d0
005139A2  83 C4 18                  ADD ESP,0x18
005139A5  85 C0                     TEST EAX,EAX
005139A7  74 01                     JZ 0x005139aa
005139A9  CC                        INT3
LAB_005139aa:
005139AA  68 B3 02 00 00            PUSH 0x2b3
005139AF  68 3C 38 7C 00            PUSH 0x7c383c
005139B4  6A 00                     PUSH 0x0
005139B6  56                        PUSH ESI
005139B7  E8 84 24 19 00            CALL 0x006a5e40
LAB_005139bc:
005139BC  5F                        POP EDI
005139BD  5E                        POP ESI
005139BE  5B                        POP EBX
005139BF  8B E5                     MOV ESP,EBP
005139C1  5D                        POP EBP
005139C2  C3                        RET
