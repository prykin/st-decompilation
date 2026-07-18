FUN_0053ca80:
0053CA80  55                        PUSH EBP
0053CA81  8B EC                     MOV EBP,ESP
0053CA83  83 EC 54                  SUB ESP,0x54
0053CA86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053CA8B  53                        PUSH EBX
0053CA8C  56                        PUSH ESI
0053CA8D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053CA90  57                        PUSH EDI
0053CA91  8D 55 B0                  LEA EDX,[EBP + -0x50]
0053CA94  8D 4D AC                  LEA ECX,[EBP + -0x54]
0053CA97  6A 00                     PUSH 0x0
0053CA99  52                        PUSH EDX
0053CA9A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0053CA9D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053CAA3  E8 48 0D 1F 00            CALL 0x0072d7f0
0053CAA8  8B F0                     MOV ESI,EAX
0053CAAA  83 C4 08                  ADD ESP,0x8
0053CAAD  85 F6                     TEST ESI,ESI
0053CAAF  0F 85 28 02 00 00         JNZ 0x0053ccdd
0053CAB5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053CAB8  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053CABB  BB 02 00 00 00            MOV EBX,0x2
0053CAC0  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0053CAC3  2B C3                     SUB EAX,EBX
0053CAC5  75 07                     JNZ 0x0053cace
0053CAC7  8B CE                     MOV ECX,ESI
0053CAC9  E8 D8 67 EC FF            CALL 0x004032a6
LAB_0053cace:
0053CACE  57                        PUSH EDI
0053CACF  8B CE                     MOV ECX,ESI
0053CAD1  E8 FE 8E EC FF            CALL 0x004059d4
0053CAD6  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0053CAD9  3D A3 C0 00 00            CMP EAX,0xc0a3
0053CADE  0F 87 75 01 00 00         JA 0x0053cc59
0053CAE4  3D 9F C0 00 00            CMP EAX,0xc09f
0053CAE9  0F 83 C1 00 00 00         JNC 0x0053cbb0
0053CAEF  2B C3                     SUB EAX,EBX
0053CAF1  0F 84 9F 00 00 00         JZ 0x0053cb96
0053CAF7  48                        DEC EAX
0053CAF8  74 4B                     JZ 0x0053cb45
0053CAFA  2D 04 B2 00 00            SUB EAX,0xb204
0053CAFF  0F 85 C5 01 00 00         JNZ 0x0053ccca
0053CB05  8A 86 78 02 00 00         MOV AL,byte ptr [ESI + 0x278]
0053CB0B  68 AE 00 00 00            PUSH 0xae
0053CB10  88 86 79 02 00 00         MOV byte ptr [ESI + 0x279],AL
0053CB16  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
0053CB19  8A 11                     MOV DL,byte ptr [ECX]
0053CB1B  FE CA                     DEC DL
0053CB1D  88 96 78 02 00 00         MOV byte ptr [ESI + 0x278],DL
0053CB23  E8 07 93 EC FF            CALL 0x00405e2f
0053CB28  8B 06                     MOV EAX,dword ptr [ESI]
0053CB2A  83 C4 04                  ADD ESP,0x4
0053CB2D  8B CE                     MOV ECX,ESI
0053CB2F  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
0053CB32  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0053CB35  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053CB3A  33 C0                     XOR EAX,EAX
0053CB3C  5F                        POP EDI
0053CB3D  5E                        POP ESI
0053CB3E  5B                        POP EBX
0053CB3F  8B E5                     MOV ESP,EBP
0053CB41  5D                        POP EBP
0053CB42  C2 04 00                  RET 0x4
LAB_0053cb45:
0053CB45  8D BE 7A 02 00 00         LEA EDI,[ESI + 0x27a]
LAB_0053cb4b:
0053CB4B  8B 07                     MOV EAX,dword ptr [EDI]
0053CB4D  85 C0                     TEST EAX,EAX
0053CB4F  74 0C                     JZ 0x0053cb5d
0053CB51  50                        PUSH EAX
0053CB52  E8 B9 15 17 00            CALL 0x006ae110
0053CB57  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_0053cb5d:
0053CB5D  83 C7 04                  ADD EDI,0x4
0053CB60  4B                        DEC EBX
0053CB61  75 E8                     JNZ 0x0053cb4b
0053CB63  8B 86 82 02 00 00         MOV EAX,dword ptr [ESI + 0x282]
0053CB69  85 C0                     TEST EAX,EAX
0053CB6B  74 09                     JZ 0x0053cb76
0053CB6D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0053CB70  50                        PUSH EAX
0053CB71  E8 3A 8B 1A 00            CALL 0x006e56b0
LAB_0053cb76:
0053CB76  33 C0                     XOR EAX,EAX
0053CB78  89 86 82 02 00 00         MOV dword ptr [ESI + 0x282],EAX
0053CB7E  A3 E8 16 80 00            MOV [0x008016e8],EAX
0053CB83  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0053CB86  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053CB8B  33 C0                     XOR EAX,EAX
0053CB8D  5F                        POP EDI
0053CB8E  5E                        POP ESI
0053CB8F  5B                        POP EBX
0053CB90  8B E5                     MOV ESP,EBP
0053CB92  5D                        POP EBP
0053CB93  C2 04 00                  RET 0x4
LAB_0053cb96:
0053CB96  8B CE                     MOV ECX,ESI
0053CB98  E8 16 46 EC FF            CALL 0x004011b3
0053CB9D  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0053CBA0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053CBA5  33 C0                     XOR EAX,EAX
0053CBA7  5F                        POP EDI
0053CBA8  5E                        POP ESI
0053CBA9  5B                        POP EBX
0053CBAA  8B E5                     MOV ESP,EBP
0053CBAC  5D                        POP EBP
0053CBAD  C2 04 00                  RET 0x4
LAB_0053cbb0:
0053CBB0  33 C9                     XOR ECX,ECX
0053CBB2  8A 8E 78 02 00 00         MOV CL,byte ptr [ESI + 0x278]
0053CBB8  8B 8C 8E 7A 02 00 00      MOV ECX,dword ptr [ESI + ECX*0x4 + 0x27a]
0053CBBF  85 C9                     TEST ECX,ECX
0053CBC1  74 25                     JZ 0x0053cbe8
0053CBC3  8B 96 99 01 00 00         MOV EDX,dword ptr [ESI + 0x199]
0053CBC9  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
0053CBCC  03 C2                     ADD EAX,EDX
0053CBCE  8D 90 61 3F FF FF         LEA EDX,[EAX + 0xffff3f61]
0053CBD4  3B D7                     CMP EDX,EDI
0053CBD6  73 10                     JNC 0x0053cbe8
0053CBD8  05 61 3F FF FF            ADD EAX,0xffff3f61
0053CBDD  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0053CBE0  0F AF 41 08               IMUL EAX,dword ptr [ECX + 0x8]
0053CBE4  03 C2                     ADD EAX,EDX
0053CBE6  EB 02                     JMP 0x0053cbea
LAB_0053cbe8:
0053CBE8  33 C0                     XOR EAX,EAX
LAB_0053cbea:
0053CBEA  85 C0                     TEST EAX,EAX
0053CBEC  0F 84 D8 00 00 00         JZ 0x0053ccca
0053CBF2  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
0053CBF5  84 C9                     TEST CL,CL
0053CBF7  0F 84 CD 00 00 00         JZ 0x0053ccca
0053CBFD  33 C9                     XOR ECX,ECX
0053CBFF  33 D2                     XOR EDX,EDX
0053CC01  8A 10                     MOV DL,byte ptr [EAX]
0053CC03  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0053CC06  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0053CC09  6A FF                     PUSH -0x1
0053CC0B  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
0053CC0F  8D 45 F0                  LEA EAX,[EBP + -0x10]
0053CC12  51                        PUSH ECX
0053CC13  88 4D FA                  MOV byte ptr [EBP + -0x6],CL
0053CC16  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0053CC1C  50                        PUSH EAX
0053CC1D  6A 1E                     PUSH 0x1e
0053CC1F  88 5D F0                  MOV byte ptr [EBP + -0x10],BL
0053CC22  89 55 F1                  MOV dword ptr [EBP + -0xf],EDX
0053CC25  66 C7 45 F5 01 00         MOV word ptr [EBP + -0xb],0x1
0053CC2B  E8 03 70 EC FF            CALL 0x00403c33
0053CC30  6A 00                     PUSH 0x0
0053CC32  8B CE                     MOV ECX,ESI
0053CC34  E8 3A 4E EC FF            CALL 0x00401a73
0053CC39  68 AE 00 00 00            PUSH 0xae
0053CC3E  E8 EC 91 EC FF            CALL 0x00405e2f
0053CC43  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0053CC46  83 C4 04                  ADD ESP,0x4
0053CC49  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053CC4E  33 C0                     XOR EAX,EAX
0053CC50  5F                        POP EDI
0053CC51  5E                        POP ESI
0053CC52  5B                        POP EBX
0053CC53  8B E5                     MOV ESP,EBP
0053CC55  5D                        POP EBP
0053CC56  C2 04 00                  RET 0x4
LAB_0053cc59:
0053CC59  05 5C 3F FF FF            ADD EAX,0xffff3f5c
0053CC5E  83 F8 10                  CMP EAX,0x10
0053CC61  77 67                     JA 0x0053ccca
0053CC63  33 C9                     XOR ECX,ECX
0053CC65  8A 88 3C CD 53 00         MOV CL,byte ptr [EAX + 0x53cd3c]
switchD_0053cc6b::switchD:
0053CC6B  FF 24 8D 2C CD 53 00      JMP dword ptr [ECX*0x4 + 0x53cd2c]
switchD_0053cc6b::caseD_c0a4:
0053CC72  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
0053CC75  8B CE                     MOV ECX,ESI
0053CC77  89 96 99 01 00 00         MOV dword ptr [ESI + 0x199],EDX
0053CC7D  E8 E2 89 EC FF            CALL 0x00405664
0053CC82  68 AE 00 00 00            PUSH 0xae
0053CC87  E8 A3 91 EC FF            CALL 0x00405e2f
0053CC8C  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0053CC8F  83 C4 04                  ADD ESP,0x4
0053CC92  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053CC97  33 C0                     XOR EAX,EAX
0053CC99  5F                        POP EDI
0053CC9A  5E                        POP ESI
0053CC9B  5B                        POP EBX
0053CC9C  8B E5                     MOV ESP,EBP
0053CC9E  5D                        POP EBP
0053CC9F  C2 04 00                  RET 0x4
switchD_0053cc6b::caseD_c0af:
0053CCA2  57                        PUSH EDI
0053CCA3  8B CE                     MOV ECX,ESI
0053CCA5  E8 11 92 EC FF            CALL 0x00405ebb
0053CCAA  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0053CCAD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053CCB2  33 C0                     XOR EAX,EAX
0053CCB4  5F                        POP EDI
0053CCB5  5E                        POP ESI
0053CCB6  5B                        POP EBX
0053CCB7  8B E5                     MOV ESP,EBP
0053CCB9  5D                        POP EBP
0053CCBA  C2 04 00                  RET 0x4
switchD_0053cc6b::caseD_c0b4:
0053CCBD  68 A4 1B 40 00            PUSH 0x401ba4
0053CCC2  57                        PUSH EDI
0053CCC3  8B CE                     MOV ECX,ESI
0053CCC5  E8 DA 71 EC FF            CALL 0x00403ea4
switchD_0053cc6b::caseD_c0a5:
0053CCCA  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0053CCCD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053CCD2  33 C0                     XOR EAX,EAX
0053CCD4  5F                        POP EDI
0053CCD5  5E                        POP ESI
0053CCD6  5B                        POP EBX
0053CCD7  8B E5                     MOV ESP,EBP
0053CCD9  5D                        POP EBP
0053CCDA  C2 04 00                  RET 0x4
LAB_0053ccdd:
0053CCDD  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0053CCE0  68 74 77 7C 00            PUSH 0x7c7774
0053CCE5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053CCEA  56                        PUSH ESI
0053CCEB  6A 00                     PUSH 0x0
0053CCED  68 C8 00 00 00            PUSH 0xc8
0053CCF2  68 C8 76 7C 00            PUSH 0x7c76c8
0053CCF7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053CCFD  E8 CE 07 17 00            CALL 0x006ad4d0
0053CD02  83 C4 18                  ADD ESP,0x18
0053CD05  85 C0                     TEST EAX,EAX
0053CD07  74 01                     JZ 0x0053cd0a
0053CD09  CC                        INT3
LAB_0053cd0a:
0053CD0A  68 C8 00 00 00            PUSH 0xc8
0053CD0F  68 C8 76 7C 00            PUSH 0x7c76c8
0053CD14  6A 00                     PUSH 0x0
0053CD16  56                        PUSH ESI
0053CD17  E8 24 91 16 00            CALL 0x006a5e40
0053CD1C  5F                        POP EDI
0053CD1D  5E                        POP ESI
0053CD1E  B8 FF FF 00 00            MOV EAX,0xffff
0053CD23  5B                        POP EBX
0053CD24  8B E5                     MOV ESP,EBP
0053CD26  5D                        POP EBP
0053CD27  C2 04 00                  RET 0x4
