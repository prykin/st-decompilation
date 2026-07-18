MMsgTy::SetMessage:
005B7EF0  55                        PUSH EBP
005B7EF1  8B EC                     MOV EBP,ESP
005B7EF3  81 EC 74 04 00 00         SUB ESP,0x474
005B7EF9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B7EFC  53                        PUSH EBX
005B7EFD  56                        PUSH ESI
005B7EFE  57                        PUSH EDI
005B7EFF  85 C0                     TEST EAX,EAX
005B7F01  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005B7F04  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
005B7F08  0F 84 E6 06 00 00         JZ 0x005b85f4
005B7F0E  8A 81 A9 1C 00 00         MOV AL,byte ptr [ECX + 0x1ca9]
005B7F14  84 C0                     TEST AL,AL
005B7F16  0F 85 D8 06 00 00         JNZ 0x005b85f4
005B7F1C  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B7F21  8D 55 90                  LEA EDX,[EBP + -0x70]
005B7F24  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005B7F27  6A 00                     PUSH 0x0
005B7F29  52                        PUSH EDX
005B7F2A  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
005B7F2D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B7F33  E8 B8 58 17 00            CALL 0x0072d7f0
005B7F38  8B F0                     MOV ESI,EAX
005B7F3A  83 C4 08                  ADD ESP,0x8
005B7F3D  85 F6                     TEST ESI,ESI
005B7F3F  0F 85 70 06 00 00         JNZ 0x005b85b5
005B7F45  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005B7F48  8B 93 AB 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cab]
005B7F4E  85 D2                     TEST EDX,EDX
005B7F50  74 27                     JZ 0x005b7f79
005B7F52  B9 08 00 00 00            MOV ECX,0x8
005B7F57  8D 7D D0                  LEA EDI,[EBP + -0x30]
005B7F5A  F3 AB                     STOSD.REP ES:EDI
005B7F5C  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005B7F5F  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
005B7F62  C7 45 DC 02 00 00 00      MOV dword ptr [EBP + -0x24],0x2
005B7F69  C7 45 E0 40 69 00 00      MOV dword ptr [EBP + -0x20],0x6940
005B7F70  8B 01                     MOV EAX,dword ptr [ECX]
005B7F72  8D 55 D0                  LEA EDX,[EBP + -0x30]
005B7F75  52                        PUSH EDX
005B7F76  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005b7f79:
005B7F79  8D B3 D0 1C 00 00         LEA ESI,[EBX + 0x1cd0]
005B7F7F  B9 09 00 00 00            MOV ECX,0x9
005B7F84  8D BB 60 1A 00 00         LEA EDI,[EBX + 0x1a60]
005B7F8A  C6 83 A9 1C 00 00 01      MOV byte ptr [EBX + 0x1ca9],0x1
005B7F91  F3 A5                     MOVSD.REP ES:EDI,ESI
005B7F93  66 A5                     MOVSW ES:EDI,ESI
005B7F95  A4                        MOVSB ES:EDI,ESI
005B7F96  8A 43 65                  MOV AL,byte ptr [EBX + 0x65]
005B7F99  B9 06 00 00 00            MOV ECX,0x6
005B7F9E  88 83 5F 1A 00 00         MOV byte ptr [EBX + 0x1a5f],AL
005B7FA4  33 C0                     XOR EAX,EAX
005B7FA6  8D BB 82 1C 00 00         LEA EDI,[EBX + 0x1c82]
005B7FAC  C7 43 2D 21 00 00 00      MOV dword ptr [EBX + 0x2d],0x21
005B7FB3  F3 AB                     STOSD.REP ES:EDI
005B7FB5  66 AB                     STOSW ES:EDI
005B7FB7  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B7FBD  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005B7FC1  84 C0                     TEST AL,AL
005B7FC3  76 76                     JBE 0x005b803b
LAB_005b7fc5:
005B7FC5  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005B7FC8  81 E7 FF 00 00 00         AND EDI,0xff
005B7FCE  8B 44 BB 66               MOV EAX,dword ptr [EBX + EDI*0x4 + 0x66]
005B7FD2  85 C0                     TEST EAX,EAX
005B7FD4  74 21                     JZ 0x005b7ff7
005B7FD6  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005B7FD9  51                        PUSH ECX
005B7FDA  50                        PUSH EAX
005B7FDB  6A 02                     PUSH 0x2
005B7FDD  8B CB                     MOV ECX,EBX
005B7FDF  E8 9C E0 12 00            CALL 0x006e6080
005B7FE4  8B 53 31                  MOV EDX,dword ptr [EBX + 0x31]
005B7FE7  F7 DA                     NEG EDX
005B7FE9  1B D2                     SBB EDX,EDX
005B7FEB  83 E2 02                  AND EDX,0x2
005B7FEE  4A                        DEC EDX
005B7FEF  66 89 94 7B 82 1C 00 00   MOV word ptr [EBX + EDI*0x2 + 0x1c82],DX
LAB_005b7ff7:
005B7FF7  8D 04 FD 00 00 00 00      LEA EAX,[EDI*0x8 + 0x0]
005B7FFE  B9 09 00 00 00            MOV ECX,0x9
005B8003  2B C7                     SUB EAX,EDI
005B8005  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005B8008  8D 04 C7                  LEA EAX,[EDI + EAX*0x8]
005B800B  8D 14 43                  LEA EDX,[EBX + EAX*0x2]
005B800E  8D B4 10 BC 00 00 00      LEA ESI,[EAX + EDX*0x1 + 0xbc]
005B8015  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
005B8018  C1 E0 03                  SHL EAX,0x3
005B801B  2B C7                     SUB EAX,EDI
005B801D  8D BC 18 87 1A 00 00      LEA EDI,[EAX + EBX*0x1 + 0x1a87]
005B8024  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
005B8027  F3 A5                     MOVSD.REP ES:EDI,ESI
005B8029  66 A5                     MOVSW ES:EDI,ESI
005B802B  A4                        MOVSB ES:EDI,ESI
005B802C  8A 8B 9A 00 00 00         MOV CL,byte ptr [EBX + 0x9a]
005B8032  FE C0                     INC AL
005B8034  3A C1                     CMP AL,CL
005B8036  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005B8039  72 8A                     JC 0x005b7fc5
LAB_005b803b:
005B803B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005B803E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005B8041  85 C0                     TEST EAX,EAX
005B8043  89 B3 D0 1C 00 00         MOV dword ptr [EBX + 0x1cd0],ESI
005B8049  74 71                     JZ 0x005b80bc
005B804B  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005B8051  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
005B8054  50                        PUSH EAX
005B8055  51                        PUSH ECX
005B8056  52                        PUSH EDX
005B8057  E8 E4 80 0F 00            CALL 0x006b0140
005B805C  50                        PUSH EAX
005B805D  A1 18 76 80 00            MOV EAX,[0x00807618]
005B8062  50                        PUSH EAX
005B8063  56                        PUSH ESI
005B8064  E8 D7 80 0F 00            CALL 0x006b0140
005B8069  50                        PUSH EAX
005B806A  8D 8D 8C FB FF FF         LEA ECX,[EBP + 0xfffffb8c]
005B8070  68 A4 CC 7C 00            PUSH 0x7ccca4
005B8075  51                        PUSH ECX
005B8076  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005B807C  83 C4 14                  ADD ESP,0x14
005B807F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B8084  8B B3 88 1D 00 00         MOV ESI,dword ptr [EBX + 0x1d88]
005B808A  8D BB 88 1D 00 00         LEA EDI,[EBX + 0x1d88]
005B8090  6A FF                     PUSH -0x1
005B8092  6A 07                     PUSH 0x7
005B8094  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005B8097  6A FF                     PUSH -0x1
005B8099  6A FF                     PUSH -0x1
005B809B  6A 01                     PUSH 0x1
005B809D  6A FF                     PUSH -0x1
005B809F  6A FE                     PUSH -0x2
005B80A1  6A 39                     PUSH 0x39
005B80A3  8D 95 8C FB FF FF         LEA EDX,[EBP + 0xfffffb8c]
005B80A9  68 58 01 00 00            PUSH 0x158
005B80AE  52                        PUSH EDX
005B80AF  E8 CC B3 15 00            CALL 0x00713480
005B80B4  50                        PUSH EAX
005B80B5  8B CF                     MOV ECX,EDI
005B80B7  FF 56 08                  CALL dword ptr [ESI + 0x8]
005B80BA  EB 49                     JMP 0x005b8105
LAB_005b80bc:
005B80BC  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005B80C2  6A FF                     PUSH -0x1
005B80C4  8B 93 88 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d88]
005B80CA  6A 07                     PUSH 0x7
005B80CC  6A FF                     PUSH -0x1
005B80CE  6A FF                     PUSH -0x1
005B80D0  6A 01                     PUSH 0x1
005B80D2  6A FF                     PUSH -0x1
005B80D4  8D BB 88 1D 00 00         LEA EDI,[EBX + 0x1d88]
005B80DA  6A FE                     PUSH -0x2
005B80DC  6A 39                     PUSH 0x39
005B80DE  68 58 01 00 00            PUSH 0x158
005B80E3  51                        PUSH ECX
005B80E4  56                        PUSH ESI
005B80E5  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005B80E8  E8 53 80 0F 00            CALL 0x006b0140
005B80ED  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B80F3  50                        PUSH EAX
005B80F4  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
005B80F7  E8 84 B3 15 00            CALL 0x00713480
005B80FC  50                        PUSH EAX
005B80FD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005B8100  8B CF                     MOV ECX,EDI
005B8102  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_005b8105:
005B8105  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B810B  33 F6                     XOR ESI,ESI
005B810D  32 D2                     XOR DL,DL
005B810F  89 B3 90 1D 00 00         MOV dword ptr [EBX + 0x1d90],ESI
005B8115  84 C0                     TEST AL,AL
005B8117  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
005B811A  76 36                     JBE 0x005b8152
LAB_005b811c:
005B811C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B811F  25 FF 00 00 00            AND EAX,0xff
005B8124  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005B812B  2B C8                     SUB ECX,EAX
005B812D  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005B8130  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
005B8133  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
005B8136  03 C1                     ADD EAX,ECX
005B8138  FE C2                     INC DL
005B813A  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
005B813D  89 B0 BC 00 00 00         MOV dword ptr [EAX + 0xbc],ESI
005B8143  C6 80 E1 00 00 00 01      MOV byte ptr [EAX + 0xe1],0x1
005B814A  3A 93 9A 00 00 00         CMP DL,byte ptr [EBX + 0x9a]
005B8150  72 CA                     JC 0x005b811c
LAB_005b8152:
005B8152  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005B8155  25 FF 00 00 00            AND EAX,0xff
005B815A  2B C6                     SUB EAX,ESI
005B815C  0F 84 32 02 00 00         JZ 0x005b8394
005B8162  48                        DEC EAX
005B8163  0F 84 8F 01 00 00         JZ 0x005b82f8
005B8169  48                        DEC EAX
005B816A  0F 85 A5 02 00 00         JNZ 0x005b8415
005B8170  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005B8173  C7 83 AD 06 00 00 B9 24 00 00  MOV dword ptr [EBX + 0x6ad],0x24b9
005B817D  3B C6                     CMP EAX,ESI
005B817F  C6 83 D2 06 00 00 01      MOV byte ptr [EBX + 0x6d2],0x1
005B8186  B9 08 00 00 00            MOV ECX,0x8
005B818B  74 0C                     JZ 0x005b8199
005B818D  8B F0                     MOV ESI,EAX
005B818F  8D BB B2 06 00 00         LEA EDI,[EBX + 0x6b2]
005B8195  F3 A5                     MOVSD.REP ES:EDI,ESI
005B8197  EB 0A                     JMP 0x005b81a3
LAB_005b8199:
005B8199  33 C0                     XOR EAX,EAX
005B819B  8D BB B2 06 00 00         LEA EDI,[EBX + 0x6b2]
005B81A1  F3 AB                     STOSD.REP ES:EDI
LAB_005b81a3:
005B81A3  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B81A9  6A FF                     PUSH -0x1
005B81AB  8B 83 AD 06 00 00         MOV EAX,dword ptr [EBX + 0x6ad]
005B81B1  6A 07                     PUSH 0x7
005B81B3  6A FF                     PUSH -0x1
005B81B5  8B B3 65 07 00 00         MOV ESI,dword ptr [EBX + 0x765]
005B81BB  6A FF                     PUSH -0x1
005B81BD  6A 01                     PUSH 0x1
005B81BF  6A FF                     PUSH -0x1
005B81C1  6A FE                     PUSH -0x2
005B81C3  6A 1E                     PUSH 0x1e
005B81C5  8D BB 65 07 00 00         LEA EDI,[EBX + 0x765]
005B81CB  6A 7D                     PUSH 0x7d
005B81CD  52                        PUSH EDX
005B81CE  50                        PUSH EAX
005B81CF  E8 6C 7F 0F 00            CALL 0x006b0140
005B81D4  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B81DA  50                        PUSH EAX
005B81DB  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005B81DE  E8 9D B2 15 00            CALL 0x00713480
005B81E3  50                        PUSH EAX
005B81E4  8B CF                     MOV ECX,EDI
005B81E6  FF 56 08                  CALL dword ptr [ESI + 0x8]
005B81E9  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005B81EC  C7 83 6D 07 00 00 00 00 00 00  MOV dword ptr [EBX + 0x76d],0x0
005B81F6  85 F6                     TEST ESI,ESI
005B81F8  C7 83 B2 04 00 00 BA 24 00 00  MOV dword ptr [EBX + 0x4b2],0x24ba
005B8202  C6 83 D7 04 00 00 01      MOV byte ptr [EBX + 0x4d7],0x1
005B8209  B9 08 00 00 00            MOV ECX,0x8
005B820E  74 0A                     JZ 0x005b821a
005B8210  8D BB B7 04 00 00         LEA EDI,[EBX + 0x4b7]
005B8216  F3 A5                     MOVSD.REP ES:EDI,ESI
005B8218  EB 0A                     JMP 0x005b8224
LAB_005b821a:
005B821A  33 C0                     XOR EAX,EAX
005B821C  8D BB B7 04 00 00         LEA EDI,[EBX + 0x4b7]
005B8222  F3 AB                     STOSD.REP ES:EDI
LAB_005b8224:
005B8224  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B822A  6A FF                     PUSH -0x1
005B822C  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
005B8232  6A 07                     PUSH 0x7
005B8234  6A FF                     PUSH -0x1
005B8236  8B B3 6A 05 00 00         MOV ESI,dword ptr [EBX + 0x56a]
005B823C  6A FF                     PUSH -0x1
005B823E  6A 01                     PUSH 0x1
005B8240  6A FF                     PUSH -0x1
005B8242  6A FE                     PUSH -0x2
005B8244  6A 1E                     PUSH 0x1e
005B8246  8D BB 6A 05 00 00         LEA EDI,[EBX + 0x56a]
005B824C  6A 7D                     PUSH 0x7d
005B824E  52                        PUSH EDX
005B824F  50                        PUSH EAX
005B8250  E8 EB 7E 0F 00            CALL 0x006b0140
005B8255  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B825B  50                        PUSH EAX
005B825C  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005B825F  E8 1C B2 15 00            CALL 0x00713480
005B8264  50                        PUSH EAX
005B8265  8B CF                     MOV ECX,EDI
005B8267  FF 56 08                  CALL dword ptr [ESI + 0x8]
005B826A  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
005B826D  C7 83 72 05 00 00 00 00 00 00  MOV dword ptr [EBX + 0x572],0x0
005B8277  C7 83 B7 02 00 00 BB 24 00 00  MOV dword ptr [EBX + 0x2b7],0x24bb
005B8281  C6 83 DC 02 00 00 01      MOV byte ptr [EBX + 0x2dc],0x1
LAB_005b8288:
005B8288  85 F6                     TEST ESI,ESI
005B828A  B9 08 00 00 00            MOV ECX,0x8
005B828F  74 0A                     JZ 0x005b829b
005B8291  8D BB BC 02 00 00         LEA EDI,[EBX + 0x2bc]
005B8297  F3 A5                     MOVSD.REP ES:EDI,ESI
005B8299  EB 0A                     JMP 0x005b82a5
LAB_005b829b:
005B829B  33 C0                     XOR EAX,EAX
005B829D  8D BB BC 02 00 00         LEA EDI,[EBX + 0x2bc]
005B82A3  F3 AB                     STOSD.REP ES:EDI
LAB_005b82a5:
005B82A5  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B82AB  6A FF                     PUSH -0x1
005B82AD  8B 83 B7 02 00 00         MOV EAX,dword ptr [EBX + 0x2b7]
005B82B3  6A 07                     PUSH 0x7
005B82B5  6A FF                     PUSH -0x1
005B82B7  8B B3 6F 03 00 00         MOV ESI,dword ptr [EBX + 0x36f]
005B82BD  6A FF                     PUSH -0x1
005B82BF  6A 01                     PUSH 0x1
005B82C1  6A FF                     PUSH -0x1
005B82C3  6A FE                     PUSH -0x2
005B82C5  6A 1E                     PUSH 0x1e
005B82C7  8D BB 6F 03 00 00         LEA EDI,[EBX + 0x36f]
005B82CD  6A 7D                     PUSH 0x7d
005B82CF  52                        PUSH EDX
005B82D0  50                        PUSH EAX
005B82D1  E8 6A 7E 0F 00            CALL 0x006b0140
005B82D6  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B82DC  50                        PUSH EAX
005B82DD  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005B82E0  E8 9B B1 15 00            CALL 0x00713480
005B82E5  50                        PUSH EAX
005B82E6  8B CF                     MOV ECX,EDI
005B82E8  FF 56 08                  CALL dword ptr [ESI + 0x8]
005B82EB  33 F6                     XOR ESI,ESI
005B82ED  89 B3 77 03 00 00         MOV dword ptr [EBX + 0x377],ESI
005B82F3  E9 1D 01 00 00            JMP 0x005b8415
LAB_005b82f8:
005B82F8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005B82FB  C7 83 B2 04 00 00 B9 24 00 00  MOV dword ptr [EBX + 0x4b2],0x24b9
005B8305  3B C6                     CMP EAX,ESI
005B8307  C6 83 D7 04 00 00 01      MOV byte ptr [EBX + 0x4d7],0x1
005B830E  B9 08 00 00 00            MOV ECX,0x8
005B8313  74 0C                     JZ 0x005b8321
005B8315  8B F0                     MOV ESI,EAX
005B8317  8D BB B7 04 00 00         LEA EDI,[EBX + 0x4b7]
005B831D  F3 A5                     MOVSD.REP ES:EDI,ESI
005B831F  EB 0A                     JMP 0x005b832b
LAB_005b8321:
005B8321  33 C0                     XOR EAX,EAX
005B8323  8D BB B7 04 00 00         LEA EDI,[EBX + 0x4b7]
005B8329  F3 AB                     STOSD.REP ES:EDI
LAB_005b832b:
005B832B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B8331  6A FF                     PUSH -0x1
005B8333  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
005B8339  6A 07                     PUSH 0x7
005B833B  6A FF                     PUSH -0x1
005B833D  8B B3 6A 05 00 00         MOV ESI,dword ptr [EBX + 0x56a]
005B8343  6A FF                     PUSH -0x1
005B8345  6A 01                     PUSH 0x1
005B8347  6A FF                     PUSH -0x1
005B8349  6A FE                     PUSH -0x2
005B834B  6A 1E                     PUSH 0x1e
005B834D  8D BB 6A 05 00 00         LEA EDI,[EBX + 0x56a]
005B8353  6A 7D                     PUSH 0x7d
005B8355  52                        PUSH EDX
005B8356  50                        PUSH EAX
005B8357  E8 E4 7D 0F 00            CALL 0x006b0140
005B835C  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B8362  50                        PUSH EAX
005B8363  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005B8366  E8 15 B1 15 00            CALL 0x00713480
005B836B  50                        PUSH EAX
005B836C  8B CF                     MOV ECX,EDI
005B836E  FF 56 08                  CALL dword ptr [ESI + 0x8]
005B8371  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005B8374  C7 83 72 05 00 00 00 00 00 00  MOV dword ptr [EBX + 0x572],0x0
005B837E  C7 83 B7 02 00 00 BA 24 00 00  MOV dword ptr [EBX + 0x2b7],0x24ba
005B8388  C6 83 DC 02 00 00 01      MOV byte ptr [EBX + 0x2dc],0x1
005B838F  E9 F4 FE FF FF            JMP 0x005b8288
LAB_005b8394:
005B8394  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005B8397  C7 83 B2 04 00 00 B8 24 00 00  MOV dword ptr [EBX + 0x4b2],0x24b8
005B83A1  3B C6                     CMP EAX,ESI
005B83A3  C6 83 D7 04 00 00 01      MOV byte ptr [EBX + 0x4d7],0x1
005B83AA  B9 08 00 00 00            MOV ECX,0x8
005B83AF  74 0C                     JZ 0x005b83bd
005B83B1  8B F0                     MOV ESI,EAX
005B83B3  8D BB B7 04 00 00         LEA EDI,[EBX + 0x4b7]
005B83B9  F3 A5                     MOVSD.REP ES:EDI,ESI
005B83BB  EB 0A                     JMP 0x005b83c7
LAB_005b83bd:
005B83BD  33 C0                     XOR EAX,EAX
005B83BF  8D BB B7 04 00 00         LEA EDI,[EBX + 0x4b7]
005B83C5  F3 AB                     STOSD.REP ES:EDI
LAB_005b83c7:
005B83C7  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B83CD  6A FF                     PUSH -0x1
005B83CF  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
005B83D5  6A 07                     PUSH 0x7
005B83D7  6A FF                     PUSH -0x1
005B83D9  8B B3 6A 05 00 00         MOV ESI,dword ptr [EBX + 0x56a]
005B83DF  6A FF                     PUSH -0x1
005B83E1  6A 01                     PUSH 0x1
005B83E3  6A FF                     PUSH -0x1
005B83E5  6A FE                     PUSH -0x2
005B83E7  6A 1E                     PUSH 0x1e
005B83E9  8D BB 6A 05 00 00         LEA EDI,[EBX + 0x56a]
005B83EF  6A 7D                     PUSH 0x7d
005B83F1  52                        PUSH EDX
005B83F2  50                        PUSH EAX
005B83F3  E8 48 7D 0F 00            CALL 0x006b0140
005B83F8  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B83FE  50                        PUSH EAX
005B83FF  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005B8402  E8 79 B0 15 00            CALL 0x00713480
005B8407  50                        PUSH EAX
005B8408  8B CF                     MOV ECX,EDI
005B840A  FF 56 08                  CALL dword ptr [ESI + 0x8]
005B840D  33 F6                     XOR ESI,ESI
005B840F  89 B3 72 05 00 00         MOV dword ptr [EBX + 0x572],ESI
LAB_005b8415:
005B8415  8B CB                     MOV ECX,EBX
005B8417  E8 3D B0 E4 FF            CALL 0x00403459
005B841C  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B8422  32 D2                     XOR DL,DL
005B8424  84 C0                     TEST AL,AL
005B8426  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
005B8429  76 61                     JBE 0x005b848c
LAB_005b842b:
005B842B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B842E  25 FF 00 00 00            AND EAX,0xff
005B8433  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005B843A  2B C8                     SUB ECX,EAX
005B843C  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005B843F  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
005B8442  8D 3C 4B                  LEA EDI,[EBX + ECX*0x2]
005B8445  03 F9                     ADD EDI,ECX
005B8447  8B 4B 61                  MOV ECX,dword ptr [EBX + 0x61]
005B844A  89 8F 27 01 00 00         MOV dword ptr [EDI + 0x127],ECX
005B8450  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005B8453  81 E1 FF 00 00 00         AND ECX,0xff
005B8459  41                        INC ECX
005B845A  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005B845D  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005B8460  C1 E1 02                  SHL ECX,0x2
005B8463  89 8F 23 01 00 00         MOV dword ptr [EDI + 0x123],ECX
005B8469  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005B846C  C1 E1 03                  SHL ECX,0x3
005B846F  2B C8                     SUB ECX,EAX
005B8471  39 B4 19 87 1A 00 00      CMP dword ptr [ECX + EBX*0x1 + 0x1a87],ESI
005B8478  74 03                     JZ 0x005b847d
005B847A  FE 45 F8                  INC byte ptr [EBP + -0x8]
LAB_005b847d:
005B847D  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B8483  FE C2                     INC DL
005B8485  3A D0                     CMP DL,AL
005B8487  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
005B848A  72 9F                     JC 0x005b842b
LAB_005b848c:
005B848C  33 C0                     XOR EAX,EAX
005B848E  8A 43 65                  MOV AL,byte ptr [EBX + 0x65]
005B8491  83 E8 02                  SUB EAX,0x2
005B8494  0F 84 D8 00 00 00         JZ 0x005b8572
005B849A  8D 83 9C 1C 00 00         LEA EAX,[EBX + 0x1c9c]
005B84A0  BA 01 01 01 01            MOV EDX,0x1010101
005B84A5  C6 43 65 04               MOV byte ptr [EBX + 0x65],0x4
005B84A9  6A FF                     PUSH -0x1
005B84AB  89 10                     MOV dword ptr [EAX],EDX
005B84AD  6A 01                     PUSH 0x1
005B84AF  6A 06                     PUSH 0x6
005B84B1  8B CB                     MOV ECX,EBX
005B84B3  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
005B84B6  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
005B84B9  88 50 0C                  MOV byte ptr [EAX + 0xc],DL
005B84BC  E8 30 C7 E4 FF            CALL 0x00404bf1
005B84C1  C6 83 AA 1C 00 00 01      MOV byte ptr [EBX + 0x1caa],0x1
005B84C8  8B 83 8C 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d8c]
005B84CE  83 F8 FF                  CMP EAX,-0x1
005B84D1  74 0D                     JZ 0x005b84e0
005B84D3  8B 8B D0 1D 00 00         MOV ECX,dword ptr [EBX + 0x1dd0]
005B84D9  50                        PUSH EAX
005B84DA  51                        PUSH ECX
005B84DB  E8 10 B6 0F 00            CALL 0x006b3af0
LAB_005b84e0:
005B84E0  8A 83 9A 00 00 00         MOV AL,byte ptr [EBX + 0x9a]
005B84E6  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005B84EA  84 C0                     TEST AL,AL
005B84EC  0F 86 AD 00 00 00         JBE 0x005b859f
LAB_005b84f2:
005B84F2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B84F5  25 FF 00 00 00            AND EAX,0xff
005B84FA  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005B8501  2B C8                     SUB ECX,EAX
005B8503  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
005B8506  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
005B8509  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
005B850C  8D 34 08                  LEA ESI,[EAX + ECX*0x1]
005B850F  8B 84 08 78 01 00 00      MOV EAX,dword ptr [EAX + ECX*0x1 + 0x178]
005B8516  83 F8 FF                  CMP EAX,-0x1
005B8519  74 0D                     JZ 0x005b8528
005B851B  8B 96 BC 01 00 00         MOV EDX,dword ptr [ESI + 0x1bc]
005B8521  50                        PUSH EAX
005B8522  52                        PUSH EDX
005B8523  E8 C8 B5 0F 00            CALL 0x006b3af0
LAB_005b8528:
005B8528  8A 86 E2 00 00 00         MOV AL,byte ptr [ESI + 0xe2]
005B852E  84 C0                     TEST AL,AL
005B8530  74 18                     JZ 0x005b854a
005B8532  8B 86 09 02 00 00         MOV EAX,dword ptr [ESI + 0x209]
005B8538  83 F8 FF                  CMP EAX,-0x1
005B853B  74 0D                     JZ 0x005b854a
005B853D  50                        PUSH EAX
005B853E  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
005B8544  50                        PUSH EAX
005B8545  E8 A6 B5 0F 00            CALL 0x006b3af0
LAB_005b854a:
005B854A  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
005B854D  8A 8B 9A 00 00 00         MOV CL,byte ptr [EBX + 0x9a]
005B8553  FE C0                     INC AL
005B8555  3A C1                     CMP AL,CL
005B8557  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005B855A  72 96                     JC 0x005b84f2
005B855C  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
005B855F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B8564  B8 01 00 00 00            MOV EAX,0x1
005B8569  5F                        POP EDI
005B856A  5E                        POP ESI
005B856B  5B                        POP EBX
005B856C  8B E5                     MOV ESP,EBP
005B856E  5D                        POP EBP
005B856F  C2 1C 00                  RET 0x1c
LAB_005b8572:
005B8572  8D 93 9C 1C 00 00         LEA EDX,[EBX + 0x1c9c]
005B8578  B9 01 01 01 01            MOV ECX,0x1010101
005B857D  C6 43 65 03               MOV byte ptr [EBX + 0x65],0x3
005B8581  6A FF                     PUSH -0x1
005B8583  89 0A                     MOV dword ptr [EDX],ECX
005B8585  56                        PUSH ESI
005B8586  6A 05                     PUSH 0x5
005B8588  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
005B858B  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
005B858E  88 4A 0C                  MOV byte ptr [EDX + 0xc],CL
005B8591  8B CB                     MOV ECX,EBX
005B8593  E8 59 C6 E4 FF            CALL 0x00404bf1
005B8598  C6 83 AA 1C 00 00 00      MOV byte ptr [EBX + 0x1caa],0x0
LAB_005b859f:
005B859F  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
005B85A2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B85A7  B8 01 00 00 00            MOV EAX,0x1
005B85AC  5F                        POP EDI
005B85AD  5E                        POP ESI
005B85AE  5B                        POP EBX
005B85AF  8B E5                     MOV ESP,EBP
005B85B1  5D                        POP EBP
005B85B2  C2 1C 00                  RET 0x1c
LAB_005b85b5:
005B85B5  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
005B85B8  68 8C CC 7C 00            PUSH 0x7ccc8c
005B85BD  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B85C2  56                        PUSH ESI
005B85C3  6A 00                     PUSH 0x0
005B85C5  68 4E 01 00 00            PUSH 0x14e
005B85CA  68 74 CB 7C 00            PUSH 0x7ccb74
005B85CF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B85D5  E8 F6 4E 0F 00            CALL 0x006ad4d0
005B85DA  83 C4 18                  ADD ESP,0x18
005B85DD  85 C0                     TEST EAX,EAX
005B85DF  74 01                     JZ 0x005b85e2
005B85E1  CC                        INT3
LAB_005b85e2:
005B85E2  68 4E 01 00 00            PUSH 0x14e
005B85E7  68 74 CB 7C 00            PUSH 0x7ccb74
005B85EC  6A 00                     PUSH 0x0
005B85EE  56                        PUSH ESI
005B85EF  E8 4C D8 0E 00            CALL 0x006a5e40
LAB_005b85f4:
005B85F4  5F                        POP EDI
005B85F5  5E                        POP ESI
005B85F6  33 C0                     XOR EAX,EAX
005B85F8  5B                        POP EBX
005B85F9  8B E5                     MOV ESP,EBP
005B85FB  5D                        POP EBP
005B85FC  C2 1C 00                  RET 0x1c
