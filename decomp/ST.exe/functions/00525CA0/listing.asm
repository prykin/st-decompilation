FUN_00525ca0:
00525CA0  55                        PUSH EBP
00525CA1  8B EC                     MOV EBP,ESP
00525CA3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00525CA6  33 C0                     XOR EAX,EAX
00525CA8  81 E1 FF FF 00 00         AND ECX,0xffff
00525CAE  81 C1 6A FF FF FF         ADD ECX,0xffffff6a
00525CB4  83 F9 2B                  CMP ECX,0x2b
00525CB7  0F 87 01 01 00 00         JA 0x00525dbe
switchD_00525cbd::switchD:
00525CBD  FF 24 8D C0 5D 52 00      JMP dword ptr [ECX*0x4 + 0x525dc0]
switchD_00525cbd::caseD_96:
00525CC4  B8 CC 5B 00 00            MOV EAX,0x5bcc
00525CC9  5D                        POP EBP
00525CCA  C3                        RET
switchD_00525cbd::caseD_97:
00525CCB  B8 CD 5B 00 00            MOV EAX,0x5bcd
00525CD0  5D                        POP EBP
00525CD1  C3                        RET
switchD_00525cbd::caseD_98:
00525CD2  B8 CE 5B 00 00            MOV EAX,0x5bce
00525CD7  5D                        POP EBP
00525CD8  C3                        RET
switchD_00525cbd::caseD_99:
00525CD9  B8 CF 5B 00 00            MOV EAX,0x5bcf
00525CDE  5D                        POP EBP
00525CDF  C3                        RET
switchD_00525cbd::caseD_ac:
00525CE0  B8 D0 5B 00 00            MOV EAX,0x5bd0
00525CE5  5D                        POP EBP
00525CE6  C3                        RET
switchD_00525cbd::caseD_9a:
00525CE7  B8 D1 5B 00 00            MOV EAX,0x5bd1
00525CEC  5D                        POP EBP
00525CED  C3                        RET
switchD_00525cbd::caseD_9c:
00525CEE  B8 D2 5B 00 00            MOV EAX,0x5bd2
00525CF3  5D                        POP EBP
00525CF4  C3                        RET
switchD_00525cbd::caseD_9d:
00525CF5  B8 D3 5B 00 00            MOV EAX,0x5bd3
00525CFA  5D                        POP EBP
00525CFB  C3                        RET
switchD_00525cbd::caseD_9e:
00525CFC  B8 D4 5B 00 00            MOV EAX,0x5bd4
00525D01  5D                        POP EBP
00525D02  C3                        RET
switchD_00525cbd::caseD_ab:
00525D03  B8 D8 5B 00 00            MOV EAX,0x5bd8
00525D08  5D                        POP EBP
00525D09  C3                        RET
switchD_00525cbd::caseD_a6:
00525D0A  B8 D9 5B 00 00            MOV EAX,0x5bd9
00525D0F  5D                        POP EBP
00525D10  C3                        RET
switchD_00525cbd::caseD_a7:
00525D11  B8 DA 5B 00 00            MOV EAX,0x5bda
00525D16  5D                        POP EBP
00525D17  C3                        RET
switchD_00525cbd::caseD_a8:
00525D18  B8 DB 5B 00 00            MOV EAX,0x5bdb
00525D1D  5D                        POP EBP
00525D1E  C3                        RET
switchD_00525cbd::caseD_a9:
00525D1F  B8 DC 5B 00 00            MOV EAX,0x5bdc
00525D24  5D                        POP EBP
00525D25  C3                        RET
switchD_00525cbd::caseD_a3:
00525D26  B8 DD 5B 00 00            MOV EAX,0x5bdd
00525D2B  5D                        POP EBP
00525D2C  C3                        RET
switchD_00525cbd::caseD_a4:
00525D2D  B8 DE 5B 00 00            MOV EAX,0x5bde
00525D32  5D                        POP EBP
00525D33  C3                        RET
switchD_00525cbd::caseD_af:
00525D34  B8 DF 5B 00 00            MOV EAX,0x5bdf
00525D39  5D                        POP EBP
00525D3A  C3                        RET
switchD_00525cbd::caseD_b6:
00525D3B  B8 E0 5B 00 00            MOV EAX,0x5be0
00525D40  5D                        POP EBP
00525D41  C3                        RET
switchD_00525cbd::caseD_b7:
00525D42  B8 E1 5B 00 00            MOV EAX,0x5be1
00525D47  5D                        POP EBP
00525D48  C3                        RET
switchD_00525cbd::caseD_ba:
00525D49  B8 E2 5B 00 00            MOV EAX,0x5be2
00525D4E  5D                        POP EBP
00525D4F  C3                        RET
switchD_00525cbd::caseD_bf:
00525D50  B8 E3 5B 00 00            MOV EAX,0x5be3
00525D55  5D                        POP EBP
00525D56  C3                        RET
switchD_00525cbd::caseD_b0:
00525D57  B8 E4 5B 00 00            MOV EAX,0x5be4
00525D5C  5D                        POP EBP
00525D5D  C3                        RET
switchD_00525cbd::caseD_bd:
00525D5E  B8 E5 5B 00 00            MOV EAX,0x5be5
00525D63  5D                        POP EBP
00525D64  C3                        RET
switchD_00525cbd::caseD_bc:
00525D65  B8 E6 5B 00 00            MOV EAX,0x5be6
00525D6A  5D                        POP EBP
00525D6B  C3                        RET
switchD_00525cbd::caseD_b3:
00525D6C  B8 E7 5B 00 00            MOV EAX,0x5be7
00525D71  5D                        POP EBP
00525D72  C3                        RET
switchD_00525cbd::caseD_b5:
00525D73  B8 E8 5B 00 00            MOV EAX,0x5be8
00525D78  5D                        POP EBP
00525D79  C3                        RET
switchD_00525cbd::caseD_ad:
00525D7A  B8 E9 5B 00 00            MOV EAX,0x5be9
00525D7F  5D                        POP EBP
00525D80  C3                        RET
switchD_00525cbd::caseD_b8:
00525D81  B8 EA 5B 00 00            MOV EAX,0x5bea
00525D86  5D                        POP EBP
00525D87  C3                        RET
switchD_00525cbd::caseD_ae:
00525D88  B8 EB 5B 00 00            MOV EAX,0x5beb
00525D8D  5D                        POP EBP
00525D8E  C3                        RET
switchD_00525cbd::caseD_be:
00525D8F  B8 EC 5B 00 00            MOV EAX,0x5bec
00525D94  5D                        POP EBP
00525D95  C3                        RET
switchD_00525cbd::caseD_9f:
00525D96  B8 D5 5B 00 00            MOV EAX,0x5bd5
00525D9B  5D                        POP EBP
00525D9C  C3                        RET
switchD_00525cbd::caseD_a0:
00525D9D  B8 D6 5B 00 00            MOV EAX,0x5bd6
00525DA2  5D                        POP EBP
00525DA3  C3                        RET
switchD_00525cbd::caseD_c0:
00525DA4  B8 ED 5B 00 00            MOV EAX,0x5bed
00525DA9  5D                        POP EBP
00525DAA  C3                        RET
switchD_00525cbd::caseD_a1:
00525DAB  B8 EE 5B 00 00            MOV EAX,0x5bee
00525DB0  5D                        POP EBP
00525DB1  C3                        RET
switchD_00525cbd::caseD_c1:
00525DB2  B8 EF 5B 00 00            MOV EAX,0x5bef
00525DB7  5D                        POP EBP
00525DB8  C3                        RET
switchD_00525cbd::caseD_b2:
00525DB9  B8 F0 5B 00 00            MOV EAX,0x5bf0
switchD_00525cbd::caseD_9b:
00525DBE  5D                        POP EBP
00525DBF  C3                        RET
