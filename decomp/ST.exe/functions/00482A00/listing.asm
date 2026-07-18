STBoatC::ChangeActivity:
00482A00  55                        PUSH EBP
00482A01  8B EC                     MOV EBP,ESP
00482A03  83 EC 48                  SUB ESP,0x48
00482A06  8B 81 55 04 00 00         MOV EAX,dword ptr [ECX + 0x455]
00482A0C  53                        PUSH EBX
00482A0D  56                        PUSH ESI
00482A0E  83 F8 01                  CMP EAX,0x1
00482A11  57                        PUSH EDI
00482A12  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00482A15  0F 84 2C 02 00 00         JZ 0x00482c47
00482A1B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00482A20  8D 55 BC                  LEA EDX,[EBP + -0x44]
00482A23  8D 4D B8                  LEA ECX,[EBP + -0x48]
00482A26  6A 00                     PUSH 0x0
00482A28  52                        PUSH EDX
00482A29  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00482A2C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00482A32  E8 B9 AD 2A 00            CALL 0x0072d7f0
00482A37  8B F0                     MOV ESI,EAX
00482A39  83 C4 08                  ADD ESP,0x8
00482A3C  85 F6                     TEST ESI,ESI
00482A3E  0F 85 C3 01 00 00         JNZ 0x00482c07
00482A44  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00482A47  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00482A4A  83 FB 01                  CMP EBX,0x1
00482A4D  0F 85 9B 01 00 00         JNZ 0x00482bee
00482A53  A0 4D 87 80 00            MOV AL,[0x0080874d]
00482A58  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
00482A5B  3B C8                     CMP ECX,EAX
00482A5D  0F 85 8B 01 00 00         JNZ 0x00482bee
00482A63  8B 87 F7 06 00 00         MOV EAX,dword ptr [EDI + 0x6f7]
00482A69  48                        DEC EAX
00482A6A  83 F8 27                  CMP EAX,0x27
00482A6D  0F 87 61 01 00 00         JA 0x00482bd4
switchD_00482a73::switchD:
00482A73  FF 24 85 50 2C 48 00      JMP dword ptr [EAX*0x4 + 0x482c50]
switchD_00482a73::caseD_1:
00482A7A  BE C9 00 00 00            MOV ESI,0xc9
00482A7F  E9 52 01 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_2:
00482A84  BE CF 00 00 00            MOV ESI,0xcf
00482A89  E9 48 01 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_3:
00482A8E  BE D5 00 00 00            MOV ESI,0xd5
00482A93  E9 3E 01 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_4:
00482A98  BE DB 00 00 00            MOV ESI,0xdb
00482A9D  E9 34 01 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_5:
00482AA2  BE E1 00 00 00            MOV ESI,0xe1
00482AA7  E9 2A 01 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_6:
00482AAC  BE E8 00 00 00            MOV ESI,0xe8
00482AB1  E9 20 01 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_7:
00482AB6  BE EF 00 00 00            MOV ESI,0xef
00482ABB  E9 16 01 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_8:
00482AC0  BE F6 00 00 00            MOV ESI,0xf6
00482AC5  E9 0C 01 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_9:
00482ACA  BE FE 00 00 00            MOV ESI,0xfe
00482ACF  E9 02 01 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_a:
00482AD4  BE 03 01 00 00            MOV ESI,0x103
00482AD9  E9 F8 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_b:
00482ADE  BE 09 01 00 00            MOV ESI,0x109
00482AE3  E9 EE 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_c:
00482AE8  BE 0F 01 00 00            MOV ESI,0x10f
00482AED  E9 E4 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_d:
00482AF2  BE 2D 01 00 00            MOV ESI,0x12d
00482AF7  E9 DA 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_e:
00482AFC  BE 33 01 00 00            MOV ESI,0x133
00482B01  E9 D0 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_f:
00482B06  BE 39 01 00 00            MOV ESI,0x139
00482B0B  E9 C6 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_10:
00482B10  BE 3F 01 00 00            MOV ESI,0x13f
00482B15  E9 BC 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_11:
00482B1A  BE 45 01 00 00            MOV ESI,0x145
00482B1F  E9 B2 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_12:
00482B24  BE 4C 01 00 00            MOV ESI,0x14c
00482B29  E9 A8 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_13:
00482B2E  BE 53 01 00 00            MOV ESI,0x153
00482B33  E9 9E 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_14:
00482B38  BE 5A 01 00 00            MOV ESI,0x15a
00482B3D  E9 94 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_15:
00482B42  BE 62 01 00 00            MOV ESI,0x162
00482B47  E9 8A 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_16:
00482B4C  BE 67 01 00 00            MOV ESI,0x167
00482B51  E9 80 00 00 00            JMP 0x00482bd6
switchD_00482a73::caseD_17:
00482B56  BE 6F 01 00 00            MOV ESI,0x16f
00482B5B  EB 79                     JMP 0x00482bd6
switchD_00482a73::caseD_18:
00482B5D  BE 75 01 00 00            MOV ESI,0x175
00482B62  EB 72                     JMP 0x00482bd6
switchD_00482a73::caseD_19:
00482B64  BE 91 01 00 00            MOV ESI,0x191
00482B69  EB 6B                     JMP 0x00482bd6
switchD_00482a73::caseD_1a:
00482B6B  BE 99 01 00 00            MOV ESI,0x199
00482B70  EB 64                     JMP 0x00482bd6
switchD_00482a73::caseD_1b:
00482B72  BE A1 01 00 00            MOV ESI,0x1a1
00482B77  EB 5D                     JMP 0x00482bd6
switchD_00482a73::caseD_1c:
00482B79  BE A7 01 00 00            MOV ESI,0x1a7
00482B7E  EB 56                     JMP 0x00482bd6
switchD_00482a73::caseD_1d:
00482B80  BE AD 01 00 00            MOV ESI,0x1ad
00482B85  EB 4F                     JMP 0x00482bd6
switchD_00482a73::caseD_1e:
00482B87  BE B4 01 00 00            MOV ESI,0x1b4
00482B8C  EB 48                     JMP 0x00482bd6
switchD_00482a73::caseD_1f:
00482B8E  BE BA 01 00 00            MOV ESI,0x1ba
00482B93  EB 41                     JMP 0x00482bd6
switchD_00482a73::caseD_20:
00482B95  BE C0 01 00 00            MOV ESI,0x1c0
00482B9A  EB 3A                     JMP 0x00482bd6
switchD_00482a73::caseD_21:
00482B9C  BE C6 01 00 00            MOV ESI,0x1c6
00482BA1  EB 33                     JMP 0x00482bd6
switchD_00482a73::caseD_22:
00482BA3  BE CD 01 00 00            MOV ESI,0x1cd
00482BA8  EB 2C                     JMP 0x00482bd6
switchD_00482a73::caseD_23:
00482BAA  BE D4 01 00 00            MOV ESI,0x1d4
00482BAF  EB 25                     JMP 0x00482bd6
switchD_00482a73::caseD_24:
00482BB1  BE DA 01 00 00            MOV ESI,0x1da
00482BB6  EB 1E                     JMP 0x00482bd6
switchD_00482a73::caseD_25:
00482BB8  BE 7B 01 00 00            MOV ESI,0x17b
00482BBD  EB 17                     JMP 0x00482bd6
switchD_00482a73::caseD_26:
00482BBF  BE 15 01 00 00            MOV ESI,0x115
00482BC4  EB 10                     JMP 0x00482bd6
switchD_00482a73::caseD_27:
00482BC6  BE 81 01 00 00            MOV ESI,0x181
00482BCB  EB 09                     JMP 0x00482bd6
switchD_00482a73::caseD_28:
00482BCD  BE E0 01 00 00            MOV ESI,0x1e0
00482BD2  EB 02                     JMP 0x00482bd6
switchD_00482a73::default:
00482BD4  33 F6                     XOR ESI,ESI
LAB_00482bd6:
00482BD6  8B CF                     MOV ECX,EDI
00482BD8  E8 8E F6 F7 FF            CALL 0x0040226b
00482BDD  85 C0                     TEST EAX,EAX
00482BDF  75 0D                     JNZ 0x00482bee
00482BE1  8B 17                     MOV EDX,dword ptr [EDI]
00482BE3  56                        PUSH ESI
00482BE4  6A 04                     PUSH 0x4
00482BE6  8B CF                     MOV ECX,EDI
00482BE8  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_00482bee:
00482BEE  53                        PUSH EBX
00482BEF  8B CF                     MOV ECX,EDI
00482BF1  E8 94 22 F8 FF            CALL 0x00404e8a
00482BF6  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00482BF9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00482BFE  5F                        POP EDI
00482BFF  5E                        POP ESI
00482C00  5B                        POP EBX
00482C01  8B E5                     MOV ESP,EBP
00482C03  5D                        POP EBP
00482C04  C2 04 00                  RET 0x4
LAB_00482c07:
00482C07  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00482C0A  68 30 B9 7A 00            PUSH 0x7ab930
00482C0F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00482C14  6A FF                     PUSH -0x1
00482C16  6A 00                     PUSH 0x0
00482C18  68 C3 3D 00 00            PUSH 0x3dc3
00482C1D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00482C22  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00482C28  E8 A3 A8 22 00            CALL 0x006ad4d0
00482C2D  83 C4 18                  ADD ESP,0x18
00482C30  85 C0                     TEST EAX,EAX
00482C32  74 01                     JZ 0x00482c35
00482C34  CC                        INT3
LAB_00482c35:
00482C35  68 C4 3D 00 00            PUSH 0x3dc4
00482C3A  68 3C 9D 7A 00            PUSH 0x7a9d3c
00482C3F  6A 00                     PUSH 0x0
00482C41  56                        PUSH ESI
00482C42  E8 F9 31 22 00            CALL 0x006a5e40
LAB_00482c47:
00482C47  5F                        POP EDI
00482C48  5E                        POP ESI
00482C49  5B                        POP EBX
00482C4A  8B E5                     MOV ESP,EBP
00482C4C  5D                        POP EBP
00482C4D  C2 04 00                  RET 0x4
