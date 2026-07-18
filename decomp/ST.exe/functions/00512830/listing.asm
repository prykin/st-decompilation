FUN_00512830:
00512830  55                        PUSH EBP
00512831  8B EC                     MOV EBP,ESP
00512833  81 EC 20 04 00 00         SUB ESP,0x420
00512839  53                        PUSH EBX
0051283A  56                        PUSH ESI
0051283B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051283E  57                        PUSH EDI
0051283F  B9 F6 00 00 00            MOV ECX,0xf6
00512844  33 C0                     XOR EAX,EAX
00512846  8D BD E0 FB FF FF         LEA EDI,[EBP + 0xfffffbe0]
0051284C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0051284F  F3 AB                     STOSD.REP ES:EDI
00512851  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00512856  33 FF                     XOR EDI,EDI
00512858  8D 4D B8                  LEA ECX,[EBP + -0x48]
0051285B  57                        PUSH EDI
0051285C  52                        PUSH EDX
0051285D  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00512860  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00512866  E8 85 AF 21 00            CALL 0x0072d7f0
0051286B  8B F0                     MOV ESI,EAX
0051286D  83 C4 08                  ADD ESP,0x8
00512870  3B F7                     CMP ESI,EDI
00512872  0F 85 5A 02 00 00         JNZ 0x00512ad2
00512878  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0051287B  8B 83 9C 01 00 00         MOV EAX,dword ptr [EBX + 0x19c]
00512881  3B C7                     CMP EAX,EDI
00512883  74 09                     JZ 0x0051288e
00512885  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00512888  50                        PUSH EAX
00512889  E8 22 2E 1D 00            CALL 0x006e56b0
LAB_0051288e:
0051288E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00512891  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
00512894  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00512897  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0051289A  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
0051289D  BE 02 00 00 00            MOV ESI,0x2
005128A2  81 C2 C3 01 00 00         ADD EDX,0x1c3
005128A8  3B C7                     CMP EAX,EDI
005128AA  89 BB C3 01 00 00         MOV dword ptr [EBX + 0x1c3],EDI
005128B0  89 BD E0 FB FF FF         MOV dword ptr [EBP + 0xfffffbe0],EDI
005128B6  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
005128B9  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
005128BC  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
005128BF  C7 45 90 00 62 00 00      MOV dword ptr [EBP + -0x70],0x6200
005128C6  89 B5 E4 FB FF FF         MOV dword ptr [EBP + 0xfffffbe4],ESI
005128CC  89 BD E8 FB FF FF         MOV dword ptr [EBP + 0xfffffbe8],EDI
005128D2  89 B5 EC FB FF FF         MOV dword ptr [EBP + 0xfffffbec],ESI
005128D8  89 95 F0 FB FF FF         MOV dword ptr [EBP + 0xfffffbf0],EDX
005128DE  75 07                     JNZ 0x005128e7
005128E0  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
005128E3  F7 D8                     NEG EAX
005128E5  EB 03                     JMP 0x005128ea
LAB_005128e7:
005128E7  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_005128ea:
005128EA  05 09 01 00 00            ADD EAX,0x109
005128EF  BF 01 00 00 00            MOV EDI,0x1
005128F4  89 85 F4 FB FF FF         MOV dword ptr [EBP + 0xfffffbf4],EAX
005128FA  A1 90 67 80 00            MOV EAX,[0x00806790]
005128FF  57                        PUSH EDI
00512900  6A 00                     PUSH 0x0
00512902  68 D4 39 7C 00            PUSH 0x7c39d4
00512907  50                        PUSH EAX
00512908  C7 85 F8 FB FF FF 11 00 00 00  MOV dword ptr [EBP + 0xfffffbf8],0x11
00512912  C7 85 FC FB FF FF 24 00 00 00  MOV dword ptr [EBP + 0xfffffbfc],0x24
0051291C  C7 85 F8 FC FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffcf8],0x1f4
00512926  C7 85 FC FC FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffffcfc],0x32
00512930  E8 3B 81 1F 00            CALL 0x0070aa70
00512935  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0051293B  57                        PUSH EDI
0051293C  68 D4 39 7C 00            PUSH 0x7c39d4
00512941  6A 12                     PUSH 0x12
00512943  51                        PUSH ECX
00512944  89 85 0C FD FF FF         MOV dword ptr [EBP + 0xfffffd0c],EAX
0051294A  E8 A1 7D 1F 00            CALL 0x0070a6f0
0051294F  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
00512952  89 85 10 FD FF FF         MOV dword ptr [EBP + 0xfffffd10],EAX
00512958  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
0051295B  89 B5 4C FC FF FF         MOV dword ptr [EBP + 0xfffffc4c],ESI
00512961  89 BD F0 FC FF FF         MOV dword ptr [EBP + 0xfffffcf0],EDI
00512967  89 BD F4 FC FF FF         MOV dword ptr [EBP + 0xfffffcf4],EDI
0051296D  89 B5 64 FD FF FF         MOV dword ptr [EBP + 0xfffffd64],ESI
00512973  83 C4 20                  ADD ESP,0x20
00512976  B9 5F 00 00 00            MOV ECX,0x5f
0051297B  8D B5 E8 FB FF FF         LEA ESI,[EBP + 0xfffffbe8]
00512981  8D BD 68 FD FF FF         LEA EDI,[EBP + 0xfffffd68]
00512987  89 95 48 FC FF FF         MOV dword ptr [EBP + 0xfffffc48],EDX
0051298D  C7 85 50 FC FF FF 65 81 00 00  MOV dword ptr [EBP + 0xfffffc50],0x8165
00512997  85 C0                     TEST EAX,EAX
00512999  F3 A5                     MOVSD.REP ES:EDI,ESI
0051299B  75 07                     JNZ 0x005129a4
0051299D  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
005129A0  F7 D8                     NEG EAX
005129A2  EB 03                     JMP 0x005129a7
LAB_005129a4:
005129A4  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_005129a7:
005129A7  83 C0 16                  ADD EAX,0x16
005129AA  BF 01 00 00 00            MOV EDI,0x1
005129AF  89 85 74 FD FF FF         MOV dword ptr [EBP + 0xfffffd74],EAX
005129B5  A1 90 67 80 00            MOV EAX,[0x00806790]
005129BA  57                        PUSH EDI
005129BB  6A 00                     PUSH 0x0
005129BD  68 E0 39 7C 00            PUSH 0x7c39e0
005129C2  50                        PUSH EAX
005129C3  E8 A8 80 1F 00            CALL 0x0070aa70
005129C8  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
005129CE  57                        PUSH EDI
005129CF  68 E0 39 7C 00            PUSH 0x7c39e0
005129D4  6A 12                     PUSH 0x12
005129D6  51                        PUSH ECX
005129D7  89 85 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],EAX
005129DD  E8 0E 7D 1F 00            CALL 0x0070a6f0
005129E2  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
005129E5  89 85 90 FE FF FF         MOV dword ptr [EBP + 0xfffffe90],EAX
005129EB  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
005129EE  83 C4 20                  ADD ESP,0x20
005129F1  81 C2 C3 01 00 00         ADD EDX,0x1c3
005129F7  C7 85 D0 FD FF FF 64 81 00 00  MOV dword ptr [EBP + 0xfffffdd0],0x8164
00512A01  85 C0                     TEST EAX,EAX
00512A03  C7 85 E4 FE FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffffee4],0x3
00512A0D  89 BD E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDI
00512A13  C7 85 F0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffef0],0x0
00512A1D  89 95 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EDX
00512A23  75 07                     JNZ 0x00512a2c
00512A25  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
00512A28  F7 D8                     NEG EAX
00512A2A  EB 03                     JMP 0x00512a2f
LAB_00512a2c:
00512A2C  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_00512a2f:
00512A2F  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00512A32  83 C0 3D                  ADD EAX,0x3d
00512A35  89 85 F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EAX
00512A3B  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00512A3E  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
00512A44  8D 85 E0 FB FF FF         LEA EAX,[EBP + 0xfffffbe0]
00512A4A  6A 00                     PUSH 0x0
00512A4C  50                        PUSH EAX
00512A4D  8D B3 9C 01 00 00         LEA ESI,[EBX + 0x19c]
00512A53  C7 85 FC FE FF FF 11 00 00 00  MOV dword ptr [EBP + 0xfffffefc],0x11
00512A5D  C7 85 00 FF FF FF C9 00 00 00  MOV dword ptr [EBP + 0xffffff00],0xc9
00512A67  C7 85 04 FF FF FF 15 00 00 00  MOV dword ptr [EBP + 0xffffff04],0x15
00512A71  C7 85 3C FF FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffff3c],0x2
00512A7B  C7 85 40 FF FF FF 66 81 00 00  MOV dword ptr [EBP + 0xffffff40],0x8166
00512A85  89 BD 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDI
00512A8B  89 BD 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDI
00512A91  8B 11                     MOV EDX,dword ptr [ECX]
00512A93  6A 00                     PUSH 0x0
00512A95  56                        PUSH ESI
00512A96  6A 04                     PUSH 0x4
00512A98  FF 52 08                  CALL dword ptr [EDX + 0x8]
00512A9B  8B 36                     MOV ESI,dword ptr [ESI]
00512A9D  85 F6                     TEST ESI,ESI
00512A9F  74 1F                     JZ 0x00512ac0
00512AA1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00512AA4  85 C0                     TEST EAX,EAX
00512AA6  74 18                     JZ 0x00512ac0
00512AA8  8D 4B 18                  LEA ECX,[EBX + 0x18]
00512AAB  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00512AB2  51                        PUSH ECX
00512AB3  56                        PUSH ESI
00512AB4  6A 02                     PUSH 0x2
00512AB6  8B CB                     MOV ECX,EBX
00512AB8  89 7B 2C                  MOV dword ptr [EBX + 0x2c],EDI
00512ABB  E8 C0 35 1D 00            CALL 0x006e6080
LAB_00512ac0:
00512AC0  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00512AC3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00512AC9  5F                        POP EDI
00512ACA  5E                        POP ESI
00512ACB  5B                        POP EBX
00512ACC  8B E5                     MOV ESP,EBP
00512ACE  5D                        POP EBP
00512ACF  C2 04 00                  RET 0x4
LAB_00512ad2:
00512AD2  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00512AD5  68 EC 39 7C 00            PUSH 0x7c39ec
00512ADA  68 CC 4C 7A 00            PUSH 0x7a4ccc
00512ADF  56                        PUSH ESI
00512AE0  57                        PUSH EDI
00512AE1  68 DF 01 00 00            PUSH 0x1df
00512AE6  68 3C 38 7C 00            PUSH 0x7c383c
00512AEB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00512AF0  E8 DB A9 19 00            CALL 0x006ad4d0
00512AF5  83 C4 18                  ADD ESP,0x18
00512AF8  85 C0                     TEST EAX,EAX
00512AFA  74 01                     JZ 0x00512afd
00512AFC  CC                        INT3
LAB_00512afd:
00512AFD  68 DF 01 00 00            PUSH 0x1df
00512B02  68 3C 38 7C 00            PUSH 0x7c383c
00512B07  57                        PUSH EDI
00512B08  56                        PUSH ESI
00512B09  E8 32 33 19 00            CALL 0x006a5e40
00512B0E  5F                        POP EDI
00512B0F  5E                        POP ESI
00512B10  5B                        POP EBX
00512B11  8B E5                     MOV ESP,EBP
00512B13  5D                        POP EBP
00512B14  C2 04 00                  RET 0x4
