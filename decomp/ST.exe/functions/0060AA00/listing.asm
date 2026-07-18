FUN_0060aa00:
0060AA00  55                        PUSH EBP
0060AA01  8B EC                     MOV EBP,ESP
0060AA03  83 EC 24                  SUB ESP,0x24
0060AA06  53                        PUSH EBX
0060AA07  8B D9                     MOV EBX,ECX
0060AA09  57                        PUSH EDI
0060AA0A  33 FF                     XOR EDI,EDI
0060AA0C  8B 83 34 02 00 00         MOV EAX,dword ptr [EBX + 0x234]
0060AA12  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0060AA19  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0060AA1C  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0060AA1F  8B 83 0D 02 00 00         MOV EAX,dword ptr [EBX + 0x20d]
0060AA25  48                        DEC EAX
0060AA26  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0060AA29  83 F8 03                  CMP EAX,0x3
0060AA2C  77 51                     JA 0x0060aa7f
switchD_0060aa2e::switchD:
0060AA2E  FF 24 85 E0 AD 60 00      JMP dword ptr [EAX*0x4 + 0x60ade0]
switchD_0060aa2e::caseD_1:
0060AA35  8B 83 F5 01 00 00         MOV EAX,dword ptr [EBX + 0x1f5]
0060AA3B  83 F8 4D                  CMP EAX,0x4d
0060AA3E  75 17                     JNZ 0x0060aa57
0060AA40  8B C1                     MOV EAX,ECX
0060AA42  C7 45 FC FA ED EB 3B      MOV dword ptr [EBP + -0x4],0x3bebedfa
0060AA49  99                        CDQ
0060AA4A  F7 BB 1D 02 00 00         IDIV dword ptr [EBX + 0x21d]
0060AA50  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060AA53  8B C8                     MOV ECX,EAX
0060AA55  EB 28                     JMP 0x0060aa7f
LAB_0060aa57:
0060AA57  83 F8 4C                  CMP EAX,0x4c
0060AA5A  75 09                     JNZ 0x0060aa65
0060AA5C  C7 45 FC BC 74 13 3C      MOV dword ptr [EBP + -0x4],0x3c1374bc
0060AA63  EB 1A                     JMP 0x0060aa7f
LAB_0060aa65:
0060AA65  C7 45 FC EC 51 B8 3E      MOV dword ptr [EBP + -0x4],0x3eb851ec
0060AA6C  EB 11                     JMP 0x0060aa7f
switchD_0060aa2e::caseD_2:
0060AA6E  8B C1                     MOV EAX,ECX
0060AA70  C7 45 FC EC 51 B8 3E      MOV dword ptr [EBP + -0x4],0x3eb851ec
0060AA77  99                        CDQ
0060AA78  2B C2                     SUB EAX,EDX
0060AA7A  D1 F8                     SAR EAX,0x1
0060AA7C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
switchD_0060aa2e::default:
0060AA7F  8B 93 FD 01 00 00         MOV EDX,dword ptr [EBX + 0x1fd]
0060AA85  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0060AA88  83 EA 64                  SUB EDX,0x64
0060AA8B  3B CF                     CMP ECX,EDI
0060AA8D  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0060AA90  0F 8E 65 02 00 00         JLE 0x0060acfb
0060AA96  56                        PUSH ESI
LAB_0060aa97:
0060AA97  83 BB F5 01 00 00 4D      CMP dword ptr [EBX + 0x1f5],0x4d
0060AA9E  0F 85 62 01 00 00         JNZ 0x0060ac06
0060AAA4  8B 83 1D 02 00 00         MOV EAX,dword ptr [EBX + 0x21d]
0060AAAA  33 D2                     XOR EDX,EDX
0060AAAC  85 C0                     TEST EAX,EAX
0060AAAE  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0060AAB1  0F 8E 37 02 00 00         JLE 0x0060acee
LAB_0060aab7:
0060AAB7  8B C2                     MOV EAX,EDX
0060AAB9  0F AF C1                  IMUL EAX,ECX
0060AABC  8B 8B 34 02 00 00         MOV ECX,dword ptr [EBX + 0x234]
0060AAC2  03 C7                     ADD EAX,EDI
0060AAC4  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
0060AAC7  0F 83 1F 01 00 00         JNC 0x0060abec
0060AACD  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0060AAD0  0F AF F0                  IMUL ESI,EAX
0060AAD3  03 71 1C                  ADD ESI,dword ptr [ECX + 0x1c]
0060AAD6  85 F6                     TEST ESI,ESI
0060AAD8  0F 84 0E 01 00 00         JZ 0x0060abec
0060AADE  D9 46 2C                  FLD float ptr [ESI + 0x2c]
0060AAE1  D8 65 FC                  FSUB float ptr [EBP + -0x4]
0060AAE4  85 D2                     TEST EDX,EDX
0060AAE6  D9 56 2C                  FST float ptr [ESI + 0x2c]
0060AAE9  75 0B                     JNZ 0x0060aaf6
0060AAEB  8B 83 FD 01 00 00         MOV EAX,dword ptr [EBX + 0x1fd]
0060AAF1  83 C0 64                  ADD EAX,0x64
0060AAF4  EB 6A                     JMP 0x0060ab60
LAB_0060aaf6:
0060AAF6  8B 7E 34                  MOV EDI,dword ptr [ESI + 0x34]
0060AAF9  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0060AB00  47                        INC EDI
0060AB01  8B C7                     MOV EAX,EDI
0060AB03  89 7E 34                  MOV dword ptr [ESI + 0x34],EDI
0060AB06  D1 E8                     SHR EAX,0x1
0060AB08  83 C0 0A                  ADD EAX,0xa
0060AB0B  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0060AB0E  DF 6D DC                  FILD qword ptr [EBP + -0x24]
0060AB11  D8 46 30                  FADD float ptr [ESI + 0x30]
0060AB14  D9 56 30                  FST float ptr [ESI + 0x30]
0060AB17  D9 C0                     FLD ST0
0060AB19  D8 25 30 CD 79 00         FSUB float ptr [0x0079cd30]
0060AB1F  D8 0D 2C CD 79 00         FMUL float ptr [0x0079cd2c]
0060AB25  DA 75 E4                  FIDIV dword ptr [EBP + -0x1c]
0060AB28  E8 5B 37 12 00            CALL 0x0072e288
0060AB2D  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0060AB30  8B 8B FD 01 00 00         MOV ECX,dword ptr [EBX + 0x1fd]
0060AB36  83 C1 64                  ADD ECX,0x64
0060AB39  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0060AB3C  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0060AB3F  D9 C9                     FXCH
0060AB41  DE D9                     FCOMPP
0060AB43  DF E0                     FNSTSW AX
0060AB45  F6 C4 01                  TEST AH,0x1
0060AB48  75 0E                     JNZ 0x0060ab58
0060AB4A  C7 46 30 00 00 48 43      MOV dword ptr [ESI + 0x30],0x43480000
0060AB51  C7 46 34 00 00 00 00      MOV dword ptr [ESI + 0x34],0x0
LAB_0060ab58:
0060AB58  D9 46 30                  FLD float ptr [ESI + 0x30]
0060AB5B  E8 28 37 12 00            CALL 0x0072e288
LAB_0060ab60:
0060AB60  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0060AB63  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0060AB66  D9 C1                     FLD ST1
0060AB68  D9 FF                     FCOS
0060AB6A  D8 C9                     FMUL ST1
0060AB6C  E8 17 37 12 00            CALL 0x0072e288
0060AB71  D9 C9                     FXCH
0060AB73  D9 FE                     FSIN
0060AB75  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0060AB78  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
0060AB7B  89 7E 0C                  MOV dword ptr [ESI + 0xc],EDI
0060AB7E  D8 C9                     FMUL ST1
0060AB80  D9 C9                     FXCH
0060AB82  DD D8                     FSTP ST0
0060AB84  E8 FF 36 12 00            CALL 0x0072e288
0060AB89  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0060AB8C  03 C1                     ADD EAX,ECX
0060AB8E  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0060AB91  8B 15 98 75 80 00         MOV EDX,dword ptr [0x00807598]
0060AB97  8B 8A 80 03 00 00         MOV ECX,dword ptr [EDX + 0x380]
0060AB9D  0F AF C1                  IMUL EAX,ECX
0060ABA0  0F AF F9                  IMUL EDI,ECX
0060ABA3  8B D0                     MOV EDX,EAX
0060ABA5  B8 79 19 8C 02            MOV EAX,0x28c1979
0060ABAA  F7 EA                     IMUL EDX
0060ABAC  D1 FA                     SAR EDX,0x1
0060ABAE  8B C2                     MOV EAX,EDX
0060ABB0  C1 E8 1F                  SHR EAX,0x1f
0060ABB3  03 D0                     ADD EDX,EAX
0060ABB5  B8 79 19 8C 02            MOV EAX,0x28c1979
0060ABBA  52                        PUSH EDX
0060ABBB  F7 EF                     IMUL EDI
0060ABBD  D1 FA                     SAR EDX,0x1
0060ABBF  8B CA                     MOV ECX,EDX
0060ABC1  C1 E9 1F                  SHR ECX,0x1f
0060ABC4  03 D1                     ADD EDX,ECX
0060ABC6  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060ABCC  52                        PUSH EDX
0060ABCD  E8 3E 86 0D 00            CALL 0x006e3210
0060ABD2  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0060ABD8  E8 AB 36 12 00            CALL 0x0072e288
0060ABDD  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0060ABE0  0F BF D0                  MOVSX EDX,AX
0060ABE3  83 C2 2D                  ADD EDX,0x2d
0060ABE6  89 56 14                  MOV dword ptr [ESI + 0x14],EDX
0060ABE9  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_0060abec:
0060ABEC  8B 83 1D 02 00 00         MOV EAX,dword ptr [EBX + 0x21d]
0060ABF2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0060ABF5  42                        INC EDX
0060ABF6  3B D0                     CMP EDX,EAX
0060ABF8  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0060ABFB  0F 8C B6 FE FF FF         JL 0x0060aab7
0060AC01  E9 E8 00 00 00            JMP 0x0060acee
LAB_0060ac06:
0060AC06  8B 83 34 02 00 00         MOV EAX,dword ptr [EBX + 0x234]
0060AC0C  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
0060AC0F  0F 83 D9 00 00 00         JNC 0x0060acee
0060AC15  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0060AC18  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0060AC1B  0F AF F7                  IMUL ESI,EDI
0060AC1E  03 F2                     ADD ESI,EDX
0060AC20  85 F6                     TEST ESI,ESI
0060AC22  0F 84 C6 00 00 00         JZ 0x0060acee
0060AC28  8B 83 0D 02 00 00         MOV EAX,dword ptr [EBX + 0x20d]
0060AC2E  83 F8 03                  CMP EAX,0x3
0060AC31  74 6C                     JZ 0x0060ac9f
0060AC33  83 F8 04                  CMP EAX,0x4
0060AC36  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0060AC39  75 40                     JNZ 0x0060ac7b
0060AC3B  3B F8                     CMP EDI,EAX
0060AC3D  7F 3C                     JG 0x0060ac7b
0060AC3F  D9 46 2C                  FLD float ptr [ESI + 0x2c]
0060AC42  D8 65 FC                  FSUB float ptr [EBP + -0x4]
0060AC45  D9 5E 2C                  FSTP float ptr [ESI + 0x2c]
0060AC48  D9 46 30                  FLD float ptr [ESI + 0x30]
0060AC4B  E8 38 36 12 00            CALL 0x0072e288
0060AC50  D9 83 2A 02 00 00         FLD float ptr [EBX + 0x22a]
0060AC56  D8 46 30                  FADD float ptr [ESI + 0x30]
0060AC59  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0060AC5C  D9 56 30                  FST float ptr [ESI + 0x30]
0060AC5F  DB 83 F9 01 00 00         FILD dword ptr [EBX + 0x1f9]
0060AC65  D9 C9                     FXCH
0060AC67  DE D9                     FCOMPP
0060AC69  DF E0                     FNSTSW AX
0060AC6B  F6 C4 01                  TEST AH,0x1
0060AC6E  75 52                     JNZ 0x0060acc2
0060AC70  DB 83 FD 01 00 00         FILD dword ptr [EBX + 0x1fd]
0060AC76  D9 5E 30                  FSTP float ptr [ESI + 0x30]
0060AC79  EB 47                     JMP 0x0060acc2
LAB_0060ac7b:
0060AC7B  D9 45 FC                  FLD float ptr [EBP + -0x4]
0060AC7E  D8 46 2C                  FADD float ptr [ESI + 0x2c]
0060AC81  85 C0                     TEST EAX,EAX
0060AC83  D9 5E 2C                  FSTP float ptr [ESI + 0x2c]
0060AC86  7E 0C                     JLE 0x0060ac94
0060AC88  3B F8                     CMP EDI,EAX
0060AC8A  7E 08                     JLE 0x0060ac94
0060AC8C  8B 83 F9 01 00 00         MOV EAX,dword ptr [EBX + 0x1f9]
0060AC92  EB 2B                     JMP 0x0060acbf
LAB_0060ac94:
0060AC94  8B 8B 26 02 00 00         MOV ECX,dword ptr [EBX + 0x226]
0060AC9A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0060AC9D  EB 23                     JMP 0x0060acc2
LAB_0060ac9f:
0060AC9F  D9 46 2C                  FLD float ptr [ESI + 0x2c]
0060ACA2  D8 65 FC                  FSUB float ptr [EBP + -0x4]
0060ACA5  D9 5E 2C                  FSTP float ptr [ESI + 0x2c]
0060ACA8  8B 8B F5 01 00 00         MOV ECX,dword ptr [EBX + 0x1f5]
0060ACAE  8B 83 FD 01 00 00         MOV EAX,dword ptr [EBX + 0x1fd]
0060ACB4  83 F9 4D                  CMP ECX,0x4d
0060ACB7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0060ACBA  75 06                     JNZ 0x0060acc2
0060ACBC  83 C0 64                  ADD EAX,0x64
LAB_0060acbf:
0060ACBF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0060acc2:
0060ACC2  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0060ACC5  D9 46 2C                  FLD float ptr [ESI + 0x2c]
0060ACC8  D9 FF                     FCOS
0060ACCA  D8 C9                     FMUL ST1
0060ACCC  E8 B7 35 12 00            CALL 0x0072e288
0060ACD1  D9 46 2C                  FLD float ptr [ESI + 0x2c]
0060ACD4  D9 FE                     FSIN
0060ACD6  03 46 18                  ADD EAX,dword ptr [ESI + 0x18]
0060ACD9  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0060ACDC  DE C9                     FMULP
0060ACDE  E8 A5 35 12 00            CALL 0x0072e288
0060ACE3  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0060ACE6  03 C1                     ADD EAX,ECX
0060ACE8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0060ACEB  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
LAB_0060acee:
0060ACEE  47                        INC EDI
0060ACEF  3B F9                     CMP EDI,ECX
0060ACF1  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0060ACF4  0F 8C 9D FD FF FF         JL 0x0060aa97
0060ACFA  5E                        POP ESI
LAB_0060acfb:
0060ACFB  8B 83 0D 02 00 00         MOV EAX,dword ptr [EBX + 0x20d]
0060AD01  83 F8 04                  CMP EAX,0x4
0060AD04  74 7D                     JZ 0x0060ad83
0060AD06  83 F8 03                  CMP EAX,0x3
0060AD09  74 78                     JZ 0x0060ad83
0060AD0B  8B 83 30 02 00 00         MOV EAX,dword ptr [EBX + 0x230]
0060AD11  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0060AD14  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0060AD17  D1 E2                     SHL EDX,0x1
0060AD19  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0060AD1C  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0060AD1F  D9 93 2A 02 00 00         FST float ptr [EBX + 0x22a]
0060AD25  DB 83 26 02 00 00         FILD dword ptr [EBX + 0x226]
0060AD2B  D8 C1                     FADD ST0,ST1
0060AD2D  E8 56 35 12 00            CALL 0x0072e288
0060AD32  8B 8B F9 01 00 00         MOV ECX,dword ptr [EBX + 0x1f9]
0060AD38  89 83 26 02 00 00         MOV dword ptr [EBX + 0x226],EAX
0060AD3E  3B C1                     CMP EAX,ECX
0060AD40  DD D8                     FSTP ST0
0060AD42  7C 2D                     JL 0x0060ad71
0060AD44  8B 83 FD 01 00 00         MOV EAX,dword ptr [EBX + 0x1fd]
0060AD4A  89 83 26 02 00 00         MOV dword ptr [EBX + 0x226],EAX
0060AD50  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0060AD56  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0060AD5C  C7 83 48 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x248],0x1
0060AD66  83 C2 1E                  ADD EDX,0x1e
0060AD69  89 93 50 02 00 00         MOV dword ptr [EBX + 0x250],EDX
0060AD6F  EB 12                     JMP 0x0060ad83
LAB_0060ad71:
0060AD71  3B 83 FD 01 00 00         CMP EAX,dword ptr [EBX + 0x1fd]
0060AD77  7F 0A                     JG 0x0060ad83
0060AD79  C7 83 30 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x230],0x1
LAB_0060ad83:
0060AD83  8B 83 F9 01 00 00         MOV EAX,dword ptr [EBX + 0x1f9]
0060AD89  99                        CDQ
0060AD8A  2B C2                     SUB EAX,EDX
0060AD8C  8B C8                     MOV ECX,EAX
0060AD8E  8B 83 26 02 00 00         MOV EAX,dword ptr [EBX + 0x226]
0060AD94  D1 F9                     SAR ECX,0x1
0060AD96  2B C1                     SUB EAX,ECX
0060AD98  99                        CDQ
0060AD99  33 C2                     XOR EAX,EDX
0060AD9B  2B C2                     SUB EAX,EDX
0060AD9D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0060ADA0  DB 45 E4                  FILD dword ptr [EBP + -0x1c]
0060ADA3  D8 9B 2A 02 00 00         FCOMP float ptr [EBX + 0x22a]
0060ADA9  DF E0                     FNSTSW AX
0060ADAB  F6 C4 01                  TEST AH,0x1
0060ADAE  74 28                     JZ 0x0060add8
0060ADB0  8A 83 2F 02 00 00         MOV AL,byte ptr [EBX + 0x22f]
0060ADB6  84 C0                     TEST AL,AL
0060ADB8  75 1E                     JNZ 0x0060add8
0060ADBA  8B 83 F5 01 00 00         MOV EAX,dword ptr [EBX + 0x1f5]
0060ADC0  83 F8 43                  CMP EAX,0x43
0060ADC3  74 05                     JZ 0x0060adca
0060ADC5  83 F8 42                  CMP EAX,0x42
0060ADC8  75 0E                     JNZ 0x0060add8
LAB_0060adca:
0060ADCA  8B CB                     MOV ECX,EBX
0060ADCC  E8 15 8B DF FF            CALL 0x004038e6
0060ADD1  C6 83 2F 02 00 00 01      MOV byte ptr [EBX + 0x22f],0x1
LAB_0060add8:
0060ADD8  5F                        POP EDI
0060ADD9  5B                        POP EBX
0060ADDA  8B E5                     MOV ESP,EBP
0060ADDC  5D                        POP EBP
0060ADDD  C3                        RET
