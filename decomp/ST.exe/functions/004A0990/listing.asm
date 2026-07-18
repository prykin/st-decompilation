STGroupBoatC::GrpRepSub:
004A0990  55                        PUSH EBP
004A0991  8B EC                     MOV EBP,ESP
004A0993  81 EC 80 00 00 00         SUB ESP,0x80
004A0999  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
004A099C  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
004A09A2  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
004A09A5  53                        PUSH EBX
004A09A6  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004A09A9  56                        PUSH ESI
004A09AA  33 F6                     XOR ESI,ESI
004A09AC  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004A09AF  57                        PUSH EDI
004A09B0  8D 4D 84                  LEA ECX,[EBP + -0x7c]
004A09B3  8D 45 80                  LEA EAX,[EBP + -0x80]
004A09B6  56                        PUSH ESI
004A09B7  51                        PUSH ECX
004A09B8  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
004A09BB  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
004A09BE  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
004A09C1  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
004A09C4  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
004A09CB  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
004A09CE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A09D3  E8 18 CE 28 00            CALL 0x0072d7f0
004A09D8  8B F8                     MOV EDI,EAX
004A09DA  83 C4 08                  ADD ESP,0x8
004A09DD  3B FE                     CMP EDI,ESI
004A09DF  0F 85 73 03 00 00         JNZ 0x004a0d58
004A09E5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004A09E8  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
004A09EB  83 F8 01                  CMP EAX,0x1
004A09EE  74 08                     JZ 0x004a09f8
004A09F0  3B C6                     CMP EAX,ESI
004A09F2  0F 85 63 02 00 00         JNZ 0x004a0c5b
LAB_004a09f8:
004A09F8  B9 15 00 00 00            MOV ECX,0x15
004A09FD  33 C0                     XOR EAX,EAX
004A09FF  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
004A0A05  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A0A08  F3 AB                     STOSD.REP ES:EDI
004A0A0A  8B 83 C5 01 00 00         MOV EAX,dword ptr [EBX + 0x1c5]
004A0A10  89 73 65                  MOV dword ptr [EBX + 0x65],ESI
004A0A13  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004A0A19  52                        PUSH EDX
004A0A1A  50                        PUSH EAX
004A0A1B  E8 B0 58 24 00            CALL 0x006e62d0
004A0A20  83 F8 FC                  CMP EAX,-0x4
004A0A23  75 0B                     JNZ 0x004a0a30
004A0A25  33 C0                     XOR EAX,EAX
004A0A27  5F                        POP EDI
004A0A28  5E                        POP ESI
004A0A29  5B                        POP EBX
004A0A2A  8B E5                     MOV ESP,EBP
004A0A2C  5D                        POP EBP
004A0A2D  C2 04 00                  RET 0x4
LAB_004a0a30:
004A0A30  8D B3 08 03 00 00         LEA ESI,[EBX + 0x308]
004A0A36  8D 83 06 03 00 00         LEA EAX,[EBX + 0x306]
004A0A3C  8D 8B 04 03 00 00         LEA ECX,[EBX + 0x304]
004A0A42  56                        PUSH ESI
004A0A43  50                        PUSH EAX
004A0A44  51                        PUSH ECX
004A0A45  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A0A48  E8 BE 54 F6 FF            CALL 0x00405f0b
004A0A4D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A0A50  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
004A0A53  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
004A0A5A  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004A0A5D  89 93 0A 03 00 00         MOV dword ptr [EBX + 0x30a],EDX
004A0A63  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004A0A68  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004A0A6E  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004A0A71  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004A0A74  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A0A77  85 C0                     TEST EAX,EAX
004A0A79  0F 8E 2B 01 00 00         JLE 0x004a0baa
LAB_004a0a7f:
004A0A7F  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004A0A82  8D 4D F8                  LEA ECX,[EBP + -0x8]
004A0A85  51                        PUSH ECX
004A0A86  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
004A0A89  E8 E2 C1 20 00            CALL 0x006acc70
004A0A8E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A0A91  66 3D FF FF               CMP AX,0xffff
004A0A95  0F 84 FD 00 00 00         JZ 0x004a0b98
004A0A9B  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004A0A9E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A0AA4  6A 01                     PUSH 0x1
004A0AA6  50                        PUSH EAX
004A0AA7  52                        PUSH EDX
004A0AA8  E8 0D 1E F6 FF            CALL 0x004028ba
004A0AAD  85 C0                     TEST EAX,EAX
004A0AAF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A0AB2  75 1D                     JNZ 0x004a0ad1
004A0AB4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A0AB9  68 64 0D 00 00            PUSH 0xd64
004A0ABE  68 3C BE 7A 00            PUSH 0x7abe3c
004A0AC3  50                        PUSH EAX
004A0AC4  68 04 00 FE AF            PUSH 0xaffe0004
004A0AC9  E8 72 53 20 00            CALL 0x006a5e40
004A0ACE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_004a0ad1:
004A0AD1  8B 10                     MOV EDX,dword ptr [EAX]
004A0AD3  8B C8                     MOV ECX,EAX
004A0AD5  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
004A0ADB  85 C0                     TEST EAX,EAX
004A0ADD  0F 84 B5 00 00 00         JZ 0x004a0b98
004A0AE3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A0AE6  E8 6D 43 F6 FF            CALL 0x00404e58
004A0AEB  85 C0                     TEST EAX,EAX
004A0AED  0F 85 86 00 00 00         JNZ 0x004a0b79
004A0AF3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A0AF6  8B 01                     MOV EAX,dword ptr [ECX]
004A0AF8  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A0AFB  83 F8 07                  CMP EAX,0x7
004A0AFE  74 18                     JZ 0x004a0b18
004A0B00  83 F8 13                  CMP EAX,0x13
004A0B03  74 13                     JZ 0x004a0b18
004A0B05  8D 4D EC                  LEA ECX,[EBP + -0x14]
004A0B08  51                        PUSH ECX
004A0B09  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A0B0C  6A 03                     PUSH 0x3
004A0B0E  E8 13 16 F6 FF            CALL 0x00402126
004A0B13  E9 80 00 00 00            JMP 0x004a0b98
LAB_004a0b18:
004A0B18  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A0B1B  E8 E8 1A F6 FF            CALL 0x00402608
004A0B20  85 C0                     TEST EAX,EAX
004A0B22  75 74                     JNZ 0x004a0b98
004A0B24  66 8B 83 06 03 00 00      MOV AX,word ptr [EBX + 0x306]
004A0B2B  66 8B 93 04 03 00 00      MOV DX,word ptr [EBX + 0x304]
004A0B32  66 8B 0E                  MOV CX,word ptr [ESI]
004A0B35  66 89 45 CA               MOV word ptr [EBP + -0x36],AX
004A0B39  8D 45 C4                  LEA EAX,[EBP + -0x3c]
004A0B3C  66 89 55 C8               MOV word ptr [EBP + -0x38],DX
004A0B40  8B 93 0A 03 00 00         MOV EDX,dword ptr [EBX + 0x30a]
004A0B46  66 89 4D CC               MOV word ptr [EBP + -0x34],CX
004A0B4A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A0B4D  50                        PUSH EAX
004A0B4E  6A 0E                     PUSH 0xe
004A0B50  89 55 CE                  MOV dword ptr [EBP + -0x32],EDX
004A0B53  E8 CE 15 F6 FF            CALL 0x00402126
004A0B58  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A0B5B  85 C0                     TEST EAX,EAX
004A0B5D  75 10                     JNZ 0x004a0b6f
004A0B5F  6A 01                     PUSH 0x1
004A0B61  6A 02                     PUSH 0x2
004A0B63  6A 01                     PUSH 0x1
004A0B65  6A 00                     PUSH 0x0
004A0B67  E8 24 D7 20 00            CALL 0x006ae290
004A0B6C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_004a0b6f:
004A0B6F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A0B72  8D 4D F8                  LEA ECX,[EBP + -0x8]
004A0B75  51                        PUSH ECX
004A0B76  52                        PUSH EDX
004A0B77  EB 1A                     JMP 0x004a0b93
LAB_004a0b79:
004A0B79  85 FF                     TEST EDI,EDI
004A0B7B  75 11                     JNZ 0x004a0b8e
004A0B7D  6A 01                     PUSH 0x1
004A0B7F  6A 02                     PUSH 0x2
004A0B81  6A 01                     PUSH 0x1
004A0B83  57                        PUSH EDI
004A0B84  E8 07 D7 20 00            CALL 0x006ae290
004A0B89  8B F8                     MOV EDI,EAX
004A0B8B  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
LAB_004a0b8e:
004A0B8E  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A0B91  50                        PUSH EAX
004A0B92  57                        PUSH EDI
LAB_004a0b93:
004A0B93  E8 28 D6 20 00            CALL 0x006ae1c0
LAB_004a0b98:
004A0B98  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004A0B9B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A0B9E  40                        INC EAX
004A0B9F  3B C1                     CMP EAX,ECX
004A0BA1  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004A0BA4  0F 8C D5 FE FF FF         JL 0x004a0a7f
LAB_004a0baa:
004A0BAA  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004A0BAD  85 F6                     TEST ESI,ESI
004A0BAF  74 1B                     JZ 0x004a0bcc
004A0BB1  85 FF                     TEST EDI,EDI
004A0BB3  74 13                     JZ 0x004a0bc8
004A0BB5  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004A0BB8  57                        PUSH EDI
004A0BB9  56                        PUSH ESI
004A0BBA  51                        PUSH ECX
004A0BBB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A0BC1  E8 D5 31 F6 FF            CALL 0x00403d9b
004A0BC6  EB 63                     JMP 0x004a0c2b
LAB_004a0bc8:
004A0BC8  85 F6                     TEST ESI,ESI
004A0BCA  75 63                     JNZ 0x004a0c2f
LAB_004a0bcc:
004A0BCC  85 FF                     TEST EDI,EDI
004A0BCE  74 50                     JZ 0x004a0c20
004A0BD0  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
004A0BD3  33 F6                     XOR ESI,ESI
004A0BD5  85 C0                     TEST EAX,EAX
004A0BD7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004A0BDA  7E 3A                     JLE 0x004a0c16
LAB_004a0bdc:
004A0BDC  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A0BDF  8B CF                     MOV ECX,EDI
004A0BE1  52                        PUSH EDX
004A0BE2  8B D6                     MOV EDX,ESI
004A0BE4  E8 87 C0 20 00            CALL 0x006acc70
004A0BE9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A0BEC  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004A0BEF  6A 01                     PUSH 0x1
004A0BF1  50                        PUSH EAX
004A0BF2  51                        PUSH ECX
004A0BF3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A0BF9  E8 BC 1C F6 FF            CALL 0x004028ba
004A0BFE  8D 55 EC                  LEA EDX,[EBP + -0x14]
004A0C01  8B C8                     MOV ECX,EAX
004A0C03  52                        PUSH EDX
004A0C04  6A 03                     PUSH 0x3
004A0C06  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A0C09  E8 18 15 F6 FF            CALL 0x00402126
004A0C0E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A0C11  46                        INC ESI
004A0C12  3B F0                     CMP ESI,EAX
004A0C14  7C C6                     JL 0x004a0bdc
LAB_004a0c16:
004A0C16  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004A0C19  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_004a0c20:
004A0C20  85 F6                     TEST ESI,ESI
004A0C22  75 0B                     JNZ 0x004a0c2f
004A0C24  85 FF                     TEST EDI,EDI
004A0C26  75 03                     JNZ 0x004a0c2b
004A0C28  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
LAB_004a0c2b:
004A0C2B  85 F6                     TEST ESI,ESI
004A0C2D  74 06                     JZ 0x004a0c35
LAB_004a0c2f:
004A0C2F  56                        PUSH ESI
004A0C30  E8 DB D4 20 00            CALL 0x006ae110
LAB_004a0c35:
004A0C35  85 FF                     TEST EDI,EDI
004A0C37  74 06                     JZ 0x004a0c3f
004A0C39  57                        PUSH EDI
004A0C3A  E8 D1 D4 20 00            CALL 0x006ae110
LAB_004a0c3f:
004A0C3F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A0C44  68 8F 0D 00 00            PUSH 0xd8f
004A0C49  68 3C BE 7A 00            PUSH 0x7abe3c
004A0C4E  50                        PUSH EAX
004A0C4F  68 09 00 FE AF            PUSH 0xaffe0009
004A0C54  E8 E7 51 20 00            CALL 0x006a5e40
004A0C59  33 F6                     XOR ESI,ESI
LAB_004a0c5b:
004A0C5B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004A0C61  33 D2                     XOR EDX,EDX
004A0C63  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
004A0C69  B9 14 00 00 00            MOV ECX,0x14
004A0C6E  F7 F1                     DIV ECX
004A0C70  83 FA 04                  CMP EDX,0x4
004A0C73  0F 85 CA 00 00 00         JNZ 0x004a0d43
004A0C79  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004A0C7C  33 FF                     XOR EDI,EDI
004A0C7E  85 F6                     TEST ESI,ESI
004A0C80  0F 8E A8 00 00 00         JLE 0x004a0d2e
LAB_004a0c86:
004A0C86  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
004A0C89  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A0C8C  52                        PUSH EDX
004A0C8D  8B D7                     MOV EDX,EDI
004A0C8F  E8 DC BF 20 00            CALL 0x006acc70
004A0C94  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A0C97  66 3D FF FF               CMP AX,0xffff
004A0C9B  74 7F                     JZ 0x004a0d1c
004A0C9D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A0CA3  6A 01                     PUSH 0x1
004A0CA5  50                        PUSH EAX
004A0CA6  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004A0CA9  50                        PUSH EAX
004A0CAA  E8 0B 1C F6 FF            CALL 0x004028ba
004A0CAF  85 C0                     TEST EAX,EAX
004A0CB1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A0CB4  75 1E                     JNZ 0x004a0cd4
004A0CB6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004A0CBC  68 97 0D 00 00            PUSH 0xd97
004A0CC1  68 3C BE 7A 00            PUSH 0x7abe3c
004A0CC6  51                        PUSH ECX
004A0CC7  68 04 00 FE AF            PUSH 0xaffe0004
004A0CCC  E8 6F 51 20 00            CALL 0x006a5e40
004A0CD1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_004a0cd4:
004A0CD4  8B 10                     MOV EDX,dword ptr [EAX]
004A0CD6  8B C8                     MOV ECX,EAX
004A0CD8  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
004A0CDE  85 C0                     TEST EAX,EAX
004A0CE0  74 3A                     JZ 0x004a0d1c
004A0CE2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A0CE5  8B 01                     MOV EAX,dword ptr [ECX]
004A0CE7  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A0CEA  83 F8 07                  CMP EAX,0x7
004A0CED  74 0A                     JZ 0x004a0cf9
004A0CEF  83 F8 13                  CMP EAX,0x13
004A0CF2  74 05                     JZ 0x004a0cf9
004A0CF4  83 F8 1B                  CMP EAX,0x1b
004A0CF7  75 23                     JNZ 0x004a0d1c
LAB_004a0cf9:
004A0CF9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A0CFC  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
004A0D03  E8 D4 21 F6 FF            CALL 0x00402edc
004A0D08  83 F8 0E                  CMP EAX,0xe
004A0D0B  74 1A                     JZ 0x004a0d27
004A0D0D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A0D10  6A 0E                     PUSH 0xe
004A0D12  E8 E2 40 F6 FF            CALL 0x00404df9
004A0D17  83 F8 01                  CMP EAX,0x1
004A0D1A  74 0B                     JZ 0x004a0d27
LAB_004a0d1c:
004A0D1C  47                        INC EDI
004A0D1D  3B FE                     CMP EDI,ESI
004A0D1F  0F 8C 61 FF FF FF         JL 0x004a0c86
004A0D25  EB 07                     JMP 0x004a0d2e
LAB_004a0d27:
004A0D27  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
LAB_004a0d2e:
004A0D2E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004A0D31  85 C0                     TEST EAX,EAX
004A0D33  74 07                     JZ 0x004a0d3c
004A0D35  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004A0D38  85 C0                     TEST EAX,EAX
004A0D3A  75 07                     JNZ 0x004a0d43
LAB_004a0d3c:
004A0D3C  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_004a0d43:
004A0D43  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
004A0D46  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_004a0d4c:
004A0D4C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004A0D4F  5F                        POP EDI
004A0D50  5E                        POP ESI
004A0D51  5B                        POP EBX
004A0D52  8B E5                     MOV ESP,EBP
004A0D54  5D                        POP EBP
004A0D55  C2 04 00                  RET 0x4
LAB_004a0d58:
004A0D58  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
004A0D5B  81 FF 09 00 FE AF         CMP EDI,0xaffe0009
004A0D61  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A0D67  74 E3                     JZ 0x004a0d4c
004A0D69  68 90 C1 7A 00            PUSH 0x7ac190
004A0D6E  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A0D73  57                        PUSH EDI
004A0D74  56                        PUSH ESI
004A0D75  68 A5 0D 00 00            PUSH 0xda5
004A0D7A  68 3C BE 7A 00            PUSH 0x7abe3c
004A0D7F  E8 4C C7 20 00            CALL 0x006ad4d0
004A0D84  83 C4 18                  ADD ESP,0x18
004A0D87  85 C0                     TEST EAX,EAX
004A0D89  74 01                     JZ 0x004a0d8c
004A0D8B  CC                        INT3
LAB_004a0d8c:
004A0D8C  68 A6 0D 00 00            PUSH 0xda6
004A0D91  68 3C BE 7A 00            PUSH 0x7abe3c
004A0D96  56                        PUSH ESI
004A0D97  57                        PUSH EDI
004A0D98  E8 A3 50 20 00            CALL 0x006a5e40
004A0D9D  5F                        POP EDI
004A0D9E  5E                        POP ESI
004A0D9F  83 C8 FF                  OR EAX,0xffffffff
004A0DA2  5B                        POP EBX
004A0DA3  8B E5                     MOV ESP,EBP
004A0DA5  5D                        POP EBP
004A0DA6  C2 04 00                  RET 0x4
