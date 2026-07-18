FUN_005b2970:
005B2970  55                        PUSH EBP
005B2971  8B EC                     MOV EBP,ESP
005B2973  83 EC 48                  SUB ESP,0x48
005B2976  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B297B  53                        PUSH EBX
005B297C  56                        PUSH ESI
005B297D  57                        PUSH EDI
005B297E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B2981  33 FF                     XOR EDI,EDI
005B2983  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B2986  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B2989  57                        PUSH EDI
005B298A  52                        PUSH EDX
005B298B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B298E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B2994  E8 57 AE 17 00            CALL 0x0072d7f0
005B2999  8B F0                     MOV ESI,EAX
005B299B  83 C4 08                  ADD ESP,0x8
005B299E  3B F7                     CMP ESI,EDI
005B29A0  0F 85 43 04 00 00         JNZ 0x005b2de9
005B29A6  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B29AC  E8 5B 2F E5 FF            CALL 0x0040590c
005B29B1  A0 A0 67 80 00            MOV AL,[0x008067a0]
005B29B6  C6 05 7E 87 80 00 01      MOV byte ptr [0x0080877e],0x1
005B29BD  84 C0                     TEST AL,AL
005B29BF  89 3D 7F 87 80 00         MOV dword ptr [0x0080877f],EDI
005B29C5  74 24                     JZ 0x005b29eb
005B29C7  B9 90 2A 80 00            MOV ECX,0x802a90
005B29CC  FF 15 74 C0 85 00         CALL dword ptr [0x0085c074]
005B29D2  B9 90 2A 80 00            MOV ECX,0x802a90
005B29D7  FF 15 FC BF 85 00         CALL dword ptr [0x0085bffc]
005B29DD  C6 05 99 2A 80 00 00      MOV byte ptr [0x00802a99],0x0
005B29E4  C6 05 A0 67 80 00 00      MOV byte ptr [0x008067a0],0x0
LAB_005b29eb:
005B29EB  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005B29F0  3B C7                     CMP EAX,EDI
005B29F2  74 28                     JZ 0x005b2a1c
005B29F4  39 B8 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EDI
005B29FA  74 14                     JZ 0x005b2a10
005B29FC  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005B29FF  83 F9 FF                  CMP ECX,-0x1
005B2A02  74 18                     JZ 0x005b2a1c
005B2A04  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005B2A07  51                        PUSH ECX
005B2A08  50                        PUSH EAX
005B2A09  E8 E2 10 10 00            CALL 0x006b3af0
005B2A0E  EB 0C                     JMP 0x005b2a1c
LAB_005b2a10:
005B2A10  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005B2A16  51                        PUSH ECX
005B2A17  E8 F4 60 10 00            CALL 0x006b8b10
LAB_005b2a1c:
005B2A1C  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B2A22  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005B2A25  39 7A 28                  CMP dword ptr [EDX + 0x28],EDI
005B2A28  74 34                     JZ 0x005b2a5e
005B2A2A  8D 9E 7F 1A 00 00         LEA EBX,[ESI + 0x1a7f]
LAB_005b2a30:
005B2A30  6A 00                     PUSH 0x0
005B2A32  6A 00                     PUSH 0x0
005B2A34  57                        PUSH EDI
005B2A35  6A 02                     PUSH 0x2
005B2A37  68 38 C9 7C 00            PUSH 0x7cc938
005B2A3C  E8 BF 01 14 00            CALL 0x006f2c00
005B2A41  83 C4 0C                  ADD ESP,0xc
005B2A44  50                        PUSH EAX
005B2A45  A1 80 67 80 00            MOV EAX,[0x00806780]
005B2A4A  50                        PUSH EAX
005B2A4B  E8 B0 82 16 00            CALL 0x0071ad00
005B2A50  83 C4 10                  ADD ESP,0x10
005B2A53  89 03                     MOV dword ptr [EBX],EAX
005B2A55  47                        INC EDI
005B2A56  83 C3 04                  ADD EBX,0x4
005B2A59  83 FF 0A                  CMP EDI,0xa
005B2A5C  7C D2                     JL 0x005b2a30
LAB_005b2a5e:
005B2A5E  33 FF                     XOR EDI,EDI
LAB_005b2a60:
005B2A60  8B 84 BE 7F 1A 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1a7f]
005B2A67  85 C0                     TEST EAX,EAX
005B2A69  0F 84 AD 00 00 00         JZ 0x005b2b1c
005B2A6F  50                        PUSH EAX
005B2A70  E8 AB 1F 11 00            CALL 0x006c4a20
005B2A75  85 C0                     TEST EAX,EAX
005B2A77  89 84 BE A7 1A 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x1aa7],EAX
005B2A7E  0F 84 98 00 00 00         JZ 0x005b2b1c
005B2A84  83 FF 09                  CMP EDI,0x9
005B2A87  0F 87 8F 00 00 00         JA 0x005b2b1c
switchD_005b2a8d::switchD:
005B2A8D  FF 24 BD 28 2E 5B 00      JMP dword ptr [EDI*0x4 + 0x5b2e28]
switchD_005b2a8d::caseD_0:
005B2A94  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005B2A9A  6A 5D                     PUSH 0x5d
005B2A9C  6A 00                     PUSH 0x0
005B2A9E  51                        PUSH ECX
005B2A9F  EB 75                     JMP 0x005b2b16
switchD_005b2a8d::caseD_1:
005B2AA1  6A 5D                     PUSH 0x5d
005B2AA3  68 0F 02 00 00            PUSH 0x20f
005B2AA8  EB 65                     JMP 0x005b2b0f
switchD_005b2a8d::caseD_2:
005B2AAA  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005B2AB0  6A 65                     PUSH 0x65
005B2AB2  68 04 01 00 00            PUSH 0x104
005B2AB7  51                        PUSH ECX
005B2AB8  EB 5C                     JMP 0x005b2b16
switchD_005b2a8d::caseD_3:
005B2ABA  68 AB 00 00 00            PUSH 0xab
005B2ABF  68 04 01 00 00            PUSH 0x104
005B2AC4  EB 49                     JMP 0x005b2b0f
switchD_005b2a8d::caseD_4:
005B2AC6  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005B2ACC  6A 23                     PUSH 0x23
005B2ACE  68 F5 02 00 00            PUSH 0x2f5
005B2AD3  51                        PUSH ECX
005B2AD4  EB 40                     JMP 0x005b2b16
switchD_005b2a8d::caseD_5:
005B2AD6  68 34 01 00 00            PUSH 0x134
005B2ADB  6A 00                     PUSH 0x0
005B2ADD  EB 30                     JMP 0x005b2b0f
switchD_005b2a8d::caseD_6:
005B2ADF  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005B2AE5  68 31 01 00 00            PUSH 0x131
005B2AEA  68 75 02 00 00            PUSH 0x275
005B2AEF  51                        PUSH ECX
005B2AF0  EB 24                     JMP 0x005b2b16
switchD_005b2a8d::caseD_7:
005B2AF2  6A 32                     PUSH 0x32
005B2AF4  6A 5A                     PUSH 0x5a
005B2AF6  EB 17                     JMP 0x005b2b0f
switchD_005b2a8d::caseD_8:
005B2AF8  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005B2AFE  6A 39                     PUSH 0x39
005B2B00  68 2C 02 00 00            PUSH 0x22c
005B2B05  51                        PUSH ECX
005B2B06  EB 0E                     JMP 0x005b2b16
switchD_005b2a8d::caseD_9:
005B2B08  6A 39                     PUSH 0x39
005B2B0A  68 F5 02 00 00            PUSH 0x2f5
LAB_005b2b0f:
005B2B0F  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005B2B15  52                        PUSH EDX
LAB_005b2b16:
005B2B16  50                        PUSH EAX
005B2B17  E8 E4 1E 11 00            CALL 0x006c4a00
switchD_005b2a8d::default:
005B2B1C  47                        INC EDI
005B2B1D  83 FF 0A                  CMP EDI,0xa
005B2B20  0F 8C 3A FF FF FF         JL 0x005b2a60
005B2B26  6A FF                     PUSH -0x1
005B2B28  6A FF                     PUSH -0x1
005B2B2A  6A 00                     PUSH 0x0
005B2B2C  6A 00                     PUSH 0x0
005B2B2E  6A 00                     PUSH 0x0
005B2B30  6A 00                     PUSH 0x0
005B2B32  6A 00                     PUSH 0x0
005B2B34  6A 28                     PUSH 0x28
005B2B36  6A 06                     PUSH 0x6
005B2B38  6A 09                     PUSH 0x9
005B2B3A  6A 08                     PUSH 0x8
005B2B3C  6A 06                     PUSH 0x6
005B2B3E  68 A4 BD 7C 00            PUSH 0x7cbda4
005B2B43  6A 33                     PUSH 0x33
005B2B45  6A 38                     PUSH 0x38
005B2B47  68 9D 00 00 00            PUSH 0x9d
005B2B4C  6A 00                     PUSH 0x0
005B2B4E  6A 00                     PUSH 0x0
005B2B50  6A 08                     PUSH 0x8
005B2B52  6A 07                     PUSH 0x7
005B2B54  68 3A 01 00 00            PUSH 0x13a
005B2B59  68 F2 00 00 00            PUSH 0xf2
005B2B5E  8D 86 9B 00 00 00         LEA EAX,[ESI + 0x9b]
005B2B64  68 98 BD 7C 00            PUSH 0x7cbd98
005B2B69  50                        PUSH EAX
005B2B6A  8B CE                     MOV ECX,ESI
005B2B6C  E8 21 EE E4 FF            CALL 0x00401992
005B2B71  6A FF                     PUSH -0x1
005B2B73  6A FF                     PUSH -0x1
005B2B75  6A 00                     PUSH 0x0
005B2B77  6A 00                     PUSH 0x0
005B2B79  6A 00                     PUSH 0x0
005B2B7B  6A 00                     PUSH 0x0
005B2B7D  6A 00                     PUSH 0x0
005B2B7F  6A 32                     PUSH 0x32
005B2B81  6A 06                     PUSH 0x6
005B2B83  6A 08                     PUSH 0x8
005B2B85  6A 08                     PUSH 0x8
005B2B87  6A 08                     PUSH 0x8
005B2B89  68 88 BD 7C 00            PUSH 0x7cbd88
005B2B8E  6A 33                     PUSH 0x33
005B2B90  6A 38                     PUSH 0x38
005B2B92  68 9D 00 00 00            PUSH 0x9d
005B2B97  6A 00                     PUSH 0x0
005B2B99  6A 00                     PUSH 0x0
005B2B9B  6A 08                     PUSH 0x8
005B2B9D  6A 09                     PUSH 0x9
005B2B9F  68 3A 01 00 00            PUSH 0x13a
005B2BA4  68 91 01 00 00            PUSH 0x191
005B2BA9  8D 8E 96 02 00 00         LEA ECX,[ESI + 0x296]
005B2BAF  68 7C BD 7C 00            PUSH 0x7cbd7c
005B2BB4  51                        PUSH ECX
005B2BB5  8B CE                     MOV ECX,ESI
005B2BB7  E8 D6 ED E4 FF            CALL 0x00401992
005B2BBC  6A FF                     PUSH -0x1
005B2BBE  6A FF                     PUSH -0x1
005B2BC0  6A 00                     PUSH 0x0
005B2BC2  6A 00                     PUSH 0x0
005B2BC4  6A 00                     PUSH 0x0
005B2BC6  6A 00                     PUSH 0x0
005B2BC8  6A 00                     PUSH 0x0
005B2BCA  6A 28                     PUSH 0x28
005B2BCC  6A 05                     PUSH 0x5
005B2BCE  6A 0A                     PUSH 0xa
005B2BD0  6A 07                     PUSH 0x7
005B2BD2  6A 08                     PUSH 0x8
005B2BD4  68 6C BD 7C 00            PUSH 0x7cbd6c
005B2BD9  6A 33                     PUSH 0x33
005B2BDB  6A 38                     PUSH 0x38
005B2BDD  68 9D 00 00 00            PUSH 0x9d
005B2BE2  6A 00                     PUSH 0x0
005B2BE4  6A 00                     PUSH 0x0
005B2BE6  6A 06                     PUSH 0x6
005B2BE8  6A 08                     PUSH 0x8
005B2BEA  68 73 01 00 00            PUSH 0x173
005B2BEF  68 F2 00 00 00            PUSH 0xf2
005B2BF4  8D 96 91 04 00 00         LEA EDX,[ESI + 0x491]
005B2BFA  68 60 BD 7C 00            PUSH 0x7cbd60
005B2BFF  52                        PUSH EDX
005B2C00  8B CE                     MOV ECX,ESI
005B2C02  E8 8B ED E4 FF            CALL 0x00401992
005B2C07  6A FF                     PUSH -0x1
005B2C09  6A FF                     PUSH -0x1
005B2C0B  6A 00                     PUSH 0x0
005B2C0D  6A 00                     PUSH 0x0
005B2C0F  6A 00                     PUSH 0x0
005B2C11  6A 00                     PUSH 0x0
005B2C13  6A 00                     PUSH 0x0
005B2C15  6A 32                     PUSH 0x32
005B2C17  6A 05                     PUSH 0x5
005B2C19  6A 08                     PUSH 0x8
005B2C1B  6A 07                     PUSH 0x7
005B2C1D  6A 08                     PUSH 0x8
005B2C1F  68 50 BD 7C 00            PUSH 0x7cbd50
005B2C24  6A 33                     PUSH 0x33
005B2C26  6A 38                     PUSH 0x38
005B2C28  68 9D 00 00 00            PUSH 0x9d
005B2C2D  6A 00                     PUSH 0x0
005B2C2F  6A 00                     PUSH 0x0
005B2C31  6A 06                     PUSH 0x6
005B2C33  6A 08                     PUSH 0x8
005B2C35  68 73 01 00 00            PUSH 0x173
005B2C3A  68 91 01 00 00            PUSH 0x191
005B2C3F  8D 86 8C 06 00 00         LEA EAX,[ESI + 0x68c]
005B2C45  68 44 BD 7C 00            PUSH 0x7cbd44
005B2C4A  50                        PUSH EAX
005B2C4B  8B CE                     MOV ECX,ESI
005B2C4D  E8 40 ED E4 FF            CALL 0x00401992
005B2C52  6A FF                     PUSH -0x1
005B2C54  6A FF                     PUSH -0x1
005B2C56  6A 00                     PUSH 0x0
005B2C58  6A 00                     PUSH 0x0
005B2C5A  6A 00                     PUSH 0x0
005B2C5C  6A 00                     PUSH 0x0
005B2C5E  6A 00                     PUSH 0x0
005B2C60  6A 32                     PUSH 0x32
005B2C62  6A 06                     PUSH 0x6
005B2C64  6A 09                     PUSH 0x9
005B2C66  6A 09                     PUSH 0x9
005B2C68  6A 08                     PUSH 0x8
005B2C6A  68 34 BD 7C 00            PUSH 0x7cbd34
005B2C6F  6A 33                     PUSH 0x33
005B2C71  6A 38                     PUSH 0x38
005B2C73  68 9D 00 00 00            PUSH 0x9d
005B2C78  6A 00                     PUSH 0x0
005B2C7A  6A 00                     PUSH 0x0
005B2C7C  6A 08                     PUSH 0x8
005B2C7E  6A 07                     PUSH 0x7
005B2C80  68 AC 01 00 00            PUSH 0x1ac
005B2C85  68 43 01 00 00            PUSH 0x143
005B2C8A  8D 8E 87 08 00 00         LEA ECX,[ESI + 0x887]
005B2C90  68 28 BD 7C 00            PUSH 0x7cbd28
005B2C95  51                        PUSH ECX
005B2C96  8B CE                     MOV ECX,ESI
005B2C98  E8 F5 EC E4 FF            CALL 0x00401992
005B2C9D  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005B2CA3  6A 01                     PUSH 0x1
005B2CA5  6A 00                     PUSH 0x0
005B2CA7  68 30 C9 7C 00            PUSH 0x7cc930
005B2CAC  52                        PUSH EDX
005B2CAD  E8 3E 7D 15 00            CALL 0x0070a9f0
005B2CB2  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B2CB8  6A 00                     PUSH 0x0
005B2CBA  6A 01                     PUSH 0x1
005B2CBC  89 41 2C                  MOV dword ptr [ECX + 0x2c],EAX
005B2CBF  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005B2CC5  52                        PUSH EDX
005B2CC6  E8 78 F0 E4 FF            CALL 0x00401d43
005B2CCB  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005B2CD1  83 C4 1C                  ADD ESP,0x1c
005B2CD4  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005B2CDA  85 C9                     TEST ECX,ECX
005B2CDC  74 31                     JZ 0x005b2d0f
005B2CDE  6A 01                     PUSH 0x1
005B2CE0  6A 00                     PUSH 0x0
005B2CE2  6A 00                     PUSH 0x0
005B2CE4  E8 BC F2 E4 FF            CALL 0x00401fa5
005B2CE9  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005B2CEF  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005B2CF5  E8 97 24 E5 FF            CALL 0x00405191
005B2CFA  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005B2D00  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005B2D03  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005B2D09  89 88 AB 1C 00 00         MOV dword ptr [EAX + 0x1cab],ECX
LAB_005b2d0f:
005B2D0F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B2D14  8D 96 DF 1A 00 00         LEA EDX,[ESI + 0x1adf]
005B2D1A  6A 00                     PUSH 0x0
005B2D1C  52                        PUSH EDX
005B2D1D  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005B2D20  51                        PUSH ECX
005B2D21  E8 3A 96 10 00            CALL 0x006bc360
005B2D26  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005B2D2C  85 FF                     TEST EDI,EDI
005B2D2E  74 4D                     JZ 0x005b2d7d
005B2D30  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005B2D36  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005B2D3C  52                        PUSH EDX
005B2D3D  50                        PUSH EAX
005B2D3E  6A 00                     PUSH 0x0
005B2D40  8B CF                     MOV ECX,EDI
005B2D42  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005B2D49  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005B2D52  E8 27 23 E5 FF            CALL 0x0040507e
005B2D57  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005B2D5D  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005B2D63  51                        PUSH ECX
005B2D64  52                        PUSH EDX
005B2D65  8B CF                     MOV ECX,EDI
005B2D67  E8 B2 F6 E4 FF            CALL 0x0040241e
005B2D6C  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005B2D73  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005b2d7d:
005B2D7D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B2D80  6A 01                     PUSH 0x1
005B2D82  50                        PUSH EAX
005B2D83  8B CE                     MOV ECX,ESI
005B2D85  E8 76 F1 E4 FF            CALL 0x00401f00
005B2D8A  6A 00                     PUSH 0x0
005B2D8C  B9 58 76 80 00            MOV ECX,0x807658
005B2D91  E8 06 05 E5 FF            CALL 0x0040329c
005B2D96  F6 05 01 73 80 00 08      TEST byte ptr [0x00807301],0x8
005B2D9D  74 12                     JZ 0x005b2db1
005B2D9F  6A 00                     PUSH 0x0
005B2DA1  6A 00                     PUSH 0x0
005B2DA3  6A 02                     PUSH 0x2
005B2DA5  6A 10                     PUSH 0x10
005B2DA7  B9 58 76 80 00            MOV ECX,0x807658
005B2DAC  E8 20 02 E5 FF            CALL 0x00402fd1
LAB_005b2db1:
005B2DB1  A0 46 84 80 00            MOV AL,[0x00808446]
005B2DB6  84 C0                     TEST AL,AL
005B2DB8  75 1D                     JNZ 0x005b2dd7
005B2DBA  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005B2DBD  C7 86 6B 1A 00 00 02 00 00 00  MOV dword ptr [ESI + 0x1a6b],0x2
005B2DC7  89 8E 67 1A 00 00         MOV dword ptr [ESI + 0x1a67],ECX
005B2DCD  C7 86 6F 1A 00 00 02 69 00 00  MOV dword ptr [ESI + 0x1a6f],0x6902
LAB_005b2dd7:
005B2DD7  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B2DDA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B2DE0  5F                        POP EDI
005B2DE1  5E                        POP ESI
005B2DE2  5B                        POP EBX
005B2DE3  8B E5                     MOV ESP,EBP
005B2DE5  5D                        POP EBP
005B2DE6  C2 04 00                  RET 0x4
LAB_005b2de9:
005B2DE9  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005B2DEC  68 10 C9 7C 00            PUSH 0x7cc910
005B2DF1  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B2DF6  56                        PUSH ESI
005B2DF7  57                        PUSH EDI
005B2DF8  6A 48                     PUSH 0x48
005B2DFA  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B2DFF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B2E04  E8 C7 A6 0F 00            CALL 0x006ad4d0
005B2E09  83 C4 18                  ADD ESP,0x18
005B2E0C  85 C0                     TEST EAX,EAX
005B2E0E  74 01                     JZ 0x005b2e11
005B2E10  CC                        INT3
LAB_005b2e11:
005B2E11  6A 48                     PUSH 0x48
005B2E13  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B2E18  57                        PUSH EDI
005B2E19  56                        PUSH ESI
005B2E1A  E8 21 30 0F 00            CALL 0x006a5e40
005B2E1F  5F                        POP EDI
005B2E20  5E                        POP ESI
005B2E21  5B                        POP EBX
005B2E22  8B E5                     MOV ESP,EBP
005B2E24  5D                        POP EBP
005B2E25  C2 04 00                  RET 0x4
