CursorClassTy::GetMessage:
005449B0  55                        PUSH EBP
005449B1  8B EC                     MOV EBP,ESP
005449B3  81 EC 20 05 00 00         SUB ESP,0x520
005449B9  53                        PUSH EBX
005449BA  56                        PUSH ESI
005449BB  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
005449BE  8B 49 10                  MOV ECX,dword ptr [ECX + 0x10]
005449C1  57                        PUSH EDI
005449C2  E8 E9 07 1A 00            CALL 0x006e51b0
005449C7  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005449CA  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005449CF  8D 95 28 FF FF FF         LEA EDX,[EBP + 0xffffff28]
005449D5  8D 8D 24 FF FF FF         LEA ECX,[EBP + 0xffffff24]
005449DB  6A 00                     PUSH 0x0
005449DD  52                        PUSH EDX
005449DE  89 85 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EAX
005449E4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005449EA  E8 01 8E 1E 00            CALL 0x0072d7f0
005449EF  8B F0                     MOV ESI,EAX
005449F1  83 C4 08                  ADD ESP,0x8
005449F4  85 F6                     TEST ESI,ESI
005449F6  0F 85 54 32 00 00         JNZ 0x00547c50
005449FC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005449FF  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
00544A02  57                        PUSH EDI
00544A03  8B CB                     MOV ECX,EBX
00544A05  E8 C6 15 1A 00            CALL 0x006e5fd0
00544A0A  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00544A0D  05 F0 5E FF FF            ADD EAX,0xffff5ef0
00544A12  83 F8 05                  CMP EAX,0x5
00544A15  77 3B                     JA 0x00544a52
switchD_00544a17::switchD:
00544A17  FF 24 85 A0 7C 54 00      JMP dword ptr [EAX*0x4 + 0x547ca0]
switchD_00544a17::caseD_a110:
00544A1E  C6 83 D4 00 00 00 01      MOV byte ptr [EBX + 0xd4],0x1
00544A25  EB 2B                     JMP 0x00544a52
switchD_00544a17::caseD_a111:
00544A27  C6 83 D4 00 00 00 00      MOV byte ptr [EBX + 0xd4],0x0
00544A2E  EB 22                     JMP 0x00544a52
switchD_00544a17::caseD_a112:
00544A30  C6 83 D3 00 00 00 01      MOV byte ptr [EBX + 0xd3],0x1
00544A37  EB 19                     JMP 0x00544a52
switchD_00544a17::caseD_a113:
00544A39  C6 83 D3 00 00 00 00      MOV byte ptr [EBX + 0xd3],0x0
00544A40  EB 10                     JMP 0x00544a52
switchD_00544a17::caseD_a114:
00544A42  C6 83 D5 00 00 00 01      MOV byte ptr [EBX + 0xd5],0x1
00544A49  EB 07                     JMP 0x00544a52
switchD_00544a17::caseD_a115:
00544A4B  C6 83 D5 00 00 00 00      MOV byte ptr [EBX + 0xd5],0x0
switchD_00544a17::default:
00544A52  8A 83 93 04 00 00         MOV AL,byte ptr [EBX + 0x493]
00544A58  BE 02 00 00 00            MOV ESI,0x2
00544A5D  3C 02                     CMP AL,0x2
00544A5F  74 15                     JZ 0x00544a76
00544A61  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00544A64  3D FF A0 00 00            CMP EAX,0xa0ff
00544A69  76 0B                     JBE 0x00544a76
00544A6B  3D FF B0 00 00            CMP EAX,0xb0ff
00544A70  0F 86 C4 31 00 00         JBE 0x00547c3a
LAB_00544a76:
00544A76  A1 84 87 80 00            MOV EAX,[0x00808784]
00544A7B  33 D2                     XOR EDX,EDX
00544A7D  3B C2                     CMP EAX,EDX
00544A7F  75 10                     JNZ 0x00544a91
00544A81  39 15 8C 87 80 00         CMP dword ptr [0x0080878c],EDX
00544A87  75 08                     JNZ 0x00544a91
00544A89  39 15 90 87 80 00         CMP dword ptr [0x00808790],EDX
00544A8F  74 15                     JZ 0x00544aa6
LAB_00544a91:
00544A91  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00544A94  3D 0F A1 00 00            CMP EAX,0xa10f
00544A99  72 0B                     JC 0x00544aa6
00544A9B  3D FF B0 00 00            CMP EAX,0xb0ff
00544AA0  0F 86 94 31 00 00         JBE 0x00547c3a
LAB_00544aa6:
00544AA6  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00544AA9  83 F8 60                  CMP EAX,0x60
00544AAC  0F 87 33 09 00 00         JA 0x005453e5
00544AB2  0F 84 0F 08 00 00         JZ 0x005452c7
00544AB8  83 F8 09                  CMP EAX,0x9
00544ABB  0F 87 79 31 00 00         JA 0x00547c3a
switchD_00544ac1::switchD:
00544AC1  FF 24 85 B8 7C 54 00      JMP dword ptr [EAX*0x4 + 0x547cb8]
switchD_00544ac1::caseD_2:
00544AC8  6A 01                     PUSH 0x1
00544ACA  8B CB                     MOV ECX,EBX
00544ACC  E8 E8 C5 EB FF            CALL 0x004010b9
00544AD1  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00544AD7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00544ADC  33 C0                     XOR EAX,EAX
00544ADE  5F                        POP EDI
00544ADF  5E                        POP ESI
00544AE0  5B                        POP EBX
00544AE1  8B E5                     MOV ESP,EBP
00544AE3  5D                        POP EBP
00544AE4  C2 04 00                  RET 0x4
switchD_00544ac1::caseD_8:
00544AE7  39 93 C1 00 00 00         CMP dword ptr [EBX + 0xc1],EDX
00544AED  0F 85 47 31 00 00         JNZ 0x00547c3a
00544AF3  8B CB                     MOV ECX,EBX
00544AF5  C7 83 C1 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xc1],0x1
00544AFF  E8 9C D9 EB FF            CALL 0x004024a0
00544B04  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00544B0A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00544B0F  33 C0                     XOR EAX,EAX
00544B11  5F                        POP EDI
00544B12  5E                        POP ESI
00544B13  5B                        POP EBX
00544B14  8B E5                     MOV ESP,EBP
00544B16  5D                        POP EBP
00544B17  C2 04 00                  RET 0x4
switchD_00544ac1::caseD_3:
00544B1A  8B CB                     MOV ECX,EBX
00544B1C  E8 15 E9 EB FF            CALL 0x00403436
00544B21  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00544B27  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00544B2C  33 C0                     XOR EAX,EAX
00544B2E  5F                        POP EDI
00544B2F  5E                        POP ESI
00544B30  5B                        POP EBX
00544B31  8B E5                     MOV ESP,EBP
00544B33  5D                        POP EBP
00544B34  C2 04 00                  RET 0x4
switchD_00544ac1::caseD_9:
00544B37  39 93 C1 00 00 00         CMP dword ptr [EBX + 0xc1],EDX
00544B3D  0F 84 F7 30 00 00         JZ 0x00547c3a
00544B43  8B CB                     MOV ECX,EBX
00544B45  C7 83 C1 00 00 00 00 00 00 00  MOV dword ptr [EBX + 0xc1],0x0
00544B4F  E8 10 06 EC FF            CALL 0x00405164
00544B54  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00544B5A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00544B5F  33 C0                     XOR EAX,EAX
00544B61  5F                        POP EDI
00544B62  5E                        POP ESI
00544B63  5B                        POP EBX
00544B64  8B E5                     MOV ESP,EBP
00544B66  5D                        POP EBP
00544B67  C2 04 00                  RET 0x4
switchD_00544ac1::caseD_0:
00544B6A  33 C0                     XOR EAX,EAX
00544B6C  8A 83 DE 00 00 00         MOV AL,byte ptr [EBX + 0xde]
00544B72  83 F8 05                  CMP EAX,0x5
00544B75  0F 87 12 07 00 00         JA 0x0054528d
switchD_00544b7b::switchD:
00544B7B  FF 24 85 E0 7C 54 00      JMP dword ptr [EAX*0x4 + 0x547ce0]
switchD_00544b7b::caseD_1:
00544B82  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00544B88  85 C9                     TEST ECX,ECX
00544B8A  74 55                     JZ 0x00544be1
00544B8C  8B 83 EF 00 00 00         MOV EAX,dword ptr [EBX + 0xef]
00544B92  8B 93 F3 00 00 00         MOV EDX,dword ptr [EBX + 0xf3]
00544B98  6A 00                     PUSH 0x0
00544B9A  6A 00                     PUSH 0x0
00544B9C  6A 00                     PUSH 0x0
00544B9E  6A 00                     PUSH 0x0
00544BA0  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
00544BA3  6A 00                     PUSH 0x0
00544BA5  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
00544BA8  6A 00                     PUSH 0x0
00544BAA  8D 45 88                  LEA EAX,[EBP + -0x78]
00544BAD  6A 00                     PUSH 0x0
00544BAF  8D 95 68 FF FF FF         LEA EDX,[EBP + 0xffffff68]
00544BB5  50                        PUSH EAX
00544BB6  52                        PUSH EDX
00544BB7  C7 45 90 00 00 00 00      MOV dword ptr [EBP + -0x70],0x0
00544BBE  E8 0D DA 19 00            CALL 0x006e25d0
00544BC3  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00544BC9  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
00544BCF  C1 F8 10                  SAR EAX,0x10
00544BD2  C1 F9 10                  SAR ECX,0x10
00544BD5  89 83 DF 00 00 00         MOV dword ptr [EBX + 0xdf],EAX
00544BDB  89 8B E3 00 00 00         MOV dword ptr [EBX + 0xe3],ECX
LAB_00544be1:
00544BE1  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
00544BE7  8B 8B B2 04 00 00         MOV ECX,dword ptr [EBX + 0x4b2]
00544BED  8B BB DF 00 00 00         MOV EDI,dword ptr [EBX + 0xdf]
00544BF3  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
00544BF9  8B 93 E3 00 00 00         MOV EDX,dword ptr [EBX + 0xe3]
00544BFF  2B C1                     SUB EAX,ECX
00544C01  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
00544C07  2B C7                     SUB EAX,EDI
00544C09  2B CE                     SUB ECX,ESI
00544C0B  89 83 E7 00 00 00         MOV dword ptr [EBX + 0xe7],EAX
00544C11  2B CA                     SUB ECX,EDX
00544C13  99                        CDQ
00544C14  33 C2                     XOR EAX,EDX
00544C16  89 8B EB 00 00 00         MOV dword ptr [EBX + 0xeb],ECX
00544C1C  2B C2                     SUB EAX,EDX
00544C1E  83 F8 05                  CMP EAX,0x5
00544C21  7F 10                     JG 0x00544c33
00544C23  8B C1                     MOV EAX,ECX
00544C25  99                        CDQ
00544C26  33 C2                     XOR EAX,EDX
00544C28  2B C2                     SUB EAX,EDX
00544C2A  83 F8 05                  CMP EAX,0x5
00544C2D  0F 8E 5A 06 00 00         JLE 0x0054528d
LAB_00544c33:
00544C33  8B 83 0B 01 00 00         MOV EAX,dword ptr [EBX + 0x10b]
00544C39  8D B3 0B 01 00 00         LEA ESI,[EBX + 0x10b]
00544C3F  85 C0                     TEST EAX,EAX
00544C41  C6 83 DE 00 00 00 02      MOV byte ptr [EBX + 0xde],0x2
00544C48  7C 0D                     JL 0x00544c57
00544C4A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00544C50  50                        PUSH EAX
00544C51  52                        PUSH EDX
00544C52  E8 59 EF 16 00            CALL 0x006b3bb0
LAB_00544c57:
00544C57  8D 93 13 01 00 00         LEA EDX,[EBX + 0x113]
00544C5D  B9 20 00 00 00            MOV ECX,0x20
00544C62  8B C2                     MOV EAX,EDX
LAB_00544c64:
00544C64  8B BB A2 04 00 00         MOV EDI,dword ptr [EBX + 0x4a2]
00544C6A  F7 DF                     NEG EDI
00544C6C  1B FF                     SBB EDI,EDI
00544C6E  83 C0 1C                  ADD EAX,0x1c
00544C71  83 E7 49                  AND EDI,0x49
00544C74  83 C7 45                  ADD EDI,0x45
00544C77  81 E7 FF FF 00 00         AND EDI,0xffff
00544C7D  81 CF 00 00 00 01         OR EDI,0x1000000
00544C83  49                        DEC ECX
00544C84  89 78 E4                  MOV dword ptr [EAX + -0x1c],EDI
00544C87  75 DB                     JNZ 0x00544c64
00544C89  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00544C8E  52                        PUSH EDX
00544C8F  6A 20                     PUSH 0x20
00544C91  6A 0A                     PUSH 0xa
00544C93  56                        PUSH ESI
00544C94  50                        PUSH EAX
00544C95  E8 56 4A 17 00            CALL 0x006b96f0
00544C9A  8B 0E                     MOV ECX,dword ptr [ESI]
00544C9C  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00544CA2  6A 02                     PUSH 0x2
00544CA4  51                        PUSH ECX
00544CA5  52                        PUSH EDX
00544CA6  E8 65 CE 16 00            CALL 0x006b1b10
00544CAB  8B 83 E3 00 00 00         MOV EAX,dword ptr [EBX + 0xe3]
00544CB1  8B 8B DF 00 00 00         MOV ECX,dword ptr [EBX + 0xdf]
00544CB7  8B 16                     MOV EDX,dword ptr [ESI]
00544CB9  50                        PUSH EAX
00544CBA  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00544CBF  51                        PUSH ECX
00544CC0  6A FF                     PUSH -0x1
00544CC2  52                        PUSH EDX
00544CC3  50                        PUSH EAX
00544CC4  E8 77 E9 16 00            CALL 0x006b3640
00544CC9  8B 8B EB 00 00 00         MOV ECX,dword ptr [EBX + 0xeb]
00544CCF  8B 93 E7 00 00 00         MOV EDX,dword ptr [EBX + 0xe7]
00544CD5  8B 06                     MOV EAX,dword ptr [ESI]
00544CD7  51                        PUSH ECX
00544CD8  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00544CDE  52                        PUSH EDX
00544CDF  50                        PUSH EAX
00544CE0  51                        PUSH ECX
00544CE1  E8 1A DB 16 00            CALL 0x006b2800
00544CE6  8B CB                     MOV ECX,EBX
00544CE8  E8 9A 09 EC FF            CALL 0x00405687
00544CED  85 C0                     TEST EAX,EAX
00544CEF  0F 85 98 05 00 00         JNZ 0x0054528d
00544CF5  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
00544CF8  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
00544CFB  52                        PUSH EDX
00544CFC  50                        PUSH EAX
00544CFD  6A 00                     PUSH 0x0
00544CFF  8B CB                     MOV ECX,EBX
00544D01  E8 78 03 EC FF            CALL 0x0040507e
00544D06  E9 82 05 00 00            JMP 0x0054528d
switchD_00544b7b::caseD_3:
00544D0B  8B 83 0B 01 00 00         MOV EAX,dword ptr [EBX + 0x10b]
00544D11  85 C0                     TEST EAX,EAX
00544D13  0F 8C 52 03 00 00         JL 0x0054506b
00544D19  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00544D1F  50                        PUSH EAX
00544D20  51                        PUSH ECX
00544D21  E9 36 03 00 00            JMP 0x0054505c
switchD_00544b7b::caseD_2:
00544D26  8B 83 CD 00 00 00         MOV EAX,dword ptr [EBX + 0xcd]
00544D2C  C7 45 FC FE FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffe
00544D33  48                        DEC EAX
00544D34  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
00544D3B  83 F8 03                  CMP EAX,0x3
00544D3E  0F 87 97 00 00 00         JA 0x00544ddb
switchD_00544d44::switchD:
00544D44  FF 24 85 F8 7C 54 00      JMP dword ptr [EAX*0x4 + 0x547cf8]
switchD_00544d44::caseD_1:
00544D4B  8B 83 B6 04 00 00         MOV EAX,dword ptr [EBX + 0x4b6]
00544D51  8B 8B B2 04 00 00         MOV ECX,dword ptr [EBX + 0x4b2]
00544D57  6A 00                     PUSH 0x0
00544D59  8D 50 64                  LEA EDX,[EAX + 0x64]
00544D5C  52                        PUSH EDX
00544D5D  51                        PUSH ECX
00544D5E  EB 3B                     JMP 0x00544d9b
switchD_00544d44::caseD_2:
00544D60  8B 83 B6 04 00 00         MOV EAX,dword ptr [EBX + 0x4b6]
00544D66  8B 8B BA 04 00 00         MOV ECX,dword ptr [EBX + 0x4ba]
00544D6C  8B 93 B2 04 00 00         MOV EDX,dword ptr [EBX + 0x4b2]
00544D72  6A 00                     PUSH 0x0
00544D74  8D 70 64                  LEA ESI,[EAX + 0x64]
00544D77  56                        PUSH ESI
00544D78  8D 74 11 FF               LEA ESI,[ECX + EDX*0x1 + -0x1]
00544D7C  56                        PUSH ESI
00544D7D  8B B3 BE 04 00 00         MOV ESI,dword ptr [EBX + 0x4be]
00544D83  56                        PUSH ESI
00544D84  51                        PUSH ECX
00544D85  50                        PUSH EAX
00544D86  EB 4B                     JMP 0x00544dd3
switchD_00544d44::caseD_3:
00544D88  8B 8B B2 04 00 00         MOV ECX,dword ptr [EBX + 0x4b2]
00544D8E  8B 83 B6 04 00 00         MOV EAX,dword ptr [EBX + 0x4b6]
00544D94  6A 00                     PUSH 0x0
00544D96  50                        PUSH EAX
00544D97  8D 51 64                  LEA EDX,[ECX + 0x64]
00544D9A  52                        PUSH EDX
LAB_00544d9b:
00544D9B  8B 93 BE 04 00 00         MOV EDX,dword ptr [EBX + 0x4be]
00544DA1  52                        PUSH EDX
00544DA2  8B 93 BA 04 00 00         MOV EDX,dword ptr [EBX + 0x4ba]
00544DA8  52                        PUSH EDX
00544DA9  50                        PUSH EAX
00544DAA  51                        PUSH ECX
00544DAB  EB 27                     JMP 0x00544dd4
switchD_00544d44::caseD_4:
00544DAD  8B 83 BE 04 00 00         MOV EAX,dword ptr [EBX + 0x4be]
00544DB3  8B 8B B6 04 00 00         MOV ECX,dword ptr [EBX + 0x4b6]
00544DB9  8B 93 B2 04 00 00         MOV EDX,dword ptr [EBX + 0x4b2]
00544DBF  6A 00                     PUSH 0x0
00544DC1  8D 74 08 FF               LEA ESI,[EAX + ECX*0x1 + -0x1]
00544DC5  56                        PUSH ESI
00544DC6  8D 72 64                  LEA ESI,[EDX + 0x64]
00544DC9  56                        PUSH ESI
00544DCA  50                        PUSH EAX
00544DCB  8B 83 BA 04 00 00         MOV EAX,dword ptr [EBX + 0x4ba]
00544DD1  50                        PUSH EAX
00544DD2  51                        PUSH ECX
LAB_00544dd3:
00544DD3  52                        PUSH EDX
LAB_00544dd4:
00544DD4  8B CB                     MOV ECX,EBX
00544DD6  E8 C5 E0 EB FF            CALL 0x00402ea0
switchD_00544d44::default:
00544DDB  8B 8B EF 00 00 00         MOV ECX,dword ptr [EBX + 0xef]
00544DE1  8B 93 F3 00 00 00         MOV EDX,dword ptr [EBX + 0xf3]
00544DE7  6A 00                     PUSH 0x0
00544DE9  6A 00                     PUSH 0x0
00544DEB  6A 00                     PUSH 0x0
00544DED  6A 00                     PUSH 0x0
00544DEF  6A 00                     PUSH 0x0
00544DF1  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
00544DF4  6A 00                     PUSH 0x0
00544DF6  8D 45 94                  LEA EAX,[EBP + -0x6c]
00544DF9  6A 00                     PUSH 0x0
00544DFB  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
00544E01  50                        PUSH EAX
00544E02  51                        PUSH ECX
00544E03  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00544E09  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00544E0C  C7 45 9C 00 00 00 00      MOV dword ptr [EBP + -0x64],0x0
00544E13  E8 B8 D7 19 00            CALL 0x006e25d0
00544E18  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
00544E1E  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00544E24  C1 F8 10                  SAR EAX,0x10
00544E27  89 83 E3 00 00 00         MOV dword ptr [EBX + 0xe3],EAX
00544E2D  8B 83 CD 00 00 00         MOV EAX,dword ptr [EBX + 0xcd]
00544E33  C1 FA 10                  SAR EDX,0x10
00544E36  85 C0                     TEST EAX,EAX
00544E38  89 93 DF 00 00 00         MOV dword ptr [EBX + 0xdf],EDX
00544E3E  74 6A                     JZ 0x00544eaa
00544E40  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
00544E46  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00544E49  6A 00                     PUSH 0x0
00544E4B  8D 55 EC                  LEA EDX,[EBP + -0x14]
00544E4E  51                        PUSH ECX
00544E4F  52                        PUSH EDX
00544E50  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00544E56  83 EC 08                  SUB ESP,0x8
00544E59  DD 1C 24                  FSTP double ptr [ESP]
00544E5C  D9 05 D0 73 80 00         FLD float ptr [0x008073d0]
00544E62  83 EC 08                  SUB ESP,0x8
00544E65  DD 1C 24                  FSTP double ptr [ESP]
00544E68  E8 D3 C5 19 00            CALL 0x006e1440
00544E6D  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
00544E73  8B 8B B2 04 00 00         MOV ECX,dword ptr [EBX + 0x4b2]
00544E79  8B BB DF 00 00 00         MOV EDI,dword ptr [EBX + 0xdf]
00544E7F  2B C1                     SUB EAX,ECX
00544E81  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
00544E87  2B C7                     SUB EAX,EDI
00544E89  89 83 E7 00 00 00         MOV dword ptr [EBX + 0xe7],EAX
LAB_00544e8f:
00544E8F  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
00544E95  8B 93 E3 00 00 00         MOV EDX,dword ptr [EBX + 0xe3]
00544E9B  2B CE                     SUB ECX,ESI
00544E9D  2B CA                     SUB ECX,EDX
00544E9F  89 8B EB 00 00 00         MOV dword ptr [EBX + 0xeb],ECX
00544EA5  E9 2E 01 00 00            JMP 0x00544fd8
LAB_00544eaa:
00544EAA  8B 83 BE 04 00 00         MOV EAX,dword ptr [EBX + 0x4be]
00544EB0  8B 8B BA 04 00 00         MOV ECX,dword ptr [EBX + 0x4ba]
00544EB6  8B 93 B6 04 00 00         MOV EDX,dword ptr [EBX + 0x4b6]
00544EBC  8D B3 C9 00 00 00         LEA ESI,[EBX + 0xc9]
00544EC2  8D BB C5 00 00 00         LEA EDI,[EBX + 0xc5]
00544EC8  56                        PUSH ESI
00544EC9  57                        PUSH EDI
00544ECA  50                        PUSH EAX
00544ECB  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
00544ED1  51                        PUSH ECX
00544ED2  52                        PUSH EDX
00544ED3  50                        PUSH EAX
00544ED4  8B CB                     MOV ECX,EBX
00544ED6  E8 FF 0E EC FF            CALL 0x00405dda
00544EDB  85 C0                     TEST EAX,EAX
00544EDD  74 24                     JZ 0x00544f03
00544EDF  66 8B 0F                  MOV CX,word ptr [EDI]
00544EE2  66 8B 16                  MOV DX,word ptr [ESI]
00544EE5  8D 45 C4                  LEA EAX,[EBP + -0x3c]
00544EE8  66 89 4D DC               MOV word ptr [EBP + -0x24],CX
00544EEC  50                        PUSH EAX
00544EED  6A 01                     PUSH 0x1
00544EEF  6A 03                     PUSH 0x3
00544EF1  8B CB                     MOV ECX,EBX
00544EF3  C7 45 D4 16 00 00 00      MOV dword ptr [EBP + -0x2c],0x16
00544EFA  66 89 55 DE               MOV word ptr [EBP + -0x22],DX
00544EFE  E8 FD 10 1A 00            CALL 0x006e6000
LAB_00544f03:
00544F03  8B CB                     MOV ECX,EBX
00544F05  E8 7D 07 EC FF            CALL 0x00405687
00544F0A  8B 0E                     MOV ECX,dword ptr [ESI]
00544F0C  8B 17                     MOV EDX,dword ptr [EDI]
00544F0E  F7 D8                     NEG EAX
00544F10  1B C0                     SBB EAX,EAX
00544F12  40                        INC EAX
00544F13  50                        PUSH EAX
00544F14  8B 83 BE 04 00 00         MOV EAX,dword ptr [EBX + 0x4be]
00544F1A  51                        PUSH ECX
00544F1B  8B 8B BA 04 00 00         MOV ECX,dword ptr [EBX + 0x4ba]
00544F21  52                        PUSH EDX
00544F22  8B 93 B6 04 00 00         MOV EDX,dword ptr [EBX + 0x4b6]
00544F28  50                        PUSH EAX
00544F29  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
00544F2F  51                        PUSH ECX
00544F30  52                        PUSH EDX
00544F31  50                        PUSH EAX
00544F32  8B CB                     MOV ECX,EBX
00544F34  E8 67 DF EB FF            CALL 0x00402ea0
00544F39  85 C0                     TEST EAX,EAX
00544F3B  74 4C                     JZ 0x00544f89
00544F3D  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
00544F43  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00544F46  6A 00                     PUSH 0x0
00544F48  8D 55 EC                  LEA EDX,[EBP + -0x14]
00544F4B  51                        PUSH ECX
00544F4C  52                        PUSH EDX
00544F4D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00544F53  83 EC 08                  SUB ESP,0x8
00544F56  DD 1C 24                  FSTP double ptr [ESP]
00544F59  D9 05 D0 73 80 00         FLD float ptr [0x008073d0]
00544F5F  83 EC 08                  SUB ESP,0x8
00544F62  DD 1C 24                  FSTP double ptr [ESP]
00544F65  E8 D6 C4 19 00            CALL 0x006e1440
00544F6A  8B 07                     MOV EAX,dword ptr [EDI]
00544F6C  8B 8B DF 00 00 00         MOV ECX,dword ptr [EBX + 0xdf]
00544F72  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
00544F78  2B C1                     SUB EAX,ECX
00544F7A  8B 0E                     MOV ECX,dword ptr [ESI]
00544F7C  2B C7                     SUB EAX,EDI
00544F7E  89 83 E7 00 00 00         MOV dword ptr [EBX + 0xe7],EAX
00544F84  E9 06 FF FF FF            JMP 0x00544e8f
LAB_00544f89:
00544F89  8B 83 EB 00 00 00         MOV EAX,dword ptr [EBX + 0xeb]
00544F8F  8B 8B DF 00 00 00         MOV ECX,dword ptr [EBX + 0xdf]
00544F95  8B 93 E7 00 00 00         MOV EDX,dword ptr [EBX + 0xe7]
00544F9B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00544F9E  8B 07                     MOV EAX,dword ptr [EDI]
00544FA0  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
00544FA6  2B C1                     SUB EAX,ECX
00544FA8  8B 0E                     MOV ECX,dword ptr [ESI]
00544FAA  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
00544FB0  2B C7                     SUB EAX,EDI
00544FB2  8B BB E3 00 00 00         MOV EDI,dword ptr [EBX + 0xe3]
00544FB8  2B CE                     SUB ECX,ESI
00544FBA  2B CF                     SUB ECX,EDI
00544FBC  3B D0                     CMP EDX,EAX
00544FBE  89 83 E7 00 00 00         MOV dword ptr [EBX + 0xe7],EAX
00544FC4  89 8B EB 00 00 00         MOV dword ptr [EBX + 0xeb],ECX
00544FCA  75 0C                     JNZ 0x00544fd8
00544FCC  39 4D F0                  CMP dword ptr [EBP + -0x10],ECX
00544FCF  75 07                     JNZ 0x00544fd8
00544FD1  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_00544fd8:
00544FD8  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00544FDB  8B BB 0F 01 00 00         MOV EDI,dword ptr [EBX + 0x10f]
00544FE1  8B F2                     MOV ESI,EDX
00544FE3  2B F7                     SUB ESI,EDI
00544FE5  83 FE 32                  CMP ESI,0x32
00544FE8  72 0D                     JC 0x00544ff7
00544FEA  89 93 0F 01 00 00         MOV dword ptr [EBX + 0x10f],EDX
00544FF0  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_00544ff7:
00544FF7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00544FFA  85 D2                     TEST EDX,EDX
00544FFC  74 15                     JZ 0x00545013
00544FFE  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00545004  51                        PUSH ECX
00545005  8B 8B 0B 01 00 00         MOV ECX,dword ptr [EBX + 0x10b]
0054500B  50                        PUSH EAX
0054500C  51                        PUSH ECX
0054500D  52                        PUSH EDX
0054500E  E8 ED D7 16 00            CALL 0x006b2800
LAB_00545013:
00545013  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00545016  85 C0                     TEST EAX,EAX
00545018  75 0B                     JNZ 0x00545025
0054501A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054501D  85 C0                     TEST EAX,EAX
0054501F  0F 8D 68 02 00 00         JGE 0x0054528d
LAB_00545025:
00545025  8B 83 E3 00 00 00         MOV EAX,dword ptr [EBX + 0xe3]
0054502B  8B 8B DF 00 00 00         MOV ECX,dword ptr [EBX + 0xdf]
00545031  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00545034  50                        PUSH EAX
00545035  8B 83 0B 01 00 00         MOV EAX,dword ptr [EBX + 0x10b]
0054503B  51                        PUSH ECX
0054503C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00545042  52                        PUSH EDX
00545043  50                        PUSH EAX
00545044  51                        PUSH ECX
00545045  E8 F6 E5 16 00            CALL 0x006b3640
0054504A  E9 3E 02 00 00            JMP 0x0054528d
switchD_00544b7b::caseD_4:
0054504F  8B 93 0B 01 00 00         MOV EDX,dword ptr [EBX + 0x10b]
00545055  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0054505A  52                        PUSH EDX
0054505B  50                        PUSH EAX
LAB_0054505c:
0054505C  E8 4F EB 16 00            CALL 0x006b3bb0
00545061  C7 83 0B 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x10b],0xffffffff
LAB_0054506b:
0054506B  C6 83 DE 00 00 00 00      MOV byte ptr [EBX + 0xde],0x0
00545072  E9 16 02 00 00            JMP 0x0054528d
switchD_00544b7b::caseD_0:
00545077  8B CB                     MOV ECX,EBX
00545079  E8 B6 E5 EB FF            CALL 0x00403634
0054507E  85 C0                     TEST EAX,EAX
00545080  0F 84 07 02 00 00         JZ 0x0054528d
00545086  8B 83 0B 01 00 00         MOV EAX,dword ptr [EBX + 0x10b]
0054508C  85 C0                     TEST EAX,EAX
0054508E  7C 17                     JL 0x005450a7
00545090  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00545096  50                        PUSH EAX
00545097  51                        PUSH ECX
00545098  E8 13 EB 16 00            CALL 0x006b3bb0
0054509D  C7 83 0B 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x10b],0xffffffff
LAB_005450a7:
005450A7  8B 83 CD 00 00 00         MOV EAX,dword ptr [EBX + 0xcd]
005450AD  83 F8 04                  CMP EAX,0x4
005450B0  0F 87 D7 01 00 00         JA 0x0054528d
switchD_005450b6::switchD:
005450B6  FF 24 85 08 7D 54 00      JMP dword ptr [EAX*0x4 + 0x547d08]
switchD_005450b6::caseD_1:
005450BD  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
005450C3  6A 00                     PUSH 0x0
005450C5  6A 64                     PUSH 0x64
005450C7  6A 00                     PUSH 0x0
005450C9  52                        PUSH EDX
LAB_005450ca:
005450CA  A1 30 67 80 00            MOV EAX,[0x00806730]
005450CF  8B CB                     MOV ECX,EBX
005450D1  50                        PUSH EAX
005450D2  6A 00                     PUSH 0x0
005450D4  6A 00                     PUSH 0x0
005450D6  E8 C5 DD EB FF            CALL 0x00402ea0
005450DB  E9 AD 01 00 00            JMP 0x0054528d
switchD_005450b6::caseD_2:
005450E0  A1 30 67 80 00            MOV EAX,[0x00806730]
005450E5  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
005450EB  6A 00                     PUSH 0x0
005450ED  6A 64                     PUSH 0x64
005450EF  8D 48 FF                  LEA ECX,[EAX + -0x1]
005450F2  51                        PUSH ECX
005450F3  52                        PUSH EDX
005450F4  50                        PUSH EAX
005450F5  6A 00                     PUSH 0x0
005450F7  6A 00                     PUSH 0x0
005450F9  8B CB                     MOV ECX,EBX
005450FB  E8 A0 DD EB FF            CALL 0x00402ea0
00545100  E9 88 01 00 00            JMP 0x0054528d
switchD_005450b6::caseD_3:
00545105  A1 34 67 80 00            MOV EAX,[0x00806734]
0054510A  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
00545110  6A 00                     PUSH 0x0
00545112  6A 00                     PUSH 0x0
00545114  6A 64                     PUSH 0x64
00545116  50                        PUSH EAX
00545117  51                        PUSH ECX
00545118  6A 00                     PUSH 0x0
0054511A  6A 00                     PUSH 0x0
0054511C  8B CB                     MOV ECX,EBX
0054511E  E8 7D DD EB FF            CALL 0x00402ea0
00545123  E9 65 01 00 00            JMP 0x0054528d
switchD_005450b6::caseD_4:
00545128  A1 34 67 80 00            MOV EAX,[0x00806734]
0054512D  6A 00                     PUSH 0x0
0054512F  8D 50 FF                  LEA EDX,[EAX + -0x1]
00545132  52                        PUSH EDX
00545133  6A 64                     PUSH 0x64
00545135  50                        PUSH EAX
00545136  EB 92                     JMP 0x005450ca
switchD_005450b6::caseD_0:
00545138  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
0054513E  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
00545144  A1 34 67 80 00            MOV EAX,[0x00806734]
00545149  6A 01                     PUSH 0x1
0054514B  51                        PUSH ECX
0054514C  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
00545152  52                        PUSH EDX
00545153  50                        PUSH EAX
00545154  51                        PUSH ECX
00545155  6A 00                     PUSH 0x0
00545157  6A 00                     PUSH 0x0
00545159  8B CB                     MOV ECX,EBX
0054515B  E8 40 DD EB FF            CALL 0x00402ea0
00545160  E9 28 01 00 00            JMP 0x0054528d
switchD_00544b7b::caseD_5:
00545165  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054516B  85 C9                     TEST ECX,ECX
0054516D  0F 84 1A 01 00 00         JZ 0x0054528d
00545173  8D 55 F8                  LEA EDX,[EBP + -0x8]
00545176  8B B3 B2 04 00 00         MOV ESI,dword ptr [EBX + 0x4b2]
0054517C  52                        PUSH EDX
0054517D  8B 93 07 01 00 00         MOV EDX,dword ptr [EBX + 0x107]
00545183  8D 45 FC                  LEA EAX,[EBP + -0x4]
00545186  50                        PUSH EAX
00545187  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
0054518D  52                        PUSH EDX
0054518E  8B 93 B6 04 00 00         MOV EDX,dword ptr [EBX + 0x4b6]
00545194  2B C2                     SUB EAX,EDX
00545196  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
0054519C  2B D6                     SUB EDX,ESI
0054519E  50                        PUSH EAX
0054519F  52                        PUSH EDX
005451A0  E8 7B CA 19 00            CALL 0x006e1c20
005451A5  D9 83 FF 00 00 00         FLD float ptr [EBX + 0xff]
005451AB  D8 65 FC                  FSUB float ptr [EBP + -0x4]
005451AE  D9 83 03 01 00 00         FLD float ptr [EBX + 0x103]
005451B4  D8 65 F8                  FSUB float ptr [EBP + -0x8]
005451B7  D9 C0                     FLD ST0
005451B9  D8 C9                     FMUL ST1
005451BB  D9 C2                     FLD ST2
005451BD  D8 CB                     FMUL ST3
005451BF  DE C1                     FADDP
005451C1  D9 FA                     FSQRT
005451C3  DD DA                     FSTP ST2
005451C5  DD D8                     FSTP ST0
005451C7  D8 15 24 AE 79 00         FCOM float ptr [0x0079ae24]
005451CD  DF E0                     FNSTSW AX
005451CF  F6 C4 41                  TEST AH,0x41
005451D2  75 0A                     JNZ 0x005451de
005451D4  DD D8                     FSTP ST0
005451D6  DD 05 80 05 79 00         FLD double ptr [0x00790580]
005451DC  EB 0C                     JMP 0x005451ea
LAB_005451de:
005451DE  DC 05 18 AE 79 00         FADD double ptr [0x0079ae18]
005451E4  DC 0D 08 AE 79 00         FMUL double ptr [0x0079ae08]
LAB_005451ea:
005451EA  E8 99 90 1E 00            CALL 0x0072e288
005451EF  85 C0                     TEST EAX,EAX
005451F1  89 83 FB 00 00 00         MOV dword ptr [EBX + 0xfb],EAX
005451F7  7F 0A                     JG 0x00545203
005451F9  C7 83 FB 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xfb],0x1
LAB_00545203:
00545203  D9 45 F8                  FLD float ptr [EBP + -0x8]
00545206  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0054520C  E8 77 90 1E 00            CALL 0x0072e288
00545211  D9 45 FC                  FLD float ptr [EBP + -0x4]
00545214  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0054521A  0F BF C0                  MOVSX EAX,AX
0054521D  50                        PUSH EAX
0054521E  E8 65 90 1E 00            CALL 0x0072e288
00545223  D9 83 03 01 00 00         FLD float ptr [EBX + 0x103]
00545229  0F BF C8                  MOVSX ECX,AX
0054522C  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00545232  51                        PUSH ECX
00545233  E8 50 90 1E 00            CALL 0x0072e288
00545238  D9 83 FF 00 00 00         FLD float ptr [EBX + 0xff]
0054523E  0F BF D0                  MOVSX EDX,AX
00545241  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00545247  52                        PUSH EDX
00545248  E8 3B 90 1E 00            CALL 0x0072e288
0054524D  0F BF C0                  MOVSX EAX,AX
00545250  50                        PUSH EAX
00545251  E8 BA 66 19 00            CALL 0x006db910
00545256  8B 8B FB 00 00 00         MOV ECX,dword ptr [EBX + 0xfb]
0054525C  8B 93 07 01 00 00         MOV EDX,dword ptr [EBX + 0x107]
00545262  6A 01                     PUSH 0x1
00545264  51                        PUSH ECX
00545265  8B 8B FF 00 00 00         MOV ECX,dword ptr [EBX + 0xff]
0054526B  89 83 F7 00 00 00         MOV dword ptr [EBX + 0xf7],EAX
00545271  50                        PUSH EAX
00545272  8B 83 03 01 00 00         MOV EAX,dword ptr [EBX + 0x103]
00545278  52                        PUSH EDX
00545279  8B 93 0B 01 00 00         MOV EDX,dword ptr [EBX + 0x10b]
0054527F  50                        PUSH EAX
00545280  51                        PUSH ECX
00545281  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00545287  52                        PUSH EDX
00545288  E8 63 3B 1A 00            CALL 0x006e8df0
switchD_00544b7b::default:
0054528D  8B 83 A6 04 00 00         MOV EAX,dword ptr [EBX + 0x4a6]
00545293  85 C0                     TEST EAX,EAX
00545295  74 11                     JZ 0x005452a8
00545297  8B 83 A2 04 00 00         MOV EAX,dword ptr [EBX + 0x4a2]
0054529D  85 C0                     TEST EAX,EAX
0054529F  74 07                     JZ 0x005452a8
005452A1  8B CB                     MOV ECX,EBX
005452A3  E8 54 EE EB FF            CALL 0x004040fc
LAB_005452a8:
005452A8  6A 01                     PUSH 0x1
005452AA  8B CB                     MOV ECX,EBX
005452AC  E8 B6 E7 EB FF            CALL 0x00403a67
005452B1  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005452B7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005452BC  33 C0                     XOR EAX,EAX
005452BE  5F                        POP EDI
005452BF  5E                        POP ESI
005452C0  5B                        POP EBX
005452C1  8B E5                     MOV ESP,EBP
005452C3  5D                        POP EBP
005452C4  C2 04 00                  RET 0x4
LAB_005452c7:
005452C7  33 C0                     XOR EAX,EAX
005452C9  66 8B 47 1A               MOV AX,word ptr [EDI + 0x1a]
005452CD  89 83 C9 00 00 00         MOV dword ptr [EBX + 0xc9],EAX
005452D3  33 C0                     XOR EAX,EAX
005452D5  66 8B 47 18               MOV AX,word ptr [EDI + 0x18]
005452D9  89 83 C5 00 00 00         MOV dword ptr [EBX + 0xc5],EAX
005452DF  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
005452E5  51                        PUSH ECX
005452E6  50                        PUSH EAX
005452E7  8B CB                     MOV ECX,EBX
005452E9  E8 30 D1 EB FF            CALL 0x0040241e
005452EE  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
005452F4  8B 8B B2 04 00 00         MOV ECX,dword ptr [EBX + 0x4b2]
005452FA  3B C1                     CMP EAX,ECX
005452FC  7C 2F                     JL 0x0054532d
005452FE  8B 93 BA 04 00 00         MOV EDX,dword ptr [EBX + 0x4ba]
00545304  03 D1                     ADD EDX,ECX
00545306  3B C2                     CMP EAX,EDX
00545308  7D 23                     JGE 0x0054532d
0054530A  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00545310  8B 8B B6 04 00 00         MOV ECX,dword ptr [EBX + 0x4b6]
00545316  3B C1                     CMP EAX,ECX
00545318  7C 13                     JL 0x0054532d
0054531A  8B 93 BE 04 00 00         MOV EDX,dword ptr [EBX + 0x4be]
00545320  03 D1                     ADD EDX,ECX
00545322  3B C2                     CMP EAX,EDX
00545324  7D 07                     JGE 0x0054532d
00545326  B8 01 00 00 00            MOV EAX,0x1
0054532B  EB 02                     JMP 0x0054532f
LAB_0054532d:
0054532D  33 C0                     XOR EAX,EAX
LAB_0054532f:
0054532F  8B CB                     MOV ECX,EBX
00545331  89 83 96 04 00 00         MOV dword ptr [EBX + 0x496],EAX
00545337  E8 F8 E2 EB FF            CALL 0x00403634
0054533C  85 C0                     TEST EAX,EAX
0054533E  0F 84 F6 28 00 00         JZ 0x00547c3a
00545344  8B 0D AC B2 7F 00         MOV ECX,dword ptr [0x007fb2ac]
0054534A  85 C9                     TEST ECX,ECX
0054534C  0F 84 E8 28 00 00         JZ 0x00547c3a
00545352  8B 83 96 04 00 00         MOV EAX,dword ptr [EBX + 0x496]
00545358  85 C0                     TEST EAX,EAX
0054535A  74 63                     JZ 0x005453bf
0054535C  83 BB A2 04 00 00 0E      CMP dword ptr [EBX + 0x4a2],0xe
00545363  75 5A                     JNZ 0x005453bf
00545365  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00545368  85 C0                     TEST EAX,EAX
0054536A  74 14                     JZ 0x00545380
0054536C  8B 83 AA 04 00 00         MOV EAX,dword ptr [EBX + 0x4aa]
00545372  6A 00                     PUSH 0x0
00545374  50                        PUSH EAX
00545375  E8 E0 FD EB FF            CALL 0x0040515a
0054537A  8B 0D AC B2 7F 00         MOV ECX,dword ptr [0x007fb2ac]
LAB_00545380:
00545380  8B 93 C9 00 00 00         MOV EDX,dword ptr [EBX + 0xc9]
00545386  8B 83 B6 04 00 00         MOV EAX,dword ptr [EBX + 0x4b6]
0054538C  8B B3 B2 04 00 00         MOV ESI,dword ptr [EBX + 0x4b2]
00545392  2B D0                     SUB EDX,EAX
00545394  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
0054539A  6A 00                     PUSH 0x0
0054539C  6A 00                     PUSH 0x0
0054539E  6A 00                     PUSH 0x0
005453A0  2B C6                     SUB EAX,ESI
005453A2  52                        PUSH EDX
005453A3  50                        PUSH EAX
005453A4  E8 6F F4 EB FF            CALL 0x00404818
005453A9  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005453AF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005453B4  33 C0                     XOR EAX,EAX
005453B6  5F                        POP EDI
005453B7  5E                        POP ESI
005453B8  5B                        POP EBX
005453B9  8B E5                     MOV ESP,EBP
005453BB  5D                        POP EBP
005453BC  C2 04 00                  RET 0x4
LAB_005453bf:
005453BF  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
005453C2  85 C0                     TEST EAX,EAX
005453C4  0F 85 70 28 00 00         JNZ 0x00547c3a
005453CA  E8 6D C1 EB FF            CALL 0x0040153c
005453CF  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005453D5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005453DA  33 C0                     XOR EAX,EAX
005453DC  5F                        POP EDI
005453DD  5E                        POP ESI
005453DE  5B                        POP EBX
005453DF  8B E5                     MOV ESP,EBP
005453E1  5D                        POP EBP
005453E2  C2 04 00                  RET 0x4
LAB_005453e5:
005453E5  3D 1C A3 00 00            CMP EAX,0xa31c
005453EA  0F 87 53 15 00 00         JA 0x00546943
005453F0  3D 13 A3 00 00            CMP EAX,0xa313
005453F5  0F 83 19 15 00 00         JNC 0x00546914
005453FB  3D 24 A1 00 00            CMP EAX,0xa124
00545400  0F 87 66 11 00 00         JA 0x0054656c
00545406  0F 84 2E 11 00 00         JZ 0x0054653a
0054540C  3D 02 A1 00 00            CMP EAX,0xa102
00545411  0F 87 FC 0D 00 00         JA 0x00546213
00545417  0F 84 C1 0D 00 00         JZ 0x005461de
0054541D  3D 03 42 00 00            CMP EAX,0x4203
00545422  0F 87 DE 0C 00 00         JA 0x00546106
00545428  0F 84 BB 0C 00 00         JZ 0x005460e9
0054542E  3D 01 42 00 00            CMP EAX,0x4201
00545433  0F 87 3F 0C 00 00         JA 0x00546078
00545439  0F 84 2C 03 00 00         JZ 0x0054576b
0054543F  83 E8 67                  SUB EAX,0x67
00545442  0F 84 95 01 00 00         JZ 0x005455dd
00545448  48                        DEC EAX
00545449  0F 85 EB 27 00 00         JNZ 0x00547c3a
0054544F  A0 4C 73 80 00            MOV AL,[0x0080734c]
00545454  84 C0                     TEST AL,AL
00545456  0F 84 DE 27 00 00         JZ 0x00547c3a
0054545C  8B CB                     MOV ECX,EBX
0054545E  E8 D1 E1 EB FF            CALL 0x00403634
00545463  85 C0                     TEST EAX,EAX
00545465  0F 84 CF 27 00 00         JZ 0x00547c3a
0054546B  A1 84 87 80 00            MOV EAX,[0x00808784]
00545470  85 C0                     TEST EAX,EAX
00545472  0F 85 C2 27 00 00         JNZ 0x00547c3a
00545478  A1 88 87 80 00            MOV EAX,[0x00808788]
0054547D  85 C0                     TEST EAX,EAX
0054547F  75 1B                     JNZ 0x0054549c
00545481  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00545486  85 C0                     TEST EAX,EAX
00545488  75 12                     JNZ 0x0054549c
0054548A  A1 90 87 80 00            MOV EAX,[0x00808790]
0054548F  85 C0                     TEST EAX,EAX
00545491  75 09                     JNZ 0x0054549c
00545493  33 C0                     XOR EAX,EAX
00545495  BA 01 00 00 00            MOV EDX,0x1
0054549A  EB 07                     JMP 0x005454a3
LAB_0054549c:
0054549C  BA 01 00 00 00            MOV EDX,0x1
005454A1  8B C2                     MOV EAX,EDX
LAB_005454a3:
005454A3  85 C0                     TEST EAX,EAX
005454A5  0F 85 8F 27 00 00         JNZ 0x00547c3a
005454AB  A1 E8 16 80 00            MOV EAX,[0x008016e8]
005454B0  85 C0                     TEST EAX,EAX
005454B2  74 0D                     JZ 0x005454c1
005454B4  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
005454BB  0F 84 79 27 00 00         JZ 0x00547c3a
LAB_005454c1:
005454C1  A1 7C 16 80 00            MOV EAX,[0x0080167c]
005454C6  85 C0                     TEST EAX,EAX
005454C8  74 0D                     JZ 0x005454d7
005454CA  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
005454D1  0F 84 63 27 00 00         JZ 0x00547c3a
LAB_005454d7:
005454D7  A1 84 16 80 00            MOV EAX,[0x00801684]
005454DC  85 C0                     TEST EAX,EAX
005454DE  74 0D                     JZ 0x005454ed
005454E0  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
005454E7  0F 84 4D 27 00 00         JZ 0x00547c3a
LAB_005454ed:
005454ED  A1 48 2A 80 00            MOV EAX,[0x00802a48]
005454F2  85 C0                     TEST EAX,EAX
005454F4  74 0D                     JZ 0x00545503
005454F6  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
005454FD  0F 84 37 27 00 00         JZ 0x00547c3a
LAB_00545503:
00545503  A1 98 16 80 00            MOV EAX,[0x00801698]
00545508  85 C0                     TEST EAX,EAX
0054550A  74 0D                     JZ 0x00545519
0054550C  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
00545513  0F 84 21 27 00 00         JZ 0x00547c3a
LAB_00545519:
00545519  A1 44 2A 80 00            MOV EAX,[0x00802a44]
0054551E  85 C0                     TEST EAX,EAX
00545520  74 0D                     JZ 0x0054552f
00545522  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
00545529  0F 84 0B 27 00 00         JZ 0x00547c3a
LAB_0054552f:
0054552F  A1 8C 16 80 00            MOV EAX,[0x0080168c]
00545534  85 C0                     TEST EAX,EAX
00545536  74 0D                     JZ 0x00545545
00545538  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
0054553F  0F 84 F5 26 00 00         JZ 0x00547c3a
LAB_00545545:
00545545  A1 78 16 80 00            MOV EAX,[0x00801678]
0054554A  85 C0                     TEST EAX,EAX
0054554C  74 0D                     JZ 0x0054555b
0054554E  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
00545555  0F 84 DF 26 00 00         JZ 0x00547c3a
LAB_0054555b:
0054555B  A1 EC 16 80 00            MOV EAX,[0x008016ec]
00545560  85 C0                     TEST EAX,EAX
00545562  74 0D                     JZ 0x00545571
00545564  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
0054556B  0F 84 C9 26 00 00         JZ 0x00547c3a
LAB_00545571:
00545571  A1 80 16 80 00            MOV EAX,[0x00801680]
00545576  85 C0                     TEST EAX,EAX
00545578  74 0D                     JZ 0x00545587
0054557A  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
00545581  0F 84 B3 26 00 00         JZ 0x00547c3a
LAB_00545587:
00545587  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0054558D  85 C9                     TEST ECX,ECX
0054558F  0F 84 A5 26 00 00         JZ 0x00547c3a
00545595  8A 83 D2 00 00 00         MOV AL,byte ptr [EBX + 0xd2]
0054559B  52                        PUSH EDX
0054559C  84 C0                     TEST AL,AL
0054559E  6A 00                     PUSH 0x0
005455A0  6A 00                     PUSH 0x0
005455A2  74 1C                     JZ 0x005455c0
005455A4  56                        PUSH ESI
005455A5  E8 3A C2 EB FF            CALL 0x004017e4
005455AA  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005455B0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005455B5  33 C0                     XOR EAX,EAX
005455B7  5F                        POP EDI
005455B8  5E                        POP ESI
005455B9  5B                        POP EBX
005455BA  8B E5                     MOV ESP,EBP
005455BC  5D                        POP EBP
005455BD  C2 04 00                  RET 0x4
LAB_005455c0:
005455C0  6A 04                     PUSH 0x4
005455C2  E8 1D C2 EB FF            CALL 0x004017e4
005455C7  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005455CD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005455D2  33 C0                     XOR EAX,EAX
005455D4  5F                        POP EDI
005455D5  5E                        POP ESI
005455D6  5B                        POP EBX
005455D7  8B E5                     MOV ESP,EBP
005455D9  5D                        POP EBP
005455DA  C2 04 00                  RET 0x4
LAB_005455dd:
005455DD  A0 4C 73 80 00            MOV AL,[0x0080734c]
005455E2  84 C0                     TEST AL,AL
005455E4  0F 84 50 26 00 00         JZ 0x00547c3a
005455EA  8B CB                     MOV ECX,EBX
005455EC  E8 43 E0 EB FF            CALL 0x00403634
005455F1  85 C0                     TEST EAX,EAX
005455F3  0F 84 41 26 00 00         JZ 0x00547c3a
005455F9  A1 84 87 80 00            MOV EAX,[0x00808784]
005455FE  85 C0                     TEST EAX,EAX
00545600  0F 85 34 26 00 00         JNZ 0x00547c3a
00545606  A1 88 87 80 00            MOV EAX,[0x00808788]
0054560B  85 C0                     TEST EAX,EAX
0054560D  75 1B                     JNZ 0x0054562a
0054560F  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00545614  85 C0                     TEST EAX,EAX
00545616  75 12                     JNZ 0x0054562a
00545618  A1 90 87 80 00            MOV EAX,[0x00808790]
0054561D  85 C0                     TEST EAX,EAX
0054561F  75 09                     JNZ 0x0054562a
00545621  33 C0                     XOR EAX,EAX
00545623  BA 01 00 00 00            MOV EDX,0x1
00545628  EB 07                     JMP 0x00545631
LAB_0054562a:
0054562A  BA 01 00 00 00            MOV EDX,0x1
0054562F  8B C2                     MOV EAX,EDX
LAB_00545631:
00545631  85 C0                     TEST EAX,EAX
00545633  0F 85 01 26 00 00         JNZ 0x00547c3a
00545639  A1 E8 16 80 00            MOV EAX,[0x008016e8]
0054563E  85 C0                     TEST EAX,EAX
00545640  74 0D                     JZ 0x0054564f
00545642  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
00545649  0F 84 EB 25 00 00         JZ 0x00547c3a
LAB_0054564f:
0054564F  A1 7C 16 80 00            MOV EAX,[0x0080167c]
00545654  85 C0                     TEST EAX,EAX
00545656  74 0D                     JZ 0x00545665
00545658  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
0054565F  0F 84 D5 25 00 00         JZ 0x00547c3a
LAB_00545665:
00545665  A1 84 16 80 00            MOV EAX,[0x00801684]
0054566A  85 C0                     TEST EAX,EAX
0054566C  74 0D                     JZ 0x0054567b
0054566E  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
00545675  0F 84 BF 25 00 00         JZ 0x00547c3a
LAB_0054567b:
0054567B  A1 48 2A 80 00            MOV EAX,[0x00802a48]
00545680  85 C0                     TEST EAX,EAX
00545682  74 0D                     JZ 0x00545691
00545684  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
0054568B  0F 84 A9 25 00 00         JZ 0x00547c3a
LAB_00545691:
00545691  A1 98 16 80 00            MOV EAX,[0x00801698]
00545696  85 C0                     TEST EAX,EAX
00545698  74 0D                     JZ 0x005456a7
0054569A  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
005456A1  0F 84 93 25 00 00         JZ 0x00547c3a
LAB_005456a7:
005456A7  A1 44 2A 80 00            MOV EAX,[0x00802a44]
005456AC  85 C0                     TEST EAX,EAX
005456AE  74 0D                     JZ 0x005456bd
005456B0  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
005456B7  0F 84 7D 25 00 00         JZ 0x00547c3a
LAB_005456bd:
005456BD  A1 8C 16 80 00            MOV EAX,[0x0080168c]
005456C2  85 C0                     TEST EAX,EAX
005456C4  74 0D                     JZ 0x005456d3
005456C6  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
005456CD  0F 84 67 25 00 00         JZ 0x00547c3a
LAB_005456d3:
005456D3  A1 78 16 80 00            MOV EAX,[0x00801678]
005456D8  85 C0                     TEST EAX,EAX
005456DA  74 0D                     JZ 0x005456e9
005456DC  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
005456E3  0F 84 51 25 00 00         JZ 0x00547c3a
LAB_005456e9:
005456E9  A1 EC 16 80 00            MOV EAX,[0x008016ec]
005456EE  85 C0                     TEST EAX,EAX
005456F0  74 0D                     JZ 0x005456ff
005456F2  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
005456F9  0F 84 3B 25 00 00         JZ 0x00547c3a
LAB_005456ff:
005456FF  A1 80 16 80 00            MOV EAX,[0x00801680]
00545704  85 C0                     TEST EAX,EAX
00545706  74 0D                     JZ 0x00545715
00545708  66 39 90 72 01 00 00      CMP word ptr [EAX + 0x172],DX
0054570F  0F 84 25 25 00 00         JZ 0x00547c3a
LAB_00545715:
00545715  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0054571B  85 C9                     TEST ECX,ECX
0054571D  0F 84 17 25 00 00         JZ 0x00547c3a
00545723  8A 83 D2 00 00 00         MOV AL,byte ptr [EBX + 0xd2]
00545729  52                        PUSH EDX
0054572A  84 C0                     TEST AL,AL
0054572C  6A 00                     PUSH 0x0
0054572E  6A 00                     PUSH 0x0
00545730  74 1C                     JZ 0x0054574e
00545732  52                        PUSH EDX
00545733  E8 AC C0 EB FF            CALL 0x004017e4
00545738  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
0054573E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00545743  33 C0                     XOR EAX,EAX
00545745  5F                        POP EDI
00545746  5E                        POP ESI
00545747  5B                        POP EBX
00545748  8B E5                     MOV ESP,EBP
0054574A  5D                        POP EBP
0054574B  C2 04 00                  RET 0x4
LAB_0054574e:
0054574E  6A 03                     PUSH 0x3
00545750  E8 8F C0 EB FF            CALL 0x004017e4
00545755  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
0054575B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00545760  33 C0                     XOR EAX,EAX
00545762  5F                        POP EDI
00545763  5E                        POP ESI
00545764  5B                        POP EBX
00545765  8B E5                     MOV ESP,EBP
00545767  5D                        POP EBP
00545768  C2 04 00                  RET 0x4
LAB_0054576b:
0054576B  A1 22 73 80 00            MOV EAX,[0x00807322]
00545770  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
00545777  3B C2                     CMP EAX,EDX
00545779  0F 84 BB 24 00 00         JZ 0x00547c3a
0054577F  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
00545782  8B 83 DA 04 00 00         MOV EAX,dword ptr [EBX + 0x4da]
00545788  3B C8                     CMP ECX,EAX
0054578A  0F 84 AA 24 00 00         JZ 0x00547c3a
00545790  3B CA                     CMP ECX,EDX
00545792  0F 84 A2 24 00 00         JZ 0x00547c3a
00545798  8A 83 DE 00 00 00         MOV AL,byte ptr [EBX + 0xde]
0054579E  3C 05                     CMP AL,0x5
005457A0  0F 84 94 24 00 00         JZ 0x00547c3a
005457A6  3C 02                     CMP AL,0x2
005457A8  0F 84 8C 24 00 00         JZ 0x00547c3a
005457AE  33 C0                     XOR EAX,EAX
005457B0  89 8B DA 04 00 00         MOV dword ptr [EBX + 0x4da],ECX
005457B6  66 8B 47 16               MOV AX,word ptr [EDI + 0x16]
005457BA  83 F8 01                  CMP EAX,0x1
005457BD  74 43                     JZ 0x00545802
005457BF  7E 39                     JLE 0x005457fa
005457C1  83 F8 03                  CMP EAX,0x3
005457C4  7F 34                     JG 0x005457fa
005457C6  8D 95 E0 FA FF FF         LEA EDX,[EBP + 0xfffffae0]
005457CC  85 D2                     TEST EDX,EDX
005457CE  0F 84 4D 04 00 00         JZ 0x00545c21
005457D4  A1 18 76 80 00            MOV EAX,[0x00807618]
005457D9  50                        PUSH EAX
005457DA  51                        PUSH ECX
005457DB  E8 60 A9 16 00            CALL 0x006b0140
005457E0  85 C0                     TEST EAX,EAX
005457E2  0F 84 39 04 00 00         JZ 0x00545c21
005457E8  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005457EE  8B 93 DA 04 00 00         MOV EDX,dword ptr [EBX + 0x4da]
005457F4  51                        PUSH ECX
005457F5  E9 E4 00 00 00            JMP 0x005458de
LAB_005457fa:
005457FA  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005457FD  E9 1F 04 00 00            JMP 0x00545c21
LAB_00545802:
00545802  8B 77 18                  MOV ESI,dword ptr [EDI + 0x18]
00545805  33 C0                     XOR EAX,EAX
00545807  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0054580A  8A 06                     MOV AL,byte ptr [ESI]
0054580C  48                        DEC EAX
0054580D  83 F8 03                  CMP EAX,0x3
00545810  0F 87 04 04 00 00         JA 0x00545c1a
switchD_00545816::switchD:
00545816  FF 24 85 1C 7D 54 00      JMP dword ptr [EAX*0x4 + 0x547d1c]
switchD_00545816::caseD_1:
0054581D  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
00545820  85 C0                     TEST EAX,EAX
00545822  7C 4A                     JL 0x0054586e
00545824  8B 0C 85 66 7E 80 00      MOV ECX,dword ptr [EAX*0x4 + 0x807e66]
0054582B  6A 01                     PUSH 0x1
0054582D  51                        PUSH ECX
0054582E  E8 2A FB EB FF            CALL 0x0040535d
00545833  8B 4E 01                  MOV ECX,dword ptr [ESI + 0x1]
00545836  83 C4 08                  ADD ESP,0x8
00545839  33 D2                     XOR EDX,EDX
0054583B  8A 56 0D                  MOV DL,byte ptr [ESI + 0xd]
0054583E  50                        PUSH EAX
0054583F  A1 18 76 80 00            MOV EAX,[0x00807618]
00545844  52                        PUSH EDX
00545845  50                        PUSH EAX
00545846  51                        PUSH ECX
00545847  E8 F4 A8 16 00            CALL 0x006b0140
0054584C  33 D2                     XOR EDX,EDX
0054584E  50                        PUSH EAX
0054584F  66 8B 57 14               MOV DX,word ptr [EDI + 0x14]
00545853  8D 85 E0 FA FF FF         LEA EAX,[EBP + 0xfffffae0]
00545859  52                        PUSH EDX
0054585A  68 80 7F 7C 00            PUSH 0x7c7f80
0054585F  50                        PUSH EAX
00545860  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00545866  83 C4 18                  ADD ESP,0x18
00545869  E9 B3 03 00 00            JMP 0x00545c21
LAB_0054586e:
0054586E  8D 8D E0 FA FF FF         LEA ECX,[EBP + 0xfffffae0]
00545874  85 C9                     TEST ECX,ECX
00545876  0F 84 A5 03 00 00         JZ 0x00545c21
0054587C  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00545882  8B 46 01                  MOV EAX,dword ptr [ESI + 0x1]
00545885  52                        PUSH EDX
00545886  50                        PUSH EAX
00545887  E8 B4 A8 16 00            CALL 0x006b0140
0054588C  85 C0                     TEST EAX,EAX
0054588E  0F 84 8D 03 00 00         JZ 0x00545c21
00545894  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00545897  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0054589D  51                        PUSH ECX
0054589E  8B 42 01                  MOV EAX,dword ptr [EDX + 0x1]
005458A1  50                        PUSH EAX
005458A2  EB 3B                     JMP 0x005458df
switchD_00545816::caseD_2:
005458A4  8B 76 01                  MOV ESI,dword ptr [ESI + 0x1]
005458A7  85 F6                     TEST ESI,ESI
005458A9  0F 84 6B 03 00 00         JZ 0x00545c1a
005458AF  8D 8D E0 FA FF FF         LEA ECX,[EBP + 0xfffffae0]
005458B5  85 C9                     TEST ECX,ECX
005458B7  0F 84 64 03 00 00         JZ 0x00545c21
005458BD  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005458C3  52                        PUSH EDX
005458C4  56                        PUSH ESI
005458C5  E8 76 A8 16 00            CALL 0x006b0140
005458CA  85 C0                     TEST EAX,EAX
005458CC  0F 84 4F 03 00 00         JZ 0x00545c21
005458D2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005458D5  A1 18 76 80 00            MOV EAX,[0x00807618]
005458DA  50                        PUSH EAX
005458DB  8B 51 01                  MOV EDX,dword ptr [ECX + 0x1]
LAB_005458de:
005458DE  52                        PUSH EDX
LAB_005458df:
005458DF  E8 5C A8 16 00            CALL 0x006b0140
005458E4  8B F8                     MOV EDI,EAX
005458E6  83 C9 FF                  OR ECX,0xffffffff
005458E9  33 C0                     XOR EAX,EAX
005458EB  8D 95 E0 FA FF FF         LEA EDX,[EBP + 0xfffffae0]
005458F1  F2 AE                     SCASB.REPNE ES:EDI
005458F3  F7 D1                     NOT ECX
005458F5  2B F9                     SUB EDI,ECX
005458F7  8B C1                     MOV EAX,ECX
005458F9  8B F7                     MOV ESI,EDI
005458FB  8B FA                     MOV EDI,EDX
005458FD  C1 E9 02                  SHR ECX,0x2
00545900  F3 A5                     MOVSD.REP ES:EDI,ESI
00545902  8B C8                     MOV ECX,EAX
00545904  83 E1 03                  AND ECX,0x3
00545907  F3 A4                     MOVSB.REP ES:EDI,ESI
00545909  E9 13 03 00 00            JMP 0x00545c21
switchD_00545816::caseD_3:
0054590E  8B 46 05                  MOV EAX,dword ptr [ESI + 0x5]
00545911  85 C0                     TEST EAX,EAX
00545913  74 54                     JZ 0x00545969
00545915  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0054591B  51                        PUSH ECX
0054591C  68 B3 36 00 00            PUSH 0x36b3
00545921  E8 1A A8 16 00            CALL 0x006b0140
00545926  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0054592C  50                        PUSH EAX
0054592D  8B 46 05                  MOV EAX,dword ptr [ESI + 0x5]
00545930  52                        PUSH EDX
00545931  50                        PUSH EAX
00545932  E8 09 A8 16 00            CALL 0x006b0140
00545937  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0054593D  8B 56 01                  MOV EDX,dword ptr [ESI + 0x1]
00545940  50                        PUSH EAX
00545941  51                        PUSH ECX
00545942  52                        PUSH EDX
00545943  E8 F8 A7 16 00            CALL 0x006b0140
00545948  50                        PUSH EAX
00545949  33 C0                     XOR EAX,EAX
0054594B  66 8B 47 14               MOV AX,word ptr [EDI + 0x14]
0054594F  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
00545955  50                        PUSH EAX
00545956  8D 8D E0 FA FF FF         LEA ECX,[EBP + 0xfffffae0]
0054595C  68 70 7F 7C 00            PUSH 0x7c7f70
00545961  51                        PUSH ECX
00545962  FF D7                     CALL EDI
00545964  83 C4 18                  ADD ESP,0x18
00545967  EB 40                     JMP 0x005459a9
LAB_00545969:
00545969  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0054596F  52                        PUSH EDX
00545970  68 B3 36 00 00            PUSH 0x36b3
00545975  E8 C6 A7 16 00            CALL 0x006b0140
0054597A  8B 4E 01                  MOV ECX,dword ptr [ESI + 0x1]
0054597D  50                        PUSH EAX
0054597E  A1 18 76 80 00            MOV EAX,[0x00807618]
00545983  50                        PUSH EAX
00545984  51                        PUSH ECX
00545985  E8 B6 A7 16 00            CALL 0x006b0140
0054598A  33 D2                     XOR EDX,EDX
0054598C  50                        PUSH EAX
0054598D  66 8B 57 14               MOV DX,word ptr [EDI + 0x14]
00545991  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
00545997  52                        PUSH EDX
00545998  8D 85 E0 FA FF FF         LEA EAX,[EBP + 0xfffffae0]
0054599E  68 64 7F 7C 00            PUSH 0x7c7f64
005459A3  50                        PUSH EAX
005459A4  FF D7                     CALL EDI
005459A6  83 C4 14                  ADD ESP,0x14
LAB_005459a9:
005459A9  66 8B 46 0D               MOV AX,word ptr [ESI + 0xd]
005459AD  66 85 C0                  TEST AX,AX
005459B0  74 32                     JZ 0x005459e4
005459B2  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
005459B8  25 FF FF 00 00            AND EAX,0xffff
005459BD  80 E9 03                  SUB CL,0x3
005459C0  50                        PUSH EAX
005459C1  F6 D9                     NEG CL
005459C3  1B C9                     SBB ECX,ECX
005459C5  8D 95 E0 FA FF FF         LEA EDX,[EBP + 0xfffffae0]
005459CB  83 E1 FE                  AND ECX,0xfffffffe
005459CE  8D 85 E0 FA FF FF         LEA EAX,[EBP + 0xfffffae0]
005459D4  83 C1 05                  ADD ECX,0x5
005459D7  51                        PUSH ECX
005459D8  52                        PUSH EDX
005459D9  68 58 7F 7C 00            PUSH 0x7c7f58
005459DE  50                        PUSH EAX
005459DF  FF D7                     CALL EDI
005459E1  83 C4 14                  ADD ESP,0x14
LAB_005459e4:
005459E4  66 8B 46 09               MOV AX,word ptr [ESI + 0x9]
005459E8  66 85 C0                  TEST AX,AX
005459EB  74 20                     JZ 0x00545a0d
005459ED  25 FF FF 00 00            AND EAX,0xffff
005459F2  8D 8D E0 FA FF FF         LEA ECX,[EBP + 0xfffffae0]
005459F8  50                        PUSH EAX
005459F9  6A 02                     PUSH 0x2
005459FB  51                        PUSH ECX
005459FC  8D 95 E0 FA FF FF         LEA EDX,[EBP + 0xfffffae0]
00545A02  68 58 7F 7C 00            PUSH 0x7c7f58
00545A07  52                        PUSH EDX
00545A08  FF D7                     CALL EDI
00545A0A  83 C4 14                  ADD ESP,0x14
LAB_00545a0d:
00545A0D  66 8B 46 0B               MOV AX,word ptr [ESI + 0xb]
00545A11  66 85 C0                  TEST AX,AX
00545A14  74 2F                     JZ 0x00545a45
00545A16  25 FF FF 00 00            AND EAX,0xffff
00545A1B  8D 8D E0 FA FF FF         LEA ECX,[EBP + 0xfffffae0]
00545A21  50                        PUSH EAX
00545A22  A0 4E 87 80 00            MOV AL,[0x0080874e]
00545A27  2C 03                     SUB AL,0x3
00545A29  8D 95 E0 FA FF FF         LEA EDX,[EBP + 0xfffffae0]
00545A2F  F6 D8                     NEG AL
00545A31  1B C0                     SBB EAX,EAX
00545A33  24 FE                     AND AL,0xfe
00545A35  83 C0 06                  ADD EAX,0x6
00545A38  50                        PUSH EAX
00545A39  51                        PUSH ECX
00545A3A  68 58 7F 7C 00            PUSH 0x7c7f58
00545A3F  52                        PUSH EDX
00545A40  FF D7                     CALL EDI
00545A42  83 C4 14                  ADD ESP,0x14
LAB_00545a45:
00545A45  66 8B 76 0F               MOV SI,word ptr [ESI + 0xf]
00545A49  66 85 F6                  TEST SI,SI
00545A4C  0F 8E CF 01 00 00         JLE 0x00545c21
00545A52  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00545A58  0F BF C6                  MOVSX EAX,SI
00545A5B  50                        PUSH EAX
00545A5C  6A 04                     PUSH 0x4
00545A5E  51                        PUSH ECX
00545A5F  68 3A 27 00 00            PUSH 0x273a
00545A64  E8 D7 A6 16 00            CALL 0x006b0140
00545A69  8D 95 E0 FA FF FF         LEA EDX,[EBP + 0xfffffae0]
00545A6F  50                        PUSH EAX
00545A70  52                        PUSH EDX
00545A71  8D 85 E0 FA FF FF         LEA EAX,[EBP + 0xfffffae0]
00545A77  68 48 7F 7C 00            PUSH 0x7c7f48
00545A7C  50                        PUSH EAX
00545A7D  FF D7                     CALL EDI
00545A7F  83 C4 18                  ADD ESP,0x18
00545A82  E9 9A 01 00 00            JMP 0x00545c21
switchD_00545816::caseD_4:
00545A87  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00545A8A  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00545A90  51                        PUSH ECX
00545A91  8B 42 01                  MOV EAX,dword ptr [EDX + 0x1]
00545A94  50                        PUSH EAX
00545A95  E8 A6 A6 16 00            CALL 0x006b0140
00545A9A  8B F8                     MOV EDI,EAX
00545A9C  83 C9 FF                  OR ECX,0xffffffff
00545A9F  33 C0                     XOR EAX,EAX
00545AA1  6A 0A                     PUSH 0xa
00545AA3  F2 AE                     SCASB.REPNE ES:EDI
00545AA5  F7 D1                     NOT ECX
00545AA7  2B F9                     SUB EDI,ECX
00545AA9  68 3A F3 80 00            PUSH 0x80f33a
00545AAE  8B D1                     MOV EDX,ECX
00545AB0  8B F7                     MOV ESI,EDI
00545AB2  BF 3A F3 80 00            MOV EDI,0x80f33a
00545AB7  C1 E9 02                  SHR ECX,0x2
00545ABA  F3 A5                     MOVSD.REP ES:EDI,ESI
00545ABC  8B CA                     MOV ECX,EDX
00545ABE  83 E1 03                  AND ECX,0x3
00545AC1  F3 A4                     MOVSB.REP ES:EDI,ESI
00545AC3  E8 98 8A 1E 00            CALL 0x0072e560
00545AC8  83 C4 08                  ADD ESP,0x8
00545ACB  85 C0                     TEST EAX,EAX
00545ACD  74 12                     JZ 0x00545ae1
LAB_00545acf:
00545ACF  6A 0A                     PUSH 0xa
00545AD1  50                        PUSH EAX
00545AD2  C6 00 20                  MOV byte ptr [EAX],0x20
00545AD5  E8 86 8A 1E 00            CALL 0x0072e560
00545ADA  83 C4 08                  ADD ESP,0x8
00545ADD  85 C0                     TEST EAX,EAX
00545ADF  75 EE                     JNZ 0x00545acf
LAB_00545ae1:
00545AE1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00545AE4  33 C0                     XOR EAX,EAX
00545AE6  68 3A F3 80 00            PUSH 0x80f33a
00545AEB  8D 95 E0 FA FF FF         LEA EDX,[EBP + 0xfffffae0]
00545AF1  66 8B 41 14               MOV AX,word ptr [ECX + 0x14]
00545AF5  50                        PUSH EAX
00545AF6  68 40 7F 7C 00            PUSH 0x7c7f40
00545AFB  52                        PUSH EDX
00545AFC  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00545B02  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00545B05  83 C4 10                  ADD ESP,0x10
00545B08  8B 40 05                  MOV EAX,dword ptr [EAX + 0x5]
00545B0B  85 C0                     TEST EAX,EAX
00545B0D  74 75                     JZ 0x00545b84
00545B0F  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00545B15  51                        PUSH ECX
00545B16  50                        PUSH EAX
00545B17  E8 24 A6 16 00            CALL 0x006b0140
00545B1C  8B F8                     MOV EDI,EAX
00545B1E  83 C9 FF                  OR ECX,0xffffffff
00545B21  33 C0                     XOR EAX,EAX
00545B23  6A 0A                     PUSH 0xa
00545B25  F2 AE                     SCASB.REPNE ES:EDI
00545B27  F7 D1                     NOT ECX
00545B29  2B F9                     SUB EDI,ECX
00545B2B  68 3A F3 80 00            PUSH 0x80f33a
00545B30  8B D1                     MOV EDX,ECX
00545B32  8B F7                     MOV ESI,EDI
00545B34  BF 3A F3 80 00            MOV EDI,0x80f33a
00545B39  C1 E9 02                  SHR ECX,0x2
00545B3C  F3 A5                     MOVSD.REP ES:EDI,ESI
00545B3E  8B CA                     MOV ECX,EDX
00545B40  83 E1 03                  AND ECX,0x3
00545B43  F3 A4                     MOVSB.REP ES:EDI,ESI
00545B45  E8 16 8A 1E 00            CALL 0x0072e560
00545B4A  83 C4 08                  ADD ESP,0x8
00545B4D  85 C0                     TEST EAX,EAX
00545B4F  74 12                     JZ 0x00545b63
LAB_00545b51:
00545B51  6A 0A                     PUSH 0xa
00545B53  50                        PUSH EAX
00545B54  C6 00 20                  MOV byte ptr [EAX],0x20
00545B57  E8 04 8A 1E 00            CALL 0x0072e560
00545B5C  83 C4 08                  ADD ESP,0x8
00545B5F  85 C0                     TEST EAX,EAX
00545B61  75 EE                     JNZ 0x00545b51
LAB_00545b63:
00545B63  8D 85 E0 FA FF FF         LEA EAX,[EBP + 0xfffffae0]
00545B69  68 3A F3 80 00            PUSH 0x80f33a
00545B6E  50                        PUSH EAX
00545B6F  8D 8D E0 FA FF FF         LEA ECX,[EBP + 0xfffffae0]
00545B75  68 38 7F 7C 00            PUSH 0x7c7f38
00545B7A  51                        PUSH ECX
00545B7B  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00545B81  83 C4 10                  ADD ESP,0x10
LAB_00545b84:
00545B84  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00545B87  8B 42 09                  MOV EAX,dword ptr [EDX + 0x9]
00545B8A  8D 72 09                  LEA ESI,[EDX + 0x9]
00545B8D  85 C0                     TEST EAX,EAX
00545B8F  0F 84 8C 00 00 00         JZ 0x00545c21
00545B95  A1 18 76 80 00            MOV EAX,[0x00807618]
00545B9A  50                        PUSH EAX
00545B9B  68 C2 36 00 00            PUSH 0x36c2
00545BA0  E8 9B A5 16 00            CALL 0x006b0140
00545BA5  8D 8D E0 FA FF FF         LEA ECX,[EBP + 0xfffffae0]
00545BAB  50                        PUSH EAX
00545BAC  51                        PUSH ECX
00545BAD  8D 95 E0 FA FF FF         LEA EDX,[EBP + 0xfffffae0]
00545BB3  68 38 7F 7C 00            PUSH 0x7c7f38
00545BB8  52                        PUSH EDX
00545BB9  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00545BBF  83 C4 10                  ADD ESP,0x10
00545BC2  BF 05 00 00 00            MOV EDI,0x5
LAB_00545bc7:
00545BC7  8B 06                     MOV EAX,dword ptr [ESI]
00545BC9  85 C0                     TEST EAX,EAX
00545BCB  74 45                     JZ 0x00545c12
00545BCD  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00545BD3  8A 16                     MOV DL,byte ptr [ESI]
00545BD5  C1 E8 10                  SHR EAX,0x10
00545BD8  51                        PUSH ECX
00545BD9  50                        PUSH EAX
00545BDA  52                        PUSH EDX
00545BDB  E8 49 EF EB FF            CALL 0x00404b29
00545BE0  83 C4 08                  ADD ESP,0x8
00545BE3  50                        PUSH EAX
00545BE4  E8 57 A5 16 00            CALL 0x006b0140
00545BE9  8A 4E 05                  MOV CL,byte ptr [ESI + 0x5]
00545BEC  50                        PUSH EAX
00545BED  33 C0                     XOR EAX,EAX
00545BEF  8D 95 E0 FA FF FF         LEA EDX,[EBP + 0xfffffae0]
00545BF5  84 C9                     TEST CL,CL
00545BF7  0F 95 C0                  SETNZ AL
00545BFA  40                        INC EAX
00545BFB  8D 8D E0 FA FF FF         LEA ECX,[EBP + 0xfffffae0]
00545C01  50                        PUSH EAX
00545C02  51                        PUSH ECX
00545C03  68 2C 7F 7C 00            PUSH 0x7c7f2c
00545C08  52                        PUSH EDX
00545C09  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00545C0F  83 C4 14                  ADD ESP,0x14
LAB_00545c12:
00545C12  83 C6 06                  ADD ESI,0x6
00545C15  4F                        DEC EDI
00545C16  75 AF                     JNZ 0x00545bc7
00545C18  EB 07                     JMP 0x00545c21
switchD_00545816::default:
00545C1A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_00545c21:
00545C21  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00545C24  33 FF                     XOR EDI,EDI
00545C26  3B C7                     CMP EAX,EDI
00545C28  0F 84 0C 20 00 00         JZ 0x00547c3a
00545C2E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00545C31  66 83 78 16 03            CMP word ptr [EAX + 0x16],0x3
00545C36  0F 84 CE 01 00 00         JZ 0x00545e0a
00545C3C  A1 28 2A 80 00            MOV EAX,[0x00802a28]
00545C41  3B C7                     CMP EAX,EDI
00545C43  0F 84 AD 03 00 00         JZ 0x00545ff6
00545C49  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00545C4C  3B CF                     CMP ECX,EDI
00545C4E  0F 84 A2 03 00 00         JZ 0x00545ff6
00545C54  8D 95 E0 FA FF FF         LEA EDX,[EBP + 0xfffffae0]
00545C5A  52                        PUSH EDX
00545C5B  E8 10 B7 1C 00            CALL 0x00711370
00545C60  83 C0 0C                  ADD EAX,0xc
00545C63  89 83 CA 04 00 00         MOV dword ptr [EBX + 0x4ca],EAX
00545C69  8B 0D 28 2A 80 00         MOV ECX,dword ptr [0x00802a28]
00545C6F  8D 85 E0 FA FF FF         LEA EAX,[EBP + 0xfffffae0]
00545C75  8B 49 28                  MOV ECX,dword ptr [ECX + 0x28]
00545C78  50                        PUSH EAX
00545C79  E8 62 B7 1C 00            CALL 0x007113e0
00545C7E  8D 48 0A                  LEA ECX,[EAX + 0xa]
00545C81  8B 83 CA 04 00 00         MOV EAX,dword ptr [EBX + 0x4ca]
00545C87  3D 20 03 00 00            CMP EAX,0x320
00545C8C  89 8B CE 04 00 00         MOV dword ptr [EBX + 0x4ce],ECX
00545C92  0F 8F 5E 03 00 00         JG 0x00545ff6
00545C98  81 F9 96 00 00 00         CMP ECX,0x96
00545C9E  0F 8F 52 03 00 00         JG 0x00545ff6
00545CA4  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
00545CAA  8B B3 B1 00 00 00         MOV ESI,dword ptr [EBX + 0xb1]
00545CB0  03 D6                     ADD EDX,ESI
00545CB2  8B B3 B5 00 00 00         MOV ESI,dword ptr [EBX + 0xb5]
00545CB8  89 93 C2 04 00 00         MOV dword ptr [EBX + 0x4c2],EDX
00545CBE  8B 93 C9 00 00 00         MOV EDX,dword ptr [EBX + 0xc9]
00545CC4  03 D6                     ADD EDX,ESI
00545CC6  89 93 C6 04 00 00         MOV dword ptr [EBX + 0x4c6],EDX
00545CCC  8B 35 30 67 80 00         MOV ESI,dword ptr [0x00806730]
00545CD2  2B F0                     SUB ESI,EAX
00545CD4  8D 46 D8                  LEA EAX,[ESI + -0x28]
00545CD7  8B B3 C2 04 00 00         MOV ESI,dword ptr [EBX + 0x4c2]
00545CDD  3B F0                     CMP ESI,EAX
00545CDF  7E 06                     JLE 0x00545ce7
00545CE1  89 83 C2 04 00 00         MOV dword ptr [EBX + 0x4c2],EAX
LAB_00545ce7:
00545CE7  39 BB C2 04 00 00         CMP dword ptr [EBX + 0x4c2],EDI
00545CED  7D 06                     JGE 0x00545cf5
00545CEF  89 BB C2 04 00 00         MOV dword ptr [EBX + 0x4c2],EDI
LAB_00545cf5:
00545CF5  A1 34 67 80 00            MOV EAX,[0x00806734]
00545CFA  2B C1                     SUB EAX,ECX
00545CFC  83 C0 EC                  ADD EAX,-0x14
00545CFF  3B D0                     CMP EDX,EAX
00545D01  7E 06                     JLE 0x00545d09
00545D03  89 83 C6 04 00 00         MOV dword ptr [EBX + 0x4c6],EAX
LAB_00545d09:
00545D09  39 BB C6 04 00 00         CMP dword ptr [EBX + 0x4c6],EDI
00545D0F  7D 06                     JGE 0x00545d17
00545D11  89 BB C6 04 00 00         MOV dword ptr [EBX + 0x4c6],EDI
LAB_00545d17:
00545D17  8B 83 D2 04 00 00         MOV EAX,dword ptr [EBX + 0x4d2]
00545D1D  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
00545D20  3B F7                     CMP ESI,EDI
00545D22  75 1A                     JNZ 0x00545d3e
00545D24  33 F6                     XOR ESI,ESI
00545D26  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
00545D2A  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
00545D2E  83 C6 1F                  ADD ESI,0x1f
00545D31  C1 EE 03                  SHR ESI,0x3
00545D34  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
00545D3A  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_00545d3e:
00545D3E  50                        PUSH EAX
00545D3F  E8 5C F2 16 00            CALL 0x006b4fa0
00545D44  8B CE                     MOV ECX,ESI
00545D46  8B F8                     MOV EDI,EAX
00545D48  8B D1                     MOV EDX,ECX
00545D4A  B8 3A 3A 3A 3A            MOV EAX,0x3a3a3a3a
00545D4F  C1 E9 02                  SHR ECX,0x2
00545D52  F3 AB                     STOSD.REP ES:EDI
00545D54  8B CA                     MOV ECX,EDX
00545D56  83 E1 03                  AND ECX,0x3
00545D59  F3 AA                     STOSB.REP ES:EDI
00545D5B  8B 83 CE 04 00 00         MOV EAX,dword ptr [EBX + 0x4ce]
00545D61  8B 8B CA 04 00 00         MOV ECX,dword ptr [EBX + 0x4ca]
00545D67  8B 93 D2 04 00 00         MOV EDX,dword ptr [EBX + 0x4d2]
00545D6D  83 E8 0A                  SUB EAX,0xa
00545D70  83 E9 0A                  SUB ECX,0xa
00545D73  50                        PUSH EAX
00545D74  A1 28 2A 80 00            MOV EAX,[0x00802a28]
00545D79  51                        PUSH ECX
00545D7A  6A 05                     PUSH 0x5
00545D7C  6A 05                     PUSH 0x5
00545D7E  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00545D81  6A 00                     PUSH 0x0
00545D83  52                        PUSH EDX
00545D84  E8 07 AD 1C 00            CALL 0x00710a90
00545D89  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00545D8C  33 C9                     XOR ECX,ECX
00545D8E  6A FF                     PUSH -0x1
00545D90  6A FF                     PUSH -0x1
00545D92  66 8B 4A 14               MOV CX,word ptr [EDX + 0x14]
00545D96  8D 85 E0 FA FF FF         LEA EAX,[EBP + 0xfffffae0]
00545D9C  51                        PUSH ECX
00545D9D  8B 0D 28 2A 80 00         MOV ECX,dword ptr [0x00802a28]
00545DA3  6A FF                     PUSH -0x1
00545DA5  6A FE                     PUSH -0x2
00545DA7  8B 49 28                  MOV ECX,dword ptr [ECX + 0x28]
00545DAA  50                        PUSH EAX
00545DAB  E8 C0 BD 1C 00            CALL 0x00711b70
00545DB0  8B 93 CE 04 00 00         MOV EDX,dword ptr [EBX + 0x4ce]
00545DB6  8B 83 CA 04 00 00         MOV EAX,dword ptr [EBX + 0x4ca]
00545DBC  8B 8B D2 04 00 00         MOV ECX,dword ptr [EBX + 0x4d2]
00545DC2  6A 0D                     PUSH 0xd
00545DC4  6A 6F                     PUSH 0x6f
00545DC6  52                        PUSH EDX
00545DC7  50                        PUSH EAX
00545DC8  6A 00                     PUSH 0x0
00545DCA  6A 00                     PUSH 0x0
00545DCC  6A 00                     PUSH 0x0
00545DCE  51                        PUSH ECX
00545DCF  E8 0C 01 17 00            CALL 0x006b5ee0
00545DD4  8B 93 CE 04 00 00         MOV EDX,dword ptr [EBX + 0x4ce]
00545DDA  8B 83 CA 04 00 00         MOV EAX,dword ptr [EBX + 0x4ca]
00545DE0  8B 8B D2 04 00 00         MOV ECX,dword ptr [EBX + 0x4d2]
00545DE6  6A 0D                     PUSH 0xd
00545DE8  83 EA 02                  SUB EDX,0x2
00545DEB  68 B3 00 00 00            PUSH 0xb3
00545DF0  83 E8 02                  SUB EAX,0x2
00545DF3  52                        PUSH EDX
00545DF4  50                        PUSH EAX
00545DF5  6A 01                     PUSH 0x1
00545DF7  6A 01                     PUSH 0x1
00545DF9  6A 00                     PUSH 0x0
00545DFB  51                        PUSH ECX
00545DFC  E8 DF 00 17 00            CALL 0x006b5ee0
00545E01  6A 0D                     PUSH 0xd
00545E03  6A 6F                     PUSH 0x6f
00545E05  E9 C6 01 00 00            JMP 0x00545fd0
LAB_00545e0a:
00545E0A  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00545E0F  3B C7                     CMP EAX,EDI
00545E11  0F 84 DF 01 00 00         JZ 0x00545ff6
00545E17  8B 48 38                  MOV ECX,dword ptr [EAX + 0x38]
00545E1A  3B CF                     CMP ECX,EDI
00545E1C  0F 84 D4 01 00 00         JZ 0x00545ff6
00545E22  8D 95 E0 FA FF FF         LEA EDX,[EBP + 0xfffffae0]
00545E28  52                        PUSH EDX
00545E29  E8 42 B5 1C 00            CALL 0x00711370
00545E2E  83 C0 0C                  ADD EAX,0xc
00545E31  89 83 CA 04 00 00         MOV dword ptr [EBX + 0x4ca],EAX
00545E37  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00545E3D  8D 85 E0 FA FF FF         LEA EAX,[EBP + 0xfffffae0]
00545E43  8B 49 38                  MOV ECX,dword ptr [ECX + 0x38]
00545E46  50                        PUSH EAX
00545E47  E8 94 B5 1C 00            CALL 0x007113e0
00545E4C  8D 48 0A                  LEA ECX,[EAX + 0xa]
00545E4F  8B 83 CA 04 00 00         MOV EAX,dword ptr [EBX + 0x4ca]
00545E55  3D 20 03 00 00            CMP EAX,0x320
00545E5A  89 8B CE 04 00 00         MOV dword ptr [EBX + 0x4ce],ECX
00545E60  0F 8F 90 01 00 00         JG 0x00545ff6
00545E66  81 F9 96 00 00 00         CMP ECX,0x96
00545E6C  0F 8F 84 01 00 00         JG 0x00545ff6
00545E72  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
00545E78  8B B3 B1 00 00 00         MOV ESI,dword ptr [EBX + 0xb1]
00545E7E  03 D6                     ADD EDX,ESI
00545E80  8B B3 B5 00 00 00         MOV ESI,dword ptr [EBX + 0xb5]
00545E86  89 93 C2 04 00 00         MOV dword ptr [EBX + 0x4c2],EDX
00545E8C  8B 93 C9 00 00 00         MOV EDX,dword ptr [EBX + 0xc9]
00545E92  03 D6                     ADD EDX,ESI
00545E94  89 93 C6 04 00 00         MOV dword ptr [EBX + 0x4c6],EDX
00545E9A  8B 35 30 67 80 00         MOV ESI,dword ptr [0x00806730]
00545EA0  2B F0                     SUB ESI,EAX
00545EA2  8D 46 D8                  LEA EAX,[ESI + -0x28]
00545EA5  8B B3 C2 04 00 00         MOV ESI,dword ptr [EBX + 0x4c2]
00545EAB  3B F0                     CMP ESI,EAX
00545EAD  7E 06                     JLE 0x00545eb5
00545EAF  89 83 C2 04 00 00         MOV dword ptr [EBX + 0x4c2],EAX
LAB_00545eb5:
00545EB5  39 BB C2 04 00 00         CMP dword ptr [EBX + 0x4c2],EDI
00545EBB  7D 06                     JGE 0x00545ec3
00545EBD  89 BB C2 04 00 00         MOV dword ptr [EBX + 0x4c2],EDI
LAB_00545ec3:
00545EC3  A1 34 67 80 00            MOV EAX,[0x00806734]
00545EC8  2B C1                     SUB EAX,ECX
00545ECA  83 C0 EC                  ADD EAX,-0x14
00545ECD  3B D0                     CMP EDX,EAX
00545ECF  7E 06                     JLE 0x00545ed7
00545ED1  89 83 C6 04 00 00         MOV dword ptr [EBX + 0x4c6],EAX
LAB_00545ed7:
00545ED7  39 BB C6 04 00 00         CMP dword ptr [EBX + 0x4c6],EDI
00545EDD  7D 06                     JGE 0x00545ee5
00545EDF  89 BB C6 04 00 00         MOV dword ptr [EBX + 0x4c6],EDI
LAB_00545ee5:
00545EE5  8B 83 D2 04 00 00         MOV EAX,dword ptr [EBX + 0x4d2]
00545EEB  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
00545EEE  3B F7                     CMP ESI,EDI
00545EF0  75 1A                     JNZ 0x00545f0c
00545EF2  33 F6                     XOR ESI,ESI
00545EF4  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
00545EF8  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
00545EFC  83 C6 1F                  ADD ESI,0x1f
00545EFF  C1 EE 03                  SHR ESI,0x3
00545F02  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
00545F08  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_00545f0c:
00545F0C  50                        PUSH EAX
00545F0D  E8 8E F0 16 00            CALL 0x006b4fa0
00545F12  8B CE                     MOV ECX,ESI
00545F14  8B F8                     MOV EDI,EAX
00545F16  8B D1                     MOV EDX,ECX
00545F18  B8 22 22 22 22            MOV EAX,0x22222222
00545F1D  C1 E9 02                  SHR ECX,0x2
00545F20  F3 AB                     STOSD.REP ES:EDI
00545F22  8B CA                     MOV ECX,EDX
00545F24  83 E1 03                  AND ECX,0x3
00545F27  F3 AA                     STOSB.REP ES:EDI
00545F29  8B 83 CE 04 00 00         MOV EAX,dword ptr [EBX + 0x4ce]
00545F2F  8B 8B CA 04 00 00         MOV ECX,dword ptr [EBX + 0x4ca]
00545F35  8B 93 D2 04 00 00         MOV EDX,dword ptr [EBX + 0x4d2]
00545F3B  83 E8 0A                  SUB EAX,0xa
00545F3E  83 E9 0A                  SUB ECX,0xa
00545F41  50                        PUSH EAX
00545F42  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00545F47  51                        PUSH ECX
00545F48  6A 05                     PUSH 0x5
00545F4A  6A 05                     PUSH 0x5
00545F4C  8B 48 38                  MOV ECX,dword ptr [EAX + 0x38]
00545F4F  6A 00                     PUSH 0x0
00545F51  52                        PUSH EDX
00545F52  E8 39 AB 1C 00            CALL 0x00710a90
00545F57  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00545F5A  33 C9                     XOR ECX,ECX
00545F5C  6A FF                     PUSH -0x1
00545F5E  6A FF                     PUSH -0x1
00545F60  66 8B 4A 14               MOV CX,word ptr [EDX + 0x14]
00545F64  8D 85 E0 FA FF FF         LEA EAX,[EBP + 0xfffffae0]
00545F6A  51                        PUSH ECX
00545F6B  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00545F71  6A FF                     PUSH -0x1
00545F73  6A FE                     PUSH -0x2
00545F75  8B 49 38                  MOV ECX,dword ptr [ECX + 0x38]
00545F78  50                        PUSH EAX
00545F79  E8 F2 BB 1C 00            CALL 0x00711b70
00545F7E  8B 93 CE 04 00 00         MOV EDX,dword ptr [EBX + 0x4ce]
00545F84  8B 83 CA 04 00 00         MOV EAX,dword ptr [EBX + 0x4ca]
00545F8A  8B 8B D2 04 00 00         MOV ECX,dword ptr [EBX + 0x4d2]
00545F90  6A 0D                     PUSH 0xd
00545F92  6A 18                     PUSH 0x18
00545F94  52                        PUSH EDX
00545F95  50                        PUSH EAX
00545F96  6A 00                     PUSH 0x0
00545F98  6A 00                     PUSH 0x0
00545F9A  6A 00                     PUSH 0x0
00545F9C  51                        PUSH ECX
00545F9D  E8 3E FF 16 00            CALL 0x006b5ee0
00545FA2  8B 93 CE 04 00 00         MOV EDX,dword ptr [EBX + 0x4ce]
00545FA8  8B 83 CA 04 00 00         MOV EAX,dword ptr [EBX + 0x4ca]
00545FAE  8B 8B D2 04 00 00         MOV ECX,dword ptr [EBX + 0x4d2]
00545FB4  6A 0D                     PUSH 0xd
00545FB6  83 EA 02                  SUB EDX,0x2
00545FB9  6A 1D                     PUSH 0x1d
00545FBB  83 E8 02                  SUB EAX,0x2
00545FBE  52                        PUSH EDX
00545FBF  50                        PUSH EAX
00545FC0  6A 01                     PUSH 0x1
00545FC2  6A 01                     PUSH 0x1
00545FC4  6A 00                     PUSH 0x0
00545FC6  51                        PUSH ECX
00545FC7  E8 14 FF 16 00            CALL 0x006b5ee0
00545FCC  6A 0D                     PUSH 0xd
00545FCE  6A 18                     PUSH 0x18
LAB_00545fd0:
00545FD0  8B 93 CE 04 00 00         MOV EDX,dword ptr [EBX + 0x4ce]
00545FD6  8B 83 CA 04 00 00         MOV EAX,dword ptr [EBX + 0x4ca]
00545FDC  8B 8B D2 04 00 00         MOV ECX,dword ptr [EBX + 0x4d2]
00545FE2  83 EA 06                  SUB EDX,0x6
00545FE5  83 E8 06                  SUB EAX,0x6
00545FE8  52                        PUSH EDX
00545FE9  50                        PUSH EAX
00545FEA  6A 03                     PUSH 0x3
00545FEC  6A 03                     PUSH 0x3
00545FEE  6A 00                     PUSH 0x0
00545FF0  51                        PUSH ECX
00545FF1  E8 EA FE 16 00            CALL 0x006b5ee0
CursorClassTy::GetMessage::cf_common_exit_00545FF6:
00545FF6  8B 8B CA 04 00 00         MOV ECX,dword ptr [EBX + 0x4ca]
00545FFC  81 F9 20 03 00 00         CMP ECX,0x320
00546002  0F 8F 32 1C 00 00         JG 0x00547c3a
00546008  8B 83 CE 04 00 00         MOV EAX,dword ptr [EBX + 0x4ce]
0054600E  3D 96 00 00 00            CMP EAX,0x96
00546013  0F 8F 21 1C 00 00         JG 0x00547c3a
00546019  8B 93 D6 04 00 00         MOV EDX,dword ptr [EBX + 0x4d6]
0054601F  50                        PUSH EAX
00546020  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00546025  51                        PUSH ECX
00546026  52                        PUSH EDX
00546027  50                        PUSH EAX
00546028  E8 D3 C7 16 00            CALL 0x006b2800
0054602D  8B 8B C6 04 00 00         MOV ECX,dword ptr [EBX + 0x4c6]
00546033  8B 93 C2 04 00 00         MOV EDX,dword ptr [EBX + 0x4c2]
00546039  8B 83 D6 04 00 00         MOV EAX,dword ptr [EBX + 0x4d6]
0054603F  51                        PUSH ECX
00546040  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00546046  52                        PUSH EDX
00546047  6A FF                     PUSH -0x1
00546049  50                        PUSH EAX
0054604A  51                        PUSH ECX
0054604B  E8 F0 D5 16 00            CALL 0x006b3640
00546050  8B 93 D6 04 00 00         MOV EDX,dword ptr [EBX + 0x4d6]
00546056  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0054605B  52                        PUSH EDX
0054605C  50                        PUSH EAX
0054605D  E8 CE D3 16 00            CALL 0x006b3430
00546062  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546068  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054606D  33 C0                     XOR EAX,EAX
0054606F  5F                        POP EDI
00546070  5E                        POP ESI
00546071  5B                        POP EBX
00546072  8B E5                     MOV ESP,EBP
00546074  5D                        POP EBP
00546075  C2 04 00                  RET 0x4
LAB_00546078:
00546078  3D 02 42 00 00            CMP EAX,0x4202
0054607D  0F 85 B7 1B 00 00         JNZ 0x00547c3a
00546083  39 15 22 73 80 00         CMP dword ptr [0x00807322],EDX
00546089  0F 84 AB 1B 00 00         JZ 0x00547c3a
0054608F  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
00546092  8B 83 DA 04 00 00         MOV EAX,dword ptr [EBX + 0x4da]
00546098  3B C8                     CMP ECX,EAX
0054609A  0F 85 9A 1B 00 00         JNZ 0x00547c3a
005460A0  8B 93 D6 04 00 00         MOV EDX,dword ptr [EBX + 0x4d6]
005460A6  C7 83 DA 04 00 00 00 00 00 00  MOV dword ptr [EBX + 0x4da],0x0
005460B0  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005460B5  6A 00                     PUSH 0x0
005460B7  6A 00                     PUSH 0x0
005460B9  52                        PUSH EDX
005460BA  50                        PUSH EAX
005460BB  E8 40 C7 16 00            CALL 0x006b2800
005460C0  8B 8B D6 04 00 00         MOV ECX,dword ptr [EBX + 0x4d6]
005460C6  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005460CC  51                        PUSH ECX
005460CD  52                        PUSH EDX
005460CE  E8 1D DA 16 00            CALL 0x006b3af0
005460D3  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005460D9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005460DE  33 C0                     XOR EAX,EAX
005460E0  5F                        POP EDI
005460E1  5E                        POP ESI
005460E2  5B                        POP EBX
005460E3  8B E5                     MOV ESP,EBP
005460E5  5D                        POP EBP
005460E6  C2 04 00                  RET 0x4
LAB_005460e9:
005460E9  8B CB                     MOV ECX,EBX
005460EB  E8 65 AF EB FF            CALL 0x00401055
005460F0  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005460F6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005460FB  33 C0                     XOR EAX,EAX
005460FD  5F                        POP EDI
005460FE  5E                        POP ESI
005460FF  5B                        POP EBX
00546100  8B E5                     MOV ESP,EBP
00546102  5D                        POP EBP
00546103  C2 04 00                  RET 0x4
LAB_00546106:
00546106  2D FF A0 00 00            SUB EAX,0xa0ff
0054610B  0F 84 A5 00 00 00         JZ 0x005461b6
00546111  48                        DEC EAX
00546112  74 39                     JZ 0x0054614d
00546114  48                        DEC EAX
00546115  0F 85 1F 1B 00 00         JNZ 0x00547c3a
0054611B  8B CB                     MOV ECX,EBX
0054611D  E8 36 CF EB FF            CALL 0x00403058
00546122  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
00546128  85 C9                     TEST ECX,ECX
0054612A  0F 84 0A 1B 00 00         JZ 0x00547c3a
00546130  6A 0F                     PUSH 0xf
00546132  E8 0B F9 EB FF            CALL 0x00405a42
00546137  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
0054613D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546142  33 C0                     XOR EAX,EAX
00546144  5F                        POP EDI
00546145  5E                        POP ESI
00546146  5B                        POP EBX
00546147  8B E5                     MOV ESP,EBP
00546149  5D                        POP EBP
0054614A  C2 04 00                  RET 0x4
LAB_0054614d:
0054614D  8B CB                     MOV ECX,EBX
0054614F  E8 E0 D4 EB FF            CALL 0x00403634
00546154  85 C0                     TEST EAX,EAX
00546156  0F 84 DE 1A 00 00         JZ 0x00547c3a
0054615C  33 C0                     XOR EAX,EAX
0054615E  B9 01 00 00 00            MOV ECX,0x1
00546163  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00546166  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
00546169  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0054616C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0054616F  A1 3C 16 81 00            MOV EAX,[0x0081163c]
00546174  85 C0                     TEST EAX,EAX
00546176  74 1F                     JZ 0x00546197
00546178  8B B0 2C 04 00 00         MOV ESI,dword ptr [EAX + 0x42c]
0054617E  33 D2                     XOR EDX,EDX
00546180  85 F6                     TEST ESI,ESI
00546182  6A FF                     PUSH -0x1
00546184  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00546187  51                        PUSH ECX
00546188  8D 4D B0                  LEA ECX,[EBP + -0x50]
0054618B  0F 94 C2                  SETZ DL
0054618E  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
00546191  51                        PUSH ECX
00546192  E9 96 1A 00 00            JMP 0x00547c2d
LAB_00546197:
00546197  8B 15 84 87 80 00         MOV EDX,dword ptr [0x00808784]
0054619D  33 C0                     XOR EAX,EAX
0054619F  85 D2                     TEST EDX,EDX
005461A1  6A FF                     PUSH -0x1
005461A3  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
005461A6  51                        PUSH ECX
005461A7  8D 4D B0                  LEA ECX,[EBP + -0x50]
005461AA  0F 94 C0                  SETZ AL
005461AD  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005461B0  51                        PUSH ECX
005461B1  E9 77 1A 00 00            JMP 0x00547c2d
LAB_005461b6:
005461B6  57                        PUSH EDI
005461B7  B9 20 76 80 00            MOV ECX,0x807620
005461BC  C7 47 10 04 71 00 00      MOV dword ptr [EDI + 0x10],0x7104
005461C3  E8 26 F7 EB FF            CALL 0x004058ee
005461C8  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005461CE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005461D3  33 C0                     XOR EAX,EAX
005461D5  5F                        POP EDI
005461D6  5E                        POP ESI
005461D7  5B                        POP EBX
005461D8  8B E5                     MOV ESP,EBP
005461DA  5D                        POP EBP
005461DB  C2 04 00                  RET 0x4
LAB_005461de:
005461DE  8B CB                     MOV ECX,EBX
005461E0  E8 73 CE EB FF            CALL 0x00403058
005461E5  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
005461EB  85 C9                     TEST ECX,ECX
005461ED  0F 84 47 1A 00 00         JZ 0x00547c3a
005461F3  68 FF 00 00 00            PUSH 0xff
005461F8  E8 45 F8 EB FF            CALL 0x00405a42
005461FD  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546203  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546208  33 C0                     XOR EAX,EAX
0054620A  5F                        POP EDI
0054620B  5E                        POP ESI
0054620C  5B                        POP EBX
0054620D  8B E5                     MOV ESP,EBP
0054620F  5D                        POP EBP
00546210  C2 04 00                  RET 0x4
LAB_00546213:
00546213  05 FD 5E FF FF            ADD EAX,0xffff5efd
00546218  83 F8 20                  CMP EAX,0x20
0054621B  0F 87 19 1A 00 00         JA 0x00547c3a
00546221  33 C9                     XOR ECX,ECX
00546223  8A 88 4C 7D 54 00         MOV CL,byte ptr [EAX + 0x547d4c]
switchD_00546229::switchD:
00546229  FF 24 8D 2C 7D 54 00      JMP dword ptr [ECX*0x4 + 0x547d2c]
switchD_00546229::caseD_a122:
00546230  8B CB                     MOV ECX,EBX
00546232  E8 21 CE EB FF            CALL 0x00403058
00546237  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0054623D  85 C9                     TEST ECX,ECX
0054623F  0F 84 F5 19 00 00         JZ 0x00547c3a
00546245  E8 7E C2 EB FF            CALL 0x004024c8
0054624A  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546250  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546255  33 C0                     XOR EAX,EAX
00546257  5F                        POP EDI
00546258  5E                        POP ESI
00546259  5B                        POP EBX
0054625A  8B E5                     MOV ESP,EBP
0054625C  5D                        POP EBP
0054625D  C2 04 00                  RET 0x4
switchD_00546229::caseD_a123:
00546260  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00546266  3B CA                     CMP ECX,EDX
00546268  0F 84 CC 19 00 00         JZ 0x00547c3a
0054626E  E8 3C B3 EB FF            CALL 0x004015af
00546273  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546279  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054627E  33 C0                     XOR EAX,EAX
00546280  5F                        POP EDI
00546281  5E                        POP ESI
00546282  5B                        POP EBX
00546283  8B E5                     MOV ESP,EBP
00546285  5D                        POP EBP
00546286  C2 04 00                  RET 0x4
switchD_00546229::caseD_a11f:
00546289  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
00546290  0F 84 A4 19 00 00         JZ 0x00547c3a
00546296  B8 01 00 00 00            MOV EAX,0x1
0054629B  A3 94 87 80 00            MOV [0x00808794],EAX
005462A0  A3 98 87 80 00            MOV [0x00808798],EAX
005462A5  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005462AB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005462B0  33 C0                     XOR EAX,EAX
005462B2  5F                        POP EDI
005462B3  5E                        POP ESI
005462B4  5B                        POP EBX
005462B5  8B E5                     MOV ESP,EBP
005462B7  5D                        POP EBP
005462B8  C2 04 00                  RET 0x4
switchD_00546229::caseD_a120:
005462BB  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
005462C2  0F 84 72 19 00 00         JZ 0x00547c3a
005462C8  83 C9 FF                  OR ECX,0xffffffff
005462CB  BF 80 76 80 00            MOV EDI,0x807680
005462D0  33 C0                     XOR EAX,EAX
005462D2  33 DB                     XOR EBX,EBX
005462D4  F2 AE                     SCASB.REPNE ES:EDI
005462D6  F7 D1                     NOT ECX
005462D8  2B F9                     SUB EDI,ECX
005462DA  8D 55 BC                  LEA EDX,[EBP + -0x44]
005462DD  8B C1                     MOV EAX,ECX
005462DF  8B F7                     MOV ESI,EDI
005462E1  BF 1A EE 80 00            MOV EDI,0x80ee1a
005462E6  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
005462E9  C1 E9 02                  SHR ECX,0x2
005462EC  F3 A5                     MOVSD.REP ES:EDI,ESI
005462EE  8B C8                     MOV ECX,EAX
005462F0  33 C0                     XOR EAX,EAX
005462F2  83 E1 03                  AND ECX,0x3
005462F5  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
005462F8  F3 A4                     MOVSB.REP ES:EDI,ESI
005462FA  8B 3D E4 AD 79 00         MOV EDI,dword ptr [0x0079ade4]
00546300  83 C9 FF                  OR ECX,0xffffffff
00546303  F2 AE                     SCASB.REPNE ES:EDI
00546305  F7 D1                     NOT ECX
00546307  2B F9                     SUB EDI,ECX
00546309  68 1A EE 80 00            PUSH 0x80ee1a
0054630E  8B F7                     MOV ESI,EDI
00546310  8B D1                     MOV EDX,ECX
00546312  BF 1A EE 80 00            MOV EDI,0x80ee1a
00546317  83 C9 FF                  OR ECX,0xffffffff
0054631A  F2 AE                     SCASB.REPNE ES:EDI
0054631C  8B CA                     MOV ECX,EDX
0054631E  4F                        DEC EDI
0054631F  C1 E9 02                  SHR ECX,0x2
00546322  F3 A5                     MOVSD.REP ES:EDI,ESI
00546324  8B CA                     MOV ECX,EDX
00546326  68 1A EE 80 00            PUSH 0x80ee1a
0054632B  83 E1 03                  AND ECX,0x3
0054632E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00546331  F3 A4                     MOVSB.REP ES:EDI,ESI
00546333  BF DD 7D 80 00            MOV EDI,0x807ddd
00546338  83 C9 FF                  OR ECX,0xffffffff
0054633B  F2 AE                     SCASB.REPNE ES:EDI
0054633D  F7 D1                     NOT ECX
0054633F  2B F9                     SUB EDI,ECX
00546341  8B F7                     MOV ESI,EDI
00546343  8B D1                     MOV EDX,ECX
00546345  BF 1A EE 80 00            MOV EDI,0x80ee1a
0054634A  83 C9 FF                  OR ECX,0xffffffff
0054634D  F2 AE                     SCASB.REPNE ES:EDI
0054634F  8B CA                     MOV ECX,EDX
00546351  4F                        DEC EDI
00546352  C1 E9 02                  SHR ECX,0x2
00546355  F3 A5                     MOVSD.REP ES:EDI,ESI
00546357  8B CA                     MOV ECX,EDX
00546359  83 E1 03                  AND ECX,0x3
0054635C  F3 A4                     MOVSB.REP ES:EDI,ESI
0054635E  E8 1D 1F 17 00            CALL 0x006b8280
00546363  8B 3D E8 AD 79 00         MOV EDI,dword ptr [0x0079ade8]
00546369  83 C9 FF                  OR ECX,0xffffffff
0054636C  33 C0                     XOR EAX,EAX
0054636E  53                        PUSH EBX
0054636F  F2 AE                     SCASB.REPNE ES:EDI
00546371  F7 D1                     NOT ECX
00546373  2B F9                     SUB EDI,ECX
00546375  8B F7                     MOV ESI,EDI
00546377  8B D1                     MOV EDX,ECX
00546379  BF 1A EE 80 00            MOV EDI,0x80ee1a
0054637E  83 C9 FF                  OR ECX,0xffffffff
00546381  F2 AE                     SCASB.REPNE ES:EDI
00546383  8B CA                     MOV ECX,EDX
00546385  4F                        DEC EDI
00546386  C1 E9 02                  SHR ECX,0x2
00546389  F3 A5                     MOVSD.REP ES:EDI,ESI
0054638B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00546390  8B CA                     MOV ECX,EDX
00546392  83 E1 03                  AND ECX,0x3
00546395  89 85 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EAX
0054639B  F3 A4                     MOVSB.REP ES:EDI,ESI
0054639D  8D 8D E0 FE FF FF         LEA ECX,[EBP + 0xfffffee0]
005463A3  8D 95 E4 FE FF FF         LEA EDX,[EBP + 0xfffffee4]
005463A9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005463AF  52                        PUSH EDX
005463B0  E8 3B 74 1E 00            CALL 0x0072d7f0
005463B5  83 C4 08                  ADD ESP,0x8
005463B8  3B C3                     CMP EAX,EBX
005463BA  0F 85 B8 00 00 00         JNZ 0x00546478
005463C0  53                        PUSH EBX
005463C1  53                        PUSH EBX
005463C2  53                        PUSH EBX
005463C3  68 1A EE 80 00            PUSH 0x80ee1a
005463C8  68 45 03 00 00            PUSH 0x345
005463CD  E8 EE AA 1A 00            CALL 0x006f0ec0
005463D2  8B 0D EC AD 79 00         MOV ECX,dword ptr [0x0079adec]
005463D8  83 C4 14                  ADD ESP,0x14
005463DB  8B F0                     MOV ESI,EAX
005463DD  8D 45 AC                  LEA EAX,[EBP + -0x54]
005463E0  53                        PUSH EBX
005463E1  50                        PUSH EAX
005463E2  51                        PUSH ECX
005463E3  68 80 00 00 00            PUSH 0x80
005463E8  8B CE                     MOV ECX,ESI
005463EA  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005463ED  E8 EE B8 1A 00            CALL 0x006f1ce0
005463F2  85 C0                     TEST EAX,EAX
005463F4  74 74                     JZ 0x0054646a
005463F6  33 C9                     XOR ECX,ECX
005463F8  BA 16 00 00 88            MOV EDX,0x88000016
005463FD  8A 0D 83 87 80 00         MOV CL,byte ptr [0x00808783]
00546403  8B C1                     MOV EAX,ECX
00546405  48                        DEC EAX
00546406  74 0A                     JZ 0x00546412
00546408  48                        DEC EAX
00546409  75 0C                     JNZ 0x00546417
0054640B  BA 16 02 00 88            MOV EDX,0x88000216
00546410  EB 05                     JMP 0x00546417
LAB_00546412:
00546412  BA 16 01 00 88            MOV EDX,0x88000116
LAB_00546417:
00546417  3B 55 BC                  CMP EDX,dword ptr [EBP + -0x44]
0054641A  75 4E                     JNZ 0x0054646a
0054641C  8B C1                     MOV EAX,ECX
0054641E  48                        DEC EAX
0054641F  74 0C                     JZ 0x0054642d
00546421  48                        DEC EAX
00546422  75 10                     JNZ 0x00546434
00546424  C6 05 A0 87 80 00 0A      MOV byte ptr [0x008087a0],0xa
0054642B  EB 07                     JMP 0x00546434
LAB_0054642d:
0054642D  C6 05 A0 87 80 00 09      MOV byte ptr [0x008087a0],0x9
LAB_00546434:
00546434  B9 08 00 00 00            MOV ECX,0x8
00546439  33 C0                     XOR EAX,EAX
0054643B  8D 7D C4                  LEA EDI,[EBP + -0x3c]
0054643E  BA 01 00 00 00            MOV EDX,0x1
00546443  F3 AB                     STOSD.REP ES:EDI
00546445  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00546448  89 15 9C 87 80 00         MOV dword ptr [0x0080879c],EDX
0054644E  89 15 2E F3 80 00         MOV dword ptr [0x0080f32e],EDX
00546454  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00546457  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0054645A  8D 55 C4                  LEA EDX,[EBP + -0x3c]
0054645D  52                        PUSH EDX
0054645E  C7 45 D4 00 61 00 00      MOV dword ptr [EBP + -0x2c],0x6100
00546465  E8 E6 D6 19 00            CALL 0x006e3b50
LAB_0054646a:
0054646A  8B 8D E0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee0]
00546470  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00546476  EB 0F                     JMP 0x00546487
LAB_00546478:
00546478  8B 95 E0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee0]
0054647E  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00546481  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00546487:
00546487  3B F3                     CMP ESI,EBX
00546489  0F 84 AB 17 00 00         JZ 0x00547c3a
0054648F  56                        PUSH ESI
00546490  E8 DB AC 1A 00            CALL 0x006f1170
00546495  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
0054649B  83 C4 04                  ADD ESP,0x4
0054649E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005464A3  33 C0                     XOR EAX,EAX
005464A5  5F                        POP EDI
005464A6  5E                        POP ESI
005464A7  5B                        POP EBX
005464A8  8B E5                     MOV ESP,EBP
005464AA  5D                        POP EBP
005464AB  C2 04 00                  RET 0x4
switchD_00546229::caseD_a105:
005464AE  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
005464B4  3B CA                     CMP ECX,EDX
005464B6  0F 84 7E 17 00 00         JZ 0x00547c3a
005464BC  8B 01                     MOV EAX,dword ptr [ECX]
005464BE  57                        PUSH EDI
005464BF  FF 10                     CALL dword ptr [EAX]
005464C1  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005464C7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005464CC  33 C0                     XOR EAX,EAX
005464CE  5F                        POP EDI
005464CF  5E                        POP ESI
005464D0  5B                        POP EBX
005464D1  8B E5                     MOV ESP,EBP
005464D3  5D                        POP EBP
005464D4  C2 04 00                  RET 0x4
switchD_00546229::caseD_a103:
005464D7  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
005464DD  3B CA                     CMP ECX,EDX
005464DF  0F 84 55 17 00 00         JZ 0x00547c3a
005464E5  6A 04                     PUSH 0x4
005464E7  E8 2A EA EB FF            CALL 0x00404f16
005464EC  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005464F2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005464F7  33 C0                     XOR EAX,EAX
005464F9  5F                        POP EDI
005464FA  5E                        POP ESI
005464FB  5B                        POP EBX
005464FC  8B E5                     MOV ESP,EBP
005464FE  5D                        POP EBP
005464FF  C2 04 00                  RET 0x4
switchD_00546229::caseD_a104:
00546502  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
00546508  3B CA                     CMP ECX,EDX
0054650A  0F 84 2A 17 00 00         JZ 0x00547c3a
00546510  A0 A0 67 80 00            MOV AL,[0x008067a0]
00546515  84 C0                     TEST AL,AL
00546517  0F 85 1D 17 00 00         JNZ 0x00547c3a
0054651D  6A 05                     PUSH 0x5
0054651F  E8 F2 E9 EB FF            CALL 0x00404f16
00546524  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
0054652A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054652F  33 C0                     XOR EAX,EAX
00546531  5F                        POP EDI
00546532  5E                        POP ESI
00546533  5B                        POP EBX
00546534  8B E5                     MOV ESP,EBP
00546536  5D                        POP EBP
00546537  C2 04 00                  RET 0x4
LAB_0054653a:
0054653A  8B CB                     MOV ECX,EBX
0054653C  E8 17 CB EB FF            CALL 0x00403058
00546541  8B 0D 9C 16 80 00         MOV ECX,dword ptr [0x0080169c]
00546547  85 C9                     TEST ECX,ECX
00546549  0F 84 EB 16 00 00         JZ 0x00547c3a
0054654F  6A 00                     PUSH 0x0
00546551  E8 79 B8 EB FF            CALL 0x00401dcf
00546556  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
0054655C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546561  33 C0                     XOR EAX,EAX
00546563  5F                        POP EDI
00546564  5E                        POP ESI
00546565  5B                        POP EBX
00546566  8B E5                     MOV ESP,EBP
00546568  5D                        POP EBP
00546569  C2 04 00                  RET 0x4
LAB_0054656c:
0054656C  3D 03 A2 00 00            CMP EAX,0xa203
00546571  0F 87 DA 01 00 00         JA 0x00546751
00546577  3D FF A1 00 00            CMP EAX,0xa1ff
0054657C  0F 83 92 01 00 00         JNC 0x00546714
00546582  05 DB 5E FF FF            ADD EAX,0xffff5edb
00546587  83 F8 0E                  CMP EAX,0xe
0054658A  0F 87 AA 16 00 00         JA 0x00547c3a
switchD_00546590::switchD:
00546590  FF 24 85 70 7D 54 00      JMP dword ptr [EAX*0x4 + 0x547d70]
switchD_00546590::caseD_a12f:
00546597  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
0054659D  C7 83 CD 00 00 00 03 00 00 00  MOV dword ptr [EBX + 0xcd],0x3
005465A7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005465AC  33 C0                     XOR EAX,EAX
005465AE  5F                        POP EDI
005465AF  5E                        POP ESI
005465B0  5B                        POP EBX
005465B1  8B E5                     MOV ESP,EBP
005465B3  5D                        POP EBP
005465B4  C2 04 00                  RET 0x4
switchD_00546590::caseD_a130:
005465B7  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005465BD  C7 83 CD 00 00 00 04 00 00 00  MOV dword ptr [EBX + 0xcd],0x4
005465C7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005465CC  33 C0                     XOR EAX,EAX
005465CE  5F                        POP EDI
005465CF  5E                        POP ESI
005465D0  5B                        POP EBX
005465D1  8B E5                     MOV ESP,EBP
005465D3  5D                        POP EBP
005465D4  C2 04 00                  RET 0x4
switchD_00546590::caseD_a131:
005465D7  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005465DD  89 B3 CD 00 00 00         MOV dword ptr [EBX + 0xcd],ESI
005465E3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005465E8  33 C0                     XOR EAX,EAX
005465EA  5F                        POP EDI
005465EB  5E                        POP ESI
005465EC  5B                        POP EBX
005465ED  8B E5                     MOV ESP,EBP
005465EF  5D                        POP EBP
005465F0  C2 04 00                  RET 0x4
switchD_00546590::caseD_a132:
005465F3  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005465F9  C7 83 CD 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xcd],0x1
00546603  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546608  33 C0                     XOR EAX,EAX
0054660A  5F                        POP EDI
0054660B  5E                        POP ESI
0054660C  5B                        POP EBX
0054660D  8B E5                     MOV ESP,EBP
0054660F  5D                        POP EBP
00546610  C2 04 00                  RET 0x4
switchD_00546590::caseD_a133:
00546613  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546619  89 93 CD 00 00 00         MOV dword ptr [EBX + 0xcd],EDX
0054661F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546624  33 C0                     XOR EAX,EAX
00546626  5F                        POP EDI
00546627  5E                        POP ESI
00546628  5B                        POP EBX
00546629  8B E5                     MOV ESP,EBP
0054662B  5D                        POP EBP
0054662C  C2 04 00                  RET 0x4
switchD_00546590::caseD_a128:
0054662F  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00546635  3B CA                     CMP ECX,EDX
00546637  0F 84 FD 15 00 00         JZ 0x00547c3a
0054663D  E8 CA E3 EB FF            CALL 0x00404a0c
00546642  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546648  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054664D  33 C0                     XOR EAX,EAX
0054664F  5F                        POP EDI
00546650  5E                        POP ESI
00546651  5B                        POP EBX
00546652  8B E5                     MOV ESP,EBP
00546654  5D                        POP EBP
00546655  C2 04 00                  RET 0x4
switchD_00546590::caseD_a125:
00546658  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0054665F  0F 85 D5 15 00 00         JNZ 0x00547c3a
00546665  8B CB                     MOV ECX,EBX
00546667  E8 EC C9 EB FF            CALL 0x00403058
0054666C  8B 0D 9C 16 80 00         MOV ECX,dword ptr [0x0080169c]
00546672  85 C9                     TEST ECX,ECX
00546674  0F 84 C0 15 00 00         JZ 0x00547c3a
0054667A  6A 01                     PUSH 0x1
0054667C  E8 4E B7 EB FF            CALL 0x00401dcf
00546681  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546687  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054668C  33 C0                     XOR EAX,EAX
0054668E  5F                        POP EDI
0054668F  5E                        POP ESI
00546690  5B                        POP EBX
00546691  8B E5                     MOV ESP,EBP
00546693  5D                        POP EBP
00546694  C2 04 00                  RET 0x4
switchD_00546590::caseD_a126:
00546697  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0054669E  0F 85 96 15 00 00         JNZ 0x00547c3a
005466A4  8B CB                     MOV ECX,EBX
005466A6  E8 AD C9 EB FF            CALL 0x00403058
005466AB  8B 0D 9C 16 80 00         MOV ECX,dword ptr [0x0080169c]
005466B1  85 C9                     TEST ECX,ECX
005466B3  0F 84 81 15 00 00         JZ 0x00547c3a
005466B9  6A 03                     PUSH 0x3
005466BB  E8 0F B7 EB FF            CALL 0x00401dcf
005466C0  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005466C6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005466CB  33 C0                     XOR EAX,EAX
005466CD  5F                        POP EDI
005466CE  5E                        POP ESI
005466CF  5B                        POP EBX
005466D0  8B E5                     MOV ESP,EBP
005466D2  5D                        POP EBP
005466D3  C2 04 00                  RET 0x4
switchD_00546590::caseD_a127:
005466D6  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
005466DD  0F 85 57 15 00 00         JNZ 0x00547c3a
005466E3  8B CB                     MOV ECX,EBX
005466E5  E8 6E C9 EB FF            CALL 0x00403058
005466EA  8B 0D 9C 16 80 00         MOV ECX,dword ptr [0x0080169c]
005466F0  85 C9                     TEST ECX,ECX
005466F2  0F 84 42 15 00 00         JZ 0x00547c3a
005466F8  56                        PUSH ESI
005466F9  E8 D1 B6 EB FF            CALL 0x00401dcf
005466FE  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546704  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546709  33 C0                     XOR EAX,EAX
0054670B  5F                        POP EDI
0054670C  5E                        POP ESI
0054670D  5B                        POP EBX
0054670E  8B E5                     MOV ESP,EBP
00546710  5D                        POP EBP
00546711  C2 04 00                  RET 0x4
LAB_00546714:
00546714  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054671A  3B CA                     CMP ECX,EDX
0054671C  0F 84 18 15 00 00         JZ 0x00547c3a
00546722  8A 5F 10                  MOV BL,byte ptr [EDI + 0x10]
00546725  B2 03                     MOV DL,0x3
00546727  6A FF                     PUSH -0x1
00546729  8D 45 F7                  LEA EAX,[EBP + -0x9]
0054672C  6A 00                     PUSH 0x0
0054672E  2A D3                     SUB DL,BL
00546730  50                        PUSH EAX
00546731  6A 15                     PUSH 0x15
00546733  88 55 F7                  MOV byte ptr [EBP + -0x9],DL
00546736  E8 F8 D4 EB FF            CALL 0x00403c33
0054673B  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546741  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546746  33 C0                     XOR EAX,EAX
00546748  5F                        POP EDI
00546749  5E                        POP ESI
0054674A  5B                        POP EBX
0054674B  8B E5                     MOV ESP,EBP
0054674D  5D                        POP EBP
0054674E  C2 04 00                  RET 0x4
LAB_00546751:
00546751  3D 09 A2 00 00            CMP EAX,0xa209
00546756  0F 87 3C 01 00 00         JA 0x00546898
0054675C  0F 84 F9 00 00 00         JZ 0x0054685b
00546762  2D 06 A2 00 00            SUB EAX,0xa206
00546767  0F 84 B3 00 00 00         JZ 0x00546820
0054676D  48                        DEC EAX
0054676E  74 75                     JZ 0x005467e5
00546770  48                        DEC EAX
00546771  0F 85 C3 14 00 00         JNZ 0x00547c3a
00546777  8B 15 A0 B2 7F 00         MOV EDX,dword ptr [0x007fb2a0]
0054677D  85 D2                     TEST EDX,EDX
0054677F  0F 84 B5 14 00 00         JZ 0x00547c3a
00546785  B9 08 00 00 00            MOV ECX,0x8
0054678A  33 C0                     XOR EAX,EAX
0054678C  8D 7D C4                  LEA EDI,[EBP + -0x3c]
0054678F  F3 AB                     STOSD.REP ES:EDI
00546791  8B CA                     MOV ECX,EDX
00546793  E8 84 F0 EB FF            CALL 0x0040581c
00546798  83 F8 03                  CMP EAX,0x3
0054679B  77 20                     JA 0x005467bd
switchD_0054679d::switchD:
0054679D  FF 24 85 AC 7D 54 00      JMP dword ptr [EAX*0x4 + 0x547dac]
switchD_0054679d::caseD_0:
005467A4  C7 45 D4 05 01 00 00      MOV dword ptr [EBP + -0x2c],0x105
005467AB  EB 10                     JMP 0x005467bd
switchD_0054679d::caseD_1:
005467AD  C7 45 D4 06 01 00 00      MOV dword ptr [EBP + -0x2c],0x106
005467B4  EB 07                     JMP 0x005467bd
switchD_0054679d::caseD_3:
005467B6  C7 45 D4 04 01 00 00      MOV dword ptr [EBP + -0x2c],0x104
switchD_0054679d::default:
005467BD  8D 4D C4                  LEA ECX,[EBP + -0x3c]
005467C0  51                        PUSH ECX
005467C1  68 00 01 00 00            PUSH 0x100
005467C6  6A 03                     PUSH 0x3
005467C8  8B CB                     MOV ECX,EBX
005467CA  E8 31 F8 19 00            CALL 0x006e6000
005467CF  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005467D5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005467DA  33 C0                     XOR EAX,EAX
005467DC  5F                        POP EDI
005467DD  5E                        POP ESI
005467DE  5B                        POP EBX
005467DF  8B E5                     MOV ESP,EBP
005467E1  5D                        POP EBP
005467E2  C2 04 00                  RET 0x4
LAB_005467e5:
005467E5  B9 08 00 00 00            MOV ECX,0x8
005467EA  33 C0                     XOR EAX,EAX
005467EC  8D 7D C4                  LEA EDI,[EBP + -0x3c]
005467EF  8D 55 C4                  LEA EDX,[EBP + -0x3c]
005467F2  F3 AB                     STOSD.REP ES:EDI
005467F4  52                        PUSH EDX
005467F5  68 00 01 00 00            PUSH 0x100
005467FA  6A 03                     PUSH 0x3
005467FC  8B CB                     MOV ECX,EBX
005467FE  C7 45 D4 01 01 00 00      MOV dword ptr [EBP + -0x2c],0x101
00546805  E8 F6 F7 19 00            CALL 0x006e6000
0054680A  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546810  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546815  33 C0                     XOR EAX,EAX
00546817  5F                        POP EDI
00546818  5E                        POP ESI
00546819  5B                        POP EBX
0054681A  8B E5                     MOV ESP,EBP
0054681C  5D                        POP EBP
0054681D  C2 04 00                  RET 0x4
LAB_00546820:
00546820  B9 08 00 00 00            MOV ECX,0x8
00546825  33 C0                     XOR EAX,EAX
00546827  8D 7D C4                  LEA EDI,[EBP + -0x3c]
0054682A  F3 AB                     STOSD.REP ES:EDI
0054682C  8D 45 C4                  LEA EAX,[EBP + -0x3c]
0054682F  8B CB                     MOV ECX,EBX
00546831  50                        PUSH EAX
00546832  68 00 01 00 00            PUSH 0x100
00546837  6A 03                     PUSH 0x3
00546839  C7 45 D4 00 01 00 00      MOV dword ptr [EBP + -0x2c],0x100
00546840  E8 BB F7 19 00            CALL 0x006e6000
00546845  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
0054684B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546850  33 C0                     XOR EAX,EAX
00546852  5F                        POP EDI
00546853  5E                        POP ESI
00546854  5B                        POP EBX
00546855  8B E5                     MOV ESP,EBP
00546857  5D                        POP EBP
00546858  C2 04 00                  RET 0x4
LAB_0054685b:
0054685B  8B 15 A0 B2 7F 00         MOV EDX,dword ptr [0x007fb2a0]
00546861  85 D2                     TEST EDX,EDX
00546863  0F 84 D1 13 00 00         JZ 0x00547c3a
00546869  B9 08 00 00 00            MOV ECX,0x8
0054686E  33 C0                     XOR EAX,EAX
00546870  8D 7D C4                  LEA EDI,[EBP + -0x3c]
00546873  F3 AB                     STOSD.REP ES:EDI
00546875  8B CA                     MOV ECX,EDX
00546877  E8 A0 EF EB FF            CALL 0x0040581c
0054687C  83 F8 03                  CMP EAX,0x3
0054687F  0F 87 38 FF FF FF         JA 0x005467bd
switchD_00546885::switchD:
00546885  FF 24 85 BC 7D 54 00      JMP dword ptr [EAX*0x4 + 0x547dbc]
switchD_0054679d::caseD_2:
0054688C  C7 45 D4 07 01 00 00      MOV dword ptr [EBP + -0x2c],0x107
00546893  E9 25 FF FF FF            JMP 0x005467bd
LAB_00546898:
00546898  8D 88 01 5D FF FF         LEA ECX,[EAX + 0xffff5d01]
0054689E  83 F9 13                  CMP ECX,0x13
005468A1  0F 87 93 13 00 00         JA 0x00547c3a
005468A7  33 DB                     XOR EBX,EBX
005468A9  8A 99 D4 7D 54 00         MOV BL,byte ptr [ECX + 0x547dd4]
switchD_005468af::switchD:
005468AF  FF 24 9D CC 7D 54 00      JMP dword ptr [EBX*0x4 + 0x547dcc]
switchD_005468af::caseD_a2ff:
005468B6  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
005468BC  3B CA                     CMP ECX,EDX
005468BE  0F 84 76 13 00 00         JZ 0x00547c3a
005468C4  05 01 5D FF FF            ADD EAX,0xffff5d01
005468C9  50                        PUSH EAX
005468CA  E8 DE BD EB FF            CALL 0x004026ad
005468CF  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005468D5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005468DA  33 C0                     XOR EAX,EAX
005468DC  5F                        POP EDI
005468DD  5E                        POP ESI
005468DE  5B                        POP EBX
005468DF  8B E5                     MOV ESP,EBP
005468E1  5D                        POP EBP
005468E2  C2 04 00                  RET 0x4
switchD_005468af::caseD_a309:
005468E5  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
005468EB  3B CA                     CMP ECX,EDX
005468ED  0F 84 47 13 00 00         JZ 0x00547c3a
005468F3  05 F7 5C FF FF            ADD EAX,0xffff5cf7
005468F8  50                        PUSH EAX
005468F9  E8 1E D6 EB FF            CALL 0x00403f1c
005468FE  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546904  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546909  33 C0                     XOR EAX,EAX
0054690B  5F                        POP EDI
0054690C  5E                        POP ESI
0054690D  5B                        POP EBX
0054690E  8B E5                     MOV ESP,EBP
00546910  5D                        POP EBP
00546911  C2 04 00                  RET 0x4
LAB_00546914:
00546914  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0054691A  3B CA                     CMP ECX,EDX
0054691C  0F 84 18 13 00 00         JZ 0x00547c3a
00546922  05 ED 5C FF FF            ADD EAX,0xffff5ced
00546927  50                        PUSH EAX
00546928  E8 D2 ED EB FF            CALL 0x004056ff
0054692D  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546933  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546938  33 C0                     XOR EAX,EAX
0054693A  5F                        POP EDI
0054693B  5E                        POP ESI
0054693C  5B                        POP EBX
0054693D  8B E5                     MOV ESP,EBP
0054693F  5D                        POP EBP
00546940  C2 04 00                  RET 0x4
LAB_00546943:
00546943  3D 0C A5 00 00            CMP EAX,0xa50c
00546948  0F 87 88 08 00 00         JA 0x005471d6
0054694E  0F 84 53 08 00 00         JZ 0x005471a7
00546954  3D 04 A5 00 00            CMP EAX,0xa504
00546959  0F 87 5B 01 00 00         JA 0x00546aba
0054695F  0F 84 6B 01 00 00         JZ 0x00546ad0
00546965  3D 00 A5 00 00            CMP EAX,0xa500
0054696A  0F 87 F8 00 00 00         JA 0x00546a68
00546970  0F 84 D6 00 00 00         JZ 0x00546a4c
00546976  3D 30 A3 00 00            CMP EAX,0xa330
0054697B  0F 87 A0 00 00 00         JA 0x00546a21
00546981  74 75                     JZ 0x005469f8
00546983  3D 1D A3 00 00            CMP EAX,0xa31d
00546988  0F 82 AC 12 00 00         JC 0x00547c3a
0054698E  3D 26 A3 00 00            CMP EAX,0xa326
00546993  76 34                     JBE 0x005469c9
00546995  3D 2F A3 00 00            CMP EAX,0xa32f
0054699A  0F 85 9A 12 00 00         JNZ 0x00547c3a
005469A0  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
005469A6  3B CA                     CMP ECX,EDX
005469A8  0F 84 8C 12 00 00         JZ 0x00547c3a
005469AE  E8 44 D7 EB FF            CALL 0x004040f7
005469B3  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005469B9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005469BE  33 C0                     XOR EAX,EAX
005469C0  5F                        POP EDI
005469C1  5E                        POP ESI
005469C2  5B                        POP EBX
005469C3  8B E5                     MOV ESP,EBP
005469C5  5D                        POP EBP
005469C6  C2 04 00                  RET 0x4
LAB_005469c9:
005469C9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005469CF  3B CA                     CMP ECX,EDX
005469D1  0F 84 63 12 00 00         JZ 0x00547c3a
005469D7  05 E3 5C FF FF            ADD EAX,0xffff5ce3
005469DC  50                        PUSH EAX
005469DD  E8 12 EE EB FF            CALL 0x004057f4
005469E2  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005469E8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005469ED  33 C0                     XOR EAX,EAX
005469EF  5F                        POP EDI
005469F0  5E                        POP ESI
005469F1  5B                        POP EBX
005469F2  8B E5                     MOV ESP,EBP
005469F4  5D                        POP EBP
005469F5  C2 04 00                  RET 0x4
LAB_005469f8:
005469F8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005469FE  3B CA                     CMP ECX,EDX
00546A00  0F 84 34 12 00 00         JZ 0x00547c3a
00546A06  E8 B7 C0 EB FF            CALL 0x00402ac2
00546A0B  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546A11  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546A16  33 C0                     XOR EAX,EAX
00546A18  5F                        POP EDI
00546A19  5E                        POP ESI
00546A1A  5B                        POP EBX
00546A1B  8B E5                     MOV ESP,EBP
00546A1D  5D                        POP EBP
00546A1E  C2 04 00                  RET 0x4
LAB_00546a21:
00546A21  3D FF A4 00 00            CMP EAX,0xa4ff
00546A26  0F 85 0E 12 00 00         JNZ 0x00547c3a
00546A2C  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546A32  C7 83 AE 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x4ae],0x1
00546A3C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546A41  33 C0                     XOR EAX,EAX
00546A43  5F                        POP EDI
00546A44  5E                        POP ESI
00546A45  5B                        POP EBX
00546A46  8B E5                     MOV ESP,EBP
00546A48  5D                        POP EBP
00546A49  C2 04 00                  RET 0x4
LAB_00546a4c:
00546A4C  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546A52  89 93 AE 04 00 00         MOV dword ptr [EBX + 0x4ae],EDX
00546A58  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546A5D  33 C0                     XOR EAX,EAX
00546A5F  5F                        POP EDI
00546A60  5E                        POP ESI
00546A61  5B                        POP EBX
00546A62  8B E5                     MOV ESP,EBP
00546A64  5D                        POP EBP
00546A65  C2 04 00                  RET 0x4
LAB_00546a68:
00546A68  8B C8                     MOV ECX,EAX
00546A6A  81 E9 01 A5 00 00         SUB ECX,0xa501
00546A70  74 5E                     JZ 0x00546ad0
00546A72  49                        DEC ECX
00546A73  0F 84 35 03 00 00         JZ 0x00546dae
00546A79  49                        DEC ECX
00546A7A  0F 85 BA 11 00 00         JNZ 0x00547c3a
00546A80  C7 83 A6 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x4a6],0x1
00546A8A  C6 83 DE 04 00 00 00      MOV byte ptr [EBX + 0x4de],0x0
00546A91  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00546A97  3B CA                     CMP ECX,EDX
00546A99  0F 84 9B 11 00 00         JZ 0x00547c3a
00546A9F  E8 F4 BC EB FF            CALL 0x00402798
00546AA4  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546AAA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546AAF  33 C0                     XOR EAX,EAX
00546AB1  5F                        POP EDI
00546AB2  5E                        POP ESI
00546AB3  5B                        POP EBX
00546AB4  8B E5                     MOV ESP,EBP
00546AB6  5D                        POP EBP
00546AB7  C2 04 00                  RET 0x4
LAB_00546aba:
00546ABA  8D 88 FB 5A FF FF         LEA ECX,[EAX + 0xffff5afb]
00546AC0  83 F9 06                  CMP ECX,0x6
00546AC3  0F 87 71 11 00 00         JA 0x00547c3a
switchD_00546ac9::switchD:
00546AC9  FF 24 8D E8 7D 54 00      JMP dword ptr [ECX*0x4 + 0x547de8]
switchD_00546ac9::caseD_a506:
00546AD0  6A 01                     PUSH 0x1
00546AD2  8B CB                     MOV ECX,EBX
00546AD4  E8 8E CF EB FF            CALL 0x00403a67
00546AD9  A1 84 87 80 00            MOV EAX,[0x00808784]
00546ADE  85 C0                     TEST EAX,EAX
00546AE0  0F 85 54 11 00 00         JNZ 0x00547c3a
00546AE6  A1 88 87 80 00            MOV EAX,[0x00808788]
00546AEB  85 C0                     TEST EAX,EAX
00546AED  75 16                     JNZ 0x00546b05
00546AEF  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00546AF4  85 C0                     TEST EAX,EAX
00546AF6  75 0D                     JNZ 0x00546b05
00546AF8  A1 90 87 80 00            MOV EAX,[0x00808790]
00546AFD  85 C0                     TEST EAX,EAX
00546AFF  75 04                     JNZ 0x00546b05
00546B01  33 C0                     XOR EAX,EAX
00546B03  EB 05                     JMP 0x00546b0a
LAB_00546b05:
00546B05  B8 01 00 00 00            MOV EAX,0x1
LAB_00546b0a:
00546B0A  85 C0                     TEST EAX,EAX
00546B0C  0F 85 28 11 00 00         JNZ 0x00547c3a
00546B12  A1 90 16 80 00            MOV EAX,[0x00801690]
00546B17  85 C0                     TEST EAX,EAX
00546B19  74 0D                     JZ 0x00546b28
00546B1B  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
00546B22  0F 85 12 11 00 00         JNZ 0x00547c3a
LAB_00546b28:
00546B28  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
00546B2E  8B 8B B2 04 00 00         MOV ECX,dword ptr [EBX + 0x4b2]
00546B34  3B C1                     CMP EAX,ECX
00546B36  0F 8C FE 10 00 00         JL 0x00547c3a
00546B3C  8B 93 BA 04 00 00         MOV EDX,dword ptr [EBX + 0x4ba]
00546B42  03 D1                     ADD EDX,ECX
00546B44  3B C2                     CMP EAX,EDX
00546B46  0F 8D EE 10 00 00         JGE 0x00547c3a
00546B4C  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00546B52  8B 8B B6 04 00 00         MOV ECX,dword ptr [EBX + 0x4b6]
00546B58  3B C1                     CMP EAX,ECX
00546B5A  0F 8C DA 10 00 00         JL 0x00547c3a
00546B60  8B 93 BE 04 00 00         MOV EDX,dword ptr [EBX + 0x4be]
00546B66  03 D1                     ADD EDX,ECX
00546B68  3B C2                     CMP EAX,EDX
00546B6A  0F 8D CA 10 00 00         JGE 0x00547c3a
00546B70  81 7F 10 01 A5 00 00      CMP dword ptr [EDI + 0x10],0xa501
00546B77  0F 84 8D 00 00 00         JZ 0x00546c0a
00546B7D  8B 83 A2 04 00 00         MOV EAX,dword ptr [EBX + 0x4a2]
00546B83  85 C0                     TEST EAX,EAX
00546B85  0F 85 AF 10 00 00         JNZ 0x00547c3a
00546B8B  8B 83 9A 04 00 00         MOV EAX,dword ptr [EBX + 0x49a]
00546B91  85 C0                     TEST EAX,EAX
00546B93  0F 85 A1 10 00 00         JNZ 0x00547c3a
00546B99  C6 83 DE 00 00 00 01      MOV byte ptr [EBX + 0xde],0x1
00546BA0  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
00546BA6  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
00546BAC  8D 8B F3 00 00 00         LEA ECX,[EBX + 0xf3]
00546BB2  2B C7                     SUB EAX,EDI
00546BB4  8D 93 EF 00 00 00         LEA EDX,[EBX + 0xef]
00546BBA  89 83 DF 00 00 00         MOV dword ptr [EBX + 0xdf],EAX
00546BC0  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00546BC6  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
00546BCC  51                        PUSH ECX
00546BCD  2B C6                     SUB EAX,ESI
00546BCF  52                        PUSH EDX
00546BD0  6A 00                     PUSH 0x0
00546BD2  89 83 E3 00 00 00         MOV dword ptr [EBX + 0xe3],EAX
00546BD8  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00546BDE  50                        PUSH EAX
00546BDF  8B 83 DF 00 00 00         MOV EAX,dword ptr [EBX + 0xdf]
00546BE5  50                        PUSH EAX
00546BE6  E8 35 B0 19 00            CALL 0x006e1c20
00546BEB  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00546BEE  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546BF4  89 8B 0F 01 00 00         MOV dword ptr [EBX + 0x10f],ECX
00546BFA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546BFF  33 C0                     XOR EAX,EAX
00546C01  5F                        POP EDI
00546C02  5E                        POP ESI
00546C03  5B                        POP EBX
00546C04  8B E5                     MOV ESP,EBP
00546C06  5D                        POP EBP
00546C07  C2 04 00                  RET 0x4
LAB_00546c0a:
00546C0A  8B CB                     MOV ECX,EBX
00546C0C  E8 EC BF EB FF            CALL 0x00402bfd
00546C11  85 C0                     TEST EAX,EAX
00546C13  74 71                     JZ 0x00546c86
00546C15  C6 83 DE 00 00 00 01      MOV byte ptr [EBX + 0xde],0x1
00546C1C  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
00546C22  8B BB B2 04 00 00         MOV EDI,dword ptr [EBX + 0x4b2]
00546C28  8D 8B F3 00 00 00         LEA ECX,[EBX + 0xf3]
00546C2E  2B D7                     SUB EDX,EDI
00546C30  51                        PUSH ECX
00546C31  89 93 DF 00 00 00         MOV dword ptr [EBX + 0xdf],EDX
00546C37  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00546C3D  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
00546C43  8D 93 EF 00 00 00         LEA EDX,[EBX + 0xef]
00546C49  2B C6                     SUB EAX,ESI
00546C4B  52                        PUSH EDX
00546C4C  6A 00                     PUSH 0x0
00546C4E  89 83 E3 00 00 00         MOV dword ptr [EBX + 0xe3],EAX
00546C54  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00546C5A  50                        PUSH EAX
00546C5B  8B 83 DF 00 00 00         MOV EAX,dword ptr [EBX + 0xdf]
00546C61  50                        PUSH EAX
00546C62  E8 B9 AF 19 00            CALL 0x006e1c20
00546C67  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00546C6A  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546C70  89 8B 0F 01 00 00         MOV dword ptr [EBX + 0x10f],ECX
00546C76  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546C7B  33 C0                     XOR EAX,EAX
00546C7D  5F                        POP EDI
00546C7E  5E                        POP ESI
00546C7F  5B                        POP EBX
00546C80  8B E5                     MOV ESP,EBP
00546C82  5D                        POP EBP
00546C83  C2 04 00                  RET 0x4
LAB_00546c86:
00546C86  83 BB A2 04 00 00 4E      CMP dword ptr [EBX + 0x4a2],0x4e
00546C8D  0F 85 A7 0F 00 00         JNZ 0x00547c3a
00546C93  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00546C99  85 C9                     TEST ECX,ECX
00546C9B  0F 84 99 0F 00 00         JZ 0x00547c3a
00546CA1  8B B3 B6 04 00 00         MOV ESI,dword ptr [EBX + 0x4b6]
00546CA7  8D BB 07 01 00 00         LEA EDI,[EBX + 0x107]
00546CAD  8D 83 03 01 00 00         LEA EAX,[EBX + 0x103]
00546CB3  8D 93 FF 00 00 00         LEA EDX,[EBX + 0xff]
00546CB9  57                        PUSH EDI
00546CBA  50                        PUSH EAX
00546CBB  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
00546CC1  52                        PUSH EDX
00546CC2  8B 93 C9 00 00 00         MOV EDX,dword ptr [EBX + 0xc9]
00546CC8  2B D6                     SUB EDX,ESI
00546CCA  8B B3 B2 04 00 00         MOV ESI,dword ptr [EBX + 0x4b2]
00546CD0  2B C6                     SUB EAX,ESI
00546CD2  52                        PUSH EDX
00546CD3  50                        PUSH EAX
00546CD4  E8 F7 B0 19 00            CALL 0x006e1dd0
00546CD9  85 C0                     TEST EAX,EAX
00546CDB  0F 84 59 0F 00 00         JZ 0x00547c3a
00546CE1  8B 83 0B 01 00 00         MOV EAX,dword ptr [EBX + 0x10b]
00546CE7  8D B3 0B 01 00 00         LEA ESI,[EBX + 0x10b]
00546CED  85 C0                     TEST EAX,EAX
00546CEF  C6 83 DE 00 00 00 05      MOV byte ptr [EBX + 0xde],0x5
00546CF6  7C 10                     JL 0x00546d08
00546CF8  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00546CFE  85 C9                     TEST ECX,ECX
00546D00  74 06                     JZ 0x00546d08
00546D02  50                        PUSH EAX
00546D03  E8 98 1E 1A 00            CALL 0x006e8ba0
LAB_00546d08:
00546D08  8B 0F                     MOV ECX,dword ptr [EDI]
00546D0A  8B 93 03 01 00 00         MOV EDX,dword ptr [EBX + 0x103]
00546D10  8B 83 FF 00 00 00         MOV EAX,dword ptr [EBX + 0xff]
00546D16  6A 01                     PUSH 0x1
00546D18  6A 01                     PUSH 0x1
00546D1A  6A 00                     PUSH 0x0
00546D1C  51                        PUSH ECX
00546D1D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00546D23  52                        PUSH EDX
00546D24  50                        PUSH EAX
00546D25  6A 45                     PUSH 0x45
00546D27  6A 02                     PUSH 0x2
00546D29  6A 08                     PUSH 0x8
00546D2B  68 D8 7C 7C 00            PUSH 0x7c7cd8
00546D30  56                        PUSH ESI
00546D31  E8 7A 1C 1A 00            CALL 0x006e89b0
00546D36  8B 0E                     MOV ECX,dword ptr [ESI]
00546D38  6A 00                     PUSH 0x0
00546D3A  51                        PUSH ECX
00546D3B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00546D41  E8 5A 3D 1A 00            CALL 0x006eaaa0
00546D46  8B 16                     MOV EDX,dword ptr [ESI]
00546D48  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00546D4E  6A FF                     PUSH -0x1
00546D50  52                        PUSH EDX
00546D51  E8 0A 37 1A 00            CALL 0x006ea460
00546D56  8B 83 A9 00 00 00         MOV EAX,dword ptr [EBX + 0xa9]
00546D5C  85 C0                     TEST EAX,EAX
00546D5E  74 2C                     JZ 0x00546d8c
00546D60  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
00546D63  83 F8 FF                  CMP EAX,-0x1
00546D66  0F 84 CE 0E 00 00         JZ 0x00547c3a
00546D6C  50                        PUSH EAX
00546D6D  8B 43 60                  MOV EAX,dword ptr [EBX + 0x60]
00546D70  50                        PUSH EAX
00546D71  E8 7A CD 16 00            CALL 0x006b3af0
00546D76  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546D7C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546D81  33 C0                     XOR EAX,EAX
00546D83  5F                        POP EDI
00546D84  5E                        POP ESI
00546D85  5B                        POP EBX
00546D86  8B E5                     MOV ESP,EBP
00546D88  5D                        POP EBP
00546D89  C2 04 00                  RET 0x4
LAB_00546d8c:
00546D8C  8B 8B AD 00 00 00         MOV ECX,dword ptr [EBX + 0xad]
00546D92  51                        PUSH ECX
00546D93  E8 78 1D 17 00            CALL 0x006b8b10
00546D98  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546D9E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546DA3  33 C0                     XOR EAX,EAX
00546DA5  5F                        POP EDI
00546DA6  5E                        POP ESI
00546DA7  5B                        POP EBX
00546DA8  8B E5                     MOV ESP,EBP
00546DAA  5D                        POP EBP
00546DAB  C2 04 00                  RET 0x4
switchD_00546ac9::caseD_a505:
00546DAE  8B 8B C5 00 00 00         MOV ECX,dword ptr [EBX + 0xc5]
00546DB4  8B 93 B2 04 00 00         MOV EDX,dword ptr [EBX + 0x4b2]
00546DBA  3B CA                     CMP ECX,EDX
00546DBC  0F 8C 45 02 00 00         JL 0x00547007
00546DC2  8B B3 BA 04 00 00         MOV ESI,dword ptr [EBX + 0x4ba]
00546DC8  03 F2                     ADD ESI,EDX
00546DCA  3B CE                     CMP ECX,ESI
00546DCC  0F 8D 35 02 00 00         JGE 0x00547007
00546DD2  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
00546DD8  8B 93 B6 04 00 00         MOV EDX,dword ptr [EBX + 0x4b6]
00546DDE  3B CA                     CMP ECX,EDX
00546DE0  0F 8C 21 02 00 00         JL 0x00547007
00546DE6  8B B3 BE 04 00 00         MOV ESI,dword ptr [EBX + 0x4be]
00546DEC  03 F2                     ADD ESI,EDX
00546DEE  3B CE                     CMP ECX,ESI
00546DF0  0F 8D 11 02 00 00         JGE 0x00547007
00546DF6  33 C9                     XOR ECX,ECX
00546DF8  8A 8B DE 00 00 00         MOV CL,byte ptr [EBX + 0xde]
00546DFE  83 F9 05                  CMP ECX,0x5
00546E01  0F 87 33 0E 00 00         JA 0x00547c3a
switchD_00546e07::switchD:
00546E07  FF 24 8D 04 7E 54 00      JMP dword ptr [ECX*0x4 + 0x547e04]
switchD_00546e07::caseD_1:
00546E0E  C6 83 DE 00 00 00 03      MOV byte ptr [EBX + 0xde],0x3
switchD_00546e07::caseD_0:
00546E15  81 7F 10 02 A5 00 00      CMP dword ptr [EDI + 0x10],0xa502
00546E1C  0F 85 18 0E 00 00         JNZ 0x00547c3a
00546E22  A1 84 87 80 00            MOV EAX,[0x00808784]
00546E27  85 C0                     TEST EAX,EAX
00546E29  0F 85 0B 0E 00 00         JNZ 0x00547c3a
00546E2F  A1 88 87 80 00            MOV EAX,[0x00808788]
00546E34  85 C0                     TEST EAX,EAX
00546E36  75 16                     JNZ 0x00546e4e
00546E38  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00546E3D  85 C0                     TEST EAX,EAX
00546E3F  75 0D                     JNZ 0x00546e4e
00546E41  A1 90 87 80 00            MOV EAX,[0x00808790]
00546E46  85 C0                     TEST EAX,EAX
00546E48  75 04                     JNZ 0x00546e4e
00546E4A  33 C0                     XOR EAX,EAX
00546E4C  EB 05                     JMP 0x00546e53
LAB_00546e4e:
00546E4E  B8 01 00 00 00            MOV EAX,0x1
LAB_00546e53:
00546E53  85 C0                     TEST EAX,EAX
00546E55  0F 85 DF 0D 00 00         JNZ 0x00547c3a
00546E5B  A1 90 16 80 00            MOV EAX,[0x00801690]
00546E60  85 C0                     TEST EAX,EAX
00546E62  74 0E                     JZ 0x00546e72
00546E64  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
00546E6C  0F 85 C8 0D 00 00         JNZ 0x00547c3a
LAB_00546e72:
00546E72  8B 83 A2 04 00 00         MOV EAX,dword ptr [EBX + 0x4a2]
00546E78  85 C0                     TEST EAX,EAX
00546E7A  75 0E                     JNZ 0x00546e8a
00546E7C  8A 83 DE 04 00 00         MOV AL,byte ptr [EBX + 0x4de]
00546E82  84 C0                     TEST AL,AL
00546E84  0F 84 B0 0D 00 00         JZ 0x00547c3a
LAB_00546e8a:
00546E8A  6A 00                     PUSH 0x0
00546E8C  8B CB                     MOV ECX,EBX
00546E8E  E8 8D BD EB FF            CALL 0x00402c20
00546E93  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546E99  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546E9E  33 C0                     XOR EAX,EAX
00546EA0  5F                        POP EDI
00546EA1  5E                        POP ESI
00546EA2  5B                        POP EBX
00546EA3  8B E5                     MOV ESP,EBP
00546EA5  5D                        POP EBP
00546EA6  C2 04 00                  RET 0x4
switchD_00546e07::caseD_2:
00546EA9  8B 0D 84 87 80 00         MOV ECX,dword ptr [0x00808784]
00546EAF  85 C9                     TEST ECX,ECX
00546EB1  0F 85 83 0D 00 00         JNZ 0x00547c3a
00546EB7  8B 0D 88 87 80 00         MOV ECX,dword ptr [0x00808788]
00546EBD  85 C9                     TEST ECX,ECX
00546EBF  75 18                     JNZ 0x00546ed9
00546EC1  8B 0D 8C 87 80 00         MOV ECX,dword ptr [0x0080878c]
00546EC7  85 C9                     TEST ECX,ECX
00546EC9  75 0E                     JNZ 0x00546ed9
00546ECB  8B 0D 90 87 80 00         MOV ECX,dword ptr [0x00808790]
00546ED1  85 C9                     TEST ECX,ECX
00546ED3  75 04                     JNZ 0x00546ed9
00546ED5  33 C9                     XOR ECX,ECX
00546ED7  EB 05                     JMP 0x00546ede
LAB_00546ed9:
00546ED9  B9 01 00 00 00            MOV ECX,0x1
LAB_00546ede:
00546EDE  85 C9                     TEST ECX,ECX
00546EE0  0F 85 54 0D 00 00         JNZ 0x00547c3a
00546EE6  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
00546EEC  85 C9                     TEST ECX,ECX
00546EEE  74 0E                     JZ 0x00546efe
00546EF0  66 83 B9 72 01 00 00 02   CMP word ptr [ECX + 0x172],0x2
00546EF8  0F 85 3C 0D 00 00         JNZ 0x00547c3a
LAB_00546efe:
00546EFE  3D 02 A5 00 00            CMP EAX,0xa502
00546F03  75 34                     JNZ 0x00546f39
00546F05  8B 83 A2 04 00 00         MOV EAX,dword ptr [EBX + 0x4a2]
00546F0B  85 C0                     TEST EAX,EAX
00546F0D  0F 84 27 0D 00 00         JZ 0x00547c3a
00546F13  6A 01                     PUSH 0x1
00546F15  8B CB                     MOV ECX,EBX
00546F17  E8 04 BD EB FF            CALL 0x00402c20
LAB_00546f1c:
00546F1C  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546F22  C6 83 DE 00 00 00 04      MOV byte ptr [EBX + 0xde],0x4
00546F29  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546F2E  33 C0                     XOR EAX,EAX
00546F30  5F                        POP EDI
00546F31  5E                        POP ESI
00546F32  5B                        POP EBX
00546F33  8B E5                     MOV ESP,EBP
00546F35  5D                        POP EBP
00546F36  C2 04 00                  RET 0x4
LAB_00546f39:
00546F39  8B 8B A2 04 00 00         MOV ECX,dword ptr [EBX + 0x4a2]
00546F3F  85 C9                     TEST ECX,ECX
00546F41  75 39                     JNZ 0x00546f7c
00546F43  8B 8B E7 00 00 00         MOV ECX,dword ptr [EBX + 0xe7]
00546F49  33 D2                     XOR EDX,EDX
00546F4B  3D 07 A5 00 00            CMP EAX,0xa507
00546F50  8B 83 EB 00 00 00         MOV EAX,dword ptr [EBX + 0xeb]
00546F56  0F 94 C2                  SETZ DL
00546F59  52                        PUSH EDX
00546F5A  8B 93 E3 00 00 00         MOV EDX,dword ptr [EBX + 0xe3]
00546F60  50                        PUSH EAX
00546F61  8B 83 DF 00 00 00         MOV EAX,dword ptr [EBX + 0xdf]
00546F67  51                        PUSH ECX
00546F68  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00546F6E  52                        PUSH EDX
00546F6F  50                        PUSH EAX
00546F70  51                        PUSH ECX
00546F71  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00546F77  E8 C4 DD EB FF            CALL 0x00404d40
LAB_00546f7c:
00546F7C  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00546F82  C6 83 DE 00 00 00 04      MOV byte ptr [EBX + 0xde],0x4
00546F89  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00546F8E  33 C0                     XOR EAX,EAX
00546F90  5F                        POP EDI
00546F91  5E                        POP ESI
00546F92  5B                        POP EBX
00546F93  8B E5                     MOV ESP,EBP
00546F95  5D                        POP EBP
00546F96  C2 04 00                  RET 0x4
switchD_00546e07::caseD_5:
00546F99  3D 02 A5 00 00            CMP EAX,0xa502
00546F9E  0F 85 96 0C 00 00         JNZ 0x00547c3a
00546FA4  8B 83 A9 00 00 00         MOV EAX,dword ptr [EBX + 0xa9]
00546FAA  85 C0                     TEST EAX,EAX
00546FAC  74 1E                     JZ 0x00546fcc
00546FAE  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
00546FB1  83 F8 FF                  CMP EAX,-0x1
00546FB4  74 22                     JZ 0x00546fd8
00546FB6  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
00546FB9  8B 4B 34                  MOV ECX,dword ptr [EBX + 0x34]
00546FBC  52                        PUSH EDX
00546FBD  8B 53 60                  MOV EDX,dword ptr [EBX + 0x60]
00546FC0  51                        PUSH ECX
00546FC1  6A FE                     PUSH -0x2
00546FC3  50                        PUSH EAX
00546FC4  52                        PUSH EDX
00546FC5  E8 06 C5 16 00            CALL 0x006b34d0
00546FCA  EB 0C                     JMP 0x00546fd8
LAB_00546fcc:
00546FCC  8B 83 AD 00 00 00         MOV EAX,dword ptr [EBX + 0xad]
00546FD2  50                        PUSH EAX
00546FD3  E8 88 1A 17 00            CALL 0x006b8a60
LAB_00546fd8:
00546FD8  8B 8B C9 00 00 00         MOV ECX,dword ptr [EBX + 0xc9]
00546FDE  8B 93 C5 00 00 00         MOV EDX,dword ptr [EBX + 0xc5]
00546FE4  51                        PUSH ECX
00546FE5  52                        PUSH EDX
00546FE6  8B CB                     MOV ECX,EBX
00546FE8  E8 31 B4 EB FF            CALL 0x0040241e
00546FED  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00546FF3  85 C9                     TEST ECX,ECX
00546FF5  0F 84 95 00 00 00         JZ 0x00547090
00546FFB  8B 83 0B 01 00 00         MOV EAX,dword ptr [EBX + 0x10b]
00547001  50                        PUSH EAX
00547002  E9 84 00 00 00            JMP 0x0054708b
LAB_00547007:
00547007  33 C9                     XOR ECX,ECX
00547009  8A 8B DE 00 00 00         MOV CL,byte ptr [EBX + 0xde]
0054700F  49                        DEC ECX
00547010  0F 84 B9 00 00 00         JZ 0x005470cf
00547016  49                        DEC ECX
00547017  0F 84 FF FE FF FF         JZ 0x00546f1c
0054701D  83 E9 03                  SUB ECX,0x3
00547020  0F 85 14 0C 00 00         JNZ 0x00547c3a
00547026  3D 02 A5 00 00            CMP EAX,0xa502
0054702B  0F 85 09 0C 00 00         JNZ 0x00547c3a
00547031  8B 83 A9 00 00 00         MOV EAX,dword ptr [EBX + 0xa9]
00547037  85 C0                     TEST EAX,EAX
00547039  74 1E                     JZ 0x00547059
0054703B  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0054703E  83 F8 FF                  CMP EAX,-0x1
00547041  74 22                     JZ 0x00547065
00547043  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
00547046  8B 53 34                  MOV EDX,dword ptr [EBX + 0x34]
00547049  51                        PUSH ECX
0054704A  52                        PUSH EDX
0054704B  6A FE                     PUSH -0x2
0054704D  50                        PUSH EAX
0054704E  8B 43 60                  MOV EAX,dword ptr [EBX + 0x60]
00547051  50                        PUSH EAX
00547052  E8 79 C4 16 00            CALL 0x006b34d0
00547057  EB 0C                     JMP 0x00547065
LAB_00547059:
00547059  8B 8B AD 00 00 00         MOV ECX,dword ptr [EBX + 0xad]
0054705F  51                        PUSH ECX
00547060  E8 FB 19 17 00            CALL 0x006b8a60
LAB_00547065:
00547065  8B 93 C9 00 00 00         MOV EDX,dword ptr [EBX + 0xc9]
0054706B  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
00547071  52                        PUSH EDX
00547072  50                        PUSH EAX
00547073  8B CB                     MOV ECX,EBX
00547075  E8 A4 B3 EB FF            CALL 0x0040241e
0054707A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00547080  85 C9                     TEST ECX,ECX
00547082  74 0C                     JZ 0x00547090
00547084  8B 93 0B 01 00 00         MOV EDX,dword ptr [EBX + 0x10b]
0054708A  52                        PUSH EDX
LAB_0054708b:
0054708B  E8 10 1B 1A 00            CALL 0x006e8ba0
LAB_00547090:
00547090  C6 83 DE 00 00 00 00      MOV byte ptr [EBX + 0xde],0x0
00547097  8B 83 A2 04 00 00         MOV EAX,dword ptr [EBX + 0x4a2]
0054709D  83 F8 4E                  CMP EAX,0x4e
005470A0  C7 83 0B 01 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x10b],0xffffffff
005470AA  0F 85 8A 0B 00 00         JNZ 0x00547c3a
005470B0  6A 01                     PUSH 0x1
LAB_005470b2:
005470B2  8B CB                     MOV ECX,EBX
005470B4  E8 67 BB EB FF            CALL 0x00402c20
005470B9  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005470BF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005470C4  33 C0                     XOR EAX,EAX
005470C6  5F                        POP EDI
005470C7  5E                        POP ESI
005470C8  5B                        POP EBX
005470C9  8B E5                     MOV ESP,EBP
005470CB  5D                        POP EBP
005470CC  C2 04 00                  RET 0x4
LAB_005470cf:
005470CF  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005470D5  C6 83 DE 00 00 00 03      MOV byte ptr [EBX + 0xde],0x3
005470DC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005470E1  33 C0                     XOR EAX,EAX
005470E3  5F                        POP EDI
005470E4  5E                        POP ESI
005470E5  5B                        POP EBX
005470E6  8B E5                     MOV ESP,EBP
005470E8  5D                        POP EBP
005470E9  C2 04 00                  RET 0x4
switchD_00546ac9::caseD_a508:
005470EC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005470F2  3B CA                     CMP ECX,EDX
005470F4  0F 84 40 0B 00 00         JZ 0x00547c3a
005470FA  6A FF                     PUSH -0x1
005470FC  6A FF                     PUSH -0x1
005470FE  6A 00                     PUSH 0x0
00547100  E8 8C BD EB FF            CALL 0x00402e91
00547105  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
0054710B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00547110  33 C0                     XOR EAX,EAX
00547112  5F                        POP EDI
00547113  5E                        POP ESI
00547114  5B                        POP EBX
00547115  8B E5                     MOV ESP,EBP
00547117  5D                        POP EBP
00547118  C2 04 00                  RET 0x4
switchD_00546ac9::caseD_a509:
0054711B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00547121  3B CA                     CMP ECX,EDX
00547123  0F 84 11 0B 00 00         JZ 0x00547c3a
00547129  6A FF                     PUSH -0x1
0054712B  6A FF                     PUSH -0x1
0054712D  56                        PUSH ESI
0054712E  E8 5E BD EB FF            CALL 0x00402e91
00547133  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547139  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054713E  33 C0                     XOR EAX,EAX
00547140  5F                        POP EDI
00547141  5E                        POP ESI
00547142  5B                        POP EBX
00547143  8B E5                     MOV ESP,EBP
00547145  5D                        POP EBP
00547146  C2 04 00                  RET 0x4
switchD_00546ac9::caseD_a50a:
00547149  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0054714F  3B CA                     CMP ECX,EDX
00547151  0F 84 E3 0A 00 00         JZ 0x00547c3a
00547157  6A FF                     PUSH -0x1
00547159  6A FF                     PUSH -0x1
0054715B  6A 01                     PUSH 0x1
0054715D  E8 2F BD EB FF            CALL 0x00402e91
00547162  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547168  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054716D  33 C0                     XOR EAX,EAX
0054716F  5F                        POP EDI
00547170  5E                        POP ESI
00547171  5B                        POP EBX
00547172  8B E5                     MOV ESP,EBP
00547174  5D                        POP EBP
00547175  C2 04 00                  RET 0x4
switchD_00546ac9::caseD_a50b:
00547178  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0054717E  3B CA                     CMP ECX,EDX
00547180  0F 84 B4 0A 00 00         JZ 0x00547c3a
00547186  6A FF                     PUSH -0x1
00547188  6A FF                     PUSH -0x1
0054718A  6A 03                     PUSH 0x3
0054718C  E8 00 BD EB FF            CALL 0x00402e91
00547191  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547197  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054719C  33 C0                     XOR EAX,EAX
0054719E  5F                        POP EDI
0054719F  5E                        POP ESI
005471A0  5B                        POP EBX
005471A1  8B E5                     MOV ESP,EBP
005471A3  5D                        POP EBP
005471A4  C2 04 00                  RET 0x4
LAB_005471a7:
005471A7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005471AD  3B CA                     CMP ECX,EDX
005471AF  0F 84 85 0A 00 00         JZ 0x00547c3a
005471B5  6A FF                     PUSH -0x1
005471B7  6A FF                     PUSH -0x1
005471B9  6A 05                     PUSH 0x5
005471BB  E8 D1 BC EB FF            CALL 0x00402e91
005471C0  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005471C6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005471CB  33 C0                     XOR EAX,EAX
005471CD  5F                        POP EDI
005471CE  5E                        POP ESI
005471CF  5B                        POP EBX
005471D0  8B E5                     MOV ESP,EBP
005471D2  5D                        POP EBP
005471D3  C2 04 00                  RET 0x4
LAB_005471d6:
005471D6  3D 08 A7 00 00            CMP EAX,0xa708
005471DB  0F 87 59 0A 00 00         JA 0x00547c3a
005471E1  3D FF A6 00 00            CMP EAX,0xa6ff
005471E6  0F 83 1F 0A 00 00         JNC 0x00547c0b
005471EC  05 F3 5A FF FF            ADD EAX,0xffff5af3
005471F1  83 F8 0D                  CMP EAX,0xd
005471F4  0F 87 40 0A 00 00         JA 0x00547c3a
switchD_005471fa::switchD:
005471FA  FF 24 85 1C 7E 54 00      JMP dword ptr [EAX*0x4 + 0x547e1c]
switchD_005471fa::caseD_d:
00547201  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00547207  3B CA                     CMP ECX,EDX
00547209  0F 84 2B 0A 00 00         JZ 0x00547c3a
0054720F  6A FF                     PUSH -0x1
00547211  6A FF                     PUSH -0x1
00547213  6A 04                     PUSH 0x4
00547215  E8 77 BC EB FF            CALL 0x00402e91
0054721A  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547220  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00547225  33 C0                     XOR EAX,EAX
00547227  5F                        POP EDI
00547228  5E                        POP ESI
00547229  5B                        POP EBX
0054722A  8B E5                     MOV ESP,EBP
0054722C  5D                        POP EBP
0054722D  C2 04 00                  RET 0x4
switchD_005471fa::caseD_0:
00547230  6A 01                     PUSH 0x1
00547232  8B CB                     MOV ECX,EBX
00547234  E8 2E C8 EB FF            CALL 0x00403a67
00547239  A1 84 87 80 00            MOV EAX,[0x00808784]
0054723E  85 C0                     TEST EAX,EAX
00547240  0F 85 F4 09 00 00         JNZ 0x00547c3a
00547246  A1 88 87 80 00            MOV EAX,[0x00808788]
0054724B  85 C0                     TEST EAX,EAX
0054724D  75 16                     JNZ 0x00547265
0054724F  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00547254  85 C0                     TEST EAX,EAX
00547256  75 0D                     JNZ 0x00547265
00547258  A1 90 87 80 00            MOV EAX,[0x00808790]
0054725D  85 C0                     TEST EAX,EAX
0054725F  75 04                     JNZ 0x00547265
00547261  33 C0                     XOR EAX,EAX
00547263  EB 05                     JMP 0x0054726a
LAB_00547265:
00547265  B8 01 00 00 00            MOV EAX,0x1
LAB_0054726a:
0054726A  85 C0                     TEST EAX,EAX
0054726C  0F 85 C8 09 00 00         JNZ 0x00547c3a
00547272  A1 90 16 80 00            MOV EAX,[0x00801690]
00547277  85 C0                     TEST EAX,EAX
00547279  74 0D                     JZ 0x00547288
0054727B  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
00547282  0F 85 B2 09 00 00         JNZ 0x00547c3a
LAB_00547288:
00547288  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
0054728E  8B 8B B2 04 00 00         MOV ECX,dword ptr [EBX + 0x4b2]
00547294  3B C1                     CMP EAX,ECX
00547296  0F 8C 9E 09 00 00         JL 0x00547c3a
0054729C  8B 93 BA 04 00 00         MOV EDX,dword ptr [EBX + 0x4ba]
005472A2  03 D1                     ADD EDX,ECX
005472A4  3B C2                     CMP EAX,EDX
005472A6  0F 8D 8E 09 00 00         JGE 0x00547c3a
005472AC  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
005472B2  8B 8B B6 04 00 00         MOV ECX,dword ptr [EBX + 0x4b6]
005472B8  3B C1                     CMP EAX,ECX
005472BA  0F 8C 7A 09 00 00         JL 0x00547c3a
005472C0  8B 93 BE 04 00 00         MOV EDX,dword ptr [EBX + 0x4be]
005472C6  03 D1                     ADD EDX,ECX
005472C8  3B C2                     CMP EAX,EDX
005472CA  0F 8D 6A 09 00 00         JGE 0x00547c3a
005472D0  8B 83 A2 04 00 00         MOV EAX,dword ptr [EBX + 0x4a2]
005472D6  85 C0                     TEST EAX,EAX
005472D8  0F 85 5C 09 00 00         JNZ 0x00547c3a
005472DE  8A 83 DE 00 00 00         MOV AL,byte ptr [EBX + 0xde]
005472E4  84 C0                     TEST AL,AL
005472E6  74 08                     JZ 0x005472f0
005472E8  3C 03                     CMP AL,0x3
005472EA  0F 85 4A 09 00 00         JNZ 0x00547c3a
LAB_005472f0:
005472F0  8B 83 9A 04 00 00         MOV EAX,dword ptr [EBX + 0x49a]
005472F6  85 C0                     TEST EAX,EAX
005472F8  0F 85 3C 09 00 00         JNZ 0x00547c3a
005472FE  6A 00                     PUSH 0x0
00547300  E9 AD FD FF FF            JMP 0x005470b2
switchD_005471fa::caseD_1:
00547305  6A 01                     PUSH 0x1
00547307  8B CB                     MOV ECX,EBX
00547309  E8 59 C7 EB FF            CALL 0x00403a67
0054730E  A1 84 87 80 00            MOV EAX,[0x00808784]
00547313  85 C0                     TEST EAX,EAX
00547315  0F 85 1F 09 00 00         JNZ 0x00547c3a
0054731B  A1 88 87 80 00            MOV EAX,[0x00808788]
00547320  85 C0                     TEST EAX,EAX
00547322  75 16                     JNZ 0x0054733a
00547324  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00547329  85 C0                     TEST EAX,EAX
0054732B  75 0D                     JNZ 0x0054733a
0054732D  A1 90 87 80 00            MOV EAX,[0x00808790]
00547332  85 C0                     TEST EAX,EAX
00547334  75 04                     JNZ 0x0054733a
00547336  33 C0                     XOR EAX,EAX
00547338  EB 05                     JMP 0x0054733f
LAB_0054733a:
0054733A  B8 01 00 00 00            MOV EAX,0x1
LAB_0054733f:
0054733F  85 C0                     TEST EAX,EAX
00547341  0F 85 F3 08 00 00         JNZ 0x00547c3a
00547347  A1 90 16 80 00            MOV EAX,[0x00801690]
0054734C  85 C0                     TEST EAX,EAX
0054734E  74 0D                     JZ 0x0054735d
00547350  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
00547357  0F 85 DD 08 00 00         JNZ 0x00547c3a
LAB_0054735d:
0054735D  8B B3 C5 00 00 00         MOV ESI,dword ptr [EBX + 0xc5]
00547363  8B 93 B2 04 00 00         MOV EDX,dword ptr [EBX + 0x4b2]
00547369  3B F2                     CMP ESI,EDX
0054736B  0F 8C C9 08 00 00         JL 0x00547c3a
00547371  8B 83 BA 04 00 00         MOV EAX,dword ptr [EBX + 0x4ba]
00547377  03 C2                     ADD EAX,EDX
00547379  3B F0                     CMP ESI,EAX
0054737B  0F 8D B9 08 00 00         JGE 0x00547c3a
00547381  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00547387  8B BB B6 04 00 00         MOV EDI,dword ptr [EBX + 0x4b6]
0054738D  3B C7                     CMP EAX,EDI
0054738F  0F 8C A5 08 00 00         JL 0x00547c3a
00547395  8B 8B BE 04 00 00         MOV ECX,dword ptr [EBX + 0x4be]
0054739B  03 CF                     ADD ECX,EDI
0054739D  3B C1                     CMP EAX,ECX
0054739F  0F 8D 95 08 00 00         JGE 0x00547c3a
005473A5  8B 8B A2 04 00 00         MOV ECX,dword ptr [EBX + 0x4a2]
005473AB  85 C9                     TEST ECX,ECX
005473AD  0F 85 87 08 00 00         JNZ 0x00547c3a
005473B3  8A 8B DE 00 00 00         MOV CL,byte ptr [EBX + 0xde]
005473B9  84 C9                     TEST CL,CL
005473BB  74 09                     JZ 0x005473c6
005473BD  80 F9 03                  CMP CL,0x3
005473C0  0F 85 74 08 00 00         JNZ 0x00547c3a
LAB_005473c6:
005473C6  8B 8B 9A 04 00 00         MOV ECX,dword ptr [EBX + 0x49a]
005473CC  85 C9                     TEST ECX,ECX
005473CE  0F 85 66 08 00 00         JNZ 0x00547c3a
005473D4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005473DA  85 C9                     TEST ECX,ECX
005473DC  0F 84 58 08 00 00         JZ 0x00547c3a
005473E2  2B C7                     SUB EAX,EDI
005473E4  6A 00                     PUSH 0x0
005473E6  2B F2                     SUB ESI,EDX
005473E8  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005473EE  50                        PUSH EAX
005473EF  56                        PUSH ESI
005473F0  52                        PUSH EDX
005473F1  E8 51 D2 EB FF            CALL 0x00404647
005473F6  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005473FC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00547401  33 C0                     XOR EAX,EAX
00547403  5F                        POP EDI
00547404  5E                        POP ESI
00547405  5B                        POP EBX
00547406  8B E5                     MOV ESP,EBP
00547408  5D                        POP EBP
00547409  C2 04 00                  RET 0x4
switchD_005471fa::caseD_2:
0054740C  6A 01                     PUSH 0x1
0054740E  8B CB                     MOV ECX,EBX
00547410  E8 52 C6 EB FF            CALL 0x00403a67
00547415  A1 84 87 80 00            MOV EAX,[0x00808784]
0054741A  85 C0                     TEST EAX,EAX
0054741C  0F 85 18 08 00 00         JNZ 0x00547c3a
00547422  A1 88 87 80 00            MOV EAX,[0x00808788]
00547427  85 C0                     TEST EAX,EAX
00547429  75 16                     JNZ 0x00547441
0054742B  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00547430  85 C0                     TEST EAX,EAX
00547432  75 0D                     JNZ 0x00547441
00547434  A1 90 87 80 00            MOV EAX,[0x00808790]
00547439  85 C0                     TEST EAX,EAX
0054743B  75 04                     JNZ 0x00547441
0054743D  33 C0                     XOR EAX,EAX
0054743F  EB 05                     JMP 0x00547446
LAB_00547441:
00547441  B8 01 00 00 00            MOV EAX,0x1
LAB_00547446:
00547446  85 C0                     TEST EAX,EAX
00547448  0F 85 EC 07 00 00         JNZ 0x00547c3a
0054744E  A1 90 16 80 00            MOV EAX,[0x00801690]
00547453  85 C0                     TEST EAX,EAX
00547455  74 0D                     JZ 0x00547464
00547457  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
0054745E  0F 85 D6 07 00 00         JNZ 0x00547c3a
LAB_00547464:
00547464  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
0054746A  8B 8B B2 04 00 00         MOV ECX,dword ptr [EBX + 0x4b2]
00547470  3B C1                     CMP EAX,ECX
00547472  0F 8C C2 07 00 00         JL 0x00547c3a
00547478  8B 93 BA 04 00 00         MOV EDX,dword ptr [EBX + 0x4ba]
0054747E  03 D1                     ADD EDX,ECX
00547480  3B C2                     CMP EAX,EDX
00547482  0F 8D B2 07 00 00         JGE 0x00547c3a
00547488  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
0054748E  8B 8B B6 04 00 00         MOV ECX,dword ptr [EBX + 0x4b6]
00547494  3B C1                     CMP EAX,ECX
00547496  0F 8C 9E 07 00 00         JL 0x00547c3a
0054749C  8B 93 BE 04 00 00         MOV EDX,dword ptr [EBX + 0x4be]
005474A2  03 D1                     ADD EDX,ECX
005474A4  3B C2                     CMP EAX,EDX
005474A6  0F 8D 8E 07 00 00         JGE 0x00547c3a
005474AC  8B 83 A2 04 00 00         MOV EAX,dword ptr [EBX + 0x4a2]
005474B2  85 C0                     TEST EAX,EAX
005474B4  0F 85 80 07 00 00         JNZ 0x00547c3a
005474BA  8A 83 DE 00 00 00         MOV AL,byte ptr [EBX + 0xde]
005474C0  84 C0                     TEST AL,AL
005474C2  74 08                     JZ 0x005474cc
005474C4  3C 03                     CMP AL,0x3
005474C6  0F 85 6E 07 00 00         JNZ 0x00547c3a
LAB_005474cc:
005474CC  8B 83 9A 04 00 00         MOV EAX,dword ptr [EBX + 0x49a]
005474D2  85 C0                     TEST EAX,EAX
005474D4  0F 84 60 07 00 00         JZ 0x00547c3a
005474DA  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
005474DD  33 C9                     XOR ECX,ECX
005474DF  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
005474E5  3B D1                     CMP EDX,ECX
005474E7  0F 85 4D 07 00 00         JNZ 0x00547c3a
005474ED  6A 00                     PUSH 0x0
005474EF  E9 BE FB FF FF            JMP 0x005470b2
switchD_005471fa::caseD_3:
005474F4  6A 01                     PUSH 0x1
005474F6  8B CB                     MOV ECX,EBX
005474F8  E8 6A C5 EB FF            CALL 0x00403a67
005474FD  A1 84 87 80 00            MOV EAX,[0x00808784]
00547502  85 C0                     TEST EAX,EAX
00547504  0F 85 30 07 00 00         JNZ 0x00547c3a
0054750A  A1 88 87 80 00            MOV EAX,[0x00808788]
0054750F  85 C0                     TEST EAX,EAX
00547511  75 16                     JNZ 0x00547529
00547513  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00547518  85 C0                     TEST EAX,EAX
0054751A  75 0D                     JNZ 0x00547529
0054751C  A1 90 87 80 00            MOV EAX,[0x00808790]
00547521  85 C0                     TEST EAX,EAX
00547523  75 04                     JNZ 0x00547529
00547525  33 C0                     XOR EAX,EAX
00547527  EB 05                     JMP 0x0054752e
LAB_00547529:
00547529  B8 01 00 00 00            MOV EAX,0x1
LAB_0054752e:
0054752E  85 C0                     TEST EAX,EAX
00547530  0F 85 04 07 00 00         JNZ 0x00547c3a
00547536  A1 90 16 80 00            MOV EAX,[0x00801690]
0054753B  85 C0                     TEST EAX,EAX
0054753D  74 0D                     JZ 0x0054754c
0054753F  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
00547546  0F 85 EE 06 00 00         JNZ 0x00547c3a
LAB_0054754c:
0054754C  8B B3 C5 00 00 00         MOV ESI,dword ptr [EBX + 0xc5]
00547552  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
00547558  3B F0                     CMP ESI,EAX
0054755A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0054755D  0F 8C D7 06 00 00         JL 0x00547c3a
00547563  8B 93 BA 04 00 00         MOV EDX,dword ptr [EBX + 0x4ba]
00547569  03 D0                     ADD EDX,EAX
0054756B  3B F2                     CMP ESI,EDX
0054756D  0F 8D C7 06 00 00         JGE 0x00547c3a
00547573  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00547579  8B BB B6 04 00 00         MOV EDI,dword ptr [EBX + 0x4b6]
0054757F  3B C7                     CMP EAX,EDI
00547581  0F 8C B3 06 00 00         JL 0x00547c3a
00547587  8B 8B BE 04 00 00         MOV ECX,dword ptr [EBX + 0x4be]
0054758D  03 CF                     ADD ECX,EDI
0054758F  3B C1                     CMP EAX,ECX
00547591  0F 8D A3 06 00 00         JGE 0x00547c3a
00547597  8B 8B A2 04 00 00         MOV ECX,dword ptr [EBX + 0x4a2]
0054759D  85 C9                     TEST ECX,ECX
0054759F  0F 85 95 06 00 00         JNZ 0x00547c3a
005475A5  8A 8B DE 00 00 00         MOV CL,byte ptr [EBX + 0xde]
005475AB  84 C9                     TEST CL,CL
005475AD  74 09                     JZ 0x005475b8
005475AF  80 F9 03                  CMP CL,0x3
005475B2  0F 85 82 06 00 00         JNZ 0x00547c3a
LAB_005475b8:
005475B8  8B 8B 9A 04 00 00         MOV ECX,dword ptr [EBX + 0x49a]
005475BE  85 C9                     TEST ECX,ECX
005475C0  0F 84 74 06 00 00         JZ 0x00547c3a
005475C6  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
005475CC  33 D2                     XOR EDX,EDX
005475CE  8A D3                     MOV DL,BL
005475D0  39 51 24                  CMP dword ptr [ECX + 0x24],EDX
005475D3  0F 85 61 06 00 00         JNZ 0x00547c3a
005475D9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005475DF  85 C9                     TEST ECX,ECX
005475E1  0F 84 53 06 00 00         JZ 0x00547c3a
005475E7  2B C7                     SUB EAX,EDI
005475E9  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005475EC  6A 00                     PUSH 0x0
005475EE  2B F7                     SUB ESI,EDI
005475F0  50                        PUSH EAX
005475F1  56                        PUSH ESI
005475F2  53                        PUSH EBX
005475F3  E8 4F D0 EB FF            CALL 0x00404647
005475F8  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005475FE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00547603  33 C0                     XOR EAX,EAX
00547605  5F                        POP EDI
00547606  5E                        POP ESI
00547607  5B                        POP EBX
00547608  8B E5                     MOV ESP,EBP
0054760A  5D                        POP EBP
0054760B  C2 04 00                  RET 0x4
switchD_005471fa::caseD_4:
0054760E  6A 01                     PUSH 0x1
00547610  8B CB                     MOV ECX,EBX
00547612  E8 50 C4 EB FF            CALL 0x00403a67
00547617  A1 84 87 80 00            MOV EAX,[0x00808784]
0054761C  85 C0                     TEST EAX,EAX
0054761E  0F 85 16 06 00 00         JNZ 0x00547c3a
00547624  A1 88 87 80 00            MOV EAX,[0x00808788]
00547629  85 C0                     TEST EAX,EAX
0054762B  75 16                     JNZ 0x00547643
0054762D  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00547632  85 C0                     TEST EAX,EAX
00547634  75 0D                     JNZ 0x00547643
00547636  A1 90 87 80 00            MOV EAX,[0x00808790]
0054763B  85 C0                     TEST EAX,EAX
0054763D  75 04                     JNZ 0x00547643
0054763F  33 C0                     XOR EAX,EAX
00547641  EB 05                     JMP 0x00547648
LAB_00547643:
00547643  B8 01 00 00 00            MOV EAX,0x1
LAB_00547648:
00547648  85 C0                     TEST EAX,EAX
0054764A  0F 85 EA 05 00 00         JNZ 0x00547c3a
00547650  A1 90 16 80 00            MOV EAX,[0x00801690]
00547655  85 C0                     TEST EAX,EAX
00547657  74 0D                     JZ 0x00547666
00547659  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
00547660  0F 85 D4 05 00 00         JNZ 0x00547c3a
LAB_00547666:
00547666  8B B3 C5 00 00 00         MOV ESI,dword ptr [EBX + 0xc5]
0054766C  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
00547672  3B F0                     CMP ESI,EAX
00547674  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00547677  0F 8C BD 05 00 00         JL 0x00547c3a
0054767D  8B 8B BA 04 00 00         MOV ECX,dword ptr [EBX + 0x4ba]
00547683  03 C8                     ADD ECX,EAX
00547685  3B F1                     CMP ESI,ECX
00547687  0F 8D AD 05 00 00         JGE 0x00547c3a
0054768D  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00547693  8B BB B6 04 00 00         MOV EDI,dword ptr [EBX + 0x4b6]
00547699  3B C7                     CMP EAX,EDI
0054769B  0F 8C 99 05 00 00         JL 0x00547c3a
005476A1  8B 93 BE 04 00 00         MOV EDX,dword ptr [EBX + 0x4be]
005476A7  03 D7                     ADD EDX,EDI
005476A9  3B C2                     CMP EAX,EDX
005476AB  0F 8D 89 05 00 00         JGE 0x00547c3a
005476B1  8B 8B A2 04 00 00         MOV ECX,dword ptr [EBX + 0x4a2]
005476B7  85 C9                     TEST ECX,ECX
005476B9  0F 85 7B 05 00 00         JNZ 0x00547c3a
005476BF  8A 8B DE 00 00 00         MOV CL,byte ptr [EBX + 0xde]
005476C5  84 C9                     TEST CL,CL
005476C7  74 09                     JZ 0x005476d2
005476C9  80 F9 03                  CMP CL,0x3
005476CC  0F 85 68 05 00 00         JNZ 0x00547c3a
LAB_005476d2:
005476D2  8B 8B 9A 04 00 00         MOV ECX,dword ptr [EBX + 0x49a]
005476D8  85 C9                     TEST ECX,ECX
005476DA  0F 84 5A 05 00 00         JZ 0x00547c3a
005476E0  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
005476E6  33 D2                     XOR EDX,EDX
005476E8  8A D3                     MOV DL,BL
005476EA  39 51 24                  CMP dword ptr [ECX + 0x24],EDX
005476ED  0F 85 47 05 00 00         JNZ 0x00547c3a
005476F3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005476F9  85 C9                     TEST ECX,ECX
005476FB  0F 84 39 05 00 00         JZ 0x00547c3a
00547701  2B C7                     SUB EAX,EDI
00547703  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00547706  6A 01                     PUSH 0x1
00547708  2B F7                     SUB ESI,EDI
0054770A  50                        PUSH EAX
0054770B  56                        PUSH ESI
0054770C  53                        PUSH EBX
0054770D  E8 35 CF EB FF            CALL 0x00404647
00547712  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547718  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054771D  33 C0                     XOR EAX,EAX
0054771F  5F                        POP EDI
00547720  5E                        POP ESI
00547721  5B                        POP EBX
00547722  8B E5                     MOV ESP,EBP
00547724  5D                        POP EBP
00547725  C2 04 00                  RET 0x4
switchD_005471fa::caseD_5:
00547728  6A 01                     PUSH 0x1
0054772A  8B CB                     MOV ECX,EBX
0054772C  E8 36 C3 EB FF            CALL 0x00403a67
00547731  A1 84 87 80 00            MOV EAX,[0x00808784]
00547736  85 C0                     TEST EAX,EAX
00547738  0F 85 FC 04 00 00         JNZ 0x00547c3a
0054773E  A1 88 87 80 00            MOV EAX,[0x00808788]
00547743  85 C0                     TEST EAX,EAX
00547745  75 16                     JNZ 0x0054775d
00547747  A1 8C 87 80 00            MOV EAX,[0x0080878c]
0054774C  85 C0                     TEST EAX,EAX
0054774E  75 0D                     JNZ 0x0054775d
00547750  A1 90 87 80 00            MOV EAX,[0x00808790]
00547755  85 C0                     TEST EAX,EAX
00547757  75 04                     JNZ 0x0054775d
00547759  33 C0                     XOR EAX,EAX
0054775B  EB 05                     JMP 0x00547762
LAB_0054775d:
0054775D  B8 01 00 00 00            MOV EAX,0x1
LAB_00547762:
00547762  85 C0                     TEST EAX,EAX
00547764  0F 85 D0 04 00 00         JNZ 0x00547c3a
0054776A  A1 90 16 80 00            MOV EAX,[0x00801690]
0054776F  85 C0                     TEST EAX,EAX
00547771  74 0D                     JZ 0x00547780
00547773  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
0054777A  0F 85 BA 04 00 00         JNZ 0x00547c3a
LAB_00547780:
00547780  8B B3 C5 00 00 00         MOV ESI,dword ptr [EBX + 0xc5]
00547786  8B 93 B2 04 00 00         MOV EDX,dword ptr [EBX + 0x4b2]
0054778C  3B F2                     CMP ESI,EDX
0054778E  0F 8C A6 04 00 00         JL 0x00547c3a
00547794  8B 83 BA 04 00 00         MOV EAX,dword ptr [EBX + 0x4ba]
0054779A  03 C2                     ADD EAX,EDX
0054779C  3B F0                     CMP ESI,EAX
0054779E  0F 8D 96 04 00 00         JGE 0x00547c3a
005477A4  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
005477AA  8B BB B6 04 00 00         MOV EDI,dword ptr [EBX + 0x4b6]
005477B0  3B C7                     CMP EAX,EDI
005477B2  0F 8C 82 04 00 00         JL 0x00547c3a
005477B8  8B 8B BE 04 00 00         MOV ECX,dword ptr [EBX + 0x4be]
005477BE  03 CF                     ADD ECX,EDI
005477C0  3B C1                     CMP EAX,ECX
005477C2  0F 8D 72 04 00 00         JGE 0x00547c3a
005477C8  8B 8B A2 04 00 00         MOV ECX,dword ptr [EBX + 0x4a2]
005477CE  85 C9                     TEST ECX,ECX
005477D0  0F 85 64 04 00 00         JNZ 0x00547c3a
005477D6  8A 8B DE 00 00 00         MOV CL,byte ptr [EBX + 0xde]
005477DC  84 C9                     TEST CL,CL
005477DE  74 09                     JZ 0x005477e9
005477E0  80 F9 03                  CMP CL,0x3
005477E3  0F 85 51 04 00 00         JNZ 0x00547c3a
LAB_005477e9:
005477E9  8B 9B 9A 04 00 00         MOV EBX,dword ptr [EBX + 0x49a]
005477EF  85 DB                     TEST EBX,EBX
005477F1  0F 84 43 04 00 00         JZ 0x00547c3a
005477F7  33 C9                     XOR ECX,ECX
005477F9  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
005477FF  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
00547802  0F 85 32 04 00 00         JNZ 0x00547c3a
00547808  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0054780E  85 C9                     TEST ECX,ECX
00547810  0F 84 24 04 00 00         JZ 0x00547c3a
00547816  2B C7                     SUB EAX,EDI
00547818  2B F2                     SUB ESI,EDX
0054781A  50                        PUSH EAX
0054781B  56                        PUSH ESI
0054781C  6A 07                     PUSH 0x7
0054781E  E8 6E B6 EB FF            CALL 0x00402e91
00547823  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547829  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054782E  33 C0                     XOR EAX,EAX
00547830  5F                        POP EDI
00547831  5E                        POP ESI
00547832  5B                        POP EBX
00547833  8B E5                     MOV ESP,EBP
00547835  5D                        POP EBP
00547836  C2 04 00                  RET 0x4
switchD_005471fa::caseD_6:
00547839  6A 01                     PUSH 0x1
0054783B  8B CB                     MOV ECX,EBX
0054783D  E8 25 C2 EB FF            CALL 0x00403a67
00547842  A1 84 87 80 00            MOV EAX,[0x00808784]
00547847  85 C0                     TEST EAX,EAX
00547849  0F 85 EB 03 00 00         JNZ 0x00547c3a
0054784F  A1 88 87 80 00            MOV EAX,[0x00808788]
00547854  85 C0                     TEST EAX,EAX
00547856  75 16                     JNZ 0x0054786e
00547858  A1 8C 87 80 00            MOV EAX,[0x0080878c]
0054785D  85 C0                     TEST EAX,EAX
0054785F  75 0D                     JNZ 0x0054786e
00547861  A1 90 87 80 00            MOV EAX,[0x00808790]
00547866  85 C0                     TEST EAX,EAX
00547868  75 04                     JNZ 0x0054786e
0054786A  33 C0                     XOR EAX,EAX
0054786C  EB 05                     JMP 0x00547873
LAB_0054786e:
0054786E  B8 01 00 00 00            MOV EAX,0x1
LAB_00547873:
00547873  85 C0                     TEST EAX,EAX
00547875  0F 85 BF 03 00 00         JNZ 0x00547c3a
0054787B  A1 90 16 80 00            MOV EAX,[0x00801690]
00547880  85 C0                     TEST EAX,EAX
00547882  74 0D                     JZ 0x00547891
00547884  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
0054788B  0F 85 A9 03 00 00         JNZ 0x00547c3a
LAB_00547891:
00547891  8B B3 C5 00 00 00         MOV ESI,dword ptr [EBX + 0xc5]
00547897  8B 93 B2 04 00 00         MOV EDX,dword ptr [EBX + 0x4b2]
0054789D  3B F2                     CMP ESI,EDX
0054789F  0F 8C 95 03 00 00         JL 0x00547c3a
005478A5  8B 83 BA 04 00 00         MOV EAX,dword ptr [EBX + 0x4ba]
005478AB  03 C2                     ADD EAX,EDX
005478AD  3B F0                     CMP ESI,EAX
005478AF  0F 8D 85 03 00 00         JGE 0x00547c3a
005478B5  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
005478BB  8B BB B6 04 00 00         MOV EDI,dword ptr [EBX + 0x4b6]
005478C1  3B C7                     CMP EAX,EDI
005478C3  0F 8C 71 03 00 00         JL 0x00547c3a
005478C9  8B 8B BE 04 00 00         MOV ECX,dword ptr [EBX + 0x4be]
005478CF  03 CF                     ADD ECX,EDI
005478D1  3B C1                     CMP EAX,ECX
005478D3  0F 8D 61 03 00 00         JGE 0x00547c3a
005478D9  8B 8B A2 04 00 00         MOV ECX,dword ptr [EBX + 0x4a2]
005478DF  85 C9                     TEST ECX,ECX
005478E1  0F 85 53 03 00 00         JNZ 0x00547c3a
005478E7  8A 8B DE 00 00 00         MOV CL,byte ptr [EBX + 0xde]
005478ED  84 C9                     TEST CL,CL
005478EF  74 09                     JZ 0x005478fa
005478F1  80 F9 03                  CMP CL,0x3
005478F4  0F 85 40 03 00 00         JNZ 0x00547c3a
LAB_005478fa:
005478FA  8B 9B 9A 04 00 00         MOV EBX,dword ptr [EBX + 0x49a]
00547900  85 DB                     TEST EBX,EBX
00547902  0F 84 32 03 00 00         JZ 0x00547c3a
00547908  33 C9                     XOR ECX,ECX
0054790A  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00547910  39 4B 24                  CMP dword ptr [EBX + 0x24],ECX
00547913  0F 85 21 03 00 00         JNZ 0x00547c3a
00547919  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0054791F  85 C9                     TEST ECX,ECX
00547921  0F 84 13 03 00 00         JZ 0x00547c3a
00547927  2B C7                     SUB EAX,EDI
00547929  2B F2                     SUB ESI,EDX
0054792B  50                        PUSH EAX
0054792C  56                        PUSH ESI
0054792D  6A 06                     PUSH 0x6
0054792F  E8 5D B5 EB FF            CALL 0x00402e91
00547934  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
0054793A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054793F  33 C0                     XOR EAX,EAX
00547941  5F                        POP EDI
00547942  5E                        POP ESI
00547943  5B                        POP EBX
00547944  8B E5                     MOV ESP,EBP
00547946  5D                        POP EBP
00547947  C2 04 00                  RET 0x4
switchD_005471fa::caseD_7:
0054794A  6A 01                     PUSH 0x1
0054794C  8B CB                     MOV ECX,EBX
0054794E  E8 14 C1 EB FF            CALL 0x00403a67
00547953  A1 84 87 80 00            MOV EAX,[0x00808784]
00547958  85 C0                     TEST EAX,EAX
0054795A  0F 85 DA 02 00 00         JNZ 0x00547c3a
00547960  A1 88 87 80 00            MOV EAX,[0x00808788]
00547965  85 C0                     TEST EAX,EAX
00547967  75 16                     JNZ 0x0054797f
00547969  A1 8C 87 80 00            MOV EAX,[0x0080878c]
0054796E  85 C0                     TEST EAX,EAX
00547970  75 0D                     JNZ 0x0054797f
00547972  A1 90 87 80 00            MOV EAX,[0x00808790]
00547977  85 C0                     TEST EAX,EAX
00547979  75 04                     JNZ 0x0054797f
0054797B  33 C0                     XOR EAX,EAX
0054797D  EB 05                     JMP 0x00547984
LAB_0054797f:
0054797F  B8 01 00 00 00            MOV EAX,0x1
LAB_00547984:
00547984  85 C0                     TEST EAX,EAX
00547986  0F 85 AE 02 00 00         JNZ 0x00547c3a
0054798C  A1 90 16 80 00            MOV EAX,[0x00801690]
00547991  85 C0                     TEST EAX,EAX
00547993  74 0D                     JZ 0x005479a2
00547995  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
0054799C  0F 85 98 02 00 00         JNZ 0x00547c3a
LAB_005479a2:
005479A2  8B 83 C5 00 00 00         MOV EAX,dword ptr [EBX + 0xc5]
005479A8  8B 8B B2 04 00 00         MOV ECX,dword ptr [EBX + 0x4b2]
005479AE  3B C1                     CMP EAX,ECX
005479B0  0F 8C 84 02 00 00         JL 0x00547c3a
005479B6  8B 93 BA 04 00 00         MOV EDX,dword ptr [EBX + 0x4ba]
005479BC  03 D1                     ADD EDX,ECX
005479BE  3B C2                     CMP EAX,EDX
005479C0  0F 8D 74 02 00 00         JGE 0x00547c3a
005479C6  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
005479CC  8B 8B B6 04 00 00         MOV ECX,dword ptr [EBX + 0x4b6]
005479D2  3B C1                     CMP EAX,ECX
005479D4  0F 8C 60 02 00 00         JL 0x00547c3a
005479DA  8B 93 BE 04 00 00         MOV EDX,dword ptr [EBX + 0x4be]
005479E0  03 D1                     ADD EDX,ECX
005479E2  3B C2                     CMP EAX,EDX
005479E4  0F 8D 50 02 00 00         JGE 0x00547c3a
005479EA  8B 83 A2 04 00 00         MOV EAX,dword ptr [EBX + 0x4a2]
005479F0  85 C0                     TEST EAX,EAX
005479F2  0F 85 42 02 00 00         JNZ 0x00547c3a
005479F8  8A 83 DE 00 00 00         MOV AL,byte ptr [EBX + 0xde]
005479FE  84 C0                     TEST AL,AL
00547A00  74 08                     JZ 0x00547a0a
00547A02  3C 03                     CMP AL,0x3
00547A04  0F 85 30 02 00 00         JNZ 0x00547c3a
LAB_00547a0a:
00547A0A  8B 83 9A 04 00 00         MOV EAX,dword ptr [EBX + 0x49a]
00547A10  85 C0                     TEST EAX,EAX
00547A12  0F 84 22 02 00 00         JZ 0x00547c3a
00547A18  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
00547A1B  33 C9                     XOR ECX,ECX
00547A1D  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00547A23  3B D1                     CMP EDX,ECX
00547A25  0F 84 0F 02 00 00         JZ 0x00547c3a
00547A2B  6A 00                     PUSH 0x0
00547A2D  E9 80 F6 FF FF            JMP 0x005470b2
switchD_005471fa::caseD_8:
00547A32  6A 01                     PUSH 0x1
00547A34  8B CB                     MOV ECX,EBX
00547A36  E8 2C C0 EB FF            CALL 0x00403a67
00547A3B  A1 84 87 80 00            MOV EAX,[0x00808784]
00547A40  85 C0                     TEST EAX,EAX
00547A42  0F 85 F2 01 00 00         JNZ 0x00547c3a
00547A48  A1 88 87 80 00            MOV EAX,[0x00808788]
00547A4D  85 C0                     TEST EAX,EAX
00547A4F  75 16                     JNZ 0x00547a67
00547A51  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00547A56  85 C0                     TEST EAX,EAX
00547A58  75 0D                     JNZ 0x00547a67
00547A5A  A1 90 87 80 00            MOV EAX,[0x00808790]
00547A5F  85 C0                     TEST EAX,EAX
00547A61  75 04                     JNZ 0x00547a67
00547A63  33 C0                     XOR EAX,EAX
00547A65  EB 05                     JMP 0x00547a6c
LAB_00547a67:
00547A67  B8 01 00 00 00            MOV EAX,0x1
LAB_00547a6c:
00547A6C  85 C0                     TEST EAX,EAX
00547A6E  0F 85 C6 01 00 00         JNZ 0x00547c3a
00547A74  A1 90 16 80 00            MOV EAX,[0x00801690]
00547A79  85 C0                     TEST EAX,EAX
00547A7B  74 0D                     JZ 0x00547a8a
00547A7D  66 39 B0 72 01 00 00      CMP word ptr [EAX + 0x172],SI
00547A84  0F 85 B0 01 00 00         JNZ 0x00547c3a
LAB_00547a8a:
00547A8A  8B B3 C5 00 00 00         MOV ESI,dword ptr [EBX + 0xc5]
00547A90  8B 83 B2 04 00 00         MOV EAX,dword ptr [EBX + 0x4b2]
00547A96  3B F0                     CMP ESI,EAX
00547A98  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00547A9B  0F 8C 99 01 00 00         JL 0x00547c3a
00547AA1  8B 93 BA 04 00 00         MOV EDX,dword ptr [EBX + 0x4ba]
00547AA7  03 D0                     ADD EDX,EAX
00547AA9  3B F2                     CMP ESI,EDX
00547AAB  0F 8D 89 01 00 00         JGE 0x00547c3a
00547AB1  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
00547AB7  8B BB B6 04 00 00         MOV EDI,dword ptr [EBX + 0x4b6]
00547ABD  3B C7                     CMP EAX,EDI
00547ABF  0F 8C 75 01 00 00         JL 0x00547c3a
00547AC5  8B 8B BE 04 00 00         MOV ECX,dword ptr [EBX + 0x4be]
00547ACB  03 CF                     ADD ECX,EDI
00547ACD  3B C1                     CMP EAX,ECX
00547ACF  0F 8D 65 01 00 00         JGE 0x00547c3a
00547AD5  8B 8B A2 04 00 00         MOV ECX,dword ptr [EBX + 0x4a2]
00547ADB  85 C9                     TEST ECX,ECX
00547ADD  0F 85 57 01 00 00         JNZ 0x00547c3a
00547AE3  8A 8B DE 00 00 00         MOV CL,byte ptr [EBX + 0xde]
00547AE9  84 C9                     TEST CL,CL
00547AEB  74 09                     JZ 0x00547af6
00547AED  80 F9 03                  CMP CL,0x3
00547AF0  0F 85 44 01 00 00         JNZ 0x00547c3a
LAB_00547af6:
00547AF6  8B 9B 9A 04 00 00         MOV EBX,dword ptr [EBX + 0x49a]
00547AFC  85 DB                     TEST EBX,EBX
00547AFE  0F 84 36 01 00 00         JZ 0x00547c3a
00547B04  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00547B0A  33 D2                     XOR EDX,EDX
00547B0C  8A D1                     MOV DL,CL
00547B0E  39 53 24                  CMP dword ptr [EBX + 0x24],EDX
00547B11  0F 84 23 01 00 00         JZ 0x00547c3a
00547B17  2B C7                     SUB EAX,EDI
00547B19  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00547B1C  6A 00                     PUSH 0x0
00547B1E  2B F7                     SUB ESI,EDI
00547B20  50                        PUSH EAX
00547B21  56                        PUSH ESI
00547B22  51                        PUSH ECX
00547B23  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00547B29  E8 19 CB EB FF            CALL 0x00404647
00547B2E  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547B34  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00547B39  33 C0                     XOR EAX,EAX
00547B3B  5F                        POP EDI
00547B3C  5E                        POP ESI
00547B3D  5B                        POP EBX
00547B3E  8B E5                     MOV ESP,EBP
00547B40  5D                        POP EBP
00547B41  C2 04 00                  RET 0x4
switchD_005471fa::caseD_9:
00547B44  A0 4C 73 80 00            MOV AL,[0x0080734c]
00547B49  84 C0                     TEST AL,AL
00547B4B  0F 84 E9 00 00 00         JZ 0x00547c3a
00547B51  8A 83 D2 00 00 00         MOV AL,byte ptr [EBX + 0xd2]
00547B57  84 C0                     TEST AL,AL
00547B59  0F 94 C0                  SETZ AL
00547B5C  88 83 D2 00 00 00         MOV byte ptr [EBX + 0xd2],AL
00547B62  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547B68  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00547B6D  33 C0                     XOR EAX,EAX
00547B6F  5F                        POP EDI
00547B70  5E                        POP ESI
00547B71  5B                        POP EBX
00547B72  8B E5                     MOV ESP,EBP
00547B74  5D                        POP EBP
00547B75  C2 04 00                  RET 0x4
switchD_005471fa::caseD_a:
00547B78  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00547B7E  3B CA                     CMP ECX,EDX
00547B80  0F 84 B4 00 00 00         JZ 0x00547c3a
00547B86  66 8B 93 C9 00 00 00      MOV DX,word ptr [EBX + 0xc9]
00547B8D  66 8B 83 C5 00 00 00      MOV AX,word ptr [EBX + 0xc5]
00547B94  52                        PUSH EDX
00547B95  50                        PUSH EAX
00547B96  E8 32 D6 EB FF            CALL 0x004051cd
00547B9B  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547BA1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00547BA6  33 C0                     XOR EAX,EAX
00547BA8  5F                        POP EDI
00547BA9  5E                        POP ESI
00547BAA  5B                        POP EBX
00547BAB  8B E5                     MOV ESP,EBP
00547BAD  5D                        POP EBP
00547BAE  C2 04 00                  RET 0x4
switchD_005471fa::caseD_b:
00547BB1  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00547BB7  3B CA                     CMP ECX,EDX
00547BB9  74 7F                     JZ 0x00547c3a
00547BBB  E8 07 A0 EB FF            CALL 0x00401bc7
00547BC0  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547BC6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00547BCB  33 C0                     XOR EAX,EAX
00547BCD  5F                        POP EDI
00547BCE  5E                        POP ESI
00547BCF  5B                        POP EBX
00547BD0  8B E5                     MOV ESP,EBP
00547BD2  5D                        POP EBP
00547BD3  C2 04 00                  RET 0x4
switchD_005471fa::caseD_c:
00547BD6  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00547BDC  3B CA                     CMP ECX,EDX
00547BDE  74 5A                     JZ 0x00547c3a
00547BE0  66 8B 93 C9 00 00 00      MOV DX,word ptr [EBX + 0xc9]
00547BE7  66 8B 83 C5 00 00 00      MOV AX,word ptr [EBX + 0xc5]
00547BEE  52                        PUSH EDX
00547BEF  50                        PUSH EAX
00547BF0  E8 FD D8 EB FF            CALL 0x004054f2
00547BF5  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547BFB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00547C00  33 C0                     XOR EAX,EAX
00547C02  5F                        POP EDI
00547C03  5E                        POP ESI
00547C04  5B                        POP EBX
00547C05  8B E5                     MOV ESP,EBP
00547C07  5D                        POP EBP
00547C08  C2 04 00                  RET 0x4
LAB_00547c0b:
00547C0B  33 C9                     XOR ECX,ECX
00547C0D  05 01 59 FF FF            ADD EAX,0xffff5901
00547C12  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
00547C15  6A FF                     PUSH -0x1
00547C17  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00547C1A  8D 55 A0                  LEA EDX,[EBP + -0x60]
00547C1D  6A 01                     PUSH 0x1
00547C1F  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
00547C22  C7 45 A0 09 00 00 00      MOV dword ptr [EBP + -0x60],0x9
00547C29  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00547C2C  52                        PUSH EDX
LAB_00547c2d:
00547C2D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00547C33  6A 05                     PUSH 0x5
00547C35  E8 F9 BF EB FF            CALL 0x00403c33
switchD_00544ac1::caseD_1:
00547C3A  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
00547C40  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00547C45  33 C0                     XOR EAX,EAX
00547C47  5F                        POP EDI
00547C48  5E                        POP ESI
00547C49  5B                        POP EBX
00547C4A  8B E5                     MOV ESP,EBP
00547C4C  5D                        POP EBP
00547C4D  C2 04 00                  RET 0x4
LAB_00547c50:
00547C50  8B 8D 24 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff24]
00547C56  68 0C 7F 7C 00            PUSH 0x7c7f0c
00547C5B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00547C60  56                        PUSH ESI
00547C61  6A 00                     PUSH 0x0
00547C63  68 D6 04 00 00            PUSH 0x4d6
00547C68  68 60 7D 7C 00            PUSH 0x7c7d60
00547C6D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00547C73  E8 58 58 16 00            CALL 0x006ad4d0
00547C78  83 C4 18                  ADD ESP,0x18
00547C7B  85 C0                     TEST EAX,EAX
00547C7D  74 01                     JZ 0x00547c80
00547C7F  CC                        INT3
LAB_00547c80:
00547C80  68 D7 04 00 00            PUSH 0x4d7
00547C85  68 60 7D 7C 00            PUSH 0x7c7d60
00547C8A  6A 00                     PUSH 0x0
00547C8C  56                        PUSH ESI
00547C8D  E8 AE E1 15 00            CALL 0x006a5e40
00547C92  5F                        POP EDI
00547C93  5E                        POP ESI
00547C94  B8 FF FF 00 00            MOV EAX,0xffff
00547C99  5B                        POP EBX
00547C9A  8B E5                     MOV ESP,EBP
00547C9C  5D                        POP EBP
00547C9D  C2 04 00                  RET 0x4
