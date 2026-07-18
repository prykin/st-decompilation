FUN_005259b0:
005259B0  55                        PUSH EBP
005259B1  8B EC                     MOV EBP,ESP
005259B3  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
005259B6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005259B9  F6 D8                     NEG AL
005259BB  1B C0                     SBB EAX,EAX
005259BD  56                        PUSH ESI
005259BE  25 FF 00 00 00            AND EAX,0xff
005259C3  66 83 F9 04               CMP CX,0x4
005259C7  0F 87 3B 01 00 00         JA 0x00525b08
005259CD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005259D0  81 E2 FF FF 00 00         AND EDX,0xffff
005259D6  8D B2 6A FF FF FF         LEA ESI,[EDX + 0xffffff6a]
005259DC  83 FE 69                  CMP ESI,0x69
005259DF  0F 87 23 01 00 00         JA 0x00525b08
005259E5  33 D2                     XOR EDX,EDX
005259E7  8A 96 94 5B 52 00         MOV DL,byte ptr [ESI + 0x525b94]
switchD_005259ed::switchD:
005259ED  FF 24 95 0C 5B 52 00      JMP dword ptr [EDX*0x4 + 0x525b0c]
switchD_005259ed::caseD_96:
005259F4  81 E1 FF FF 00 00         AND ECX,0xffff
005259FA  5E                        POP ESI
005259FB  8B C1                     MOV EAX,ECX
005259FD  5D                        POP EBP
005259FE  C3                        RET
switchD_005259ed::caseD_97:
005259FF  81 E1 FF FF 00 00         AND ECX,0xffff
00525A05  5E                        POP ESI
00525A06  83 C1 05                  ADD ECX,0x5
00525A09  8B C1                     MOV EAX,ECX
00525A0B  5D                        POP EBP
00525A0C  C3                        RET
switchD_005259ed::caseD_98:
00525A0D  81 E1 FF FF 00 00         AND ECX,0xffff
00525A13  5E                        POP ESI
00525A14  83 C1 0A                  ADD ECX,0xa
00525A17  8B C1                     MOV EAX,ECX
00525A19  5D                        POP EBP
00525A1A  C3                        RET
switchD_005259ed::caseD_99:
00525A1B  B8 1D 00 00 00            MOV EAX,0x1d
00525A20  5E                        POP ESI
00525A21  5D                        POP EBP
00525A22  C3                        RET
switchD_005259ed::caseD_ac:
00525A23  B8 0F 00 00 00            MOV EAX,0xf
00525A28  5E                        POP ESI
00525A29  5D                        POP EBP
00525A2A  C3                        RET
switchD_005259ed::caseD_9a:
00525A2B  B8 10 00 00 00            MOV EAX,0x10
00525A30  5E                        POP ESI
00525A31  5D                        POP EBP
00525A32  C3                        RET
switchD_005259ed::caseD_9c:
00525A33  B8 13 00 00 00            MOV EAX,0x13
00525A38  5E                        POP ESI
00525A39  5D                        POP EBP
00525A3A  C3                        RET
switchD_005259ed::caseD_9d:
00525A3B  B8 12 00 00 00            MOV EAX,0x12
00525A40  5E                        POP ESI
00525A41  5D                        POP EBP
00525A42  C3                        RET
switchD_005259ed::caseD_9e:
00525A43  B8 11 00 00 00            MOV EAX,0x11
00525A48  5E                        POP ESI
00525A49  5D                        POP EBP
00525A4A  C3                        RET
switchD_005259ed::caseD_9f:
00525A4B  B8 14 00 00 00            MOV EAX,0x14
00525A50  5E                        POP ESI
00525A51  5D                        POP EBP
00525A52  C3                        RET
switchD_005259ed::caseD_a4:
00525A53  B8 15 00 00 00            MOV EAX,0x15
00525A58  5E                        POP ESI
00525A59  5D                        POP EBP
00525A5A  C3                        RET
switchD_005259ed::caseD_ab:
00525A5B  B8 16 00 00 00            MOV EAX,0x16
00525A60  5E                        POP ESI
00525A61  5D                        POP EBP
00525A62  C3                        RET
switchD_005259ed::caseD_a6:
00525A63  B8 17 00 00 00            MOV EAX,0x17
00525A68  5E                        POP ESI
00525A69  5D                        POP EBP
00525A6A  C3                        RET
switchD_005259ed::caseD_a7:
00525A6B  B8 18 00 00 00            MOV EAX,0x18
00525A70  5E                        POP ESI
00525A71  5D                        POP EBP
00525A72  C3                        RET
switchD_005259ed::caseD_a9:
00525A73  B8 19 00 00 00            MOV EAX,0x19
00525A78  5E                        POP ESI
00525A79  5D                        POP EBP
00525A7A  C3                        RET
switchD_005259ed::caseD_a8:
00525A7B  B8 1A 00 00 00            MOV EAX,0x1a
00525A80  5E                        POP ESI
00525A81  5D                        POP EBP
00525A82  C3                        RET
switchD_005259ed::caseD_a3:
00525A83  B8 1B 00 00 00            MOV EAX,0x1b
00525A88  5E                        POP ESI
00525A89  5D                        POP EBP
00525A8A  C3                        RET
switchD_005259ed::caseD_ff:
00525A8B  B8 1C 00 00 00            MOV EAX,0x1c
00525A90  5E                        POP ESI
00525A91  5D                        POP EBP
00525A92  C3                        RET
switchD_005259ed::caseD_af:
00525A93  B8 1E 00 00 00            MOV EAX,0x1e
00525A98  5E                        POP ESI
00525A99  5D                        POP EBP
00525A9A  C3                        RET
switchD_005259ed::caseD_b6:
00525A9B  B8 27 00 00 00            MOV EAX,0x27
00525AA0  5E                        POP ESI
00525AA1  5D                        POP EBP
00525AA2  C3                        RET
switchD_005259ed::caseD_b7:
00525AA3  B8 28 00 00 00            MOV EAX,0x28
00525AA8  5E                        POP ESI
00525AA9  5D                        POP EBP
00525AAA  C3                        RET
switchD_005259ed::caseD_ba:
00525AAB  B8 29 00 00 00            MOV EAX,0x29
00525AB0  5E                        POP ESI
00525AB1  5D                        POP EBP
00525AB2  C3                        RET
switchD_005259ed::caseD_bf:
00525AB3  B8 2A 00 00 00            MOV EAX,0x2a
00525AB8  5E                        POP ESI
00525AB9  5D                        POP EBP
00525ABA  C3                        RET
switchD_005259ed::caseD_b0:
00525ABB  B8 2B 00 00 00            MOV EAX,0x2b
00525AC0  5E                        POP ESI
00525AC1  5D                        POP EBP
00525AC2  C3                        RET
switchD_005259ed::caseD_bd:
00525AC3  B8 22 00 00 00            MOV EAX,0x22
00525AC8  5E                        POP ESI
00525AC9  5D                        POP EBP
00525ACA  C3                        RET
switchD_005259ed::caseD_bc:
00525ACB  B8 1F 00 00 00            MOV EAX,0x1f
00525AD0  5E                        POP ESI
00525AD1  5D                        POP EBP
00525AD2  C3                        RET
switchD_005259ed::caseD_b3:
00525AD3  B8 20 00 00 00            MOV EAX,0x20
00525AD8  5E                        POP ESI
00525AD9  5D                        POP EBP
00525ADA  C3                        RET
switchD_005259ed::caseD_b5:
00525ADB  B8 21 00 00 00            MOV EAX,0x21
00525AE0  5E                        POP ESI
00525AE1  5D                        POP EBP
00525AE2  C3                        RET
switchD_005259ed::caseD_ad:
00525AE3  B8 23 00 00 00            MOV EAX,0x23
00525AE8  5E                        POP ESI
00525AE9  5D                        POP EBP
00525AEA  C3                        RET
switchD_005259ed::caseD_b8:
00525AEB  B8 24 00 00 00            MOV EAX,0x24
00525AF0  5E                        POP ESI
00525AF1  5D                        POP EBP
00525AF2  C3                        RET
switchD_005259ed::caseD_ae:
00525AF3  B8 25 00 00 00            MOV EAX,0x25
00525AF8  5E                        POP ESI
00525AF9  5D                        POP EBP
00525AFA  C3                        RET
switchD_005259ed::caseD_be:
00525AFB  B8 26 00 00 00            MOV EAX,0x26
00525B00  5E                        POP ESI
00525B01  5D                        POP EBP
00525B02  C3                        RET
switchD_005259ed::caseD_b2:
00525B03  B8 2C 00 00 00            MOV EAX,0x2c
switchD_005259ed::caseD_9b:
00525B08  5E                        POP ESI
00525B09  5D                        POP EBP
00525B0A  C3                        RET
