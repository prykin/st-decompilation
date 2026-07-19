TLOBaseTy::LoadImages:
004C9770  55                        PUSH EBP
004C9771  8B EC                     MOV EBP,ESP
004C9773  81 EC 50 01 00 00         SUB ESP,0x150
004C9779  8A 81 3D 02 00 00         MOV AL,byte ptr [ECX + 0x23d]
004C977F  53                        PUSH EBX
004C9780  56                        PUSH ESI
004C9781  57                        PUSH EDI
004C9782  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004C9785  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C978B  50                        PUSH EAX
004C978C  E8 26 B2 F3 FF            CALL 0x004049b7
004C9791  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004C9797  25 FF 00 00 00            AND EAX,0xff
004C979C  48                        DEC EAX
004C979D  8D 55 B0                  LEA EDX,[EBP + -0x50]
004C97A0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004C97A3  8D 45 B4                  LEA EAX,[EBP + -0x4c]
004C97A6  6A 00                     PUSH 0x0
004C97A8  50                        PUSH EAX
004C97A9  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
004C97AC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004C97B2  E8 39 40 26 00            CALL 0x0072d7f0
004C97B7  8B F0                     MOV ESI,EAX
004C97B9  83 C4 08                  ADD ESP,0x8
004C97BC  85 F6                     TEST ESI,ESI
004C97BE  0F 85 2F 09 00 00         JNZ 0x004ca0f3
004C97C4  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004C97C7  8B CF                     MOV ECX,EDI
004C97C9  8B B7 45 02 00 00         MOV ESI,dword ptr [EDI + 0x245]
004C97CF  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004C97D2  E8 3A B2 F3 FF            CALL 0x00404a11
004C97D7  83 FE 01                  CMP ESI,0x1
004C97DA  75 4C                     JNZ 0x004c9828
004C97DC  83 BF 4D 02 00 00 04      CMP dword ptr [EDI + 0x24d],0x4
004C97E3  75 43                     JNZ 0x004c9828
004C97E5  8B 87 35 02 00 00         MOV EAX,dword ptr [EDI + 0x235]
004C97EB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C97EE  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
004C97F1  8B 0D A8 B1 7B 00         MOV ECX,dword ptr [0x007bb1a8]
004C97F7  03 C2                     ADD EAX,EDX
004C97F9  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C97FC  C1 E0 02                  SHL EAX,0x2
004C97FF  8B 14 08                  MOV EDX,dword ptr [EAX + ECX*0x1]
004C9802  89 97 EF 05 00 00         MOV dword ptr [EDI + 0x5ef],EDX
004C9808  8B 0D A8 B1 7B 00         MOV ECX,dword ptr [0x007bb1a8]
004C980E  8B 54 08 04               MOV EDX,dword ptr [EAX + ECX*0x1 + 0x4]
004C9812  89 97 F3 05 00 00         MOV dword ptr [EDI + 0x5f3],EDX
004C9818  8B 0D A8 B1 7B 00         MOV ECX,dword ptr [0x007bb1a8]
004C981E  8B 54 08 08               MOV EDX,dword ptr [EAX + ECX*0x1 + 0x8]
004C9822  89 97 F7 05 00 00         MOV dword ptr [EDI + 0x5f7],EDX
LAB_004c9828:
004C9828  8B 87 EF 05 00 00         MOV EAX,dword ptr [EDI + 0x5ef]
004C982E  85 C0                     TEST EAX,EAX
004C9830  74 2E                     JZ 0x004c9860
004C9832  6A 1D                     PUSH 0x1d
004C9834  50                        PUSH EAX
004C9835  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004C983A  8D 8F D5 01 00 00         LEA ECX,[EDI + 0x1d5]
004C9840  50                        PUSH EAX
004C9841  6A 0E                     PUSH 0xe
004C9843  E8 3B A9 F3 FF            CALL 0x00404183
004C9848  85 C0                     TEST EAX,EAX
004C984A  74 14                     JZ 0x004c9860
004C984C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C9852  6A 1F                     PUSH 0x1f
004C9854  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9859  51                        PUSH ECX
004C985A  50                        PUSH EAX
004C985B  E8 E0 C5 1D 00            CALL 0x006a5e40
LAB_004c9860:
004C9860  8B 87 F3 05 00 00         MOV EAX,dword ptr [EDI + 0x5f3]
004C9866  8B 1D E8 BD 85 00         MOV EBX,dword ptr [0x0085bde8]
004C986C  85 C0                     TEST EAX,EAX
004C986E  74 52                     JZ 0x004c98c2
004C9870  8B 97 C0 05 00 00         MOV EDX,dword ptr [EDI + 0x5c0]
004C9876  52                        PUSH EDX
004C9877  50                        PUSH EAX
004C9878  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
004C987E  68 08 C9 7A 00            PUSH 0x7ac908
004C9883  50                        PUSH EAX
004C9884  FF D3                     CALL EBX
004C9886  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004C988C  83 C4 10                  ADD ESP,0x10
004C988F  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
004C9895  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
004C989B  6A 1D                     PUSH 0x1d
004C989D  51                        PUSH ECX
004C989E  52                        PUSH EDX
004C989F  6A 0D                     PUSH 0xd
004C98A1  8B CE                     MOV ECX,ESI
004C98A3  E8 DB A8 F3 FF            CALL 0x00404183
004C98A8  85 C0                     TEST EAX,EAX
004C98AA  74 3F                     JZ 0x004c98eb
004C98AC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C98B2  6A 23                     PUSH 0x23
004C98B4  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C98B9  51                        PUSH ECX
004C98BA  50                        PUSH EAX
004C98BB  E8 80 C5 1D 00            CALL 0x006a5e40
004C98C0  EB 29                     JMP 0x004c98eb
LAB_004c98c2:
004C98C2  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
004C98C8  6A 0D                     PUSH 0xd
004C98CA  8B CE                     MOV ECX,ESI
004C98CC  E8 93 A9 F3 FF            CALL 0x00404264
004C98D1  8B 97 F5 01 00 00         MOV EDX,dword ptr [EDI + 0x1f5]
004C98D7  33 C0                     XOR EAX,EAX
004C98D9  89 82 E8 01 00 00         MOV dword ptr [EDX + 0x1e8],EAX
004C98DF  8B 8F F5 01 00 00         MOV ECX,dword ptr [EDI + 0x1f5]
004C98E5  89 81 E4 01 00 00         MOV dword ptr [ECX + 0x1e4],EAX
LAB_004c98eb:
004C98EB  8B 87 F7 05 00 00         MOV EAX,dword ptr [EDI + 0x5f7]
004C98F1  85 C0                     TEST EAX,EAX
004C98F3  74 55                     JZ 0x004c994a
004C98F5  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004C98FB  6A 1D                     PUSH 0x1d
004C98FD  50                        PUSH EAX
004C98FE  52                        PUSH EDX
004C98FF  6A 0C                     PUSH 0xc
004C9901  8B CE                     MOV ECX,ESI
004C9903  E8 7B A8 F3 FF            CALL 0x00404183
004C9908  85 C0                     TEST EAX,EAX
004C990A  74 14                     JZ 0x004c9920
004C990C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C9912  6A 28                     PUSH 0x28
004C9914  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9919  51                        PUSH ECX
004C991A  50                        PUSH EAX
004C991B  E8 20 C5 1D 00            CALL 0x006a5e40
LAB_004c9920:
004C9920  8B 97 35 02 00 00         MOV EDX,dword ptr [EDI + 0x235]
004C9926  8B 04 95 2C 0C 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x790c2c]
004C992D  85 C0                     TEST EAX,EAX
004C992F  74 3C                     JZ 0x004c996d
004C9931  6A 01                     PUSH 0x1
004C9933  6A 0C                     PUSH 0xc
004C9935  8B CE                     MOV ECX,ESI
004C9937  E8 90 B9 F3 FF            CALL 0x004052cc
004C993C  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
004C9942  50                        PUSH EAX
004C9943  E8 48 08 22 00            CALL 0x006ea190
004C9948  EB 23                     JMP 0x004c996d
LAB_004c994a:
004C994A  6A 0C                     PUSH 0xc
004C994C  8B CE                     MOV ECX,ESI
004C994E  E8 11 A9 F3 FF            CALL 0x00404264
004C9953  8B 8F F5 01 00 00         MOV ECX,dword ptr [EDI + 0x1f5]
004C9959  33 C0                     XOR EAX,EAX
004C995B  89 81 C4 01 00 00         MOV dword ptr [ECX + 0x1c4],EAX
004C9961  8B 97 F5 01 00 00         MOV EDX,dword ptr [EDI + 0x1f5]
004C9967  89 82 C0 01 00 00         MOV dword ptr [EDX + 0x1c0],EAX
LAB_004c996d:
004C996D  8B 87 35 02 00 00         MOV EAX,dword ptr [EDI + 0x235]
004C9973  8B 0C 85 10 1A 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x791a10]
004C997A  85 C9                     TEST ECX,ECX
004C997C  0F 84 F5 01 00 00         JZ 0x004c9b77
004C9982  8B 8F EF 05 00 00         MOV ECX,dword ptr [EDI + 0x5ef]
004C9988  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
004C998E  51                        PUSH ECX
004C998F  68 FC C8 7A 00            PUSH 0x7ac8fc
004C9994  52                        PUSH EDX
004C9995  FF D3                     CALL EBX
004C9997  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004C999D  83 C4 0C                  ADD ESP,0xc
004C99A0  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
004C99A6  6A 1D                     PUSH 0x1d
004C99A8  50                        PUSH EAX
004C99A9  51                        PUSH ECX
004C99AA  6A 09                     PUSH 0x9
004C99AC  8B CE                     MOV ECX,ESI
004C99AE  E8 D0 A7 F3 FF            CALL 0x00404183
004C99B3  85 C0                     TEST EAX,EAX
004C99B5  74 14                     JZ 0x004c99cb
004C99B7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004C99BD  6A 31                     PUSH 0x31
004C99BF  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C99C4  52                        PUSH EDX
004C99C5  50                        PUSH EAX
004C99C6  E8 75 C4 1D 00            CALL 0x006a5e40
LAB_004c99cb:
004C99CB  8B 87 AC 05 00 00         MOV EAX,dword ptr [EDI + 0x5ac]
004C99D1  83 F8 40                  CMP EAX,0x40
004C99D4  74 55                     JZ 0x004c9a2b
004C99D6  83 F8 49                  CMP EAX,0x49
004C99D9  74 50                     JZ 0x004c9a2b
004C99DB  8B 87 C0 05 00 00         MOV EAX,dword ptr [EDI + 0x5c0]
004C99E1  8B 8F F3 05 00 00         MOV ECX,dword ptr [EDI + 0x5f3]
004C99E7  50                        PUSH EAX
004C99E8  51                        PUSH ECX
004C99E9  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
004C99EF  68 EC C8 7A 00            PUSH 0x7ac8ec
004C99F4  52                        PUSH EDX
004C99F5  FF D3                     CALL EBX
004C99F7  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004C99FD  83 C4 10                  ADD ESP,0x10
004C9A00  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
004C9A06  6A 1D                     PUSH 0x1d
004C9A08  50                        PUSH EAX
004C9A09  51                        PUSH ECX
004C9A0A  6A 08                     PUSH 0x8
004C9A0C  8B CE                     MOV ECX,ESI
004C9A0E  E8 70 A7 F3 FF            CALL 0x00404183
004C9A13  85 C0                     TEST EAX,EAX
004C9A15  74 14                     JZ 0x004c9a2b
004C9A17  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004C9A1D  6A 35                     PUSH 0x35
004C9A1F  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9A24  52                        PUSH EDX
004C9A25  50                        PUSH EAX
004C9A26  E8 15 C4 1D 00            CALL 0x006a5e40
LAB_004c9a2b:
004C9A2B  83 BF AC 05 00 00 4E      CMP dword ptr [EDI + 0x5ac],0x4e
004C9A32  75 42                     JNZ 0x004c9a76
004C9A34  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
004C9A3A  68 BC D4 7A 00            PUSH 0x7ad4bc
004C9A3F  50                        PUSH EAX
004C9A40  FF D3                     CALL EBX
004C9A42  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004C9A48  83 C4 08                  ADD ESP,0x8
004C9A4B  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
004C9A51  6A 1D                     PUSH 0x1d
004C9A53  51                        PUSH ECX
004C9A54  52                        PUSH EDX
004C9A55  6A 07                     PUSH 0x7
004C9A57  8B CE                     MOV ECX,ESI
004C9A59  E8 25 A7 F3 FF            CALL 0x00404183
004C9A5E  85 C0                     TEST EAX,EAX
004C9A60  74 14                     JZ 0x004c9a76
004C9A62  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C9A68  6A 3A                     PUSH 0x3a
004C9A6A  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9A6F  51                        PUSH ECX
004C9A70  50                        PUSH EAX
004C9A71  E8 CA C3 1D 00            CALL 0x006a5e40
LAB_004c9a76:
004C9A76  83 BF AC 05 00 00 72      CMP dword ptr [EDI + 0x5ac],0x72
004C9A7D  75 42                     JNZ 0x004c9ac1
004C9A7F  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
004C9A85  68 AC D4 7A 00            PUSH 0x7ad4ac
004C9A8A  52                        PUSH EDX
004C9A8B  FF D3                     CALL EBX
004C9A8D  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004C9A93  83 C4 08                  ADD ESP,0x8
004C9A96  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
004C9A9C  6A 1D                     PUSH 0x1d
004C9A9E  50                        PUSH EAX
004C9A9F  51                        PUSH ECX
004C9AA0  6A 07                     PUSH 0x7
004C9AA2  8B CE                     MOV ECX,ESI
004C9AA4  E8 DA A6 F3 FF            CALL 0x00404183
004C9AA9  85 C0                     TEST EAX,EAX
004C9AAB  74 14                     JZ 0x004c9ac1
004C9AAD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004C9AB3  6A 3E                     PUSH 0x3e
004C9AB5  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9ABA  52                        PUSH EDX
004C9ABB  50                        PUSH EAX
004C9ABC  E8 7F C3 1D 00            CALL 0x006a5e40
LAB_004c9ac1:
004C9AC1  83 BF AC 05 00 00 70      CMP dword ptr [EDI + 0x5ac],0x70
004C9AC8  75 42                     JNZ 0x004c9b0c
004C9ACA  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
004C9AD0  68 98 D4 7A 00            PUSH 0x7ad498
004C9AD5  50                        PUSH EAX
004C9AD6  FF D3                     CALL EBX
004C9AD8  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004C9ADE  83 C4 08                  ADD ESP,0x8
004C9AE1  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
004C9AE7  6A 1D                     PUSH 0x1d
004C9AE9  51                        PUSH ECX
004C9AEA  52                        PUSH EDX
004C9AEB  6A 07                     PUSH 0x7
004C9AED  8B CE                     MOV ECX,ESI
004C9AEF  E8 8F A6 F3 FF            CALL 0x00404183
004C9AF4  85 C0                     TEST EAX,EAX
004C9AF6  74 14                     JZ 0x004c9b0c
004C9AF8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C9AFE  6A 42                     PUSH 0x42
004C9B00  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9B05  51                        PUSH ECX
004C9B06  50                        PUSH EAX
004C9B07  E8 34 C3 1D 00            CALL 0x006a5e40
LAB_004c9b0c:
004C9B0C  83 BF AC 05 00 00 52      CMP dword ptr [EDI + 0x5ac],0x52
004C9B13  75 62                     JNZ 0x004c9b77
004C9B15  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
004C9B18  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C9B1E  52                        PUSH EDX
004C9B1F  E8 93 AE F3 FF            CALL 0x004049b7
004C9B24  3C 01                     CMP AL,0x1
004C9B26  75 0E                     JNZ 0x004c9b36
004C9B28  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
004C9B2E  68 8C D4 7A 00            PUSH 0x7ad48c
004C9B33  50                        PUSH EAX
004C9B34  EB 0C                     JMP 0x004c9b42
LAB_004c9b36:
004C9B36  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
004C9B3C  68 80 D4 7A 00            PUSH 0x7ad480
004C9B41  51                        PUSH ECX
LAB_004c9b42:
004C9B42  FF D3                     CALL EBX
004C9B44  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004C9B49  83 C4 08                  ADD ESP,0x8
004C9B4C  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
004C9B52  8B CE                     MOV ECX,ESI
004C9B54  6A 1D                     PUSH 0x1d
004C9B56  52                        PUSH EDX
004C9B57  50                        PUSH EAX
004C9B58  6A 07                     PUSH 0x7
004C9B5A  E8 24 A6 F3 FF            CALL 0x00404183
004C9B5F  85 C0                     TEST EAX,EAX
004C9B61  74 14                     JZ 0x004c9b77
004C9B63  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C9B69  6A 46                     PUSH 0x46
004C9B6B  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9B70  51                        PUSH ECX
004C9B71  50                        PUSH EAX
004C9B72  E8 C9 C2 1D 00            CALL 0x006a5e40
LAB_004c9b77:
004C9B77  6A 0D                     PUSH 0xd
004C9B79  8B CE                     MOV ECX,ESI
004C9B7B  E8 56 A3 F3 FF            CALL 0x00403ed6
004C9B80  6A 0E                     PUSH 0xe
004C9B82  8B CE                     MOV ECX,ESI
004C9B84  E8 23 87 F3 FF            CALL 0x004022ac
004C9B89  6A 0D                     PUSH 0xd
004C9B8B  8B CE                     MOV ECX,ESI
004C9B8D  8B D8                     MOV EBX,EAX
004C9B8F  E8 18 87 F3 FF            CALL 0x004022ac
004C9B94  3B D8                     CMP EBX,EAX
004C9B96  7E 3C                     JLE 0x004c9bd4
004C9B98  8B 8F F5 01 00 00         MOV ECX,dword ptr [EDI + 0x1f5]
004C9B9E  8B 81 E4 01 00 00         MOV EAX,dword ptr [ECX + 0x1e4]
004C9BA4  8B 91 E8 01 00 00         MOV EDX,dword ptr [ECX + 0x1e8]
004C9BAA  2B C2                     SUB EAX,EDX
004C9BAC  99                        CDQ
004C9BAD  33 C2                     XOR EAX,EDX
004C9BAF  2B C2                     SUB EAX,EDX
004C9BB1  83 F8 01                  CMP EAX,0x1
004C9BB4  7E 1E                     JLE 0x004c9bd4
004C9BB6  6A 0D                     PUSH 0xd
004C9BB8  8B CF                     MOV ECX,EDI
004C9BBA  E8 D0 A8 F3 FF            CALL 0x0040448f
004C9BBF  83 F8 02                  CMP EAX,0x2
004C9BC2  6A 0D                     PUSH 0xd
004C9BC4  8B CE                     MOV ECX,ESI
004C9BC6  75 07                     JNZ 0x004c9bcf
004C9BC8  E8 97 A6 F3 FF            CALL 0x00404264
004C9BCD  EB 05                     JMP 0x004c9bd4
LAB_004c9bcf:
004C9BCF  E8 00 87 F3 FF            CALL 0x004022d4
LAB_004c9bd4:
004C9BD4  6A 01                     PUSH 0x1
004C9BD6  8B CF                     MOV ECX,EDI
004C9BD8  E8 1A 91 F3 FF            CALL 0x00402cf7
004C9BDD  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004C9BE0  83 FB 01                  CMP EBX,0x1
004C9BE3  75 0E                     JNZ 0x004c9bf3
004C9BE5  83 BF 4D 02 00 00 04      CMP dword ptr [EDI + 0x24d],0x4
004C9BEC  75 05                     JNZ 0x004c9bf3
004C9BEE  BB 04 00 00 00            MOV EBX,0x4
LAB_004c9bf3:
004C9BF3  8B 87 35 02 00 00         MOV EAX,dword ptr [EDI + 0x235]
004C9BF9  8B 8F 39 02 00 00         MOV ECX,dword ptr [EDI + 0x239]
004C9BFF  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004C9C02  03 D1                     ADD EDX,ECX
004C9C04  8B 04 95 18 1B 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x791b18]
004C9C0B  85 C0                     TEST EAX,EAX
004C9C0D  74 19                     JZ 0x004c9c28
004C9C0F  83 FB 02                  CMP EBX,0x2
004C9C12  7C 0D                     JL 0x004c9c21
004C9C14  83 FB 04                  CMP EBX,0x4
004C9C17  7F 08                     JG 0x004c9c21
004C9C19  8B 06                     MOV EAX,dword ptr [ESI]
004C9C1B  8B CE                     MOV ECX,ESI
004C9C1D  FF 10                     CALL dword ptr [EAX]
004C9C1F  EB 07                     JMP 0x004c9c28
LAB_004c9c21:
004C9C21  8B CE                     MOV ECX,ESI
004C9C23  E8 68 8E F3 FF            CALL 0x00402a90
LAB_004c9c28:
004C9C28  85 DB                     TEST EBX,EBX
004C9C2A  74 30                     JZ 0x004c9c5c
004C9C2C  83 FB 05                  CMP EBX,0x5
004C9C2F  74 2B                     JZ 0x004c9c5c
004C9C31  83 FB 01                  CMP EBX,0x1
004C9C34  75 0A                     JNZ 0x004c9c40
004C9C36  8B 87 4D 02 00 00         MOV EAX,dword ptr [EDI + 0x24d]
004C9C3C  85 C0                     TEST EAX,EAX
004C9C3E  74 1C                     JZ 0x004c9c5c
LAB_004c9c40:
004C9C40  83 FB 06                  CMP EBX,0x6
004C9C43  74 17                     JZ 0x004c9c5c
004C9C45  6A 10                     PUSH 0x10
004C9C47  8B CE                     MOV ECX,ESI
004C9C49  E8 D1 A9 F3 FF            CALL 0x0040461f
004C9C4E  6A 10                     PUSH 0x10
004C9C50  8B CE                     MOV ECX,ESI
004C9C52  E8 0D A6 F3 FF            CALL 0x00404264
004C9C57  E9 8F 00 00 00            JMP 0x004c9ceb
LAB_004c9c5c:
004C9C5C  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004C9C62  51                        PUSH ECX
004C9C63  8B CE                     MOV ECX,ESI
004C9C65  E8 3F C0 F3 FF            CALL 0x00405ca9
004C9C6A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004C9C6D  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004C9C73  6A 1D                     PUSH 0x1d
004C9C75  8B 04 95 B4 B1 7B 00      MOV EAX,dword ptr [EDX*0x4 + 0x7bb1b4]
004C9C7C  50                        PUSH EAX
004C9C7D  51                        PUSH ECX
004C9C7E  6A 10                     PUSH 0x10
004C9C80  8B CE                     MOV ECX,ESI
004C9C82  E8 FC A4 F3 FF            CALL 0x00404183
004C9C87  85 C0                     TEST EAX,EAX
004C9C89  74 14                     JZ 0x004c9c9f
004C9C8B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004C9C91  6A 6A                     PUSH 0x6a
004C9C93  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9C98  52                        PUSH EDX
004C9C99  50                        PUSH EAX
004C9C9A  E8 A1 C1 1D 00            CALL 0x006a5e40
LAB_004c9c9f:
004C9C9F  8B 87 35 02 00 00         MOV EAX,dword ptr [EDI + 0x235]
004C9CA5  6A 00                     PUSH 0x0
004C9CA7  8B CE                     MOV ECX,ESI
004C9CA9  8B 04 85 4C 10 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79104c]
004C9CB0  50                        PUSH EAX
004C9CB1  50                        PUSH EAX
004C9CB2  6A 10                     PUSH 0x10
004C9CB4  E8 01 82 F3 FF            CALL 0x00401eba
004C9CB9  8B 8F 35 02 00 00         MOV ECX,dword ptr [EDI + 0x235]
004C9CBF  8B 14 8D 4C 10 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x79104c]
004C9CC6  8B CE                     MOV ECX,ESI
004C9CC8  52                        PUSH EDX
004C9CC9  6A 10                     PUSH 0x10
004C9CCB  E8 94 73 F3 FF            CALL 0x00401064
004C9CD0  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
004C9CD3  E8 D8 B4 21 00            CALL 0x006e51b0
004C9CD8  50                        PUSH EAX
004C9CD9  6A 10                     PUSH 0x10
004C9CDB  8B CE                     MOV ECX,ESI
004C9CDD  E8 5E B5 F3 FF            CALL 0x00405240
004C9CE2  6A 10                     PUSH 0x10
004C9CE4  8B CE                     MOV ECX,ESI
004C9CE6  E8 12 9E F3 FF            CALL 0x00403afd
LAB_004c9ceb:
004C9CEB  83 BF 45 02 00 00 01      CMP dword ptr [EDI + 0x245],0x1
004C9CF2  0F 85 64 01 00 00         JNZ 0x004c9e5c
004C9CF8  83 BF DF 05 00 00 05      CMP dword ptr [EDI + 0x5df],0x5
004C9CFF  75 7B                     JNZ 0x004c9d7c
004C9D01  C7 87 C8 04 00 00 00 00 00 00  MOV dword ptr [EDI + 0x4c8],0x0
004C9D0B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C9D10  6A 0E                     PUSH 0xe
004C9D12  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004C9D18  89 8F CC 04 00 00         MOV dword ptr [EDI + 0x4cc],ECX
004C9D1E  8B CE                     MOV ECX,ESI
004C9D20  E8 89 7E F3 FF            CALL 0x00401bae
004C9D25  6A 0D                     PUSH 0xd
004C9D27  8B CE                     MOV ECX,ESI
004C9D29  E8 80 7E F3 FF            CALL 0x00401bae
004C9D2E  6A 0C                     PUSH 0xc
004C9D30  8B CE                     MOV ECX,ESI
004C9D32  E8 77 7E F3 FF            CALL 0x00401bae
004C9D37  6A 0B                     PUSH 0xb
004C9D39  8B CE                     MOV ECX,ESI
004C9D3B  E8 6E 7E F3 FF            CALL 0x00401bae
004C9D40  6A 09                     PUSH 0x9
004C9D42  8B CE                     MOV ECX,ESI
004C9D44  E8 65 7E F3 FF            CALL 0x00401bae
004C9D49  6A 08                     PUSH 0x8
004C9D4B  8B CE                     MOV ECX,ESI
004C9D4D  E8 5C 7E F3 FF            CALL 0x00401bae
004C9D52  6A 07                     PUSH 0x7
004C9D54  8B CE                     MOV ECX,ESI
004C9D56  E8 53 7E F3 FF            CALL 0x00401bae
004C9D5B  A1 24 67 80 00            MOV EAX,[0x00806724]
004C9D60  8B 8F C8 04 00 00         MOV ECX,dword ptr [EDI + 0x4c8]
004C9D66  0F BF 50 2C               MOVSX EDX,word ptr [EAX + 0x2c]
004C9D6A  52                        PUSH EDX
004C9D6B  8B 54 88 30               MOV EDX,dword ptr [EAX + ECX*0x4 + 0x30]
004C9D6F  52                        PUSH EDX
004C9D70  8B CE                     MOV ECX,ESI
004C9D72  E8 F6 73 F3 FF            CALL 0x0040116d
004C9D77  E9 E0 00 00 00            JMP 0x004c9e5c
LAB_004c9d7c:
004C9D7C  8B 87 35 02 00 00         MOV EAX,dword ptr [EDI + 0x235]
004C9D82  6A 1D                     PUSH 0x1d
004C9D84  8B 04 85 5C 12 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79125c]
004C9D8B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004C9D8E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C9D91  A1 74 67 80 00            MOV EAX,[0x00806774]
004C9D96  8D 14 4D 30 DF 7C 00      LEA EDX,[ECX*0x2 + 0x7cdf30]
004C9D9D  8B CE                     MOV ECX,ESI
004C9D9F  52                        PUSH EDX
004C9DA0  50                        PUSH EAX
004C9DA1  6A 04                     PUSH 0x4
004C9DA3  E8 DB A3 F3 FF            CALL 0x00404183
004C9DA8  85 C0                     TEST EAX,EAX
004C9DAA  74 0C                     JZ 0x004c9db8
004C9DAC  B8 FF FF 00 00            MOV EAX,0xffff
004C9DB1  5F                        POP EDI
004C9DB2  5E                        POP ESI
004C9DB3  5B                        POP EBX
004C9DB4  8B E5                     MOV ESP,EBP
004C9DB6  5D                        POP EBP
004C9DB7  C3                        RET
LAB_004c9db8:
004C9DB8  6A 04                     PUSH 0x4
004C9DBA  8B CE                     MOV ECX,ESI
004C9DBC  E8 13 85 F3 FF            CALL 0x004022d4
004C9DC1  6A 00                     PUSH 0x0
004C9DC3  6A 04                     PUSH 0x4
004C9DC5  8B CE                     MOV ECX,ESI
004C9DC7  E8 E0 84 F3 FF            CALL 0x004022ac
004C9DCC  50                        PUSH EAX
004C9DCD  6A 00                     PUSH 0x0
004C9DCF  6A 04                     PUSH 0x4
004C9DD1  8B CE                     MOV ECX,ESI
004C9DD3  E8 E2 80 F3 FF            CALL 0x00401eba
004C9DD8  6A 00                     PUSH 0x0
004C9DDA  6A 04                     PUSH 0x4
004C9DDC  8B CE                     MOV ECX,ESI
004C9DDE  E8 81 72 F3 FF            CALL 0x00401064
004C9DE3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C9DE9  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004C9DEF  8B CE                     MOV ECX,ESI
004C9DF1  52                        PUSH EDX
004C9DF2  6A 04                     PUSH 0x4
004C9DF4  E8 47 B4 F3 FF            CALL 0x00405240
004C9DF9  8B 87 35 02 00 00         MOV EAX,dword ptr [EDI + 0x235]
004C9DFF  6A 1D                     PUSH 0x1d
004C9E01  8B 04 85 5C 12 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79125c]
004C9E08  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004C9E0B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C9E0E  A1 74 67 80 00            MOV EAX,[0x00806774]
004C9E13  8D 14 4D 44 DF 7C 00      LEA EDX,[ECX*0x2 + 0x7cdf44]
004C9E1A  8B CE                     MOV ECX,ESI
004C9E1C  52                        PUSH EDX
004C9E1D  50                        PUSH EAX
004C9E1E  6A 06                     PUSH 0x6
004C9E20  E8 5E A3 F3 FF            CALL 0x00404183
004C9E25  6A 06                     PUSH 0x6
004C9E27  8B CE                     MOV ECX,ESI
004C9E29  E8 A6 84 F3 FF            CALL 0x004022d4
004C9E2E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C9E34  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004C9E3A  8B CE                     MOV ECX,ESI
004C9E3C  52                        PUSH EDX
004C9E3D  6A 06                     PUSH 0x6
004C9E3F  E8 FC B3 F3 FF            CALL 0x00405240
004C9E44  A1 B8 32 80 00            MOV EAX,[0x008032b8]
004C9E49  6A 10                     PUSH 0x10
004C9E4B  50                        PUSH EAX
004C9E4C  8B CE                     MOV ECX,ESI
004C9E4E  E8 9B A6 F3 FF            CALL 0x004044ee
004C9E53  6A 06                     PUSH 0x6
004C9E55  8B CE                     MOV ECX,ESI
004C9E57  E8 D7 93 F3 FF            CALL 0x00403233
LAB_004c9e5c:
004C9E5C  83 BF 45 02 00 00 06      CMP dword ptr [EDI + 0x245],0x6
004C9E63  0F 85 39 02 00 00         JNZ 0x004ca0a2
004C9E69  83 BF BC 04 00 00 04      CMP dword ptr [EDI + 0x4bc],0x4
004C9E70  0F 85 C1 00 00 00         JNZ 0x004c9f37
004C9E76  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
004C9E79  83 E8 00                  SUB EAX,0x0
004C9E7C  74 31                     JZ 0x004c9eaf
004C9E7E  48                        DEC EAX
004C9E7F  75 5F                     JNZ 0x004c9ee0
004C9E81  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
004C9E87  6A 1D                     PUSH 0x1d
004C9E89  68 70 D4 7A 00            PUSH 0x7ad470
004C9E8E  51                        PUSH ECX
004C9E8F  6A 04                     PUSH 0x4
004C9E91  8B CE                     MOV ECX,ESI
004C9E93  E8 EB A2 F3 FF            CALL 0x00404183
004C9E98  85 C0                     TEST EAX,EAX
004C9E9A  74 44                     JZ 0x004c9ee0
004C9E9C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004C9EA2  68 92 00 00 00            PUSH 0x92
004C9EA7  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9EAC  52                        PUSH EDX
004C9EAD  EB 2B                     JMP 0x004c9eda
LAB_004c9eaf:
004C9EAF  A1 64 67 80 00            MOV EAX,[0x00806764]
004C9EB4  6A 1D                     PUSH 0x1d
004C9EB6  68 64 D4 7A 00            PUSH 0x7ad464
004C9EBB  50                        PUSH EAX
004C9EBC  6A 04                     PUSH 0x4
004C9EBE  8B CE                     MOV ECX,ESI
004C9EC0  E8 BE A2 F3 FF            CALL 0x00404183
004C9EC5  85 C0                     TEST EAX,EAX
004C9EC7  74 17                     JZ 0x004c9ee0
004C9EC9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C9ECF  68 91 00 00 00            PUSH 0x91
004C9ED4  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9ED9  51                        PUSH ECX
LAB_004c9eda:
004C9EDA  50                        PUSH EAX
004C9EDB  E8 60 BF 1D 00            CALL 0x006a5e40
LAB_004c9ee0:
004C9EE0  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004C9EE6  8B CE                     MOV ECX,ESI
004C9EE8  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004C9EEE  50                        PUSH EAX
004C9EEF  6A 04                     PUSH 0x4
004C9EF1  E8 4A B3 F3 FF            CALL 0x00405240
004C9EF6  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
004C9EF9  6A 00                     PUSH 0x0
004C9EFB  C1 E1 05                  SHL ECX,0x5
004C9EFE  8B 81 E4 76 79 00         MOV EAX,dword ptr [ECX + 0x7976e4]
004C9F04  8B CE                     MOV ECX,ESI
004C9F06  50                        PUSH EAX
004C9F07  50                        PUSH EAX
004C9F08  6A 05                     PUSH 0x5
004C9F0A  E8 AB 7F F3 FF            CALL 0x00401eba
004C9F0F  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
004C9F12  8B CE                     MOV ECX,ESI
004C9F14  C1 E2 05                  SHL EDX,0x5
004C9F17  8B 82 E4 76 79 00         MOV EAX,dword ptr [EDX + 0x7976e4]
004C9F1D  50                        PUSH EAX
004C9F1E  6A 05                     PUSH 0x5
004C9F20  E8 3F 71 F3 FF            CALL 0x00401064
004C9F25  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C9F2B  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004C9F31  52                        PUSH EDX
004C9F32  E9 62 01 00 00            JMP 0x004ca099
LAB_004c9f37:
004C9F37  8A 87 3D 02 00 00         MOV AL,byte ptr [EDI + 0x23d]
004C9F3D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C9F43  50                        PUSH EAX
004C9F44  E8 6E AA F3 FF            CALL 0x004049b7
004C9F49  3C 03                     CMP AL,0x3
004C9F4B  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
004C9F4E  75 79                     JNZ 0x004c9fc9
004C9F50  83 E8 00                  SUB EAX,0x0
004C9F53  74 31                     JZ 0x004c9f86
004C9F55  48                        DEC EAX
004C9F56  75 5F                     JNZ 0x004c9fb7
004C9F58  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004C9F5E  6A 1D                     PUSH 0x1d
004C9F60  68 58 D4 7A 00            PUSH 0x7ad458
004C9F65  51                        PUSH ECX
004C9F66  6A 05                     PUSH 0x5
004C9F68  8B CE                     MOV ECX,ESI
004C9F6A  E8 14 A2 F3 FF            CALL 0x00404183
004C9F6F  85 C0                     TEST EAX,EAX
004C9F71  74 44                     JZ 0x004c9fb7
004C9F73  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004C9F79  68 9F 00 00 00            PUSH 0x9f
004C9F7E  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9F83  52                        PUSH EDX
004C9F84  EB 2B                     JMP 0x004c9fb1
LAB_004c9f86:
004C9F86  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004C9F8B  6A 1D                     PUSH 0x1d
004C9F8D  68 4C D4 7A 00            PUSH 0x7ad44c
004C9F92  50                        PUSH EAX
004C9F93  6A 05                     PUSH 0x5
004C9F95  8B CE                     MOV ECX,ESI
004C9F97  E8 E7 A1 F3 FF            CALL 0x00404183
004C9F9C  85 C0                     TEST EAX,EAX
004C9F9E  74 17                     JZ 0x004c9fb7
004C9FA0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C9FA6  68 9E 00 00 00            PUSH 0x9e
004C9FAB  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9FB0  51                        PUSH ECX
LAB_004c9fb1:
004C9FB1  50                        PUSH EAX
004C9FB2  E8 89 BE 1D 00            CALL 0x006a5e40
LAB_004c9fb7:
004C9FB7  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004C9FBD  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004C9FC3  50                        PUSH EAX
004C9FC4  E9 D0 00 00 00            JMP 0x004ca099
LAB_004c9fc9:
004C9FC9  83 E8 00                  SUB EAX,0x0
004C9FCC  74 31                     JZ 0x004c9fff
004C9FCE  48                        DEC EAX
004C9FCF  75 5F                     JNZ 0x004ca030
004C9FD1  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004C9FD7  6A 1D                     PUSH 0x1d
004C9FD9  68 40 D4 7A 00            PUSH 0x7ad440
004C9FDE  51                        PUSH ECX
004C9FDF  6A 05                     PUSH 0x5
004C9FE1  8B CE                     MOV ECX,ESI
004C9FE3  E8 9B A1 F3 FF            CALL 0x00404183
004C9FE8  85 C0                     TEST EAX,EAX
004C9FEA  74 44                     JZ 0x004ca030
004C9FEC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004C9FF2  68 A6 00 00 00            PUSH 0xa6
004C9FF7  68 D0 D4 7A 00            PUSH 0x7ad4d0
004C9FFC  52                        PUSH EDX
004C9FFD  EB 2B                     JMP 0x004ca02a
LAB_004c9fff:
004C9FFF  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004CA004  6A 1D                     PUSH 0x1d
004CA006  68 34 D4 7A 00            PUSH 0x7ad434
004CA00B  50                        PUSH EAX
004CA00C  6A 05                     PUSH 0x5
004CA00E  8B CE                     MOV ECX,ESI
004CA010  E8 6E A1 F3 FF            CALL 0x00404183
004CA015  85 C0                     TEST EAX,EAX
004CA017  74 17                     JZ 0x004ca030
004CA019  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004CA01F  68 A5 00 00 00            PUSH 0xa5
004CA024  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CA029  51                        PUSH ECX
LAB_004ca02a:
004CA02A  50                        PUSH EAX
004CA02B  E8 10 BE 1D 00            CALL 0x006a5e40
LAB_004ca030:
004CA030  8B 87 BC 04 00 00         MOV EAX,dword ptr [EDI + 0x4bc]
004CA036  33 DB                     XOR EBX,EBX
004CA038  48                        DEC EAX
004CA039  74 14                     JZ 0x004ca04f
004CA03B  48                        DEC EAX
004CA03C  74 0A                     JZ 0x004ca048
004CA03E  48                        DEC EAX
004CA03F  75 13                     JNZ 0x004ca054
004CA041  BB 03 00 00 00            MOV EBX,0x3
004CA046  EB 0C                     JMP 0x004ca054
LAB_004ca048:
004CA048  BB 02 00 00 00            MOV EBX,0x2
004CA04D  EB 05                     JMP 0x004ca054
LAB_004ca04f:
004CA04F  BB 01 00 00 00            MOV EBX,0x1
LAB_004ca054:
004CA054  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
004CA057  6A 00                     PUSH 0x0
004CA059  8D 04 93                  LEA EAX,[EBX + EDX*0x4]
004CA05C  C1 E0 03                  SHL EAX,0x3
004CA05F  8B 88 CC 76 79 00         MOV ECX,dword ptr [EAX + 0x7976cc]
004CA065  8B 90 C8 76 79 00         MOV EDX,dword ptr [EAX + 0x7976c8]
004CA06B  51                        PUSH ECX
004CA06C  52                        PUSH EDX
004CA06D  6A 05                     PUSH 0x5
004CA06F  8B CE                     MOV ECX,ESI
004CA071  E8 44 7E F3 FF            CALL 0x00401eba
004CA076  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
004CA079  8D 0C 83                  LEA ECX,[EBX + EAX*0x4]
004CA07C  8B 14 CD C8 76 79 00      MOV EDX,dword ptr [ECX*0x8 + 0x7976c8]
004CA083  8B CE                     MOV ECX,ESI
004CA085  52                        PUSH EDX
004CA086  6A 05                     PUSH 0x5
004CA088  E8 D7 6F F3 FF            CALL 0x00401064
004CA08D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004CA092  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004CA098  51                        PUSH ECX
LAB_004ca099:
004CA099  6A 05                     PUSH 0x5
004CA09B  8B CE                     MOV ECX,ESI
004CA09D  E8 9E B1 F3 FF            CALL 0x00405240
LAB_004ca0a2:
004CA0A2  66 8B 97 B8 05 00 00      MOV DX,word ptr [EDI + 0x5b8]
004CA0A9  66 8B 87 B4 05 00 00      MOV AX,word ptr [EDI + 0x5b4]
004CA0B0  66 8B 8F B0 05 00 00      MOV CX,word ptr [EDI + 0x5b0]
004CA0B7  66 69 D2 C8 00            IMUL DX,DX,0xc8
004CA0BC  66 69 C0 C9 00            IMUL AX,AX,0xc9
004CA0C1  66 69 C9 C9 00            IMUL CX,CX,0xc9
004CA0C6  6A 01                     PUSH 0x1
004CA0C8  6A 00                     PUSH 0x0
004CA0CA  6A 00                     PUSH 0x0
004CA0CC  83 C2 64                  ADD EDX,0x64
004CA0CF  6A 00                     PUSH 0x0
004CA0D1  83 C0 64                  ADD EAX,0x64
004CA0D4  52                        PUSH EDX
004CA0D5  83 C1 64                  ADD ECX,0x64
004CA0D8  50                        PUSH EAX
004CA0D9  51                        PUSH ECX
004CA0DA  8B CF                     MOV ECX,EDI
004CA0DC  E8 74 83 F3 FF            CALL 0x00402455
004CA0E1  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004CA0E4  33 C0                     XOR EAX,EAX
004CA0E6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004CA0EC  5F                        POP EDI
004CA0ED  5E                        POP ESI
004CA0EE  5B                        POP EBX
004CA0EF  8B E5                     MOV ESP,EBP
004CA0F1  5D                        POP EBP
004CA0F2  C3                        RET
LAB_004ca0f3:
004CA0F3  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004CA0F6  68 10 D4 7A 00            PUSH 0x7ad410
004CA0FB  68 CC 4C 7A 00            PUSH 0x7a4ccc
004CA100  56                        PUSH ESI
004CA101  6A 00                     PUSH 0x0
004CA103  68 BB 00 00 00            PUSH 0xbb
004CA108  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CA10D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004CA112  E8 B9 33 1E 00            CALL 0x006ad4d0
004CA117  83 C4 18                  ADD ESP,0x18
004CA11A  85 C0                     TEST EAX,EAX
004CA11C  74 01                     JZ 0x004ca11f
004CA11E  CC                        INT3
LAB_004ca11f:
004CA11F  68 BC 00 00 00            PUSH 0xbc
004CA124  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CA129  6A 00                     PUSH 0x0
004CA12B  56                        PUSH ESI
004CA12C  E8 0F BD 1D 00            CALL 0x006a5e40
004CA131  8B C6                     MOV EAX,ESI
004CA133  5F                        POP EDI
004CA134  5E                        POP ESI
004CA135  5B                        POP EBX
004CA136  8B E5                     MOV ESP,EBP
004CA138  5D                        POP EBP
004CA139  C3                        RET
