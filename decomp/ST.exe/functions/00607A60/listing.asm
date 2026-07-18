FUN_00607a60:
00607A60  55                        PUSH EBP
00607A61  8B EC                     MOV EBP,ESP
00607A63  81 EC CC 00 00 00         SUB ESP,0xcc
00607A69  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00607A6C  53                        PUSH EBX
00607A6D  56                        PUSH ESI
00607A6E  8B F1                     MOV ESI,ECX
00607A70  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00607A76  50                        PUSH EAX
00607A77  E8 3B CF DF FF            CALL 0x004049b7
00607A7C  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00607A7F  25 FF 00 00 00            AND EAX,0xff
00607A84  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00607A8A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00607A8D  33 D2                     XOR EDX,EDX
00607A8F  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00607A95  B9 0B 00 00 00            MOV ECX,0xb
00607A9A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607A9D  C1 E8 10                  SHR EAX,0x10
00607AA0  F7 F1                     DIV ECX
00607AA2  8B CE                     MOV ECX,ESI
00607AA4  8B DA                     MOV EBX,EDX
00607AA6  83 C3 09                  ADD EBX,0x9
00607AA9  53                        PUSH EBX
00607AAA  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00607AAD  E8 DA C2 DF FF            CALL 0x00403d8c
00607AB2  3B C3                     CMP EAX,EBX
00607AB4  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
00607ABA  74 0B                     JZ 0x00607ac7
00607ABC  5E                        POP ESI
00607ABD  83 C8 FF                  OR EAX,0xffffffff
00607AC0  5B                        POP EBX
00607AC1  8B E5                     MOV ESP,EBP
00607AC3  5D                        POP EBP
00607AC4  C2 24 00                  RET 0x24
LAB_00607ac7:
00607AC7  57                        PUSH EDI
00607AC8  33 C9                     XOR ECX,ECX
00607ACA  8D BD 34 FF FF FF         LEA EDI,[EBP + 0xffffff34]
LAB_00607ad0:
00607AD0  3B CB                     CMP ECX,EBX
00607AD2  74 2E                     JZ 0x00607b02
00607AD4  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00607AD7  BB 05 00 00 00            MOV EBX,0x5
00607ADC  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00607AE2  83 C7 04                  ADD EDI,0x4
00607AE5  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00607AEB  33 D2                     XOR EDX,EDX
00607AED  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607AF0  C1 E8 10                  SHR EAX,0x10
00607AF3  F7 F3                     DIV EBX
00607AF5  03 D3                     ADD EDX,EBX
00607AF7  41                        INC ECX
00607AF8  89 57 FC                  MOV dword ptr [EDI + -0x4],EDX
00607AFB  3B CB                     CMP ECX,EBX
00607AFD  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00607B00  7C CE                     JL 0x00607ad0
LAB_00607b02:
00607B02  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00607B09  8D BC 8D 34 FF FF FF      LEA EDI,[EBP + ECX*0x4 + 0xffffff34]
LAB_00607b10:
00607B10  3B CB                     CMP ECX,EBX
00607B12  74 36                     JZ 0x00607b4a
00607B14  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00607B17  33 D2                     XOR EDX,EDX
00607B19  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00607B1F  05 39 30 00 00            ADD EAX,0x3039
00607B24  BB 07 00 00 00            MOV EBX,0x7
00607B29  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607B2C  83 C7 04                  ADD EDI,0x4
00607B2F  C1 E8 10                  SHR EAX,0x10
00607B32  F7 F3                     DIV EBX
00607B34  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00607B37  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00607B3A  83 C2 09                  ADD EDX,0x9
00607B3D  41                        INC ECX
00607B3E  89 57 FC                  MOV dword ptr [EDI + -0x4],EDX
00607B41  40                        INC EAX
00607B42  83 F8 14                  CMP EAX,0x14
00607B45  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00607B48  7C C6                     JL 0x00607b10
LAB_00607b4a:
00607B4A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00607B4D  83 F8 01                  CMP EAX,0x1
00607B50  7E 05                     JLE 0x00607b57
00607B52  83 F8 02                  CMP EAX,0x2
00607B55  7E 07                     JLE 0x00607b5e
LAB_00607b57:
00607B57  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
LAB_00607b5e:
00607B5E  B9 08 00 00 00            MOV ECX,0x8
00607B63  33 C0                     XOR EAX,EAX
00607B65  8D 7D 84                  LEA EDI,[EBP + -0x7c]
00607B68  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00607B6B  F3 AB                     STOSD.REP ES:EDI
00607B6D  85 DB                     TEST EBX,EBX
00607B6F  C7 45 94 02 00 00 00      MOV dword ptr [EBP + -0x6c],0x2
00607B76  0F 8E 3C 02 00 00         JLE 0x00607db8
00607B7C  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00607B7F  8D 8D 34 FF FF FF         LEA ECX,[EBP + 0xffffff34]
00607B85  8D 96 19 02 00 00         LEA EDX,[ESI + 0x219]
00607B8B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00607B8E  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_00607b91:
00607B91  B9 11 00 00 00            MOV ECX,0x11
00607B96  33 C0                     XOR EAX,EAX
00607B98  8D 7D A4                  LEA EDI,[EBP + -0x5c]
00607B9B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00607B9E  F3 AB                     STOSD.REP ES:EDI
00607BA0  8A 4D 28                  MOV CL,byte ptr [EBP + 0x28]
00607BA3  66 AB                     STOSW ES:EDI
00607BA5  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00607BA8  88 4D E4                  MOV byte ptr [EBP + -0x1c],CL
00607BAB  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00607BAE  33 C0                     XOR EAX,EAX
00607BB0  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00607BB3  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00607BB6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00607BB9  C7 45 A4 64 00 00 00      MOV dword ptr [EBP + -0x5c],0x64
00607BC0  89 55 E6                  MOV dword ptr [EBP + -0x1a],EDX
00607BC3  8B 08                     MOV ECX,dword ptr [EAX]
00607BC5  8A C1                     MOV AL,CL
00607BC7  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00607BCA  3C 0A                     CMP AL,0xa
00607BCC  76 06                     JBE 0x00607bd4
00607BCE  C6 45 E5 00               MOV byte ptr [EBP + -0x1b],0x0
00607BD2  EB 24                     JMP 0x00607bf8
LAB_00607bd4:
00607BD4  3C 04                     CMP AL,0x4
00607BD6  76 1C                     JBE 0x00607bf4
00607BD8  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00607BDB  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00607BE1  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00607BE7  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607BEA  C1 E8 10                  SHR EAX,0x10
00607BED  24 01                     AND AL,0x1
00607BEF  88 45 E5                  MOV byte ptr [EBP + -0x1b],AL
00607BF2  EB 04                     JMP 0x00607bf8
LAB_00607bf4:
00607BF4  C6 45 E5 01               MOV byte ptr [EBP + -0x1b],0x1
LAB_00607bf8:
00607BF8  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00607BFB  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00607BFE  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00607C04  05 39 30 00 00            ADD EAX,0x3039
00607C09  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00607C0C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607C0F  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00607C15  05 39 30 00 00            ADD EAX,0x3039
00607C1A  33 D2                     XOR EDX,EDX
00607C1C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607C1F  BF B5 00 00 00            MOV EDI,0xb5
00607C24  C1 E8 10                  SHR EAX,0x10
00607C27  F7 F7                     DIV EDI
00607C29  8B C3                     MOV EAX,EBX
00607C2B  BF 29 00 00 00            MOV EDI,0x29
00607C30  2B C2                     SUB EAX,EDX
00607C32  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00607C35  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00607C3B  83 C0 5A                  ADD EAX,0x5a
00607C3E  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00607C41  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00607C47  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607C4A  33 D2                     XOR EDX,EDX
00607C4C  C1 E8 10                  SHR EAX,0x10
00607C4F  F7 F7                     DIV EDI
00607C51  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00607C54  2B C2                     SUB EAX,EDX
00607C56  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00607C59  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00607C5F  83 C0 14                  ADD EAX,0x14
00607C62  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00607C65  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00607C6B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607C6E  33 D2                     XOR EDX,EDX
00607C70  C1 E8 10                  SHR EAX,0x10
00607C73  F7 F7                     DIV EDI
00607C75  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00607C78  BF 69 01 00 00            MOV EDI,0x169
00607C7D  2B C2                     SUB EAX,EDX
00607C7F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00607C82  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00607C88  83 C0 14                  ADD EAX,0x14
00607C8B  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00607C8E  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00607C94  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607C97  33 D2                     XOR EDX,EDX
00607C99  C1 E8 10                  SHR EAX,0x10
00607C9C  F7 F7                     DIV EDI
00607C9E  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00607CA1  BF 1F 00 00 00            MOV EDI,0x1f
00607CA6  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00607CAC  05 39 30 00 00            ADD EAX,0x3039
00607CB1  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607CB4  C1 E8 10                  SHR EAX,0x10
00607CB7  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00607CBA  33 D2                     XOR EDX,EDX
00607CBC  F7 F7                     DIV EDI
00607CBE  B8 0F 00 00 00            MOV EAX,0xf
00607CC3  2B C2                     SUB EAX,EDX
00607CC5  83 F9 0F                  CMP ECX,0xf
00607CC8  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00607CCB  0F 87 B0 00 00 00         JA 0x00607d81
00607CD1  33 D2                     XOR EDX,EDX
00607CD3  8A 91 D4 7D 60 00         MOV DL,byte ptr [ECX + 0x607dd4]
switchD_00607cd9::switchD:
00607CD9  FF 24 95 C4 7D 60 00      JMP dword ptr [EDX*0x4 + 0x607dc4]
switchD_00607cd9::caseD_0:
00607CE0  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00607CE3  33 D2                     XOR EDX,EDX
00607CE5  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00607CEB  05 39 30 00 00            ADD EAX,0x3039
00607CF0  B9 03 00 00 00            MOV ECX,0x3
00607CF5  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607CF8  C7 45 DC 7D 00 00 00      MOV dword ptr [EBP + -0x24],0x7d
00607CFF  C1 E8 10                  SHR EAX,0x10
00607D02  F7 F1                     DIV ECX
00607D04  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00607D07  EB 78                     JMP 0x00607d81
switchD_00607cd9::caseD_3:
00607D09  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00607D0C  C7 45 DC 87 00 00 00      MOV dword ptr [EBP + -0x24],0x87
00607D13  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00607D19  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00607D1F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607D22  C1 E8 10                  SHR EAX,0x10
00607D25  83 E0 03                  AND EAX,0x3
00607D28  83 C0 02                  ADD EAX,0x2
00607D2B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00607D2E  EB 51                     JMP 0x00607d81
switchD_00607cd9::caseD_6:
00607D30  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00607D33  33 D2                     XOR EDX,EDX
00607D35  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00607D3B  05 39 30 00 00            ADD EAX,0x3039
00607D40  B9 05 00 00 00            MOV ECX,0x5
00607D45  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607D48  C7 45 DC 91 00 00 00      MOV dword ptr [EBP + -0x24],0x91
00607D4F  C1 E8 10                  SHR EAX,0x10
00607D52  F7 F1                     DIV ECX
00607D54  83 C2 03                  ADD EDX,0x3
00607D57  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00607D5A  EB 25                     JMP 0x00607d81
switchD_00607cd9::caseD_a:
00607D5C  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00607D5F  C7 45 DC 96 00 00 00      MOV dword ptr [EBP + -0x24],0x96
00607D66  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00607D6C  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00607D72  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607D75  C1 E8 10                  SHR EAX,0x10
00607D78  83 E0 03                  AND EAX,0x3
00607D7B  83 C0 05                  ADD EAX,0x5
00607D7E  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
switchD_00607cd9::default:
00607D81  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00607D84  8D 4D 84                  LEA ECX,[EBP + -0x7c]
00607D87  8D 45 A4                  LEA EAX,[EBP + -0x5c]
00607D8A  51                        PUSH ECX
00607D8B  8B 0F                     MOV ECX,dword ptr [EDI]
00607D8D  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00607D90  E8 05 DF DF FF            CALL 0x00405c9a
00607D95  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00607D98  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00607D9B  83 C1 04                  ADD ECX,0x4
00607D9E  40                        INC EAX
00607D9F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00607DA2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00607DA5  83 C7 04                  ADD EDI,0x4
00607DA8  3B C1                     CMP EAX,ECX
00607DAA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00607DAD  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00607DB0  0F 8C DB FD FF FF         JL 0x00607b91
00607DB6  8B D9                     MOV EBX,ECX
LAB_00607db8:
00607DB8  5F                        POP EDI
00607DB9  8B C3                     MOV EAX,EBX
00607DBB  5E                        POP ESI
00607DBC  5B                        POP EBX
00607DBD  8B E5                     MOV ESP,EBP
00607DBF  5D                        POP EBP
00607DC0  C2 24 00                  RET 0x24
