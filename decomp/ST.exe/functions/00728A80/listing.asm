SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00728640::FUN_00728a80:
00728A80  55                        PUSH EBP
00728A81  8B EC                     MOV EBP,ESP
00728A83  83 EC 50                  SUB ESP,0x50
00728A86  8B 15 14 71 85 00         MOV EDX,dword ptr [0x00857114]
00728A8C  A1 10 71 85 00            MOV EAX,[0x00857110]
00728A91  53                        PUSH EBX
00728A92  56                        PUSH ESI
00728A93  0F BF 74 D0 02            MOVSX ESI,word ptr [EAX + EDX*0x8 + 0x2]
00728A98  57                        PUSH EDI
00728A99  8B F9                     MOV EDI,ECX
00728A9B  8B CE                     MOV ECX,ESI
00728A9D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00728AA0  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
00728AA4  8B 5F 28                  MOV EBX,dword ptr [EDI + 0x28]
00728AA7  03 C1                     ADD EAX,ECX
00728AA9  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00728AAC  8B C6                     MOV EAX,ESI
00728AAE  0F AF C3                  IMUL EAX,EBX
00728AB1  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
00728AB4  52                        PUSH EDX
00728AB5  03 C8                     ADD ECX,EAX
00728AB7  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00728ABA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00728ABD  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
00728AC0  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00728AC3  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00728AC6  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00728AC9  8D 4D CC                  LEA ECX,[EBP + -0x34]
00728ACC  51                        PUSH ECX
00728ACD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00728AD0  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
00728AD7  E8 04 FD FF FF            CALL 0x007287e0
00728ADC  85 C0                     TEST EAX,EAX
00728ADE  0F 84 A4 02 00 00         JZ 0x00728d88
00728AE4  8B 15 14 71 85 00         MOV EDX,dword ptr [0x00857114]
00728AEA  8D 45 B0                  LEA EAX,[EBP + -0x50]
00728AED  52                        PUSH EDX
00728AEE  50                        PUSH EAX
00728AEF  C7 45 B0 FF FF FF FF      MOV dword ptr [EBP + -0x50],0xffffffff
00728AF6  E8 E5 FC FF FF            CALL 0x007287e0
00728AFB  85 C0                     TEST EAX,EAX
00728AFD  0F 84 85 02 00 00         JZ 0x00728d88
00728B03  3B 77 3C                  CMP ESI,dword ptr [EDI + 0x3c]
00728B06  0F 8D 7C 02 00 00         JGE 0x00728d88
LAB_00728b0c:
00728B0C  3B 77 34                  CMP ESI,dword ptr [EDI + 0x34]
00728B0F  0F 8C E4 01 00 00         JL 0x00728cf9
00728B15  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00728B18  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00728B1B  C1 F9 10                  SAR ECX,0x10
00728B1E  C1 F8 10                  SAR EAX,0x10
00728B21  2B C8                     SUB ECX,EAX
00728B23  0F 8E C7 01 00 00         JLE 0x00728cf0
00728B29  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00728B2C  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00728B2F  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00728B32  2B C2                     SUB EAX,EDX
00728B34  99                        CDQ
00728B35  F7 F9                     IDIV ECX
00728B37  A3 08 71 85 00            MOV [0x00857108],EAX
00728B3C  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00728B3F  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00728B42  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00728B45  C1 F9 10                  SAR ECX,0x10
00728B48  C1 F8 10                  SAR EAX,0x10
00728B4B  3B 4B 38                  CMP ECX,dword ptr [EBX + 0x38]
00728B4E  7C 03                     JL 0x00728b53
00728B50  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
LAB_00728b53:
00728B53  3B 43 30                  CMP EAX,dword ptr [EBX + 0x30]
00728B56  7D 11                     JGE 0x00728b69
00728B58  F7 D8                     NEG EAX
00728B5A  03 43 30                  ADD EAX,dword ptr [EBX + 0x30]
00728B5D  F7 25 08 71 85 00         MUL dword ptr [0x00857108]
00728B63  01 45 EC                  ADD dword ptr [EBP + -0x14],EAX
00728B66  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
LAB_00728b69:
00728B69  2B C8                     SUB ECX,EAX
00728B6B  0F 8E 7F 01 00 00         JLE 0x00728cf0
00728B71  8B F8                     MOV EDI,EAX
00728B73  8B F1                     MOV ESI,ECX
00728B75  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00728B78  8D 1C 43                  LEA EBX,[EBX + EAX*0x2]
00728B7B  A1 08 71 85 00            MOV EAX,[0x00857108]
00728B80  F7 E9                     IMUL ECX
00728B82  03 45 EC                  ADD EAX,dword ptr [EBP + -0x14]
00728B85  3B 44 4B FC               CMP EAX,dword ptr [EBX + ECX*0x2 + -0x4]
00728B89  72 41                     JC 0x00728bcc
00728B8B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00728B8E  3B 43 FE                  CMP EAX,dword ptr [EBX + -0x2]
00728B91  0F 86 19 01 00 00         JBE 0x00728cb0
00728B97  83 E9 08                  SUB ECX,0x8
00728B9A  0F 8E 50 01 00 00         JLE 0x00728cf0
00728BA0  BA 08 00 00 00            MOV EDX,0x8
00728BA5  A1 08 71 85 00            MOV EAX,[0x00857108]
00728BAA  F7 EA                     IMUL EDX
00728BAC  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00728BAF  83 C3 10                  ADD EBX,0x10
00728BB2  03 D0                     ADD EDX,EAX
LAB_00728bb4:
00728BB4  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
00728BB7  0F 86 F3 00 00 00         JBE 0x00728cb0
00728BBD  83 C3 10                  ADD EBX,0x10
00728BC0  03 D0                     ADD EDX,EAX
00728BC2  83 E9 08                  SUB ECX,0x8
00728BC5  7F ED                     JG 0x00728bb4
00728BC7  E9 24 01 00 00            JMP 0x00728cf0
LAB_00728bcc:
00728BCC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00728BCF  3B 43 FE                  CMP EAX,dword ptr [EBX + -0x2]
00728BD2  0F 87 D8 00 00 00         JA 0x00728cb0
00728BD8  83 E9 08                  SUB ECX,0x8
00728BDB  7E 27                     JLE 0x00728c04
00728BDD  BA 08 00 00 00            MOV EDX,0x8
00728BE2  A1 08 71 85 00            MOV EAX,[0x00857108]
00728BE7  F7 EA                     IMUL EDX
00728BE9  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00728BEC  83 C3 10                  ADD EBX,0x10
00728BEF  03 D0                     ADD EDX,EAX
LAB_00728bf1:
00728BF1  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
00728BF4  0F 87 B6 00 00 00         JA 0x00728cb0
00728BFA  83 C3 10                  ADD EBX,0x10
00728BFD  03 D0                     ADD EDX,EAX
00728BFF  83 E9 08                  SUB ECX,0x8
00728C02  7F ED                     JG 0x00728bf1
LAB_00728c04:
00728C04  8B C7                     MOV EAX,EDI
00728C06  8B CE                     MOV ECX,ESI
00728C08  03 7D 08                  ADD EDI,dword ptr [EBP + 0x8]
00728C0B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00728C0E  03 F0                     ADD ESI,EAX
00728C10  55                        PUSH EBP
00728C11  8B 6D 10                  MOV EBP,dword ptr [EBP + 0x10]
00728C14  2B C0                     SUB EAX,EAX
00728C16  2B D2                     SUB EDX,EDX
00728C18  83 F9 03                  CMP ECX,0x3
00728C1B  7C 70                     JL 0x00728c8d
00728C1D  8A 16                     MOV DL,byte ptr [ESI]
00728C1F  F7 C7 01 00 00 00         TEST EDI,0x1
00728C25  74 0B                     JZ 0x00728c32
00728C27  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
00728C2B  46                        INC ESI
00728C2C  88 07                     MOV byte ptr [EDI],AL
00728C2E  47                        INC EDI
00728C2F  49                        DEC ECX
00728C30  8A 16                     MOV DL,byte ptr [ESI]
LAB_00728c32:
00728C32  F7 C7 02 00 00 00         TEST EDI,0x2
00728C38  74 1A                     JZ 0x00728c54
00728C3A  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
00728C3D  83 C6 02                  ADD ESI,0x2
00728C40  8A 5C 15 00               MOV BL,byte ptr [EBP + EDX*0x1]
00728C44  83 C7 02                  ADD EDI,0x2
00728C47  8A 7C 05 00               MOV BH,byte ptr [EBP + EAX*0x1]
00728C4B  83 E9 02                  SUB ECX,0x2
00728C4E  66 89 5F FE               MOV word ptr [EDI + -0x2],BX
00728C52  8A 16                     MOV DL,byte ptr [ESI]
LAB_00728c54:
00728C54  83 E9 04                  SUB ECX,0x4
00728C57  7C 2F                     JL 0x00728c88
LAB_00728c59:
00728C59  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
00728C5C  8A 5C 15 00               MOV BL,byte ptr [EBP + EDX*0x1]
00728C60  8A 56 02                  MOV DL,byte ptr [ESI + 0x2]
00728C63  8A 7C 05 00               MOV BH,byte ptr [EBP + EAX*0x1]
00728C67  C1 E3 10                  SHL EBX,0x10
00728C6A  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
00728C6D  8A 5C 15 00               MOV BL,byte ptr [EBP + EDX*0x1]
00728C71  83 C6 04                  ADD ESI,0x4
00728C74  8A 7C 05 00               MOV BH,byte ptr [EBP + EAX*0x1]
00728C78  83 C7 04                  ADD EDI,0x4
00728C7B  C1 CB 10                  ROR EBX,0x10
00728C7E  89 5F FC                  MOV dword ptr [EDI + -0x4],EBX
00728C81  83 E9 04                  SUB ECX,0x4
00728C84  8A 16                     MOV DL,byte ptr [ESI]
00728C86  7D D1                     JGE 0x00728c59
LAB_00728c88:
00728C88  83 C1 04                  ADD ECX,0x4
00728C8B  74 20                     JZ 0x00728cad
LAB_00728c8d:
00728C8D  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
00728C91  49                        DEC ECX
00728C92  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
00728C95  88 07                     MOV byte ptr [EDI],AL
00728C97  74 14                     JZ 0x00728cad
00728C99  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
00728C9D  49                        DEC ECX
00728C9E  8A 56 02                  MOV DL,byte ptr [ESI + 0x2]
00728CA1  88 47 01                  MOV byte ptr [EDI + 0x1],AL
00728CA4  74 07                     JZ 0x00728cad
00728CA6  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
00728CAA  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_00728cad:
00728CAD  5D                        POP EBP
00728CAE  EB 40                     JMP 0x00728cf0
LAB_00728cb0:
00728CB0  8B C7                     MOV EAX,EDI
00728CB2  8B CE                     MOV ECX,ESI
00728CB4  03 7D 08                  ADD EDI,dword ptr [EBP + 0x8]
00728CB7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00728CBA  03 F0                     ADD ESI,EAX
00728CBC  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00728CBF  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00728CC2  8D 1C 43                  LEA EBX,[EBX + EAX*0x2]
00728CC5  33 C0                     XOR EAX,EAX
00728CC7  55                        PUSH EBP
00728CC8  8B 6D 10                  MOV EBP,dword ptr [EBP + 0x10]
LAB_00728ccb:
00728CCB  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
00728CCE  77 18                     JA 0x00728ce8
LAB_00728cd0:
00728CD0  8A 06                     MOV AL,byte ptr [ESI]
00728CD2  47                        INC EDI
00728CD3  46                        INC ESI
00728CD4  83 C3 02                  ADD EBX,0x2
00728CD7  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
00728CDB  49                        DEC ECX
00728CDC  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
00728CDF  7F EA                     JG 0x00728ccb
00728CE1  EB 0C                     JMP 0x00728cef
LAB_00728ce3:
00728CE3  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
00728CE6  76 E8                     JBE 0x00728cd0
LAB_00728ce8:
00728CE8  43                        INC EBX
00728CE9  46                        INC ESI
00728CEA  43                        INC EBX
00728CEB  47                        INC EDI
00728CEC  49                        DEC ECX
00728CED  7F F4                     JG 0x00728ce3
LAB_00728cef:
00728CEF  5D                        POP EBP
LAB_00728cf0:
00728CF0  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00728CF3  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00728CF6  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_00728cf9:
00728CF9  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00728CFC  48                        DEC EAX
00728CFD  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00728D00  75 13                     JNZ 0x00728d15
00728D02  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00728D05  8D 55 CC                  LEA EDX,[EBP + -0x34]
00728D08  51                        PUSH ECX
00728D09  52                        PUSH EDX
00728D0A  E8 D1 FA FF FF            CALL 0x007287e0
00728D0F  85 C0                     TEST EAX,EAX
00728D11  74 75                     JZ 0x00728d88
00728D13  EB 16                     JMP 0x00728d2b
LAB_00728d15:
00728D15  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00728D18  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00728D1B  03 C8                     ADD ECX,EAX
00728D1D  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00728D20  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00728D23  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00728D26  03 C1                     ADD EAX,ECX
00728D28  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_00728d2b:
00728D2B  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00728D2E  48                        DEC EAX
00728D2F  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00728D32  75 13                     JNZ 0x00728d47
00728D34  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00728D37  8D 45 B0                  LEA EAX,[EBP + -0x50]
00728D3A  52                        PUSH EDX
00728D3B  50                        PUSH EAX
00728D3C  E8 9F FA FF FF            CALL 0x007287e0
00728D41  85 C0                     TEST EAX,EAX
00728D43  74 43                     JZ 0x00728d88
00728D45  EB 16                     JMP 0x00728d5d
LAB_00728d47:
00728D47  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00728D4A  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00728D4D  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00728D50  03 D1                     ADD EDX,ECX
00728D52  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00728D55  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00728D58  03 C2                     ADD EAX,EDX
00728D5A  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_00728d5d:
00728D5D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00728D60  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00728D63  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00728D66  03 CB                     ADD ECX,EBX
00728D68  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00728D6B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00728D6E  03 D0                     ADD EDX,EAX
00728D70  8B 47 3C                  MOV EAX,dword ptr [EDI + 0x3c]
00728D73  46                        INC ESI
00728D74  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00728D77  8D 14 59                  LEA EDX,[ECX + EBX*0x2]
00728D7A  3B F0                     CMP ESI,EAX
00728D7C  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00728D7F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00728D82  0F 8C 84 FD FF FF         JL 0x00728b0c
LAB_00728d88:
00728D88  5F                        POP EDI
00728D89  5E                        POP ESI
00728D8A  5B                        POP EBX
00728D8B  8B E5                     MOV ESP,EBP
00728D8D  5D                        POP EBP
00728D8E  C2 0C 00                  RET 0xc
