FUN_005859a0:
005859A0  55                        PUSH EBP
005859A1  8B EC                     MOV EBP,ESP
005859A3  83 EC 7C                  SUB ESP,0x7c
005859A6  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
005859AC  53                        PUSH EBX
005859AD  56                        PUSH ESI
005859AE  57                        PUSH EDI
005859AF  BF 04 00 00 00            MOV EDI,0x4
005859B4  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005859B7  3B C7                     CMP EAX,EDI
005859B9  75 14                     JNZ 0x005859cf
005859BB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005859BE  83 78 10 03               CMP dword ptr [EAX + 0x10],0x3
005859C2  74 0B                     JZ 0x005859cf
005859C4  33 C0                     XOR EAX,EAX
005859C6  5F                        POP EDI
005859C7  5E                        POP ESI
005859C8  5B                        POP EBX
005859C9  8B E5                     MOV ESP,EBP
005859CB  5D                        POP EBP
005859CC  C2 04 00                  RET 0x4
LAB_005859cf:
005859CF  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005859D5  8D 45 88                  LEA EAX,[EBP + -0x78]
005859D8  8D 55 84                  LEA EDX,[EBP + -0x7c]
005859DB  6A 00                     PUSH 0x0
005859DD  50                        PUSH EAX
005859DE  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
005859E1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005859E7  E8 04 7E 1A 00            CALL 0x0072d7f0
005859EC  8B F0                     MOV ESI,EAX
005859EE  83 C4 08                  ADD ESP,0x8
005859F1  85 F6                     TEST ESI,ESI
005859F3  0F 85 17 05 00 00         JNZ 0x00585f10
005859F9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005859FC  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
005859FF  56                        PUSH ESI
00585A00  8B CB                     MOV ECX,EBX
00585A02  E8 00 F5 E7 FF            CALL 0x00404f07
00585A07  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00585A0A  3D 0F 01 00 00            CMP EAX,0x10f
00585A0F  0F 87 B2 04 00 00         JA 0x00585ec7
00585A15  0F 84 27 03 00 00         JZ 0x00585d42
00585A1B  83 E8 00                  SUB EAX,0x0
00585A1E  0F 84 04 03 00 00         JZ 0x00585d28
00585A24  83 E8 02                  SUB EAX,0x2
00585A27  74 25                     JZ 0x00585a4e
00585A29  48                        DEC EAX
00585A2A  0F 85 CD 04 00 00         JNZ 0x00585efd
00585A30  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00585A36  E8 9A C7 E7 FF            CALL 0x004021d5
00585A3B  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00585A3E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00585A43  33 C0                     XOR EAX,EAX
00585A45  5F                        POP EDI
00585A46  5E                        POP ESI
00585A47  5B                        POP EBX
00585A48  8B E5                     MOV ESP,EBP
00585A4A  5D                        POP EBP
00585A4B  C2 04 00                  RET 0x4
LAB_00585a4e:
00585A4E  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00585A51  89 BB 31 02 00 00         MOV dword ptr [EBX + 0x231],EDI
00585A57  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00585A5A  83 F8 01                  CMP EAX,0x1
00585A5D  0F 86 4C 01 00 00         JBE 0x00585baf
00585A63  83 F8 02                  CMP EAX,0x2
00585A66  0F 85 24 02 00 00         JNZ 0x00585c90
00585A6C  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00585A6F  8D BB 58 02 00 00         LEA EDI,[EBX + 0x258]
00585A75  B9 0C 00 00 00            MOV ECX,0xc
00585A7A  8B F0                     MOV ESI,EAX
00585A7C  F3 A5                     MOVSD.REP ES:EDI,ESI
00585A7E  66 A5                     MOVSW ES:EDI,ESI
00585A80  8B 48 5F                  MOV ECX,dword ptr [EAX + 0x5f]
00585A83  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00585A86  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00585A89  8D 4C 01 67               LEA ECX,[ECX + EAX*0x1 + 0x67]
00585A8D  51                        PUSH ECX
00585A8E  8B CB                     MOV ECX,EBX
00585A90  E8 8A FA E7 FF            CALL 0x0040551f
00585A95  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00585A98  6A 44                     PUSH 0x44
00585A9A  8B 56 32                  MOV EDX,dword ptr [ESI + 0x32]
00585A9D  89 93 31 02 00 00         MOV dword ptr [EBX + 0x231],EDX
00585AA3  8B 46 36                  MOV EAX,dword ptr [ESI + 0x36]
00585AA6  89 83 35 02 00 00         MOV dword ptr [EBX + 0x235],EAX
00585AAC  8B 4E 3A                  MOV ECX,dword ptr [ESI + 0x3a]
00585AAF  89 8B 3D 02 00 00         MOV dword ptr [EBX + 0x23d],ECX
00585AB5  8B 56 42                  MOV EDX,dword ptr [ESI + 0x42]
00585AB8  89 93 4D 02 00 00         MOV dword ptr [EBX + 0x24d],EDX
00585ABE  8B 46 3E                  MOV EAX,dword ptr [ESI + 0x3e]
00585AC1  89 83 49 02 00 00         MOV dword ptr [EBX + 0x249],EAX
00585AC7  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
00585ACA  89 8B 51 02 00 00         MOV dword ptr [EBX + 0x251],ECX
00585AD0  8B 56 46                  MOV EDX,dword ptr [ESI + 0x46]
00585AD3  89 93 41 02 00 00         MOV dword ptr [EBX + 0x241],EDX
00585AD9  8B 46 4A                  MOV EAX,dword ptr [ESI + 0x4a]
00585ADC  89 83 45 02 00 00         MOV dword ptr [EBX + 0x245],EAX
00585AE2  8A 4E 5C                  MOV CL,byte ptr [ESI + 0x5c]
00585AE5  88 8B 55 02 00 00         MOV byte ptr [EBX + 0x255],CL
00585AEB  8A 56 5D                  MOV DL,byte ptr [ESI + 0x5d]
00585AEE  88 93 56 02 00 00         MOV byte ptr [EBX + 0x256],DL
00585AF4  8A 46 5E                  MOV AL,byte ptr [ESI + 0x5e]
00585AF7  88 83 57 02 00 00         MOV byte ptr [EBX + 0x257],AL
00585AFD  66 8B 4E 52               MOV CX,word ptr [ESI + 0x52]
00585B01  66 89 4B 41               MOV word ptr [EBX + 0x41],CX
00585B05  66 8B 56 54               MOV DX,word ptr [ESI + 0x54]
00585B09  66 89 53 43               MOV word ptr [EBX + 0x43],DX
00585B0D  66 8B 46 56               MOV AX,word ptr [ESI + 0x56]
00585B11  66 89 43 45               MOV word ptr [EBX + 0x45],AX
00585B15  E8 56 51 12 00            CALL 0x006aac70
00585B1A  85 C0                     TEST EAX,EAX
00585B1C  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00585B1F  0F 84 6B 01 00 00         JZ 0x00585c90
00585B25  33 D2                     XOR EDX,EDX
00585B27  33 C9                     XOR ECX,ECX
00585B29  EB 03                     JMP 0x00585b2e
LAB_00585b2b:
00585B2B  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
LAB_00585b2e:
00585B2E  8B 3D 74 67 80 00         MOV EDI,dword ptr [0x00806774]
00585B34  89 3C 01                  MOV dword ptr [ECX + EAX*0x1],EDI
00585B37  83 C1 04                  ADD ECX,0x4
00585B3A  83 F9 44                  CMP ECX,0x44
00585B3D  7C EC                     JL 0x00585b2b
00585B3F  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00585B42  A1 64 67 80 00            MOV EAX,[0x00806764]
00585B47  89 41 24                  MOV dword ptr [ECX + 0x24],EAX
00585B4A  8B 83 41 02 00 00         MOV EAX,dword ptr [EBX + 0x241]
00585B50  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
00585B56  3B C2                     CMP EAX,EDX
00585B58  7E 19                     JLE 0x00585b73
00585B5A  3B CA                     CMP ECX,EDX
00585B5C  74 15                     JZ 0x00585b73
00585B5E  8D 79 30                  LEA EDI,[ECX + 0x30]
00585B61  85 FF                     TEST EDI,EDI
00585B63  74 0E                     JZ 0x00585b73
00585B65  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
00585B68  8D 04 B8                  LEA EAX,[EAX + EDI*0x4]
00585B6B  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
00585B6E  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00585B71  EB 03                     JMP 0x00585b76
LAB_00585b73:
00585B73  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
LAB_00585b76:
00585B76  0F BF 49 2C               MOVSX ECX,word ptr [ECX + 0x2c]
00585B7A  A1 CC 73 80 00            MOV EAX,[0x008073cc]
00585B7F  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00585B82  83 C6 63                  ADD ESI,0x63
00585B85  8D 4D C8                  LEA ECX,[EBP + -0x38]
00585B88  56                        PUSH ESI
00585B89  51                        PUSH ECX
00585B8A  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00585B90  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00585B93  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00585B96  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00585B99  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00585B9C  E8 04 F1 E7 FF            CALL 0x00404ca5
00585BA1  8D 55 C8                  LEA EDX,[EBP + -0x38]
00585BA4  52                        PUSH EDX
00585BA5  E8 B6 54 12 00            CALL 0x006ab060
00585BAA  E9 E1 00 00 00            JMP 0x00585c90
LAB_00585baf:
00585BAF  C7 83 41 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x241],0x0
00585BB9  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00585BBE  8D BB 58 02 00 00         LEA EDI,[EBX + 0x258]
00585BC4  6A 1D                     PUSH 0x1d
00585BC6  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00585BCC  68 B8 B8 7C 00            PUSH 0x7cb8b8
00585BD1  89 8B 3D 02 00 00         MOV dword ptr [EBX + 0x23d],ECX
00585BD7  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
00585BDA  B9 0C 00 00 00            MOV ECX,0xc
00585BDF  F3 A5                     MOVSD.REP ES:EDI,ESI
00585BE1  66 A5                     MOVSW ES:EDI,ESI
00585BE3  C7 83 49 02 00 00 28 00 00 00  MOV dword ptr [EBX + 0x249],0x28
00585BED  C7 83 4D 02 00 00 70 FE FF FF  MOV dword ptr [EBX + 0x24d],0xfffffe70
00585BF7  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00585BFD  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00585C03  52                        PUSH EDX
00585C04  6A 0E                     PUSH 0xe
00585C06  8B CE                     MOV ECX,ESI
00585C08  E8 76 E5 E7 FF            CALL 0x00404183
00585C0D  85 C0                     TEST EAX,EAX
00585C0F  74 17                     JZ 0x00585c28
00585C11  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00585C16  68 9F 01 00 00            PUSH 0x19f
00585C1B  68 10 B9 7C 00            PUSH 0x7cb910
00585C20  50                        PUSH EAX
00585C21  6A FF                     PUSH -0x1
00585C23  E8 18 02 12 00            CALL 0x006a5e40
LAB_00585c28:
00585C28  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00585C2E  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00585C34  8B CE                     MOV ECX,ESI
00585C36  52                        PUSH EDX
00585C37  6A 0E                     PUSH 0xe
00585C39  E8 02 F6 E7 FF            CALL 0x00405240
00585C3E  66 8B 83 74 02 00 00      MOV AX,word ptr [EBX + 0x274]
00585C45  66 8B 8B 70 02 00 00      MOV CX,word ptr [EBX + 0x270]
00585C4C  66 8B 93 6C 02 00 00      MOV DX,word ptr [EBX + 0x26c]
00585C53  50                        PUSH EAX
00585C54  51                        PUSH ECX
00585C55  52                        PUSH EDX
00585C56  8B CB                     MOV ECX,EBX
00585C58  E8 AA D4 E7 FF            CALL 0x00403107
00585C5D  A1 24 67 80 00            MOV EAX,[0x00806724]
00585C62  8B 93 70 02 00 00         MOV EDX,dword ptr [EBX + 0x270]
00585C68  68 63 04 00 00            PUSH 0x463
00585C6D  52                        PUSH EDX
00585C6E  0F BF 48 2C               MOVSX ECX,word ptr [EAX + 0x2c]
00585C72  8B 83 6C 02 00 00         MOV EAX,dword ptr [EBX + 0x26c]
00585C78  89 8B 45 02 00 00         MOV dword ptr [EBX + 0x245],ECX
00585C7E  50                        PUSH EAX
00585C7F  8B CB                     MOV ECX,EBX
00585C81  C7 83 31 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x231],0x0
00585C8B  E8 A0 BA E7 FF            CALL 0x00401730
LAB_00585c90:
00585C90  8B 8B 6C 02 00 00         MOV ECX,dword ptr [EBX + 0x26c]
00585C96  B8 79 19 8C 02            MOV EAX,0x28c1979
00585C9B  85 C9                     TEST ECX,ECX
00585C9D  7C 10                     JL 0x00585caf
00585C9F  F7 E9                     IMUL ECX
00585CA1  D1 FA                     SAR EDX,0x1
00585CA3  8B CA                     MOV ECX,EDX
00585CA5  C1 E9 1F                  SHR ECX,0x1f
00585CA8  03 D1                     ADD EDX,ECX
00585CAA  0F BF C2                  MOVSX EAX,DX
00585CAD  EB 0F                     JMP 0x00585cbe
LAB_00585caf:
00585CAF  F7 E9                     IMUL ECX
00585CB1  D1 FA                     SAR EDX,0x1
00585CB3  8B C2                     MOV EAX,EDX
00585CB5  C1 E8 1F                  SHR EAX,0x1f
00585CB8  03 D0                     ADD EDX,EAX
00585CBA  0F BF C2                  MOVSX EAX,DX
00585CBD  48                        DEC EAX
LAB_00585cbe:
00585CBE  8B 8B 70 02 00 00         MOV ECX,dword ptr [EBX + 0x270]
00585CC4  66 89 43 47               MOV word ptr [EBX + 0x47],AX
00585CC8  85 C9                     TEST ECX,ECX
00585CCA  B8 79 19 8C 02            MOV EAX,0x28c1979
00585CCF  7C 2B                     JL 0x00585cfc
00585CD1  F7 E9                     IMUL ECX
00585CD3  D1 FA                     SAR EDX,0x1
00585CD5  8B CA                     MOV ECX,EDX
00585CD7  66 C7 43 4B 04 00         MOV word ptr [EBX + 0x4b],0x4
00585CDD  C1 E9 1F                  SHR ECX,0x1f
00585CE0  03 D1                     ADD EDX,ECX
00585CE2  0F BF C2                  MOVSX EAX,DX
00585CE5  66 89 43 49               MOV word ptr [EBX + 0x49],AX
00585CE9  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00585CEC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00585CF1  33 C0                     XOR EAX,EAX
00585CF3  5F                        POP EDI
00585CF4  5E                        POP ESI
00585CF5  5B                        POP EBX
00585CF6  8B E5                     MOV ESP,EBP
00585CF8  5D                        POP EBP
00585CF9  C2 04 00                  RET 0x4
LAB_00585cfc:
00585CFC  F7 E9                     IMUL ECX
00585CFE  D1 FA                     SAR EDX,0x1
00585D00  8B C2                     MOV EAX,EDX
00585D02  66 C7 43 4B 04 00         MOV word ptr [EBX + 0x4b],0x4
00585D08  C1 E8 1F                  SHR EAX,0x1f
00585D0B  03 D0                     ADD EDX,EAX
00585D0D  0F BF C2                  MOVSX EAX,DX
00585D10  48                        DEC EAX
00585D11  66 89 43 49               MOV word ptr [EBX + 0x49],AX
00585D15  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00585D18  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00585D1D  33 C0                     XOR EAX,EAX
00585D1F  5F                        POP EDI
00585D20  5E                        POP ESI
00585D21  5B                        POP EBX
00585D22  8B E5                     MOV ESP,EBP
00585D24  5D                        POP EBP
00585D25  C2 04 00                  RET 0x4
LAB_00585d28:
00585D28  8B CB                     MOV ECX,EBX
00585D2A  E8 7C DF E7 FF            CALL 0x00403cab
00585D2F  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00585D32  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00585D37  33 C0                     XOR EAX,EAX
00585D39  5F                        POP EDI
00585D3A  5E                        POP ESI
00585D3B  5B                        POP EBX
00585D3C  8B E5                     MOV ESP,EBP
00585D3E  5D                        POP EBP
00585D3F  C2 04 00                  RET 0x4
LAB_00585d42:
00585D42  8D 4D FC                  LEA ECX,[EBP + -0x4]
00585D45  51                        PUSH ECX
00585D46  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00585D4C  E8 83 BB E7 FF            CALL 0x004018d4
00585D51  8D 55 F4                  LEA EDX,[EBP + -0xc]
00585D54  8B CB                     MOV ECX,EBX
00585D56  52                        PUSH EDX
00585D57  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00585D5A  E8 3B B4 E7 FF            CALL 0x0040119a
00585D5F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00585D62  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00585D65  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00585D68  8D 54 01 67               LEA EDX,[ECX + EAX*0x1 + 0x67]
00585D6C  52                        PUSH EDX
00585D6D  E8 FE 4E 12 00            CALL 0x006aac70
00585D72  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00585D75  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00585D78  85 C9                     TEST ECX,ECX
00585D7A  0F 84 7D 01 00 00         JZ 0x00585efd
00585D80  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00585D83  85 C9                     TEST ECX,ECX
00585D85  0F 84 72 01 00 00         JZ 0x00585efd
00585D8B  85 C0                     TEST EAX,EAX
00585D8D  0F 84 6A 01 00 00         JZ 0x00585efd
00585D93  8D B3 58 02 00 00         LEA ESI,[EBX + 0x258]
00585D99  B9 0C 00 00 00            MOV ECX,0xc
00585D9E  8B F8                     MOV EDI,EAX
00585DA0  F3 A5                     MOVSD.REP ES:EDI,ESI
00585DA2  66 A5                     MOVSW ES:EDI,ESI
00585DA4  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
00585DAB  8B 8B 31 02 00 00         MOV ECX,dword ptr [EBX + 0x231]
00585DB1  89 48 32                  MOV dword ptr [EAX + 0x32],ECX
00585DB4  8B 93 35 02 00 00         MOV EDX,dword ptr [EBX + 0x235]
00585DBA  89 50 36                  MOV dword ptr [EAX + 0x36],EDX
00585DBD  8B 8B 3D 02 00 00         MOV ECX,dword ptr [EBX + 0x23d]
00585DC3  89 48 3A                  MOV dword ptr [EAX + 0x3a],ECX
00585DC6  8B 93 49 02 00 00         MOV EDX,dword ptr [EBX + 0x249]
00585DCC  89 50 3E                  MOV dword ptr [EAX + 0x3e],EDX
00585DCF  8B 8B 4D 02 00 00         MOV ECX,dword ptr [EBX + 0x24d]
00585DD5  89 48 42                  MOV dword ptr [EAX + 0x42],ECX
00585DD8  8B 93 51 02 00 00         MOV EDX,dword ptr [EBX + 0x251]
00585DDE  89 50 4E                  MOV dword ptr [EAX + 0x4e],EDX
00585DE1  66 8B 4B 41               MOV CX,word ptr [EBX + 0x41]
00585DE5  66 89 48 52               MOV word ptr [EAX + 0x52],CX
00585DE9  66 8B 53 43               MOV DX,word ptr [EBX + 0x43]
00585DED  66 89 50 54               MOV word ptr [EAX + 0x54],DX
00585DF1  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
00585DF5  66 89 48 56               MOV word ptr [EAX + 0x56],CX
00585DF9  8B 93 41 02 00 00         MOV EDX,dword ptr [EBX + 0x241]
00585DFF  89 50 46                  MOV dword ptr [EAX + 0x46],EDX
00585E02  8B 8B 45 02 00 00         MOV ECX,dword ptr [EBX + 0x245]
00585E08  89 48 4A                  MOV dword ptr [EAX + 0x4a],ECX
00585E0B  C7 40 58 00 00 00 00      MOV dword ptr [EAX + 0x58],0x0
00585E12  8A 93 55 02 00 00         MOV DL,byte ptr [EBX + 0x255]
00585E18  88 50 5C                  MOV byte ptr [EAX + 0x5c],DL
00585E1B  8A 8B 56 02 00 00         MOV CL,byte ptr [EBX + 0x256]
00585E21  88 48 5D                  MOV byte ptr [EAX + 0x5d],CL
00585E24  8A 93 57 02 00 00         MOV DL,byte ptr [EBX + 0x257]
00585E2A  88 50 5E                  MOV byte ptr [EAX + 0x5e],DL
00585E2D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00585E30  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00585E33  89 41 5F                  MOV dword ptr [ECX + 0x5f],EAX
00585E36  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00585E39  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00585E3C  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00585E3F  8B C1                     MOV EAX,ECX
00585E41  8D 7A 63                  LEA EDI,[EDX + 0x63]
00585E44  C1 E9 02                  SHR ECX,0x2
00585E47  F3 A5                     MOVSD.REP ES:EDI,ESI
00585E49  8B C8                     MOV ECX,EAX
00585E4B  83 E1 03                  AND ECX,0x3
00585E4E  F3 A4                     MOVSB.REP ES:EDI,ESI
00585E50  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00585E53  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00585E56  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00585E59  89 4C 02 63               MOV dword ptr [EDX + EAX*0x1 + 0x63],ECX
00585E5D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00585E60  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00585E63  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00585E66  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00585E69  8D 7C 10 67               LEA EDI,[EAX + EDX*0x1 + 0x67]
00585E6D  8B D1                     MOV EDX,ECX
00585E6F  C1 E9 02                  SHR ECX,0x2
00585E72  F3 A5                     MOVSD.REP ES:EDI,ESI
00585E74  8B CA                     MOV ECX,EDX
00585E76  83 E1 03                  AND ECX,0x3
00585E79  F3 A4                     MOVSB.REP ES:EDI,ESI
00585E7B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00585E7E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00585E81  8D 54 01 67               LEA EDX,[ECX + EAX*0x1 + 0x67]
00585E85  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00585E88  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00585E8B  52                        PUSH EDX
00585E8C  50                        PUSH EAX
00585E8D  51                        PUSH ECX
00585E8E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00585E94  E8 60 C7 E7 FF            CALL 0x004025f9
00585E99  8D 55 EC                  LEA EDX,[EBP + -0x14]
00585E9C  52                        PUSH EDX
00585E9D  E8 BE 51 12 00            CALL 0x006ab060
00585EA2  8D 45 F0                  LEA EAX,[EBP + -0x10]
00585EA5  50                        PUSH EAX
00585EA6  E8 B5 51 12 00            CALL 0x006ab060
00585EAB  8D 4D F8                  LEA ECX,[EBP + -0x8]
00585EAE  51                        PUSH ECX
00585EAF  E8 AC 51 12 00            CALL 0x006ab060
00585EB4  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00585EB7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00585EBC  33 C0                     XOR EAX,EAX
00585EBE  5F                        POP EDI
00585EBF  5E                        POP ESI
00585EC0  5B                        POP EBX
00585EC1  8B E5                     MOV ESP,EBP
00585EC3  5D                        POP EBP
00585EC4  C2 04 00                  RET 0x4
LAB_00585ec7:
00585EC7  2D 12 01 00 00            SUB EAX,0x112
00585ECC  74 24                     JZ 0x00585ef2
00585ECE  48                        DEC EAX
00585ECF  75 2C                     JNZ 0x00585efd
00585ED1  8B 93 D5 01 00 00         MOV EDX,dword ptr [EBX + 0x1d5]
00585ED7  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00585EDD  FF 12                     CALL dword ptr [EDX]
00585EDF  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00585EE2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00585EE7  33 C0                     XOR EAX,EAX
00585EE9  5F                        POP EDI
00585EEA  5E                        POP ESI
00585EEB  5B                        POP EBX
00585EEC  8B E5                     MOV ESP,EBP
00585EEE  5D                        POP EBP
00585EEF  C2 04 00                  RET 0x4
LAB_00585ef2:
00585EF2  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00585EF8  E8 93 CB E7 FF            CALL 0x00402a90
LAB_00585efd:
00585EFD  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00585F00  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00585F05  33 C0                     XOR EAX,EAX
00585F07  5F                        POP EDI
00585F08  5E                        POP ESI
00585F09  5B                        POP EBX
00585F0A  8B E5                     MOV ESP,EBP
00585F0C  5D                        POP EBP
00585F0D  C2 04 00                  RET 0x4
LAB_00585f10:
00585F10  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
00585F13  68 F4 B8 7C 00            PUSH 0x7cb8f4
00585F18  68 CC 4C 7A 00            PUSH 0x7a4ccc
00585F1D  56                        PUSH ESI
00585F1E  6A 00                     PUSH 0x0
00585F20  68 30 02 00 00            PUSH 0x230
00585F25  68 10 B9 7C 00            PUSH 0x7cb910
00585F2A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00585F30  E8 9B 75 12 00            CALL 0x006ad4d0
00585F35  83 C4 18                  ADD ESP,0x18
00585F38  85 C0                     TEST EAX,EAX
00585F3A  74 01                     JZ 0x00585f3d
00585F3C  CC                        INT3
LAB_00585f3d:
00585F3D  68 31 02 00 00            PUSH 0x231
00585F42  68 10 B9 7C 00            PUSH 0x7cb910
00585F47  6A 00                     PUSH 0x0
00585F49  56                        PUSH ESI
00585F4A  E8 F1 FE 11 00            CALL 0x006a5e40
00585F4F  5F                        POP EDI
00585F50  5E                        POP ESI
00585F51  B8 FF FF 00 00            MOV EAX,0xffff
00585F56  5B                        POP EBX
00585F57  8B E5                     MOV ESP,EBP
00585F59  5D                        POP EBP
00585F5A  C2 04 00                  RET 0x4
