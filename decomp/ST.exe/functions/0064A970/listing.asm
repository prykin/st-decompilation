FUN_0064a970:
0064A970  55                        PUSH EBP
0064A971  8B EC                     MOV EBP,ESP
0064A973  81 EC BC 00 00 00         SUB ESP,0xbc
0064A979  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064A97E  53                        PUSH EBX
0064A97F  56                        PUSH ESI
0064A980  57                        PUSH EDI
0064A981  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0064A984  33 FF                     XOR EDI,EDI
0064A986  8D 95 48 FF FF FF         LEA EDX,[EBP + 0xffffff48]
0064A98C  8D 8D 44 FF FF FF         LEA ECX,[EBP + 0xffffff44]
0064A992  57                        PUSH EDI
0064A993  52                        PUSH EDX
0064A994  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0064A997  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0064A99A  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
0064A9A0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064A9A6  E8 45 2E 0E 00            CALL 0x0072d7f0
0064A9AB  8B F0                     MOV ESI,EAX
0064A9AD  83 C4 08                  ADD ESP,0x8
0064A9B0  3B F7                     CMP ESI,EDI
0064A9B2  0F 85 08 19 00 00         JNZ 0x0064c2c0
0064A9B8  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
0064A9BB  6A 7F                     PUSH 0x7f
0064A9BD  68 A0 16 80 00            PUSH 0x8016a0
0064A9C2  8D 46 04                  LEA EAX,[ESI + 0x4]
0064A9C5  50                        PUSH EAX
0064A9C6  E8 75 39 0E 00            CALL 0x0072e340
0064A9CB  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0064A9CE  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0064A9D1  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064A9DB  83 C4 0C                  ADD ESP,0xc
0064A9DE  8A 0B                     MOV CL,byte ptr [EBX]
0064A9E0  33 C0                     XOR EAX,EAX
0064A9E2  80 F9 07                  CMP CL,0x7
0064A9E5  74 12                     JZ 0x0064a9f9
0064A9E7  8B CB                     MOV ECX,EBX
LAB_0064a9e9:
0064A9E9  3B C7                     CMP EAX,EDI
0064A9EB  7D 0E                     JGE 0x0064a9fb
0064A9ED  8A 51 05                  MOV DL,byte ptr [ECX + 0x5]
0064A9F0  83 C1 05                  ADD ECX,0x5
0064A9F3  40                        INC EAX
0064A9F4  80 FA 07                  CMP DL,0x7
0064A9F7  75 F0                     JNZ 0x0064a9e9
LAB_0064a9f9:
0064A9F9  3B C7                     CMP EAX,EDI
LAB_0064a9fb:
0064A9FB  74 17                     JZ 0x0064aa14
0064A9FD  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064AA02  68 81 00 00 00            PUSH 0x81
0064AA07  68 04 2A 7D 00            PUSH 0x7d2a04
0064AA0C  50                        PUSH EAX
0064AA0D  6A 97                     PUSH -0x69
0064AA0F  E8 2C B4 05 00            CALL 0x006a5e40
LAB_0064aa14:
0064AA14  8D 0C BB                  LEA ECX,[EBX + EDI*0x4]
0064AA17  0F BF 54 0F 03            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x3]
0064AA1C  8D 04 0F                  LEA EAX,[EDI + ECX*0x1]
0064AA1F  3B D7                     CMP EDX,EDI
0064AA21  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0064AA24  74 17                     JZ 0x0064aa3d
0064AA26  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064AA2B  68 82 00 00 00            PUSH 0x82
0064AA30  68 04 2A 7D 00            PUSH 0x7d2a04
0064AA35  50                        PUSH EAX
0064AA36  6A 95                     PUSH -0x6b
0064AA38  E8 03 B4 05 00            CALL 0x006a5e40
LAB_0064aa3d:
0064AA3D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064AA40  0F BF 41 01               MOVSX EAX,word ptr [ECX + 0x1]
0064AA44  83 F8 3D                  CMP EAX,0x3d
0064AA47  0F 8F 39 0B 00 00         JG 0x0064b586
0064AA4D  0F 84 F5 05 00 00         JZ 0x0064b048
0064AA53  8D 48 FF                  LEA ECX,[EAX + -0x1]
0064AA56  83 F9 33                  CMP ECX,0x33
0064AA59  0F 87 12 18 00 00         JA 0x0064c271
0064AA5F  33 D2                     XOR EDX,EDX
0064AA61  8A 91 28 C3 64 00         MOV DL,byte ptr [ECX + 0x64c328]
switchD_0064aa67::switchD:
0064AA67  FF 24 95 08 C3 64 00      JMP dword ptr [EDX*0x4 + 0x64c308]
switchD_0064aa67::caseD_1e:
0064AA6E  83 FF 02                  CMP EDI,0x2
0064AA71  74 17                     JZ 0x0064aa8a
0064AA73  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064AA78  68 F8 00 00 00            PUSH 0xf8
0064AA7D  68 04 2A 7D 00            PUSH 0x7d2a04
0064AA82  50                        PUSH EAX
0064AA83  6A 95                     PUSH -0x6b
0064AA85  E8 B6 B3 05 00            CALL 0x006a5e40
LAB_0064aa8a:
0064AA8A  8A 03                     MOV AL,byte ptr [EBX]
0064AA8C  3C 04                     CMP AL,0x4
0064AA8E  74 04                     JZ 0x0064aa94
0064AA90  3C 01                     CMP AL,0x1
0064AA92  75 18                     JNZ 0x0064aaac
LAB_0064aa94:
0064AA94  8A 4B 05                  MOV CL,byte ptr [EBX + 0x5]
0064AA97  8D 7B 05                  LEA EDI,[EBX + 0x5]
0064AA9A  80 F9 04                  CMP CL,0x4
0064AA9D  0F 84 2F 02 00 00         JZ 0x0064acd2
0064AAA3  80 F9 01                  CMP CL,0x1
0064AAA6  0F 84 26 02 00 00         JZ 0x0064acd2
LAB_0064aaac:
0064AAAC  3C 05                     CMP AL,0x5
0064AAAE  74 04                     JZ 0x0064aab4
0064AAB0  3C 02                     CMP AL,0x2
0064AAB2  75 18                     JNZ 0x0064aacc
LAB_0064aab4:
0064AAB4  8A 4B 05                  MOV CL,byte ptr [EBX + 0x5]
0064AAB7  8D 7B 05                  LEA EDI,[EBX + 0x5]
0064AABA  80 F9 05                  CMP CL,0x5
0064AABD  0F 84 1E 01 00 00         JZ 0x0064abe1
0064AAC3  80 F9 02                  CMP CL,0x2
0064AAC6  0F 84 15 01 00 00         JZ 0x0064abe1
LAB_0064aacc:
0064AACC  3C 06                     CMP AL,0x6
0064AACE  74 08                     JZ 0x0064aad8
0064AAD0  3C 03                     CMP AL,0x3
0064AAD2  0F 85 12 0D 00 00         JNZ 0x0064b7ea
LAB_0064aad8:
0064AAD8  8A 43 05                  MOV AL,byte ptr [EBX + 0x5]
0064AADB  8D 7B 05                  LEA EDI,[EBX + 0x5]
0064AADE  3C 06                     CMP AL,0x6
0064AAE0  74 08                     JZ 0x0064aaea
0064AAE2  3C 03                     CMP AL,0x3
0064AAE4  0F 85 00 0D 00 00         JNZ 0x0064b7ea
LAB_0064aaea:
0064AAEA  8B 16                     MOV EDX,dword ptr [ESI]
0064AAEC  53                        PUSH EBX
0064AAED  8B CE                     MOV ECX,ESI
0064AAEF  FF 52 08                  CALL dword ptr [EDX + 0x8]
0064AAF2  8B D8                     MOV EBX,EAX
0064AAF4  8B 06                     MOV EAX,dword ptr [ESI]
0064AAF6  57                        PUSH EDI
0064AAF7  8B CE                     MOV ECX,ESI
0064AAF9  FF 50 08                  CALL dword ptr [EAX + 0x8]
0064AAFC  85 DB                     TEST EBX,EBX
0064AAFE  8B F0                     MOV ESI,EAX
0064AB00  74 04                     JZ 0x0064ab06
0064AB02  85 F6                     TEST ESI,ESI
0064AB04  75 18                     JNZ 0x0064ab1e
LAB_0064ab06:
0064AB06  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064AB0C  68 1C 01 00 00            PUSH 0x11c
0064AB11  68 04 2A 7D 00            PUSH 0x7d2a04
0064AB16  51                        PUSH ECX
0064AB17  6A 95                     PUSH -0x6b
0064AB19  E8 22 B3 05 00            CALL 0x006a5e40
LAB_0064ab1e:
0064AB1E  6A 04                     PUSH 0x4
0064AB20  E8 EB 00 06 00            CALL 0x006aac10
0064AB25  8B F8                     MOV EDI,EAX
0064AB27  8B CB                     MOV ECX,EBX
0064AB29  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0064ab2c:
0064AB2C  8A 01                     MOV AL,byte ptr [ECX]
0064AB2E  8A 1E                     MOV BL,byte ptr [ESI]
0064AB30  8A D0                     MOV DL,AL
0064AB32  3A C3                     CMP AL,BL
0064AB34  75 1E                     JNZ 0x0064ab54
0064AB36  84 D2                     TEST DL,DL
0064AB38  74 16                     JZ 0x0064ab50
0064AB3A  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
0064AB3D  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0064AB40  8A D0                     MOV DL,AL
0064AB42  3A C3                     CMP AL,BL
0064AB44  75 0E                     JNZ 0x0064ab54
0064AB46  83 C1 02                  ADD ECX,0x2
0064AB49  83 C6 02                  ADD ESI,0x2
0064AB4C  84 D2                     TEST DL,DL
0064AB4E  75 DC                     JNZ 0x0064ab2c
LAB_0064ab50:
0064AB50  33 C9                     XOR ECX,ECX
0064AB52  EB 05                     JMP 0x0064ab59
LAB_0064ab54:
0064AB54  1B C9                     SBB ECX,ECX
0064AB56  83 D9 FF                  SBB ECX,-0x1
LAB_0064ab59:
0064AB59  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0064AB5C  0F BF 52 01               MOVSX EDX,word ptr [EDX + 0x1]
0064AB60  83 C2 E2                  ADD EDX,-0x1e
0064AB63  83 FA 15                  CMP EDX,0x15
0064AB66  77 63                     JA 0x0064abcb
0064AB68  33 C0                     XOR EAX,EAX
0064AB6A  8A 82 78 C3 64 00         MOV AL,byte ptr [EDX + 0x64c378]
switchD_0064ab70::switchD:
0064AB70  FF 24 85 5C C3 64 00      JMP dword ptr [EAX*0x4 + 0x64c35c]
switchD_0064ab70::caseD_1e:
0064AB77  33 D2                     XOR EDX,EDX
0064AB79  85 C9                     TEST ECX,ECX
0064AB7B  0F 94 C2                  SETZ DL
0064AB7E  89 17                     MOV dword ptr [EDI],EDX
0064AB80  E9 EA 07 00 00            JMP 0x0064b36f
switchD_0064ab70::caseD_2e:
0064AB85  33 C0                     XOR EAX,EAX
0064AB87  85 C9                     TEST ECX,ECX
0064AB89  0F 9F C0                  SETG AL
0064AB8C  89 07                     MOV dword ptr [EDI],EAX
0064AB8E  E9 DC 07 00 00            JMP 0x0064b36f
switchD_0064ab70::caseD_2f:
0064AB93  33 D2                     XOR EDX,EDX
0064AB95  85 C9                     TEST ECX,ECX
0064AB97  0F 9D C2                  SETGE DL
0064AB9A  89 17                     MOV dword ptr [EDI],EDX
0064AB9C  E9 CE 07 00 00            JMP 0x0064b36f
switchD_0064ab70::caseD_27:
0064ABA1  33 C0                     XOR EAX,EAX
0064ABA3  85 C9                     TEST ECX,ECX
0064ABA5  0F 9C C0                  SETL AL
0064ABA8  89 07                     MOV dword ptr [EDI],EAX
0064ABAA  E9 C0 07 00 00            JMP 0x0064b36f
switchD_0064ab70::caseD_28:
0064ABAF  33 D2                     XOR EDX,EDX
0064ABB1  85 C9                     TEST ECX,ECX
0064ABB3  0F 9E C2                  SETLE DL
0064ABB6  89 17                     MOV dword ptr [EDI],EDX
0064ABB8  E9 B2 07 00 00            JMP 0x0064b36f
switchD_0064ab70::caseD_33:
0064ABBD  33 C0                     XOR EAX,EAX
0064ABBF  85 C9                     TEST ECX,ECX
0064ABC1  0F 95 C0                  SETNZ AL
0064ABC4  89 07                     MOV dword ptr [EDI],EAX
0064ABC6  E9 A4 07 00 00            JMP 0x0064b36f
switchD_0064ab70::caseD_1f:
0064ABCB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064ABD1  68 26 01 00 00            PUSH 0x126
0064ABD6  68 04 2A 7D 00            PUSH 0x7d2a04
0064ABDB  51                        PUSH ECX
0064ABDC  E9 87 07 00 00            JMP 0x0064b368
LAB_0064abe1:
0064ABE1  8B 16                     MOV EDX,dword ptr [ESI]
0064ABE3  53                        PUSH EBX
0064ABE4  8B CE                     MOV ECX,ESI
0064ABE6  FF 52 04                  CALL dword ptr [EDX + 0x4]
0064ABE9  8B 06                     MOV EAX,dword ptr [ESI]
0064ABEB  57                        PUSH EDI
0064ABEC  D9 5D E4                  FSTP float ptr [EBP + -0x1c]
0064ABEF  8B CE                     MOV ECX,ESI
0064ABF1  FF 50 04                  CALL dword ptr [EAX + 0x4]
0064ABF4  D9 5D E0                  FSTP float ptr [EBP + -0x20]
0064ABF7  6A 04                     PUSH 0x4
0064ABF9  E8 12 00 06 00            CALL 0x006aac10
0064ABFE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0064AC01  8B C8                     MOV ECX,EAX
0064AC03  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0064AC06  0F BF 42 01               MOVSX EAX,word ptr [EDX + 0x1]
0064AC0A  83 C0 E2                  ADD EAX,-0x1e
0064AC0D  83 F8 15                  CMP EAX,0x15
0064AC10  0F 87 B2 00 00 00         JA 0x0064acc8
0064AC16  33 D2                     XOR EDX,EDX
0064AC18  8A 90 AC C3 64 00         MOV DL,byte ptr [EAX + 0x64c3ac]
switchD_0064ac1e::switchD:
0064AC1E  FF 24 95 90 C3 64 00      JMP dword ptr [EDX*0x4 + 0x64c390]
switchD_0064ac1e::caseD_1e:
0064AC25  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0064AC28  D8 5D E0                  FCOMP float ptr [EBP + -0x20]
0064AC2B  DF E0                     FNSTSW AX
0064AC2D  F6 C4 40                  TEST AH,0x40
0064AC30  0F 84 89 00 00 00         JZ 0x0064acbf
0064AC36  B8 01 00 00 00            MOV EAX,0x1
0064AC3B  89 01                     MOV dword ptr [ECX],EAX
0064AC3D  E9 2D 07 00 00            JMP 0x0064b36f
switchD_0064ac1e::caseD_2e:
0064AC42  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0064AC45  D8 5D E0                  FCOMP float ptr [EBP + -0x20]
0064AC48  DF E0                     FNSTSW AX
0064AC4A  F6 C4 41                  TEST AH,0x41
0064AC4D  75 70                     JNZ 0x0064acbf
0064AC4F  B8 01 00 00 00            MOV EAX,0x1
0064AC54  89 01                     MOV dword ptr [ECX],EAX
0064AC56  E9 14 07 00 00            JMP 0x0064b36f
switchD_0064ac1e::caseD_2f:
0064AC5B  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0064AC5E  D8 5D E0                  FCOMP float ptr [EBP + -0x20]
0064AC61  DF E0                     FNSTSW AX
0064AC63  F6 C4 01                  TEST AH,0x1
0064AC66  75 57                     JNZ 0x0064acbf
0064AC68  B8 01 00 00 00            MOV EAX,0x1
0064AC6D  89 01                     MOV dword ptr [ECX],EAX
0064AC6F  E9 FB 06 00 00            JMP 0x0064b36f
switchD_0064ac1e::caseD_27:
0064AC74  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0064AC77  D8 5D E0                  FCOMP float ptr [EBP + -0x20]
0064AC7A  DF E0                     FNSTSW AX
0064AC7C  F6 C4 01                  TEST AH,0x1
0064AC7F  74 3E                     JZ 0x0064acbf
0064AC81  B8 01 00 00 00            MOV EAX,0x1
0064AC86  89 01                     MOV dword ptr [ECX],EAX
0064AC88  E9 E2 06 00 00            JMP 0x0064b36f
switchD_0064ac1e::caseD_28:
0064AC8D  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0064AC90  D8 5D E0                  FCOMP float ptr [EBP + -0x20]
0064AC93  DF E0                     FNSTSW AX
0064AC95  F6 C4 41                  TEST AH,0x41
0064AC98  74 25                     JZ 0x0064acbf
0064AC9A  B8 01 00 00 00            MOV EAX,0x1
0064AC9F  89 01                     MOV dword ptr [ECX],EAX
0064ACA1  E9 C9 06 00 00            JMP 0x0064b36f
switchD_0064ac1e::caseD_33:
0064ACA6  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0064ACA9  D8 5D E0                  FCOMP float ptr [EBP + -0x20]
0064ACAC  DF E0                     FNSTSW AX
0064ACAE  F6 C4 40                  TEST AH,0x40
0064ACB1  75 0C                     JNZ 0x0064acbf
0064ACB3  B8 01 00 00 00            MOV EAX,0x1
0064ACB8  89 01                     MOV dword ptr [ECX],EAX
0064ACBA  E9 B0 06 00 00            JMP 0x0064b36f
LAB_0064acbf:
0064ACBF  33 C0                     XOR EAX,EAX
0064ACC1  89 01                     MOV dword ptr [ECX],EAX
0064ACC3  E9 A7 06 00 00            JMP 0x0064b36f
switchD_0064ac1e::caseD_1f:
0064ACC8  68 14 01 00 00            PUSH 0x114
0064ACCD  E9 8B 06 00 00            JMP 0x0064b35d
LAB_0064acd2:
0064ACD2  8B 16                     MOV EDX,dword ptr [ESI]
0064ACD4  53                        PUSH EBX
0064ACD5  8B CE                     MOV ECX,ESI
0064ACD7  FF 12                     CALL dword ptr [EDX]
0064ACD9  8B D8                     MOV EBX,EAX
0064ACDB  8B 06                     MOV EAX,dword ptr [ESI]
0064ACDD  57                        PUSH EDI
0064ACDE  8B CE                     MOV ECX,ESI
0064ACE0  FF 10                     CALL dword ptr [EAX]
0064ACE2  6A 04                     PUSH 0x4
0064ACE4  8B F0                     MOV ESI,EAX
0064ACE6  E8 25 FF 05 00            CALL 0x006aac10
0064ACEB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064ACEE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064ACF1  0F BF 49 01               MOVSX ECX,word ptr [ECX + 0x1]
0064ACF5  8D 79 E2                  LEA EDI,[ECX + -0x1e]
0064ACF8  83 FF 15                  CMP EDI,0x15
0064ACFB  77 63                     JA 0x0064ad60
0064ACFD  33 D2                     XOR EDX,EDX
0064ACFF  8A 97 E0 C3 64 00         MOV DL,byte ptr [EDI + 0x64c3e0]
switchD_0064ad05::switchD:
0064AD05  FF 24 95 C4 C3 64 00      JMP dword ptr [EDX*0x4 + 0x64c3c4]
switchD_0064ad05::caseD_1e:
0064AD0C  33 C9                     XOR ECX,ECX
0064AD0E  3B DE                     CMP EBX,ESI
0064AD10  0F 94 C1                  SETZ CL
0064AD13  89 08                     MOV dword ptr [EAX],ECX
0064AD15  E9 55 06 00 00            JMP 0x0064b36f
switchD_0064ad05::caseD_2e:
0064AD1A  33 D2                     XOR EDX,EDX
0064AD1C  3B DE                     CMP EBX,ESI
0064AD1E  0F 9F C2                  SETG DL
0064AD21  89 10                     MOV dword ptr [EAX],EDX
0064AD23  E9 47 06 00 00            JMP 0x0064b36f
switchD_0064ad05::caseD_2f:
0064AD28  33 C9                     XOR ECX,ECX
0064AD2A  3B DE                     CMP EBX,ESI
0064AD2C  0F 9D C1                  SETGE CL
0064AD2F  89 08                     MOV dword ptr [EAX],ECX
0064AD31  E9 39 06 00 00            JMP 0x0064b36f
switchD_0064ad05::caseD_27:
0064AD36  33 D2                     XOR EDX,EDX
0064AD38  3B DE                     CMP EBX,ESI
0064AD3A  0F 9C C2                  SETL DL
0064AD3D  89 10                     MOV dword ptr [EAX],EDX
0064AD3F  E9 2B 06 00 00            JMP 0x0064b36f
switchD_0064ad05::caseD_28:
0064AD44  33 C9                     XOR ECX,ECX
0064AD46  3B DE                     CMP EBX,ESI
0064AD48  0F 9E C1                  SETLE CL
0064AD4B  89 08                     MOV dword ptr [EAX],ECX
0064AD4D  E9 1D 06 00 00            JMP 0x0064b36f
switchD_0064ad05::caseD_33:
0064AD52  33 D2                     XOR EDX,EDX
0064AD54  3B DE                     CMP EBX,ESI
0064AD56  0F 95 C2                  SETNZ DL
0064AD59  89 10                     MOV dword ptr [EAX],EDX
0064AD5B  E9 0F 06 00 00            JMP 0x0064b36f
switchD_0064ad05::caseD_1f:
0064AD60  68 04 01 00 00            PUSH 0x104
0064AD65  E9 F3 05 00 00            JMP 0x0064b35d
switchD_0064aa67::caseD_32:
0064AD6A  83 FF 01                  CMP EDI,0x1
0064AD6D  74 18                     JZ 0x0064ad87
0064AD6F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064AD75  68 43 01 00 00            PUSH 0x143
0064AD7A  68 04 2A 7D 00            PUSH 0x7d2a04
0064AD7F  51                        PUSH ECX
0064AD80  6A 95                     PUSH -0x6b
0064AD82  E8 B9 B0 05 00            CALL 0x006a5e40
LAB_0064ad87:
0064AD87  8A 03                     MOV AL,byte ptr [EBX]
0064AD89  3C 04                     CMP AL,0x4
0064AD8B  74 43                     JZ 0x0064add0
0064AD8D  3C 01                     CMP AL,0x1
0064AD8F  74 3F                     JZ 0x0064add0
0064AD91  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0064AD94  0F BF 42 01               MOVSX EAX,word ptr [EDX + 0x1]
0064AD98  50                        PUSH EAX
0064AD99  E8 3D AA DB FF            CALL 0x004057db
0064AD9E  85 C0                     TEST EAX,EAX
0064ADA0  74 0F                     JZ 0x0064adb1
0064ADA2  6A 7F                     PUSH 0x7f
0064ADA4  50                        PUSH EAX
0064ADA5  8D 46 04                  LEA EAX,[ESI + 0x4]
0064ADA8  50                        PUSH EAX
0064ADA9  E8 92 35 0E 00            CALL 0x0072e340
0064ADAE  83 C4 0C                  ADD ESP,0xc
LAB_0064adb1:
0064ADB1  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064ADBB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064ADC1  6A 79                     PUSH 0x79
0064ADC3  68 24 2A 7D 00            PUSH 0x7d2a24
0064ADC8  51                        PUSH ECX
0064ADC9  6A 8A                     PUSH -0x76
0064ADCB  E9 D4 14 00 00            JMP 0x0064c2a4
LAB_0064add0:
0064ADD0  6A 04                     PUSH 0x4
0064ADD2  E8 39 FE 05 00            CALL 0x006aac10
0064ADD7  8B 16                     MOV EDX,dword ptr [ESI]
0064ADD9  53                        PUSH EBX
0064ADDA  8B CE                     MOV ECX,ESI
0064ADDC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064ADDF  FF 12                     CALL dword ptr [EDX]
0064ADE1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064ADE4  F7 D8                     NEG EAX
0064ADE6  1B C0                     SBB EAX,EAX
0064ADE8  40                        INC EAX
0064ADE9  89 01                     MOV dword ptr [ECX],EAX
0064ADEB  E9 7F 05 00 00            JMP 0x0064b36f
switchD_0064aa67::caseD_8:
0064ADF0  83 FF 02                  CMP EDI,0x2
0064ADF3  74 18                     JZ 0x0064ae0d
0064ADF5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064ADFB  68 52 01 00 00            PUSH 0x152
0064AE00  68 04 2A 7D 00            PUSH 0x7d2a04
0064AE05  52                        PUSH EDX
0064AE06  6A 95                     PUSH -0x6b
0064AE08  E8 33 B0 05 00            CALL 0x006a5e40
LAB_0064ae0d:
0064AE0D  8A 03                     MOV AL,byte ptr [EBX]
0064AE0F  3C 04                     CMP AL,0x4
0064AE11  74 04                     JZ 0x0064ae17
0064AE13  3C 01                     CMP AL,0x1
0064AE15  75 0E                     JNZ 0x0064ae25
LAB_0064ae17:
0064AE17  8A 43 05                  MOV AL,byte ptr [EBX + 0x5]
0064AE1A  8D 7B 05                  LEA EDI,[EBX + 0x5]
0064AE1D  3C 04                     CMP AL,0x4
0064AE1F  74 43                     JZ 0x0064ae64
0064AE21  3C 01                     CMP AL,0x1
0064AE23  74 3F                     JZ 0x0064ae64
LAB_0064ae25:
0064AE25  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064AE28  0F BF 48 01               MOVSX ECX,word ptr [EAX + 0x1]
0064AE2C  51                        PUSH ECX
0064AE2D  E8 A9 A9 DB FF            CALL 0x004057db
0064AE32  85 C0                     TEST EAX,EAX
0064AE34  74 0F                     JZ 0x0064ae45
0064AE36  6A 7F                     PUSH 0x7f
0064AE38  50                        PUSH EAX
0064AE39  8D 46 04                  LEA EAX,[ESI + 0x4]
0064AE3C  50                        PUSH EAX
0064AE3D  E8 FE 34 0E 00            CALL 0x0072e340
0064AE42  83 C4 0C                  ADD ESP,0xc
LAB_0064ae45:
0064AE45  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064AE4F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064AE55  6A 79                     PUSH 0x79
0064AE57  68 24 2A 7D 00            PUSH 0x7d2a24
0064AE5C  52                        PUSH EDX
0064AE5D  6A 8A                     PUSH -0x76
0064AE5F  E9 40 14 00 00            JMP 0x0064c2a4
LAB_0064ae64:
0064AE64  8B 06                     MOV EAX,dword ptr [ESI]
0064AE66  53                        PUSH EBX
0064AE67  8B CE                     MOV ECX,ESI
0064AE69  FF 10                     CALL dword ptr [EAX]
0064AE6B  8B 16                     MOV EDX,dword ptr [ESI]
0064AE6D  57                        PUSH EDI
0064AE6E  8B CE                     MOV ECX,ESI
0064AE70  8B D8                     MOV EBX,EAX
0064AE72  FF 12                     CALL dword ptr [EDX]
0064AE74  6A 04                     PUSH 0x4
0064AE76  8B F0                     MOV ESI,EAX
0064AE78  E8 93 FD 05 00            CALL 0x006aac10
0064AE7D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064AE80  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064AE83  0F BF 49 01               MOVSX ECX,word ptr [ECX + 0x1]
0064AE87  83 E9 08                  SUB ECX,0x8
0064AE8A  74 30                     JZ 0x0064aebc
0064AE8C  83 E9 02                  SUB ECX,0x2
0064AE8F  74 22                     JZ 0x0064aeb3
0064AE91  49                        DEC ECX
0064AE92  74 16                     JZ 0x0064aeaa
0064AE94  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064AE9A  68 5A 01 00 00            PUSH 0x15a
0064AE9F  68 04 2A 7D 00            PUSH 0x7d2a04
0064AEA4  52                        PUSH EDX
0064AEA5  E9 BE 04 00 00            JMP 0x0064b368
LAB_0064aeaa:
0064AEAA  33 F3                     XOR ESI,EBX
0064AEAC  89 30                     MOV dword ptr [EAX],ESI
0064AEAE  E9 BC 04 00 00            JMP 0x0064b36f
LAB_0064aeb3:
0064AEB3  0B F3                     OR ESI,EBX
0064AEB5  89 30                     MOV dword ptr [EAX],ESI
0064AEB7  E9 B3 04 00 00            JMP 0x0064b36f
LAB_0064aebc:
0064AEBC  23 F3                     AND ESI,EBX
0064AEBE  89 30                     MOV dword ptr [EAX],ESI
0064AEC0  E9 AA 04 00 00            JMP 0x0064b36f
switchD_0064aa67::caseD_9:
0064AEC5  83 FF 01                  CMP EDI,0x1
0064AEC8  74 17                     JZ 0x0064aee1
0064AECA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064AECF  68 64 01 00 00            PUSH 0x164
0064AED4  68 04 2A 7D 00            PUSH 0x7d2a04
0064AED9  50                        PUSH EAX
0064AEDA  6A 95                     PUSH -0x6b
0064AEDC  E8 5F AF 05 00            CALL 0x006a5e40
LAB_0064aee1:
0064AEE1  8A 03                     MOV AL,byte ptr [EBX]
0064AEE3  3C 04                     CMP AL,0x4
0064AEE5  74 08                     JZ 0x0064aeef
0064AEE7  3C 01                     CMP AL,0x1
0064AEE9  0F 85 FB 08 00 00         JNZ 0x0064b7ea
LAB_0064aeef:
0064AEEF  6A 04                     PUSH 0x4
0064AEF1  E8 1A FD 05 00            CALL 0x006aac10
0064AEF6  8B 16                     MOV EDX,dword ptr [ESI]
0064AEF8  53                        PUSH EBX
0064AEF9  8B CE                     MOV ECX,ESI
0064AEFB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064AEFE  FF 12                     CALL dword ptr [EDX]
0064AF00  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064AF03  F7 D0                     NOT EAX
0064AF05  89 01                     MOV dword ptr [ECX],EAX
0064AF07  E9 63 04 00 00            JMP 0x0064b36f
switchD_0064aa67::caseD_13:
0064AF0C  83 FF 03                  CMP EDI,0x3
0064AF0F  74 18                     JZ 0x0064af29
0064AF11  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064AF17  68 71 01 00 00            PUSH 0x171
0064AF1C  68 04 2A 7D 00            PUSH 0x7d2a04
0064AF21  52                        PUSH EDX
0064AF22  6A 95                     PUSH -0x6b
0064AF24  E8 17 AF 05 00            CALL 0x006a5e40
LAB_0064af29:
0064AF29  8A 03                     MOV AL,byte ptr [EBX]
0064AF2B  3C 04                     CMP AL,0x4
0064AF2D  74 04                     JZ 0x0064af33
0064AF2F  3C 01                     CMP AL,0x1
0064AF31  75 3F                     JNZ 0x0064af72
LAB_0064af33:
0064AF33  8B 06                     MOV EAX,dword ptr [ESI]
0064AF35  53                        PUSH EBX
0064AF36  8B CE                     MOV ECX,ESI
0064AF38  FF 10                     CALL dword ptr [EAX]
0064AF3A  F7 D8                     NEG EAX
0064AF3C  1B C0                     SBB EAX,EAX
0064AF3E  83 C0 02                  ADD EAX,0x2
0064AF41  8D 0C 83                  LEA ECX,[EBX + EAX*0x4]
0064AF44  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
0064AF47  8A 04 08                  MOV AL,byte ptr [EAX + ECX*0x1]
0064AF4A  3C 04                     CMP AL,0x4
0064AF4C  0F 84 DB 00 00 00         JZ 0x0064b02d
0064AF52  3C 01                     CMP AL,0x1
0064AF54  0F 84 D3 00 00 00         JZ 0x0064b02d
0064AF5A  3C 05                     CMP AL,0x5
0064AF5C  0F 84 AF 00 00 00         JZ 0x0064b011
0064AF62  3C 02                     CMP AL,0x2
0064AF64  0F 84 A7 00 00 00         JZ 0x0064b011
0064AF6A  3C 06                     CMP AL,0x6
0064AF6C  74 43                     JZ 0x0064afb1
0064AF6E  3C 03                     CMP AL,0x3
0064AF70  74 3F                     JZ 0x0064afb1
LAB_0064af72:
0064AF72  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0064AF75  0F BF 42 01               MOVSX EAX,word ptr [EDX + 0x1]
0064AF79  50                        PUSH EAX
0064AF7A  E8 5C A8 DB FF            CALL 0x004057db
0064AF7F  85 C0                     TEST EAX,EAX
0064AF81  74 0F                     JZ 0x0064af92
0064AF83  6A 7F                     PUSH 0x7f
0064AF85  50                        PUSH EAX
0064AF86  8D 46 04                  LEA EAX,[ESI + 0x4]
0064AF89  50                        PUSH EAX
0064AF8A  E8 B1 33 0E 00            CALL 0x0072e340
0064AF8F  83 C4 0C                  ADD ESP,0xc
LAB_0064af92:
0064AF92  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064AF9C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064AFA2  6A 79                     PUSH 0x79
0064AFA4  68 24 2A 7D 00            PUSH 0x7d2a24
0064AFA9  51                        PUSH ECX
0064AFAA  6A 8A                     PUSH -0x76
0064AFAC  E9 F3 12 00 00            JMP 0x0064c2a4
LAB_0064afb1:
0064AFB1  8B 16                     MOV EDX,dword ptr [ESI]
0064AFB3  57                        PUSH EDI
0064AFB4  8B CE                     MOV ECX,ESI
0064AFB6  FF 52 08                  CALL dword ptr [EDX + 0x8]
0064AFB9  8B F0                     MOV ESI,EAX
0064AFBB  85 F6                     TEST ESI,ESI
0064AFBD  75 17                     JNZ 0x0064afd6
0064AFBF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064AFC4  68 82 01 00 00            PUSH 0x182
0064AFC9  68 04 2A 7D 00            PUSH 0x7d2a04
0064AFCE  50                        PUSH EAX
0064AFCF  6A 95                     PUSH -0x6b
0064AFD1  E8 6A AE 05 00            CALL 0x006a5e40
LAB_0064afd6:
0064AFD6  8B FE                     MOV EDI,ESI
0064AFD8  83 C9 FF                  OR ECX,0xffffffff
0064AFDB  33 C0                     XOR EAX,EAX
0064AFDD  F2 AE                     SCASB.REPNE ES:EDI
0064AFDF  F7 D1                     NOT ECX
0064AFE1  41                        INC ECX
0064AFE2  51                        PUSH ECX
0064AFE3  E8 28 FC 05 00            CALL 0x006aac10
0064AFE8  8B D0                     MOV EDX,EAX
0064AFEA  8B FE                     MOV EDI,ESI
0064AFEC  83 C9 FF                  OR ECX,0xffffffff
0064AFEF  33 C0                     XOR EAX,EAX
0064AFF1  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0064AFF4  F2 AE                     SCASB.REPNE ES:EDI
0064AFF6  F7 D1                     NOT ECX
0064AFF8  2B F9                     SUB EDI,ECX
0064AFFA  8B C1                     MOV EAX,ECX
0064AFFC  8B F7                     MOV ESI,EDI
0064AFFE  8B FA                     MOV EDI,EDX
0064B000  C1 E9 02                  SHR ECX,0x2
0064B003  F3 A5                     MOVSD.REP ES:EDI,ESI
0064B005  8B C8                     MOV ECX,EAX
0064B007  83 E1 03                  AND ECX,0x3
0064B00A  F3 A4                     MOVSB.REP ES:EDI,ESI
0064B00C  E9 A0 0B 00 00            JMP 0x0064bbb1
LAB_0064b011:
0064B011  6A 04                     PUSH 0x4
0064B013  E8 F8 FB 05 00            CALL 0x006aac10
0064B018  8B 16                     MOV EDX,dword ptr [ESI]
0064B01A  57                        PUSH EDI
0064B01B  8B CE                     MOV ECX,ESI
0064B01D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064B020  FF 52 04                  CALL dword ptr [EDX + 0x4]
0064B023  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064B026  D9 18                     FSTP float ptr [EAX]
0064B028  E9 64 02 00 00            JMP 0x0064b291
LAB_0064b02d:
0064B02D  6A 04                     PUSH 0x4
0064B02F  E8 DC FB 05 00            CALL 0x006aac10
0064B034  8B 16                     MOV EDX,dword ptr [ESI]
0064B036  57                        PUSH EDI
0064B037  8B CE                     MOV ECX,ESI
0064B039  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064B03C  FF 12                     CALL dword ptr [EDX]
0064B03E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064B041  89 01                     MOV dword ptr [ECX],EAX
0064B043  E9 27 03 00 00            JMP 0x0064b36f
switchD_0064aa67::caseD_1:
0064B048  83 FF 02                  CMP EDI,0x2
0064B04B  74 18                     JZ 0x0064b065
0064B04D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064B053  68 8A 00 00 00            PUSH 0x8a
0064B058  68 04 2A 7D 00            PUSH 0x7d2a04
0064B05D  52                        PUSH EDX
0064B05E  6A 95                     PUSH -0x6b
0064B060  E8 DB AD 05 00            CALL 0x006a5e40
LAB_0064b065:
0064B065  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064B068  66 8B 48 01               MOV CX,word ptr [EAX + 0x1]
0064B06C  66 83 F9 01               CMP CX,0x1
0064B070  0F 85 D7 00 00 00         JNZ 0x0064b14d
0064B076  8A 03                     MOV AL,byte ptr [EBX]
0064B078  3C 06                     CMP AL,0x6
0064B07A  74 08                     JZ 0x0064b084
0064B07C  3C 03                     CMP AL,0x3
0064B07E  0F 85 C9 00 00 00         JNZ 0x0064b14d
LAB_0064b084:
0064B084  8A 43 05                  MOV AL,byte ptr [EBX + 0x5]
0064B087  8D 7B 05                  LEA EDI,[EBX + 0x5]
0064B08A  3C 06                     CMP AL,0x6
0064B08C  74 08                     JZ 0x0064b096
0064B08E  3C 03                     CMP AL,0x3
0064B090  0F 85 B7 00 00 00         JNZ 0x0064b14d
LAB_0064b096:
0064B096  8B 16                     MOV EDX,dword ptr [ESI]
0064B098  53                        PUSH EBX
0064B099  8B CE                     MOV ECX,ESI
0064B09B  FF 52 08                  CALL dword ptr [EDX + 0x8]
0064B09E  8B D8                     MOV EBX,EAX
0064B0A0  8B 06                     MOV EAX,dword ptr [ESI]
0064B0A2  57                        PUSH EDI
0064B0A3  8B CE                     MOV ECX,ESI
0064B0A5  FF 50 08                  CALL dword ptr [EAX + 0x8]
0064B0A8  8B F0                     MOV ESI,EAX
0064B0AA  85 DB                     TEST EBX,EBX
0064B0AC  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0064B0AF  74 04                     JZ 0x0064b0b5
0064B0B1  85 F6                     TEST ESI,ESI
0064B0B3  75 18                     JNZ 0x0064b0cd
LAB_0064b0b5:
0064B0B5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064B0BB  68 8E 00 00 00            PUSH 0x8e
0064B0C0  68 04 2A 7D 00            PUSH 0x7d2a04
0064B0C5  51                        PUSH ECX
0064B0C6  6A 95                     PUSH -0x6b
0064B0C8  E8 73 AD 05 00            CALL 0x006a5e40
LAB_0064b0cd:
0064B0CD  8B FE                     MOV EDI,ESI
0064B0CF  83 C9 FF                  OR ECX,0xffffffff
0064B0D2  33 C0                     XOR EAX,EAX
0064B0D4  F2 AE                     SCASB.REPNE ES:EDI
0064B0D6  F7 D1                     NOT ECX
0064B0D8  49                        DEC ECX
0064B0D9  8B FB                     MOV EDI,EBX
0064B0DB  8B D1                     MOV EDX,ECX
0064B0DD  83 C9 FF                  OR ECX,0xffffffff
0064B0E0  F2 AE                     SCASB.REPNE ES:EDI
0064B0E2  F7 D1                     NOT ECX
0064B0E4  49                        DEC ECX
0064B0E5  8D 44 0A 04               LEA EAX,[EDX + ECX*0x1 + 0x4]
0064B0E9  50                        PUSH EAX
0064B0EA  E8 21 FB 05 00            CALL 0x006aac10
0064B0EF  8B D0                     MOV EDX,EAX
0064B0F1  85 D2                     TEST EDX,EDX
0064B0F3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0064B0F6  74 29                     JZ 0x0064b121
0064B0F8  85 DB                     TEST EBX,EBX
0064B0FA  74 25                     JZ 0x0064b121
0064B0FC  8B FB                     MOV EDI,EBX
0064B0FE  83 C9 FF                  OR ECX,0xffffffff
0064B101  33 C0                     XOR EAX,EAX
0064B103  F2 AE                     SCASB.REPNE ES:EDI
0064B105  F7 D1                     NOT ECX
0064B107  2B F9                     SUB EDI,ECX
0064B109  8B C1                     MOV EAX,ECX
0064B10B  8B F7                     MOV ESI,EDI
0064B10D  8B FA                     MOV EDI,EDX
0064B10F  C1 E9 02                  SHR ECX,0x2
0064B112  F3 A5                     MOVSD.REP ES:EDI,ESI
0064B114  8B C8                     MOV ECX,EAX
0064B116  83 E1 03                  AND ECX,0x3
0064B119  F3 A4                     MOVSB.REP ES:EDI,ESI
0064B11B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0064B11E  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_0064b121:
0064B121  8B FE                     MOV EDI,ESI
0064B123  83 C9 FF                  OR ECX,0xffffffff
0064B126  33 C0                     XOR EAX,EAX
0064B128  F2 AE                     SCASB.REPNE ES:EDI
0064B12A  F7 D1                     NOT ECX
0064B12C  2B F9                     SUB EDI,ECX
0064B12E  8B F7                     MOV ESI,EDI
0064B130  8B D9                     MOV EBX,ECX
0064B132  8B FA                     MOV EDI,EDX
0064B134  83 C9 FF                  OR ECX,0xffffffff
0064B137  F2 AE                     SCASB.REPNE ES:EDI
0064B139  8B CB                     MOV ECX,EBX
0064B13B  4F                        DEC EDI
0064B13C  C1 E9 02                  SHR ECX,0x2
0064B13F  F3 A5                     MOVSD.REP ES:EDI,ESI
0064B141  8B CB                     MOV ECX,EBX
0064B143  83 E1 03                  AND ECX,0x3
0064B146  F3 A4                     MOVSB.REP ES:EDI,ESI
0064B148  E9 64 0A 00 00            JMP 0x0064bbb1
LAB_0064b14d:
0064B14D  33 C0                     XOR EAX,EAX
0064B14F  8A 03                     MOV AL,byte ptr [EBX]
0064B151  48                        DEC EAX
0064B152  83 F8 04                  CMP EAX,0x4
0064B155  0F 87 ED 03 00 00         JA 0x0064b548
switchD_0064b15b::switchD:
0064B15B  FF 24 85 F8 C3 64 00      JMP dword ptr [EAX*0x4 + 0x64c3f8]
switchD_0064b15b::caseD_1:
0064B162  8A 43 05                  MOV AL,byte ptr [EBX + 0x5]
0064B165  8D 7B 05                  LEA EDI,[EBX + 0x5]
0064B168  3C 04                     CMP AL,0x4
0064B16A  0F 84 49 01 00 00         JZ 0x0064b2b9
0064B170  3C 01                     CMP AL,0x1
0064B172  0F 84 41 01 00 00         JZ 0x0064b2b9
0064B178  3C 05                     CMP AL,0x5
0064B17A  74 43                     JZ 0x0064b1bf
0064B17C  3C 02                     CMP AL,0x2
0064B17E  74 3F                     JZ 0x0064b1bf
0064B180  0F BF C9                  MOVSX ECX,CX
0064B183  51                        PUSH ECX
0064B184  E8 52 A6 DB FF            CALL 0x004057db
0064B189  85 C0                     TEST EAX,EAX
0064B18B  0F 84 83 05 00 00         JZ 0x0064b714
0064B191  6A 7F                     PUSH 0x7f
0064B193  50                        PUSH EAX
0064B194  8D 46 04                  LEA EAX,[ESI + 0x4]
0064B197  50                        PUSH EAX
0064B198  E8 A3 31 0E 00            CALL 0x0072e340
0064B19D  83 C4 0C                  ADD ESP,0xc
0064B1A0  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064B1AA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064B1B0  6A 79                     PUSH 0x79
0064B1B2  68 24 2A 7D 00            PUSH 0x7d2a24
0064B1B7  52                        PUSH EDX
0064B1B8  6A 8A                     PUSH -0x76
0064B1BA  E9 E5 10 00 00            JMP 0x0064c2a4
LAB_0064b1bf:
0064B1BF  8B 06                     MOV EAX,dword ptr [ESI]
0064B1C1  53                        PUSH EBX
0064B1C2  8B CE                     MOV ECX,ESI
0064B1C4  FF 10                     CALL dword ptr [EAX]
0064B1C6  8B 16                     MOV EDX,dword ptr [ESI]
0064B1C8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0064B1CB  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0064B1CE  57                        PUSH EDI
0064B1CF  8B CE                     MOV ECX,ESI
0064B1D1  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0064B1D4  FF 52 04                  CALL dword ptr [EDX + 0x4]
0064B1D7  D9 5D F0                  FSTP float ptr [EBP + -0x10]
0064B1DA  6A 04                     PUSH 0x4
0064B1DC  E8 2F FA 05 00            CALL 0x006aac10
0064B1E1  8B F8                     MOV EDI,EAX
0064B1E3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064B1E6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0064B1E9  0F BF 40 01               MOVSX EAX,word ptr [EAX + 0x1]
0064B1ED  8D 48 FF                  LEA ECX,[EAX + -0x1]
0064B1F0  83 F9 3C                  CMP ECX,0x3c
0064B1F3  77 64                     JA 0x0064b259
0064B1F5  33 D2                     XOR EDX,EDX
0064B1F7  8A 91 20 C4 64 00         MOV DL,byte ptr [ECX + 0x64c420]
switchD_0064b1fd::switchD:
0064B1FD  FF 24 95 0C C4 64 00      JMP dword ptr [EDX*0x4 + 0x64c40c]
switchD_0064b1fd::caseD_1:
0064B204  D9 45 F0                  FLD float ptr [EBP + -0x10]
0064B207  D8 45 F8                  FADD float ptr [EBP + -0x8]
0064B20A  D9 1F                     FSTP float ptr [EDI]
0064B20C  E9 80 00 00 00            JMP 0x0064b291
switchD_0064b1fd::caseD_3d:
0064B211  D9 45 F8                  FLD float ptr [EBP + -0x8]
0064B214  D8 65 F0                  FSUB float ptr [EBP + -0x10]
0064B217  D9 1F                     FSTP float ptr [EDI]
0064B219  EB 76                     JMP 0x0064b291
switchD_0064b1fd::caseD_30:
0064B21B  D9 45 F0                  FLD float ptr [EBP + -0x10]
0064B21E  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0064B221  D9 1F                     FSTP float ptr [EDI]
0064B223  EB 6C                     JMP 0x0064b291
switchD_0064b1fd::caseD_16:
0064B225  D9 45 F0                  FLD float ptr [EBP + -0x10]
0064B228  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
0064B22E  DF E0                     FNSTSW AX
0064B230  F6 C4 40                  TEST AH,0x40
0064B233  74 1A                     JZ 0x0064b24f
0064B235  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064B23A  68 AD 00 00 00            PUSH 0xad
0064B23F  68 04 2A 7D 00            PUSH 0x7d2a04
0064B244  50                        PUSH EAX
0064B245  6A 99                     PUSH -0x67
0064B247  E8 F4 AB 05 00            CALL 0x006a5e40
0064B24C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0064b24f:
0064B24F  D9 45 F8                  FLD float ptr [EBP + -0x8]
0064B252  D8 75 F0                  FDIV float ptr [EBP + -0x10]
0064B255  D9 1F                     FSTP float ptr [EDI]
0064B257  EB 38                     JMP 0x0064b291
switchD_0064b1fd::caseD_2:
0064B259  50                        PUSH EAX
0064B25A  E8 7C A5 DB FF            CALL 0x004057db
0064B25F  85 C0                     TEST EAX,EAX
0064B261  74 0F                     JZ 0x0064b272
LAB_0064b263:
0064B263  6A 7F                     PUSH 0x7f
0064B265  50                        PUSH EAX
0064B266  8D 46 04                  LEA EAX,[ESI + 0x4]
0064B269  50                        PUSH EAX
0064B26A  E8 D1 30 0E 00            CALL 0x0072e340
0064B26F  83 C4 0C                  ADD ESP,0xc
LAB_0064b272:
0064B272  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064B27C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064B282  6A 79                     PUSH 0x79
0064B284  68 24 2A 7D 00            PUSH 0x7d2a24
0064B289  51                        PUSH ECX
0064B28A  6A 8A                     PUSH -0x76
0064B28C  E8 AF AB 05 00            CALL 0x006a5e40
LAB_0064b291:
0064B291  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0064B294  85 C0                     TEST EAX,EAX
0064B296  0F 84 0D 10 00 00         JZ 0x0064c2a9
0064B29C  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
0064B2A2  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0064B2A8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064B2AD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064B2B0  5F                        POP EDI
0064B2B1  5E                        POP ESI
0064B2B2  5B                        POP EBX
0064B2B3  8B E5                     MOV ESP,EBP
0064B2B5  5D                        POP EBP
0064B2B6  C2 0C 00                  RET 0xc
LAB_0064b2b9:
0064B2B9  8B 16                     MOV EDX,dword ptr [ESI]
0064B2BB  53                        PUSH EBX
0064B2BC  8B CE                     MOV ECX,ESI
0064B2BE  FF 12                     CALL dword ptr [EDX]
0064B2C0  8B D8                     MOV EBX,EAX
0064B2C2  8B 06                     MOV EAX,dword ptr [ESI]
0064B2C4  57                        PUSH EDI
0064B2C5  8B CE                     MOV ECX,ESI
0064B2C7  FF 10                     CALL dword ptr [EAX]
0064B2C9  6A 04                     PUSH 0x4
0064B2CB  8B F0                     MOV ESI,EAX
0064B2CD  E8 3E F9 05 00            CALL 0x006aac10
0064B2D2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0064B2D5  8B C8                     MOV ECX,EAX
0064B2D7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0064B2DA  0F BF 42 01               MOVSX EAX,word ptr [EDX + 0x1]
0064B2DE  8D 78 FF                  LEA EDI,[EAX + -0x1]
0064B2E1  83 FF 3C                  CMP EDI,0x3c
0064B2E4  77 72                     JA 0x0064b358
0064B2E6  33 C0                     XOR EAX,EAX
0064B2E8  8A 87 78 C4 64 00         MOV AL,byte ptr [EDI + 0x64c478]
switchD_0064b2ee::switchD:
0064B2EE  FF 24 85 60 C4 64 00      JMP dword ptr [EAX*0x4 + 0x64c460]
switchD_0064b2ee::caseD_1:
0064B2F5  03 F3                     ADD ESI,EBX
0064B2F7  89 31                     MOV dword ptr [ECX],ESI
0064B2F9  EB 74                     JMP 0x0064b36f
switchD_0064b2ee::caseD_3d:
0064B2FB  2B DE                     SUB EBX,ESI
0064B2FD  89 19                     MOV dword ptr [ECX],EBX
0064B2FF  EB 6E                     JMP 0x0064b36f
switchD_0064b2ee::caseD_30:
0064B301  0F AF F3                  IMUL ESI,EBX
0064B304  89 31                     MOV dword ptr [ECX],ESI
0064B306  EB 67                     JMP 0x0064b36f
switchD_0064b2ee::caseD_16:
0064B308  85 F6                     TEST ESI,ESI
0064B30A  75 1B                     JNZ 0x0064b327
0064B30C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064B312  68 9F 00 00 00            PUSH 0x9f
0064B317  68 04 2A 7D 00            PUSH 0x7d2a04
0064B31C  51                        PUSH ECX
0064B31D  6A 99                     PUSH -0x67
0064B31F  E8 1C AB 05 00            CALL 0x006a5e40
0064B324  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0064b327:
0064B327  8B C3                     MOV EAX,EBX
0064B329  99                        CDQ
0064B32A  F7 FE                     IDIV ESI
0064B32C  89 01                     MOV dword ptr [ECX],EAX
0064B32E  EB 3F                     JMP 0x0064b36f
switchD_0064b2ee::caseD_2c:
0064B330  85 F6                     TEST ESI,ESI
0064B332  75 1B                     JNZ 0x0064b34f
0064B334  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064B33A  68 A0 00 00 00            PUSH 0xa0
0064B33F  68 04 2A 7D 00            PUSH 0x7d2a04
0064B344  52                        PUSH EDX
0064B345  6A 99                     PUSH -0x67
0064B347  E8 F4 AA 05 00            CALL 0x006a5e40
0064B34C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0064b34f:
0064B34F  8B C3                     MOV EAX,EBX
0064B351  99                        CDQ
0064B352  F7 FE                     IDIV ESI
0064B354  89 11                     MOV dword ptr [ECX],EDX
0064B356  EB 17                     JMP 0x0064b36f
switchD_0064b2ee::caseD_2:
0064B358  68 A1 00 00 00            PUSH 0xa1
LAB_0064b35d:
0064B35D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064B362  68 04 2A 7D 00            PUSH 0x7d2a04
0064B367  50                        PUSH EAX
LAB_0064b368:
0064B368  6A 95                     PUSH -0x6b
0064B36A  E8 D1 AA 05 00            CALL 0x006a5e40
LAB_0064b36f:
0064B36F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0064B372  85 C0                     TEST EAX,EAX
0064B374  0F 84 2F 0F 00 00         JZ 0x0064c2a9
0064B37A  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
0064B380  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0064B386  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064B38B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064B38E  5F                        POP EDI
0064B38F  5E                        POP ESI
0064B390  5B                        POP EBX
0064B391  8B E5                     MOV ESP,EBP
0064B393  5D                        POP EBP
0064B394  C2 0C 00                  RET 0xc
switchD_0064b15b::caseD_2:
0064B397  8A 43 05                  MOV AL,byte ptr [EBX + 0x5]
0064B39A  8D 7B 05                  LEA EDI,[EBX + 0x5]
0064B39D  3C 04                     CMP AL,0x4
0064B39F  0F 84 00 01 00 00         JZ 0x0064b4a5
0064B3A5  3C 01                     CMP AL,0x1
0064B3A7  0F 84 F8 00 00 00         JZ 0x0064b4a5
0064B3AD  3C 05                     CMP AL,0x5
0064B3AF  74 43                     JZ 0x0064b3f4
0064B3B1  3C 02                     CMP AL,0x2
0064B3B3  74 3F                     JZ 0x0064b3f4
0064B3B5  0F BF C9                  MOVSX ECX,CX
0064B3B8  51                        PUSH ECX
0064B3B9  E8 1D A4 DB FF            CALL 0x004057db
0064B3BE  85 C0                     TEST EAX,EAX
0064B3C0  0F 84 4E 03 00 00         JZ 0x0064b714
0064B3C6  6A 7F                     PUSH 0x7f
0064B3C8  50                        PUSH EAX
0064B3C9  8D 46 04                  LEA EAX,[ESI + 0x4]
0064B3CC  50                        PUSH EAX
0064B3CD  E8 6E 2F 0E 00            CALL 0x0072e340
0064B3D2  83 C4 0C                  ADD ESP,0xc
0064B3D5  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064B3DF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064B3E5  6A 79                     PUSH 0x79
0064B3E7  68 24 2A 7D 00            PUSH 0x7d2a24
0064B3EC  52                        PUSH EDX
0064B3ED  6A 8A                     PUSH -0x76
0064B3EF  E9 B0 0E 00 00            JMP 0x0064c2a4
LAB_0064b3f4:
0064B3F4  8B 06                     MOV EAX,dword ptr [ESI]
0064B3F6  53                        PUSH EBX
0064B3F7  8B CE                     MOV ECX,ESI
0064B3F9  FF 50 04                  CALL dword ptr [EAX + 0x4]
0064B3FC  8B 16                     MOV EDX,dword ptr [ESI]
0064B3FE  57                        PUSH EDI
0064B3FF  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0064B402  8B CE                     MOV ECX,ESI
0064B404  FF 52 04                  CALL dword ptr [EDX + 0x4]
0064B407  D9 5D F0                  FSTP float ptr [EBP + -0x10]
0064B40A  6A 04                     PUSH 0x4
0064B40C  E8 FF F7 05 00            CALL 0x006aac10
0064B411  8B F8                     MOV EDI,EAX
0064B413  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064B416  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0064B419  0F BF 40 01               MOVSX EAX,word ptr [EAX + 0x1]
0064B41D  8D 48 FF                  LEA ECX,[EAX + -0x1]
0064B420  83 F9 3C                  CMP ECX,0x3c
0064B423  77 6D                     JA 0x0064b492
0064B425  33 D2                     XOR EDX,EDX
0064B427  8A 91 CC C4 64 00         MOV DL,byte ptr [ECX + 0x64c4cc]
switchD_0064b42d::switchD:
0064B42D  FF 24 95 B8 C4 64 00      JMP dword ptr [EDX*0x4 + 0x64c4b8]
switchD_0064b42d::caseD_1:
0064B434  D9 45 F0                  FLD float ptr [EBP + -0x10]
0064B437  D8 45 F8                  FADD float ptr [EBP + -0x8]
0064B43A  D9 1F                     FSTP float ptr [EDI]
0064B43C  E9 50 FE FF FF            JMP 0x0064b291
switchD_0064b42d::caseD_3d:
0064B441  D9 45 F8                  FLD float ptr [EBP + -0x8]
0064B444  D8 65 F0                  FSUB float ptr [EBP + -0x10]
0064B447  D9 1F                     FSTP float ptr [EDI]
0064B449  E9 43 FE FF FF            JMP 0x0064b291
switchD_0064b42d::caseD_30:
0064B44E  D9 45 F0                  FLD float ptr [EBP + -0x10]
0064B451  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0064B454  D9 1F                     FSTP float ptr [EDI]
0064B456  E9 36 FE FF FF            JMP 0x0064b291
switchD_0064b42d::caseD_16:
0064B45B  D9 45 F0                  FLD float ptr [EBP + -0x10]
0064B45E  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
0064B464  DF E0                     FNSTSW AX
0064B466  F6 C4 40                  TEST AH,0x40
0064B469  74 1A                     JZ 0x0064b485
0064B46B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064B470  68 CD 00 00 00            PUSH 0xcd
0064B475  68 04 2A 7D 00            PUSH 0x7d2a04
0064B47A  50                        PUSH EAX
0064B47B  6A 99                     PUSH -0x67
0064B47D  E8 BE A9 05 00            CALL 0x006a5e40
0064B482  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0064b485:
0064B485  D9 45 F8                  FLD float ptr [EBP + -0x8]
0064B488  D8 75 F0                  FDIV float ptr [EBP + -0x10]
0064B48B  D9 1F                     FSTP float ptr [EDI]
0064B48D  E9 FF FD FF FF            JMP 0x0064b291
switchD_0064b42d::caseD_2:
0064B492  50                        PUSH EAX
0064B493  E8 43 A3 DB FF            CALL 0x004057db
0064B498  85 C0                     TEST EAX,EAX
0064B49A  0F 84 D2 FD FF FF         JZ 0x0064b272
0064B4A0  E9 BE FD FF FF            JMP 0x0064b263
LAB_0064b4a5:
0064B4A5  8B 16                     MOV EDX,dword ptr [ESI]
0064B4A7  53                        PUSH EBX
0064B4A8  8B CE                     MOV ECX,ESI
0064B4AA  FF 52 04                  CALL dword ptr [EDX + 0x4]
0064B4AD  8B 06                     MOV EAX,dword ptr [ESI]
0064B4AF  57                        PUSH EDI
0064B4B0  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0064B4B3  8B CE                     MOV ECX,ESI
0064B4B5  FF 10                     CALL dword ptr [EAX]
0064B4B7  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0064B4BA  6A 04                     PUSH 0x4
0064B4BC  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0064B4BF  D9 5D F0                  FSTP float ptr [EBP + -0x10]
0064B4C2  E8 49 F7 05 00            CALL 0x006aac10
0064B4C7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064B4CA  8B F8                     MOV EDI,EAX
0064B4CC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0064B4CF  0F BF 41 01               MOVSX EAX,word ptr [ECX + 0x1]
0064B4D3  8D 48 FF                  LEA ECX,[EAX + -0x1]
0064B4D6  83 F9 3C                  CMP ECX,0x3c
0064B4D9  77 B7                     JA 0x0064b492
0064B4DB  33 D2                     XOR EDX,EDX
0064B4DD  8A 91 20 C5 64 00         MOV DL,byte ptr [ECX + 0x64c520]
switchD_0064b4e3::switchD:
0064B4E3  FF 24 95 0C C5 64 00      JMP dword ptr [EDX*0x4 + 0x64c50c]
switchD_0064b4e3::caseD_1:
0064B4EA  D9 45 F0                  FLD float ptr [EBP + -0x10]
0064B4ED  D8 45 F8                  FADD float ptr [EBP + -0x8]
0064B4F0  D9 1F                     FSTP float ptr [EDI]
0064B4F2  E9 9A FD FF FF            JMP 0x0064b291
switchD_0064b4e3::caseD_3d:
0064B4F7  D9 45 F8                  FLD float ptr [EBP + -0x8]
0064B4FA  D8 65 F0                  FSUB float ptr [EBP + -0x10]
0064B4FD  D9 1F                     FSTP float ptr [EDI]
0064B4FF  E9 8D FD FF FF            JMP 0x0064b291
switchD_0064b4e3::caseD_30:
0064B504  D9 45 F0                  FLD float ptr [EBP + -0x10]
0064B507  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0064B50A  D9 1F                     FSTP float ptr [EDI]
0064B50C  E9 80 FD FF FF            JMP 0x0064b291
switchD_0064b4e3::caseD_16:
0064B511  D9 45 F0                  FLD float ptr [EBP + -0x10]
0064B514  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
0064B51A  DF E0                     FNSTSW AX
0064B51C  F6 C4 40                  TEST AH,0x40
0064B51F  74 1A                     JZ 0x0064b53b
0064B521  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064B526  68 C0 00 00 00            PUSH 0xc0
0064B52B  68 04 2A 7D 00            PUSH 0x7d2a04
0064B530  50                        PUSH EAX
0064B531  6A 99                     PUSH -0x67
0064B533  E8 08 A9 05 00            CALL 0x006a5e40
0064B538  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0064b53b:
0064B53B  D9 45 F8                  FLD float ptr [EBP + -0x8]
0064B53E  D8 75 F0                  FDIV float ptr [EBP + -0x10]
0064B541  D9 1F                     FSTP float ptr [EDI]
0064B543  E9 49 FD FF FF            JMP 0x0064b291
switchD_0064b15b::caseD_3:
0064B548  0F BF D1                  MOVSX EDX,CX
0064B54B  52                        PUSH EDX
0064B54C  E8 8A A2 DB FF            CALL 0x004057db
0064B551  85 C0                     TEST EAX,EAX
0064B553  0F 84 B1 02 00 00         JZ 0x0064b80a
0064B559  6A 7F                     PUSH 0x7f
0064B55B  50                        PUSH EAX
0064B55C  8D 46 04                  LEA EAX,[ESI + 0x4]
0064B55F  50                        PUSH EAX
0064B560  E8 DB 2D 0E 00            CALL 0x0072e340
0064B565  83 C4 0C                  ADD ESP,0xc
0064B568  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064B572  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064B577  6A 79                     PUSH 0x79
0064B579  68 24 2A 7D 00            PUSH 0x7d2a24
0064B57E  50                        PUSH EAX
0064B57F  6A 8A                     PUSH -0x76
0064B581  E9 1E 0D 00 00            JMP 0x0064c2a4
LAB_0064b586:
0064B586  3D 89 03 00 00            CMP EAX,0x389
0064B58B  0F 8F 48 06 00 00         JG 0x0064bbd9
0064B591  0F 84 96 05 00 00         JZ 0x0064bb2d
0064B597  3D 85 03 00 00            CMP EAX,0x385
0064B59C  0F 8F 9E 03 00 00         JG 0x0064b940
0064B5A2  0F 84 BB 02 00 00         JZ 0x0064b863
0064B5A8  8B C8                     MOV ECX,EAX
0064B5AA  83 E9 41                  SUB ECX,0x41
0064B5AD  0F 84 09 02 00 00         JZ 0x0064b7bc
0064B5B3  83 E9 02                  SUB ECX,0x2
0064B5B6  0F 84 03 01 00 00         JZ 0x0064b6bf
0064B5BC  81 E9 41 03 00 00         SUB ECX,0x341
0064B5C2  0F 85 A9 0C 00 00         JNZ 0x0064c271
0064B5C8  83 FF 01                  CMP EDI,0x1
0064B5CB  7D 18                     JGE 0x0064b5e5
0064B5CD  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064B5D3  68 F4 01 00 00            PUSH 0x1f4
0064B5D8  68 04 2A 7D 00            PUSH 0x7d2a04
0064B5DD  51                        PUSH ECX
0064B5DE  6A 95                     PUSH -0x6b
0064B5E0  E8 5B A8 05 00            CALL 0x006a5e40
LAB_0064b5e5:
0064B5E5  85 FF                     TEST EDI,EDI
0064B5E7  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
0064B5EE  0F 8E B2 00 00 00         JLE 0x0064b6a6
0064B5F4  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_0064b5f7:
0064B5F7  8A 03                     MOV AL,byte ptr [EBX]
0064B5F9  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0064B600  3C 04                     CMP AL,0x4
0064B602  74 55                     JZ 0x0064b659
0064B604  3C 01                     CMP AL,0x1
0064B606  74 49                     JZ 0x0064b651
0064B608  3C 05                     CMP AL,0x5
0064B60A  74 45                     JZ 0x0064b651
0064B60C  3C 02                     CMP AL,0x2
0064B60E  74 41                     JZ 0x0064b651
0064B610  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0064B613  0F BF 42 01               MOVSX EAX,word ptr [EDX + 0x1]
0064B617  50                        PUSH EAX
0064B618  E8 BE A1 DB FF            CALL 0x004057db
0064B61D  85 C0                     TEST EAX,EAX
0064B61F  74 0F                     JZ 0x0064b630
0064B621  6A 7F                     PUSH 0x7f
0064B623  50                        PUSH EAX
0064B624  8D 46 04                  LEA EAX,[ESI + 0x4]
0064B627  50                        PUSH EAX
0064B628  E8 13 2D 0E 00            CALL 0x0072e340
0064B62D  83 C4 0C                  ADD ESP,0xc
LAB_0064b630:
0064B630  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064B63A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064B640  6A 79                     PUSH 0x79
0064B642  68 24 2A 7D 00            PUSH 0x7d2a24
0064B647  51                        PUSH ECX
0064B648  6A 88                     PUSH -0x78
0064B64A  E8 F1 A7 05 00            CALL 0x006a5e40
0064B64F  EB 3A                     JMP 0x0064b68b
LAB_0064b651:
0064B651  3C 04                     CMP AL,0x4
0064B653  74 04                     JZ 0x0064b659
0064B655  3C 01                     CMP AL,0x1
0064B657  75 0A                     JNZ 0x0064b663
LAB_0064b659:
0064B659  8B 16                     MOV EDX,dword ptr [ESI]
0064B65B  53                        PUSH EBX
0064B65C  8B CE                     MOV ECX,ESI
0064B65E  FF 12                     CALL dword ptr [EDX]
0064B660  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0064b663:
0064B663  8A 03                     MOV AL,byte ptr [EBX]
0064B665  3C 05                     CMP AL,0x5
0064B667  74 04                     JZ 0x0064b66d
0064B669  3C 02                     CMP AL,0x2
0064B66B  75 1E                     JNZ 0x0064b68b
LAB_0064b66d:
0064B66D  8B 06                     MOV EAX,dword ptr [ESI]
0064B66F  53                        PUSH EBX
0064B670  8B CE                     MOV ECX,ESI
0064B672  FF 50 04                  CALL dword ptr [EAX + 0x4]
0064B675  83 EC 08                  SUB ESP,0x8
0064B678  DD 1C 24                  FSTP double ptr [ESP]
0064B67B  E8 D0 4D 0E 00            CALL 0x00730450
0064B680  83 C4 08                  ADD ESP,0x8
0064B683  E8 00 2C 0E 00            CALL 0x0072e288
0064B688  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0064b68b:
0064B68B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0064B68E  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0064B691  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0064B694  03 D1                     ADD EDX,ECX
0064B696  83 C3 05                  ADD EBX,0x5
0064B699  48                        DEC EAX
0064B69A  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0064B69D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0064B6A0  0F 85 51 FF FF FF         JNZ 0x0064b5f7
LAB_0064b6a6:
0064B6A6  6A 04                     PUSH 0x4
0064B6A8  E8 63 F5 05 00            CALL 0x006aac10
0064B6AD  8B C8                     MOV ECX,EAX
0064B6AF  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0064B6B2  99                        CDQ
0064B6B3  F7 FF                     IDIV EDI
0064B6B5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0064B6B8  89 01                     MOV dword ptr [ECX],EAX
0064B6BA  E9 B0 FC FF FF            JMP 0x0064b36f
switchD_0064aa67::caseD_3:
0064B6BF  83 FF 02                  CMP EDI,0x2
0064B6C2  74 18                     JZ 0x0064b6dc
0064B6C4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064B6CA  68 31 01 00 00            PUSH 0x131
0064B6CF  68 04 2A 7D 00            PUSH 0x7d2a04
0064B6D4  52                        PUSH EDX
0064B6D5  6A 95                     PUSH -0x6b
0064B6D7  E8 64 A7 05 00            CALL 0x006a5e40
LAB_0064b6dc:
0064B6DC  8A 03                     MOV AL,byte ptr [EBX]
0064B6DE  3C 04                     CMP AL,0x4
0064B6E0  74 04                     JZ 0x0064b6e6
0064B6E2  3C 01                     CMP AL,0x1
0064B6E4  75 0E                     JNZ 0x0064b6f4
LAB_0064b6e6:
0064B6E6  8A 43 05                  MOV AL,byte ptr [EBX + 0x5]
0064B6E9  8D 7B 05                  LEA EDI,[EBX + 0x5]
0064B6EC  3C 04                     CMP AL,0x4
0064B6EE  74 43                     JZ 0x0064b733
0064B6F0  3C 01                     CMP AL,0x1
0064B6F2  74 3F                     JZ 0x0064b733
LAB_0064b6f4:
0064B6F4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064B6F7  0F BF 48 01               MOVSX ECX,word ptr [EAX + 0x1]
0064B6FB  51                        PUSH ECX
0064B6FC  E8 DA A0 DB FF            CALL 0x004057db
0064B701  85 C0                     TEST EAX,EAX
0064B703  74 0F                     JZ 0x0064b714
0064B705  6A 7F                     PUSH 0x7f
0064B707  50                        PUSH EAX
0064B708  8D 46 04                  LEA EAX,[ESI + 0x4]
0064B70B  50                        PUSH EAX
0064B70C  E8 2F 2C 0E 00            CALL 0x0072e340
0064B711  83 C4 0C                  ADD ESP,0xc
LAB_0064b714:
0064B714  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064B71E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064B724  6A 79                     PUSH 0x79
0064B726  68 24 2A 7D 00            PUSH 0x7d2a24
0064B72B  52                        PUSH EDX
0064B72C  6A 8A                     PUSH -0x76
0064B72E  E9 71 0B 00 00            JMP 0x0064c2a4
LAB_0064b733:
0064B733  8B 06                     MOV EAX,dword ptr [ESI]
0064B735  53                        PUSH EBX
0064B736  8B CE                     MOV ECX,ESI
0064B738  FF 10                     CALL dword ptr [EAX]
0064B73A  8B 16                     MOV EDX,dword ptr [ESI]
0064B73C  57                        PUSH EDI
0064B73D  8B CE                     MOV ECX,ESI
0064B73F  8B D8                     MOV EBX,EAX
0064B741  FF 12                     CALL dword ptr [EDX]
0064B743  6A 04                     PUSH 0x4
0064B745  8B F0                     MOV ESI,EAX
0064B747  E8 C4 F4 05 00            CALL 0x006aac10
0064B74C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064B74F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064B752  0F BF 49 01               MOVSX ECX,word ptr [ECX + 0x1]
0064B756  83 F9 03                  CMP ECX,0x3
0064B759  74 4D                     JZ 0x0064b7a8
0064B75B  83 F9 34                  CMP ECX,0x34
0064B75E  74 37                     JZ 0x0064b797
0064B760  83 F9 43                  CMP ECX,0x43
0064B763  74 16                     JZ 0x0064b77b
0064B765  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064B76B  68 39 01 00 00            PUSH 0x139
0064B770  68 04 2A 7D 00            PUSH 0x7d2a04
0064B775  52                        PUSH EDX
0064B776  E9 ED FB FF FF            JMP 0x0064b368
LAB_0064b77b:
0064B77B  85 DB                     TEST EBX,EBX
0064B77D  75 08                     JNZ 0x0064b787
0064B77F  85 F6                     TEST ESI,ESI
0064B781  75 08                     JNZ 0x0064b78b
0064B783  85 DB                     TEST EBX,EBX
0064B785  74 18                     JZ 0x0064b79f
LAB_0064b787:
0064B787  85 F6                     TEST ESI,ESI
0064B789  75 14                     JNZ 0x0064b79f
LAB_0064b78b:
0064B78B  B9 01 00 00 00            MOV ECX,0x1
0064B790  89 08                     MOV dword ptr [EAX],ECX
0064B792  E9 D8 FB FF FF            JMP 0x0064b36f
LAB_0064b797:
0064B797  85 DB                     TEST EBX,EBX
0064B799  75 F0                     JNZ 0x0064b78b
0064B79B  85 F6                     TEST ESI,ESI
0064B79D  75 EC                     JNZ 0x0064b78b
LAB_0064b79f:
0064B79F  33 C9                     XOR ECX,ECX
0064B7A1  89 08                     MOV dword ptr [EAX],ECX
0064B7A3  E9 C7 FB FF FF            JMP 0x0064b36f
LAB_0064b7a8:
0064B7A8  85 DB                     TEST EBX,EBX
0064B7AA  74 F3                     JZ 0x0064b79f
0064B7AC  85 F6                     TEST ESI,ESI
0064B7AE  74 EF                     JZ 0x0064b79f
0064B7B0  B9 01 00 00 00            MOV ECX,0x1
0064B7B5  89 08                     MOV dword ptr [EAX],ECX
0064B7B7  E9 B3 FB FF FF            JMP 0x0064b36f
LAB_0064b7bc:
0064B7BC  83 FF 01                  CMP EDI,0x1
0064B7BF  74 17                     JZ 0x0064b7d8
0064B7C1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064B7C6  68 DF 00 00 00            PUSH 0xdf
0064B7CB  68 04 2A 7D 00            PUSH 0x7d2a04
0064B7D0  50                        PUSH EAX
0064B7D1  6A 95                     PUSH -0x6b
0064B7D3  E8 68 A6 05 00            CALL 0x006a5e40
LAB_0064b7d8:
0064B7D8  8A 03                     MOV AL,byte ptr [EBX]
0064B7DA  3C 04                     CMP AL,0x4
0064B7DC  74 68                     JZ 0x0064b846
0064B7DE  3C 01                     CMP AL,0x1
0064B7E0  74 64                     JZ 0x0064b846
0064B7E2  3C 05                     CMP AL,0x5
0064B7E4  74 42                     JZ 0x0064b828
0064B7E6  3C 02                     CMP AL,0x2
0064B7E8  74 3E                     JZ 0x0064b828
LAB_0064b7ea:
0064B7EA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064B7ED  0F BF 51 01               MOVSX EDX,word ptr [ECX + 0x1]
0064B7F1  52                        PUSH EDX
0064B7F2  E8 E4 9F DB FF            CALL 0x004057db
0064B7F7  85 C0                     TEST EAX,EAX
0064B7F9  74 0F                     JZ 0x0064b80a
0064B7FB  6A 7F                     PUSH 0x7f
0064B7FD  50                        PUSH EAX
0064B7FE  8D 46 04                  LEA EAX,[ESI + 0x4]
0064B801  50                        PUSH EAX
0064B802  E8 39 2B 0E 00            CALL 0x0072e340
0064B807  83 C4 0C                  ADD ESP,0xc
LAB_0064b80a:
0064B80A  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064B814  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064B819  6A 79                     PUSH 0x79
0064B81B  68 24 2A 7D 00            PUSH 0x7d2a24
0064B820  50                        PUSH EAX
0064B821  6A 8A                     PUSH -0x76
0064B823  E9 7C 0A 00 00            JMP 0x0064c2a4
LAB_0064b828:
0064B828  6A 04                     PUSH 0x4
0064B82A  E8 E1 F3 05 00            CALL 0x006aac10
0064B82F  8B 16                     MOV EDX,dword ptr [ESI]
0064B831  53                        PUSH EBX
0064B832  8B CE                     MOV ECX,ESI
0064B834  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064B837  FF 52 04                  CALL dword ptr [EDX + 0x4]
0064B83A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064B83D  D9 E0                     FCHS
0064B83F  D9 18                     FSTP float ptr [EAX]
0064B841  E9 29 FB FF FF            JMP 0x0064b36f
LAB_0064b846:
0064B846  6A 04                     PUSH 0x4
0064B848  E8 C3 F3 05 00            CALL 0x006aac10
0064B84D  8B 16                     MOV EDX,dword ptr [ESI]
0064B84F  53                        PUSH EBX
0064B850  8B CE                     MOV ECX,ESI
0064B852  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064B855  FF 12                     CALL dword ptr [EDX]
0064B857  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064B85A  F7 D8                     NEG EAX
0064B85C  89 01                     MOV dword ptr [ECX],EAX
0064B85E  E9 0C FB FF FF            JMP 0x0064b36f
LAB_0064b863:
0064B863  83 FF 01                  CMP EDI,0x1
0064B866  7D 18                     JGE 0x0064b880
0064B868  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064B86E  68 06 02 00 00            PUSH 0x206
0064B873  68 04 2A 7D 00            PUSH 0x7d2a04
0064B878  52                        PUSH EDX
0064B879  6A 95                     PUSH -0x6b
0064B87B  E8 C0 A5 05 00            CALL 0x006a5e40
LAB_0064b880:
0064B880  85 FF                     TEST EDI,EDI
0064B882  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
0064B889  0F 8E 9A 00 00 00         JLE 0x0064b929
LAB_0064b88f:
0064B88F  8A 03                     MOV AL,byte ptr [EBX]
0064B891  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0064B898  3C 04                     CMP AL,0x4
0064B89A  74 55                     JZ 0x0064b8f1
0064B89C  3C 01                     CMP AL,0x1
0064B89E  74 49                     JZ 0x0064b8e9
0064B8A0  3C 05                     CMP AL,0x5
0064B8A2  74 45                     JZ 0x0064b8e9
0064B8A4  3C 02                     CMP AL,0x2
0064B8A6  74 41                     JZ 0x0064b8e9
0064B8A8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064B8AB  0F BF 48 01               MOVSX ECX,word ptr [EAX + 0x1]
0064B8AF  51                        PUSH ECX
0064B8B0  E8 26 9F DB FF            CALL 0x004057db
0064B8B5  85 C0                     TEST EAX,EAX
0064B8B7  74 0F                     JZ 0x0064b8c8
0064B8B9  6A 7F                     PUSH 0x7f
0064B8BB  50                        PUSH EAX
0064B8BC  8D 46 04                  LEA EAX,[ESI + 0x4]
0064B8BF  50                        PUSH EAX
0064B8C0  E8 7B 2A 0E 00            CALL 0x0072e340
0064B8C5  83 C4 0C                  ADD ESP,0xc
LAB_0064b8c8:
0064B8C8  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064B8D2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064B8D8  6A 79                     PUSH 0x79
0064B8DA  68 24 2A 7D 00            PUSH 0x7d2a24
0064B8DF  52                        PUSH EDX
0064B8E0  6A 88                     PUSH -0x78
0064B8E2  E8 59 A5 05 00            CALL 0x006a5e40
0064B8E7  EB 2D                     JMP 0x0064b916
LAB_0064b8e9:
0064B8E9  3C 04                     CMP AL,0x4
0064B8EB  74 04                     JZ 0x0064b8f1
0064B8ED  3C 01                     CMP AL,0x1
0064B8EF  75 10                     JNZ 0x0064b901
LAB_0064b8f1:
0064B8F1  8B 06                     MOV EAX,dword ptr [ESI]
0064B8F3  53                        PUSH EBX
0064B8F4  8B CE                     MOV ECX,ESI
0064B8F6  FF 10                     CALL dword ptr [EAX]
0064B8F8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0064B8FB  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0064B8FE  D9 5D F8                  FSTP float ptr [EBP + -0x8]
LAB_0064b901:
0064B901  8A 03                     MOV AL,byte ptr [EBX]
0064B903  3C 05                     CMP AL,0x5
0064B905  74 04                     JZ 0x0064b90b
0064B907  3C 02                     CMP AL,0x2
0064B909  75 0B                     JNZ 0x0064b916
LAB_0064b90b:
0064B90B  8B 16                     MOV EDX,dword ptr [ESI]
0064B90D  53                        PUSH EBX
0064B90E  8B CE                     MOV ECX,ESI
0064B910  FF 52 04                  CALL dword ptr [EDX + 0x4]
0064B913  D9 5D F8                  FSTP float ptr [EBP + -0x8]
LAB_0064b916:
0064B916  D9 45 F8                  FLD float ptr [EBP + -0x8]
0064B919  D8 45 DC                  FADD float ptr [EBP + -0x24]
0064B91C  83 C3 05                  ADD EBX,0x5
0064B91F  4F                        DEC EDI
0064B920  D9 5D DC                  FSTP float ptr [EBP + -0x24]
0064B923  0F 85 66 FF FF FF         JNZ 0x0064b88f
LAB_0064b929:
0064B929  6A 04                     PUSH 0x4
0064B92B  E8 E0 F2 05 00            CALL 0x006aac10
0064B930  DB 45 0C                  FILD dword ptr [EBP + 0xc]
0064B933  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064B936  D8 7D DC                  FDIVR float ptr [EBP + -0x24]
0064B939  D9 18                     FSTP float ptr [EAX]
0064B93B  E9 51 F9 FF FF            JMP 0x0064b291
LAB_0064b940:
0064B940  8B C8                     MOV ECX,EAX
0064B942  81 E9 86 03 00 00         SUB ECX,0x386
0064B948  0F 84 73 01 00 00         JZ 0x0064bac1
0064B94E  49                        DEC ECX
0064B94F  0F 84 B9 00 00 00         JZ 0x0064ba0e
0064B955  49                        DEC ECX
0064B956  0F 85 15 09 00 00         JNZ 0x0064c271
0064B95C  83 FF 02                  CMP EDI,0x2
0064B95F  74 17                     JZ 0x0064b978
0064B961  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064B966  68 AC 01 00 00            PUSH 0x1ac
0064B96B  68 04 2A 7D 00            PUSH 0x7d2a04
0064B970  50                        PUSH EAX
0064B971  6A 95                     PUSH -0x6b
0064B973  E8 C8 A4 05 00            CALL 0x006a5e40
LAB_0064b978:
0064B978  8A 03                     MOV AL,byte ptr [EBX]
0064B97A  3C 04                     CMP AL,0x4
0064B97C  74 04                     JZ 0x0064b982
0064B97E  3C 01                     CMP AL,0x1
0064B980  75 0E                     JNZ 0x0064b990
LAB_0064b982:
0064B982  8A 43 05                  MOV AL,byte ptr [EBX + 0x5]
0064B985  8D 7B 05                  LEA EDI,[EBX + 0x5]
0064B988  3C 04                     CMP AL,0x4
0064B98A  74 42                     JZ 0x0064b9ce
0064B98C  3C 01                     CMP AL,0x1
0064B98E  74 3E                     JZ 0x0064b9ce
LAB_0064b990:
0064B990  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064B993  0F BF 51 01               MOVSX EDX,word ptr [ECX + 0x1]
0064B997  52                        PUSH EDX
0064B998  E8 3E 9E DB FF            CALL 0x004057db
0064B99D  85 C0                     TEST EAX,EAX
0064B99F  74 0F                     JZ 0x0064b9b0
0064B9A1  6A 7F                     PUSH 0x7f
0064B9A3  50                        PUSH EAX
0064B9A4  8D 46 04                  LEA EAX,[ESI + 0x4]
0064B9A7  50                        PUSH EAX
0064B9A8  E8 93 29 0E 00            CALL 0x0072e340
0064B9AD  83 C4 0C                  ADD ESP,0xc
LAB_0064b9b0:
0064B9B0  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064B9BA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064B9BF  6A 79                     PUSH 0x79
0064B9C1  68 24 2A 7D 00            PUSH 0x7d2a24
0064B9C6  50                        PUSH EAX
0064B9C7  6A 88                     PUSH -0x78
0064B9C9  E9 D6 08 00 00            JMP 0x0064c2a4
LAB_0064b9ce:
0064B9CE  8B 16                     MOV EDX,dword ptr [ESI]
0064B9D0  53                        PUSH EBX
0064B9D1  8B CE                     MOV ECX,ESI
0064B9D3  FF 12                     CALL dword ptr [EDX]
0064B9D5  8B D8                     MOV EBX,EAX
0064B9D7  8B 06                     MOV EAX,dword ptr [ESI]
0064B9D9  57                        PUSH EDI
0064B9DA  8B CE                     MOV ECX,ESI
0064B9DC  FF 10                     CALL dword ptr [EAX]
0064B9DE  8B F0                     MOV ESI,EAX
0064B9E0  83 FE 02                  CMP ESI,0x2
0064B9E3  7D 05                     JGE 0x0064b9ea
0064B9E5  BE 02 00 00 00            MOV ESI,0x2
LAB_0064b9ea:
0064B9EA  83 FE 24                  CMP ESI,0x24
0064B9ED  7E 05                     JLE 0x0064b9f4
0064B9EF  BE 24 00 00 00            MOV ESI,0x24
LAB_0064b9f4:
0064B9F4  6A 40                     PUSH 0x40
0064B9F6  E8 15 F2 05 00            CALL 0x006aac10
0064B9FB  56                        PUSH ESI
0064B9FC  50                        PUSH EAX
0064B9FD  53                        PUSH EBX
0064B9FE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064BA01  E8 5A 24 0E 00            CALL 0x0072de60
0064BA06  83 C4 0C                  ADD ESP,0xc
0064BA09  E9 A3 01 00 00            JMP 0x0064bbb1
LAB_0064ba0e:
0064BA0E  83 FF 01                  CMP EDI,0x1
0064BA11  74 18                     JZ 0x0064ba2b
0064BA13  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064BA19  68 9D 01 00 00            PUSH 0x19d
0064BA1E  68 04 2A 7D 00            PUSH 0x7d2a04
0064BA23  51                        PUSH ECX
0064BA24  6A 95                     PUSH -0x6b
0064BA26  E8 15 A4 05 00            CALL 0x006a5e40
LAB_0064ba2b:
0064BA2B  8A 03                     MOV AL,byte ptr [EBX]
0064BA2D  3C 06                     CMP AL,0x6
0064BA2F  74 43                     JZ 0x0064ba74
0064BA31  3C 03                     CMP AL,0x3
0064BA33  74 3F                     JZ 0x0064ba74
0064BA35  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0064BA38  0F BF 42 01               MOVSX EAX,word ptr [EDX + 0x1]
0064BA3C  50                        PUSH EAX
0064BA3D  E8 99 9D DB FF            CALL 0x004057db
0064BA42  85 C0                     TEST EAX,EAX
0064BA44  74 0F                     JZ 0x0064ba55
0064BA46  6A 7F                     PUSH 0x7f
0064BA48  50                        PUSH EAX
0064BA49  8D 46 04                  LEA EAX,[ESI + 0x4]
0064BA4C  50                        PUSH EAX
0064BA4D  E8 EE 28 0E 00            CALL 0x0072e340
0064BA52  83 C4 0C                  ADD ESP,0xc
LAB_0064ba55:
0064BA55  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064BA5F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064BA65  6A 79                     PUSH 0x79
0064BA67  68 24 2A 7D 00            PUSH 0x7d2a24
0064BA6C  51                        PUSH ECX
0064BA6D  6A 88                     PUSH -0x78
0064BA6F  E9 30 08 00 00            JMP 0x0064c2a4
LAB_0064ba74:
0064BA74  8B 16                     MOV EDX,dword ptr [ESI]
0064BA76  53                        PUSH EBX
0064BA77  8B CE                     MOV ECX,ESI
0064BA79  FF 52 08                  CALL dword ptr [EDX + 0x8]
0064BA7C  8B F0                     MOV ESI,EAX
0064BA7E  85 F6                     TEST ESI,ESI
0064BA80  75 17                     JNZ 0x0064ba99
0064BA82  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064BA87  68 A0 01 00 00            PUSH 0x1a0
0064BA8C  68 04 2A 7D 00            PUSH 0x7d2a04
0064BA91  50                        PUSH EAX
0064BA92  6A 95                     PUSH -0x6b
0064BA94  E8 A7 A3 05 00            CALL 0x006a5e40
LAB_0064ba99:
0064BA99  6A 04                     PUSH 0x4
0064BA9B  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0064BAA2  E8 69 F1 05 00            CALL 0x006aac10
0064BAA7  8D 4D EC                  LEA ECX,[EBP + -0x14]
0064BAAA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064BAAD  51                        PUSH ECX
0064BAAE  56                        PUSH ESI
0064BAAF  E8 5C 48 0E 00            CALL 0x00730310
0064BAB4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0064BAB7  83 C4 08                  ADD ESP,0x8
0064BABA  D9 1A                     FSTP float ptr [EDX]
0064BABC  E9 D0 F7 FF FF            JMP 0x0064b291
LAB_0064bac1:
0064BAC1  83 FF 01                  CMP EDI,0x1
0064BAC4  74 17                     JZ 0x0064badd
0064BAC6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064BACB  68 8F 01 00 00            PUSH 0x18f
0064BAD0  68 04 2A 7D 00            PUSH 0x7d2a04
0064BAD5  50                        PUSH EAX
0064BAD6  6A 95                     PUSH -0x6b
0064BAD8  E8 63 A3 05 00            CALL 0x006a5e40
LAB_0064badd:
0064BADD  8A 03                     MOV AL,byte ptr [EBX]
0064BADF  3C 06                     CMP AL,0x6
0064BAE1  74 08                     JZ 0x0064baeb
0064BAE3  3C 03                     CMP AL,0x3
0064BAE5  0F 85 A5 FE FF FF         JNZ 0x0064b990
LAB_0064baeb:
0064BAEB  8B 16                     MOV EDX,dword ptr [ESI]
0064BAED  53                        PUSH EBX
0064BAEE  8B CE                     MOV ECX,ESI
0064BAF0  FF 52 08                  CALL dword ptr [EDX + 0x8]
0064BAF3  8B F0                     MOV ESI,EAX
0064BAF5  85 F6                     TEST ESI,ESI
0064BAF7  75 17                     JNZ 0x0064bb10
0064BAF9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064BAFE  68 92 01 00 00            PUSH 0x192
0064BB03  68 04 2A 7D 00            PUSH 0x7d2a04
0064BB08  50                        PUSH EAX
0064BB09  6A 95                     PUSH -0x6b
0064BB0B  E8 30 A3 05 00            CALL 0x006a5e40
LAB_0064bb10:
0064BB10  6A 04                     PUSH 0x4
0064BB12  E8 F9 F0 05 00            CALL 0x006aac10
0064BB17  56                        PUSH ESI
0064BB18  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064BB1B  E8 E0 43 0E 00            CALL 0x0072ff00
0064BB20  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064BB23  83 C4 04                  ADD ESP,0x4
0064BB26  89 01                     MOV dword ptr [ECX],EAX
0064BB28  E9 42 F8 FF FF            JMP 0x0064b36f
LAB_0064bb2d:
0064BB2D  83 FF 02                  CMP EDI,0x2
0064BB30  74 18                     JZ 0x0064bb4a
0064BB32  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064BB38  68 BB 01 00 00            PUSH 0x1bb
0064BB3D  68 04 2A 7D 00            PUSH 0x7d2a04
0064BB42  52                        PUSH EDX
0064BB43  6A 95                     PUSH -0x6b
0064BB45  E8 F6 A2 05 00            CALL 0x006a5e40
LAB_0064bb4a:
0064BB4A  8A 03                     MOV AL,byte ptr [EBX]
0064BB4C  3C 05                     CMP AL,0x5
0064BB4E  74 08                     JZ 0x0064bb58
0064BB50  3C 02                     CMP AL,0x2
0064BB52  0F 85 DB 01 00 00         JNZ 0x0064bd33
LAB_0064bb58:
0064BB58  8A 43 05                  MOV AL,byte ptr [EBX + 0x5]
0064BB5B  8D 7B 05                  LEA EDI,[EBX + 0x5]
0064BB5E  3C 04                     CMP AL,0x4
0064BB60  74 08                     JZ 0x0064bb6a
0064BB62  3C 01                     CMP AL,0x1
0064BB64  0F 85 C9 01 00 00         JNZ 0x0064bd33
LAB_0064bb6a:
0064BB6A  8B 06                     MOV EAX,dword ptr [ESI]
0064BB6C  53                        PUSH EBX
0064BB6D  8B CE                     MOV ECX,ESI
0064BB6F  FF 50 04                  CALL dword ptr [EAX + 0x4]
0064BB72  8B 16                     MOV EDX,dword ptr [ESI]
0064BB74  57                        PUSH EDI
0064BB75  D9 5D EC                  FSTP float ptr [EBP + -0x14]
0064BB78  8B CE                     MOV ECX,ESI
0064BB7A  FF 12                     CALL dword ptr [EDX]
0064BB7C  8B F0                     MOV ESI,EAX
0064BB7E  83 FE 02                  CMP ESI,0x2
0064BB81  7D 05                     JGE 0x0064bb88
0064BB83  BE 02 00 00 00            MOV ESI,0x2
LAB_0064bb88:
0064BB88  83 FE 40                  CMP ESI,0x40
0064BB8B  7E 05                     JLE 0x0064bb92
0064BB8D  BE 40 00 00 00            MOV ESI,0x40
LAB_0064bb92:
0064BB92  8D 46 0A                  LEA EAX,[ESI + 0xa]
0064BB95  50                        PUSH EAX
0064BB96  E8 75 F0 05 00            CALL 0x006aac10
0064BB9B  D9 45 EC                  FLD float ptr [EBP + -0x14]
0064BB9E  50                        PUSH EAX
0064BB9F  56                        PUSH ESI
0064BBA0  83 EC 08                  SUB ESP,0x8
0064BBA3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064BBA6  DD 1C 24                  FSTP double ptr [ESP]
0064BBA9  E8 32 46 0E 00            CALL 0x007301e0
0064BBAE  83 C4 10                  ADD ESP,0x10
LAB_0064bbb1:
0064BBB1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0064BBB4  85 C0                     TEST EAX,EAX
0064BBB6  0F 84 ED 06 00 00         JZ 0x0064c2a9
0064BBBC  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
0064BBC2  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0064BBC8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064BBCD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064BBD0  5F                        POP EDI
0064BBD1  5E                        POP ESI
0064BBD2  5B                        POP EBX
0064BBD3  8B E5                     MOV ESP,EBP
0064BBD5  5D                        POP EBP
0064BBD6  C2 0C 00                  RET 0xc
LAB_0064bbd9:
0064BBD9  8D 88 76 FC FF FF         LEA ECX,[EAX + 0xfffffc76]
0064BBDF  83 F9 05                  CMP ECX,0x5
0064BBE2  0F 87 89 06 00 00         JA 0x0064c271
switchD_0064bbe8::switchD:
0064BBE8  FF 24 8D 60 C5 64 00      JMP dword ptr [ECX*0x4 + 0x64c560]
switchD_0064bbe8::caseD_38a:
0064BBEF  83 FF 01                  CMP EDI,0x1
0064BBF2  74 18                     JZ 0x0064bc0c
0064BBF4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064BBFA  68 CA 01 00 00            PUSH 0x1ca
0064BBFF  68 04 2A 7D 00            PUSH 0x7d2a04
0064BC04  51                        PUSH ECX
0064BC05  6A 95                     PUSH -0x6b
0064BC07  E8 34 A2 05 00            CALL 0x006a5e40
LAB_0064bc0c:
0064BC0C  8A 03                     MOV AL,byte ptr [EBX]
0064BC0E  3C 04                     CMP AL,0x4
0064BC10  74 43                     JZ 0x0064bc55
0064BC12  3C 01                     CMP AL,0x1
0064BC14  74 3F                     JZ 0x0064bc55
0064BC16  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0064BC19  0F BF 42 01               MOVSX EAX,word ptr [EDX + 0x1]
0064BC1D  50                        PUSH EAX
0064BC1E  E8 B8 9B DB FF            CALL 0x004057db
0064BC23  85 C0                     TEST EAX,EAX
0064BC25  74 0F                     JZ 0x0064bc36
0064BC27  6A 7F                     PUSH 0x7f
0064BC29  50                        PUSH EAX
0064BC2A  8D 46 04                  LEA EAX,[ESI + 0x4]
0064BC2D  50                        PUSH EAX
0064BC2E  E8 0D 27 0E 00            CALL 0x0072e340
0064BC33  83 C4 0C                  ADD ESP,0xc
LAB_0064bc36:
0064BC36  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064BC40  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064BC46  6A 79                     PUSH 0x79
0064BC48  68 24 2A 7D 00            PUSH 0x7d2a24
0064BC4D  51                        PUSH ECX
0064BC4E  6A 88                     PUSH -0x78
0064BC50  E9 4F 06 00 00            JMP 0x0064c2a4
LAB_0064bc55:
0064BC55  8B 16                     MOV EDX,dword ptr [ESI]
0064BC57  53                        PUSH EBX
0064BC58  8B CE                     MOV ECX,ESI
0064BC5A  FF 12                     CALL dword ptr [EDX]
0064BC5C  6A 04                     PUSH 0x4
0064BC5E  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0064BC61  E8 AA EF 05 00            CALL 0x006aac10
0064BC66  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0064BC69  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064BC6C  D9 18                     FSTP float ptr [EAX]
0064BC6E  E9 1E F6 FF FF            JMP 0x0064b291
switchD_0064bbe8::caseD_38b:
0064BC73  83 FF 01                  CMP EDI,0x1
0064BC76  74 17                     JZ 0x0064bc8f
0064BC78  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064BC7D  68 D8 01 00 00            PUSH 0x1d8
0064BC82  68 04 2A 7D 00            PUSH 0x7d2a04
0064BC87  50                        PUSH EAX
0064BC88  6A 95                     PUSH -0x6b
0064BC8A  E8 B1 A1 05 00            CALL 0x006a5e40
LAB_0064bc8f:
0064BC8F  8A 03                     MOV AL,byte ptr [EBX]
0064BC91  3C 05                     CMP AL,0x5
0064BC93  74 42                     JZ 0x0064bcd7
0064BC95  3C 02                     CMP AL,0x2
0064BC97  74 3E                     JZ 0x0064bcd7
0064BC99  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064BC9C  0F BF 51 01               MOVSX EDX,word ptr [ECX + 0x1]
0064BCA0  52                        PUSH EDX
0064BCA1  E8 35 9B DB FF            CALL 0x004057db
0064BCA6  85 C0                     TEST EAX,EAX
0064BCA8  74 0F                     JZ 0x0064bcb9
0064BCAA  6A 7F                     PUSH 0x7f
0064BCAC  50                        PUSH EAX
0064BCAD  8D 46 04                  LEA EAX,[ESI + 0x4]
0064BCB0  50                        PUSH EAX
0064BCB1  E8 8A 26 0E 00            CALL 0x0072e340
0064BCB6  83 C4 0C                  ADD ESP,0xc
LAB_0064bcb9:
0064BCB9  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064BCC3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064BCC8  6A 79                     PUSH 0x79
0064BCCA  68 24 2A 7D 00            PUSH 0x7d2a24
0064BCCF  50                        PUSH EAX
0064BCD0  6A 88                     PUSH -0x78
0064BCD2  E9 CD 05 00 00            JMP 0x0064c2a4
LAB_0064bcd7:
0064BCD7  8B 16                     MOV EDX,dword ptr [ESI]
0064BCD9  53                        PUSH EBX
0064BCDA  8B CE                     MOV ECX,ESI
0064BCDC  FF 52 04                  CALL dword ptr [EDX + 0x4]
0064BCDF  D9 5D EC                  FSTP float ptr [EBP + -0x14]
0064BCE2  6A 04                     PUSH 0x4
0064BCE4  E8 27 EF 05 00            CALL 0x006aac10
0064BCE9  D9 45 EC                  FLD float ptr [EBP + -0x14]
0064BCEC  83 EC 08                  SUB ESP,0x8
0064BCEF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064BCF2  DD 1C 24                  FSTP double ptr [ESP]
0064BCF5  E8 56 24 0E 00            CALL 0x0072e150
0064BCFA  83 C4 08                  ADD ESP,0x8
0064BCFD  E8 86 25 0E 00            CALL 0x0072e288
0064BD02  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064BD05  89 01                     MOV dword ptr [ECX],EAX
0064BD07  E9 63 F6 FF FF            JMP 0x0064b36f
switchD_0064bbe8::caseD_38c:
0064BD0C  83 FF 01                  CMP EDI,0x1
0064BD0F  74 18                     JZ 0x0064bd29
0064BD11  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064BD17  68 E6 01 00 00            PUSH 0x1e6
0064BD1C  68 04 2A 7D 00            PUSH 0x7d2a04
0064BD21  52                        PUSH EDX
0064BD22  6A 95                     PUSH -0x6b
0064BD24  E8 17 A1 05 00            CALL 0x006a5e40
LAB_0064bd29:
0064BD29  8A 03                     MOV AL,byte ptr [EBX]
0064BD2B  3C 05                     CMP AL,0x5
0064BD2D  74 43                     JZ 0x0064bd72
0064BD2F  3C 02                     CMP AL,0x2
0064BD31  74 3F                     JZ 0x0064bd72
LAB_0064bd33:
0064BD33  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064BD36  0F BF 48 01               MOVSX ECX,word ptr [EAX + 0x1]
0064BD3A  51                        PUSH ECX
0064BD3B  E8 9B 9A DB FF            CALL 0x004057db
0064BD40  85 C0                     TEST EAX,EAX
0064BD42  74 0F                     JZ 0x0064bd53
0064BD44  6A 7F                     PUSH 0x7f
0064BD46  50                        PUSH EAX
0064BD47  8D 46 04                  LEA EAX,[ESI + 0x4]
0064BD4A  50                        PUSH EAX
0064BD4B  E8 F0 25 0E 00            CALL 0x0072e340
0064BD50  83 C4 0C                  ADD ESP,0xc
LAB_0064bd53:
0064BD53  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064BD5D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064BD63  6A 79                     PUSH 0x79
0064BD65  68 24 2A 7D 00            PUSH 0x7d2a24
0064BD6A  52                        PUSH EDX
0064BD6B  6A 88                     PUSH -0x78
0064BD6D  E9 32 05 00 00            JMP 0x0064c2a4
LAB_0064bd72:
0064BD72  8B 06                     MOV EAX,dword ptr [ESI]
0064BD74  53                        PUSH EBX
0064BD75  8B CE                     MOV ECX,ESI
0064BD77  FF 50 04                  CALL dword ptr [EAX + 0x4]
0064BD7A  D9 5D EC                  FSTP float ptr [EBP + -0x14]
0064BD7D  6A 04                     PUSH 0x4
0064BD7F  E8 8C EE 05 00            CALL 0x006aac10
0064BD84  D9 45 EC                  FLD float ptr [EBP + -0x14]
0064BD87  83 EC 08                  SUB ESP,0x8
0064BD8A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064BD8D  DD 1C 24                  FSTP double ptr [ESP]
0064BD90  E8 BB 46 0E 00            CALL 0x00730450
0064BD95  83 C4 08                  ADD ESP,0x8
0064BD98  E8 EB 24 0E 00            CALL 0x0072e288
0064BD9D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064BDA0  89 01                     MOV dword ptr [ECX],EAX
0064BDA2  E9 C8 F5 FF FF            JMP 0x0064b36f
switchD_0064bbe8::caseD_38d:
0064BDA7  83 FF 02                  CMP EDI,0x2
0064BDAA  7D 18                     JGE 0x0064bdc4
0064BDAC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064BDB2  68 18 02 00 00            PUSH 0x218
0064BDB7  68 04 2A 7D 00            PUSH 0x7d2a04
0064BDBC  52                        PUSH EDX
0064BDBD  6A 95                     PUSH -0x6b
0064BDBF  E8 7C A0 05 00            CALL 0x006a5e40
LAB_0064bdc4:
0064BDC4  8A 03                     MOV AL,byte ptr [EBX]
0064BDC6  3C 06                     CMP AL,0x6
0064BDC8  74 43                     JZ 0x0064be0d
0064BDCA  3C 03                     CMP AL,0x3
0064BDCC  74 3F                     JZ 0x0064be0d
0064BDCE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064BDD1  0F BF 48 01               MOVSX ECX,word ptr [EAX + 0x1]
0064BDD5  51                        PUSH ECX
0064BDD6  E8 00 9A DB FF            CALL 0x004057db
0064BDDB  85 C0                     TEST EAX,EAX
0064BDDD  74 0F                     JZ 0x0064bdee
0064BDDF  6A 7F                     PUSH 0x7f
0064BDE1  50                        PUSH EAX
0064BDE2  8D 46 04                  LEA EAX,[ESI + 0x4]
0064BDE5  50                        PUSH EAX
0064BDE6  E8 55 25 0E 00            CALL 0x0072e340
0064BDEB  83 C4 0C                  ADD ESP,0xc
LAB_0064bdee:
0064BDEE  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064BDF8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064BDFE  6A 79                     PUSH 0x79
0064BE00  68 24 2A 7D 00            PUSH 0x7d2a24
0064BE05  52                        PUSH EDX
0064BE06  6A 88                     PUSH -0x78
0064BE08  E8 33 A0 05 00            CALL 0x006a5e40
LAB_0064be0d:
0064BE0D  8B 06                     MOV EAX,dword ptr [ESI]
0064BE0F  53                        PUSH EBX
0064BE10  8B CE                     MOV ECX,ESI
0064BE12  FF 50 08                  CALL dword ptr [EAX + 0x8]
0064BE15  85 C0                     TEST EAX,EAX
0064BE17  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0064BE1A  75 18                     JNZ 0x0064be34
0064BE1C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064BE22  68 1A 02 00 00            PUSH 0x21a
0064BE27  68 04 2A 7D 00            PUSH 0x7d2a04
0064BE2C  51                        PUSH ECX
0064BE2D  6A 95                     PUSH -0x6b
0064BE2F  E8 0C A0 05 00            CALL 0x006a5e40
LAB_0064be34:
0064BE34  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0064BE37  83 C9 FF                  OR ECX,0xffffffff
0064BE3A  33 C0                     XOR EAX,EAX
0064BE3C  68 00 02 00 00            PUSH 0x200
0064BE41  F2 AE                     SCASB.REPNE ES:EDI
0064BE43  F7 D1                     NOT ECX
0064BE45  41                        INC ECX
0064BE46  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0064BE4D  C7 45 DC 00 02 00 00      MOV dword ptr [EBP + -0x24],0x200
0064BE54  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0064BE57  E8 14 EE 05 00            CALL 0x006aac70
0064BE5C  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0064BE5F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0064BE62  83 F8 01                  CMP EAX,0x1
0064BE65  0F 8E E5 01 00 00         JLE 0x0064c050
0064BE6B  8B D0                     MOV EDX,EAX
0064BE6D  83 C3 05                  ADD EBX,0x5
0064BE70  BF 08 00 00 00            MOV EDI,0x8
0064BE75  4A                        DEC EDX
0064BE76  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0064BE79  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0064BE7C  C7 45 D8 04 00 00 00      MOV dword ptr [EBP + -0x28],0x4
0064BE83  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0064BE86  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0064BE89  EB 05                     JMP 0x0064be90
LAB_0064be8b:
0064BE8B  BF 08 00 00 00            MOV EDI,0x8
LAB_0064be90:
0064BE90  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0064BE93  8A 01                     MOV AL,byte ptr [ECX]
0064BE95  3C 06                     CMP AL,0x6
0064BE97  0F 84 1A 01 00 00         JZ 0x0064bfb7
0064BE9D  3C 03                     CMP AL,0x3
0064BE9F  0F 84 12 01 00 00         JZ 0x0064bfb7
0064BEA5  3C 04                     CMP AL,0x4
0064BEA7  0F 84 AB 00 00 00         JZ 0x0064bf58
0064BEAD  3C 01                     CMP AL,0x1
0064BEAF  0F 84 A3 00 00 00         JZ 0x0064bf58
0064BEB5  3C 05                     CMP AL,0x5
0064BEB7  74 48                     JZ 0x0064bf01
0064BEB9  3C 02                     CMP AL,0x2
0064BEBB  74 44                     JZ 0x0064bf01
0064BEBD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064BEC0  0F BF 48 01               MOVSX ECX,word ptr [EAX + 0x1]
0064BEC4  51                        PUSH ECX
0064BEC5  E8 11 99 DB FF            CALL 0x004057db
0064BECA  85 C0                     TEST EAX,EAX
0064BECC  74 0F                     JZ 0x0064bedd
0064BECE  6A 7F                     PUSH 0x7f
0064BED0  50                        PUSH EAX
0064BED1  8D 46 04                  LEA EAX,[ESI + 0x4]
0064BED4  50                        PUSH EAX
0064BED5  E8 66 24 0E 00            CALL 0x0072e340
0064BEDA  83 C4 0C                  ADD ESP,0xc
LAB_0064bedd:
0064BEDD  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064BEE7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064BEED  6A 79                     PUSH 0x79
0064BEEF  68 24 2A 7D 00            PUSH 0x7d2a24
0064BEF4  52                        PUSH EDX
0064BEF5  6A 88                     PUSH -0x78
0064BEF7  E8 44 9F 05 00            CALL 0x006a5e40
0064BEFC  E9 39 01 00 00            JMP 0x0064c03a
LAB_0064bf01:
0064BF01  8B 06                     MOV EAX,dword ptr [ESI]
0064BF03  51                        PUSH ECX
0064BF04  8B CE                     MOV ECX,ESI
0064BF06  FF 50 04                  CALL dword ptr [EAX + 0x4]
0064BF09  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0064BF0C  D9 5D D0                  FSTP float ptr [EBP + -0x30]
0064BF0F  3B C3                     CMP EAX,EBX
0064BF11  7C 16                     JL 0x0064bf29
0064BF13  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0064BF16  81 C3 00 02 00 00         ADD EBX,0x200
0064BF1C  53                        PUSH EBX
0064BF1D  51                        PUSH ECX
0064BF1E  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0064BF21  E8 2A 10 06 00            CALL 0x006acf50
0064BF26  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_0064bf29:
0064BF29  D9 45 D0                  FLD float ptr [EBP + -0x30]
0064BF2C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0064BF2F  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0064BF32  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0064BF35  DD 1C 10                  FSTP double ptr [EAX + EDX*0x1]
0064BF38  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0064BF3B  03 C7                     ADD EAX,EDI
0064BF3D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0064BF40  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0064BF43  03 D7                     ADD EDX,EDI
0064BF45  03 CF                     ADD ECX,EDI
0064BF47  83 C0 20                  ADD EAX,0x20
0064BF4A  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0064BF4D  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0064BF50  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0064BF53  E9 E2 00 00 00            JMP 0x0064c03a
LAB_0064bf58:
0064BF58  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0064BF5B  8B 06                     MOV EAX,dword ptr [ESI]
0064BF5D  51                        PUSH ECX
0064BF5E  8B CE                     MOV ECX,ESI
0064BF60  FF 10                     CALL dword ptr [EAX]
0064BF62  8B F8                     MOV EDI,EAX
0064BF64  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0064BF67  3B C3                     CMP EAX,EBX
0064BF69  89 7D 88                  MOV dword ptr [EBP + -0x78],EDI
0064BF6C  7C 16                     JL 0x0064bf84
0064BF6E  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0064BF71  81 C3 00 02 00 00         ADD EBX,0x200
0064BF77  53                        PUSH EBX
0064BF78  52                        PUSH EDX
0064BF79  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0064BF7C  E8 CF 0F 06 00            CALL 0x006acf50
0064BF81  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_0064bf84:
0064BF84  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0064BF87  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0064BF8A  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
0064BF8D  B9 04 00 00 00            MOV ECX,0x4
0064BF92  03 C1                     ADD EAX,ECX
0064BF94  89 3A                     MOV dword ptr [EDX],EDI
0064BF96  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0064BF99  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0064BF9C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0064BF9F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0064BFA2  03 F9                     ADD EDI,ECX
0064BFA4  03 D1                     ADD EDX,ECX
0064BFA6  83 C0 0C                  ADD EAX,0xc
0064BFA9  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0064BFAC  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0064BFAF  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0064BFB2  E9 83 00 00 00            JMP 0x0064c03a
LAB_0064bfb7:
0064BFB7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0064BFBA  8B 06                     MOV EAX,dword ptr [ESI]
0064BFBC  51                        PUSH ECX
0064BFBD  8B CE                     MOV ECX,ESI
0064BFBF  FF 50 08                  CALL dword ptr [EAX + 0x8]
0064BFC2  8B F8                     MOV EDI,EAX
0064BFC4  85 FF                     TEST EDI,EDI
0064BFC6  89 7D 8C                  MOV dword ptr [EBP + -0x74],EDI
0064BFC9  75 18                     JNZ 0x0064bfe3
0064BFCB  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064BFD1  68 20 02 00 00            PUSH 0x220
0064BFD6  68 04 2A 7D 00            PUSH 0x7d2a04
0064BFDB  52                        PUSH EDX
0064BFDC  6A 95                     PUSH -0x6b
0064BFDE  E8 5D 9E 05 00            CALL 0x006a5e40
LAB_0064bfe3:
0064BFE3  39 5D D8                  CMP dword ptr [EBP + -0x28],EBX
0064BFE6  7C 16                     JL 0x0064bffe
0064BFE8  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0064BFEB  81 C3 00 02 00 00         ADD EBX,0x200
0064BFF1  53                        PUSH EBX
0064BFF2  50                        PUSH EAX
0064BFF3  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0064BFF6  E8 55 0F 06 00            CALL 0x006acf50
0064BFFB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_0064bffe:
0064BFFE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0064C001  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0064C004  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
0064C007  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
0064C00A  B9 04 00 00 00            MOV ECX,0x4
0064C00F  03 C1                     ADD EAX,ECX
0064C011  03 D9                     ADD EBX,ECX
0064C013  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0064C016  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0064C019  03 C1                     ADD EAX,ECX
0064C01B  83 C9 FF                  OR ECX,0xffffffff
0064C01E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0064C021  33 C0                     XOR EAX,EAX
0064C023  89 3A                     MOV dword ptr [EDX],EDI
0064C025  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
0064C028  F2 AE                     SCASB.REPNE ES:EDI
0064C02A  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0064C02D  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0064C030  F7 D1                     NOT ECX
0064C032  49                        DEC ECX
0064C033  8D 4C 08 02               LEA ECX,[EAX + ECX*0x1 + 0x2]
0064C037  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_0064c03a:
0064C03A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0064C03D  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0064C040  83 C1 05                  ADD ECX,0x5
0064C043  48                        DEC EAX
0064C044  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0064C047  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0064C04A  0F 85 3B FE FF FF         JNZ 0x0064be8b
LAB_0064c050:
0064C050  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0064C053  56                        PUSH ESI
0064C054  E8 B7 EB 05 00            CALL 0x006aac10
0064C059  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0064C05C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0064C05F  52                        PUSH EDX
0064C060  51                        PUSH ECX
0064C061  56                        PUSH ESI
0064C062  50                        PUSH EAX
0064C063  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064C066  E8 75 40 0E 00            CALL 0x007300e0
0064C06B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0064C06E  83 C4 10                  ADD ESP,0x10
0064C071  85 C0                     TEST EAX,EAX
0064C073  74 06                     JZ 0x0064c07b
0064C075  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
LAB_0064c07b:
0064C07B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0064C07E  85 C0                     TEST EAX,EAX
0064C080  0F 84 23 02 00 00         JZ 0x0064c2a9
0064C086  8D 55 E8                  LEA EDX,[EBP + -0x18]
0064C089  52                        PUSH EDX
0064C08A  E8 D1 EF 05 00            CALL 0x006ab060
0064C08F  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0064C095  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064C09A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064C09D  5F                        POP EDI
0064C09E  5E                        POP ESI
0064C09F  5B                        POP EBX
0064C0A0  8B E5                     MOV ESP,EBP
0064C0A2  5D                        POP EBP
0064C0A3  C2 0C 00                  RET 0xc
switchD_0064bbe8::caseD_38f:
0064C0A6  83 FF 06                  CMP EDI,0x6
0064C0A9  74 17                     JZ 0x0064c0c2
0064C0AB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064C0B0  68 40 02 00 00            PUSH 0x240
0064C0B5  68 04 2A 7D 00            PUSH 0x7d2a04
0064C0BA  50                        PUSH EAX
0064C0BB  6A 95                     PUSH -0x6b
0064C0BD  E8 7E 9D 05 00            CALL 0x006a5e40
LAB_0064c0c2:
0064C0C2  85 FF                     TEST EDI,EDI
0064C0C4  7E 6C                     JLE 0x0064c132
0064C0C6  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0064C0C9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0064c0cc:
0064C0CC  8A 03                     MOV AL,byte ptr [EBX]
0064C0CE  3C 04                     CMP AL,0x4
0064C0D0  74 45                     JZ 0x0064c117
0064C0D2  3C 01                     CMP AL,0x1
0064C0D4  74 41                     JZ 0x0064c117
0064C0D6  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0064C0D9  0F BF 42 01               MOVSX EAX,word ptr [EDX + 0x1]
0064C0DD  50                        PUSH EAX
0064C0DE  E8 F8 96 DB FF            CALL 0x004057db
0064C0E3  85 C0                     TEST EAX,EAX
0064C0E5  74 0F                     JZ 0x0064c0f6
0064C0E7  6A 7F                     PUSH 0x7f
0064C0E9  50                        PUSH EAX
0064C0EA  8D 46 04                  LEA EAX,[ESI + 0x4]
0064C0ED  50                        PUSH EAX
0064C0EE  E8 4D 22 0E 00            CALL 0x0072e340
0064C0F3  83 C4 0C                  ADD ESP,0xc
LAB_0064c0f6:
0064C0F6  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064C100  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064C106  6A 79                     PUSH 0x79
0064C108  68 24 2A 7D 00            PUSH 0x7d2a24
0064C10D  51                        PUSH ECX
0064C10E  6A 88                     PUSH -0x78
0064C110  E8 2B 9D 05 00            CALL 0x006a5e40
0064C115  EB 0C                     JMP 0x0064c123
LAB_0064c117:
0064C117  8B 16                     MOV EDX,dword ptr [ESI]
0064C119  53                        PUSH EBX
0064C11A  8B CE                     MOV ECX,ESI
0064C11C  FF 12                     CALL dword ptr [EDX]
0064C11E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0064C121  89 01                     MOV dword ptr [ECX],EAX
LAB_0064c123:
0064C123  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0064C126  83 C3 05                  ADD EBX,0x5
0064C129  83 C1 04                  ADD ECX,0x4
0064C12C  4F                        DEC EDI
0064C12D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0064C130  75 9A                     JNZ 0x0064c0cc
LAB_0064c132:
0064C132  6A 04                     PUSH 0x4
0064C134  E8 D7 EA 05 00            CALL 0x006aac10
0064C139  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0064C13C  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0064C13F  3B CA                     CMP ECX,EDX
0064C141  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064C144  0F 8C 55 F6 FF FF         JL 0x0064b79f
0064C14A  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
0064C14D  03 F2                     ADD ESI,EDX
0064C14F  3B CE                     CMP ECX,ESI
0064C151  0F 8D 48 F6 FF FF         JGE 0x0064b79f
0064C157  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0064C15A  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
0064C15D  3B CA                     CMP ECX,EDX
0064C15F  0F 8C 3A F6 FF FF         JL 0x0064b79f
0064C165  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
0064C168  03 F2                     ADD ESI,EDX
0064C16A  3B CE                     CMP ECX,ESI
0064C16C  0F 8D 2D F6 FF FF         JGE 0x0064b79f
0064C172  B9 01 00 00 00            MOV ECX,0x1
0064C177  89 08                     MOV dword ptr [EAX],ECX
0064C179  E9 F1 F1 FF FF            JMP 0x0064b36f
switchD_0064bbe8::caseD_38e:
0064C17E  83 FF 09                  CMP EDI,0x9
0064C181  74 18                     JZ 0x0064c19b
0064C183  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064C189  68 4F 02 00 00            PUSH 0x24f
0064C18E  68 04 2A 7D 00            PUSH 0x7d2a04
0064C193  52                        PUSH EDX
0064C194  6A 95                     PUSH -0x6b
0064C196  E8 A5 9C 05 00            CALL 0x006a5e40
LAB_0064c19b:
0064C19B  85 FF                     TEST EDI,EDI
0064C19D  7E 6B                     JLE 0x0064c20a
0064C19F  8D 45 90                  LEA EAX,[EBP + -0x70]
0064C1A2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0064c1a5:
0064C1A5  8A 03                     MOV AL,byte ptr [EBX]
0064C1A7  3C 04                     CMP AL,0x4
0064C1A9  74 44                     JZ 0x0064c1ef
0064C1AB  3C 01                     CMP AL,0x1
0064C1AD  74 40                     JZ 0x0064c1ef
0064C1AF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064C1B2  0F BF 51 01               MOVSX EDX,word ptr [ECX + 0x1]
0064C1B6  52                        PUSH EDX
0064C1B7  E8 1F 96 DB FF            CALL 0x004057db
0064C1BC  85 C0                     TEST EAX,EAX
0064C1BE  74 0F                     JZ 0x0064c1cf
0064C1C0  6A 7F                     PUSH 0x7f
0064C1C2  50                        PUSH EAX
0064C1C3  8D 46 04                  LEA EAX,[ESI + 0x4]
0064C1C6  50                        PUSH EAX
0064C1C7  E8 74 21 0E 00            CALL 0x0072e340
0064C1CC  83 C4 0C                  ADD ESP,0xc
LAB_0064c1cf:
0064C1CF  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064C1D9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064C1DE  6A 79                     PUSH 0x79
0064C1E0  68 24 2A 7D 00            PUSH 0x7d2a24
0064C1E5  50                        PUSH EAX
0064C1E6  6A 88                     PUSH -0x78
0064C1E8  E8 53 9C 05 00            CALL 0x006a5e40
0064C1ED  EB 0C                     JMP 0x0064c1fb
LAB_0064c1ef:
0064C1EF  8B 16                     MOV EDX,dword ptr [ESI]
0064C1F1  53                        PUSH EBX
0064C1F2  8B CE                     MOV ECX,ESI
0064C1F4  FF 12                     CALL dword ptr [EDX]
0064C1F6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0064C1F9  89 01                     MOV dword ptr [ECX],EAX
LAB_0064c1fb:
0064C1FB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0064C1FE  83 C3 05                  ADD EBX,0x5
0064C201  83 C1 04                  ADD ECX,0x4
0064C204  4F                        DEC EDI
0064C205  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0064C208  75 9B                     JNZ 0x0064c1a5
LAB_0064c20a:
0064C20A  6A 04                     PUSH 0x4
0064C20C  E8 FF E9 05 00            CALL 0x006aac10
0064C211  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0064C214  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0064C217  3B CA                     CMP ECX,EDX
0064C219  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064C21C  0F 8C 7D F5 FF FF         JL 0x0064b79f
0064C222  8B 75 A8                  MOV ESI,dword ptr [EBP + -0x58]
0064C225  03 F2                     ADD ESI,EDX
0064C227  3B CE                     CMP ECX,ESI
0064C229  0F 8D 70 F5 FF FF         JGE 0x0064b79f
0064C22F  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0064C232  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0064C235  3B CA                     CMP ECX,EDX
0064C237  0F 8C 62 F5 FF FF         JL 0x0064b79f
0064C23D  8B 75 AC                  MOV ESI,dword ptr [EBP + -0x54]
0064C240  03 F2                     ADD ESI,EDX
0064C242  3B CE                     CMP ECX,ESI
0064C244  0F 8D 55 F5 FF FF         JGE 0x0064b79f
0064C24A  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0064C24D  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0064C250  3B CA                     CMP ECX,EDX
0064C252  0F 8C 47 F5 FF FF         JL 0x0064b79f
0064C258  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
0064C25B  03 F2                     ADD ESI,EDX
0064C25D  3B CE                     CMP ECX,ESI
0064C25F  0F 8D 3A F5 FF FF         JGE 0x0064b79f
0064C265  B9 01 00 00 00            MOV ECX,0x1
0064C26A  89 08                     MOV dword ptr [EAX],ECX
0064C26C  E9 FE F0 FF FF            JMP 0x0064b36f
switchD_0064aa67::caseD_2:
0064C271  50                        PUSH EAX
0064C272  E8 64 95 DB FF            CALL 0x004057db
0064C277  85 C0                     TEST EAX,EAX
0064C279  74 0F                     JZ 0x0064c28a
0064C27B  6A 7F                     PUSH 0x7f
0064C27D  50                        PUSH EAX
0064C27E  8D 46 04                  LEA EAX,[ESI + 0x4]
0064C281  50                        PUSH EAX
0064C282  E8 B9 20 0E 00            CALL 0x0072e340
0064C287  83 C4 0C                  ADD ESP,0xc
LAB_0064c28a:
0064C28A  C7 86 84 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x84],0xffffffff
0064C294  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064C29A  6A 79                     PUSH 0x79
0064C29C  68 24 2A 7D 00            PUSH 0x7d2a24
0064C2A1  52                        PUSH EDX
0064C2A2  6A 8B                     PUSH -0x75
LAB_0064c2a4:
0064C2A4  E8 97 9B 05 00            CALL 0x006a5e40
LAB_0064c2a9:
0064C2A9  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0064C2AF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064C2B4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064C2B7  5F                        POP EDI
0064C2B8  5E                        POP ESI
0064C2B9  5B                        POP EBX
0064C2BA  8B E5                     MOV ESP,EBP
0064C2BC  5D                        POP EBP
0064C2BD  C2 0C 00                  RET 0xc
LAB_0064c2c0:
0064C2C0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0064C2C3  8B 8D 44 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff44]
0064C2C9  3B C7                     CMP EAX,EDI
0064C2CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064C2D1  74 09                     JZ 0x0064c2dc
0064C2D3  8D 55 E8                  LEA EDX,[EBP + -0x18]
0064C2D6  52                        PUSH EDX
0064C2D7  E8 84 ED 05 00            CALL 0x006ab060
LAB_0064c2dc:
0064C2DC  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0064C2DF  74 09                     JZ 0x0064c2ea
0064C2E1  8D 45 FC                  LEA EAX,[EBP + -0x4]
0064C2E4  50                        PUSH EAX
0064C2E5  E8 76 ED 05 00            CALL 0x006ab060
LAB_0064c2ea:
0064C2EA  3B F7                     CMP ESI,EDI
0064C2EC  7E 05                     JLE 0x0064c2f3
0064C2EE  BE 95 FF FF FF            MOV ESI,0xffffff95
LAB_0064c2f3:
0064C2F3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0064C2F6  3B C7                     CMP EAX,EDI
0064C2F8  74 02                     JZ 0x0064c2fc
0064C2FA  89 30                     MOV dword ptr [EAX],ESI
LAB_0064c2fc:
0064C2FC  5F                        POP EDI
0064C2FD  5E                        POP ESI
0064C2FE  33 C0                     XOR EAX,EAX
0064C300  5B                        POP EBX
0064C301  8B E5                     MOV ESP,EBP
0064C303  5D                        POP EBP
0064C304  C2 0C 00                  RET 0xc
