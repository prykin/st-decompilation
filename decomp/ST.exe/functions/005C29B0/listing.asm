SettMapMTy::sub_005C29B0:
005C29B0  55                        PUSH EBP
005C29B1  8B EC                     MOV EBP,ESP
005C29B3  81 EC 14 0B 00 00         SUB ESP,0xb14
005C29B9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C29BE  53                        PUSH EBX
005C29BF  56                        PUSH ESI
005C29C0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005C29C3  57                        PUSH EDI
005C29C4  8D 55 80                  LEA EDX,[EBP + -0x80]
005C29C7  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
005C29CD  6A 00                     PUSH 0x0
005C29CF  52                        PUSH EDX
005C29D0  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
005C29D6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C29DC  E8 0F AE 16 00            CALL 0x0072d7f0
005C29E1  83 C4 08                  ADD ESP,0x8
005C29E4  85 C0                     TEST EAX,EAX
005C29E6  0F 85 9B 18 00 00         JNZ 0x005c4287
005C29EC  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005C29EF  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005C29F2  3C 06                     CMP AL,0x6
005C29F4  88 83 26 1E 00 00         MOV byte ptr [EBX + 0x1e26],AL
005C29FA  74 0F                     JZ 0x005c2a0b
005C29FC  3C 01                     CMP AL,0x1
005C29FE  74 0B                     JZ 0x005c2a0b
005C2A00  3C 02                     CMP AL,0x2
005C2A02  C6 05 50 17 81 00 01      MOV byte ptr [0x00811750],0x1
005C2A09  75 07                     JNZ 0x005c2a12
LAB_005c2a0b:
005C2A0B  C6 05 50 17 81 00 00      MOV byte ptr [0x00811750],0x0
LAB_005c2a12:
005C2A12  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C2A17  84 C0                     TEST AL,AL
005C2A19  75 0A                     JNZ 0x005c2a25
005C2A1B  C7 05 2E F3 80 00 00 00 00 00  MOV dword ptr [0x0080f32e],0x0
LAB_005c2a25:
005C2A25  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005C2A2A  85 C0                     TEST EAX,EAX
005C2A2C  74 2A                     JZ 0x005c2a58
005C2A2E  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
005C2A34  85 C9                     TEST ECX,ECX
005C2A36  74 14                     JZ 0x005c2a4c
005C2A38  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005C2A3B  83 F9 FF                  CMP ECX,-0x1
005C2A3E  74 18                     JZ 0x005c2a58
005C2A40  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005C2A43  51                        PUSH ECX
005C2A44  50                        PUSH EAX
005C2A45  E8 A6 10 0F 00            CALL 0x006b3af0
005C2A4A  EB 0C                     JMP 0x005c2a58
LAB_005c2a4c:
005C2A4C  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005C2A52  51                        PUSH ECX
005C2A53  E8 B8 60 0F 00            CALL 0x006b8b10
LAB_005c2a58:
005C2A58  8B 15 00 C1 79 00         MOV EDX,dword ptr [0x0079c100]
005C2A5E  A1 EC C0 79 00            MOV EAX,[0x0079c0ec]
005C2A63  52                        PUSH EDX
005C2A64  50                        PUSH EAX
005C2A65  68 80 76 80 00            PUSH 0x807680
005C2A6A  68 DC 6E 7C 00            PUSH 0x7c6edc
005C2A6F  68 3A F3 80 00            PUSH 0x80f33a
005C2A74  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C2A7A  6A 00                     PUSH 0x0
005C2A7C  6A 00                     PUSH 0x0
005C2A7E  6A 00                     PUSH 0x0
005C2A80  68 3A F3 80 00            PUSH 0x80f33a
005C2A85  68 45 03 00 00            PUSH 0x345
005C2A8A  E8 31 E4 12 00            CALL 0x006f0ec0
005C2A8F  89 83 43 1F 00 00         MOV dword ptr [EBX + 0x1f43],EAX
005C2A95  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C2A9B  8B 15 06 C5 80 00         MOV EDX,dword ptr [0x0080c506]
005C2AA1  8B 3D 02 C5 80 00         MOV EDI,dword ptr [0x0080c502]
005C2AA7  83 C4 28                  ADD ESP,0x28
005C2AAA  3C 06                     CMP AL,0x6
005C2AAC  74 0A                     JZ 0x005c2ab8
005C2AAE  3C 01                     CMP AL,0x1
005C2AB0  74 06                     JZ 0x005c2ab8
005C2AB2  3C 02                     CMP AL,0x2
005C2AB4  8B CF                     MOV ECX,EDI
005C2AB6  75 02                     JNZ 0x005c2aba
LAB_005c2ab8:
005C2AB8  8B CA                     MOV ECX,EDX
LAB_005c2aba:
005C2ABA  8B B3 5F 1C 00 00         MOV ESI,dword ptr [EBX + 0x1c5f]
005C2AC0  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
005C2AC3  73 2D                     JNC 0x005c2af2
005C2AC5  3C 06                     CMP AL,0x6
005C2AC7  74 0A                     JZ 0x005c2ad3
005C2AC9  3C 01                     CMP AL,0x1
005C2ACB  74 06                     JZ 0x005c2ad3
005C2ACD  3C 02                     CMP AL,0x2
005C2ACF  8B CF                     MOV ECX,EDI
005C2AD1  75 02                     JNZ 0x005c2ad5
LAB_005c2ad3:
005C2AD3  8B CA                     MOV ECX,EDX
LAB_005c2ad5:
005C2AD5  3C 06                     CMP AL,0x6
005C2AD7  74 0A                     JZ 0x005c2ae3
005C2AD9  3C 01                     CMP AL,0x1
005C2ADB  74 06                     JZ 0x005c2ae3
005C2ADD  3C 02                     CMP AL,0x2
005C2ADF  8B C7                     MOV EAX,EDI
005C2AE1  75 02                     JNZ 0x005c2ae5
LAB_005c2ae3:
005C2AE3  8B C2                     MOV EAX,EDX
LAB_005c2ae5:
005C2AE5  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005C2AE8  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005C2AEB  0F AF D6                  IMUL EDX,ESI
005C2AEE  03 D0                     ADD EDX,EAX
005C2AF0  EB 02                     JMP 0x005c2af4
LAB_005c2af2:
005C2AF2  33 D2                     XOR EDX,EDX
LAB_005c2af4:
005C2AF4  85 D2                     TEST EDX,EDX
005C2AF6  74 43                     JZ 0x005c2b3b
005C2AF8  8B 8A 90 00 00 00         MOV ECX,dword ptr [EDX + 0x90]
005C2AFE  8D 7A 4C                  LEA EDI,[EDX + 0x4c]
005C2B01  89 0D 5C 99 80 00         MOV dword ptr [0x0080995c],ECX
005C2B07  83 C9 FF                  OR ECX,0xffffffff
005C2B0A  33 C0                     XOR EAX,EAX
005C2B0C  F2 AE                     SCASB.REPNE ES:EDI
005C2B0E  F7 D1                     NOT ECX
005C2B10  2B F9                     SUB EDI,ECX
005C2B12  8B C1                     MOV EAX,ECX
005C2B14  8B F7                     MOV ESI,EDI
005C2B16  BF 60 99 80 00            MOV EDI,0x809960
005C2B1B  C1 E9 02                  SHR ECX,0x2
005C2B1E  F3 A5                     MOVSD.REP ES:EDI,ESI
005C2B20  8B C8                     MOV ECX,EAX
005C2B22  83 E1 03                  AND ECX,0x3
005C2B25  83 C2 70                  ADD EDX,0x70
005C2B28  F3 A4                     MOVSB.REP ES:EDI,ESI
005C2B2A  8B 8B 63 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c63]
005C2B30  51                        PUSH ECX
005C2B31  52                        PUSH EDX
005C2B32  8B 93 43 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f43]
005C2B38  52                        PUSH EDX
005C2B39  EB 28                     JMP 0x005c2b63
LAB_005c2b3b:
005C2B3B  B9 08 00 00 00            MOV ECX,0x8
005C2B40  33 C0                     XOR EAX,EAX
005C2B42  BF 60 99 80 00            MOV EDI,0x809960
005C2B47  C7 05 5C 99 80 00 01 00 00 00  MOV dword ptr [0x0080995c],0x1
005C2B51  F3 AB                     STOSD.REP ES:EDI
005C2B53  8B 83 63 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c63]
005C2B59  8B 8B 43 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f43]
005C2B5F  50                        PUSH EAX
005C2B60  6A 00                     PUSH 0x0
005C2B62  51                        PUSH ECX
LAB_005c2b63:
005C2B63  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C2B69  E8 85 00 E4 FF            CALL 0x00402bf3
005C2B6E  6A 08                     PUSH 0x8
005C2B70  6A 60                     PUSH 0x60
005C2B72  6A 08                     PUSH 0x8
005C2B74  6A 00                     PUSH 0x0
005C2B76  E8 15 B7 0E 00            CALL 0x006ae290
005C2B7B  89 83 84 1F 00 00         MOV dword ptr [EBX + 0x1f84],EAX
005C2B81  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005C2B87  6A 01                     PUSH 0x1
005C2B89  6A 00                     PUSH 0x0
005C2B8B  68 9C C7 7C 00            PUSH 0x7cc79c
005C2B90  52                        PUSH EDX
005C2B91  E8 5A 7E 14 00            CALL 0x0070a9f0
005C2B96  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C2B9C  83 C4 10                  ADD ESP,0x10
005C2B9F  89 41 2C                  MOV dword ptr [ECX + 0x2c],EAX
005C2BA2  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C2BA8  8D 8D EC F4 FF FF         LEA ECX,[EBP + 0xfffff4ec]
005C2BAE  6A 00                     PUSH 0x0
005C2BB0  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
005C2BB3  51                        PUSH ECX
005C2BB4  89 43 5D                  MOV dword ptr [EBX + 0x5d],EAX
005C2BB7  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C2BBD  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
005C2BC0  50                        PUSH EAX
005C2BC1  E8 9A 97 0F 00            CALL 0x006bc360
005C2BC6  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005C2BCC  BF 1F 00 00 00            MOV EDI,0x1f
005C2BD1  8D 85 EC F4 FF FF         LEA EAX,[EBP + 0xfffff4ec]
005C2BD7  89 B9 40 01 00 00         MOV dword ptr [ECX + 0x140],EDI
005C2BDD  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005C2BE3  81 C2 44 01 00 00         ADD EDX,0x144
005C2BE9  52                        PUSH EDX
005C2BEA  6A 15                     PUSH 0x15
005C2BEC  68 8B 00 00 00            PUSH 0x8b
005C2BF1  68 00 01 00 00            PUSH 0x100
005C2BF6  6A 00                     PUSH 0x0
005C2BF8  50                        PUSH EAX
005C2BF9  E8 82 5B 15 00            CALL 0x00718780
005C2BFE  A0 A0 67 80 00            MOV AL,[0x008067a0]
005C2C03  83 C4 18                  ADD ESP,0x18
005C2C06  84 C0                     TEST AL,AL
005C2C08  0F 84 81 00 00 00         JZ 0x005c2c8f
005C2C0E  A1 64 17 81 00            MOV EAX,[0x00811764]
005C2C13  85 C0                     TEST EAX,EAX
005C2C15  74 78                     JZ 0x005c2c8f
005C2C17  83 C0 18                  ADD EAX,0x18
005C2C1A  8D 8B 5F 1A 00 00         LEA ECX,[EBX + 0x1a5f]
005C2C20  50                        PUSH EAX
005C2C21  51                        PUSH ECX
005C2C22  E8 39 35 0F 00            CALL 0x006b6160
005C2C27  C6 83 7F 1A 00 00 01      MOV byte ptr [EBX + 0x1a7f],0x1
005C2C2E  8A 15 C6 87 80 00         MOV DL,byte ptr [0x008087c6]
005C2C34  88 93 80 1A 00 00         MOV byte ptr [EBX + 0x1a80],DL
005C2C3A  66 A1 C2 87 80 00         MOV AX,[0x008087c2]
005C2C40  D1 E8                     SHR EAX,0x1
005C2C42  88 83 81 1A 00 00         MOV byte ptr [EBX + 0x1a81],AL
005C2C48  8B 0D 5C 99 80 00         MOV ECX,dword ptr [0x0080995c]
005C2C4E  51                        PUSH ECX
005C2C4F  8D 55 DC                  LEA EDX,[EBP + -0x24]
005C2C52  68 84 C5 7C 00            PUSH 0x7cc584
005C2C57  52                        PUSH EDX
005C2C58  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C2C5E  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005C2C61  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005C2C64  8D 83 82 1A 00 00         LEA EAX,[EBX + 0x1a82]
005C2C6A  68 D5 01 00 00            PUSH 0x1d5
005C2C6F  68 C3 C3 80 00            PUSH 0x80c3c3
005C2C74  89 08                     MOV dword ptr [EAX],ECX
005C2C76  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
005C2C79  8D 83 8A 1A 00 00         LEA EAX,[EBX + 0x1a8a]
005C2C7F  50                        PUSH EAX
005C2C80  E8 BB B6 16 00            CALL 0x0072e340
005C2C85  83 C4 18                  ADD ESP,0x18
005C2C88  C6 83 5E 1C 00 00 00      MOV byte ptr [EBX + 0x1c5e],0x0
LAB_005c2c8f:
005C2C8F  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005C2C92  6A 05                     PUSH 0x5
005C2C94  89 83 89 21 00 00         MOV dword ptr [EBX + 0x2189],EAX
005C2C9A  89 83 69 21 00 00         MOV dword ptr [EBX + 0x2169],EAX
005C2CA0  B8 02 00 00 00            MOV EAX,0x2
005C2CA5  68 0C 01 00 00            PUSH 0x10c
005C2CAA  89 83 8D 21 00 00         MOV dword ptr [EBX + 0x218d],EAX
005C2CB0  89 83 6D 21 00 00         MOV dword ptr [EBX + 0x216d],EAX
005C2CB6  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C2CBC  6A 0F                     PUSH 0xf
005C2CBE  6A 00                     PUSH 0x0
005C2CC0  8B 51 2C                  MOV EDX,dword ptr [ECX + 0x2c]
005C2CC3  89 93 AD 21 00 00         MOV dword ptr [EBX + 0x21ad],EDX
005C2CC9  A1 A8 32 80 00            MOV EAX,[0x008032a8]
005C2CCE  89 83 C1 21 00 00         MOV dword ptr [EBX + 0x21c1],EAX
005C2CD4  8B 0D A4 32 80 00         MOV ECX,dword ptr [0x008032a4]
005C2CDA  89 8B BD 21 00 00         MOV dword ptr [EBX + 0x21bd],ECX
005C2CE0  89 BB B5 21 00 00         MOV dword ptr [EBX + 0x21b5],EDI
005C2CE6  C7 83 B9 21 00 00 01 00 00 00  MOV dword ptr [EBX + 0x21b9],0x1
005C2CF0  C7 83 B1 21 00 00 4D 00 00 00  MOV dword ptr [EBX + 0x21b1],0x4d
005C2CFA  E8 91 B5 0E 00            CALL 0x006ae290
005C2CFF  6A 01                     PUSH 0x1
005C2D01  89 83 2F 1E 00 00         MOV dword ptr [EBX + 0x1e2f],EAX
005C2D07  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005C2D0D  6A 00                     PUSH 0x0
005C2D0F  68 64 D1 7C 00            PUSH 0x7cd164
005C2D14  6A 06                     PUSH 0x6
005C2D16  52                        PUSH EDX
005C2D17  E8 84 78 14 00            CALL 0x0070a5a0
005C2D1C  6A 00                     PUSH 0x0
005C2D1E  6A 00                     PUSH 0x0
005C2D20  6A 01                     PUSH 0x1
005C2D22  6A 00                     PUSH 0x0
005C2D24  89 83 2B 1E 00 00         MOV dword ptr [EBX + 0x1e2b],EAX
005C2D2A  A1 84 67 80 00            MOV EAX,[0x00806784]
005C2D2F  6A FF                     PUSH -0x1
005C2D31  68 58 D1 7C 00            PUSH 0x7cd158
005C2D36  6A 0B                     PUSH 0xb
005C2D38  50                        PUSH EAX
005C2D39  E8 B2 6D 14 00            CALL 0x00709af0
005C2D3E  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005C2D44  6A 00                     PUSH 0x0
005C2D46  6A 00                     PUSH 0x0
005C2D48  6A 01                     PUSH 0x1
005C2D4A  6A 00                     PUSH 0x0
005C2D4C  6A FF                     PUSH -0x1
005C2D4E  68 90 C0 7C 00            PUSH 0x7cc090
005C2D53  6A 0B                     PUSH 0xb
005C2D55  51                        PUSH ECX
005C2D56  A3 5C 17 81 00            MOV [0x0081175c],EAX
005C2D5B  E8 90 6D 14 00            CALL 0x00709af0
005C2D60  83 C4 54                  ADD ESP,0x54
005C2D63  89 83 4F 1F 00 00         MOV dword ptr [EBX + 0x1f4f],EAX
005C2D69  8B 15 84 67 80 00         MOV EDX,dword ptr [0x00806784]
005C2D6F  6A 00                     PUSH 0x0
005C2D71  6A 00                     PUSH 0x0
005C2D73  6A 01                     PUSH 0x1
005C2D75  6A 00                     PUSH 0x0
005C2D77  6A FF                     PUSH -0x1
005C2D79  68 4C D1 7C 00            PUSH 0x7cd14c
005C2D7E  6A 0B                     PUSH 0xb
005C2D80  52                        PUSH EDX
005C2D81  E8 6A 6D 14 00            CALL 0x00709af0
005C2D86  89 83 4B 1F 00 00         MOV dword ptr [EBX + 0x1f4b],EAX
005C2D8C  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C2D92  83 C4 20                  ADD ESP,0x20
005C2D95  3C 06                     CMP AL,0x6
005C2D97  74 0C                     JZ 0x005c2da5
005C2D99  3C 07                     CMP AL,0x7
005C2D9B  74 08                     JZ 0x005c2da5
005C2D9D  3C 0E                     CMP AL,0xe
005C2D9F  0F 85 45 05 00 00         JNZ 0x005c32ea
LAB_005c2da5:
005C2DA5  C6 83 E3 21 00 00 01      MOV byte ptr [EBX + 0x21e3],0x1
005C2DAC  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005C2DAF  6A 01                     PUSH 0x1
005C2DB1  8D 48 28                  LEA ECX,[EAX + 0x28]
005C2DB4  51                        PUSH ECX
005C2DB5  50                        PUSH EAX
005C2DB6  E8 25 22 0F 00            CALL 0x006b4fe0
005C2DBB  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005C2DBE  50                        PUSH EAX
005C2DBF  33 C0                     XOR EAX,EAX
005C2DC1  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005C2DC5  50                        PUSH EAX
005C2DC6  68 23 01 00 00            PUSH 0x123
005C2DCB  68 F9 00 00 00            PUSH 0xf9
005C2DD0  E8 EB 22 0F 00            CALL 0x006b50c0
005C2DD5  89 83 67 1C 00 00         MOV dword ptr [EBX + 0x1c67],EAX
005C2DDB  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005C2DDE  85 F6                     TEST ESI,ESI
005C2DE0  75 17                     JNZ 0x005c2df9
005C2DE2  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
005C2DE6  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
005C2DEA  03 F7                     ADD ESI,EDI
005C2DEC  C1 EE 03                  SHR ESI,0x3
005C2DEF  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
005C2DF5  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_005c2df9:
005C2DF9  50                        PUSH EAX
005C2DFA  E8 A1 21 0F 00            CALL 0x006b4fa0
005C2DFF  8B CE                     MOV ECX,ESI
005C2E01  8B F8                     MOV EDI,EAX
005C2E03  8B D1                     MOV EDX,ECX
005C2E05  83 C8 FF                  OR EAX,0xffffffff
005C2E08  C1 E9 02                  SHR ECX,0x2
005C2E0B  F3 AB                     STOSD.REP ES:EDI
005C2E0D  8B CA                     MOV ECX,EDX
005C2E0F  6A 14                     PUSH 0x14
005C2E11  83 E1 03                  AND ECX,0x3
005C2E14  68 EA 00 00 00            PUSH 0xea
005C2E19  F3 AA                     STOSB.REP ES:EDI
005C2E1B  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C2E21  8B 83 67 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c67]
005C2E27  6A 06                     PUSH 0x6
005C2E29  6A 10                     PUSH 0x10
005C2E2B  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C2E2E  6A 00                     PUSH 0x0
005C2E30  50                        PUSH EAX
005C2E31  E8 5A DC 14 00            CALL 0x00710a90
005C2E36  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C2E3C  6A 02                     PUSH 0x2
005C2E3E  6A FF                     PUSH -0x1
005C2E40  6A 00                     PUSH 0x0
005C2E42  52                        PUSH EDX
005C2E43  68 44 23 00 00            PUSH 0x2344
005C2E48  E8 F3 D2 0E 00            CALL 0x006b0140
005C2E4D  50                        PUSH EAX
005C2E4E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C2E53  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C2E56  E8 65 EB 14 00            CALL 0x007119c0
005C2E5B  8B 8B 67 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c67]
005C2E61  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C2E67  6A 14                     PUSH 0x14
005C2E69  68 EA 00 00 00            PUSH 0xea
005C2E6E  6A 2E                     PUSH 0x2e
005C2E70  6A 10                     PUSH 0x10
005C2E72  6A 00                     PUSH 0x0
005C2E74  51                        PUSH ECX
005C2E75  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C2E78  E8 13 DC 14 00            CALL 0x00710a90
005C2E7D  A1 18 76 80 00            MOV EAX,[0x00807618]
005C2E82  6A 02                     PUSH 0x2
005C2E84  6A FF                     PUSH -0x1
005C2E86  6A 00                     PUSH 0x0
005C2E88  50                        PUSH EAX
005C2E89  68 45 23 00 00            PUSH 0x2345
005C2E8E  E8 AD D2 0E 00            CALL 0x006b0140
005C2E93  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C2E99  50                        PUSH EAX
005C2E9A  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C2E9D  E8 1E EB 14 00            CALL 0x007119c0
005C2EA2  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C2EA7  8B 93 67 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c67]
005C2EAD  6A 14                     PUSH 0x14
005C2EAF  68 EA 00 00 00            PUSH 0xea
005C2EB4  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C2EB7  6A 56                     PUSH 0x56
005C2EB9  6A 10                     PUSH 0x10
005C2EBB  6A 00                     PUSH 0x0
005C2EBD  52                        PUSH EDX
005C2EBE  E8 CD DB 14 00            CALL 0x00710a90
005C2EC3  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005C2EC9  6A 02                     PUSH 0x2
005C2ECB  6A FF                     PUSH -0x1
005C2ECD  6A 00                     PUSH 0x0
005C2ECF  51                        PUSH ECX
005C2ED0  68 50 23 00 00            PUSH 0x2350
005C2ED5  E8 66 D2 0E 00            CALL 0x006b0140
005C2EDA  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C2EE0  50                        PUSH EAX
005C2EE1  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C2EE4  E8 D7 EA 14 00            CALL 0x007119c0
005C2EE9  8B 83 67 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c67]
005C2EEF  6A 14                     PUSH 0x14
005C2EF1  68 EA 00 00 00            PUSH 0xea
005C2EF6  6A 7E                     PUSH 0x7e
005C2EF8  6A 10                     PUSH 0x10
005C2EFA  6A 00                     PUSH 0x0
005C2EFC  50                        PUSH EAX
005C2EFD  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C2F03  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C2F06  E8 85 DB 14 00            CALL 0x00710a90
005C2F0B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C2F11  6A 02                     PUSH 0x2
005C2F13  6A FF                     PUSH -0x1
005C2F15  6A 00                     PUSH 0x0
005C2F17  52                        PUSH EDX
005C2F18  68 52 23 00 00            PUSH 0x2352
005C2F1D  E8 1E D2 0E 00            CALL 0x006b0140
005C2F22  50                        PUSH EAX
005C2F23  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C2F28  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C2F2B  E8 90 EA 14 00            CALL 0x007119c0
005C2F30  8B 8B 67 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c67]
005C2F36  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C2F3C  6A 14                     PUSH 0x14
005C2F3E  68 EA 00 00 00            PUSH 0xea
005C2F43  68 A6 00 00 00            PUSH 0xa6
005C2F48  6A 10                     PUSH 0x10
005C2F4A  6A 00                     PUSH 0x0
005C2F4C  51                        PUSH ECX
005C2F4D  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C2F50  E8 3B DB 14 00            CALL 0x00710a90
005C2F55  A1 18 76 80 00            MOV EAX,[0x00807618]
005C2F5A  6A 02                     PUSH 0x2
005C2F5C  6A FF                     PUSH -0x1
005C2F5E  6A 00                     PUSH 0x0
005C2F60  50                        PUSH EAX
005C2F61  68 51 23 00 00            PUSH 0x2351
005C2F66  E8 D5 D1 0E 00            CALL 0x006b0140
005C2F6B  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C2F71  50                        PUSH EAX
005C2F72  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C2F75  E8 46 EA 14 00            CALL 0x007119c0
005C2F7A  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C2F7F  8B 93 67 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c67]
005C2F85  6A 14                     PUSH 0x14
005C2F87  68 EA 00 00 00            PUSH 0xea
005C2F8C  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C2F8F  68 CE 00 00 00            PUSH 0xce
005C2F94  6A 10                     PUSH 0x10
005C2F96  6A 00                     PUSH 0x0
005C2F98  52                        PUSH EDX
005C2F99  E8 F2 DA 14 00            CALL 0x00710a90
005C2F9E  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005C2FA4  6A 02                     PUSH 0x2
005C2FA6  6A FF                     PUSH -0x1
005C2FA8  6A 00                     PUSH 0x0
005C2FAA  51                        PUSH ECX
005C2FAB  68 53 23 00 00            PUSH 0x2353
005C2FB0  E8 8B D1 0E 00            CALL 0x006b0140
005C2FB5  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C2FBB  50                        PUSH EAX
005C2FBC  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C2FBF  E8 FC E9 14 00            CALL 0x007119c0
005C2FC4  8B 83 67 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c67]
005C2FCA  8D BB 80 1F 00 00         LEA EDI,[EBX + 0x1f80]
005C2FD0  50                        PUSH EAX
005C2FD1  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005C2FD4  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005C2FD7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C2FDC  51                        PUSH ECX
005C2FDD  52                        PUSH EDX
005C2FDE  68 7F 40 40 00            PUSH 0x40407f
005C2FE3  6A 31                     PUSH 0x31
005C2FE5  57                        PUSH EDI
005C2FE6  50                        PUSH EAX
005C2FE7  E8 44 F3 0E 00            CALL 0x006b2330
005C2FEC  8B 0F                     MOV ECX,dword ptr [EDI]
005C2FEE  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C2FF4  68 B4 00 00 00            PUSH 0xb4
005C2FF9  6A 0A                     PUSH 0xa
005C2FFB  6A FF                     PUSH -0x1
005C2FFD  51                        PUSH ECX
005C2FFE  52                        PUSH EDX
005C2FFF  E8 3C 06 0F 00            CALL 0x006b3640
005C3004  6A 05                     PUSH 0x5
005C3006  68 0C 02 00 00            PUSH 0x20c
005C300B  6A 05                     PUSH 0x5
005C300D  6A 00                     PUSH 0x0
005C300F  E8 7C B2 0E 00            CALL 0x006ae290
005C3014  89 83 7C 1F 00 00         MOV dword ptr [EBX + 0x1f7c],EAX
005C301A  A1 F0 C0 79 00            MOV EAX,[0x0079c0f0]
005C301F  8B 0D EC C0 79 00         MOV ECX,dword ptr [0x0079c0ec]
005C3025  50                        PUSH EAX
005C3026  68 D8 72 7C 00            PUSH 0x7c72d8
005C302B  51                        PUSH ECX
005C302C  68 80 76 80 00            PUSH 0x807680
005C3031  8D 95 38 FC FF FF         LEA EDX,[EBP + 0xfffffc38]
005C3037  68 40 D1 7C 00            PUSH 0x7cd140
005C303C  52                        PUSH EDX
005C303D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C3043  83 C4 18                  ADD ESP,0x18
005C3046  8D 85 F8 FA FF FF         LEA EAX,[EBP + 0xfffffaf8]
005C304C  8D 8D 38 FC FF FF         LEA ECX,[EBP + 0xfffffc38]
005C3052  50                        PUSH EAX
005C3053  51                        PUSH ECX
005C3054  FF 15 EC BC 85 00         CALL dword ptr [0x0085bcec]
005C305A  8B F0                     MOV ESI,EAX
005C305C  33 C0                     XOR EAX,EAX
005C305E  83 FE FF                  CMP ESI,-0x1
005C3061  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005C3064  0F 95 C0                  SETNZ AL
005C3067  85 C0                     TEST EAX,EAX
005C3069  0F 84 B5 01 00 00         JZ 0x005c3224
LAB_005c306f:
005C306F  F6 85 F8 FA FF FF 10      TEST byte ptr [EBP + 0xfffffaf8],0x10
005C3076  0F 85 92 01 00 00         JNZ 0x005c320e
005C307C  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
005C3082  8D 8D 3C FF FF FF         LEA ECX,[EBP + 0xffffff3c]
005C3088  8D 85 38 FF FF FF         LEA EAX,[EBP + 0xffffff38]
005C308E  6A 00                     PUSH 0x0
005C3090  51                        PUSH ECX
005C3091  89 95 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDX
005C3097  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C309C  E8 4F A7 16 00            CALL 0x0072d7f0
005C30A1  83 C4 08                  ADD ESP,0x8
005C30A4  85 C0                     TEST EAX,EAX
005C30A6  0F 85 50 01 00 00         JNZ 0x005c31fc
005C30AC  A1 EC C0 79 00            MOV EAX,[0x0079c0ec]
005C30B1  8D 95 24 FB FF FF         LEA EDX,[EBP + 0xfffffb24]
005C30B7  52                        PUSH EDX
005C30B8  50                        PUSH EAX
005C30B9  68 80 76 80 00            PUSH 0x807680
005C30BE  8D 8D 38 FC FF FF         LEA ECX,[EBP + 0xfffffc38]
005C30C4  68 DC 6E 7C 00            PUSH 0x7c6edc
005C30C9  51                        PUSH ECX
005C30CA  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C30D0  6A 00                     PUSH 0x0
005C30D2  6A 00                     PUSH 0x0
005C30D4  8D 95 38 FC FF FF         LEA EDX,[EBP + 0xfffffc38]
005C30DA  6A 00                     PUSH 0x0
005C30DC  52                        PUSH EDX
005C30DD  68 45 03 00 00            PUSH 0x345
005C30E2  E8 D9 DD 12 00            CALL 0x006f0ec0
005C30E7  83 C4 28                  ADD ESP,0x28
005C30EA  8B F0                     MOV ESI,EAX
005C30EC  8B CE                     MOV ECX,ESI
005C30EE  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
005C30F1  6A 00                     PUSH 0x0
005C30F3  68 30 D1 7C 00            PUSH 0x7cd130
005C30F8  6A 0C                     PUSH 0xc
005C30FA  E8 A1 F3 12 00            CALL 0x006f24a0
005C30FF  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005C3102  85 C0                     TEST EAX,EAX
005C3104  0F 8C DB 00 00 00         JL 0x005c31e5
005C310A  83 F8 04                  CMP EAX,0x4
005C310D  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005C3114  75 08                     JNZ 0x005c311e
005C3116  8D 45 F8                  LEA EAX,[EBP + -0x8]
005C3119  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005C311C  EB 09                     JMP 0x005c3127
LAB_005c311e:
005C311E  8D 8D 38 FC FF FF         LEA ECX,[EBP + 0xfffffc38]
005C3124  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_005c3127:
005C3127  8D 55 F4                  LEA EDX,[EBP + -0xc]
005C312A  6A 00                     PUSH 0x0
005C312C  52                        PUSH EDX
005C312D  68 30 D1 7C 00            PUSH 0x7cd130
005C3132  6A 0C                     PUSH 0xc
005C3134  8B CE                     MOV ECX,ESI
005C3136  E8 A5 EB 12 00            CALL 0x006f1ce0
005C313B  85 C0                     TEST EAX,EAX
005C313D  0F 84 A2 00 00 00         JZ 0x005c31e5
005C3143  8D 85 EC F8 FF FF         LEA EAX,[EBP + 0xfffff8ec]
005C3149  6A 00                     PUSH 0x0
005C314B  50                        PUSH EAX
005C314C  6A 00                     PUSH 0x0
005C314E  8D 8D 24 FB FF FF         LEA ECX,[EBP + 0xfffffb24]
005C3154  6A 00                     PUSH 0x0
005C3156  51                        PUSH ECX
005C3157  E8 D4 B5 16 00            CALL 0x0072e730
005C315C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005C315F  83 C4 14                  ADD ESP,0x14
005C3162  25 FF 00 00 00            AND EAX,0xff
005C3167  83 F8 03                  CMP EAX,0x3
005C316A  77 23                     JA 0x005c318f
switchD_005c316c::switchD:
005C316C  FF 24 85 CC 42 5C 00      JMP dword ptr [EAX*0x4 + 0x5c42cc]
switchD_005c316c::caseD_0:
005C3173  B8 42 4A 00 00            MOV EAX,0x4a42
005C3178  EB 1A                     JMP 0x005c3194
switchD_005c316c::caseD_1:
005C317A  B8 43 4A 00 00            MOV EAX,0x4a43
005C317F  EB 13                     JMP 0x005c3194
switchD_005c316c::caseD_2:
005C3181  B8 44 4A 00 00            MOV EAX,0x4a44
005C3186  EB 0C                     JMP 0x005c3194
switchD_005c316c::caseD_3:
005C3188  B8 45 4A 00 00            MOV EAX,0x4a45
005C318D  EB 05                     JMP 0x005c3194
switchD_005c316c::default:
005C318F  B8 46 4A 00 00            MOV EAX,0x4a46
LAB_005c3194:
005C3194  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C319A  52                        PUSH EDX
005C319B  50                        PUSH EAX
005C319C  E8 9F CF 0E 00            CALL 0x006b0140
005C31A1  8B F8                     MOV EDI,EAX
005C31A3  83 C9 FF                  OR ECX,0xffffffff
005C31A6  33 C0                     XOR EAX,EAX
005C31A8  8D 95 F0 F9 FF FF         LEA EDX,[EBP + 0xfffff9f0]
005C31AE  F2 AE                     SCASB.REPNE ES:EDI
005C31B0  F7 D1                     NOT ECX
005C31B2  2B F9                     SUB EDI,ECX
005C31B4  8B C1                     MOV EAX,ECX
005C31B6  8B F7                     MOV ESI,EDI
005C31B8  8B FA                     MOV EDI,EDX
005C31BA  8D 95 EC F8 FF FF         LEA EDX,[EBP + 0xfffff8ec]
005C31C0  C1 E9 02                  SHR ECX,0x2
005C31C3  F3 A5                     MOVSD.REP ES:EDI,ESI
005C31C5  8B C8                     MOV ECX,EAX
005C31C7  8B 83 7C 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f7c]
005C31CD  83 E1 03                  AND ECX,0x3
005C31D0  52                        PUSH EDX
005C31D1  F3 A4                     MOVSB.REP ES:EDI,ESI
005C31D3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005C31D6  50                        PUSH EAX
005C31D7  89 8D F4 FA FF FF         MOV dword ptr [EBP + 0xfffffaf4],ECX
005C31DD  E8 DE AF 0E 00            CALL 0x006ae1c0
005C31E2  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_005c31e5:
005C31E5  56                        PUSH ESI
005C31E6  E8 85 DF 12 00            CALL 0x006f1170
005C31EB  8B 8D 38 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff38]
005C31F1  83 C4 04                  ADD ESP,0x4
005C31F4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C31FA  EB 0F                     JMP 0x005c320b
LAB_005c31fc:
005C31FC  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
005C3202  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005C3205  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_005c320b:
005C320B  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_005c320e:
005C320E  8D 85 F8 FA FF FF         LEA EAX,[EBP + 0xfffffaf8]
005C3214  50                        PUSH EAX
005C3215  56                        PUSH ESI
005C3216  FF 15 F0 BC 85 00         CALL dword ptr [0x0085bcf0]
005C321C  85 C0                     TEST EAX,EAX
005C321E  0F 85 4B FE FF FF         JNZ 0x005c306f
LAB_005c3224:
005C3224  83 FE FF                  CMP ESI,-0x1
005C3227  74 07                     JZ 0x005c3230
005C3229  56                        PUSH ESI
005C322A  FF 15 F4 BC 85 00         CALL dword ptr [0x0085bcf4]
LAB_005c3230:
005C3230  8B 8B 7C 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f7c]
005C3236  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005C3239  83 F8 01                  CMP EAX,0x1
005C323C  7E 6A                     JLE 0x005c32a8
005C323E  48                        DEC EAX
005C323F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_005c3242:
005C3242  33 D2                     XOR EDX,EDX
005C3244  3B C2                     CMP EAX,EDX
005C3246  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005C3249  7E 56                     JLE 0x005c32a1
LAB_005c324b:
005C324B  8B 83 7C 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f7c]
005C3251  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005C3254  3B D1                     CMP EDX,ECX
005C3256  73 0D                     JNC 0x005c3265
005C3258  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
005C325B  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
005C325E  0F AF FA                  IMUL EDI,EDX
005C3261  03 FE                     ADD EDI,ESI
005C3263  EB 02                     JMP 0x005c3267
LAB_005c3265:
005C3265  33 FF                     XOR EDI,EDI
LAB_005c3267:
005C3267  8D 72 01                  LEA ESI,[EDX + 0x1]
005C326A  3B F1                     CMP ESI,ECX
005C326C  73 0B                     JNC 0x005c3279
005C326E  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005C3271  0F AF CE                  IMUL ECX,ESI
005C3274  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
005C3277  EB 02                     JMP 0x005c327b
LAB_005c3279:
005C3279  33 C9                     XOR ECX,ECX
LAB_005c327b:
005C327B  8B BF 08 02 00 00         MOV EDI,dword ptr [EDI + 0x208]
005C3281  3B B9 08 02 00 00         CMP EDI,dword ptr [ECX + 0x208]
005C3287  76 0F                     JBE 0x005c3298
005C3289  56                        PUSH ESI
005C328A  52                        PUSH EDX
005C328B  50                        PUSH EAX
005C328C  E8 3F DA 0E 00            CALL 0x006b0cd0
005C3291  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
LAB_005c3298:
005C3298  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005C329B  8B D6                     MOV EDX,ESI
005C329D  3B D0                     CMP EDX,EAX
005C329F  7C AA                     JL 0x005c324b
LAB_005c32a1:
005C32A1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005C32A4  85 C9                     TEST ECX,ECX
005C32A6  75 9A                     JNZ 0x005c3242
LAB_005c32a8:
005C32A8  8B 93 7C 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f7c]
005C32AE  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005C32B1  85 C0                     TEST EAX,EAX
005C32B3  75 17                     JNZ 0x005c32cc
005C32B5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005C32BA  68 D7 00 00 00            PUSH 0xd7
005C32BF  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C32C4  50                        PUSH EAX
005C32C5  6A FF                     PUSH -0x1
005C32C7  E8 74 2B 0E 00            CALL 0x006a5e40
LAB_005c32cc:
005C32CC  8B 8B 7C 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f7c]
005C32D2  8B 83 58 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f58]
005C32D8  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005C32DB  4A                        DEC EDX
005C32DC  3B C2                     CMP EAX,EDX
005C32DE  7E 0A                     JLE 0x005c32ea
005C32E0  C7 83 58 1F 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1f58],0x0
LAB_005c32ea:
005C32EA  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C32F0  C6 83 E1 21 00 00 01      MOV byte ptr [EBX + 0x21e1],0x1
005C32F7  3C 0D                     CMP AL,0xd
005C32F9  C6 83 E5 21 00 00 01      MOV byte ptr [EBX + 0x21e5],0x1
005C3300  74 0C                     JZ 0x005c330e
005C3302  3C 0F                     CMP AL,0xf
005C3304  74 08                     JZ 0x005c330e
005C3306  3C 0E                     CMP AL,0xe
005C3308  74 04                     JZ 0x005c330e
005C330A  3C 10                     CMP AL,0x10
005C330C  75 22                     JNZ 0x005c3330
LAB_005c330e:
005C330E  83 BB 27 1E 00 00 11      CMP dword ptr [EBX + 0x1e27],0x11
005C3315  75 19                     JNZ 0x005c3330
005C3317  3C 0E                     CMP AL,0xe
005C3319  C6 83 E4 21 00 00 01      MOV byte ptr [EBX + 0x21e4],0x1
005C3320  C6 83 E6 21 00 00 01      MOV byte ptr [EBX + 0x21e6],0x1
005C3327  74 07                     JZ 0x005c3330
005C3329  C6 83 E2 21 00 00 01      MOV byte ptr [EBX + 0x21e2],0x1
LAB_005c3330:
005C3330  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C3335  6A 00                     PUSH 0x0
005C3337  6A 00                     PUSH 0x0
005C3339  6A 00                     PUSH 0x0
005C333B  8D B3 6B 1C 00 00         LEA ESI,[EBX + 0x1c6b]
005C3341  6A 07                     PUSH 0x7
005C3343  6A 31                     PUSH 0x31
005C3345  50                        PUSH EAX
005C3346  8B CE                     MOV ECX,ESI
005C3348  E8 53 25 15 00            CALL 0x007158a0
005C334D  A1 84 67 80 00            MOV EAX,[0x00806784]
005C3352  8B 16                     MOV EDX,dword ptr [ESI]
005C3354  6A FF                     PUSH -0x1
005C3356  68 4C C0 7C 00            PUSH 0x7cc04c
005C335B  6A 00                     PUSH 0x0
005C335D  6A 07                     PUSH 0x7
005C335F  50                        PUSH EAX
005C3360  8B CE                     MOV ECX,ESI
005C3362  FF 52 04                  CALL dword ptr [EDX + 0x4]
005C3365  BF FA 02 00 00            MOV EDI,0x2fa
005C336A  6A 00                     PUSH 0x0
005C336C  6A 00                     PUSH 0x0
005C336E  89 BB 87 1C 00 00         MOV dword ptr [EBX + 0x1c87],EDI
005C3374  C7 83 8B 1C 00 00 3B 00 00 00  MOV dword ptr [EBX + 0x1c8b],0x3b
005C337E  C7 83 73 1C 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1c73],0x0
005C3388  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C338E  6A 00                     PUSH 0x0
005C3390  6A 07                     PUSH 0x7
005C3392  8D B3 FC 1C 00 00         LEA ESI,[EBX + 0x1cfc]
005C3398  6A 31                     PUSH 0x31
005C339A  51                        PUSH ECX
005C339B  8B CE                     MOV ECX,ESI
005C339D  E8 FE 24 15 00            CALL 0x007158a0
005C33A2  A1 84 67 80 00            MOV EAX,[0x00806784]
005C33A7  8B 16                     MOV EDX,dword ptr [ESI]
005C33A9  6A FF                     PUSH -0x1
005C33AB  68 40 C0 7C 00            PUSH 0x7cc040
005C33B0  6A 00                     PUSH 0x0
005C33B2  6A 07                     PUSH 0x7
005C33B4  50                        PUSH EAX
005C33B5  8B CE                     MOV ECX,ESI
005C33B7  FF 52 04                  CALL dword ptr [EDX + 0x4]
005C33BA  89 BB 18 1D 00 00         MOV dword ptr [EBX + 0x1d18],EDI
005C33C0  33 FF                     XOR EDI,EDI
005C33C2  57                        PUSH EDI
005C33C3  57                        PUSH EDI
005C33C4  C7 83 1C 1D 00 00 1E 01 00 00  MOV dword ptr [EBX + 0x1d1c],0x11e
005C33CE  89 BB 04 1D 00 00         MOV dword ptr [EBX + 0x1d04],EDI
005C33D4  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C33DA  57                        PUSH EDI
005C33DB  6A 07                     PUSH 0x7
005C33DD  8D B3 8D 1D 00 00         LEA ESI,[EBX + 0x1d8d]
005C33E3  6A 31                     PUSH 0x31
005C33E5  51                        PUSH ECX
005C33E6  8B CE                     MOV ECX,ESI
005C33E8  E8 B3 24 15 00            CALL 0x007158a0
005C33ED  A1 84 67 80 00            MOV EAX,[0x00806784]
005C33F2  8B 16                     MOV EDX,dword ptr [ESI]
005C33F4  6A FF                     PUSH -0x1
005C33F6  68 34 C0 7C 00            PUSH 0x7cc034
005C33FB  57                        PUSH EDI
005C33FC  6A 07                     PUSH 0x7
005C33FE  50                        PUSH EAX
005C33FF  8B CE                     MOV ECX,ESI
005C3401  FF 52 04                  CALL dword ptr [EDX + 0x4]
005C3404  C7 83 A9 1D 00 00 FF 02 00 00  MOV dword ptr [EBX + 0x1da9],0x2ff
005C340E  C7 83 AD 1D 00 00 5B 00 00 00  MOV dword ptr [EBX + 0x1dad],0x5b
005C3418  89 BB 95 1D 00 00         MOV dword ptr [EBX + 0x1d95],EDI
005C341E  C7 45 F8 41 00 00 00      MOV dword ptr [EBP + -0x8],0x41
005C3425  8D B3 F4 20 00 00         LEA ESI,[EBX + 0x20f4]
LAB_005c342b:
005C342B  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005C342E  6A 01                     PUSH 0x1
005C3430  8D 48 28                  LEA ECX,[EAX + 0x28]
005C3433  51                        PUSH ECX
005C3434  50                        PUSH EAX
005C3435  E8 A6 1B 0F 00            CALL 0x006b4fe0
005C343A  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005C343D  50                        PUSH EAX
005C343E  33 C0                     XOR EAX,EAX
005C3440  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005C3444  50                        PUSH EAX
005C3445  6A 14                     PUSH 0x14
005C3447  68 E5 01 00 00            PUSH 0x1e5
005C344C  E8 6F 1C 0F 00            CALL 0x006b50c0
005C3451  89 06                     MOV dword ptr [ESI],EAX
005C3453  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005C3456  85 C9                     TEST ECX,ECX
005C3458  75 18                     JNZ 0x005c3472
005C345A  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005C345E  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
005C3462  83 C1 1F                  ADD ECX,0x1f
005C3465  C1 E9 03                  SHR ECX,0x3
005C3468  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
005C346E  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_005c3472:
005C3472  50                        PUSH EAX
005C3473  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005C3476  E8 25 1B 0F 00            CALL 0x006b4fa0
005C347B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005C347E  8B F8                     MOV EDI,EAX
005C3480  8B D1                     MOV EDX,ECX
005C3482  83 C8 FF                  OR EAX,0xffffffff
005C3485  C1 E9 02                  SHR ECX,0x2
005C3488  F3 AB                     STOSD.REP ES:EDI
005C348A  8B CA                     MOV ECX,EDX
005C348C  83 E1 03                  AND ECX,0x3
005C348F  F3 AA                     STOSB.REP ES:EDI
005C3491  8B 06                     MOV EAX,dword ptr [ESI]
005C3493  8D 7E D8                  LEA EDI,[ESI + -0x28]
005C3496  50                        PUSH EAX
005C3497  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005C349A  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005C349D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C34A2  51                        PUSH ECX
005C34A3  52                        PUSH EDX
005C34A4  68 7F 40 40 00            PUSH 0x40407f
005C34A9  6A 31                     PUSH 0x31
005C34AB  57                        PUSH EDI
005C34AC  50                        PUSH EAX
005C34AD  E8 7E EE 0E 00            CALL 0x006b2330
005C34B2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005C34B5  8B 17                     MOV EDX,dword ptr [EDI]
005C34B7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C34BC  51                        PUSH ECX
005C34BD  68 13 01 00 00            PUSH 0x113
005C34C2  6A FF                     PUSH -0x1
005C34C4  52                        PUSH EDX
005C34C5  50                        PUSH EAX
005C34C6  E8 75 01 0F 00            CALL 0x006b3640
005C34CB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005C34CE  83 C6 04                  ADD ESI,0x4
005C34D1  83 C0 19                  ADD EAX,0x19
005C34D4  3D 3B 01 00 00            CMP EAX,0x13b
005C34D9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005C34DC  0F 8C 49 FF FF FF         JL 0x005c342b
005C34E2  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005C34E5  6A 01                     PUSH 0x1
005C34E7  8D 48 28                  LEA ECX,[EAX + 0x28]
005C34EA  51                        PUSH ECX
005C34EB  50                        PUSH EAX
005C34EC  E8 EF 1A 0F 00            CALL 0x006b4fe0
005C34F1  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005C34F4  50                        PUSH EAX
005C34F5  33 C0                     XOR EAX,EAX
005C34F7  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005C34FB  50                        PUSH EAX
005C34FC  68 8C 00 00 00            PUSH 0x8c
005C3501  68 05 02 00 00            PUSH 0x205
005C3506  E8 B5 1B 0F 00            CALL 0x006b50c0
005C350B  89 83 1E 1E 00 00         MOV dword ptr [EBX + 0x1e1e],EAX
005C3511  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005C3514  85 F6                     TEST ESI,ESI
005C3516  75 18                     JNZ 0x005c3530
005C3518  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
005C351C  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
005C3520  83 C6 1F                  ADD ESI,0x1f
005C3523  C1 EE 03                  SHR ESI,0x3
005C3526  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
005C352C  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_005c3530:
005C3530  50                        PUSH EAX
005C3531  E8 6A 1A 0F 00            CALL 0x006b4fa0
005C3536  8B CE                     MOV ECX,ESI
005C3538  8B F8                     MOV EDI,EAX
005C353A  8B D1                     MOV EDX,ECX
005C353C  83 C8 FF                  OR EAX,0xffffffff
005C353F  C1 E9 02                  SHR ECX,0x2
005C3542  F3 AB                     STOSD.REP ES:EDI
005C3544  8B CA                     MOV ECX,EDX
005C3546  83 E1 03                  AND ECX,0x3
005C3549  F3 AA                     STOSB.REP ES:EDI
005C354B  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C3551  3C 06                     CMP AL,0x6
005C3553  74 14                     JZ 0x005c3569
005C3555  3C 01                     CMP AL,0x1
005C3557  74 10                     JZ 0x005c3569
005C3559  3C 04                     CMP AL,0x4
005C355B  74 0C                     JZ 0x005c3569
005C355D  3C 07                     CMP AL,0x7
005C355F  74 08                     JZ 0x005c3569
005C3561  3C 0D                     CMP AL,0xd
005C3563  74 04                     JZ 0x005c3569
005C3565  3C 0E                     CMP AL,0xe
005C3567  75 7A                     JNZ 0x005c35e3
LAB_005c3569:
005C3569  83 BB 27 1E 00 00 13      CMP dword ptr [EBX + 0x1e27],0x13
005C3570  75 0D                     JNZ 0x005c357f
005C3572  A0 00 34 80 00            MOV AL,[0x00803400]
005C3577  3C 14                     CMP AL,0x14
005C3579  74 68                     JZ 0x005c35e3
005C357B  3C 15                     CMP AL,0x15
005C357D  74 64                     JZ 0x005c35e3
LAB_005c357f:
005C357F  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C3585  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C358B  6A 14                     PUSH 0x14
005C358D  68 A5 00 00 00            PUSH 0xa5
005C3592  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C3595  6A 05                     PUSH 0x5
005C3597  6A 08                     PUSH 0x8
005C3599  6A 00                     PUSH 0x0
005C359B  50                        PUSH EAX
005C359C  E8 EF D4 14 00            CALL 0x00710a90
005C35A1  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C35A7  6A 02                     PUSH 0x2
005C35A9  6A FF                     PUSH -0x1
005C35AB  6A FD                     PUSH -0x3
005C35AD  68 A5 00 00 00            PUSH 0xa5
005C35B2  68 A0 16 80 00            PUSH 0x8016a0
005C35B7  52                        PUSH EDX
005C35B8  68 6D 25 00 00            PUSH 0x256d
005C35BD  E8 7E CB 0E 00            CALL 0x006b0140
005C35C2  50                        PUSH EAX
005C35C3  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C35C8  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C35CB  51                        PUSH ECX
005C35CC  E8 9E FC E3 FF            CALL 0x0040326f
005C35D1  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C35D7  83 C4 10                  ADD ESP,0x10
005C35DA  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C35DD  50                        PUSH EAX
005C35DE  E8 DD E3 14 00            CALL 0x007119c0
LAB_005c35e3:
005C35E3  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C35E9  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C35EF  6A 14                     PUSH 0x14
005C35F1  68 A5 00 00 00            PUSH 0xa5
005C35F6  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C35F9  33 F6                     XOR ESI,ESI
005C35FB  6A 1B                     PUSH 0x1b
005C35FD  6A 08                     PUSH 0x8
005C35FF  56                        PUSH ESI
005C3600  50                        PUSH EAX
005C3601  E8 8A D4 14 00            CALL 0x00710a90
005C3606  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C360C  6A 02                     PUSH 0x2
005C360E  6A FF                     PUSH -0x1
005C3610  6A FD                     PUSH -0x3
005C3612  68 A5 00 00 00            PUSH 0xa5
005C3617  68 A0 16 80 00            PUSH 0x8016a0
005C361C  52                        PUSH EDX
005C361D  68 4B 1F 00 00            PUSH 0x1f4b
005C3622  E8 19 CB 0E 00            CALL 0x006b0140
005C3627  50                        PUSH EAX
005C3628  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C362D  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C3630  51                        PUSH ECX
005C3631  E8 39 FC E3 FF            CALL 0x0040326f
005C3636  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C363C  83 C4 10                  ADD ESP,0x10
005C363F  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C3642  50                        PUSH EAX
005C3643  E8 78 E3 14 00            CALL 0x007119c0
005C3648  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C364E  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C3654  6A 14                     PUSH 0x14
005C3656  68 A5 00 00 00            PUSH 0xa5
005C365B  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C365E  6A 1B                     PUSH 0x1b
005C3660  68 04 01 00 00            PUSH 0x104
005C3665  56                        PUSH ESI
005C3666  50                        PUSH EAX
005C3667  E8 24 D4 14 00            CALL 0x00710a90
005C366C  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C3672  6A 02                     PUSH 0x2
005C3674  6A FF                     PUSH -0x1
005C3676  6A FD                     PUSH -0x3
005C3678  68 A5 00 00 00            PUSH 0xa5
005C367D  68 A0 16 80 00            PUSH 0x8016a0
005C3682  52                        PUSH EDX
005C3683  68 4C 1F 00 00            PUSH 0x1f4c
005C3688  E8 B3 CA 0E 00            CALL 0x006b0140
005C368D  50                        PUSH EAX
005C368E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C3693  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C3696  51                        PUSH ECX
005C3697  E8 D3 FB E3 FF            CALL 0x0040326f
005C369C  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C36A2  83 C4 10                  ADD ESP,0x10
005C36A5  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C36A8  50                        PUSH EAX
005C36A9  E8 12 E3 14 00            CALL 0x007119c0
005C36AE  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C36B4  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C36BA  6A 14                     PUSH 0x14
005C36BC  68 A5 00 00 00            PUSH 0xa5
005C36C1  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C36C4  6A 31                     PUSH 0x31
005C36C6  6A 08                     PUSH 0x8
005C36C8  56                        PUSH ESI
005C36C9  50                        PUSH EAX
005C36CA  E8 C1 D3 14 00            CALL 0x00710a90
005C36CF  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C36D5  6A 02                     PUSH 0x2
005C36D7  6A FF                     PUSH -0x1
005C36D9  6A FD                     PUSH -0x3
005C36DB  68 A5 00 00 00            PUSH 0xa5
005C36E0  68 A0 16 80 00            PUSH 0x8016a0
005C36E5  52                        PUSH EDX
005C36E6  68 4D 1F 00 00            PUSH 0x1f4d
005C36EB  E8 50 CA 0E 00            CALL 0x006b0140
005C36F0  50                        PUSH EAX
005C36F1  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C36F6  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C36F9  51                        PUSH ECX
005C36FA  E8 70 FB E3 FF            CALL 0x0040326f
005C36FF  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C3705  83 C4 10                  ADD ESP,0x10
005C3708  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C370B  50                        PUSH EAX
005C370C  E8 AF E2 14 00            CALL 0x007119c0
005C3711  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C3717  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C371D  6A 14                     PUSH 0x14
005C371F  68 A5 00 00 00            PUSH 0xa5
005C3724  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C3727  6A 31                     PUSH 0x31
005C3729  68 04 01 00 00            PUSH 0x104
005C372E  56                        PUSH ESI
005C372F  50                        PUSH EAX
005C3730  E8 5B D3 14 00            CALL 0x00710a90
005C3735  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C373B  6A 02                     PUSH 0x2
005C373D  6A FF                     PUSH -0x1
005C373F  6A FD                     PUSH -0x3
005C3741  68 A5 00 00 00            PUSH 0xa5
005C3746  68 A0 16 80 00            PUSH 0x8016a0
005C374B  52                        PUSH EDX
005C374C  68 4E 1F 00 00            PUSH 0x1f4e
005C3751  E8 EA C9 0E 00            CALL 0x006b0140
005C3756  50                        PUSH EAX
005C3757  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C375C  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C375F  51                        PUSH ECX
005C3760  E8 0A FB E3 FF            CALL 0x0040326f
005C3765  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C376B  83 C4 10                  ADD ESP,0x10
005C376E  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C3771  50                        PUSH EAX
005C3772  E8 49 E2 14 00            CALL 0x007119c0
005C3777  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C377D  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C3783  6A 14                     PUSH 0x14
005C3785  68 A5 00 00 00            PUSH 0xa5
005C378A  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C378D  6A 47                     PUSH 0x47
005C378F  6A 08                     PUSH 0x8
005C3791  56                        PUSH ESI
005C3792  50                        PUSH EAX
005C3793  E8 F8 D2 14 00            CALL 0x00710a90
005C3798  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C379E  6A 02                     PUSH 0x2
005C37A0  6A FF                     PUSH -0x1
005C37A2  6A FD                     PUSH -0x3
005C37A4  68 A5 00 00 00            PUSH 0xa5
005C37A9  68 A0 16 80 00            PUSH 0x8016a0
005C37AE  52                        PUSH EDX
005C37AF  68 4F 1F 00 00            PUSH 0x1f4f
005C37B4  E8 87 C9 0E 00            CALL 0x006b0140
005C37B9  50                        PUSH EAX
005C37BA  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C37BF  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C37C2  51                        PUSH ECX
005C37C3  E8 A7 FA E3 FF            CALL 0x0040326f
005C37C8  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C37CE  83 C4 10                  ADD ESP,0x10
005C37D1  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C37D4  50                        PUSH EAX
005C37D5  E8 E6 E1 14 00            CALL 0x007119c0
005C37DA  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C37E0  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C37E6  6A 14                     PUSH 0x14
005C37E8  68 A5 00 00 00            PUSH 0xa5
005C37ED  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C37F0  6A 47                     PUSH 0x47
005C37F2  68 04 01 00 00            PUSH 0x104
005C37F7  56                        PUSH ESI
005C37F8  50                        PUSH EAX
005C37F9  E8 92 D2 14 00            CALL 0x00710a90
005C37FE  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C3804  6A 02                     PUSH 0x2
005C3806  6A FF                     PUSH -0x1
005C3808  6A FD                     PUSH -0x3
005C380A  68 A5 00 00 00            PUSH 0xa5
005C380F  68 A0 16 80 00            PUSH 0x8016a0
005C3814  52                        PUSH EDX
005C3815  68 56 1F 00 00            PUSH 0x1f56
005C381A  E8 21 C9 0E 00            CALL 0x006b0140
005C381F  50                        PUSH EAX
005C3820  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C3825  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C3828  51                        PUSH ECX
005C3829  E8 41 FA E3 FF            CALL 0x0040326f
005C382E  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C3834  83 C4 10                  ADD ESP,0x10
005C3837  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C383A  50                        PUSH EAX
005C383B  E8 80 E1 14 00            CALL 0x007119c0
005C3840  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C3846  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C384C  6A 14                     PUSH 0x14
005C384E  6A 64                     PUSH 0x64
005C3850  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C3853  6A 5D                     PUSH 0x5d
005C3855  6A 0A                     PUSH 0xa
005C3857  56                        PUSH ESI
005C3858  50                        PUSH EAX
005C3859  E8 32 D2 14 00            CALL 0x00710a90
005C385E  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C3864  6A 02                     PUSH 0x2
005C3866  6A FF                     PUSH -0x1
005C3868  6A FD                     PUSH -0x3
005C386A  6A 64                     PUSH 0x64
005C386C  68 A0 16 80 00            PUSH 0x8016a0
005C3871  52                        PUSH EDX
005C3872  68 51 1F 00 00            PUSH 0x1f51
005C3877  E8 C4 C8 0E 00            CALL 0x006b0140
005C387C  50                        PUSH EAX
005C387D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C3882  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C3885  51                        PUSH ECX
005C3886  E8 E4 F9 E3 FF            CALL 0x0040326f
005C388B  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C3891  83 C4 10                  ADD ESP,0x10
005C3894  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C3897  50                        PUSH EAX
005C3898  E8 23 E1 14 00            CALL 0x007119c0
005C389D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C38A3  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C38A9  6A 14                     PUSH 0x14
005C38AB  68 82 00 00 00            PUSH 0x82
005C38B0  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C38B3  6A 5D                     PUSH 0x5d
005C38B5  68 96 00 00 00            PUSH 0x96
005C38BA  56                        PUSH ESI
005C38BB  50                        PUSH EAX
005C38BC  E8 CF D1 14 00            CALL 0x00710a90
005C38C1  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C38C7  6A 02                     PUSH 0x2
005C38C9  6A FF                     PUSH -0x1
005C38CB  6A FD                     PUSH -0x3
005C38CD  68 82 00 00 00            PUSH 0x82
005C38D2  68 A0 16 80 00            PUSH 0x8016a0
005C38D7  52                        PUSH EDX
005C38D8  68 58 1F 00 00            PUSH 0x1f58
005C38DD  E8 5E C8 0E 00            CALL 0x006b0140
005C38E2  50                        PUSH EAX
005C38E3  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C38E8  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C38EB  51                        PUSH ECX
005C38EC  E8 7E F9 E3 FF            CALL 0x0040326f
005C38F1  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C38F7  83 C4 10                  ADD ESP,0x10
005C38FA  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C38FD  50                        PUSH EAX
005C38FE  E8 BD E0 14 00            CALL 0x007119c0
005C3903  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C3909  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C390F  6A 14                     PUSH 0x14
005C3911  68 A0 00 00 00            PUSH 0xa0
005C3916  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C3919  6A 5D                     PUSH 0x5d
005C391B  68 40 01 00 00            PUSH 0x140
005C3920  56                        PUSH ESI
005C3921  50                        PUSH EAX
005C3922  E8 69 D1 14 00            CALL 0x00710a90
005C3927  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C392D  6A 02                     PUSH 0x2
005C392F  6A FF                     PUSH -0x1
005C3931  6A FD                     PUSH -0x3
005C3933  68 A0 00 00 00            PUSH 0xa0
005C3938  68 A0 16 80 00            PUSH 0x8016a0
005C393D  52                        PUSH EDX
005C393E  68 50 1F 00 00            PUSH 0x1f50
005C3943  E8 F8 C7 0E 00            CALL 0x006b0140
005C3948  50                        PUSH EAX
005C3949  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C394E  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C3951  51                        PUSH ECX
005C3952  E8 18 F9 E3 FF            CALL 0x0040326f
005C3957  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C395D  83 C4 10                  ADD ESP,0x10
005C3960  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C3963  50                        PUSH EAX
005C3964  E8 57 E0 14 00            CALL 0x007119c0
005C3969  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C396F  3C 06                     CMP AL,0x6
005C3971  0F 84 D9 00 00 00         JZ 0x005c3a50
005C3977  3C 01                     CMP AL,0x1
005C3979  0F 84 D1 00 00 00         JZ 0x005c3a50
005C397F  3C 02                     CMP AL,0x2
005C3981  0F 84 C9 00 00 00         JZ 0x005c3a50
005C3987  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C398D  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C3993  6A 14                     PUSH 0x14
005C3995  68 E1 00 00 00            PUSH 0xe1
005C399A  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C399D  6A 73                     PUSH 0x73
005C399F  6A 08                     PUSH 0x8
005C39A1  56                        PUSH ESI
005C39A2  50                        PUSH EAX
005C39A3  E8 E8 D0 14 00            CALL 0x00710a90
005C39A8  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C39AE  6A 02                     PUSH 0x2
005C39B0  6A FF                     PUSH -0x1
005C39B2  6A FD                     PUSH -0x3
005C39B4  68 E1 00 00 00            PUSH 0xe1
005C39B9  68 A0 16 80 00            PUSH 0x8016a0
005C39BE  52                        PUSH EDX
005C39BF  68 54 1F 00 00            PUSH 0x1f54
005C39C4  E8 77 C7 0E 00            CALL 0x006b0140
005C39C9  50                        PUSH EAX
005C39CA  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C39CF  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C39D2  51                        PUSH ECX
005C39D3  E8 97 F8 E3 FF            CALL 0x0040326f
005C39D8  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C39DE  83 C4 10                  ADD ESP,0x10
005C39E1  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C39E4  50                        PUSH EAX
005C39E5  E8 D6 DF 14 00            CALL 0x007119c0
005C39EA  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C39F0  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C39F6  6A 14                     PUSH 0x14
005C39F8  68 DC 00 00 00            PUSH 0xdc
005C39FD  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C3A00  6A 73                     PUSH 0x73
005C3A02  68 04 01 00 00            PUSH 0x104
005C3A07  56                        PUSH ESI
005C3A08  50                        PUSH EAX
005C3A09  E8 82 D0 14 00            CALL 0x00710a90
005C3A0E  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C3A14  6A 02                     PUSH 0x2
005C3A16  6A FF                     PUSH -0x1
005C3A18  6A FD                     PUSH -0x3
005C3A1A  68 E1 00 00 00            PUSH 0xe1
005C3A1F  68 A0 16 80 00            PUSH 0x8016a0
005C3A24  52                        PUSH EDX
005C3A25  68 53 1F 00 00            PUSH 0x1f53
005C3A2A  E8 11 C7 0E 00            CALL 0x006b0140
005C3A2F  50                        PUSH EAX
005C3A30  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C3A35  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005C3A38  51                        PUSH ECX
005C3A39  E8 31 F8 E3 FF            CALL 0x0040326f
005C3A3E  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C3A44  83 C4 10                  ADD ESP,0x10
005C3A47  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C3A4A  50                        PUSH EAX
005C3A4B  E8 70 DF 14 00            CALL 0x007119c0
LAB_005c3a50:
005C3A50  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005C3A56  8D BB 22 1E 00 00         LEA EDI,[EBX + 0x1e22]
005C3A5C  50                        PUSH EAX
005C3A5D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005C3A60  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005C3A63  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C3A68  51                        PUSH ECX
005C3A69  52                        PUSH EDX
005C3A6A  68 7F 40 40 00            PUSH 0x40407f
005C3A6F  6A 31                     PUSH 0x31
005C3A71  57                        PUSH EDI
005C3A72  50                        PUSH EAX
005C3A73  E8 B8 E8 0E 00            CALL 0x006b2330
005C3A78  8B 0F                     MOV ECX,dword ptr [EDI]
005C3A7A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C3A80  68 49 01 00 00            PUSH 0x149
005C3A85  68 12 01 00 00            PUSH 0x112
005C3A8A  6A FF                     PUSH -0x1
005C3A8C  51                        PUSH ECX
005C3A8D  52                        PUSH EDX
005C3A8E  E8 AD FB 0E 00            CALL 0x006b3640
005C3A93  8B 03                     MOV EAX,dword ptr [EBX]
005C3A95  6A 01                     PUSH 0x1
005C3A97  8B CB                     MOV ECX,EBX
005C3A99  FF 50 18                  CALL dword ptr [EAX + 0x18]
005C3A9C  8A 83 E2 21 00 00         MOV AL,byte ptr [EBX + 0x21e2]
005C3AA2  84 C0                     TEST AL,AL
005C3AA4  0F 84 8F 01 00 00         JZ 0x005c3c39
005C3AAA  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005C3AB0  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C3AB5  81 C1 40 01 00 00         ADD ECX,0x140
005C3ABB  8D 55 FC                  LEA EDX,[EBP + -0x4]
005C3ABE  51                        PUSH ECX
005C3ABF  68 21 01 00 00            PUSH 0x121
005C3AC4  68 F9 00 00 00            PUSH 0xf9
005C3AC9  68 D2 42 40 00            PUSH 0x4042d2
005C3ACE  6A 32                     PUSH 0x32
005C3AD0  52                        PUSH EDX
005C3AD1  50                        PUSH EAX
005C3AD2  E8 59 E8 0E 00            CALL 0x006b2330
005C3AD7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005C3ADA  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C3AE0  68 B4 00 00 00            PUSH 0xb4
005C3AE5  6A 0A                     PUSH 0xa
005C3AE7  6A FF                     PUSH -0x1
005C3AE9  51                        PUSH ECX
005C3AEA  52                        PUSH EDX
005C3AEB  E8 50 FB 0E 00            CALL 0x006b3640
005C3AF0  6A 33                     PUSH 0x33
005C3AF2  E8 39 AA 16 00            CALL 0x0072e530
005C3AF7  83 C4 04                  ADD ESP,0x4
005C3AFA  3B C6                     CMP EAX,ESI
005C3AFC  74 36                     JZ 0x005c3b34
005C3AFE  83 CA FF                  OR EDX,0xffffffff
005C3B01  B9 01 00 00 00            MOV ECX,0x1
005C3B06  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C3B0A  C6 00 00                  MOV byte ptr [EAX],0x0
005C3B0D  89 50 03                  MOV dword ptr [EAX + 0x3],EDX
005C3B10  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005C3B14  89 70 07                  MOV dword ptr [EAX + 0x7],ESI
005C3B17  89 70 0B                  MOV dword ptr [EAX + 0xb],ESI
005C3B1A  89 70 0F                  MOV dword ptr [EAX + 0xf],ESI
005C3B1D  89 48 1B                  MOV dword ptr [EAX + 0x1b],ECX
005C3B20  89 48 13                  MOV dword ptr [EAX + 0x13],ECX
005C3B23  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005C3B26  89 70 27                  MOV dword ptr [EAX + 0x27],ESI
005C3B29  89 70 23                  MOV dword ptr [EAX + 0x23],ESI
005C3B2C  89 48 2F                  MOV dword ptr [EAX + 0x2f],ECX
005C3B2F  89 48 2B                  MOV dword ptr [EAX + 0x2b],ECX
005C3B32  EB 02                     JMP 0x005c3b36
LAB_005c3b34:
005C3B34  33 C0                     XOR EAX,EAX
LAB_005c3b36:
005C3B36  3B C6                     CMP EAX,ESI
005C3B38  89 83 EC 21 00 00         MOV dword ptr [EBX + 0x21ec],EAX
005C3B3E  0F 84 D9 00 00 00         JZ 0x005c3c1d
005C3B44  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C3B49  56                        PUSH ESI
005C3B4A  6A 01                     PUSH 0x1
005C3B4C  6A 10                     PUSH 0x10
005C3B4E  6A 01                     PUSH 0x1
005C3B50  68 21 01 00 00            PUSH 0x121
005C3B55  68 F9 00 00 00            PUSH 0xf9
005C3B5A  68 B4 00 00 00            PUSH 0xb4
005C3B5F  6A 0A                     PUSH 0xa
005C3B61  50                        PUSH EAX
005C3B62  E8 89 BE 0F 00            CALL 0x006bf9f0
005C3B67  8B 8B EC 21 00 00         MOV ECX,dword ptr [EBX + 0x21ec]
005C3B6D  50                        PUSH EAX
005C3B6E  68 B4 00 00 00            PUSH 0xb4
005C3B73  6A 0A                     PUSH 0xa
005C3B75  6A 04                     PUSH 0x4
005C3B77  E8 21 0A E4 FF            CALL 0x0040459d
005C3B7C  85 C0                     TEST EAX,EAX
005C3B7E  0F 84 99 00 00 00         JZ 0x005c3c1d
005C3B84  8B 83 EC 21 00 00         MOV EAX,dword ptr [EBX + 0x21ec]
005C3B8A  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
005C3B8D  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C3B91  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005C3B94  8B 83 EC 21 00 00         MOV EAX,dword ptr [EBX + 0x21ec]
005C3B9A  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C3B9D  3B C6                     CMP EAX,ESI
005C3B9F  7C 0D                     JL 0x005c3bae
005C3BA1  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C3BA7  50                        PUSH EAX
005C3BA8  52                        PUSH EDX
005C3BA9  E8 82 F8 0E 00            CALL 0x006b3430
LAB_005c3bae:
005C3BAE  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C3BB3  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005C3BB9  83 F9 FF                  CMP ECX,-0x1
005C3BBC  74 12                     JZ 0x005c3bd0
005C3BBE  8B 80 D5 03 00 00         MOV EAX,dword ptr [EAX + 0x3d5]
005C3BC4  51                        PUSH ECX
005C3BC5  50                        PUSH EAX
005C3BC6  E8 25 FF 0E 00            CALL 0x006b3af0
005C3BCB  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c3bd0:
005C3BD0  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005C3BD6  83 F9 FF                  CMP ECX,-0x1
005C3BD9  74 12                     JZ 0x005c3bed
005C3BDB  51                        PUSH ECX
005C3BDC  8B 88 66 04 00 00         MOV ECX,dword ptr [EAX + 0x466]
005C3BE2  51                        PUSH ECX
005C3BE3  E8 08 FF 0E 00            CALL 0x006b3af0
005C3BE8  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c3bed:
005C3BED  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005C3BF3  83 F9 FF                  CMP ECX,-0x1
005C3BF6  74 12                     JZ 0x005c3c0a
005C3BF8  8B 90 F7 04 00 00         MOV EDX,dword ptr [EAX + 0x4f7]
005C3BFE  51                        PUSH ECX
005C3BFF  52                        PUSH EDX
005C3C00  E8 EB FE 0E 00            CALL 0x006b3af0
005C3C05  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c3c0a:
005C3C0A  8B 80 40 05 00 00         MOV EAX,dword ptr [EAX + 0x540]
005C3C10  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C3C16  50                        PUSH EAX
005C3C17  51                        PUSH ECX
005C3C18  E8 D3 FE 0E 00            CALL 0x006b3af0
LAB_005c3c1d:
005C3C1D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C3C20  83 F8 FF                  CMP EAX,-0x1
005C3C23  74 14                     JZ 0x005c3c39
005C3C25  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C3C2B  50                        PUSH EAX
005C3C2C  52                        PUSH EDX
005C3C2D  E8 7E FF 0E 00            CALL 0x006b3bb0
005C3C32  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_005c3c39:
005C3C39  8A 83 E5 21 00 00         MOV AL,byte ptr [EBX + 0x21e5]
005C3C3F  84 C0                     TEST AL,AL
005C3C41  0F 84 33 01 00 00         JZ 0x005c3d7a
005C3C47  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005C3C4D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C3C53  05 40 01 00 00            ADD EAX,0x140
005C3C58  8D 4D FC                  LEA ECX,[EBP + -0x4]
005C3C5B  50                        PUSH EAX
005C3C5C  68 8C 00 00 00            PUSH 0x8c
005C3C61  68 05 02 00 00            PUSH 0x205
005C3C66  68 99 30 40 00            PUSH 0x403099
005C3C6B  6A 32                     PUSH 0x32
005C3C6D  51                        PUSH ECX
005C3C6E  52                        PUSH EDX
005C3C6F  E8 BC E6 0E 00            CALL 0x006b2330
005C3C74  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C3C77  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C3C7D  68 49 01 00 00            PUSH 0x149
005C3C82  68 12 01 00 00            PUSH 0x112
005C3C87  6A FF                     PUSH -0x1
005C3C89  50                        PUSH EAX
005C3C8A  51                        PUSH ECX
005C3C8B  E8 B0 F9 0E 00            CALL 0x006b3640
005C3C90  6A 33                     PUSH 0x33
005C3C92  E8 99 A8 16 00            CALL 0x0072e530
005C3C97  83 C4 04                  ADD ESP,0x4
005C3C9A  3B C6                     CMP EAX,ESI
005C3C9C  74 36                     JZ 0x005c3cd4
005C3C9E  83 CA FF                  OR EDX,0xffffffff
005C3CA1  B9 01 00 00 00            MOV ECX,0x1
005C3CA6  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C3CAA  C6 00 00                  MOV byte ptr [EAX],0x0
005C3CAD  89 50 03                  MOV dword ptr [EAX + 0x3],EDX
005C3CB0  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005C3CB4  89 70 07                  MOV dword ptr [EAX + 0x7],ESI
005C3CB7  89 70 0B                  MOV dword ptr [EAX + 0xb],ESI
005C3CBA  89 70 0F                  MOV dword ptr [EAX + 0xf],ESI
005C3CBD  89 48 1B                  MOV dword ptr [EAX + 0x1b],ECX
005C3CC0  89 48 13                  MOV dword ptr [EAX + 0x13],ECX
005C3CC3  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005C3CC6  89 70 27                  MOV dword ptr [EAX + 0x27],ESI
005C3CC9  89 70 23                  MOV dword ptr [EAX + 0x23],ESI
005C3CCC  89 48 2F                  MOV dword ptr [EAX + 0x2f],ECX
005C3CCF  89 48 2B                  MOV dword ptr [EAX + 0x2b],ECX
005C3CD2  EB 02                     JMP 0x005c3cd6
LAB_005c3cd4:
005C3CD4  33 C0                     XOR EAX,EAX
LAB_005c3cd6:
005C3CD6  3B C6                     CMP EAX,ESI
005C3CD8  89 83 F4 21 00 00         MOV dword ptr [EBX + 0x21f4],EAX
005C3CDE  74 7C                     JZ 0x005c3d5c
005C3CE0  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C3CE6  56                        PUSH ESI
005C3CE7  6A 01                     PUSH 0x1
005C3CE9  6A 10                     PUSH 0x10
005C3CEB  6A 01                     PUSH 0x1
005C3CED  68 8C 00 00 00            PUSH 0x8c
005C3CF2  68 05 02 00 00            PUSH 0x205
005C3CF7  68 49 01 00 00            PUSH 0x149
005C3CFC  68 12 01 00 00            PUSH 0x112
005C3D01  52                        PUSH EDX
005C3D02  E8 E9 BC 0F 00            CALL 0x006bf9f0
005C3D07  8B 8B F4 21 00 00         MOV ECX,dword ptr [EBX + 0x21f4]
005C3D0D  50                        PUSH EAX
005C3D0E  68 49 01 00 00            PUSH 0x149
005C3D13  68 12 01 00 00            PUSH 0x112
005C3D18  6A 02                     PUSH 0x2
005C3D1A  E8 7E 08 E4 FF            CALL 0x0040459d
005C3D1F  85 C0                     TEST EAX,EAX
005C3D21  74 39                     JZ 0x005c3d5c
005C3D23  8B 83 F4 21 00 00         MOV EAX,dword ptr [EBX + 0x21f4]
005C3D29  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
005C3D2C  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C3D30  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005C3D33  8B 83 F4 21 00 00         MOV EAX,dword ptr [EBX + 0x21f4]
005C3D39  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C3D3C  3B C6                     CMP EAX,ESI
005C3D3E  7C 0D                     JL 0x005c3d4d
005C3D40  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C3D46  50                        PUSH EAX
005C3D47  52                        PUSH EDX
005C3D48  E8 E3 F6 0E 00            CALL 0x006b3430
LAB_005c3d4d:
005C3D4D  8B 07                     MOV EAX,dword ptr [EDI]
005C3D4F  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C3D55  50                        PUSH EAX
005C3D56  51                        PUSH ECX
005C3D57  E8 94 FD 0E 00            CALL 0x006b3af0
LAB_005c3d5c:
005C3D5C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C3D5F  83 F8 FF                  CMP EAX,-0x1
005C3D62  74 25                     JZ 0x005c3d89
005C3D64  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C3D6A  50                        PUSH EAX
005C3D6B  52                        PUSH EDX
005C3D6C  E8 3F FE 0E 00            CALL 0x006b3bb0
005C3D71  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
005C3D78  EB 0F                     JMP 0x005c3d89
LAB_005c3d7a:
005C3D7A  8B 07                     MOV EAX,dword ptr [EDI]
005C3D7C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C3D82  50                        PUSH EAX
005C3D83  51                        PUSH ECX
005C3D84  E8 67 FD 0E 00            CALL 0x006b3af0
LAB_005c3d89:
005C3D89  8A 83 E1 21 00 00         MOV AL,byte ptr [EBX + 0x21e1]
005C3D8F  84 C0                     TEST AL,AL
005C3D91  0F 84 88 01 00 00         JZ 0x005c3f1f
005C3D97  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005C3D9D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C3DA3  81 C2 40 01 00 00         ADD EDX,0x140
005C3DA9  8D 45 FC                  LEA EAX,[EBP + -0x4]
005C3DAC  52                        PUSH EDX
005C3DAD  68 04 01 00 00            PUSH 0x104
005C3DB2  68 05 02 00 00            PUSH 0x205
005C3DB7  68 D2 42 40 00            PUSH 0x4042d2
005C3DBC  6A 32                     PUSH 0x32
005C3DBE  50                        PUSH EAX
005C3DBF  51                        PUSH ECX
005C3DC0  E8 6B E5 0E 00            CALL 0x006b2330
005C3DC5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005C3DC8  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C3DCD  6A 38                     PUSH 0x38
005C3DCF  83 CF FF                  OR EDI,0xffffffff
005C3DD2  68 12 01 00 00            PUSH 0x112
005C3DD7  57                        PUSH EDI
005C3DD8  52                        PUSH EDX
005C3DD9  50                        PUSH EAX
005C3DDA  E8 61 F8 0E 00            CALL 0x006b3640
005C3DDF  6A 33                     PUSH 0x33
005C3DE1  E8 4A A7 16 00            CALL 0x0072e530
005C3DE6  83 C4 04                  ADD ESP,0x4
005C3DE9  3B C6                     CMP EAX,ESI
005C3DEB  74 33                     JZ 0x005c3e20
005C3DED  B9 01 00 00 00            MOV ECX,0x1
005C3DF2  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C3DF6  C6 00 00                  MOV byte ptr [EAX],0x0
005C3DF9  89 78 03                  MOV dword ptr [EAX + 0x3],EDI
005C3DFC  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005C3E00  89 70 07                  MOV dword ptr [EAX + 0x7],ESI
005C3E03  89 70 0B                  MOV dword ptr [EAX + 0xb],ESI
005C3E06  89 70 0F                  MOV dword ptr [EAX + 0xf],ESI
005C3E09  89 48 1B                  MOV dword ptr [EAX + 0x1b],ECX
005C3E0C  89 48 13                  MOV dword ptr [EAX + 0x13],ECX
005C3E0F  89 78 17                  MOV dword ptr [EAX + 0x17],EDI
005C3E12  89 70 27                  MOV dword ptr [EAX + 0x27],ESI
005C3E15  89 70 23                  MOV dword ptr [EAX + 0x23],ESI
005C3E18  89 48 2F                  MOV dword ptr [EAX + 0x2f],ECX
005C3E1B  89 48 2B                  MOV dword ptr [EAX + 0x2b],ECX
005C3E1E  EB 02                     JMP 0x005c3e22
LAB_005c3e20:
005C3E20  33 C0                     XOR EAX,EAX
LAB_005c3e22:
005C3E22  3B C6                     CMP EAX,ESI
005C3E24  89 83 E8 21 00 00         MOV dword ptr [EBX + 0x21e8],EAX
005C3E2A  0F 84 D2 00 00 00         JZ 0x005c3f02
005C3E30  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C3E36  56                        PUSH ESI
005C3E37  6A 01                     PUSH 0x1
005C3E39  6A 10                     PUSH 0x10
005C3E3B  6A 01                     PUSH 0x1
005C3E3D  68 04 01 00 00            PUSH 0x104
005C3E42  68 05 02 00 00            PUSH 0x205
005C3E47  6A 38                     PUSH 0x38
005C3E49  68 12 01 00 00            PUSH 0x112
005C3E4E  51                        PUSH ECX
005C3E4F  E8 9C BB 0F 00            CALL 0x006bf9f0
005C3E54  8B 8B E8 21 00 00         MOV ECX,dword ptr [EBX + 0x21e8]
005C3E5A  50                        PUSH EAX
005C3E5B  6A 38                     PUSH 0x38
005C3E5D  68 12 01 00 00            PUSH 0x112
005C3E62  6A 02                     PUSH 0x2
005C3E64  E8 34 07 E4 FF            CALL 0x0040459d
005C3E69  85 C0                     TEST EAX,EAX
005C3E6B  0F 84 91 00 00 00         JZ 0x005c3f02
005C3E71  8B 83 E8 21 00 00         MOV EAX,dword ptr [EBX + 0x21e8]
005C3E77  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
005C3E7A  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C3E7E  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005C3E81  8B 83 E8 21 00 00         MOV EAX,dword ptr [EBX + 0x21e8]
005C3E87  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C3E8A  3B C6                     CMP EAX,ESI
005C3E8C  7C 0C                     JL 0x005c3e9a
005C3E8E  50                        PUSH EAX
005C3E8F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C3E94  50                        PUSH EAX
005C3E95  E8 96 F5 0E 00            CALL 0x006b3430
LAB_005c3e9a:
005C3E9A  8B 83 6F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c6f]
005C3EA0  83 F8 FF                  CMP EAX,-0x1
005C3EA3  74 0D                     JZ 0x005c3eb2
005C3EA5  8B 8B B3 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cb3]
005C3EAB  50                        PUSH EAX
005C3EAC  51                        PUSH ECX
005C3EAD  E8 3E FC 0E 00            CALL 0x006b3af0
LAB_005c3eb2:
005C3EB2  8B 83 00 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d00]
005C3EB8  83 F8 FF                  CMP EAX,-0x1
005C3EBB  74 0D                     JZ 0x005c3eca
005C3EBD  8B 93 44 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d44]
005C3EC3  50                        PUSH EAX
005C3EC4  52                        PUSH EDX
005C3EC5  E8 26 FC 0E 00            CALL 0x006b3af0
LAB_005c3eca:
005C3ECA  8B 83 91 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d91]
005C3ED0  83 F8 FF                  CMP EAX,-0x1
005C3ED3  74 0D                     JZ 0x005c3ee2
005C3ED5  50                        PUSH EAX
005C3ED6  8B 83 D5 1D 00 00         MOV EAX,dword ptr [EBX + 0x1dd5]
005C3EDC  50                        PUSH EAX
005C3EDD  E8 0E FC 0E 00            CALL 0x006b3af0
LAB_005c3ee2:
005C3EE2  8D BB CC 20 00 00         LEA EDI,[EBX + 0x20cc]
005C3EE8  BE 0A 00 00 00            MOV ESI,0xa
LAB_005c3eed:
005C3EED  8B 0F                     MOV ECX,dword ptr [EDI]
005C3EEF  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C3EF5  51                        PUSH ECX
005C3EF6  52                        PUSH EDX
005C3EF7  E8 F4 FB 0E 00            CALL 0x006b3af0
005C3EFC  83 C7 04                  ADD EDI,0x4
005C3EFF  4E                        DEC ESI
005C3F00  75 EB                     JNZ 0x005c3eed
LAB_005c3f02:
005C3F02  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C3F05  83 F8 FF                  CMP EAX,-0x1
005C3F08  74 7D                     JZ 0x005c3f87
005C3F0A  50                        PUSH EAX
005C3F0B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C3F10  50                        PUSH EAX
005C3F11  E8 9A FC 0E 00            CALL 0x006b3bb0
005C3F16  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
005C3F1D  EB 68                     JMP 0x005c3f87
LAB_005c3f1f:
005C3F1F  8B 83 6F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c6f]
005C3F25  83 F8 FF                  CMP EAX,-0x1
005C3F28  74 0D                     JZ 0x005c3f37
005C3F2A  8B 8B B3 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cb3]
005C3F30  50                        PUSH EAX
005C3F31  51                        PUSH ECX
005C3F32  E8 B9 FB 0E 00            CALL 0x006b3af0
LAB_005c3f37:
005C3F37  8B 83 00 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d00]
005C3F3D  83 F8 FF                  CMP EAX,-0x1
005C3F40  74 0D                     JZ 0x005c3f4f
005C3F42  8B 93 44 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d44]
005C3F48  50                        PUSH EAX
005C3F49  52                        PUSH EDX
005C3F4A  E8 A1 FB 0E 00            CALL 0x006b3af0
LAB_005c3f4f:
005C3F4F  8B 83 91 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d91]
005C3F55  83 F8 FF                  CMP EAX,-0x1
005C3F58  74 0D                     JZ 0x005c3f67
005C3F5A  50                        PUSH EAX
005C3F5B  8B 83 D5 1D 00 00         MOV EAX,dword ptr [EBX + 0x1dd5]
005C3F61  50                        PUSH EAX
005C3F62  E8 89 FB 0E 00            CALL 0x006b3af0
LAB_005c3f67:
005C3F67  8D BB CC 20 00 00         LEA EDI,[EBX + 0x20cc]
005C3F6D  BE 0A 00 00 00            MOV ESI,0xa
LAB_005c3f72:
005C3F72  8B 0F                     MOV ECX,dword ptr [EDI]
005C3F74  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C3F7A  51                        PUSH ECX
005C3F7B  52                        PUSH EDX
005C3F7C  E8 6F FB 0E 00            CALL 0x006b3af0
005C3F81  83 C7 04                  ADD EDI,0x4
005C3F84  4E                        DEC ESI
005C3F85  75 EB                     JNZ 0x005c3f72
LAB_005c3f87:
005C3F87  8A 83 E3 21 00 00         MOV AL,byte ptr [EBX + 0x21e3]
005C3F8D  84 C0                     TEST AL,AL
005C3F8F  0F 84 31 01 00 00         JZ 0x005c40c6
005C3F95  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005C3F9B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C3FA1  05 40 01 00 00            ADD EAX,0x140
005C3FA6  8D 4D FC                  LEA ECX,[EBP + -0x4]
005C3FA9  50                        PUSH EAX
005C3FAA  68 23 01 00 00            PUSH 0x123
005C3FAF  68 F9 00 00 00            PUSH 0xf9
005C3FB4  68 99 30 40 00            PUSH 0x403099
005C3FB9  6A 32                     PUSH 0x32
005C3FBB  51                        PUSH ECX
005C3FBC  52                        PUSH EDX
005C3FBD  E8 6E E3 0E 00            CALL 0x006b2330
005C3FC2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C3FC5  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C3FCB  68 B4 00 00 00            PUSH 0xb4
005C3FD0  83 CF FF                  OR EDI,0xffffffff
005C3FD3  6A 0A                     PUSH 0xa
005C3FD5  57                        PUSH EDI
005C3FD6  50                        PUSH EAX
005C3FD7  51                        PUSH ECX
005C3FD8  E8 63 F6 0E 00            CALL 0x006b3640
005C3FDD  6A 33                     PUSH 0x33
005C3FDF  E8 4C A5 16 00            CALL 0x0072e530
005C3FE4  33 F6                     XOR ESI,ESI
005C3FE6  83 C4 04                  ADD ESP,0x4
005C3FE9  3B C6                     CMP EAX,ESI
005C3FEB  74 33                     JZ 0x005c4020
005C3FED  B9 01 00 00 00            MOV ECX,0x1
005C3FF2  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C3FF6  C6 00 00                  MOV byte ptr [EAX],0x0
005C3FF9  89 78 03                  MOV dword ptr [EAX + 0x3],EDI
005C3FFC  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005C4000  89 70 07                  MOV dword ptr [EAX + 0x7],ESI
005C4003  89 70 0B                  MOV dword ptr [EAX + 0xb],ESI
005C4006  89 70 0F                  MOV dword ptr [EAX + 0xf],ESI
005C4009  89 48 1B                  MOV dword ptr [EAX + 0x1b],ECX
005C400C  89 48 13                  MOV dword ptr [EAX + 0x13],ECX
005C400F  89 78 17                  MOV dword ptr [EAX + 0x17],EDI
005C4012  89 70 27                  MOV dword ptr [EAX + 0x27],ESI
005C4015  89 70 23                  MOV dword ptr [EAX + 0x23],ESI
005C4018  89 48 2F                  MOV dword ptr [EAX + 0x2f],ECX
005C401B  89 48 2B                  MOV dword ptr [EAX + 0x2b],ECX
005C401E  EB 07                     JMP 0x005c4027
LAB_005c4020:
005C4020  33 C0                     XOR EAX,EAX
005C4022  B9 01 00 00 00            MOV ECX,0x1
LAB_005c4027:
005C4027  3B C6                     CMP EAX,ESI
005C4029  89 83 F0 21 00 00         MOV dword ptr [EBX + 0x21f0],EAX
005C402F  74 78                     JZ 0x005c40a9
005C4031  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C4037  56                        PUSH ESI
005C4038  51                        PUSH ECX
005C4039  6A 10                     PUSH 0x10
005C403B  51                        PUSH ECX
005C403C  68 23 01 00 00            PUSH 0x123
005C4041  68 F9 00 00 00            PUSH 0xf9
005C4046  68 B4 00 00 00            PUSH 0xb4
005C404B  6A 0A                     PUSH 0xa
005C404D  52                        PUSH EDX
005C404E  E8 9D B9 0F 00            CALL 0x006bf9f0
005C4053  8B 8B F0 21 00 00         MOV ECX,dword ptr [EBX + 0x21f0]
005C4059  50                        PUSH EAX
005C405A  68 B4 00 00 00            PUSH 0xb4
005C405F  6A 0A                     PUSH 0xa
005C4061  6A 04                     PUSH 0x4
005C4063  E8 35 05 E4 FF            CALL 0x0040459d
005C4068  85 C0                     TEST EAX,EAX
005C406A  74 3D                     JZ 0x005c40a9
005C406C  8B 83 F0 21 00 00         MOV EAX,dword ptr [EBX + 0x21f0]
005C4072  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
005C4075  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005C4079  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005C407C  8B 83 F0 21 00 00         MOV EAX,dword ptr [EBX + 0x21f0]
005C4082  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C4085  3B C6                     CMP EAX,ESI
005C4087  7C 0D                     JL 0x005c4096
005C4089  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C408F  50                        PUSH EAX
005C4090  52                        PUSH EDX
005C4091  E8 9A F3 0E 00            CALL 0x006b3430
LAB_005c4096:
005C4096  8B 83 80 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f80]
005C409C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C40A2  50                        PUSH EAX
005C40A3  51                        PUSH ECX
005C40A4  E8 47 FA 0E 00            CALL 0x006b3af0
LAB_005c40a9:
005C40A9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C40AC  3B C7                     CMP EAX,EDI
005C40AE  74 18                     JZ 0x005c40c8
005C40B0  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C40B6  50                        PUSH EAX
005C40B7  52                        PUSH EDX
005C40B8  E8 F3 FA 0E 00            CALL 0x006b3bb0
005C40BD  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
005C40C4  EB 02                     JMP 0x005c40c8
LAB_005c40c6:
005C40C6  33 F6                     XOR ESI,ESI
LAB_005c40c8:
005C40C8  B9 7E 00 00 00            MOV ECX,0x7e
005C40CD  33 C0                     XOR EAX,EAX
005C40CF  8D BD 3C FD FF FF         LEA EDI,[EBP + 0xfffffd3c]
005C40D5  F3 AB                     STOSD.REP ES:EDI
005C40D7  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005C40DA  66 AB                     STOSW ES:EDI
005C40DC  AA                        STOSB ES:EDI
005C40DD  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C40E3  BF 02 00 00 00            MOV EDI,0x2
005C40E8  3C 0D                     CMP AL,0xd
005C40EA  C7 85 FF FD FF FF 40 23 00 00  MOV dword ptr [EBP + 0xfffffdff],0x2340
005C40F4  89 8D 0C FE FF FF         MOV dword ptr [EBP + 0xfffffe0c],ECX
005C40FA  89 BD 10 FE FF FF         MOV dword ptr [EBP + 0xfffffe10],EDI
005C4100  C7 85 14 FE FF FF 43 69 00 00  MOV dword ptr [EBP + 0xfffffe14],0x6943
005C410A  C7 85 26 FE FF FF BC 24 00 00  MOV dword ptr [EBP + 0xfffffe26],0x24bc
005C4114  89 8D 33 FE FF FF         MOV dword ptr [EBP + 0xfffffe33],ECX
005C411A  89 BD 37 FE FF FF         MOV dword ptr [EBP + 0xfffffe37],EDI
005C4120  74 18                     JZ 0x005c413a
005C4122  3C 0E                     CMP AL,0xe
005C4124  74 14                     JZ 0x005c413a
005C4126  3C 10                     CMP AL,0x10
005C4128  74 10                     JZ 0x005c413a
005C412A  3C 0F                     CMP AL,0xf
005C412C  74 0C                     JZ 0x005c413a
005C412E  C7 85 3B FE FF FF 47 69 00 00  MOV dword ptr [EBP + 0xfffffe3b],0x6947
005C4138  EB 17                     JMP 0x005c4151
LAB_005c413a:
005C413A  A0 A0 67 80 00            MOV AL,[0x008067a0]
005C413F  F6 D8                     NEG AL
005C4141  1B C0                     SBB EAX,EAX
005C4143  83 E0 04                  AND EAX,0x4
005C4146  05 4D 69 00 00            ADD EAX,0x694d
005C414B  89 85 3B FE FF FF         MOV dword ptr [EBP + 0xfffffe3b],EAX
LAB_005c4151:
005C4151  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C4156  84 C0                     TEST AL,AL
005C4158  74 20                     JZ 0x005c417a
005C415A  C7 85 63 FD FF FF 43 23 00 00  MOV dword ptr [EBP + 0xfffffd63],0x2343
005C4164  89 8D 70 FD FF FF         MOV dword ptr [EBP + 0xfffffd70],ECX
005C416A  89 BD 74 FD FF FF         MOV dword ptr [EBP + 0xfffffd74],EDI
005C4170  C7 85 78 FD FF FF 4A 69 00 00  MOV dword ptr [EBP + 0xfffffd78],0x694a
LAB_005c417a:
005C417A  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005C4180  39 B2 E6 02 00 00         CMP dword ptr [EDX + 0x2e6],ESI
005C4186  74 5F                     JZ 0x005c41e7
005C4188  B9 06 00 00 00            MOV ECX,0x6
005C418D  83 C8 FF                  OR EAX,0xffffffff
005C4190  8D 7D C0                  LEA EDI,[EBP + -0x40]
005C4193  F3 AB                     STOSD.REP ES:EDI
005C4195  66 AB                     STOSW ES:EDI
005C4197  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005C419D  E8 EF 0F E4 FF            CALL 0x00405191
005C41A2  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005C41A8  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005C41AB  56                        PUSH ESI
005C41AC  56                        PUSH ESI
005C41AD  8B 91 E6 02 00 00         MOV EDX,dword ptr [ECX + 0x2e6]
005C41B3  8D 8D 3C FD FF FF         LEA ECX,[EBP + 0xfffffd3c]
005C41B9  51                        PUSH ECX
005C41BA  56                        PUSH ESI
005C41BB  89 82 AB 1C 00 00         MOV dword ptr [EDX + 0x1cab],EAX
005C41C1  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005C41C7  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005C41CD  E8 45 D5 E3 FF            CALL 0x00401717
005C41D2  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005C41D8  8D 45 C0                  LEA EAX,[EBP + -0x40]
005C41DB  50                        PUSH EAX
005C41DC  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005C41E2  E8 6A 09 E4 FF            CALL 0x00404b51
LAB_005c41e7:
005C41E7  6A 01                     PUSH 0x1
005C41E9  8B CB                     MOV ECX,EBX
005C41EB  E8 E5 07 E4 FF            CALL 0x004049d5
005C41F0  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005C41F6  3B FE                     CMP EDI,ESI
005C41F8  74 4C                     JZ 0x005c4246
005C41FA  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005C4200  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005C4206  52                        PUSH EDX
005C4207  50                        PUSH EAX
005C4208  56                        PUSH ESI
005C4209  8B CF                     MOV ECX,EDI
005C420B  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005C4212  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005C421B  E8 5E 0E E4 FF            CALL 0x0040507e
005C4220  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005C4226  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005C422C  51                        PUSH ECX
005C422D  52                        PUSH EDX
005C422E  8B CF                     MOV ECX,EDI
005C4230  E8 E9 E1 E3 FF            CALL 0x0040241e
005C4235  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005C423C  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005c4246:
005C4246  6A FF                     PUSH -0x1
005C4248  56                        PUSH ESI
005C4249  6A 0B                     PUSH 0xb
005C424B  8B CB                     MOV ECX,EBX
005C424D  C6 43 65 03               MOV byte ptr [EBX + 0x65],0x3
005C4251  E8 9B 09 E4 FF            CALL 0x00404bf1
005C4256  A0 A0 67 80 00            MOV AL,[0x008067a0]
005C425B  84 C0                     TEST AL,AL
005C425D  74 14                     JZ 0x005c4273
005C425F  81 C3 5F 1A 00 00         ADD EBX,0x1a5f
005C4265  B9 90 2A 80 00            MOV ECX,0x802a90
005C426A  53                        PUSH EBX
005C426B  6A 04                     PUSH 0x4
005C426D  FF 15 70 C0 85 00         CALL dword ptr [0x0085c070]
LAB_005c4273:
005C4273  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
005C4279  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C427E  5F                        POP EDI
005C427F  5E                        POP ESI
005C4280  5B                        POP EBX
005C4281  8B E5                     MOV ESP,EBP
005C4283  5D                        POP EBP
005C4284  C2 04 00                  RET 0x4
LAB_005c4287:
005C4287  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
005C428D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C4293  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005C4296  8A 81 26 1E 00 00         MOV AL,byte ptr [ECX + 0x1e26]
005C429C  3C 0D                     CMP AL,0xd
005C429E  74 11                     JZ 0x005c42b1
005C42A0  3C 0E                     CMP AL,0xe
005C42A2  74 0D                     JZ 0x005c42b1
005C42A4  3C 0F                     CMP AL,0xf
005C42A6  74 09                     JZ 0x005c42b1
005C42A8  3C 10                     CMP AL,0x10
005C42AA  B8 47 69 00 00            MOV EAX,0x6947
005C42AF  75 05                     JNZ 0x005c42b6
LAB_005c42b1:
005C42B1  B8 4D 69 00 00            MOV EAX,0x694d
LAB_005c42b6:
005C42B6  8B 11                     MOV EDX,dword ptr [ECX]
005C42B8  89 41 2D                  MOV dword ptr [ECX + 0x2d],EAX
005C42BB  8D 41 1D                  LEA EAX,[ECX + 0x1d]
005C42BE  50                        PUSH EAX
005C42BF  FF 12                     CALL dword ptr [EDX]
005C42C1  5F                        POP EDI
005C42C2  5E                        POP ESI
005C42C3  5B                        POP EBX
005C42C4  8B E5                     MOV ESP,EBP
005C42C6  5D                        POP EBP
005C42C7  C2 04 00                  RET 0x4
