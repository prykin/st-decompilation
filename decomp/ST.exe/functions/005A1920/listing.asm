FUN_005a1920:
005A1920  55                        PUSH EBP
005A1921  8B EC                     MOV EBP,ESP
005A1923  81 EC DC 08 00 00         SUB ESP,0x8dc
005A1929  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005A192C  53                        PUSH EBX
005A192D  56                        PUSH ESI
005A192E  57                        PUSH EDI
005A192F  33 FF                     XOR EDI,EDI
005A1931  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005A1934  3B C7                     CMP EAX,EDI
005A1936  0F 84 86 04 00 00         JZ 0x005a1dc2
005A193C  39 B9 97 1A 00 00         CMP dword ptr [ECX + 0x1a97],EDI
005A1942  0F 84 7A 04 00 00         JZ 0x005a1dc2
005A1948  80 79 65 01               CMP byte ptr [ECX + 0x65],0x1
005A194C  0F 85 70 04 00 00         JNZ 0x005a1dc2
005A1952  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A1957  8D 55 B0                  LEA EDX,[EBP + -0x50]
005A195A  8D 4D AC                  LEA ECX,[EBP + -0x54]
005A195D  57                        PUSH EDI
005A195E  52                        PUSH EDX
005A195F  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005A1962  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A1968  E8 83 BE 18 00            CALL 0x0072d7f0
005A196D  8B F0                     MOV ESI,EAX
005A196F  83 C4 08                  ADD ESP,0x8
005A1972  3B F7                     CMP ESI,EDI
005A1974  0F 85 0C 04 00 00         JNZ 0x005a1d86
005A197A  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005A197D  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005A1980  8B C6                     MOV EAX,ESI
005A1982  48                        DEC EAX
005A1983  74 05                     JZ 0x005a198a
005A1985  83 E8 07                  SUB EAX,0x7
005A1988  75 2C                     JNZ 0x005a19b6
LAB_005a198a:
005A198A  8B 83 9F 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a9f]
005A1990  3B C7                     CMP EAX,EDI
005A1992  74 06                     JZ 0x005a199a
005A1994  50                        PUSH EAX
005A1995  E8 26 56 12 00            CALL 0x006c6fc0
LAB_005a199a:
005A199A  8B 8B 9B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a9b]
005A19A0  8D 83 9B 1A 00 00         LEA EAX,[EBX + 0x1a9b]
005A19A6  3B CF                     CMP ECX,EDI
005A19A8  89 BB 9F 1A 00 00         MOV dword ptr [EBX + 0x1a9f],EDI
005A19AE  74 06                     JZ 0x005a19b6
005A19B0  50                        PUSH EAX
005A19B1  E8 AA 96 10 00            CALL 0x006ab060
LAB_005a19b6:
005A19B6  8B C6                     MOV EAX,ESI
005A19B8  48                        DEC EAX
005A19B9  0F 84 0F 02 00 00         JZ 0x005a1bce
005A19BF  83 E8 07                  SUB EAX,0x7
005A19C2  0F 85 35 03 00 00         JNZ 0x005a1cfd
005A19C8  89 BB A3 1A 00 00         MOV dword ptr [EBX + 0x1aa3],EDI
005A19CE  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A19D3  8D 95 28 FF FF FF         LEA EDX,[EBP + 0xffffff28]
005A19D9  8D 8D 24 FF FF FF         LEA ECX,[EBP + 0xffffff24]
005A19DF  57                        PUSH EDI
005A19E0  52                        PUSH EDX
005A19E1  89 85 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EAX
005A19E7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A19ED  E8 FE BD 18 00            CALL 0x0072d7f0
005A19F2  83 C4 08                  ADD ESP,0x8
005A19F5  3B C7                     CMP EAX,EDI
005A19F7  0F 85 8C 01 00 00         JNZ 0x005a1b89
005A19FD  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005A1A00  56                        PUSH ESI
005A1A01  E8 6A 92 10 00            CALL 0x006aac70
005A1A06  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005A1A09  3B C7                     CMP EAX,EDI
005A1A0B  89 83 9B 1A 00 00         MOV dword ptr [EBX + 0x1a9b],EAX
005A1A11  0F 84 5F 01 00 00         JZ 0x005a1b76
005A1A17  8B CE                     MOV ECX,ESI
005A1A19  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
005A1A1C  8B F8                     MOV EDI,EAX
005A1A1E  8B C1                     MOV EAX,ECX
005A1A20  C1 E9 02                  SHR ECX,0x2
005A1A23  F3 A5                     MOVSD.REP ES:EDI,ESI
005A1A25  8B C8                     MOV ECX,EAX
005A1A27  83 E1 03                  AND ECX,0x3
005A1A2A  F3 A4                     MOVSB.REP ES:EDI,ESI
005A1A2C  8B 8B 9B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a9b]
005A1A32  51                        PUSH ECX
005A1A33  E8 88 63 12 00            CALL 0x006c7dc0
005A1A38  8B D0                     MOV EDX,EAX
005A1A3A  85 D2                     TEST EDX,EDX
005A1A3C  89 93 9F 1A 00 00         MOV dword ptr [EBX + 0x1a9f],EDX
005A1A42  0F 84 22 01 00 00         JZ 0x005a1b6a
005A1A48  B9 00 01 00 00            MOV ECX,0x100
005A1A4D  33 C0                     XOR EAX,EAX
005A1A4F  8D BD 24 FB FF FF         LEA EDI,[EBP + 0xfffffb24]
005A1A55  F3 AB                     STOSD.REP ES:EDI
005A1A57  8D 45 F4                  LEA EAX,[EBP + -0xc]
005A1A5A  8D 8D 24 FB FF FF         LEA ECX,[EBP + 0xfffffb24]
005A1A60  50                        PUSH EAX
005A1A61  51                        PUSH ECX
005A1A62  52                        PUSH EDX
005A1A63  E8 B8 62 12 00            CALL 0x006c7d20
005A1A68  BE A8 00 00 00            MOV ESI,0xa8
005A1A6D  8D 95 A5 FB FF FF         LEA EDX,[EBP + 0xfffffba5]
005A1A73  BF 80 00 00 00            MOV EDI,0x80
005A1A78  2B F2                     SUB ESI,EDX
005A1A7A  C7 45 FC 40 00 00 00      MOV dword ptr [EBP + -0x4],0x40
LAB_005a1a81:
005A1A81  8B 8B 97 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a97]
005A1A87  8A 94 3D 24 FB FF FF      MOV DL,byte ptr [EBP + EDI*0x1 + 0xfffffb24]
005A1A8E  8D 84 3D 25 FB FF FF      LEA EAX,[EBP + EDI*0x1 + 0xfffffb25]
005A1A95  88 54 0F 2A               MOV byte ptr [EDI + ECX*0x1 + 0x2a],DL
005A1A99  8B 8B 97 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a97]
005A1A9F  8A 10                     MOV DL,byte ptr [EAX]
005A1AA1  88 54 0F 29               MOV byte ptr [EDI + ECX*0x1 + 0x29],DL
005A1AA5  8B 93 97 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a97]
005A1AAB  8D 0C 06                  LEA ECX,[ESI + EAX*0x1]
005A1AAE  8A 40 01                  MOV AL,byte ptr [EAX + 0x1]
005A1AB1  83 C7 04                  ADD EDI,0x4
005A1AB4  88 04 11                  MOV byte ptr [ECX + EDX*0x1],AL
005A1AB7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005A1ABA  48                        DEC EAX
005A1ABB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005A1ABE  75 C1                     JNZ 0x005a1a81
005A1AC0  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005A1AC6  33 F6                     XOR ESI,ESI
005A1AC8  56                        PUSH ESI
005A1AC9  6A 40                     PUSH 0x40
005A1ACB  8D 8D A4 FB FF FF         LEA ECX,[EBP + 0xfffffba4]
005A1AD1  6A 20                     PUSH 0x20
005A1AD3  51                        PUSH ECX
005A1AD4  52                        PUSH EDX
005A1AD5  E8 46 EF 10 00            CALL 0x006b0a20
005A1ADA  8B 83 9F 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a9f]
005A1AE0  6A 09                     PUSH 0x9
005A1AE2  6A 4E                     PUSH 0x4e
005A1AE4  50                        PUSH EAX
005A1AE5  E8 16 62 12 00            CALL 0x006c7d00
005A1AEA  8B 8B 97 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a97]
005A1AF0  8B 93 9F 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a9f]
005A1AF6  56                        PUSH ESI
005A1AF7  51                        PUSH ECX
005A1AF8  52                        PUSH EDX
005A1AF9  E8 72 55 12 00            CALL 0x006c7070
005A1AFE  8B 83 9F 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a9f]
005A1B04  50                        PUSH EAX
005A1B05  E8 F6 54 12 00            CALL 0x006c7000
005A1B0A  3B C6                     CMP EAX,ESI
005A1B0C  89 83 A3 1A 00 00         MOV dword ptr [EBX + 0x1aa3],EAX
005A1B12  7E 1F                     JLE 0x005a1b33
005A1B14  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005A1B1A  8B 95 24 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff24]
005A1B20  89 83 A7 1A 00 00         MOV dword ptr [EBX + 0x1aa7],EAX
005A1B26  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A1B2C  33 FF                     XOR EDI,EDI
005A1B2E  E9 CA 01 00 00            JMP 0x005a1cfd
LAB_005a1b33:
005A1B33  8B 8B 9F 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a9f]
005A1B39  51                        PUSH ECX
005A1B3A  E8 81 54 12 00            CALL 0x006c6fc0
005A1B3F  8D 83 9B 1A 00 00         LEA EAX,[EBX + 0x1a9b]
005A1B45  89 B3 9F 1A 00 00         MOV dword ptr [EBX + 0x1a9f],ESI
005A1B4B  50                        PUSH EAX
005A1B4C  E8 0F 95 10 00            CALL 0x006ab060
005A1B51  8B 95 24 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff24]
005A1B57  89 B3 A3 1A 00 00         MOV dword ptr [EBX + 0x1aa3],ESI
005A1B5D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A1B63  33 FF                     XOR EDI,EDI
005A1B65  E9 93 01 00 00            JMP 0x005a1cfd
LAB_005a1b6a:
005A1B6A  8D 83 9B 1A 00 00         LEA EAX,[EBX + 0x1a9b]
005A1B70  50                        PUSH EAX
005A1B71  E8 EA 94 10 00            CALL 0x006ab060
LAB_005a1b76:
005A1B76  8B 95 24 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff24]
005A1B7C  33 FF                     XOR EDI,EDI
005A1B7E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A1B84  E9 74 01 00 00            JMP 0x005a1cfd
LAB_005a1b89:
005A1B89  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
005A1B8F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005A1B92  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A1B97  8B 83 9F 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a9f]
005A1B9D  3B C7                     CMP EAX,EDI
005A1B9F  74 06                     JZ 0x005a1ba7
005A1BA1  50                        PUSH EAX
005A1BA2  E8 19 54 12 00            CALL 0x006c6fc0
LAB_005a1ba7:
005A1BA7  8B 8B 9B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a9b]
005A1BAD  8D 83 9B 1A 00 00         LEA EAX,[EBX + 0x1a9b]
005A1BB3  3B CF                     CMP ECX,EDI
005A1BB5  89 BB 9F 1A 00 00         MOV dword ptr [EBX + 0x1a9f],EDI
005A1BBB  74 06                     JZ 0x005a1bc3
005A1BBD  50                        PUSH EAX
005A1BBE  E8 9D 94 10 00            CALL 0x006ab060
LAB_005a1bc3:
005A1BC3  89 BB A3 1A 00 00         MOV dword ptr [EBX + 0x1aa3],EDI
005A1BC9  E9 2F 01 00 00            JMP 0x005a1cfd
LAB_005a1bce:
005A1BCE  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005A1BD4  8D 85 6C FF FF FF         LEA EAX,[EBP + 0xffffff6c]
005A1BDA  8D 95 68 FF FF FF         LEA EDX,[EBP + 0xffffff68]
005A1BE0  57                        PUSH EDI
005A1BE1  50                        PUSH EAX
005A1BE2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005A1BE5  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
005A1BEB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A1BF1  E8 FA BB 18 00            CALL 0x0072d7f0
005A1BF6  83 C4 08                  ADD ESP,0x8
005A1BF9  3B C7                     CMP EAX,EDI
005A1BFB  0F 85 E0 00 00 00         JNZ 0x005a1ce1
005A1C01  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005A1C04  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005A1C07  51                        PUSH ECX
005A1C08  52                        PUSH EDX
005A1C09  E8 42 60 12 00            CALL 0x006c7c50
005A1C0E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005A1C11  8B D0                     MOV EDX,EAX
005A1C13  3B D7                     CMP EDX,EDI
005A1C15  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005A1C18  0F 84 B3 00 00 00         JZ 0x005a1cd1
005A1C1E  B9 00 01 00 00            MOV ECX,0x100
005A1C23  33 C0                     XOR EAX,EAX
005A1C25  8D BD 24 F7 FF FF         LEA EDI,[EBP + 0xfffff724]
005A1C2B  F3 AB                     STOSD.REP ES:EDI
005A1C2D  8D 45 F0                  LEA EAX,[EBP + -0x10]
005A1C30  8D 8D 24 F7 FF FF         LEA ECX,[EBP + 0xfffff724]
005A1C36  50                        PUSH EAX
005A1C37  51                        PUSH ECX
005A1C38  52                        PUSH EDX
005A1C39  E8 72 5F 12 00            CALL 0x006c7bb0
005A1C3E  BE A8 00 00 00            MOV ESI,0xa8
005A1C43  8D 95 A5 F7 FF FF         LEA EDX,[EBP + 0xfffff7a5]
005A1C49  BF 80 00 00 00            MOV EDI,0x80
005A1C4E  2B F2                     SUB ESI,EDX
005A1C50  C7 45 F4 40 00 00 00      MOV dword ptr [EBP + -0xc],0x40
LAB_005a1c57:
005A1C57  8B 8B 97 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a97]
005A1C5D  8A 94 3D 24 F7 FF FF      MOV DL,byte ptr [EBP + EDI*0x1 + 0xfffff724]
005A1C64  8D 84 3D 25 F7 FF FF      LEA EAX,[EBP + EDI*0x1 + 0xfffff725]
005A1C6B  88 54 0F 2A               MOV byte ptr [EDI + ECX*0x1 + 0x2a],DL
005A1C6F  8B 8B 97 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a97]
005A1C75  8A 10                     MOV DL,byte ptr [EAX]
005A1C77  88 54 0F 29               MOV byte ptr [EDI + ECX*0x1 + 0x29],DL
005A1C7B  8B 93 97 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a97]
005A1C81  8D 0C 06                  LEA ECX,[ESI + EAX*0x1]
005A1C84  8A 40 01                  MOV AL,byte ptr [EAX + 0x1]
005A1C87  83 C7 04                  ADD EDI,0x4
005A1C8A  88 04 11                  MOV byte ptr [ECX + EDX*0x1],AL
005A1C8D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005A1C90  48                        DEC EAX
005A1C91  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005A1C94  75 C1                     JNZ 0x005a1c57
005A1C96  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005A1C9C  6A 00                     PUSH 0x0
005A1C9E  6A 40                     PUSH 0x40
005A1CA0  8D 8D A4 F7 FF FF         LEA ECX,[EBP + 0xfffff7a4]
005A1CA6  6A 20                     PUSH 0x20
005A1CA8  51                        PUSH ECX
005A1CA9  52                        PUSH EDX
005A1CAA  E8 71 ED 10 00            CALL 0x006b0a20
005A1CAF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005A1CB2  6A 09                     PUSH 0x9
005A1CB4  6A 4E                     PUSH 0x4e
005A1CB6  56                        PUSH ESI
005A1CB7  E8 D4 5E 12 00            CALL 0x006c7b90
005A1CBC  8B 83 97 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a97]
005A1CC2  6A 00                     PUSH 0x0
005A1CC4  50                        PUSH EAX
005A1CC5  56                        PUSH ESI
005A1CC6  E8 D5 5C 12 00            CALL 0x006c79a0
005A1CCB  56                        PUSH ESI
005A1CCC  E8 AF 5C 12 00            CALL 0x006c7980
LAB_005a1cd1:
005A1CD1  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
005A1CD7  33 FF                     XOR EDI,EDI
005A1CD9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A1CDF  EB 1C                     JMP 0x005a1cfd
LAB_005a1ce1:
005A1CE1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005A1CE4  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
005A1CEA  3B C7                     CMP EAX,EDI
005A1CEC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A1CF2  74 06                     JZ 0x005a1cfa
005A1CF4  50                        PUSH EAX
005A1CF5  E8 86 5C 12 00            CALL 0x006c7980
LAB_005a1cfa:
005A1CFA  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_005a1cfd:
005A1CFD  8B 83 8F 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a8f]
005A1D03  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005A1D09  50                        PUSH EAX
005A1D0A  51                        PUSH ECX
005A1D0B  E8 C0 18 11 00            CALL 0x006b35d0
005A1D10  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005A1D13  48                        DEC EAX
005A1D14  74 05                     JZ 0x005a1d1b
005A1D16  83 E8 07                  SUB EAX,0x7
005A1D19  75 59                     JNZ 0x005a1d74
LAB_005a1d1b:
005A1D1B  8B 83 AB 1A 00 00         MOV EAX,dword ptr [EBX + 0x1aab]
005A1D21  8D B3 AB 1A 00 00         LEA ESI,[EBX + 0x1aab]
005A1D27  3B C7                     CMP EAX,EDI
005A1D29  74 06                     JZ 0x005a1d31
005A1D2B  56                        PUSH ESI
005A1D2C  E8 2F 93 10 00            CALL 0x006ab060
LAB_005a1d31:
005A1D31  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005A1D34  83 C9 FF                  OR ECX,0xffffffff
005A1D37  33 C0                     XOR EAX,EAX
005A1D39  F2 AE                     SCASB.REPNE ES:EDI
005A1D3B  F7 D1                     NOT ECX
005A1D3D  51                        PUSH ECX
005A1D3E  E8 2D 8F 10 00            CALL 0x006aac70
005A1D43  8B D0                     MOV EDX,EAX
005A1D45  85 D2                     TEST EDX,EDX
005A1D47  89 16                     MOV dword ptr [ESI],EDX
005A1D49  74 20                     JZ 0x005a1d6b
005A1D4B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005A1D4E  83 C9 FF                  OR ECX,0xffffffff
005A1D51  33 C0                     XOR EAX,EAX
005A1D53  F2 AE                     SCASB.REPNE ES:EDI
005A1D55  F7 D1                     NOT ECX
005A1D57  2B F9                     SUB EDI,ECX
005A1D59  8B C1                     MOV EAX,ECX
005A1D5B  8B F7                     MOV ESI,EDI
005A1D5D  8B FA                     MOV EDI,EDX
005A1D5F  C1 E9 02                  SHR ECX,0x2
005A1D62  F3 A5                     MOVSD.REP ES:EDI,ESI
005A1D64  8B C8                     MOV ECX,EAX
005A1D66  83 E1 03                  AND ECX,0x3
005A1D69  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005a1d6b:
005A1D6B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005A1D6E  89 8B AF 1A 00 00         MOV dword ptr [EBX + 0x1aaf],ECX
LAB_005a1d74:
005A1D74  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
005A1D77  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A1D7D  5F                        POP EDI
005A1D7E  5E                        POP ESI
005A1D7F  5B                        POP EBX
005A1D80  8B E5                     MOV ESP,EBP
005A1D82  5D                        POP EBP
005A1D83  C2 14 00                  RET 0x14
LAB_005a1d86:
005A1D86  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
005A1D89  68 5C C4 7C 00            PUSH 0x7cc45c
005A1D8E  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A1D93  56                        PUSH ESI
005A1D94  57                        PUSH EDI
005A1D95  68 B5 09 00 00            PUSH 0x9b5
005A1D9A  68 70 BF 7C 00            PUSH 0x7cbf70
005A1D9F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A1DA4  E8 27 B7 10 00            CALL 0x006ad4d0
005A1DA9  83 C4 18                  ADD ESP,0x18
005A1DAC  85 C0                     TEST EAX,EAX
005A1DAE  74 01                     JZ 0x005a1db1
005A1DB0  CC                        INT3
LAB_005a1db1:
005A1DB1  68 B5 09 00 00            PUSH 0x9b5
005A1DB6  68 70 BF 7C 00            PUSH 0x7cbf70
005A1DBB  57                        PUSH EDI
005A1DBC  56                        PUSH ESI
005A1DBD  E8 7E 40 10 00            CALL 0x006a5e40
LAB_005a1dc2:
005A1DC2  5F                        POP EDI
005A1DC3  5E                        POP ESI
005A1DC4  5B                        POP EBX
005A1DC5  8B E5                     MOV ESP,EBP
005A1DC7  5D                        POP EBP
005A1DC8  C2 14 00                  RET 0x14
