FUN_004cabb0:
004CABB0  55                        PUSH EBP
004CABB1  8B EC                     MOV EBP,ESP
004CABB3  83 EC 4C                  SUB ESP,0x4c
004CABB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004CABBB  53                        PUSH EBX
004CABBC  56                        PUSH ESI
004CABBD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004CABC0  57                        PUSH EDI
004CABC1  8D 55 B8                  LEA EDX,[EBP + -0x48]
004CABC4  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004CABC7  6A 00                     PUSH 0x0
004CABC9  52                        PUSH EDX
004CABCA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004CABCD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004CABD3  E8 18 2C 26 00            CALL 0x0072d7f0
004CABD8  8B F0                     MOV ESI,EAX
004CABDA  83 C4 08                  ADD ESP,0x8
004CABDD  85 F6                     TEST ESI,ESI
004CABDF  0F 85 8E 02 00 00         JNZ 0x004cae73
004CABE5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004CABE8  BB 01 00 00 00            MOV EBX,0x1
004CABED  39 9E 45 02 00 00         CMP dword ptr [ESI + 0x245],EBX
004CABF3  75 36                     JNZ 0x004cac2b
004CABF5  83 BE DF 05 00 00 05      CMP dword ptr [ESI + 0x5df],0x5
004CABFC  74 2D                     JZ 0x004cac2b
004CABFE  6A 04                     PUSH 0x4
004CAC00  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004CAC06  E8 A4 96 F3 FF            CALL 0x004042af
004CAC0B  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004CAC11  8B 0C 8D 5C 12 79 00      MOV ECX,dword ptr [ECX*0x4 + 0x79125c]
004CAC18  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004CAC1B  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004CAC1E  3B 04 55 52 DF 7C 00      CMP EAX,dword ptr [EDX*0x2 + 0x7cdf52]
004CAC25  0F 8F 35 02 00 00         JG 0x004cae60
LAB_004cac2b:
004CAC2B  8B 86 EF 05 00 00         MOV EAX,dword ptr [ESI + 0x5ef]
004CAC31  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004CAC34  85 C0                     TEST EAX,EAX
004CAC36  74 0A                     JZ 0x004cac42
004CAC38  57                        PUSH EDI
004CAC39  6A 0E                     PUSH 0xe
004CAC3B  8B CE                     MOV ECX,ESI
004CAC3D  E8 09 8C F3 FF            CALL 0x0040384b
LAB_004cac42:
004CAC42  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CAC48  8B 0C 85 10 1A 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x791a10]
004CAC4F  85 C9                     TEST ECX,ECX
004CAC51  0F 84 A7 00 00 00         JZ 0x004cacfe
004CAC57  57                        PUSH EDI
004CAC58  6A 09                     PUSH 0x9
004CAC5A  8B CE                     MOV ECX,ESI
004CAC5C  E8 EA 8B F3 FF            CALL 0x0040384b
004CAC61  57                        PUSH EDI
004CAC62  6A 08                     PUSH 0x8
004CAC64  8B CE                     MOV ECX,ESI
004CAC66  E8 E0 8B F3 FF            CALL 0x0040384b
004CAC6B  83 BE AC 05 00 00 4E      CMP dword ptr [ESI + 0x5ac],0x4e
004CAC72  75 28                     JNZ 0x004cac9c
004CAC74  57                        PUSH EDI
004CAC75  6A 07                     PUSH 0x7
004CAC77  8B CE                     MOV ECX,ESI
004CAC79  E8 CD 8B F3 FF            CALL 0x0040384b
004CAC7E  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CAC84  6A 07                     PUSH 0x7
004CAC86  3B C3                     CMP EAX,EBX
004CAC88  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004CAC8E  75 07                     JNZ 0x004cac97
004CAC90  E8 41 92 F3 FF            CALL 0x00403ed6
004CAC95  EB 05                     JMP 0x004cac9c
LAB_004cac97:
004CAC97  E8 C8 95 F3 FF            CALL 0x00404264
LAB_004cac9c:
004CAC9C  83 BE AC 05 00 00 72      CMP dword ptr [ESI + 0x5ac],0x72
004CACA3  75 28                     JNZ 0x004caccd
004CACA5  57                        PUSH EDI
004CACA6  6A 07                     PUSH 0x7
004CACA8  8B CE                     MOV ECX,ESI
004CACAA  E8 9C 8B F3 FF            CALL 0x0040384b
004CACAF  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CACB5  6A 07                     PUSH 0x7
004CACB7  3B C3                     CMP EAX,EBX
004CACB9  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004CACBF  75 07                     JNZ 0x004cacc8
004CACC1  E8 10 92 F3 FF            CALL 0x00403ed6
004CACC6  EB 05                     JMP 0x004caccd
LAB_004cacc8:
004CACC8  E8 97 95 F3 FF            CALL 0x00404264
LAB_004caccd:
004CACCD  83 BE AC 05 00 00 70      CMP dword ptr [ESI + 0x5ac],0x70
004CACD4  75 28                     JNZ 0x004cacfe
004CACD6  57                        PUSH EDI
004CACD7  6A 07                     PUSH 0x7
004CACD9  8B CE                     MOV ECX,ESI
004CACDB  E8 6B 8B F3 FF            CALL 0x0040384b
004CACE0  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CACE6  6A 07                     PUSH 0x7
004CACE8  3B C3                     CMP EAX,EBX
004CACEA  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004CACF0  75 07                     JNZ 0x004cacf9
004CACF2  E8 DF 91 F3 FF            CALL 0x00403ed6
004CACF7  EB 05                     JMP 0x004cacfe
LAB_004cacf9:
004CACF9  E8 66 95 F3 FF            CALL 0x00404264
LAB_004cacfe:
004CACFE  8B 86 F3 05 00 00         MOV EAX,dword ptr [ESI + 0x5f3]
004CAD04  85 C0                     TEST EAX,EAX
004CAD06  0F 84 A5 00 00 00         JZ 0x004cadb1
004CAD0C  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004CAD12  6A 0E                     PUSH 0xe
004CAD14  8B CF                     MOV ECX,EDI
004CAD16  E8 91 75 F3 FF            CALL 0x004022ac
004CAD1B  6A 0D                     PUSH 0xd
004CAD1D  8B CF                     MOV ECX,EDI
004CAD1F  8B D8                     MOV EBX,EAX
004CAD21  E8 86 75 F3 FF            CALL 0x004022ac
004CAD26  3B D8                     CMP EBX,EAX
004CAD28  7E 70                     JLE 0x004cad9a
004CAD2A  6A 0D                     PUSH 0xd
004CAD2C  8B CF                     MOV ECX,EDI
004CAD2E  E8 79 75 F3 FF            CALL 0x004022ac
004CAD33  83 F8 01                  CMP EAX,0x1
004CAD36  7E 62                     JLE 0x004cad9a
004CAD38  6A 0D                     PUSH 0xd
004CAD3A  8B CE                     MOV ECX,ESI
004CAD3C  E8 4E 97 F3 FF            CALL 0x0040448f
004CAD41  83 F8 02                  CMP EAX,0x2
004CAD44  75 54                     JNZ 0x004cad9a
004CAD46  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004CAD4C  8B 81 08 02 00 00         MOV EAX,dword ptr [ECX + 0x208]
004CAD52  8B 91 0C 02 00 00         MOV EDX,dword ptr [ECX + 0x20c]
004CAD58  3B D0                     CMP EDX,EAX
004CAD5A  7E 0A                     JLE 0x004cad66
004CAD5C  8B 99 10 02 00 00         MOV EBX,dword ptr [ECX + 0x210]
004CAD62  2B D8                     SUB EBX,EAX
004CAD64  EB 08                     JMP 0x004cad6e
LAB_004cad66:
004CAD66  2B 81 10 02 00 00         SUB EAX,dword ptr [ECX + 0x210]
004CAD6C  8B D8                     MOV EBX,EAX
LAB_004cad6e:
004CAD6E  6A 0E                     PUSH 0xe
004CAD70  8B CF                     MOV ECX,EDI
004CAD72  E8 35 75 F3 FF            CALL 0x004022ac
004CAD77  8B D0                     MOV EDX,EAX
004CAD79  6A 0D                     PUSH 0xd
004CAD7B  8B CF                     MOV ECX,EDI
004CAD7D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004CAD80  E8 27 75 F3 FF            CALL 0x004022ac
004CAD85  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004CAD88  2B C8                     SUB ECX,EAX
004CAD8A  49                        DEC ECX
004CAD8B  3B D9                     CMP EBX,ECX
004CAD8D  7C 1A                     JL 0x004cada9
004CAD8F  8B 86 F1 01 00 00         MOV EAX,dword ptr [ESI + 0x1f1]
004CAD95  F6 C4 20                  TEST AH,0x20
004CAD98  75 0F                     JNZ 0x004cada9
LAB_004cad9a:
004CAD9A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004CAD9D  8B CE                     MOV ECX,ESI
004CAD9F  57                        PUSH EDI
004CADA0  6A 0D                     PUSH 0xd
004CADA2  E8 A4 8A F3 FF            CALL 0x0040384b
004CADA7  EB 03                     JMP 0x004cadac
LAB_004cada9:
004CADA9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_004cadac:
004CADAC  BB 01 00 00 00            MOV EBX,0x1
LAB_004cadb1:
004CADB1  8B 86 F7 05 00 00         MOV EAX,dword ptr [ESI + 0x5f7]
004CADB7  85 C0                     TEST EAX,EAX
004CADB9  74 0A                     JZ 0x004cadc5
004CADBB  57                        PUSH EDI
004CADBC  6A 0C                     PUSH 0xc
004CADBE  8B CE                     MOV ECX,ESI
004CADC0  E8 86 8A F3 FF            CALL 0x0040384b
LAB_004cadc5:
004CADC5  8B 86 FF 05 00 00         MOV EAX,dword ptr [ESI + 0x5ff]
004CADCB  85 C0                     TEST EAX,EAX
004CADCD  74 07                     JZ 0x004cadd6
004CADCF  8B CE                     MOV ECX,ESI
004CADD1  E8 5E A1 F3 FF            CALL 0x00404f34
LAB_004cadd6:
004CADD6  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004CADDC  83 C0 C0                  ADD EAX,-0x40
004CADDF  83 F8 1F                  CMP EAX,0x1f
004CADE2  77 5D                     JA 0x004cae41
004CADE4  33 D2                     XOR EDX,EDX
004CADE6  8A 90 CC AE 4C 00         MOV DL,byte ptr [EAX + 0x4caecc]
switchD_004cadec::switchD:
004CADEC  FF 24 95 C0 AE 4C 00      JMP dword ptr [EDX*0x4 + 0x4caec0]
switchD_004cadec::caseD_52:
004CADF3  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004CADF9  6A 0E                     PUSH 0xe
004CADFB  8B CF                     MOV ECX,EDI
004CADFD  E8 D3 69 F3 FF            CALL 0x004017d5
004CAE02  6A 0D                     PUSH 0xd
004CAE04  8B CF                     MOV ECX,EDI
004CAE06  E8 CA 69 F3 FF            CALL 0x004017d5
004CAE0B  6A 09                     PUSH 0x9
004CAE0D  8B CF                     MOV ECX,EDI
004CAE0F  E8 C1 69 F3 FF            CALL 0x004017d5
004CAE14  6A 08                     PUSH 0x8
004CAE16  8B CF                     MOV ECX,EDI
004CAE18  E8 B8 69 F3 FF            CALL 0x004017d5
004CAE1D  EB 3A                     JMP 0x004cae59
switchD_004cadec::caseD_40:
004CAE1F  39 9E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],EBX
004CAE25  75 1A                     JNZ 0x004cae41
004CAE27  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004CAE2D  6A 0E                     PUSH 0xe
004CAE2F  8B CF                     MOV ECX,EDI
004CAE31  E8 9F 69 F3 FF            CALL 0x004017d5
004CAE36  6A 09                     PUSH 0x9
004CAE38  8B CF                     MOV ECX,EDI
004CAE3A  E8 96 69 F3 FF            CALL 0x004017d5
004CAE3F  EB 18                     JMP 0x004cae59
switchD_004cadec::caseD_41:
004CAE41  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004CAE47  6A 0E                     PUSH 0xe
004CAE49  8B CF                     MOV ECX,EDI
004CAE4B  E8 86 90 F3 FF            CALL 0x00403ed6
004CAE50  6A 09                     PUSH 0x9
004CAE52  8B CF                     MOV ECX,EDI
004CAE54  E8 7D 90 F3 FF            CALL 0x00403ed6
LAB_004cae59:
004CAE59  8B CE                     MOV ECX,ESI
004CAE5B  E8 1E 6B F3 FF            CALL 0x0040197e
LAB_004cae60:
004CAE60  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004CAE63  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004CAE68  33 C0                     XOR EAX,EAX
004CAE6A  5F                        POP EDI
004CAE6B  5E                        POP ESI
004CAE6C  5B                        POP EBX
004CAE6D  8B E5                     MOV ESP,EBP
004CAE6F  5D                        POP EBP
004CAE70  C2 04 00                  RET 0x4
LAB_004cae73:
004CAE73  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004CAE76  68 20 D5 7A 00            PUSH 0x7ad520
004CAE7B  68 CC 4C 7A 00            PUSH 0x7a4ccc
004CAE80  56                        PUSH ESI
004CAE81  6A 00                     PUSH 0x0
004CAE83  68 A7 01 00 00            PUSH 0x1a7
004CAE88  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CAE8D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004CAE93  E8 38 26 1E 00            CALL 0x006ad4d0
004CAE98  83 C4 18                  ADD ESP,0x18
004CAE9B  85 C0                     TEST EAX,EAX
004CAE9D  74 01                     JZ 0x004caea0
004CAE9F  CC                        INT3
LAB_004caea0:
004CAEA0  68 A8 01 00 00            PUSH 0x1a8
004CAEA5  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CAEAA  6A 00                     PUSH 0x0
004CAEAC  56                        PUSH ESI
004CAEAD  E8 8E AF 1D 00            CALL 0x006a5e40
004CAEB2  8B C6                     MOV EAX,ESI
004CAEB4  5F                        POP EDI
004CAEB5  5E                        POP ESI
004CAEB6  5B                        POP EBX
004CAEB7  8B E5                     MOV ESP,EBP
004CAEB9  5D                        POP EBP
004CAEBA  C2 04 00                  RET 0x4
