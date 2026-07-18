FUN_00526ba0:
00526BA0  55                        PUSH EBP
00526BA1  8B EC                     MOV EBP,ESP
00526BA3  A0 4E 87 80 00            MOV AL,[0x0080874e]
00526BA8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00526BAB  2C 03                     SUB AL,0x3
00526BAD  F6 D8                     NEG AL
00526BAF  1B C0                     SBB EAX,EAX
00526BB1  24 DD                     AND AL,0xdd
00526BB3  83 C0 51                  ADD EAX,0x51
00526BB6  49                        DEC ECX
00526BB7  81 F9 FD 00 00 00         CMP ECX,0xfd
00526BBD  0F 87 11 03 00 00         JA 0x00526ed4
00526BC3  33 D2                     XOR EDX,EDX
00526BC5  8A 91 40 70 52 00         MOV DL,byte ptr [ECX + 0x527040]
switchD_00526bcb::switchD:
00526BCB  FF 24 95 D8 6E 52 00      JMP dword ptr [EDX*0x4 + 0x526ed8]
switchD_00526bcb::caseD_1:
00526BD2  33 C0                     XOR EAX,EAX
00526BD4  5D                        POP EBP
00526BD5  C3                        RET
switchD_00526bcb::caseD_2:
00526BD6  B8 01 00 00 00            MOV EAX,0x1
00526BDB  5D                        POP EBP
00526BDC  C3                        RET
switchD_00526bcb::caseD_3:
00526BDD  B8 02 00 00 00            MOV EAX,0x2
00526BE2  5D                        POP EBP
00526BE3  C3                        RET
switchD_00526bcb::caseD_5:
00526BE4  B8 03 00 00 00            MOV EAX,0x3
00526BE9  5D                        POP EBP
00526BEA  C3                        RET
switchD_00526bcb::caseD_4:
00526BEB  B8 04 00 00 00            MOV EAX,0x4
00526BF0  5D                        POP EBP
00526BF1  C3                        RET
switchD_00526bcb::caseD_6:
00526BF2  B8 05 00 00 00            MOV EAX,0x5
00526BF7  5D                        POP EBP
00526BF8  C3                        RET
switchD_00526bcb::caseD_c:
00526BF9  B8 0A 00 00 00            MOV EAX,0xa
00526BFE  5D                        POP EBP
00526BFF  C3                        RET
switchD_00526bcb::caseD_b:
00526C00  B8 0B 00 00 00            MOV EAX,0xb
00526C05  5D                        POP EBP
00526C06  C3                        RET
switchD_00526bcb::caseD_d:
00526C07  B8 0D 00 00 00            MOV EAX,0xd
00526C0C  5D                        POP EBP
00526C0D  C3                        RET
switchD_00526bcb::caseD_f:
00526C0E  B8 0F 00 00 00            MOV EAX,0xf
00526C13  5D                        POP EBP
00526C14  C3                        RET
switchD_00526bcb::caseD_15:
00526C15  B8 15 00 00 00            MOV EAX,0x15
00526C1A  5D                        POP EBP
00526C1B  C3                        RET
switchD_00526bcb::caseD_fd:
00526C1C  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526C1F  3C 01                     CMP AL,0x1
00526C21  75 07                     JNZ 0x00526c2a
switchD_00526bcb::caseD_53:
00526C23  B8 2F 00 00 00            MOV EAX,0x2f
00526C28  5D                        POP EBP
00526C29  C3                        RET
LAB_00526c2a:
00526C2A  33 C9                     XOR ECX,ECX
00526C2C  3C 02                     CMP AL,0x2
00526C2E  0F 95 C1                  SETNZ CL
00526C31  83 C1 30                  ADD ECX,0x30
00526C34  8B C1                     MOV EAX,ECX
00526C36  5D                        POP EBP
00526C37  C3                        RET
switchD_00526bcb::caseD_fe:
00526C38  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526C3B  3C 01                     CMP AL,0x1
00526C3D  75 07                     JNZ 0x00526c46
switchD_00526bcb::caseD_6f:
00526C3F  B8 2D 00 00 00            MOV EAX,0x2d
00526C44  5D                        POP EBP
00526C45  C3                        RET
LAB_00526c46:
00526C46  2C 02                     SUB AL,0x2
00526C48  F6 D8                     NEG AL
00526C4A  1B C0                     SBB EAX,EAX
00526C4C  83 E0 04                  AND EAX,0x4
00526C4F  83 C0 2E                  ADD EAX,0x2e
00526C52  5D                        POP EBP
00526C53  C3                        RET
switchD_00526bcb::caseD_26:
00526C54  B8 29 00 00 00            MOV EAX,0x29
00526C59  5D                        POP EBP
00526C5A  C3                        RET
switchD_00526bcb::caseD_27:
00526C5B  B8 2A 00 00 00            MOV EAX,0x2a
00526C60  5D                        POP EBP
00526C61  C3                        RET
switchD_00526bcb::caseD_28:
00526C62  B8 2B 00 00 00            MOV EAX,0x2b
00526C67  5D                        POP EBP
00526C68  C3                        RET
switchD_00526bcb::caseD_32:
00526C69  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526C6C  FE C8                     DEC AL
00526C6E  F6 D8                     NEG AL
00526C70  1B C0                     SBB EAX,EAX
00526C72  83 E0 22                  AND EAX,0x22
00526C75  83 C0 0A                  ADD EAX,0xa
00526C78  5D                        POP EBP
00526C79  C3                        RET
switchD_00526bcb::caseD_33:
00526C7A  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526C7D  FE C8                     DEC AL
00526C7F  F6 D8                     NEG AL
00526C81  1B C0                     SBB EAX,EAX
00526C83  83 E0 14                  AND EAX,0x14
00526C86  83 C0 15                  ADD EAX,0x15
00526C89  5D                        POP EBP
00526C8A  C3                        RET
switchD_00526bcb::caseD_34:
00526C8B  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526C8E  FE C8                     DEC AL
00526C90  F6 D8                     NEG AL
00526C92  1B C0                     SBB EAX,EAX
00526C94  83 E0 1C                  AND EAX,0x1c
00526C97  83 C0 0B                  ADD EAX,0xb
00526C9A  5D                        POP EBP
00526C9B  C3                        RET
switchD_00526bcb::caseD_35:
00526C9C  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526C9F  FE C8                     DEC AL
00526CA1  F6 D8                     NEG AL
00526CA3  1B C0                     SBB EAX,EAX
00526CA5  83 E0 23                  AND EAX,0x23
00526CA8  5D                        POP EBP
00526CA9  C3                        RET
switchD_00526bcb::caseD_36:
00526CAA  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526CAD  FE C8                     DEC AL
00526CAF  F6 D8                     NEG AL
00526CB1  1B C0                     SBB EAX,EAX
00526CB3  83 E0 1B                  AND EAX,0x1b
00526CB6  83 C0 0F                  ADD EAX,0xf
00526CB9  5D                        POP EBP
00526CBA  C3                        RET
switchD_00526bcb::caseD_37:
00526CBB  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526CBE  FE C8                     DEC AL
00526CC0  F6 D8                     NEG AL
00526CC2  1B C0                     SBB EAX,EAX
00526CC4  83 E0 20                  AND EAX,0x20
00526CC7  83 C0 02                  ADD EAX,0x2
00526CCA  5D                        POP EBP
00526CCB  C3                        RET
switchD_00526bcb::caseD_38:
00526CCC  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526CCF  FE C8                     DEC AL
00526CD1  F6 D8                     NEG AL
00526CD3  1B C0                     SBB EAX,EAX
00526CD5  83 E0 1C                  AND EAX,0x1c
00526CD8  83 C0 0C                  ADD EAX,0xc
00526CDB  5D                        POP EBP
00526CDC  C3                        RET
switchD_00526bcb::caseD_39:
00526CDD  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526CE0  FE C8                     DEC AL
00526CE2  F6 D8                     NEG AL
00526CE4  1B C0                     SBB EAX,EAX
00526CE6  83 E0 22                  AND EAX,0x22
00526CE9  83 C0 04                  ADD EAX,0x4
00526CEC  5D                        POP EBP
00526CED  C3                        RET
switchD_00526bcb::caseD_3a:
00526CEE  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526CF1  FE C8                     DEC AL
00526CF3  F6 D8                     NEG AL
00526CF5  1B C0                     SBB EAX,EAX
00526CF7  83 E0 23                  AND EAX,0x23
00526CFA  40                        INC EAX
00526CFB  5D                        POP EBP
00526CFC  C3                        RET
switchD_00526bcb::caseD_50:
00526CFD  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526D00  FE C8                     DEC AL
00526D02  F6 D8                     NEG AL
00526D04  1B C0                     SBB EAX,EAX
00526D06  24 FD                     AND AL,0xfd
00526D08  83 C0 20                  ADD EAX,0x20
00526D0B  5D                        POP EBP
00526D0C  C3                        RET
switchD_00526bcb::caseD_3b:
00526D0D  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526D10  FE C8                     DEC AL
00526D12  F6 D8                     NEG AL
00526D14  1B C0                     SBB EAX,EAX
00526D16  83 E0 26                  AND EAX,0x26
00526D19  83 C0 05                  ADD EAX,0x5
00526D1C  5D                        POP EBP
00526D1D  C3                        RET
switchD_00526bcb::caseD_3c:
00526D1E  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526D21  FE C8                     DEC AL
00526D23  F6 D8                     NEG AL
00526D25  1B C0                     SBB EAX,EAX
00526D27  83 E0 18                  AND EAX,0x18
00526D2A  83 C0 0D                  ADD EAX,0xd
00526D2D  5D                        POP EBP
00526D2E  C3                        RET
switchD_00526bcb::caseD_3d:
00526D2F  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00526D32  FE C8                     DEC AL
00526D34  F6 D8                     NEG AL
00526D36  1B C0                     SBB EAX,EAX
00526D38  83 E0 1E                  AND EAX,0x1e
00526D3B  83 C0 03                  ADD EAX,0x3
00526D3E  5D                        POP EBP
00526D3F  C3                        RET
switchD_00526bcb::caseD_16:
00526D40  B8 18 00 00 00            MOV EAX,0x18
00526D45  5D                        POP EBP
00526D46  C3                        RET
switchD_00526bcb::caseD_25:
00526D47  B8 19 00 00 00            MOV EAX,0x19
00526D4C  5D                        POP EBP
00526D4D  C3                        RET
switchD_00526bcb::caseD_12:
00526D4E  B8 12 00 00 00            MOV EAX,0x12
00526D53  5D                        POP EBP
00526D54  C3                        RET
switchD_00526bcb::caseD_11:
00526D55  B8 10 00 00 00            MOV EAX,0x10
00526D5A  5D                        POP EBP
00526D5B  C3                        RET
switchD_00526bcb::caseD_14:
00526D5C  B8 14 00 00 00            MOV EAX,0x14
00526D61  5D                        POP EBP
00526D62  C3                        RET
switchD_00526bcb::caseD_e:
00526D63  B8 0E 00 00 00            MOV EAX,0xe
00526D68  5D                        POP EBP
00526D69  C3                        RET
switchD_00526bcb::caseD_17:
00526D6A  B8 16 00 00 00            MOV EAX,0x16
00526D6F  5D                        POP EBP
00526D70  C3                        RET
switchD_00526bcb::caseD_18:
00526D71  B8 17 00 00 00            MOV EAX,0x17
00526D76  5D                        POP EBP
00526D77  C3                        RET
switchD_00526bcb::caseD_a:
00526D78  B8 09 00 00 00            MOV EAX,0x9
00526D7D  5D                        POP EBP
00526D7E  C3                        RET
switchD_00526bcb::caseD_7:
00526D7F  B8 06 00 00 00            MOV EAX,0x6
00526D84  5D                        POP EBP
00526D85  C3                        RET
switchD_00526bcb::caseD_8:
00526D86  B8 07 00 00 00            MOV EAX,0x7
00526D8B  5D                        POP EBP
00526D8C  C3                        RET
switchD_00526bcb::caseD_9:
00526D8D  B8 08 00 00 00            MOV EAX,0x8
00526D92  5D                        POP EBP
00526D93  C3                        RET
switchD_00526bcb::caseD_10:
00526D94  B8 11 00 00 00            MOV EAX,0x11
00526D99  5D                        POP EBP
00526D9A  C3                        RET
switchD_00526bcb::caseD_13:
00526D9B  B8 13 00 00 00            MOV EAX,0x13
00526DA0  5D                        POP EBP
00526DA1  C3                        RET
switchD_00526bcb::caseD_54:
00526DA2  B8 36 00 00 00            MOV EAX,0x36
00526DA7  5D                        POP EBP
00526DA8  C3                        RET
switchD_00526bcb::caseD_55:
00526DA9  B8 30 00 00 00            MOV EAX,0x30
00526DAE  5D                        POP EBP
00526DAF  C3                        RET
switchD_00526bcb::caseD_56:
00526DB0  B8 34 00 00 00            MOV EAX,0x34
00526DB5  5D                        POP EBP
00526DB6  C3                        RET
switchD_00526bcb::caseD_57:
00526DB7  B8 35 00 00 00            MOV EAX,0x35
00526DBC  5D                        POP EBP
00526DBD  C3                        RET
switchD_00526bcb::caseD_58:
00526DBE  B8 32 00 00 00            MOV EAX,0x32
00526DC3  5D                        POP EBP
00526DC4  C3                        RET
switchD_00526bcb::caseD_59:
00526DC5  B8 37 00 00 00            MOV EAX,0x37
00526DCA  5D                        POP EBP
00526DCB  C3                        RET
switchD_00526bcb::caseD_5a:
00526DCC  B8 31 00 00 00            MOV EAX,0x31
00526DD1  5D                        POP EBP
00526DD2  C3                        RET
switchD_00526bcb::caseD_5b:
00526DD3  B8 38 00 00 00            MOV EAX,0x38
00526DD8  5D                        POP EBP
00526DD9  C3                        RET
switchD_00526bcb::caseD_5c:
00526DDA  B8 39 00 00 00            MOV EAX,0x39
00526DDF  5D                        POP EBP
00526DE0  C3                        RET
switchD_00526bcb::caseD_5d:
00526DE1  B8 49 00 00 00            MOV EAX,0x49
00526DE6  5D                        POP EBP
00526DE7  C3                        RET
switchD_00526bcb::caseD_5e:
00526DE8  B8 3A 00 00 00            MOV EAX,0x3a
00526DED  5D                        POP EBP
00526DEE  C3                        RET
switchD_00526bcb::caseD_5f:
00526DEF  B8 50 00 00 00            MOV EAX,0x50
00526DF4  5D                        POP EBP
00526DF5  C3                        RET
switchD_00526bcb::caseD_60:
00526DF6  B8 3B 00 00 00            MOV EAX,0x3b
00526DFB  5D                        POP EBP
00526DFC  C3                        RET
switchD_00526bcb::caseD_61:
00526DFD  B8 3D 00 00 00            MOV EAX,0x3d
00526E02  5D                        POP EBP
00526E03  C3                        RET
switchD_00526bcb::caseD_62:
00526E04  B8 3E 00 00 00            MOV EAX,0x3e
00526E09  5D                        POP EBP
00526E0A  C3                        RET
switchD_00526bcb::caseD_63:
00526E0B  B8 40 00 00 00            MOV EAX,0x40
00526E10  5D                        POP EBP
00526E11  C3                        RET
switchD_00526bcb::caseD_64:
00526E12  B8 3C 00 00 00            MOV EAX,0x3c
00526E17  5D                        POP EBP
00526E18  C3                        RET
switchD_00526bcb::caseD_65:
00526E19  B8 45 00 00 00            MOV EAX,0x45
00526E1E  5D                        POP EBP
00526E1F  C3                        RET
switchD_00526bcb::caseD_66:
00526E20  B8 47 00 00 00            MOV EAX,0x47
00526E25  5D                        POP EBP
00526E26  C3                        RET
switchD_00526bcb::caseD_67:
00526E27  B8 44 00 00 00            MOV EAX,0x44
00526E2C  5D                        POP EBP
00526E2D  C3                        RET
switchD_00526bcb::caseD_68:
00526E2E  B8 46 00 00 00            MOV EAX,0x46
00526E33  5D                        POP EBP
00526E34  C3                        RET
switchD_00526bcb::caseD_69:
00526E35  B8 41 00 00 00            MOV EAX,0x41
00526E3A  5D                        POP EBP
00526E3B  C3                        RET
switchD_00526bcb::caseD_6a:
00526E3C  B8 43 00 00 00            MOV EAX,0x43
00526E41  5D                        POP EBP
00526E42  C3                        RET
switchD_00526bcb::caseD_6b:
00526E43  B8 42 00 00 00            MOV EAX,0x42
00526E48  5D                        POP EBP
00526E49  C3                        RET
switchD_00526bcb::caseD_6c:
00526E4A  B8 4D 00 00 00            MOV EAX,0x4d
00526E4F  5D                        POP EBP
00526E50  C3                        RET
switchD_00526bcb::caseD_6d:
00526E51  B8 4A 00 00 00            MOV EAX,0x4a
00526E56  5D                        POP EBP
00526E57  C3                        RET
switchD_00526bcb::caseD_6e:
00526E58  B8 4C 00 00 00            MOV EAX,0x4c
00526E5D  5D                        POP EBP
00526E5E  C3                        RET
switchD_00526bcb::caseD_70:
00526E5F  B8 4B 00 00 00            MOV EAX,0x4b
00526E64  5D                        POP EBP
00526E65  C3                        RET
switchD_00526bcb::caseD_71:
00526E66  B8 48 00 00 00            MOV EAX,0x48
00526E6B  5D                        POP EBP
00526E6C  C3                        RET
switchD_00526bcb::caseD_72:
00526E6D  B8 4F 00 00 00            MOV EAX,0x4f
00526E72  5D                        POP EBP
00526E73  C3                        RET
switchD_00526bcb::caseD_73:
00526E74  B8 3F 00 00 00            MOV EAX,0x3f
00526E79  5D                        POP EBP
00526E7A  C3                        RET
switchD_00526bcb::caseD_19:
00526E7B  B8 1A 00 00 00            MOV EAX,0x1a
00526E80  5D                        POP EBP
00526E81  C3                        RET
switchD_00526bcb::caseD_1a:
00526E82  B8 1B 00 00 00            MOV EAX,0x1b
00526E87  5D                        POP EBP
00526E88  C3                        RET
switchD_00526bcb::caseD_1b:
00526E89  B8 1C 00 00 00            MOV EAX,0x1c
00526E8E  5D                        POP EBP
00526E8F  C3                        RET
switchD_00526bcb::caseD_1c:
00526E90  B8 1D 00 00 00            MOV EAX,0x1d
00526E95  5D                        POP EBP
00526E96  C3                        RET
switchD_00526bcb::caseD_1d:
00526E97  B8 1E 00 00 00            MOV EAX,0x1e
00526E9C  5D                        POP EBP
00526E9D  C3                        RET
switchD_00526bcb::caseD_1e:
00526E9E  B8 1F 00 00 00            MOV EAX,0x1f
00526EA3  5D                        POP EBP
00526EA4  C3                        RET
switchD_00526bcb::caseD_1f:
00526EA5  B8 20 00 00 00            MOV EAX,0x20
00526EAA  5D                        POP EBP
00526EAB  C3                        RET
switchD_00526bcb::caseD_20:
00526EAC  B8 21 00 00 00            MOV EAX,0x21
00526EB1  5D                        POP EBP
00526EB2  C3                        RET
switchD_00526bcb::caseD_21:
00526EB3  B8 22 00 00 00            MOV EAX,0x22
00526EB8  5D                        POP EBP
00526EB9  C3                        RET
switchD_00526bcb::caseD_22:
00526EBA  B8 23 00 00 00            MOV EAX,0x23
00526EBF  5D                        POP EBP
00526EC0  C3                        RET
switchD_00526bcb::caseD_23:
00526EC1  B8 24 00 00 00            MOV EAX,0x24
00526EC6  5D                        POP EBP
00526EC7  C3                        RET
switchD_00526bcb::caseD_24:
00526EC8  B8 25 00 00 00            MOV EAX,0x25
00526ECD  5D                        POP EBP
00526ECE  C3                        RET
switchD_00526bcb::caseD_2b:
00526ECF  B8 28 00 00 00            MOV EAX,0x28
switchD_00526bcb::caseD_29:
00526ED4  5D                        POP EBP
00526ED5  C3                        RET
