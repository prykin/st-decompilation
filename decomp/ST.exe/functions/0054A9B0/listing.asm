FUN_0054a9b0:
0054A9B0  55                        PUSH EBP
0054A9B1  8B EC                     MOV EBP,ESP
0054A9B3  83 EC 54                  SUB ESP,0x54
0054A9B6  A1 98 75 80 00            MOV EAX,[0x00807598]
0054A9BB  53                        PUSH EBX
0054A9BC  56                        PUSH ESI
0054A9BD  57                        PUSH EDI
0054A9BE  85 C0                     TEST EAX,EAX
0054A9C0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0054A9C3  0F 84 FC 03 00 00         JZ 0x0054adc5
0054A9C9  A1 88 2A 80 00            MOV EAX,[0x00802a88]
0054A9CE  85 C0                     TEST EAX,EAX
0054A9D0  0F 84 EF 03 00 00         JZ 0x0054adc5
0054A9D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054A9DB  8D 55 B0                  LEA EDX,[EBP + -0x50]
0054A9DE  8D 4D AC                  LEA ECX,[EBP + -0x54]
0054A9E1  6A 00                     PUSH 0x0
0054A9E3  52                        PUSH EDX
0054A9E4  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0054A9E7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054A9ED  E8 FE 2D 1E 00            CALL 0x0072d7f0
0054A9F2  83 C4 08                  ADD ESP,0x8
0054A9F5  85 C0                     TEST EAX,EAX
0054A9F7  0F 85 BF 03 00 00         JNZ 0x0054adbc
0054A9FD  D9 45 08                  FLD float ptr [EBP + 0x8]
0054AA00  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0054AA06  D9 45 08                  FLD float ptr [EBP + 0x8]
0054AA09  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0054AA0F  DF E0                     FNSTSW AX
0054AA11  F6 C4 01                  TEST AH,0x1
0054AA14  75 0A                     JNZ 0x0054aa20
0054AA16  E8 6D 38 1E 00            CALL 0x0072e288
0054AA1B  0F BF C0                  MOVSX EAX,AX
0054AA1E  EB 09                     JMP 0x0054aa29
LAB_0054aa20:
0054AA20  E8 63 38 1E 00            CALL 0x0072e288
0054AA25  0F BF C0                  MOVSX EAX,AX
0054AA28  48                        DEC EAX
LAB_0054aa29:
0054AA29  D9 45 0C                  FLD float ptr [EBP + 0xc]
0054AA2C  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0054AA32  D9 45 0C                  FLD float ptr [EBP + 0xc]
0054AA35  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0054AA3B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0054AA3E  DF E0                     FNSTSW AX
0054AA40  F6 C4 01                  TEST AH,0x1
0054AA43  75 0A                     JNZ 0x0054aa4f
0054AA45  E8 3E 38 1E 00            CALL 0x0072e288
0054AA4A  0F BF D8                  MOVSX EBX,AX
0054AA4D  EB 09                     JMP 0x0054aa58
LAB_0054aa4f:
0054AA4F  E8 34 38 1E 00            CALL 0x0072e288
0054AA54  0F BF D8                  MOVSX EBX,AX
0054AA57  4B                        DEC EBX
LAB_0054aa58:
0054AA58  D9 45 10                  FLD float ptr [EBP + 0x10]
0054AA5B  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0054AA61  D9 45 10                  FLD float ptr [EBP + 0x10]
0054AA64  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
0054AA6A  DF E0                     FNSTSW AX
0054AA6C  F6 C4 01                  TEST AH,0x1
0054AA6F  75 0A                     JNZ 0x0054aa7b
0054AA71  E8 12 38 1E 00            CALL 0x0072e288
0054AA76  0F BF F8                  MOVSX EDI,AX
0054AA79  EB 09                     JMP 0x0054aa84
LAB_0054aa7b:
0054AA7B  E8 08 38 1E 00            CALL 0x0072e288
0054AA80  0F BF F8                  MOVSX EDI,AX
0054AA83  4F                        DEC EDI
LAB_0054aa84:
0054AA84  A0 4D 87 80 00            MOV AL,[0x0080874d]
0054AA89  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0054AA8F  3C FF                     CMP AL,0xff
0054AA91  0F 84 09 01 00 00         JZ 0x0054aba0
0054AA97  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0054AA9D  85 C0                     TEST EAX,EAX
0054AA9F  0F 84 FB 00 00 00         JZ 0x0054aba0
0054AAA5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054AAA8  8D 4D F0                  LEA ECX,[EBP + -0x10]
0054AAAB  8D 55 F4                  LEA EDX,[EBP + -0xc]
0054AAAE  51                        PUSH ECX
0054AAAF  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
0054AAB5  52                        PUSH EDX
0054AAB6  53                        PUSH EBX
0054AAB7  50                        PUSH EAX
0054AAB8  51                        PUSH ECX
0054AAB9  8B CE                     MOV ECX,ESI
0054AABB  E8 93 94 EB FF            CALL 0x00403f53
0054AAC0  85 FF                     TEST EDI,EDI
0054AAC2  0F 8C D3 00 00 00         JL 0x0054ab9b
0054AAC8  83 FF 05                  CMP EDI,0x5
0054AACB  0F 8D CA 00 00 00         JGE 0x0054ab9b
0054AAD1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0054AAD4  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0054AAD7  85 C9                     TEST ECX,ECX
0054AAD9  7C 1E                     JL 0x0054aaf9
0054AADB  3B 4E 28                  CMP ECX,dword ptr [ESI + 0x28]
0054AADE  7D 19                     JGE 0x0054aaf9
0054AAE0  8B 04 BD D0 AE 79 00      MOV EAX,dword ptr [EDI*0x4 + 0x79aed0]
0054AAE7  03 C2                     ADD EAX,EDX
0054AAE9  85 C0                     TEST EAX,EAX
0054AAEB  7C 0C                     JL 0x0054aaf9
0054AAED  3B 46 2C                  CMP EAX,dword ptr [ESI + 0x2c]
0054AAF0  7D 07                     JGE 0x0054aaf9
0054AAF2  B8 01 00 00 00            MOV EAX,0x1
0054AAF7  EB 02                     JMP 0x0054aafb
LAB_0054aaf9:
0054AAF9  33 C0                     XOR EAX,EAX
LAB_0054aafb:
0054AAFB  85 C0                     TEST EAX,EAX
0054AAFD  74 29                     JZ 0x0054ab28
0054AAFF  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0054AB05  83 F8 04                  CMP EAX,0x4
0054AB08  7D 1E                     JGE 0x0054ab28
0054AB0A  8B 44 86 3C               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c]
0054AB0E  85 C0                     TEST EAX,EAX
0054AB10  74 16                     JZ 0x0054ab28
0054AB12  8B 1C BD D0 AE 79 00      MOV EBX,dword ptr [EDI*0x4 + 0x79aed0]
0054AB19  03 DA                     ADD EBX,EDX
0054AB1B  0F AF 5E 28               IMUL EBX,dword ptr [ESI + 0x28]
0054AB1F  03 D8                     ADD EBX,EAX
0054AB21  33 C0                     XOR EAX,EAX
0054AB23  8A 04 0B                  MOV AL,byte ptr [EBX + ECX*0x1]
0054AB26  EB 03                     JMP 0x0054ab2b
LAB_0054ab28:
0054AB28  83 C8 FF                  OR EAX,0xffffffff
LAB_0054ab2b:
0054AB2B  85 C0                     TEST EAX,EAX
0054AB2D  0F 8C CA 01 00 00         JL 0x0054acfd
0054AB33  83 F8 0F                  CMP EAX,0xf
0054AB36  74 07                     JZ 0x0054ab3f
0054AB38  B8 02 00 00 00            MOV EAX,0x2
0054AB3D  EB 63                     JMP 0x0054aba2
LAB_0054ab3f:
0054AB3F  85 C9                     TEST ECX,ECX
0054AB41  7C 1E                     JL 0x0054ab61
0054AB43  3B 4E 30                  CMP ECX,dword ptr [ESI + 0x30]
0054AB46  7D 19                     JGE 0x0054ab61
0054AB48  8B 04 BD D0 AE 79 00      MOV EAX,dword ptr [EDI*0x4 + 0x79aed0]
0054AB4F  03 C2                     ADD EAX,EDX
0054AB51  85 C0                     TEST EAX,EAX
0054AB53  7C 0C                     JL 0x0054ab61
0054AB55  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0054AB58  7D 07                     JGE 0x0054ab61
0054AB5A  B8 01 00 00 00            MOV EAX,0x1
0054AB5F  EB 02                     JMP 0x0054ab63
LAB_0054ab61:
0054AB61  33 C0                     XOR EAX,EAX
LAB_0054ab63:
0054AB63  85 C0                     TEST EAX,EAX
0054AB65  74 1D                     JZ 0x0054ab84
0054AB67  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
0054AB6A  85 C0                     TEST EAX,EAX
0054AB6C  74 16                     JZ 0x0054ab84
0054AB6E  8B 3C BD D0 AE 79 00      MOV EDI,dword ptr [EDI*0x4 + 0x79aed0]
0054AB75  03 FA                     ADD EDI,EDX
0054AB77  0F AF 7E 30               IMUL EDI,dword ptr [ESI + 0x30]
0054AB7B  03 F8                     ADD EDI,EAX
0054AB7D  33 C0                     XOR EAX,EAX
0054AB7F  8A 04 0F                  MOV AL,byte ptr [EDI + ECX*0x1]
0054AB82  EB 03                     JMP 0x0054ab87
LAB_0054ab84:
0054AB84  83 C8 FF                  OR EAX,0xffffffff
LAB_0054ab87:
0054AB87  85 C0                     TEST EAX,EAX
0054AB89  0F 8C 6E 01 00 00         JL 0x0054acfd
0054AB8F  33 C9                     XOR ECX,ECX
0054AB91  83 F8 0F                  CMP EAX,0xf
0054AB94  0F 95 C1                  SETNZ CL
0054AB97  8B C1                     MOV EAX,ECX
0054AB99  EB 07                     JMP 0x0054aba2
LAB_0054ab9b:
0054AB9B  83 C8 FF                  OR EAX,0xffffffff
0054AB9E  EB 02                     JMP 0x0054aba2
LAB_0054aba0:
0054ABA0  33 C0                     XOR EAX,EAX
LAB_0054aba2:
0054ABA2  85 C0                     TEST EAX,EAX
0054ABA4  0F 8E 53 01 00 00         JLE 0x0054acfd
0054ABAA  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054ABAD  8B 8E EB 04 00 00         MOV ECX,dword ptr [ESI + 0x4eb]
0054ABB3  85 C9                     TEST ECX,ECX
0054ABB5  74 1E                     JZ 0x0054abd5
0054ABB7  E8 F4 AE 1C 00            CALL 0x00715ab0
0054ABBC  8B 96 EB 04 00 00         MOV EDX,dword ptr [ESI + 0x4eb]
0054ABC2  52                        PUSH EDX
0054ABC3  E8 E8 36 1E 00            CALL 0x0072e2b0
0054ABC8  83 C4 04                  ADD ESP,0x4
0054ABCB  C7 86 EB 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4eb],0x0
LAB_0054abd5:
0054ABD5  68 91 00 00 00            PUSH 0x91
0054ABDA  E8 51 39 1E 00            CALL 0x0072e530
0054ABDF  83 C4 04                  ADD ESP,0x4
0054ABE2  85 C0                     TEST EAX,EAX
0054ABE4  74 09                     JZ 0x0054abef
0054ABE6  8B C8                     MOV ECX,EAX
0054ABE8  E8 33 AC 1C 00            CALL 0x00715820
0054ABED  EB 02                     JMP 0x0054abf1
LAB_0054abef:
0054ABEF  33 C0                     XOR EAX,EAX
LAB_0054abf1:
0054ABF1  85 C0                     TEST EAX,EAX
0054ABF3  89 86 EB 04 00 00         MOV dword ptr [ESI + 0x4eb],EAX
0054ABF9  0F 84 AC 01 00 00         JZ 0x0054adab
0054ABFF  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0054AC05  6A 00                     PUSH 0x0
0054AC07  6A 00                     PUSH 0x0
0054AC09  6A 00                     PUSH 0x0
0054AC0B  6A 07                     PUSH 0x7
0054AC0D  6A 01                     PUSH 0x1
0054AC0F  51                        PUSH ECX
0054AC10  8B C8                     MOV ECX,EAX
0054AC12  E8 89 AC 1C 00            CALL 0x007158a0
0054AC17  8B 8E EB 04 00 00         MOV ECX,dword ptr [ESI + 0x4eb]
0054AC1D  A1 84 67 80 00            MOV EAX,[0x00806784]
0054AC22  6A FF                     PUSH -0x1
0054AC24  68 B4 7F 7C 00            PUSH 0x7c7fb4
0054AC29  8B 11                     MOV EDX,dword ptr [ECX]
0054AC2B  6A 00                     PUSH 0x0
0054AC2D  6A 07                     PUSH 0x7
0054AC2F  50                        PUSH EAX
0054AC30  FF 52 04                  CALL dword ptr [EDX + 0x4]
0054AC33  8B 8E EB 04 00 00         MOV ECX,dword ptr [ESI + 0x4eb]
0054AC39  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054AC3C  C7 41 40 19 00 00 00      MOV dword ptr [ECX + 0x40],0x19
0054AC43  8B 96 EB 04 00 00         MOV EDX,dword ptr [ESI + 0x4eb]
0054AC49  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054AC4C  C7 42 08 00 00 00 00      MOV dword ptr [EDX + 0x8],0x0
0054AC53  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0054AC56  89 86 EF 04 00 00         MOV dword ptr [ESI + 0x4ef],EAX
0054AC5C  8B 86 EB 04 00 00         MOV EAX,dword ptr [ESI + 0x4eb]
0054AC62  89 8E F3 04 00 00         MOV dword ptr [ESI + 0x4f3],ECX
0054AC68  89 96 F7 04 00 00         MOV dword ptr [ESI + 0x4f7],EDX
0054AC6E  8D 48 20                  LEA ECX,[EAX + 0x20]
0054AC71  83 C0 1C                  ADD EAX,0x1c
0054AC74  51                        PUSH ECX
0054AC75  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0054AC78  50                        PUSH EAX
0054AC79  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0054AC7C  52                        PUSH EDX
0054AC7D  50                        PUSH EAX
0054AC7E  51                        PUSH ECX
0054AC7F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054AC85  E8 E6 7C 19 00            CALL 0x006e2970
0054AC8A  8B 96 E7 04 00 00         MOV EDX,dword ptr [ESI + 0x4e7]
0054AC90  8B 8E EB 04 00 00         MOV ECX,dword ptr [ESI + 0x4eb]
0054AC96  8B 42 09                  MOV EAX,dword ptr [EDX + 0x9]
0054AC99  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
0054AC9C  99                        CDQ
0054AC9D  2B C2                     SUB EAX,EDX
0054AC9F  D1 F8                     SAR EAX,0x1
0054ACA1  F7 D8                     NEG EAX
0054ACA3  03 D8                     ADD EBX,EAX
0054ACA5  89 59 1C                  MOV dword ptr [ECX + 0x1c],EBX
0054ACA8  8B 86 E7 04 00 00         MOV EAX,dword ptr [ESI + 0x4e7]
0054ACAE  8B 8E EB 04 00 00         MOV ECX,dword ptr [ESI + 0x4eb]
0054ACB4  8B 40 0D                  MOV EAX,dword ptr [EAX + 0xd]
0054ACB7  99                        CDQ
0054ACB8  2B C2                     SUB EAX,EDX
0054ACBA  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
0054ACBD  D1 F8                     SAR EAX,0x1
0054ACBF  F7 D8                     NEG EAX
0054ACC1  03 D0                     ADD EDX,EAX
0054ACC3  89 51 20                  MOV dword ptr [ECX + 0x20],EDX
0054ACC6  8B B6 EB 04 00 00         MOV ESI,dword ptr [ESI + 0x4eb]
0054ACCC  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0054ACCF  83 F8 FF                  CMP EAX,-0x1
0054ACD2  0F 84 D3 00 00 00         JZ 0x0054adab
0054ACD8  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0054ACDB  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0054ACDE  51                        PUSH ECX
0054ACDF  52                        PUSH EDX
0054ACE0  6A FE                     PUSH -0x2
0054ACE2  50                        PUSH EAX
0054ACE3  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
0054ACE6  50                        PUSH EAX
0054ACE7  E8 E4 87 16 00            CALL 0x006b34d0
0054ACEC  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0054ACEF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054ACF4  5F                        POP EDI
0054ACF5  5E                        POP ESI
0054ACF6  5B                        POP EBX
0054ACF7  8B E5                     MOV ESP,EBP
0054ACF9  5D                        POP EBP
0054ACFA  C2 0C 00                  RET 0xc
FUN_0054a9b0::cf_common_exit_0054ACFD:
0054ACFD  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0054AD00  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0054AD07  6A 00                     PUSH 0x0
0054AD09  8B 87 E7 04 00 00         MOV EAX,dword ptr [EDI + 0x4e7]
0054AD0F  8B 48 0D                  MOV ECX,dword ptr [EAX + 0xd]
0054AD12  8B 70 09                  MOV ESI,dword ptr [EAX + 0x9]
0054AD15  8B C1                     MOV EAX,ECX
0054AD17  99                        CDQ
0054AD18  2B C2                     SUB EAX,EDX
0054AD1A  D1 F8                     SAR EAX,0x1
0054AD1C  83 E8 0E                  SUB EAX,0xe
0054AD1F  50                        PUSH EAX
0054AD20  8B C6                     MOV EAX,ESI
0054AD22  99                        CDQ
0054AD23  2B C2                     SUB EAX,EDX
0054AD25  D1 F8                     SAR EAX,0x1
0054AD27  50                        PUSH EAX
0054AD28  51                        PUSH ECX
0054AD29  56                        PUSH ESI
0054AD2A  6A 00                     PUSH 0x0
0054AD2C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0054AD2F  6A 01                     PUSH 0x1
0054AD31  51                        PUSH ECX
0054AD32  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054AD38  E8 23 D9 19 00            CALL 0x006e8660
0054AD3D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054AD40  85 C9                     TEST ECX,ECX
0054AD42  7C 67                     JL 0x0054adab
0054AD44  8B 87 E7 04 00 00         MOV EAX,dword ptr [EDI + 0x4e7]
0054AD4A  6A 01                     PUSH 0x1
0054AD4C  8B 50 21                  MOV EDX,dword ptr [EAX + 0x21]
0054AD4F  8B 00                     MOV EAX,dword ptr [EAX]
0054AD51  52                        PUSH EDX
0054AD52  50                        PUSH EAX
0054AD53  6A 00                     PUSH 0x0
0054AD55  51                        PUSH ECX
0054AD56  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054AD5C  E8 7F EB 19 00            CALL 0x006e98e0
0054AD61  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054AD64  6A 00                     PUSH 0x0
0054AD66  51                        PUSH ECX
0054AD67  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054AD6D  E8 2E FD 19 00            CALL 0x006eaaa0
0054AD72  D9 45 10                  FLD float ptr [EBP + 0x10]
0054AD75  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0054AD7B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0054AD7E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054AD81  51                        PUSH ECX
0054AD82  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054AD85  D9 1C 24                  FSTP float ptr [ESP]
0054AD88  52                        PUSH EDX
0054AD89  50                        PUSH EAX
0054AD8A  51                        PUSH ECX
0054AD8B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054AD91  E8 CA FB 19 00            CALL 0x006ea960
0054AD96  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0054AD99  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054AD9F  6A 00                     PUSH 0x0
0054ADA1  6A FF                     PUSH -0x1
0054ADA3  6A 01                     PUSH 0x1
0054ADA5  52                        PUSH EDX
0054ADA6  E8 A5 F2 19 00            CALL 0x006ea050
LAB_0054adab:
0054ADAB  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0054ADAE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054ADB3  5F                        POP EDI
0054ADB4  5E                        POP ESI
0054ADB5  5B                        POP EBX
0054ADB6  8B E5                     MOV ESP,EBP
0054ADB8  5D                        POP EBP
0054ADB9  C2 0C 00                  RET 0xc
LAB_0054adbc:
0054ADBC  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0054ADBF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_0054adc5:
0054ADC5  5F                        POP EDI
0054ADC6  5E                        POP ESI
0054ADC7  5B                        POP EBX
0054ADC8  8B E5                     MOV ESP,EBP
0054ADCA  5D                        POP EBP
0054ADCB  C2 0C 00                  RET 0xc
