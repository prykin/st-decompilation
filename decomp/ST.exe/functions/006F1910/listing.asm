FUN_006f1910:
006F1910  55                        PUSH EBP
006F1911  8B EC                     MOV EBP,ESP
006F1913  83 EC 54                  SUB ESP,0x54
006F1916  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F191B  53                        PUSH EBX
006F191C  56                        PUSH ESI
006F191D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006F1920  33 DB                     XOR EBX,EBX
006F1922  57                        PUSH EDI
006F1923  8D 55 B0                  LEA EDX,[EBP + -0x50]
006F1926  8D 4D AC                  LEA ECX,[EBP + -0x54]
006F1929  53                        PUSH EBX
006F192A  52                        PUSH EDX
006F192B  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F192E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F1931  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F1934  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006F1937  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F193D  E8 AE BE 03 00            CALL 0x0072d7f0
006F1942  8B F0                     MOV ESI,EAX
006F1944  83 C4 08                  ADD ESP,0x8
006F1947  3B F3                     CMP ESI,EBX
006F1949  0F 85 99 01 00 00         JNZ 0x006f1ae8
006F194F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F1952  83 C9 FF                  OR ECX,0xffffffff
006F1955  8B FE                     MOV EDI,ESI
006F1957  33 C0                     XOR EAX,EAX
006F1959  F2 AE                     SCASB.REPNE ES:EDI
006F195B  F7 D1                     NOT ECX
006F195D  83 C1 17                  ADD ECX,0x17
006F1960  51                        PUSH ECX
006F1961  E8 AA 92 FB FF            CALL 0x006aac10
006F1966  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
006F1969  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F196C  88 08                     MOV byte ptr [EAX],CL
006F196E  8B FE                     MOV EDI,ESI
006F1970  83 C9 FF                  OR ECX,0xffffffff
006F1973  33 C0                     XOR EAX,EAX
006F1975  F2 AE                     SCASB.REPNE ES:EDI
006F1977  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F197A  53                        PUSH EBX
006F197B  F7 D1                     NOT ECX
006F197D  49                        DEC ECX
006F197E  53                        PUSH EBX
006F197F  66 89 4A 16               MOV word ptr [EDX + 0x16],CX
006F1983  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1986  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006F1989  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
006F198D  8D 78 18                  LEA EDI,[EAX + 0x18]
006F1990  8B C1                     MOV EAX,ECX
006F1992  C1 E9 02                  SHR ECX,0x2
006F1995  F3 A5                     MOVSD.REP ES:EDI,ESI
006F1997  8B C8                     MOV ECX,EAX
006F1999  83 E1 03                  AND ECX,0x3
006F199C  F3 A4                     MOVSB.REP ES:EDI,ESI
006F199E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F19A1  8B 13                     MOV EDX,dword ptr [EBX]
006F19A3  51                        PUSH ECX
006F19A4  52                        PUSH EDX
006F19A5  E8 D6 FF 05 00            CALL 0x00751980
006F19AA  8B F0                     MOV ESI,EAX
006F19AC  83 FE FC                  CMP ESI,-0x4
006F19AF  75 16                     JNZ 0x006f19c7
006F19B1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F19B6  68 63 01 00 00            PUSH 0x163
006F19BB  68 A4 FA 7E 00            PUSH 0x7efaa4
006F19C0  50                        PUSH EAX
006F19C1  56                        PUSH ESI
006F19C2  E8 79 44 FB FF            CALL 0x006a5e40
LAB_006f19c7:
006F19C7  56                        PUSH ESI
006F19C8  8B CB                     MOV ECX,EBX
006F19CA  E8 E1 02 00 00            CALL 0x006f1cb0
006F19CF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F19D2  8B F0                     MOV ESI,EAX
006F19D4  8B 51 01                  MOV EDX,dword ptr [ECX + 0x1]
006F19D7  52                        PUSH EDX
006F19D8  E8 33 92 FB FF            CALL 0x006aac10
006F19DD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F19E0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006F19E3  8B F8                     MOV EDI,EAX
006F19E5  33 C0                     XOR EAX,EAX
006F19E7  8B 49 01                  MOV ECX,dword ptr [ECX + 0x1]
006F19EA  8B D1                     MOV EDX,ECX
006F19EC  C1 E9 02                  SHR ECX,0x2
006F19EF  F3 A5                     MOVSD.REP ES:EDI,ESI
006F19F1  8B CA                     MOV ECX,EDX
006F19F3  83 E1 03                  AND ECX,0x3
006F19F6  F3 A4                     MOVSB.REP ES:EDI,ESI
006F19F8  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F19FB  83 C9 FF                  OR ECX,0xffffffff
006F19FE  8B FE                     MOV EDI,ESI
006F1A00  F2 AE                     SCASB.REPNE ES:EDI
006F1A02  F7 D1                     NOT ECX
006F1A04  83 C1 17                  ADD ECX,0x17
006F1A07  51                        PUSH ECX
006F1A08  E8 03 92 FB FF            CALL 0x006aac10
006F1A0D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F1A10  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F1A13  8B FE                     MOV EDI,ESI
006F1A15  8A 11                     MOV DL,byte ptr [ECX]
006F1A17  83 C9 FF                  OR ECX,0xffffffff
006F1A1A  88 10                     MOV byte ptr [EAX],DL
006F1A1C  33 C0                     XOR EAX,EAX
006F1A1E  F2 AE                     SCASB.REPNE ES:EDI
006F1A20  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F1A23  F7 D1                     NOT ECX
006F1A25  49                        DEC ECX
006F1A26  66 89 48 16               MOV word ptr [EAX + 0x16],CX
006F1A2A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F1A2D  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
006F1A31  8B D1                     MOV EDX,ECX
006F1A33  8D 78 18                  LEA EDI,[EAX + 0x18]
006F1A36  C1 E9 02                  SHR ECX,0x2
006F1A39  F3 A5                     MOVSD.REP ES:EDI,ESI
006F1A3B  8B CA                     MOV ECX,EDX
006F1A3D  83 E1 03                  AND ECX,0x3
006F1A40  F3 A4                     MOVSB.REP ES:EDI,ESI
006F1A42  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1A45  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F1A48  8B 48 01                  MOV ECX,dword ptr [EAX + 0x1]
006F1A4B  89 4A 01                  MOV dword ptr [EDX + 0x1],ECX
006F1A4E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1A51  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F1A54  8A 48 05                  MOV CL,byte ptr [EAX + 0x5]
006F1A57  88 4A 05                  MOV byte ptr [EDX + 0x5],CL
006F1A5A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1A5D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F1A60  8B 48 06                  MOV ECX,dword ptr [EAX + 0x6]
006F1A63  89 4A 06                  MOV dword ptr [EDX + 0x6],ECX
006F1A66  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1A69  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006F1A6C  83 C0 0A                  ADD EAX,0xa
006F1A6F  83 C1 0A                  ADD ECX,0xa
006F1A72  8B 10                     MOV EDX,dword ptr [EAX]
006F1A74  89 11                     MOV dword ptr [ECX],EDX
006F1A76  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006F1A79  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006F1A7C  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006F1A7F  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006F1A82  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F1A85  8B 13                     MOV EDX,dword ptr [EBX]
006F1A87  51                        PUSH ECX
006F1A88  52                        PUSH EDX
006F1A89  E8 72 F6 05 00            CALL 0x00751100
006F1A8E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1A91  85 C0                     TEST EAX,EAX
006F1A93  74 09                     JZ 0x006f1a9e
006F1A95  8D 45 FC                  LEA EAX,[EBP + -0x4]
006F1A98  50                        PUSH EAX
006F1A99  E8 C2 95 FB FF            CALL 0x006ab060
LAB_006f1a9e:
006F1A9E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F1AA1  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F1AA4  8B 48 01                  MOV ECX,dword ptr [EAX + 0x1]
006F1AA7  51                        PUSH ECX
006F1AA8  52                        PUSH EDX
006F1AA9  50                        PUSH EAX
006F1AAA  8B 03                     MOV EAX,dword ptr [EBX]
006F1AAC  50                        PUSH EAX
006F1AAD  E8 9E F5 05 00            CALL 0x00751050
006F1AB2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F1AB5  85 C0                     TEST EAX,EAX
006F1AB7  74 09                     JZ 0x006f1ac2
006F1AB9  8D 4D F8                  LEA ECX,[EBP + -0x8]
006F1ABC  51                        PUSH ECX
006F1ABD  E8 9E 95 FB FF            CALL 0x006ab060
LAB_006f1ac2:
006F1AC2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F1AC5  85 C0                     TEST EAX,EAX
006F1AC7  74 09                     JZ 0x006f1ad2
006F1AC9  8D 55 F4                  LEA EDX,[EBP + -0xc]
006F1ACC  52                        PUSH EDX
006F1ACD  E8 8E 95 FB FF            CALL 0x006ab060
LAB_006f1ad2:
006F1AD2  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006F1AD5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F1ADA  B8 01 00 00 00            MOV EAX,0x1
006F1ADF  5F                        POP EDI
006F1AE0  5E                        POP ESI
006F1AE1  5B                        POP EBX
006F1AE2  8B E5                     MOV ESP,EBP
006F1AE4  5D                        POP EBP
006F1AE5  C2 10 00                  RET 0x10
LAB_006f1ae8:
006F1AE8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1AEB  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006F1AEE  3B C3                     CMP EAX,EBX
006F1AF0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F1AF6  74 09                     JZ 0x006f1b01
006F1AF8  8D 55 FC                  LEA EDX,[EBP + -0x4]
006F1AFB  52                        PUSH EDX
006F1AFC  E8 5F 95 FB FF            CALL 0x006ab060
LAB_006f1b01:
006F1B01  39 5D F8                  CMP dword ptr [EBP + -0x8],EBX
006F1B04  74 09                     JZ 0x006f1b0f
006F1B06  8D 45 F8                  LEA EAX,[EBP + -0x8]
006F1B09  50                        PUSH EAX
006F1B0A  E8 51 95 FB FF            CALL 0x006ab060
LAB_006f1b0f:
006F1B0F  39 5D F4                  CMP dword ptr [EBP + -0xc],EBX
006F1B12  74 09                     JZ 0x006f1b1d
006F1B14  8D 4D F4                  LEA ECX,[EBP + -0xc]
006F1B17  51                        PUSH ECX
006F1B18  E8 43 95 FB FF            CALL 0x006ab060
LAB_006f1b1d:
006F1B1D  39 5D 14                  CMP dword ptr [EBP + 0x14],EBX
006F1B20  75 05                     JNZ 0x006f1b27
006F1B22  83 FE FC                  CMP ESI,-0x4
006F1B25  74 34                     JZ 0x006f1b5b
LAB_006f1b27:
006F1B27  68 70 FB 7E 00            PUSH 0x7efb70
006F1B2C  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F1B31  56                        PUSH ESI
006F1B32  53                        PUSH EBX
006F1B33  68 82 01 00 00            PUSH 0x182
006F1B38  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1B3D  E8 8E B9 FB FF            CALL 0x006ad4d0
006F1B42  83 C4 18                  ADD ESP,0x18
006F1B45  85 C0                     TEST EAX,EAX
006F1B47  74 01                     JZ 0x006f1b4a
006F1B49  CC                        INT3
LAB_006f1b4a:
006F1B4A  68 84 01 00 00            PUSH 0x184
006F1B4F  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1B54  53                        PUSH EBX
006F1B55  56                        PUSH ESI
006F1B56  E8 E5 42 FB FF            CALL 0x006a5e40
LAB_006f1b5b:
006F1B5B  5F                        POP EDI
006F1B5C  5E                        POP ESI
006F1B5D  33 C0                     XOR EAX,EAX
006F1B5F  5B                        POP EBX
006F1B60  8B E5                     MOV ESP,EBP
006F1B62  5D                        POP EBP
006F1B63  C2 10 00                  RET 0x10
