FUN_00632a00:
00632A00  55                        PUSH EBP
00632A01  8B EC                     MOV EBP,ESP
00632A03  83 EC 64                  SUB ESP,0x64
00632A06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00632A0B  53                        PUSH EBX
00632A0C  56                        PUSH ESI
00632A0D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00632A10  57                        PUSH EDI
00632A11  8D 55 A0                  LEA EDX,[EBP + -0x60]
00632A14  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00632A17  6A 00                     PUSH 0x0
00632A19  52                        PUSH EDX
00632A1A  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00632A1D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00632A23  E8 C8 AD 0F 00            CALL 0x0072d7f0
00632A28  8B F0                     MOV ESI,EAX
00632A2A  83 C4 08                  ADD ESP,0x8
00632A2D  85 F6                     TEST ESI,ESI
00632A2F  0F 85 D3 02 00 00         JNZ 0x00632d08
00632A35  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00632A38  83 7B 11 03               CMP dword ptr [EBX + 0x11],0x3
00632A3C  0F 85 97 00 00 00         JNZ 0x00632ad9
00632A42  8B 43 25                  MOV EAX,dword ptr [EBX + 0x25]
00632A45  56                        PUSH ESI
00632A46  56                        PUSH ESI
00632A47  6A 01                     PUSH 0x1
00632A49  83 F8 04                  CMP EAX,0x4
00632A4C  56                        PUSH ESI
00632A4D  6A FF                     PUSH -0x1
00632A4F  7D 13                     JGE 0x00632a64
00632A51  8B 04 85 B4 1B 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d1bb4]
00632A58  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
00632A5E  50                        PUSH EAX
00632A5F  6A 1D                     PUSH 0x1d
00632A61  51                        PUSH ECX
00632A62  EB 10                     JMP 0x00632a74
LAB_00632a64:
00632A64  8B 14 85 B4 1B 7D 00      MOV EDX,dword ptr [EAX*0x4 + 0x7d1bb4]
00632A6B  A1 74 67 80 00            MOV EAX,[0x00806774]
00632A70  52                        PUSH EDX
00632A71  6A 1D                     PUSH 0x1d
00632A73  50                        PUSH EAX
LAB_00632a74:
00632A74  E8 77 70 0D 00            CALL 0x00709af0
00632A79  83 C4 20                  ADD ESP,0x20
00632A7C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00632A7F  8B 43 29                  MOV EAX,dword ptr [EBX + 0x29]
00632A82  6A 00                     PUSH 0x0
00632A84  6A 00                     PUSH 0x0
00632A86  6A 01                     PUSH 0x1
00632A88  83 F8 04                  CMP EAX,0x4
00632A8B  6A 00                     PUSH 0x0
00632A8D  6A FF                     PUSH -0x1
00632A8F  7D 24                     JGE 0x00632ab5
00632A91  8B 0C 85 B4 1B 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d1bb4]
00632A98  8B 15 64 67 80 00         MOV EDX,dword ptr [0x00806764]
00632A9E  51                        PUSH ECX
00632A9F  6A 1D                     PUSH 0x1d
00632AA1  52                        PUSH EDX
00632AA2  E8 49 70 0D 00            CALL 0x00709af0
00632AA7  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00632AAA  83 C4 20                  ADD ESP,0x20
00632AAD  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00632AB0  E9 BF 00 00 00            JMP 0x00632b74
LAB_00632ab5:
00632AB5  8B 04 85 B4 1B 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d1bb4]
00632ABC  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00632AC2  50                        PUSH EAX
00632AC3  6A 1D                     PUSH 0x1d
00632AC5  51                        PUSH ECX
00632AC6  E8 25 70 0D 00            CALL 0x00709af0
00632ACB  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00632ACE  83 C4 20                  ADD ESP,0x20
00632AD1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00632AD4  E9 9B 00 00 00            JMP 0x00632b74
LAB_00632ad9:
00632AD9  8B 43 0D                  MOV EAX,dword ptr [EBX + 0xd]
00632ADC  6A 00                     PUSH 0x0
00632ADE  6A 00                     PUSH 0x0
00632AE0  6A 01                     PUSH 0x1
00632AE2  83 F8 04                  CMP EAX,0x4
00632AE5  6A 00                     PUSH 0x0
00632AE7  6A FF                     PUSH -0x1
00632AE9  7D 12                     JGE 0x00632afd
00632AEB  8B 14 85 B4 1B 7D 00      MOV EDX,dword ptr [EAX*0x4 + 0x7d1bb4]
00632AF2  A1 64 67 80 00            MOV EAX,[0x00806764]
00632AF7  52                        PUSH EDX
00632AF8  6A 1D                     PUSH 0x1d
00632AFA  50                        PUSH EAX
00632AFB  EB 11                     JMP 0x00632b0e
LAB_00632afd:
00632AFD  8B 0C 85 B4 1B 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d1bb4]
00632B04  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00632B0A  51                        PUSH ECX
00632B0B  6A 1D                     PUSH 0x1d
00632B0D  52                        PUSH EDX
LAB_00632b0e:
00632B0E  E8 DD 6F 0D 00            CALL 0x00709af0
00632B13  8B F8                     MOV EDI,EAX
00632B15  8B 43 11                  MOV EAX,dword ptr [EBX + 0x11]
00632B18  83 C4 20                  ADD ESP,0x20
00632B1B  83 F8 01                  CMP EAX,0x1
00632B1E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00632B21  75 24                     JNZ 0x00632b47
00632B23  A1 CC 1B 7D 00            MOV EAX,[0x007d1bcc]
00632B28  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00632B2E  6A 00                     PUSH 0x0
00632B30  6A 00                     PUSH 0x0
00632B32  6A 01                     PUSH 0x1
00632B34  6A 00                     PUSH 0x0
00632B36  6A FF                     PUSH -0x1
00632B38  50                        PUSH EAX
00632B39  6A 1D                     PUSH 0x1d
00632B3B  51                        PUSH ECX
00632B3C  E8 AF 6F 0D 00            CALL 0x00709af0
00632B41  83 C4 20                  ADD ESP,0x20
00632B44  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00632b47:
00632B47  83 7B 11 04               CMP dword ptr [EBX + 0x11],0x4
00632B4B  75 27                     JNZ 0x00632b74
00632B4D  8B 15 D0 1B 7D 00         MOV EDX,dword ptr [0x007d1bd0]
00632B53  A1 74 67 80 00            MOV EAX,[0x00806774]
00632B58  6A 00                     PUSH 0x0
00632B5A  6A 00                     PUSH 0x0
00632B5C  6A 01                     PUSH 0x1
00632B5E  6A 00                     PUSH 0x0
00632B60  6A FF                     PUSH -0x1
00632B62  52                        PUSH EDX
00632B63  6A 1D                     PUSH 0x1d
00632B65  50                        PUSH EAX
00632B66  E8 85 6F 0D 00            CALL 0x00709af0
00632B6B  83 C4 20                  ADD ESP,0x20
00632B6E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00632B71  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_00632b74:
00632B74  8B 03                     MOV EAX,dword ptr [EBX]
00632B76  85 C0                     TEST EAX,EAX
00632B78  0F 84 7A 01 00 00         JZ 0x00632cf8
00632B7E  8B 4B 19                  MOV ECX,dword ptr [EBX + 0x19]
00632B81  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00632B84  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00632B87  33 C9                     XOR ECX,ECX
00632B89  85 C0                     TEST EAX,EAX
00632B8B  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00632B8E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00632B91  0F 8E 61 01 00 00         JLE 0x00632cf8
LAB_00632b97:
00632B97  8B 03                     MOV EAX,dword ptr [EBX]
00632B99  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
00632B9C  73 0D                     JNC 0x00632bab
00632B9E  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00632BA1  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00632BA4  0F AF F1                  IMUL ESI,ECX
00632BA7  03 F2                     ADD ESI,EDX
00632BA9  EB 02                     JMP 0x00632bad
LAB_00632bab:
00632BAB  33 F6                     XOR ESI,ESI
LAB_00632bad:
00632BAD  85 F6                     TEST ESI,ESI
00632BAF  0F 84 34 01 00 00         JZ 0x00632ce9
00632BB5  83 7B 11 03               CMP dword ptr [EBX + 0x11],0x3
00632BB9  75 1E                     JNZ 0x00632bd9
00632BBB  8B 53 25                  MOV EDX,dword ptr [EBX + 0x25]
00632BBE  8B 06                     MOV EAX,dword ptr [ESI]
00632BC0  3B D0                     CMP EDX,EAX
00632BC2  75 0F                     JNZ 0x00632bd3
00632BC4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00632BC7  8B FA                     MOV EDI,EDX
00632BC9  8B 02                     MOV EAX,dword ptr [EDX]
00632BCB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00632BCE  89 46 1D                  MOV dword ptr [ESI + 0x1d],EAX
00632BD1  EB 09                     JMP 0x00632bdc
LAB_00632bd3:
00632BD3  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00632BD6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_00632bd9:
00632BD9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_00632bdc:
00632BDC  83 7B 11 01               CMP dword ptr [EBX + 0x11],0x1
00632BE0  75 0F                     JNZ 0x00632bf1
00632BE2  3B 4D E4                  CMP ECX,dword ptr [EBP + -0x1c]
00632BE5  7C 0A                     JL 0x00632bf1
00632BE7  8B 02                     MOV EAX,dword ptr [EDX]
00632BE9  8B FA                     MOV EDI,EDX
00632BEB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00632BEE  89 46 1D                  MOV dword ptr [ESI + 0x1d],EAX
LAB_00632bf1:
00632BF1  83 7B 11 04               CMP dword ptr [EBX + 0x11],0x4
00632BF5  75 15                     JNZ 0x00632c0c
00632BF7  8B 43 1D                  MOV EAX,dword ptr [EBX + 0x1d]
00632BFA  3B C8                     CMP ECX,EAX
00632BFC  7C 08                     JL 0x00632c06
00632BFE  03 C0                     ADD EAX,EAX
00632C00  8B FA                     MOV EDI,EDX
00632C02  3B C8                     CMP ECX,EAX
00632C04  7C 03                     JL 0x00632c09
LAB_00632c06:
00632C06  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_00632c09:
00632C09  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_00632c0c:
00632C0C  8B 4F 0D                  MOV ECX,dword ptr [EDI + 0xd]
00632C0F  8B 5F 09                  MOV EBX,dword ptr [EDI + 0x9]
00632C12  8B C1                     MOV EAX,ECX
00632C14  6A 00                     PUSH 0x0
00632C16  99                        CDQ
00632C17  2B C2                     SUB EAX,EDX
00632C19  D1 F8                     SAR EAX,0x1
00632C1B  83 E8 0E                  SUB EAX,0xe
00632C1E  50                        PUSH EAX
00632C1F  8B C3                     MOV EAX,EBX
00632C21  99                        CDQ
00632C22  2B C2                     SUB EAX,EDX
00632C24  D1 F8                     SAR EAX,0x1
00632C26  50                        PUSH EAX
00632C27  51                        PUSH ECX
00632C28  53                        PUSH EBX
00632C29  6A 00                     PUSH 0x0
00632C2B  8D 4D F8                  LEA ECX,[EBP + -0x8]
00632C2E  6A 01                     PUSH 0x1
00632C30  51                        PUSH ECX
00632C31  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00632C37  E8 24 5A 0B 00            CALL 0x006e8660
00632C3C  8B 57 21                  MOV EDX,dword ptr [EDI + 0x21]
00632C3F  8B 07                     MOV EAX,dword ptr [EDI]
00632C41  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00632C44  6A 01                     PUSH 0x1
00632C46  52                        PUSH EDX
00632C47  50                        PUSH EAX
00632C48  6A 00                     PUSH 0x0
00632C4A  51                        PUSH ECX
00632C4B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00632C51  E8 8A 6C 0B 00            CALL 0x006e98e0
00632C56  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00632C59  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00632C5F  6A 00                     PUSH 0x0
00632C61  6A 00                     PUSH 0x0
00632C63  52                        PUSH EDX
00632C64  E8 07 76 0B 00            CALL 0x006ea270
00632C69  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00632C6C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00632C72  6A 00                     PUSH 0x0
00632C74  6A 00                     PUSH 0x0
00632C76  50                        PUSH EAX
00632C77  E8 64 79 0B 00            CALL 0x006ea5e0
00632C7C  DB 46 15                  FILD dword ptr [ESI + 0x15]
00632C7F  51                        PUSH ECX
00632C80  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00632C86  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00632C8C  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00632C92  D9 1C 24                  FSTP float ptr [ESP]
00632C95  DB 46 11                  FILD dword ptr [ESI + 0x11]
00632C98  51                        PUSH ECX
00632C99  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00632C9F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00632CA5  D9 1C 24                  FSTP float ptr [ESP]
00632CA8  DB 46 0D                  FILD dword ptr [ESI + 0xd]
00632CAB  51                        PUSH ECX
00632CAC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00632CAF  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00632CB5  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00632CBB  D9 1C 24                  FSTP float ptr [ESP]
00632CBE  51                        PUSH ECX
00632CBF  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00632CC5  E8 96 7C 0B 00            CALL 0x006ea960
00632CCA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00632CCD  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00632CD0  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
00632CD3  C6 46 0C 00               MOV byte ptr [ESI + 0xc],0x0
00632CD7  8B 48 15                  MOV ECX,dword ptr [EAX + 0x15]
00632CDA  85 C9                     TEST ECX,ECX
00632CDC  74 05                     JZ 0x00632ce3
00632CDE  8B 0F                     MOV ECX,dword ptr [EDI]
00632CE0  89 4E 1D                  MOV dword ptr [ESI + 0x1d],ECX
LAB_00632ce3:
00632CE3  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00632CE6  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_00632ce9:
00632CE9  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00632CEC  41                        INC ECX
00632CED  3B C8                     CMP ECX,EAX
00632CEF  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00632CF2  0F 8C 9F FE FF FF         JL 0x00632b97
LAB_00632cf8:
00632CF8  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00632CFB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00632D01  5F                        POP EDI
00632D02  5E                        POP ESI
00632D03  5B                        POP EBX
00632D04  8B E5                     MOV ESP,EBP
00632D06  5D                        POP EBP
00632D07  C3                        RET
LAB_00632d08:
00632D08  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00632D0B  68 60 1D 7D 00            PUSH 0x7d1d60
00632D10  68 CC 4C 7A 00            PUSH 0x7a4ccc
00632D15  56                        PUSH ESI
00632D16  6A 00                     PUSH 0x0
00632D18  68 BD 01 00 00            PUSH 0x1bd
00632D1D  68 3C 1D 7D 00            PUSH 0x7d1d3c
00632D22  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00632D27  E8 A4 A7 07 00            CALL 0x006ad4d0
00632D2C  83 C4 18                  ADD ESP,0x18
00632D2F  85 C0                     TEST EAX,EAX
00632D31  74 01                     JZ 0x00632d34
00632D33  CC                        INT3
LAB_00632d34:
00632D34  68 BF 01 00 00            PUSH 0x1bf
00632D39  68 3C 1D 7D 00            PUSH 0x7d1d3c
00632D3E  6A 00                     PUSH 0x0
00632D40  56                        PUSH ESI
00632D41  E8 FA 30 07 00            CALL 0x006a5e40
00632D46  5F                        POP EDI
00632D47  5E                        POP ESI
00632D48  5B                        POP EBX
00632D49  8B E5                     MOV ESP,EBP
00632D4B  5D                        POP EBP
00632D4C  C3                        RET
