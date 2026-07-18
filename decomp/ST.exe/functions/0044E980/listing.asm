FUN_0044e980:
0044E980  55                        PUSH EBP
0044E981  8B EC                     MOV EBP,ESP
0044E983  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0044E986  8B 0D 7C 67 80 00         MOV ECX,dword ptr [0x0080677c]
0044E98C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0044E98F  53                        PUSH EBX
0044E990  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0044E993  89 08                     MOV dword ptr [EAX],ECX
0044E995  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0044E998  C6 02 00                  MOV byte ptr [EDX],0x0
0044E99B  56                        PUSH ESI
0044E99C  83 FB 0E                  CMP EBX,0xe
0044E99F  C6 01 1D                  MOV byte ptr [ECX],0x1d
0044E9A2  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0044E9A5  57                        PUSH EDI
0044E9A6  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0044E9AC  0F 84 A0 00 00 00         JZ 0x0044ea52
0044E9B2  83 FB 0C                  CMP EBX,0xc
0044E9B5  0F 84 97 00 00 00         JZ 0x0044ea52
0044E9BB  83 FB 0D                  CMP EBX,0xd
0044E9BE  75 12                     JNZ 0x0044e9d2
0044E9C0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044E9C3  83 F9 0B                  CMP ECX,0xb
0044E9C6  74 63                     JZ 0x0044ea2b
0044E9C8  83 F9 16                  CMP ECX,0x16
0044E9CB  74 37                     JZ 0x0044ea04
0044E9CD  83 F9 23                  CMP ECX,0x23
0044E9D0  74 0B                     JZ 0x0044e9dd
LAB_0044e9d2:
0044E9D2  5F                        POP EDI
0044E9D3  5E                        POP ESI
0044E9D4  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0044E9DA  5B                        POP EBX
0044E9DB  5D                        POP EBP
0044E9DC  C3                        RET
LAB_0044e9dd:
0044E9DD  BF A4 9E 7A 00            MOV EDI,0x7a9ea4
0044E9E2  83 C9 FF                  OR ECX,0xffffffff
0044E9E5  33 C0                     XOR EAX,EAX
0044E9E7  F2 AE                     SCASB.REPNE ES:EDI
0044E9E9  F7 D1                     NOT ECX
0044E9EB  2B F9                     SUB EDI,ECX
0044E9ED  8B C1                     MOV EAX,ECX
0044E9EF  8B F7                     MOV ESI,EDI
0044E9F1  8B FA                     MOV EDI,EDX
0044E9F3  C1 E9 02                  SHR ECX,0x2
0044E9F6  F3 A5                     MOVSD.REP ES:EDI,ESI
0044E9F8  8B C8                     MOV ECX,EAX
0044E9FA  83 E1 03                  AND ECX,0x3
0044E9FD  F3 A4                     MOVSB.REP ES:EDI,ESI
0044E9FF  5F                        POP EDI
0044EA00  5E                        POP ESI
0044EA01  5B                        POP EBX
0044EA02  5D                        POP EBP
0044EA03  C3                        RET
LAB_0044ea04:
0044EA04  BF 9C 9E 7A 00            MOV EDI,0x7a9e9c
0044EA09  83 C9 FF                  OR ECX,0xffffffff
0044EA0C  33 C0                     XOR EAX,EAX
0044EA0E  F2 AE                     SCASB.REPNE ES:EDI
0044EA10  F7 D1                     NOT ECX
0044EA12  2B F9                     SUB EDI,ECX
0044EA14  8B C1                     MOV EAX,ECX
0044EA16  8B F7                     MOV ESI,EDI
0044EA18  8B FA                     MOV EDI,EDX
0044EA1A  C1 E9 02                  SHR ECX,0x2
0044EA1D  F3 A5                     MOVSD.REP ES:EDI,ESI
0044EA1F  8B C8                     MOV ECX,EAX
0044EA21  83 E1 03                  AND ECX,0x3
0044EA24  F3 A4                     MOVSB.REP ES:EDI,ESI
0044EA26  5F                        POP EDI
0044EA27  5E                        POP ESI
0044EA28  5B                        POP EBX
0044EA29  5D                        POP EBP
0044EA2A  C3                        RET
LAB_0044ea2b:
0044EA2B  BF 94 9E 7A 00            MOV EDI,0x7a9e94
0044EA30  83 C9 FF                  OR ECX,0xffffffff
0044EA33  33 C0                     XOR EAX,EAX
0044EA35  F2 AE                     SCASB.REPNE ES:EDI
0044EA37  F7 D1                     NOT ECX
0044EA39  2B F9                     SUB EDI,ECX
0044EA3B  8B C1                     MOV EAX,ECX
0044EA3D  8B F7                     MOV ESI,EDI
0044EA3F  8B FA                     MOV EDI,EDX
0044EA41  C1 E9 02                  SHR ECX,0x2
0044EA44  F3 A5                     MOVSD.REP ES:EDI,ESI
0044EA46  8B C8                     MOV ECX,EAX
0044EA48  83 E1 03                  AND ECX,0x3
0044EA4B  F3 A4                     MOVSB.REP ES:EDI,ESI
0044EA4D  5F                        POP EDI
0044EA4E  5E                        POP ESI
0044EA4F  5B                        POP EBX
0044EA50  5D                        POP EBP
0044EA51  C3                        RET
LAB_0044ea52:
0044EA52  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044EA55  49                        DEC ECX
0044EA56  83 F9 27                  CMP ECX,0x27
0044EA59  0F 87 AD 01 00 00         JA 0x0044ec0c
switchD_0044ea5f::switchD:
0044EA5F  FF 24 8D 3C EC 44 00      JMP dword ptr [ECX*0x4 + 0x44ec3c]
switchD_0044ea5f::caseD_1:
0044EA66  BF 8C 9E 7A 00            MOV EDI,0x7a9e8c
0044EA6B  E9 4B 01 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_2:
0044EA70  BF 84 9E 7A 00            MOV EDI,0x7a9e84
0044EA75  E9 41 01 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_3:
0044EA7A  BF 7C 9E 7A 00            MOV EDI,0x7a9e7c
0044EA7F  E9 37 01 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_4:
0044EA84  BF 74 9E 7A 00            MOV EDI,0x7a9e74
0044EA89  E9 2D 01 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_5:
0044EA8E  BF 6C 9E 7A 00            MOV EDI,0x7a9e6c
0044EA93  E9 23 01 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_6:
0044EA98  BF 64 9E 7A 00            MOV EDI,0x7a9e64
0044EA9D  E9 19 01 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_7:
0044EAA2  BF 5C 9E 7A 00            MOV EDI,0x7a9e5c
0044EAA7  E9 0F 01 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_8:
0044EAAC  BF 54 9E 7A 00            MOV EDI,0x7a9e54
0044EAB1  E9 05 01 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_9:
0044EAB6  BF 50 9E 7A 00            MOV EDI,0x7a9e50
0044EABB  E9 FB 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_a:
0044EAC0  BF 48 9E 7A 00            MOV EDI,0x7a9e48
0044EAC5  E9 F1 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_b:
0044EACA  BF 40 9E 7A 00            MOV EDI,0x7a9e40
0044EACF  E9 E7 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_c:
0044EAD4  BF 38 9E 7A 00            MOV EDI,0x7a9e38
0044EAD9  E9 DD 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_d:
0044EADE  BF 30 9E 7A 00            MOV EDI,0x7a9e30
0044EAE3  E9 D3 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_e:
0044EAE8  BF 28 9E 7A 00            MOV EDI,0x7a9e28
0044EAED  E9 C9 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_f:
0044EAF2  BF 20 9E 7A 00            MOV EDI,0x7a9e20
0044EAF7  E9 BF 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_10:
0044EAFC  BF 18 9E 7A 00            MOV EDI,0x7a9e18
0044EB01  E9 B5 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_11:
0044EB06  BF 10 9E 7A 00            MOV EDI,0x7a9e10
0044EB0B  E9 AB 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_12:
0044EB10  BF 08 9E 7A 00            MOV EDI,0x7a9e08
0044EB15  E9 A1 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_13:
0044EB1A  BF 00 9E 7A 00            MOV EDI,0x7a9e00
0044EB1F  E9 97 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_14:
0044EB24  BF F8 9D 7A 00            MOV EDI,0x7a9df8
0044EB29  E9 8D 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_15:
0044EB2E  BF F4 9D 7A 00            MOV EDI,0x7a9df4
0044EB33  E9 83 00 00 00            JMP 0x0044ebbb
switchD_0044ea5f::caseD_16:
0044EB38  BF EC 9D 7A 00            MOV EDI,0x7a9dec
0044EB3D  EB 7C                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_17:
0044EB3F  BF E4 9D 7A 00            MOV EDI,0x7a9de4
0044EB44  EB 75                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_18:
0044EB46  BF DC 9D 7A 00            MOV EDI,0x7a9ddc
0044EB4B  EB 6E                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_19:
0044EB4D  BF D8 9D 7A 00            MOV EDI,0x7a9dd8
0044EB52  EB 67                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_1a:
0044EB54  BF D4 9D 7A 00            MOV EDI,0x7a9dd4
0044EB59  EB 60                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_1b:
0044EB5B  BF D0 9D 7A 00            MOV EDI,0x7a9dd0
0044EB60  EB 59                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_1c:
0044EB62  BF CC 9D 7A 00            MOV EDI,0x7a9dcc
0044EB67  EB 52                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_1d:
0044EB69  BF C8 9D 7A 00            MOV EDI,0x7a9dc8
0044EB6E  EB 4B                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_1e:
0044EB70  BF C4 9D 7A 00            MOV EDI,0x7a9dc4
0044EB75  EB 44                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_1f:
0044EB77  BF C0 9D 7A 00            MOV EDI,0x7a9dc0
0044EB7C  EB 3D                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_20:
0044EB7E  BF BC 9D 7A 00            MOV EDI,0x7a9dbc
0044EB83  EB 36                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_21:
0044EB85  BF B8 9D 7A 00            MOV EDI,0x7a9db8
0044EB8A  EB 2F                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_22:
0044EB8C  BF B4 9D 7A 00            MOV EDI,0x7a9db4
0044EB91  EB 28                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_23:
0044EB93  BF B0 9D 7A 00            MOV EDI,0x7a9db0
0044EB98  EB 21                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_24:
0044EB9A  BF AC 9D 7A 00            MOV EDI,0x7a9dac
0044EB9F  EB 1A                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_25:
0044EBA1  BF A4 9D 7A 00            MOV EDI,0x7a9da4
0044EBA6  EB 13                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_26:
0044EBA8  BF 9C 9D 7A 00            MOV EDI,0x7a9d9c
0044EBAD  EB 0C                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_27:
0044EBAF  BF 94 9D 7A 00            MOV EDI,0x7a9d94
0044EBB4  EB 05                     JMP 0x0044ebbb
switchD_0044ea5f::caseD_28:
0044EBB6  BF 8C 9D 7A 00            MOV EDI,0x7a9d8c
LAB_0044ebbb:
0044EBBB  83 C9 FF                  OR ECX,0xffffffff
0044EBBE  33 C0                     XOR EAX,EAX
0044EBC0  F2 AE                     SCASB.REPNE ES:EDI
0044EBC2  F7 D1                     NOT ECX
0044EBC4  2B F9                     SUB EDI,ECX
0044EBC6  8B C1                     MOV EAX,ECX
0044EBC8  8B F7                     MOV ESI,EDI
0044EBCA  8B FA                     MOV EDI,EDX
0044EBCC  C1 E9 02                  SHR ECX,0x2
0044EBCF  F3 A5                     MOVSD.REP ES:EDI,ESI
0044EBD1  8B C8                     MOV ECX,EAX
0044EBD3  83 E1 03                  AND ECX,0x3
0044EBD6  83 FB 0C                  CMP EBX,0xc
0044EBD9  F3 A4                     MOVSB.REP ES:EDI,ESI
0044EBDB  75 5A                     JNZ 0x0044ec37
0044EBDD  BF 88 9D 7A 00            MOV EDI,0x7a9d88
0044EBE2  83 C9 FF                  OR ECX,0xffffffff
0044EBE5  33 C0                     XOR EAX,EAX
0044EBE7  F2 AE                     SCASB.REPNE ES:EDI
0044EBE9  F7 D1                     NOT ECX
0044EBEB  2B F9                     SUB EDI,ECX
0044EBED  8B F7                     MOV ESI,EDI
0044EBEF  8B D9                     MOV EBX,ECX
0044EBF1  8B FA                     MOV EDI,EDX
0044EBF3  83 C9 FF                  OR ECX,0xffffffff
0044EBF6  F2 AE                     SCASB.REPNE ES:EDI
0044EBF8  8B CB                     MOV ECX,EBX
0044EBFA  4F                        DEC EDI
0044EBFB  C1 E9 02                  SHR ECX,0x2
0044EBFE  F3 A5                     MOVSD.REP ES:EDI,ESI
0044EC00  8B CB                     MOV ECX,EBX
0044EC02  83 E1 03                  AND ECX,0x3
0044EC05  F3 A4                     MOVSB.REP ES:EDI,ESI
0044EC07  5F                        POP EDI
0044EC08  5E                        POP ESI
0044EC09  5B                        POP EBX
0044EC0A  5D                        POP EBP
0044EC0B  C3                        RET
switchD_0044ea5f::default:
0044EC0C  68 60 9D 7A 00            PUSH 0x7a9d60
0044EC11  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044EC16  6A 00                     PUSH 0x0
0044EC18  6A 00                     PUSH 0x0
0044EC1A  68 2E 01 00 00            PUSH 0x12e
0044EC1F  68 3C 9D 7A 00            PUSH 0x7a9d3c
0044EC24  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0044EC2A  E8 A1 E8 25 00            CALL 0x006ad4d0
0044EC2F  83 C4 18                  ADD ESP,0x18
0044EC32  85 C0                     TEST EAX,EAX
0044EC34  74 01                     JZ 0x0044ec37
0044EC36  CC                        INT3
LAB_0044ec37:
0044EC37  5F                        POP EDI
0044EC38  5E                        POP ESI
0044EC39  5B                        POP EBX
0044EC3A  5D                        POP EBP
0044EC3B  C3                        RET
