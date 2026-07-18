FUN_00525390:
00525390  55                        PUSH EBP
00525391  8B EC                     MOV EBP,ESP
00525393  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00525396  25 FF 00 00 00            AND EAX,0xff
0052539B  48                        DEC EAX
0052539C  83 F8 51                  CMP EAX,0x51
0052539F  0F 87 4C 02 00 00         JA 0x005255f1
switchD_005253a5::switchD:
005253A5  FF 24 85 F8 55 52 00      JMP dword ptr [EAX*0x4 + 0x5255f8]
switchD_005253a5::caseD_1:
005253AC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005253AF  8D 41 F7                  LEA EAX,[ECX + -0x9]
005253B2  83 F8 44                  CMP EAX,0x44
005253B5  77 16                     JA 0x005253cd
005253B7  33 D2                     XOR EDX,EDX
005253B9  8A 90 48 57 52 00         MOV DL,byte ptr [EAX + 0x525748]
switchD_005253bf::switchD:
005253BF  FF 24 95 40 57 52 00      JMP dword ptr [EDX*0x4 + 0x525740]
switchD_005253bf::caseD_9:
005253C6  B8 23 4E 00 00            MOV EAX,0x4e23
005253CB  5D                        POP EBP
005253CC  C3                        RET
switchD_005253bf::caseD_a:
005253CD  B8 3D 4E 00 00            MOV EAX,0x4e3d
005253D2  5D                        POP EBP
005253D3  C3                        RET
switchD_005253a5::caseD_2:
005253D4  B8 21 4E 00 00            MOV EAX,0x4e21
005253D9  5D                        POP EBP
005253DA  C3                        RET
switchD_005253a5::caseD_3:
005253DB  B8 22 4E 00 00            MOV EAX,0x4e22
005253E0  5D                        POP EBP
005253E1  C3                        RET
switchD_005253a5::caseD_4:
005253E2  B8 24 4E 00 00            MOV EAX,0x4e24
005253E7  5D                        POP EBP
005253E8  C3                        RET
switchD_005253a5::caseD_5:
005253E9  B8 25 4E 00 00            MOV EAX,0x4e25
005253EE  5D                        POP EBP
005253EF  C3                        RET
switchD_005253a5::caseD_6:
005253F0  B8 26 4E 00 00            MOV EAX,0x4e26
005253F5  5D                        POP EBP
005253F6  C3                        RET
switchD_005253a5::caseD_7:
005253F7  B8 27 4E 00 00            MOV EAX,0x4e27
005253FC  5D                        POP EBP
005253FD  C3                        RET
switchD_005253a5::caseD_8:
005253FE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00525401  83 F8 05                  CMP EAX,0x5
00525404  74 1D                     JZ 0x00525423
00525406  83 F8 0B                  CMP EAX,0xb
00525409  74 11                     JZ 0x0052541c
0052540B  83 E8 11                  SUB EAX,0x11
0052540E  F7 D8                     NEG EAX
00525410  1B C0                     SBB EAX,EAX
00525412  83 E0 5A                  AND EAX,0x5a
00525415  05 2B 4E 00 00            ADD EAX,0x4e2b
0052541A  5D                        POP EBP
0052541B  C3                        RET
LAB_0052541c:
0052541C  B8 2C 4E 00 00            MOV EAX,0x4e2c
00525421  5D                        POP EBP
00525422  C3                        RET
LAB_00525423:
00525423  B8 2A 4E 00 00            MOV EAX,0x4e2a
00525428  5D                        POP EBP
00525429  C3                        RET
switchD_005253a5::caseD_a:
0052542A  B8 29 4E 00 00            MOV EAX,0x4e29
0052542F  5D                        POP EBP
00525430  C3                        RET
switchD_005253a5::caseD_b:
00525431  B8 37 4E 00 00            MOV EAX,0x4e37
00525436  5D                        POP EBP
00525437  C3                        RET
switchD_005253a5::caseD_9:
00525438  B8 28 4E 00 00            MOV EAX,0x4e28
0052543D  5D                        POP EBP
0052543E  C3                        RET
switchD_005253a5::caseD_d:
0052543F  B8 2D 4E 00 00            MOV EAX,0x4e2d
00525444  5D                        POP EBP
00525445  C3                        RET
switchD_005253a5::caseD_e:
00525446  B8 2E 4E 00 00            MOV EAX,0x4e2e
0052544B  5D                        POP EBP
0052544C  C3                        RET
switchD_005253a5::caseD_f:
0052544D  B8 2F 4E 00 00            MOV EAX,0x4e2f
00525452  5D                        POP EBP
00525453  C3                        RET
switchD_005253a5::caseD_10:
00525454  B8 30 4E 00 00            MOV EAX,0x4e30
00525459  5D                        POP EBP
0052545A  C3                        RET
switchD_005253a5::caseD_11:
0052545B  B8 31 4E 00 00            MOV EAX,0x4e31
00525460  5D                        POP EBP
00525461  C3                        RET
switchD_005253a5::caseD_12:
00525462  B8 32 4E 00 00            MOV EAX,0x4e32
00525467  5D                        POP EBP
00525468  C3                        RET
switchD_005253a5::caseD_13:
00525469  B8 33 4E 00 00            MOV EAX,0x4e33
0052546E  5D                        POP EBP
0052546F  C3                        RET
switchD_005253a5::caseD_14:
00525470  B8 34 4E 00 00            MOV EAX,0x4e34
00525475  5D                        POP EBP
00525476  C3                        RET
switchD_005253a5::caseD_15:
00525477  B8 3E 4E 00 00            MOV EAX,0x4e3e
0052547C  5D                        POP EBP
0052547D  C3                        RET
switchD_005253a5::caseD_16:
0052547E  B8 3F 4E 00 00            MOV EAX,0x4e3f
00525483  5D                        POP EBP
00525484  C3                        RET
switchD_005253a5::caseD_17:
00525485  B8 40 4E 00 00            MOV EAX,0x4e40
0052548A  5D                        POP EBP
0052548B  C3                        RET
switchD_005253a5::caseD_4d:
0052548C  B8 72 4E 00 00            MOV EAX,0x4e72
00525491  5D                        POP EBP
00525492  C3                        RET
switchD_005253a5::caseD_18:
00525493  B8 41 4E 00 00            MOV EAX,0x4e41
00525498  5D                        POP EBP
00525499  C3                        RET
switchD_005253a5::caseD_19:
0052549A  B8 42 4E 00 00            MOV EAX,0x4e42
0052549F  5D                        POP EBP
005254A0  C3                        RET
switchD_005253a5::caseD_1a:
005254A1  B8 43 4E 00 00            MOV EAX,0x4e43
005254A6  5D                        POP EBP
005254A7  C3                        RET
switchD_005253a5::caseD_1b:
005254A8  B8 4C 4E 00 00            MOV EAX,0x4e4c
005254AD  5D                        POP EBP
005254AE  C3                        RET
switchD_005253a5::caseD_1c:
005254AF  B8 4D 4E 00 00            MOV EAX,0x4e4d
005254B4  5D                        POP EBP
005254B5  C3                        RET
switchD_005253a5::caseD_1d:
005254B6  B8 44 4E 00 00            MOV EAX,0x4e44
005254BB  5D                        POP EBP
005254BC  C3                        RET
switchD_005253a5::caseD_1e:
005254BD  B8 45 4E 00 00            MOV EAX,0x4e45
005254C2  5D                        POP EBP
005254C3  C3                        RET
switchD_005253a5::caseD_1f:
005254C4  B8 46 4E 00 00            MOV EAX,0x4e46
005254C9  5D                        POP EBP
005254CA  C3                        RET
switchD_005253a5::caseD_20:
005254CB  B8 47 4E 00 00            MOV EAX,0x4e47
005254D0  5D                        POP EBP
005254D1  C3                        RET
switchD_005253a5::caseD_21:
005254D2  B8 48 4E 00 00            MOV EAX,0x4e48
005254D7  5D                        POP EBP
005254D8  C3                        RET
switchD_005253a5::caseD_22:
005254D9  B8 49 4E 00 00            MOV EAX,0x4e49
005254DE  5D                        POP EBP
005254DF  C3                        RET
switchD_005253a5::caseD_23:
005254E0  B8 4A 4E 00 00            MOV EAX,0x4e4a
005254E5  5D                        POP EBP
005254E6  C3                        RET
switchD_005253a5::caseD_24:
005254E7  B8 4B 4E 00 00            MOV EAX,0x4e4b
005254EC  5D                        POP EBP
005254ED  C3                        RET
switchD_005253a5::caseD_26:
005254EE  B8 4E 4E 00 00            MOV EAX,0x4e4e
005254F3  5D                        POP EBP
005254F4  C3                        RET
switchD_005253a5::caseD_25:
005254F5  B8 4F 4E 00 00            MOV EAX,0x4e4f
005254FA  5D                        POP EBP
005254FB  C3                        RET
switchD_005253a5::caseD_27:
005254FC  B8 50 4E 00 00            MOV EAX,0x4e50
00525501  5D                        POP EBP
00525502  C3                        RET
switchD_005253a5::caseD_28:
00525503  B8 51 4E 00 00            MOV EAX,0x4e51
00525508  5D                        POP EBP
00525509  C3                        RET
switchD_005253a5::caseD_29:
0052550A  B8 52 4E 00 00            MOV EAX,0x4e52
0052550F  5D                        POP EBP
00525510  C3                        RET
switchD_005253a5::caseD_2a:
00525511  B8 53 4E 00 00            MOV EAX,0x4e53
00525516  5D                        POP EBP
00525517  C3                        RET
switchD_005253a5::caseD_2b:
00525518  B8 54 4E 00 00            MOV EAX,0x4e54
0052551D  5D                        POP EBP
0052551E  C3                        RET
switchD_005253a5::caseD_2c:
0052551F  B8 55 4E 00 00            MOV EAX,0x4e55
00525524  5D                        POP EBP
00525525  C3                        RET
switchD_005253a5::caseD_2d:
00525526  B8 56 4E 00 00            MOV EAX,0x4e56
0052552B  5D                        POP EBP
0052552C  C3                        RET
switchD_005253a5::caseD_2e:
0052552D  B8 57 4E 00 00            MOV EAX,0x4e57
00525532  5D                        POP EBP
00525533  C3                        RET
switchD_005253a5::caseD_2f:
00525534  B8 58 4E 00 00            MOV EAX,0x4e58
00525539  5D                        POP EBP
0052553A  C3                        RET
switchD_005253a5::caseD_30:
0052553B  B8 59 4E 00 00            MOV EAX,0x4e59
00525540  5D                        POP EBP
00525541  C3                        RET
switchD_005253a5::caseD_31:
00525542  B8 46 2B 00 00            MOV EAX,0x2b46
00525547  5D                        POP EBP
00525548  C3                        RET
switchD_005253a5::caseD_32:
00525549  B8 5E 4E 00 00            MOV EAX,0x4e5e
0052554E  5D                        POP EBP
0052554F  C3                        RET
switchD_005253a5::caseD_33:
00525550  B8 5F 4E 00 00            MOV EAX,0x4e5f
00525555  5D                        POP EBP
00525556  C3                        RET
switchD_005253a5::caseD_34:
00525557  B8 60 4E 00 00            MOV EAX,0x4e60
0052555C  5D                        POP EBP
0052555D  C3                        RET
switchD_005253a5::caseD_35:
0052555E  B8 61 4E 00 00            MOV EAX,0x4e61
00525563  5D                        POP EBP
00525564  C3                        RET
switchD_005253a5::caseD_36:
00525565  B8 62 4E 00 00            MOV EAX,0x4e62
0052556A  5D                        POP EBP
0052556B  C3                        RET
switchD_005253a5::caseD_38:
0052556C  B8 63 4E 00 00            MOV EAX,0x4e63
00525571  5D                        POP EBP
00525572  C3                        RET
switchD_005253a5::caseD_3a:
00525573  B8 64 4E 00 00            MOV EAX,0x4e64
00525578  5D                        POP EBP
00525579  C3                        RET
switchD_005253a5::caseD_3b:
0052557A  B8 65 4E 00 00            MOV EAX,0x4e65
0052557F  5D                        POP EBP
00525580  C3                        RET
switchD_005253a5::caseD_3c:
00525581  B8 66 4E 00 00            MOV EAX,0x4e66
00525586  5D                        POP EBP
00525587  C3                        RET
switchD_005253a5::caseD_3e:
00525588  B8 67 4E 00 00            MOV EAX,0x4e67
0052558D  5D                        POP EBP
0052558E  C3                        RET
switchD_005253a5::caseD_3f:
0052558F  B8 68 4E 00 00            MOV EAX,0x4e68
00525594  5D                        POP EBP
00525595  C3                        RET
switchD_005253a5::caseD_40:
00525596  B8 69 4E 00 00            MOV EAX,0x4e69
0052559B  5D                        POP EBP
0052559C  C3                        RET
switchD_005253a5::caseD_42:
0052559D  B8 6A 4E 00 00            MOV EAX,0x4e6a
005255A2  5D                        POP EBP
005255A3  C3                        RET
switchD_005253a5::caseD_44:
005255A4  B8 6B 4E 00 00            MOV EAX,0x4e6b
005255A9  5D                        POP EBP
005255AA  C3                        RET
switchD_005253a5::caseD_45:
005255AB  B8 6C 4E 00 00            MOV EAX,0x4e6c
005255B0  5D                        POP EBP
005255B1  C3                        RET
switchD_005253a5::caseD_47:
005255B2  B8 6D 4E 00 00            MOV EAX,0x4e6d
005255B7  5D                        POP EBP
005255B8  C3                        RET
switchD_005253a5::caseD_49:
005255B9  B8 6E 4E 00 00            MOV EAX,0x4e6e
005255BE  5D                        POP EBP
005255BF  C3                        RET
switchD_005253a5::caseD_4a:
005255C0  B8 6F 4E 00 00            MOV EAX,0x4e6f
005255C5  5D                        POP EBP
005255C6  C3                        RET
switchD_005253a5::caseD_4b:
005255C7  B8 70 4E 00 00            MOV EAX,0x4e70
005255CC  5D                        POP EBP
005255CD  C3                        RET
switchD_005253a5::caseD_4c:
005255CE  B8 71 4E 00 00            MOV EAX,0x4e71
005255D3  5D                        POP EBP
005255D4  C3                        RET
switchD_005253a5::caseD_4f:
005255D5  B8 73 4E 00 00            MOV EAX,0x4e73
005255DA  5D                        POP EBP
005255DB  C3                        RET
switchD_005253a5::caseD_50:
005255DC  B8 74 4E 00 00            MOV EAX,0x4e74
005255E1  5D                        POP EBP
005255E2  C3                        RET
switchD_005253a5::caseD_51:
005255E3  B8 75 4E 00 00            MOV EAX,0x4e75
005255E8  5D                        POP EBP
005255E9  C3                        RET
switchD_005253a5::caseD_52:
005255EA  B8 76 4E 00 00            MOV EAX,0x4e76
005255EF  5D                        POP EBP
005255F0  C3                        RET
switchD_005253a5::caseD_4e:
005255F1  B8 10 27 00 00            MOV EAX,0x2710
005255F6  5D                        POP EBP
005255F7  C3                        RET
