FUN_00624920:
00624920  55                        PUSH EBP
00624921  8B EC                     MOV EBP,ESP
00624923  83 EC 0C                  SUB ESP,0xc
00624926  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00624929  53                        PUSH EBX
0062492A  56                        PUSH ESI
0062492B  8B F1                     MOV ESI,ECX
0062492D  33 C9                     XOR ECX,ECX
0062492F  83 F8 03                  CMP EAX,0x3
00624932  57                        PUSH EDI
00624933  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00624936  0F 87 8E 07 00 00         JA 0x006250ca
switchD_0062493c::switchD:
0062493C  FF 24 85 54 51 62 00      JMP dword ptr [EAX*0x4 + 0x625154]
switchD_0062493c::caseD_0:
00624943  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00624946  8B 86 C2 02 00 00         MOV EAX,dword ptr [ESI + 0x2c2]
0062494C  89 02                     MOV dword ptr [EDX],EAX
0062494E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00624951  8B 86 C6 02 00 00         MOV EAX,dword ptr [ESI + 0x2c6]
00624957  89 02                     MOV dword ptr [EDX],EAX
00624959  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0062495C  8B 86 CA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ca]
00624962  89 02                     MOV dword ptr [EDX],EAX
00624964  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00624969  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
0062496F  8B 86 0F 03 00 00         MOV EAX,dword ptr [ESI + 0x30f]
00624975  3B D0                     CMP EDX,EAX
00624977  0F 82 18 02 00 00         JC 0x00624b95
0062497D  8A 86 AD 02 00 00         MOV AL,byte ptr [ESI + 0x2ad]
00624983  3C 03                     CMP AL,0x3
00624985  77 25                     JA 0x006249ac
00624987  89 8E AE 02 00 00         MOV dword ptr [ESI + 0x2ae],ECX
0062498D  74 04                     JZ 0x00624993
0062498F  3C 02                     CMP AL,0x2
00624991  75 07                     JNZ 0x0062499a
LAB_00624993:
00624993  C6 86 0E 03 00 00 01      MOV byte ptr [ESI + 0x30e],0x1
LAB_0062499a:
0062499A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062499D  89 8E 0A 03 00 00         MOV dword ptr [ESI + 0x30a],ECX
006249A3  5F                        POP EDI
006249A4  5E                        POP ESI
006249A5  5B                        POP EBX
006249A6  8B E5                     MOV ESP,EBP
006249A8  5D                        POP EBP
006249A9  C2 10 00                  RET 0x10
LAB_006249ac:
006249AC  8B 86 CA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ca]
006249B2  8B 8E C2 02 00 00         MOV ECX,dword ptr [ESI + 0x2c2]
006249B8  89 86 F2 02 00 00         MOV dword ptr [ESI + 0x2f2],EAX
006249BE  50                        PUSH EAX
006249BF  8B 86 C6 02 00 00         MOV EAX,dword ptr [ESI + 0x2c6]
006249C5  BF 01 00 00 00            MOV EDI,0x1
006249CA  50                        PUSH EAX
006249CB  51                        PUSH ECX
006249CC  57                        PUSH EDI
006249CD  8B CE                     MOV ECX,ESI
006249CF  89 BE 02 03 00 00         MOV dword ptr [ESI + 0x302],EDI
006249D5  E8 93 03 DE FF            CALL 0x00404d6d
006249DA  85 C0                     TEST EAX,EAX
006249DC  0F 84 E8 06 00 00         JZ 0x006250ca
006249E2  66 8B 86 CA 02 00 00      MOV AX,word ptr [ESI + 0x2ca]
006249E9  66 8B 96 C2 02 00 00      MOV DX,word ptr [ESI + 0x2c2]
006249F0  66 89 46 36               MOV word ptr [ESI + 0x36],AX
006249F4  66 89 46 38               MOV word ptr [ESI + 0x38],AX
006249F8  89 BE EE 02 00 00         MOV dword ptr [ESI + 0x2ee],EDI
006249FE  89 BE AE 02 00 00         MOV dword ptr [ESI + 0x2ae],EDI
00624A04  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00624A07  8B C7                     MOV EAX,EDI
00624A09  66 89 56 34               MOV word ptr [ESI + 0x34],DX
00624A0D  5F                        POP EDI
00624A0E  5E                        POP ESI
00624A0F  5B                        POP EBX
00624A10  8B E5                     MOV ESP,EBP
00624A12  5D                        POP EBP
00624A13  C2 10 00                  RET 0x10
switchD_0062493c::caseD_1:
00624A16  8A 56 62                  MOV DL,byte ptr [ESI + 0x62]
00624A19  84 D2                     TEST DL,DL
00624A1B  0F 84 87 01 00 00         JZ 0x00624ba8
00624A21  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00624A26  8B 9E 0F 03 00 00         MOV EBX,dword ptr [ESI + 0x30f]
00624A2C  81 E2 FF 00 00 00         AND EDX,0xff
00624A32  8B BE 02 03 00 00         MOV EDI,dword ptr [ESI + 0x302]
00624A38  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00624A3E  8B 8E F2 02 00 00         MOV ECX,dword ptr [ESI + 0x2f2]
00624A44  2B C3                     SUB EAX,EBX
00624A46  0F AF C2                  IMUL EAX,EDX
00624A49  0F AF C7                  IMUL EAX,EDI
00624A4C  99                        CDQ
00624A4D  83 E2 0F                  AND EDX,0xf
00624A50  03 C2                     ADD EAX,EDX
00624A52  0F BF 56 38               MOVSX EDX,word ptr [ESI + 0x38]
00624A56  C1 F8 04                  SAR EAX,0x4
00624A59  03 C2                     ADD EAX,EDX
00624A5B  85 FF                     TEST EDI,EDI
00624A5D  0F 8E 92 00 00 00         JLE 0x00624af5
00624A63  33 D2                     XOR EDX,EDX
00624A65  8A 96 AD 02 00 00         MOV DL,byte ptr [ESI + 0x2ad]
00624A6B  8B 14 95 98 03 7D 00      MOV EDX,dword ptr [EDX*0x4 + 0x7d0398]
00624A72  03 D1                     ADD EDX,ECX
00624A74  3B C2                     CMP EAX,EDX
00624A76  0F 8E FE 00 00 00         JLE 0x00624b7a
00624A7C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00624A7F  8B 86 C2 02 00 00         MOV EAX,dword ptr [ESI + 0x2c2]
00624A85  BF 01 00 00 00            MOV EDI,0x1
00624A8A  89 02                     MOV dword ptr [EDX],EAX
00624A8C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00624A8F  8B 86 C6 02 00 00         MOV EAX,dword ptr [ESI + 0x2c6]
00624A95  89 02                     MOV dword ptr [EDX],EAX
00624A97  33 C0                     XOR EAX,EAX
00624A99  8A 86 AD 02 00 00         MOV AL,byte ptr [ESI + 0x2ad]
00624A9F  8B 14 85 98 03 7D 00      MOV EDX,dword ptr [EAX*0x4 + 0x7d0398]
00624AA6  8D 44 0A FF               LEA EAX,[EDX + ECX*0x1 + -0x1]
00624AAA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00624AAD  89 02                     MOV dword ptr [EDX],EAX
00624AAF  33 C0                     XOR EAX,EAX
00624AB1  8A 86 AD 02 00 00         MOV AL,byte ptr [ESI + 0x2ad]
00624AB7  8B 14 85 98 03 7D 00      MOV EDX,dword ptr [EAX*0x4 + 0x7d0398]
00624ABE  2B CA                     SUB ECX,EDX
00624AC0  8B 96 C2 02 00 00         MOV EDX,dword ptr [ESI + 0x2c2]
00624AC6  51                        PUSH ECX
00624AC7  8B 8E C6 02 00 00         MOV ECX,dword ptr [ESI + 0x2c6]
00624ACD  51                        PUSH ECX
00624ACE  52                        PUSH EDX
00624ACF  57                        PUSH EDI
00624AD0  8B CE                     MOV ECX,ESI
00624AD2  E8 96 02 DE FF            CALL 0x00404d6d
00624AD7  85 C0                     TEST EAX,EAX
00624AD9  74 0C                     JZ 0x00624ae7
00624ADB  89 BE EE 02 00 00         MOV dword ptr [ESI + 0x2ee],EDI
00624AE1  89 BE AE 02 00 00         MOV dword ptr [ESI + 0x2ae],EDI
LAB_00624ae7:
00624AE7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00624AEA  8B C7                     MOV EAX,EDI
00624AEC  5F                        POP EDI
00624AED  5E                        POP ESI
00624AEE  5B                        POP EBX
00624AEF  8B E5                     MOV ESP,EBP
00624AF1  5D                        POP EBP
00624AF2  C2 10 00                  RET 0x10
LAB_00624af5:
00624AF5  33 D2                     XOR EDX,EDX
00624AF7  8B F9                     MOV EDI,ECX
00624AF9  8A 96 AD 02 00 00         MOV DL,byte ptr [ESI + 0x2ad]
00624AFF  2B 3C 95 98 03 7D 00      SUB EDI,dword ptr [EDX*0x4 + 0x7d0398]
00624B06  3B C7                     CMP EAX,EDI
00624B08  7D 70                     JGE 0x00624b7a
00624B0A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00624B0D  8B 86 C2 02 00 00         MOV EAX,dword ptr [ESI + 0x2c2]
00624B13  89 02                     MOV dword ptr [EDX],EAX
00624B15  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00624B18  8B 86 C6 02 00 00         MOV EAX,dword ptr [ESI + 0x2c6]
00624B1E  89 02                     MOV dword ptr [EDX],EAX
00624B20  33 C0                     XOR EAX,EAX
00624B22  8A 86 AD 02 00 00         MOV AL,byte ptr [ESI + 0x2ad]
00624B28  8B D1                     MOV EDX,ECX
00624B2A  8B 3C 85 98 03 7D 00      MOV EDI,dword ptr [EAX*0x4 + 0x7d0398]
00624B31  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00624B34  2B D7                     SUB EDX,EDI
00624B36  BF 01 00 00 00            MOV EDI,0x1
00624B3B  42                        INC EDX
00624B3C  89 10                     MOV dword ptr [EAX],EDX
00624B3E  33 D2                     XOR EDX,EDX
00624B40  8A 96 AD 02 00 00         MOV DL,byte ptr [ESI + 0x2ad]
00624B46  8B 04 95 98 03 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d0398]
00624B4D  8B 96 C2 02 00 00         MOV EDX,dword ptr [ESI + 0x2c2]
00624B53  03 C1                     ADD EAX,ECX
00624B55  8B 8E C6 02 00 00         MOV ECX,dword ptr [ESI + 0x2c6]
00624B5B  50                        PUSH EAX
00624B5C  51                        PUSH ECX
00624B5D  52                        PUSH EDX
00624B5E  57                        PUSH EDI
00624B5F  8B CE                     MOV ECX,ESI
00624B61  E8 07 02 DE FF            CALL 0x00404d6d
00624B66  89 BE AE 02 00 00         MOV dword ptr [ESI + 0x2ae],EDI
00624B6C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00624B6F  8B C7                     MOV EAX,EDI
00624B71  5F                        POP EDI
00624B72  5E                        POP ESI
00624B73  5B                        POP EBX
00624B74  8B E5                     MOV ESP,EBP
00624B76  5D                        POP EBP
00624B77  C2 10 00                  RET 0x10
LAB_00624b7a:
00624B7A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00624B7D  8B 8E C2 02 00 00         MOV ECX,dword ptr [ESI + 0x2c2]
00624B83  89 0A                     MOV dword ptr [EDX],ECX
00624B85  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00624B88  8B 8E C6 02 00 00         MOV ECX,dword ptr [ESI + 0x2c6]
00624B8E  89 0A                     MOV dword ptr [EDX],ECX
LAB_00624b90:
00624B90  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00624B93  89 01                     MOV dword ptr [ECX],EAX
LAB_00624b95:
00624B95  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00624B9C  5F                        POP EDI
00624B9D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00624BA0  5E                        POP ESI
00624BA1  5B                        POP EBX
00624BA2  8B E5                     MOV ESP,EBP
00624BA4  5D                        POP EBP
00624BA5  C2 10 00                  RET 0x10
LAB_00624ba8:
00624BA8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00624BAB  8B 96 C2 02 00 00         MOV EDX,dword ptr [ESI + 0x2c2]
00624BB1  89 10                     MOV dword ptr [EAX],EDX
00624BB3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00624BB6  8B 8E C6 02 00 00         MOV ECX,dword ptr [ESI + 0x2c6]
00624BBC  89 0A                     MOV dword ptr [EDX],ECX
00624BBE  8B 86 CA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ca]
00624BC4  EB CA                     JMP 0x00624b90
switchD_0062493c::caseD_2:
00624BC6  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00624BCC  8B 8E 0F 03 00 00         MOV ECX,dword ptr [ESI + 0x30f]
00624BD2  8B BE 06 03 00 00         MOV EDI,dword ptr [ESI + 0x306]
00624BD8  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00624BDD  8B 9A E4 00 00 00         MOV EBX,dword ptr [EDX + 0xe4]
00624BE3  2B D9                     SUB EBX,ECX
00624BE5  8B 8E FA 02 00 00         MOV ECX,dword ptr [ESI + 0x2fa]
00624BEB  0F AF FB                  IMUL EDI,EBX
00624BEE  0F AF CF                  IMUL ECX,EDI
00624BF1  F7 E9                     IMUL ECX
00624BF3  0F BF 4E 34               MOVSX ECX,word ptr [ESI + 0x34]
00624BF7  C1 FA 0C                  SAR EDX,0xc
00624BFA  8B C2                     MOV EAX,EDX
00624BFC  C1 E8 1F                  SHR EAX,0x1f
00624BFF  03 D0                     ADD EDX,EAX
00624C01  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00624C06  03 D1                     ADD EDX,ECX
00624C08  8B 8E FE 02 00 00         MOV ECX,dword ptr [ESI + 0x2fe]
00624C0E  0F AF CF                  IMUL ECX,EDI
00624C11  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00624C14  F7 E9                     IMUL ECX
00624C16  0F BF 4E 36               MOVSX ECX,word ptr [ESI + 0x36]
00624C1A  C1 FA 0C                  SAR EDX,0xc
00624C1D  8B C2                     MOV EAX,EDX
00624C1F  C1 E8 1F                  SHR EAX,0x1f
00624C22  03 D0                     ADD EDX,EAX
00624C24  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00624C29  03 D1                     ADD EDX,ECX
00624C2B  8B 8E 02 03 00 00         MOV ECX,dword ptr [ESI + 0x302]
00624C31  0F AF CF                  IMUL ECX,EDI
00624C34  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00624C37  F7 E9                     IMUL ECX
00624C39  0F BF 4E 38               MOVSX ECX,word ptr [ESI + 0x38]
00624C3D  C1 FA 0C                  SAR EDX,0xc
00624C40  8B C2                     MOV EAX,EDX
00624C42  C1 E8 1F                  SHR EAX,0x1f
00624C45  03 D0                     ADD EDX,EAX
00624C47  03 D1                     ADD EDX,ECX
00624C49  8B CE                     MOV ECX,ESI
00624C4B  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00624C4E  E8 67 FF DD FF            CALL 0x00404bba
00624C53  83 FB 01                  CMP EBX,0x1
00624C56  7E 62                     JLE 0x00624cba
00624C58  33 D2                     XOR EDX,EDX
00624C5A  6A 01                     PUSH 0x1
00624C5C  8A 96 AD 02 00 00         MOV DL,byte ptr [ESI + 0x2ad]
00624C62  6A 00                     PUSH 0x0
00624C64  8B 0C 95 D0 04 7D 00      MOV ECX,dword ptr [EDX*0x4 + 0x7d04d0]
00624C6B  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00624C6E  51                        PUSH ECX
00624C6F  68 FF FF 00 00            PUSH 0xffff
00624C74  0F BF 4E 58               MOVSX ECX,word ptr [ESI + 0x58]
00624C78  52                        PUSH EDX
00624C79  50                        PUSH EAX
00624C7A  8B 86 62 02 00 00         MOV EAX,dword ptr [ESI + 0x262]
00624C80  0F BF 56 56               MOVSX EDX,word ptr [ESI + 0x56]
00624C84  50                        PUSH EAX
00624C85  51                        PUSH ECX
00624C86  0F BF 46 54               MOVSX EAX,word ptr [ESI + 0x54]
00624C8A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00624C8D  52                        PUSH EDX
00624C8E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00624C91  50                        PUSH EAX
00624C92  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00624C95  51                        PUSH ECX
00624C96  52                        PUSH EDX
00624C97  50                        PUSH EAX
00624C98  8D 8E 31 02 00 00         LEA ECX,[ESI + 0x231]
00624C9E  E8 73 F8 DD FF            CALL 0x00404516
00624CA3  85 C0                     TEST EAX,EAX
00624CA5  7E 13                     JLE 0x00624cba
00624CA7  8B CE                     MOV ECX,ESI
00624CA9  E8 B0 05 DE FF            CALL 0x0040525e
00624CAE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00624CB1  5F                        POP EDI
00624CB2  5E                        POP ESI
00624CB3  5B                        POP EBX
00624CB4  8B E5                     MOV ESP,EBP
00624CB6  5D                        POP EBP
00624CB7  C2 10 00                  RET 0x10
LAB_00624cba:
00624CBA  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00624CBD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00624CC0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00624CC3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00624CC6  89 0B                     MOV dword ptr [EBX],ECX
00624CC8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00624CCB  89 10                     MOV dword ptr [EAX],EDX
00624CCD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00624CD0  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00624CD7  89 0A                     MOV dword ptr [EDX],ECX
00624CD9  8B 86 F6 02 00 00         MOV EAX,dword ptr [ESI + 0x2f6]
00624CDF  3B F8                     CMP EDI,EAX
00624CE1  0F 8C E3 03 00 00         JL 0x006250ca
00624CE7  0F BF 46 3A               MOVSX EAX,word ptr [ESI + 0x3a]
00624CEB  0F BF 4E 3C               MOVSX ECX,word ptr [ESI + 0x3c]
00624CEF  0F BF 56 3E               MOVSX EDX,word ptr [ESI + 0x3e]
00624CF3  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00624CF6  89 03                     MOV dword ptr [EBX],EAX
00624CF8  52                        PUSH EDX
00624CF9  51                        PUSH ECX
00624CFA  89 0F                     MOV dword ptr [EDI],ECX
00624CFC  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00624CFF  50                        PUSH EAX
00624D00  6A 00                     PUSH 0x0
00624D02  8B CE                     MOV ECX,ESI
00624D04  89 17                     MOV dword ptr [EDI],EDX
00624D06  E8 62 00 DE FF            CALL 0x00404d6d
00624D0B  85 C0                     TEST EAX,EAX
00624D0D  0F 84 B7 03 00 00         JZ 0x006250ca
00624D13  C7 86 EE 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2ee],0x0
00624D1D  C7 86 AE 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2ae],0x1
00624D27  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00624D2C  5F                        POP EDI
00624D2D  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00624D33  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00624D36  89 8E 0F 03 00 00         MOV dword ptr [ESI + 0x30f],ECX
00624D3C  5E                        POP ESI
00624D3D  5B                        POP EBX
00624D3E  8B E5                     MOV ESP,EBP
00624D40  5D                        POP EBP
00624D41  C2 10 00                  RET 0x10
switchD_0062493c::caseD_3:
00624D44  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00624D4A  8B BE 0F 03 00 00         MOV EDI,dword ptr [ESI + 0x30f]
00624D50  8B 9E 02 03 00 00         MOV EBX,dword ptr [ESI + 0x302]
00624D56  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
00624D5C  2B CF                     SUB ECX,EDI
00624D5E  0F AF 8E 06 03 00 00      IMUL ECX,dword ptr [ESI + 0x306]
00624D65  0F BF 46 38               MOVSX EAX,word ptr [ESI + 0x38]
00624D69  0F AF D9                  IMUL EBX,ECX
00624D6C  03 D8                     ADD EBX,EAX
00624D6E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00624D71  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00624D74  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00624D79  78 11                     JS 0x00624d8c
00624D7B  F7 EB                     IMUL EBX
00624D7D  C1 FA 06                  SAR EDX,0x6
00624D80  8B C2                     MOV EAX,EDX
00624D82  C1 E8 1F                  SHR EAX,0x1f
00624D85  03 D0                     ADD EDX,EAX
00624D87  0F BF FA                  MOVSX EDI,DX
00624D8A  EB 10                     JMP 0x00624d9c
LAB_00624d8c:
00624D8C  F7 EB                     IMUL EBX
00624D8E  C1 FA 06                  SAR EDX,0x6
00624D91  8B C2                     MOV EAX,EDX
00624D93  C1 E8 1F                  SHR EAX,0x1f
00624D96  03 D0                     ADD EDX,EAX
00624D98  0F BF FA                  MOVSX EDI,DX
00624D9B  4F                        DEC EDI
LAB_00624d9c:
00624D9C  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00624DA0  3B FA                     CMP EDI,EDX
00624DA2  0F 84 BF 02 00 00         JZ 0x00625067
00624DA8  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
00624DAC  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00624DB0  57                        PUSH EDI
00624DB1  50                        PUSH EAX
00624DB2  51                        PUSH ECX
00624DB3  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00624DB9  E8 7D FF DD FF            CALL 0x00404d3b
00624DBE  85 C0                     TEST EAX,EAX
00624DC0  0F 84 13 03 00 00         JZ 0x006250d9
00624DC6  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00624DCA  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00624DCE  66 85 C0                  TEST AX,AX
00624DD1  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00624DD4  7C 63                     JL 0x00624e39
00624DD6  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
00624DDD  66 3B C2                  CMP AX,DX
00624DE0  7D 57                     JGE 0x00624e39
00624DE2  66 85 C9                  TEST CX,CX
00624DE5  7C 52                     JL 0x00624e39
00624DE7  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00624DEE  7D 49                     JGE 0x00624e39
00624DF0  66 85 FF                  TEST DI,DI
00624DF3  7C 44                     JL 0x00624e39
00624DF5  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
00624DFC  7D 3B                     JGE 0x00624e39
00624DFE  0F BF D2                  MOVSX EDX,DX
00624E01  0F BF C9                  MOVSX ECX,CX
00624E04  0F AF D1                  IMUL EDX,ECX
00624E07  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00624E0E  0F BF DF                  MOVSX EBX,DI
00624E11  0F AF CB                  IMUL ECX,EBX
00624E14  03 D1                     ADD EDX,ECX
00624E16  0F BF C8                  MOVSX ECX,AX
00624E19  03 D1                     ADD EDX,ECX
00624E1B  33 C9                     XOR ECX,ECX
00624E1D  8A 8E 8E 00 00 00         MOV CL,byte ptr [ESI + 0x8e]
00624E23  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
00624E26  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00624E2C  83 3C 91 00               CMP dword ptr [ECX + EDX*0x4],0x0
00624E30  0F 85 A0 02 00 00         JNZ 0x006250d6
00624E36  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_00624e39:
00624E39  0F BF 5E 4B               MOVSX EBX,word ptr [ESI + 0x4b]
00624E3D  0F BF C0                  MOVSX EAX,AX
00624E40  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00624E43  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00624E46  33 D2                     XOR EDX,EDX
00624E48  50                        PUSH EAX
00624E49  8A 96 8E 00 00 00         MOV DL,byte ptr [ESI + 0x8e]
00624E4F  56                        PUSH ESI
00624E50  0F BF C9                  MOVSX ECX,CX
00624E53  52                        PUSH EDX
00624E54  53                        PUSH EBX
00624E55  51                        PUSH ECX
00624E56  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00624E59  51                        PUSH ECX
00624E5A  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00624E60  E8 5C 00 DE FF            CALL 0x00404ec1
00624E65  85 C0                     TEST EAX,EAX
00624E67  75 06                     JNZ 0x00624e6f
00624E69  FE 8E 14 03 00 00         DEC byte ptr [ESI + 0x314]
LAB_00624e6f:
00624E6F  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00624E73  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00624E77  33 D2                     XOR EDX,EDX
00624E79  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00624E7C  8A 96 8E 00 00 00         MOV DL,byte ptr [ESI + 0x8e]
00624E82  66 85 C0                  TEST AX,AX
00624E85  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00624E88  7C 64                     JL 0x00624eee
00624E8A  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
00624E91  66 3B C2                  CMP AX,DX
00624E94  7D 58                     JGE 0x00624eee
00624E96  66 85 C9                  TEST CX,CX
00624E99  7C 53                     JL 0x00624eee
00624E9B  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00624EA2  7D 4A                     JGE 0x00624eee
00624EA4  66 85 FF                  TEST DI,DI
00624EA7  7C 45                     JL 0x00624eee
00624EA9  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
00624EB0  7D 3C                     JGE 0x00624eee
00624EB2  0F BF C9                  MOVSX ECX,CX
00624EB5  0F BF D2                  MOVSX EDX,DX
00624EB8  0F AF CA                  IMUL ECX,EDX
00624EBB  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00624EC2  0F BF DF                  MOVSX EBX,DI
00624EC5  0F AF D3                  IMUL EDX,EBX
00624EC8  03 CA                     ADD ECX,EDX
00624ECA  0F BF D0                  MOVSX EDX,AX
00624ECD  03 CA                     ADD ECX,EDX
00624ECF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00624ED2  81 E2 FF 00 00 00         AND EDX,0xff
00624ED8  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
00624EDB  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00624EE1  83 3C 8A 00               CMP dword ptr [EDX + ECX*0x4],0x0
00624EE5  0F 85 EB 01 00 00         JNZ 0x006250d6
00624EEB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00624eee:
00624EEE  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00624EF1  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00624EF4  52                        PUSH EDX
00624EF5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00624EF8  56                        PUSH ESI
00624EF9  52                        PUSH EDX
00624EFA  57                        PUSH EDI
00624EFB  51                        PUSH ECX
00624EFC  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00624F02  50                        PUSH EAX
00624F03  E8 1D C4 DD FF            CALL 0x00401325
00624F08  85 C0                     TEST EAX,EAX
00624F0A  0F 85 C9 01 00 00         JNZ 0x006250d9
00624F10  8A 96 14 03 00 00         MOV DL,byte ptr [ESI + 0x314]
00624F16  8A 86 AD 02 00 00         MOV AL,byte ptr [ESI + 0x2ad]
00624F1C  FE C2                     INC DL
00624F1E  3C 02                     CMP AL,0x2
00624F20  88 96 14 03 00 00         MOV byte ptr [ESI + 0x314],DL
00624F26  0F 86 CF 00 00 00         JBE 0x00624ffb
00624F2C  3C 03                     CMP AL,0x3
00624F2E  0F 85 2C 01 00 00         JNZ 0x00625060
00624F34  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00624F3A  85 C9                     TEST ECX,ECX
00624F3C  0F 84 1E 01 00 00         JZ 0x00625060
00624F42  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00624F45  8B 15 C0 02 7D 00         MOV EDX,dword ptr [0x007d02c0]
00624F4B  6A FF                     PUSH -0x1
00624F4D  50                        PUSH EAX
00624F4E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00624F51  52                        PUSH EDX
00624F52  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00624F56  50                        PUSH EAX
00624F57  52                        PUSH EDX
00624F58  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00624F5C  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00624F60  50                        PUSH EAX
00624F61  52                        PUSH EDX
00624F62  E8 8B C9 DD FF            CALL 0x004018f2
00624F67  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00624F6A  33 C9                     XOR ECX,ECX
00624F6C  8A 8E AD 02 00 00         MOV CL,byte ptr [ESI + 0x2ad]
00624F72  50                        PUSH EAX
00624F73  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00624F76  8B 14 8D B4 02 7D 00      MOV EDX,dword ptr [ECX*0x4 + 0x7d02b4]
00624F7D  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
00624F81  52                        PUSH EDX
00624F82  50                        PUSH EAX
00624F83  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00624F87  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00624F8B  51                        PUSH ECX
00624F8C  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00624F92  52                        PUSH EDX
00624F93  50                        PUSH EAX
00624F94  E8 F8 F2 DD FF            CALL 0x00404291
00624F99  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00624F9C  33 D2                     XOR EDX,EDX
00624F9E  8A 96 AD 02 00 00         MOV DL,byte ptr [ESI + 0x2ad]
00624FA4  6A FF                     PUSH -0x1
00624FA6  51                        PUSH ECX
00624FA7  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00624FAA  8B 04 95 B4 02 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d02b4]
00624FB1  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00624FB5  50                        PUSH EAX
00624FB6  51                        PUSH ECX
00624FB7  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00624FBB  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00624FC1  57                        PUSH EDI
00624FC2  52                        PUSH EDX
00624FC3  50                        PUSH EAX
00624FC4  E8 C3 E8 DD FF            CALL 0x0040388c
00624FC9  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00624FCC  33 D2                     XOR EDX,EDX
00624FCE  8A 96 AD 02 00 00         MOV DL,byte ptr [ESI + 0x2ad]
00624FD4  6A FF                     PUSH -0x1
00624FD6  51                        PUSH ECX
00624FD7  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00624FDA  8B 04 95 B4 02 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d02b4]
00624FE1  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00624FE5  50                        PUSH EAX
00624FE6  51                        PUSH ECX
00624FE7  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00624FEB  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00624FF1  57                        PUSH EDI
00624FF2  52                        PUSH EDX
00624FF3  50                        PUSH EAX
00624FF4  E8 26 C4 DD FF            CALL 0x0040141f
00624FF9  EB 65                     JMP 0x00625060
LAB_00624ffb:
00624FFB  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00625001  85 C9                     TEST ECX,ECX
00625003  74 5B                     JZ 0x00625060
00625005  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00625008  25 FF 00 00 00            AND EAX,0xff
0062500D  6A FF                     PUSH -0x1
0062500F  52                        PUSH EDX
00625010  8B 04 85 B4 02 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d02b4]
00625017  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0062501A  50                        PUSH EAX
0062501B  52                        PUSH EDX
0062501C  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00625020  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00625024  50                        PUSH EAX
00625025  52                        PUSH EDX
00625026  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0062502A  50                        PUSH EAX
0062502B  E8 C2 C8 DD FF            CALL 0x004018f2
00625030  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00625033  33 D2                     XOR EDX,EDX
00625035  8A 96 AD 02 00 00         MOV DL,byte ptr [ESI + 0x2ad]
0062503B  6A FF                     PUSH -0x1
0062503D  51                        PUSH ECX
0062503E  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00625041  8B 04 95 B4 02 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d02b4]
00625048  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0062504C  50                        PUSH EAX
0062504D  51                        PUSH ECX
0062504E  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00625052  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00625058  57                        PUSH EDI
00625059  52                        PUSH EDX
0062505A  50                        PUSH EAX
0062505B  E8 2C E8 DD FF            CALL 0x0040388c
LAB_00625060:
00625060  66 89 7E 4B               MOV word ptr [ESI + 0x4b],DI
LAB_00625064:
00625064  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_00625067:
00625067  0F BF 56 3A               MOVSX EDX,word ptr [ESI + 0x3a]
0062506B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062506E  BF 01 00 00 00            MOV EDI,0x1
00625073  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00625076  89 10                     MOV dword ptr [EAX],EDX
00625078  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062507B  0F BF 56 3C               MOVSX EDX,word ptr [ESI + 0x3c]
0062507F  89 10                     MOV dword ptr [EAX],EDX
00625081  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00625084  89 1A                     MOV dword ptr [EDX],EBX
00625086  8B 86 F6 02 00 00         MOV EAX,dword ptr [ESI + 0x2f6]
0062508C  3B C8                     CMP ECX,EAX
0062508E  7C 3A                     JL 0x006250ca
00625090  0F BF 46 3C               MOVSX EAX,word ptr [ESI + 0x3c]
00625094  0F BF 4E 3A               MOVSX ECX,word ptr [ESI + 0x3a]
00625098  53                        PUSH EBX
00625099  50                        PUSH EAX
0062509A  51                        PUSH ECX
0062509B  6A 00                     PUSH 0x0
0062509D  8B CE                     MOV ECX,ESI
0062509F  E8 C9 FC DD FF            CALL 0x00404d6d
006250A4  85 C0                     TEST EAX,EAX
006250A6  74 22                     JZ 0x006250ca
006250A8  C7 86 EE 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2ee],0x0
006250B2  89 BE AE 02 00 00         MOV dword ptr [ESI + 0x2ae],EDI
006250B8  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006250BE  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
006250C4  89 86 0F 03 00 00         MOV dword ptr [ESI + 0x30f],EAX
switchD_0062493c::default:
006250CA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006250CD  5F                        POP EDI
006250CE  5E                        POP ESI
006250CF  5B                        POP EBX
006250D0  8B E5                     MOV ESP,EBP
006250D2  5D                        POP EBP
006250D3  C2 10 00                  RET 0x10
LAB_006250d6:
006250D6  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_006250d9:
006250D9  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
006250DD  66 69 C9 C8 00            IMUL CX,CX,0xc8
006250E2  83 C1 64                  ADD ECX,0x64
006250E5  0F BF 56 3C               MOVSX EDX,word ptr [ESI + 0x3c]
006250E9  0F BF C1                  MOVSX EAX,CX
006250EC  83 E8 32                  SUB EAX,0x32
006250EF  8B CE                     MOV ECX,ESI
006250F1  50                        PUSH EAX
006250F2  52                        PUSH EDX
006250F3  0F BF 46 3A               MOVSX EAX,word ptr [ESI + 0x3a]
006250F7  50                        PUSH EAX
006250F8  6A 02                     PUSH 0x2
006250FA  E8 6E FC DD FF            CALL 0x00404d6d
006250FF  85 C0                     TEST EAX,EAX
00625101  0F 84 5D FF FF FF         JZ 0x00625064
00625107  B8 01 00 00 00            MOV EAX,0x1
0062510C  C7 86 EE 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x2ee],0x2
00625116  89 86 AE 02 00 00         MOV dword ptr [ESI + 0x2ae],EAX
0062511C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00625122  5F                        POP EDI
00625123  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00625126  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0062512C  0F BF 4E 3A               MOVSX ECX,word ptr [ESI + 0x3a]
00625130  89 96 0F 03 00 00         MOV dword ptr [ESI + 0x30f],EDX
00625136  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00625139  89 0A                     MOV dword ptr [EDX],ECX
0062513B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062513E  0F BF 4E 3C               MOVSX ECX,word ptr [ESI + 0x3c]
00625142  89 0A                     MOV dword ptr [EDX],ECX
00625144  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00625147  5E                        POP ESI
00625148  89 19                     MOV dword ptr [ECX],EBX
0062514A  5B                        POP EBX
0062514B  8B E5                     MOV ESP,EBP
0062514D  5D                        POP EBP
0062514E  C2 10 00                  RET 0x10
