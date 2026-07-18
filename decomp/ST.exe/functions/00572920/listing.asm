FUN_00572920:
00572920  55                        PUSH EBP
00572921  8B EC                     MOV EBP,ESP
00572923  81 EC 54 01 00 00         SUB ESP,0x154
00572929  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0057292C  53                        PUSH EBX
0057292D  8B 1D 58 B9 85 00         MOV EBX,dword ptr [0x0085b958]
00572933  56                        PUSH ESI
00572934  57                        PUSH EDI
00572935  8B F1                     MOV ESI,ECX
00572937  BF 01 00 00 00            MOV EDI,0x1
0057293C  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0057293F  A8 01                     TEST AL,0x1
00572941  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00572944  0F 84 87 01 00 00         JZ 0x00572ad1
0057294A  8D 45 FC                  LEA EAX,[EBP + -0x4]
0057294D  50                        PUSH EAX
0057294E  68 6C A4 7C 00            PUSH 0x7ca46c
00572953  68 01 00 00 80            PUSH 0x80000001
00572958  FF D3                     CALL EBX
0057295A  85 C0                     TEST EAX,EAX
0057295C  75 1A                     JNZ 0x00572978
0057295E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00572961  8D 8E 85 07 00 00         LEA ECX,[ESI + 0x785]
00572967  6A 40                     PUSH 0x40
00572969  51                        PUSH ECX
0057296A  57                        PUSH EDI
0057296B  50                        PUSH EAX
0057296C  68 10 A5 7C 00            PUSH 0x7ca510
00572971  52                        PUSH EDX
00572972  FF 15 5C B9 85 00         CALL dword ptr [0x0085b95c]
LAB_00572978:
00572978  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057297B  50                        PUSH EAX
0057297C  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00572982  33 C9                     XOR ECX,ECX
00572984  C7 05 F8 72 80 00 00 00 00 00  MOV dword ptr [0x008072f8],0x0
0057298E  C7 05 FC 72 80 00 82 00 00 00  MOV dword ptr [0x008072fc],0x82
00572998  33 C0                     XOR EAX,EAX
LAB_0057299a:
0057299A  33 D2                     XOR EDX,EDX
0057299C  8A 90 F8 72 80 00         MOV DL,byte ptr [EAX + 0x8072f8]
005729A2  03 CA                     ADD ECX,EDX
005729A4  40                        INC EAX
005729A5  3D 82 00 00 00            CMP EAX,0x82
005729AA  72 EE                     JC 0x0057299a
005729AC  89 0D F8 72 80 00         MOV dword ptr [0x008072f8],ECX
005729B2  8B 0D CC B0 79 00         MOV ECX,dword ptr [0x0079b0cc]
005729B8  8D 86 85 07 00 00         LEA EAX,[ESI + 0x785]
005729BE  83 C6 28                  ADD ESI,0x28
005729C1  50                        PUSH EAX
005729C2  51                        PUSH ECX
005729C3  56                        PUSH ESI
005729C4  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
005729CA  8D 95 AC FE FF FF         LEA EDX,[EBP + 0xfffffeac]
005729D0  68 DC 6E 7C 00            PUSH 0x7c6edc
005729D5  52                        PUSH EDX
005729D6  FF D6                     CALL ESI
005729D8  83 C4 14                  ADD ESP,0x14
005729DB  8D 85 AC FE FF FF         LEA EAX,[EBP + 0xfffffeac]
005729E1  6A 00                     PUSH 0x0
005729E3  50                        PUSH EAX
005729E4  FF 15 7C BC 85 00         CALL dword ptr [0x0085bc7c]
005729EA  8B 0D D0 B0 79 00         MOV ECX,dword ptr [0x0079b0d0]
005729F0  8D 95 AC FE FF FF         LEA EDX,[EBP + 0xfffffeac]
005729F6  51                        PUSH ECX
005729F7  52                        PUSH EDX
005729F8  8D 85 AC FE FF FF         LEA EAX,[EBP + 0xfffffeac]
005729FE  68 9C A6 7C 00            PUSH 0x7ca69c
00572A03  50                        PUSH EAX
00572A04  FF D6                     CALL ESI
00572A06  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00572A0C  8D 45 B4                  LEA EAX,[EBP + -0x4c]
00572A0F  8D 55 B0                  LEA EDX,[EBP + -0x50]
00572A12  6A 00                     PUSH 0x0
00572A14  50                        PUSH EAX
00572A15  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
00572A18  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00572A1E  E8 CD AD 1B 00            CALL 0x0072d7f0
00572A23  83 C4 18                  ADD ESP,0x18
00572A26  85 C0                     TEST EAX,EAX
00572A28  0F 85 95 00 00 00         JNZ 0x00572ac3
00572A2E  50                        PUSH EAX
00572A2F  50                        PUSH EAX
00572A30  8D 8D AC FE FF FF         LEA ECX,[EBP + 0xfffffeac]
00572A36  6A 02                     PUSH 0x2
00572A38  51                        PUSH ECX
00572A39  68 45 03 00 00            PUSH 0x345
00572A3E  E8 7D E4 17 00            CALL 0x006f0ec0
00572A43  8B F0                     MOV ESI,EAX
00572A45  83 C4 14                  ADD ESP,0x14
00572A48  85 F6                     TEST ESI,ESI
00572A4A  74 6A                     JZ 0x00572ab6
00572A4C  8B 15 D4 B0 79 00         MOV EDX,dword ptr [0x0079b0d4]
00572A52  6A 00                     PUSH 0x0
00572A54  6A 00                     PUSH 0x0
00572A56  6A 00                     PUSH 0x0
00572A58  68 82 00 00 00            PUSH 0x82
00572A5D  68 F8 72 80 00            PUSH 0x8072f8
00572A62  52                        PUSH EDX
00572A63  6A 0C                     PUSH 0xc
00572A65  8B CE                     MOV ECX,ESI
00572A67  E8 84 E9 17 00            CALL 0x006f13f0
00572A6C  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00572A6F  8B 0D E8 B0 79 00         MOV ECX,dword ptr [0x0079b0e8]
00572A75  6A 00                     PUSH 0x0
00572A77  6A 00                     PUSH 0x0
00572A79  6A 00                     PUSH 0x0
00572A7B  8D 87 C5 07 00 00         LEA EAX,[EDI + 0x7c5]
00572A81  6A 40                     PUSH 0x40
00572A83  50                        PUSH EAX
00572A84  51                        PUSH ECX
00572A85  6A 0C                     PUSH 0xc
00572A87  8B CE                     MOV ECX,ESI
00572A89  E8 62 E9 17 00            CALL 0x006f13f0
00572A8E  8B 15 EC B0 79 00         MOV EDX,dword ptr [0x0079b0ec]
00572A94  6A 00                     PUSH 0x0
00572A96  6A 00                     PUSH 0x0
00572A98  6A 00                     PUSH 0x0
00572A9A  81 C7 05 08 00 00         ADD EDI,0x805
00572AA0  6A 09                     PUSH 0x9
00572AA2  57                        PUSH EDI
00572AA3  52                        PUSH EDX
00572AA4  6A 0C                     PUSH 0xc
00572AA6  8B CE                     MOV ECX,ESI
00572AA8  E8 43 E9 17 00            CALL 0x006f13f0
00572AAD  56                        PUSH ESI
00572AAE  E8 BD E6 17 00            CALL 0x006f1170
00572AB3  83 C4 04                  ADD ESP,0x4
LAB_00572ab6:
00572AB6  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00572AB9  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00572ABC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00572AC1  EB 0E                     JMP 0x00572ad1
LAB_00572ac3:
00572AC3  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00572AC6  33 FF                     XOR EDI,EDI
00572AC8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00572ACE  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_00572ad1:
00572AD1  F6 45 08 02               TEST byte ptr [EBP + 0x8],0x2
00572AD5  74 3A                     JZ 0x00572b11
00572AD7  8D 55 FC                  LEA EDX,[EBP + -0x4]
00572ADA  52                        PUSH EDX
00572ADB  68 30 A3 7C 00            PUSH 0x7ca330
00572AE0  68 01 00 00 80            PUSH 0x80000001
00572AE5  FF D3                     CALL EBX
00572AE7  85 C0                     TEST EAX,EAX
00572AE9  75 1C                     JNZ 0x00572b07
00572AEB  68 00 01 00 00            PUSH 0x100
00572AF0  68 F8 71 80 00            PUSH 0x8071f8
00572AF5  6A 03                     PUSH 0x3
00572AF7  50                        PUSH EAX
00572AF8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00572AFB  68 1C A5 7C 00            PUSH 0x7ca51c
00572B00  50                        PUSH EAX
00572B01  FF 15 5C B9 85 00         CALL dword ptr [0x0085b95c]
LAB_00572b07:
00572B07  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00572B0A  51                        PUSH ECX
00572B0B  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
LAB_00572b11:
00572B11  8B C7                     MOV EAX,EDI
00572B13  5F                        POP EDI
00572B14  5E                        POP ESI
00572B15  5B                        POP EBX
00572B16  8B E5                     MOV ESP,EBP
00572B18  5D                        POP EBP
00572B19  C2 04 00                  RET 0x4
