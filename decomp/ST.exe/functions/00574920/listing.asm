FUN_00574920:
00574920  55                        PUSH EBP
00574921  8B EC                     MOV EBP,ESP
00574923  6A FF                     PUSH -0x1
00574925  68 F8 B0 79 00            PUSH 0x79b0f8
0057492A  68 64 D9 72 00            PUSH 0x72d964
0057492F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00574935  50                        PUSH EAX
00574936  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0057493D  81 EC 8C 00 00 00         SUB ESP,0x8c
00574943  53                        PUSH EBX
00574944  56                        PUSH ESI
00574945  57                        PUSH EDI
00574946  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00574949  33 F6                     XOR ESI,ESI
0057494B  89 75 B8                  MOV dword ptr [EBP + -0x48],ESI
0057494E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00574951  0F BF 0F                  MOVSX ECX,word ptr [EDI]
00574954  0F BF 47 02               MOVSX EAX,word ptr [EDI + 0x2]
00574958  0F AF C1                  IMUL EAX,ECX
0057495B  99                        CDQ
0057495C  83 E2 03                  AND EDX,0x3
0057495F  03 C2                     ADD EAX,EDX
00574961  8B D8                     MOV EBX,EAX
00574963  C1 FB 02                  SAR EBX,0x2
00574966  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00574969  C7 45 C4 01 00 00 00      MOV dword ptr [EBP + -0x3c],0x1
00574970  8B C1                     MOV EAX,ECX
00574972  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
00574976  99                        CDQ
00574977  2B C2                     SUB EAX,EDX
00574979  D1 F8                     SAR EAX,0x1
0057497B  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
0057497E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00574981  03 D0                     ADD EDX,EAX
00574983  03 CA                     ADD ECX,EDX
00574985  8D 84 8F 59 04 00 00      LEA EAX,[EDI + ECX*0x4 + 0x459]
0057498C  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0057498F  C7 45 D0 05 00 00 00      MOV dword ptr [EBP + -0x30],0x5
LAB_00574996:
00574996  39 75 D0                  CMP dword ptr [EBP + -0x30],ESI
00574999  0F 8C 0A 05 00 00         JL 0x00574ea9
0057499F  8B 18                     MOV EBX,dword ptr [EAX]
005749A1  89 5D AC                  MOV dword ptr [EBP + -0x54],EBX
005749A4  3B DE                     CMP EBX,ESI
005749A6  0F 84 E5 04 00 00         JZ 0x00574e91
005749AC  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
005749AF  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
005749B2  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
005749B5  39 73 10                  CMP dword ptr [EBX + 0x10],ESI
005749B8  0F 84 65 01 00 00         JZ 0x00574b23
005749BE  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005749C1  85 C0                     TEST EAX,EAX
005749C3  0F 84 5A 01 00 00         JZ 0x00574b23
005749C9  8B 87 51 04 00 00         MOV EAX,dword ptr [EDI + 0x451]
005749CF  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
LAB_005749d6:
005749D6  8B 87 51 04 00 00         MOV EAX,dword ptr [EDI + 0x451]
005749DC  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005749DF  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
005749E2  73 0F                     JNC 0x005749f3
005749E4  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005749E7  0F AF F1                  IMUL ESI,ECX
005749EA  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005749ED  41                        INC ECX
005749EE  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
005749F1  EB 02                     JMP 0x005749f5
LAB_005749f3:
005749F3  33 F6                     XOR ESI,ESI
LAB_005749f5:
005749F5  85 F6                     TEST ESI,ESI
005749F7  74 0F                     JZ 0x00574a08
005749F9  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
005749FC  3B 0E                     CMP ECX,dword ptr [ESI]
005749FE  75 D6                     JNZ 0x005749d6
00574A00  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
00574A03  3B 56 04                  CMP EDX,dword ptr [ESI + 0x4]
00574A06  75 CE                     JNZ 0x005749d6
LAB_00574a08:
00574A08  C7 45 C8 01 00 00 00      MOV dword ptr [EBP + -0x38],0x1
00574A0F  85 F6                     TEST ESI,ESI
00574A11  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00574A14  0F 85 BA 00 00 00         JNZ 0x00574ad4
00574A1A  50                        PUSH EAX
00574A1B  E8 70 14 13 00            CALL 0x006a5e90
00574A20  33 C0                     XOR EAX,EAX
00574A22  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00574A25  8B C8                     MOV ECX,EAX
00574A27  0F AF C8                  IMUL ECX,EAX
00574A2A  C1 E1 02                  SHL ECX,0x2
00574A2D  51                        PUSH ECX
00574A2E  E8 3D 62 13 00            CALL 0x006aac70
00574A33  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
00574A36  B9 01 00 00 00            MOV ECX,0x1
00574A3B  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00574A3E  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00574A41  8B 73 10                  MOV ESI,dword ptr [EBX + 0x10]
00574A44  85 F6                     TEST ESI,ESI
00574A46  74 20                     JZ 0x00574a68
00574A48  33 C9                     XOR ECX,ECX
00574A4A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00574A4D  8A 4A 04                  MOV CL,byte ptr [EDX + 0x4]
00574A50  0F AF C9                  IMUL ECX,ECX
00574A53  C1 E1 02                  SHL ECX,0x2
00574A56  8B F8                     MOV EDI,EAX
00574A58  8B C1                     MOV EAX,ECX
00574A5A  C1 E9 02                  SHR ECX,0x2
00574A5D  F3 A5                     MOVSD.REP ES:EDI,ESI
00574A5F  8B C8                     MOV ECX,EAX
00574A61  83 E1 03                  AND ECX,0x3
00574A64  F3 A4                     MOVSB.REP ES:EDI,ESI
00574A66  8B FA                     MOV EDI,EDX
LAB_00574a68:
00574A68  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00574A6F  33 C0                     XOR EAX,EAX
00574A71  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00574A74  D1 E0                     SHL EAX,0x1
00574A76  33 C9                     XOR ECX,ECX
00574A78  8A 4B 0A                  MOV CL,byte ptr [EBX + 0xa]
00574A7B  51                        PUSH ECX
00574A7C  50                        PUSH EAX
00574A7D  50                        PUSH EAX
00574A7E  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
00574A81  52                        PUSH EDX
00574A82  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00574A85  50                        PUSH EAX
00574A86  E8 45 B9 13 00            CALL 0x006b03d0
00574A8B  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00574A92  E9 8C 00 00 00            JMP 0x00574b23
LAB_00574ad4:
00574AD4  85 C0                     TEST EAX,EAX
00574AD6  74 45                     JZ 0x00574b1d
00574AD8  8B 8F 51 04 00 00         MOV ECX,dword ptr [EDI + 0x451]
00574ADE  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
LAB_00574ae5:
00574AE5  8B 87 51 04 00 00         MOV EAX,dword ptr [EDI + 0x451]
00574AEB  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00574AEE  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
00574AF1  73 0F                     JNC 0x00574b02
00574AF3  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00574AF6  0F AF F1                  IMUL ESI,ECX
00574AF9  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
00574AFC  41                        INC ECX
00574AFD  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00574B00  EB 02                     JMP 0x00574b04
LAB_00574b02:
00574B02  33 F6                     XOR ESI,ESI
LAB_00574b04:
00574B04  85 F6                     TEST ESI,ESI
00574B06  74 0C                     JZ 0x00574b14
00574B08  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00574B0B  3B 56 08                  CMP EDX,dword ptr [ESI + 0x8]
00574B0E  75 D5                     JNZ 0x00574ae5
00574B10  85 F6                     TEST ESI,ESI
00574B12  75 09                     JNZ 0x00574b1d
LAB_00574b14:
00574B14  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00574B17  50                        PUSH EAX
00574B18  E8 73 13 13 00            CALL 0x006a5e90
LAB_00574b1d:
00574B1D  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00574B20  89 4B 0C                  MOV dword ptr [EBX + 0xc],ECX
LAB_00574b23:
00574B23  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00574B26  85 C0                     TEST EAX,EAX
00574B28  74 15                     JZ 0x00574b3f
00574B2A  F6 43 4F 10               TEST byte ptr [EBX + 0x4f],0x10
00574B2E  75 0F                     JNZ 0x00574b3f
00574B30  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00574B33  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00574B36  85 C0                     TEST EAX,EAX
00574B38  75 10                     JNZ 0x00574b4a
00574B3A  E9 29 03 00 00            JMP 0x00574e68
LAB_00574b3f:
00574B3F  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00574B42  85 C0                     TEST EAX,EAX
00574B44  0F 85 1E 03 00 00         JNZ 0x00574e68
LAB_00574b4a:
00574B4A  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00574B4D  85 C0                     TEST EAX,EAX
00574B4F  74 2D                     JZ 0x00574b7e
00574B51  33 C9                     XOR ECX,ECX
00574B53  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00574B56  8A 4A 04                  MOV CL,byte ptr [EDX + 0x4]
00574B59  0F AF C9                  IMUL ECX,ECX
00574B5C  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
00574B5F  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00574B62  8B C1                     MOV EAX,ECX
00574B64  C1 E9 02                  SHR ECX,0x2
00574B67  F3 A5                     MOVSD.REP ES:EDI,ESI
00574B69  8B C8                     MOV ECX,EAX
00574B6B  83 E1 03                  AND ECX,0x3
00574B6E  F3 A4                     MOVSB.REP ES:EDI,ESI
00574B70  C7 45 C4 00 00 00 00      MOV dword ptr [EBP + -0x3c],0x0
00574B77  8B FA                     MOV EDI,EDX
00574B79  E9 EA 02 00 00            JMP 0x00574e68
LAB_00574b7e:
00574B7E  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00574B81  85 C0                     TEST EAX,EAX
00574B83  0F 85 90 00 00 00         JNZ 0x00574c19
00574B89  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00574B8C  85 C0                     TEST EAX,EAX
00574B8E  74 45                     JZ 0x00574bd5
00574B90  8B 8F 51 04 00 00         MOV ECX,dword ptr [EDI + 0x451]
00574B96  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
LAB_00574b9d:
00574B9D  8B 8F 51 04 00 00         MOV ECX,dword ptr [EDI + 0x451]
00574BA3  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00574BA6  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00574BA9  73 0F                     JNC 0x00574bba
00574BAB  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00574BAE  0F AF C2                  IMUL EAX,EDX
00574BB1  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00574BB4  42                        INC EDX
00574BB5  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00574BB8  EB 02                     JMP 0x00574bbc
LAB_00574bba:
00574BBA  33 C0                     XOR EAX,EAX
LAB_00574bbc:
00574BBC  85 C0                     TEST EAX,EAX
00574BBE  74 0C                     JZ 0x00574bcc
00574BC0  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00574BC3  3B 50 08                  CMP EDX,dword ptr [EAX + 0x8]
00574BC6  75 D5                     JNZ 0x00574b9d
00574BC8  85 C0                     TEST EAX,EAX
00574BCA  75 09                     JNZ 0x00574bd5
LAB_00574bcc:
00574BCC  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00574BCF  50                        PUSH EAX
00574BD0  E8 BB 12 13 00            CALL 0x006a5e90
LAB_00574bd5:
00574BD5  33 C0                     XOR EAX,EAX
00574BD7  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00574BDA  8B C8                     MOV ECX,EAX
00574BDC  0F AF C8                  IMUL ECX,EAX
00574BDF  C1 E1 02                  SHL ECX,0x2
00574BE2  51                        PUSH ECX
00574BE3  E8 88 60 13 00            CALL 0x006aac70
00574BE8  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
00574BEB  8B 73 10                  MOV ESI,dword ptr [EBX + 0x10]
00574BEE  85 F6                     TEST ESI,ESI
00574BF0  75 07                     JNZ 0x00574bf9
00574BF2  8B 73 14                  MOV ESI,dword ptr [EBX + 0x14]
00574BF5  85 F6                     TEST ESI,ESI
00574BF7  74 61                     JZ 0x00574c5a
LAB_00574bf9:
00574BF9  33 C9                     XOR ECX,ECX
00574BFB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00574BFE  8A 4A 04                  MOV CL,byte ptr [EDX + 0x4]
00574C01  0F AF C9                  IMUL ECX,ECX
00574C04  C1 E1 02                  SHL ECX,0x2
00574C07  8B F8                     MOV EDI,EAX
00574C09  8B C1                     MOV EAX,ECX
00574C0B  C1 E9 02                  SHR ECX,0x2
00574C0E  F3 A5                     MOVSD.REP ES:EDI,ESI
00574C10  8B C8                     MOV ECX,EAX
00574C12  83 E1 03                  AND ECX,0x3
00574C15  F3 A4                     MOVSB.REP ES:EDI,ESI
00574C17  EB 3E                     JMP 0x00574c57
LAB_00574c19:
00574C19  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00574C1C  85 C0                     TEST EAX,EAX
00574C1E  75 3A                     JNZ 0x00574c5a
00574C20  33 C0                     XOR EAX,EAX
00574C22  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00574C25  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
00574C28  8B C8                     MOV ECX,EAX
00574C2A  0F AF C8                  IMUL ECX,EAX
00574C2D  C1 E1 02                  SHL ECX,0x2
00574C30  51                        PUSH ECX
00574C31  E8 3A 60 13 00            CALL 0x006aac70
00574C36  33 C9                     XOR ECX,ECX
00574C38  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
00574C3B  0F AF C9                  IMUL ECX,ECX
00574C3E  C1 E1 02                  SHL ECX,0x2
00574C41  8B 73 0C                  MOV ESI,dword ptr [EBX + 0xc]
00574C44  8B F8                     MOV EDI,EAX
00574C46  8B D1                     MOV EDX,ECX
00574C48  C1 E9 02                  SHR ECX,0x2
00574C4B  F3 A5                     MOVSD.REP ES:EDI,ESI
00574C4D  8B CA                     MOV ECX,EDX
00574C4F  83 E1 03                  AND ECX,0x3
00574C52  F3 A4                     MOVSB.REP ES:EDI,ESI
00574C54  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
LAB_00574c57:
00574C57  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_00574c5a:
00574C5A  33 C0                     XOR EAX,EAX
00574C5C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00574C5F  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00574C66  39 45 D0                  CMP dword ptr [EBP + -0x30],EAX
00574C69  0F 84 FC 00 00 00         JZ 0x00574d6b
00574C6F  F6 43 4F 10               TEST byte ptr [EBX + 0x4f],0x10
00574C73  0F 85 F2 00 00 00         JNZ 0x00574d6b
00574C79  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
LAB_00574c7c:
00574C7C  33 C9                     XOR ECX,ECX
00574C7E  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
00574C81  8D 04 09                  LEA EAX,[ECX + ECX*0x1]
00574C84  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00574C87  3B D0                     CMP EDX,EAX
00574C89  0F 8D 95 01 00 00         JGE 0x00574e24
00574C8F  0F AF CA                  IMUL ECX,EDX
00574C92  8B C1                     MOV EAX,ECX
00574C94  99                        CDQ
00574C95  2B C2                     SUB EAX,EDX
00574C97  D1 F8                     SAR EAX,0x1
00574C99  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00574C9C  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
00574C9F  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
00574CA2  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00574CA5  03 C2                     ADD EAX,EDX
00574CA7  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00574CAA  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00574CAD  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
00574CB0  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00574CB3  33 F6                     XOR ESI,ESI
00574CB5  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
LAB_00574cb8:
00574CB8  33 D2                     XOR EDX,EDX
00574CBA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00574CBD  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
00574CC0  D1 E2                     SHL EDX,0x1
00574CC2  3B F2                     CMP ESI,EDX
00574CC4  0F 8D 96 00 00 00         JGE 0x00574d60
00574CCA  8B C6                     MOV EAX,ESI
00574CCC  99                        CDQ
00574CCD  83 E2 03                  AND EDX,0x3
00574CD0  03 C2                     ADD EAX,EDX
00574CD2  C1 F8 02                  SAR EAX,0x2
00574CD5  8B CE                     MOV ECX,ESI
00574CD7  81 E1 03 00 00 80         AND ECX,0x80000003
00574CDD  79 05                     JNS 0x00574ce4
00574CDF  49                        DEC ECX
00574CE0  83 C9 FC                  OR ECX,0xfffffffc
00574CE3  41                        INC ECX
LAB_00574ce4:
00574CE4  8D 89 A4 A6 7C 00         LEA ECX,[ECX + 0x7ca6a4]
00574CEA  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
00574CF0  8A 09                     MOV CL,byte ptr [ECX]
00574CF2  8A D1                     MOV DL,CL
00574CF4  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
00574CF7  22 14 18                  AND DL,byte ptr [EAX + EBX*0x1]
00574CFA  3A D1                     CMP DL,CL
00574CFC  75 3E                     JNZ 0x00574d3c
00574CFE  81 E1 FF 00 00 00         AND ECX,0xff
00574D04  33 D2                     XOR EDX,EDX
00574D06  8A 14 38                  MOV DL,byte ptr [EAX + EDI*0x1]
00574D09  23 D1                     AND EDX,ECX
00574D0B  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
00574D0E  74 2C                     JZ 0x00574d3c
00574D10  3B D1                     CMP EDX,ECX
00574D12  75 14                     JNZ 0x00574d28
00574D14  33 D2                     XOR EDX,EDX
00574D16  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00574D19  8A 11                     MOV DL,byte ptr [ECX]
00574D1B  8B 1D 60 75 80 00         MOV EBX,dword ptr [0x00807560]
00574D21  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
00574D24  88 11                     MOV byte ptr [ECX],DL
00574D26  EB 17                     JMP 0x00574d3f
LAB_00574d28:
00574D28  33 D2                     XOR EDX,EDX
00574D2A  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00574D2D  8A 11                     MOV DL,byte ptr [ECX]
00574D2F  8B 1D C8 73 80 00         MOV EBX,dword ptr [0x008073c8]
00574D35  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
00574D38  88 11                     MOV byte ptr [ECX],DL
00574D3A  EB 03                     JMP 0x00574d3f
LAB_00574d3c:
00574D3C  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
LAB_00574d3f:
00574D3F  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
00574D45  8A 12                     MOV DL,byte ptr [EDX]
00574D47  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
00574D4A  22 14 18                  AND DL,byte ptr [EAX + EBX*0x1]
00574D4D  08 14 38                  OR byte ptr [EAX + EDI*0x1],DL
00574D50  46                        INC ESI
00574D51  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
00574D54  41                        INC ECX
00574D55  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00574D58  8B 5D AC                  MOV EBX,dword ptr [EBP + -0x54]
00574D5B  E9 58 FF FF FF            JMP 0x00574cb8
LAB_00574d60:
00574D60  FF 45 B4                  INC dword ptr [EBP + -0x4c]
00574D63  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00574D66  E9 11 FF FF FF            JMP 0x00574c7c
LAB_00574d6b:
00574D6B  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
LAB_00574d6e:
00574D6E  33 C9                     XOR ECX,ECX
00574D70  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
00574D73  8D 04 09                  LEA EAX,[ECX + ECX*0x1]
00574D76  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00574D79  3B D0                     CMP EDX,EAX
00574D7B  0F 8D A3 00 00 00         JGE 0x00574e24
00574D81  0F AF CA                  IMUL ECX,EDX
00574D84  8B C1                     MOV EAX,ECX
00574D86  99                        CDQ
00574D87  2B C2                     SUB EAX,EDX
00574D89  8B F0                     MOV ESI,EAX
00574D8B  D1 FE                     SAR ESI,0x1
00574D8D  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
00574D90  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
00574D93  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00574D96  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
00574D99  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00574D9C  33 FF                     XOR EDI,EDI
00574D9E  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
LAB_00574da1:
00574DA1  33 C9                     XOR ECX,ECX
00574DA3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00574DA6  8A 4A 04                  MOV CL,byte ptr [EDX + 0x4]
00574DA9  D1 E1                     SHL ECX,0x1
00574DAB  3B F9                     CMP EDI,ECX
00574DAD  7D 6A                     JGE 0x00574e19
00574DAF  8B C7                     MOV EAX,EDI
00574DB1  25 03 00 00 80            AND EAX,0x80000003
00574DB6  79 05                     JNS 0x00574dbd
00574DB8  48                        DEC EAX
00574DB9  83 C8 FC                  OR EAX,0xfffffffc
00574DBC  40                        INC EAX
LAB_00574dbd:
00574DBD  33 C9                     XOR ECX,ECX
00574DBF  8A 88 A4 A6 7C 00         MOV CL,byte ptr [EAX + 0x7ca6a4]
00574DC5  8B C7                     MOV EAX,EDI
00574DC7  99                        CDQ
00574DC8  83 E2 03                  AND EDX,0x3
00574DCB  03 C2                     ADD EAX,EDX
00574DCD  C1 F8 02                  SAR EAX,0x2
00574DD0  33 D2                     XOR EDX,EDX
00574DD2  8A 14 30                  MOV DL,byte ptr [EAX + ESI*0x1]
00574DD5  8B C2                     MOV EAX,EDX
00574DD7  23 C1                     AND EAX,ECX
00574DD9  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00574DDC  74 32                     JZ 0x00574e10
00574DDE  3B C1                     CMP EAX,ECX
00574DE0  75 1C                     JNZ 0x00574dfe
00574DE2  33 C9                     XOR ECX,ECX
00574DE4  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00574DE7  8A 08                     MOV CL,byte ptr [EAX]
00574DE9  8B 15 60 75 80 00         MOV EDX,dword ptr [0x00807560]
00574DEF  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
00574DF2  88 08                     MOV byte ptr [EAX],CL
00574DF4  47                        INC EDI
00574DF5  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00574DF8  40                        INC EAX
00574DF9  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00574DFC  EB A3                     JMP 0x00574da1
LAB_00574dfe:
00574DFE  33 D2                     XOR EDX,EDX
00574E00  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00574E03  8A 10                     MOV DL,byte ptr [EAX]
00574E05  8B 0D C8 73 80 00         MOV ECX,dword ptr [0x008073c8]
00574E0B  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
00574E0E  88 10                     MOV byte ptr [EAX],DL
LAB_00574e10:
00574E10  47                        INC EDI
00574E11  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00574E14  FF 45 A4                  INC dword ptr [EBP + -0x5c]
00574E17  EB 88                     JMP 0x00574da1
LAB_00574e19:
00574E19  FF 45 B4                  INC dword ptr [EBP + -0x4c]
00574E1C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00574E1F  E9 4A FF FF FF            JMP 0x00574d6e
LAB_00574e24:
00574E24  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00574E2B  EB 3B                     JMP 0x00574e68
LAB_00574e68:
00574E68  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00574E6B  85 C0                     TEST EAX,EAX
00574E6D  74 22                     JZ 0x00574e91
00574E6F  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
00574E72  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00574E75  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
00574E78  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
00574E7B  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00574E7E  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00574E81  8D 45 98                  LEA EAX,[EBP + -0x68]
00574E84  50                        PUSH EAX
00574E85  8B 8F 51 04 00 00         MOV ECX,dword ptr [EDI + 0x451]
00574E8B  51                        PUSH ECX
00574E8C  E8 2F 93 13 00            CALL 0x006ae1c0
LAB_00574e91:
00574E91  FF 4D D0                  DEC dword ptr [EBP + -0x30]
00574E94  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00574E97  F7 DA                     NEG EDX
00574E99  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00574E9C  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
00574E9F  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00574EA2  33 F6                     XOR ESI,ESI
00574EA4  E9 ED FA FF FF            JMP 0x00574996
LAB_00574ea9:
00574EA9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00574EAC  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00574EB3  5F                        POP EDI
00574EB4  5E                        POP ESI
00574EB5  5B                        POP EBX
00574EB6  8B E5                     MOV ESP,EBP
00574EB8  5D                        POP EBP
00574EB9  C3                        RET
