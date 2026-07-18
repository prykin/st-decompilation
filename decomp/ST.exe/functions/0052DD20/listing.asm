FUN_0052dd20:
0052DD20  55                        PUSH EBP
0052DD21  8B EC                     MOV EBP,ESP
0052DD23  83 EC 58                  SUB ESP,0x58
0052DD26  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052DD2B  53                        PUSH EBX
0052DD2C  56                        PUSH ESI
0052DD2D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0052DD30  33 DB                     XOR EBX,EBX
0052DD32  57                        PUSH EDI
0052DD33  8D 55 AC                  LEA EDX,[EBP + -0x54]
0052DD36  8D 4D A8                  LEA ECX,[EBP + -0x58]
0052DD39  53                        PUSH EBX
0052DD3A  52                        PUSH EDX
0052DD3B  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0052DD3E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052DD44  E8 A7 FA 1F 00            CALL 0x0072d7f0
0052DD49  8B F0                     MOV ESI,EAX
0052DD4B  83 C4 08                  ADD ESP,0x8
0052DD4E  3B F3                     CMP ESI,EBX
0052DD50  0F 85 94 04 00 00         JNZ 0x0052e1ea
0052DD56  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052DD59  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0052DD5C  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
0052DD5F  83 F8 05                  CMP EAX,0x5
0052DD62  0F 87 65 04 00 00         JA 0x0052e1cd
switchD_0052dd68::switchD:
0052DD68  FF 24 85 38 E2 52 00      JMP dword ptr [EAX*0x4 + 0x52e238]
switchD_0052dd68::caseD_2:
0052DD6F  8A 0D D9 7D 80 00         MOV CL,byte ptr [0x00807dd9]
0052DD75  8B 15 9C 67 80 00         MOV EDX,dword ptr [0x0080679c]
0052DD7B  51                        PUSH ECX
0052DD7C  53                        PUSH EBX
0052DD7D  52                        PUSH EDX
0052DD7E  E8 6C 5C ED FF            CALL 0x004039ef
0052DD83  89 86 94 00 00 00         MOV dword ptr [ESI + 0x94],EAX
0052DD89  C7 40 7E 01 00 00 00      MOV dword ptr [EAX + 0x7e],0x1
0052DD90  05 9E 00 00 00            ADD EAX,0x9e
0052DD95  83 C4 0C                  ADD ESP,0xc
0052DD98  66 89 18                  MOV word ptr [EAX],BX
0052DD9B  8A 0D F0 6F 7C 00         MOV CL,byte ptr [0x007c6ff0]
0052DDA1  88 08                     MOV byte ptr [EAX],CL
0052DDA3  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0052DDA8  6A 01                     PUSH 0x1
0052DDAA  8D 50 28                  LEA EDX,[EAX + 0x28]
0052DDAD  52                        PUSH EDX
0052DDAE  50                        PUSH EAX
0052DDAF  E8 2C 72 18 00            CALL 0x006b4fe0
0052DDB4  8B 15 48 73 80 00         MOV EDX,dword ptr [0x00807348]
0052DDBA  8B 0D 9C 67 80 00         MOV ECX,dword ptr [0x0080679c]
0052DDC0  50                        PUSH EAX
0052DDC1  33 C0                     XOR EAX,EAX
0052DDC3  66 8B 41 0E               MOV AX,word ptr [ECX + 0xe]
0052DDC7  81 E2 FF 00 00 00         AND EDX,0xff
0052DDCD  C1 E2 04                  SHL EDX,0x4
0052DDD0  50                        PUSH EAX
0052DDD1  68 1D 01 00 00            PUSH 0x11d
0052DDD6  8B 82 70 75 80 00         MOV EAX,dword ptr [EDX + 0x807570]
0052DDDC  50                        PUSH EAX
0052DDDD  E8 DE 72 18 00            CALL 0x006b50c0
0052DDE2  89 86 90 00 00 00         MOV dword ptr [ESI + 0x90],EAX
0052DDE8  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0052DDEB  3B CB                     CMP ECX,EBX
0052DDED  74 04                     JZ 0x0052ddf3
0052DDEF  8B D9                     MOV EBX,ECX
0052DDF1  EB 1A                     JMP 0x0052de0d
LAB_0052ddf3:
0052DDF3  33 DB                     XOR EBX,EBX
0052DDF5  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
0052DDF9  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
0052DDFD  83 C3 1F                  ADD EBX,0x1f
0052DE00  C1 EB 03                  SHR EBX,0x3
0052DE03  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
0052DE09  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_0052de0d:
0052DE0D  50                        PUSH EAX
0052DE0E  E8 8D 71 18 00            CALL 0x006b4fa0
0052DE13  8B CB                     MOV ECX,EBX
0052DE15  8B F8                     MOV EDI,EAX
0052DE17  8B D1                     MOV EDX,ECX
0052DE19  B8 89 89 89 89            MOV EAX,0x89898989
0052DE1E  C1 E9 02                  SHR ECX,0x2
0052DE21  F3 AB                     STOSD.REP ES:EDI
0052DE23  8B CA                     MOV ECX,EDX
0052DE25  BB 1E 00 00 00            MOV EBX,0x1e
0052DE2A  83 E1 03                  AND ECX,0x3
0052DE2D  C7 45 F4 0F 00 00 00      MOV dword ptr [EBP + -0xc],0xf
0052DE34  F3 AA                     STOSB.REP ES:EDI
0052DE36  8D 7E 18                  LEA EDI,[ESI + 0x18]
LAB_0052de39:
0052DE39  8B 47 3C                  MOV EAX,dword ptr [EDI + 0x3c]
0052DE3C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052DE42  56                        PUSH ESI
0052DE43  6A 13                     PUSH 0x13
0052DE45  50                        PUSH EAX
0052DE46  68 22 5C 40 00            PUSH 0x405c22
0052DE4B  6A 08                     PUSH 0x8
0052DE4D  57                        PUSH EDI
0052DE4E  51                        PUSH ECX
0052DE4F  E8 DC 44 18 00            CALL 0x006b2330
0052DE54  8B 17                     MOV EDX,dword ptr [EDI]
0052DE56  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0052DE5B  52                        PUSH EDX
0052DE5C  50                        PUSH EAX
0052DE5D  E8 6E 3D 18 00            CALL 0x006b1bd0
0052DE62  8B 0F                     MOV ECX,dword ptr [EDI]
0052DE64  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0052DE6A  53                        PUSH EBX
0052DE6B  6A 0D                     PUSH 0xd
0052DE6D  6A FF                     PUSH -0x1
0052DE6F  51                        PUSH ECX
0052DE70  52                        PUSH EDX
0052DE71  E8 CA 57 18 00            CALL 0x006b3640
0052DE76  8B 07                     MOV EAX,dword ptr [EDI]
0052DE78  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052DE7E  50                        PUSH EAX
0052DE7F  51                        PUSH ECX
0052DE80  E8 6B 5C 18 00            CALL 0x006b3af0
0052DE85  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0052DE88  83 C7 04                  ADD EDI,0x4
0052DE8B  83 C3 13                  ADD EBX,0x13
0052DE8E  48                        DEC EAX
0052DE8F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0052DE92  75 A5                     JNZ 0x0052de39
0052DE94  6A 0A                     PUSH 0xa
0052DE96  6A 0A                     PUSH 0xa
0052DE98  6A 00                     PUSH 0x0
0052DE9A  E8 51 76 18 00            CALL 0x006b54f0
0052DE9F  B9 20 76 80 00            MOV ECX,0x807620
0052DEA4  89 86 98 00 00 00         MOV dword ptr [ESI + 0x98],EAX
0052DEAA  E8 01 73 1B 00            CALL 0x006e51b0
0052DEAF  89 86 9D 00 00 00         MOV dword ptr [ESI + 0x9d],EAX
0052DEB5  89 35 D8 16 80 00         MOV dword ptr [0x008016d8],ESI
0052DEBB  E9 0D 03 00 00            JMP 0x0052e1cd
switchD_0052dd68::caseD_3:
0052DEC0  89 1D D8 16 80 00         MOV dword ptr [0x008016d8],EBX
0052DEC6  8D 7E 18                  LEA EDI,[ESI + 0x18]
0052DEC9  BB 0F 00 00 00            MOV EBX,0xf
LAB_0052dece:
0052DECE  8B 07                     MOV EAX,dword ptr [EDI]
0052DED0  83 F8 FF                  CMP EAX,-0x1
0052DED3  74 13                     JZ 0x0052dee8
0052DED5  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0052DEDB  50                        PUSH EAX
0052DEDC  52                        PUSH EDX
0052DEDD  E8 CE 5C 18 00            CALL 0x006b3bb0
0052DEE2  C7 07 FF FF FF FF         MOV dword ptr [EDI],0xffffffff
LAB_0052dee8:
0052DEE8  83 C7 04                  ADD EDI,0x4
0052DEEB  4B                        DEC EBX
0052DEEC  75 E0                     JNZ 0x0052dece
0052DEEE  8B 8E 90 00 00 00         MOV ECX,dword ptr [ESI + 0x90]
0052DEF4  8D 86 90 00 00 00         LEA EAX,[ESI + 0x90]
0052DEFA  33 FF                     XOR EDI,EDI
0052DEFC  3B CF                     CMP ECX,EDI
0052DEFE  74 06                     JZ 0x0052df06
0052DF00  50                        PUSH EAX
0052DF01  E8 5A D1 17 00            CALL 0x006ab060
LAB_0052df06:
0052DF06  8B 86 94 00 00 00         MOV EAX,dword ptr [ESI + 0x94]
0052DF0C  3B C7                     CMP EAX,EDI
0052DF0E  74 0F                     JZ 0x0052df1f
0052DF10  50                        PUSH EAX
0052DF11  E8 4A 26 1E 00            CALL 0x00710560
0052DF16  83 C4 04                  ADD ESP,0x4
0052DF19  89 BE 94 00 00 00         MOV dword ptr [ESI + 0x94],EDI
LAB_0052df1f:
0052DF1F  8B 86 98 00 00 00         MOV EAX,dword ptr [ESI + 0x98]
0052DF25  3B C7                     CMP EAX,EDI
0052DF27  0F 84 A0 02 00 00         JZ 0x0052e1cd
0052DF2D  50                        PUSH EAX
0052DF2E  E8 3D 76 18 00            CALL 0x006b5570
0052DF33  89 BE 98 00 00 00         MOV dword ptr [ESI + 0x98],EDI
0052DF39  E9 8F 02 00 00            JMP 0x0052e1cd
switchD_0052dd68::caseD_5:
0052DF3E  B9 E8 FF FF FF            MOV ECX,0xffffffe8
0052DF43  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0052DF46  2B CE                     SUB ECX,ESI
0052DF48  BB 1E 00 00 00            MOV EBX,0x1e
0052DF4D  8D 7E 18                  LEA EDI,[ESI + 0x18]
0052DF50  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0052DF53  C7 45 F0 0F 00 00 00      MOV dword ptr [EBP + -0x10],0xf
LAB_0052df5a:
0052DF5A  83 3F FF                  CMP dword ptr [EDI],-0x1
0052DF5D  74 35                     JZ 0x0052df94
0052DF5F  8B 86 98 00 00 00         MOV EAX,dword ptr [ESI + 0x98]
0052DF65  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0052DF68  3B 50 08                  CMP EDX,dword ptr [EAX + 0x8]
0052DF6B  7D 0A                     JGE 0x0052df77
0052DF6D  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
0052DF70  03 C1                     ADD EAX,ECX
0052DF72  8B 04 38                  MOV EAX,dword ptr [EAX + EDI*0x1]
0052DF75  EB 02                     JMP 0x0052df79
LAB_0052df77:
0052DF77  33 C0                     XOR EAX,EAX
LAB_0052df79:
0052DF79  85 C0                     TEST EAX,EAX
0052DF7B  74 17                     JZ 0x0052df94
0052DF7D  8B 07                     MOV EAX,dword ptr [EDI]
0052DF7F  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052DF85  53                        PUSH EBX
0052DF86  6A 0D                     PUSH 0xd
0052DF88  6A FF                     PUSH -0x1
0052DF8A  50                        PUSH EAX
0052DF8B  51                        PUSH ECX
0052DF8C  E8 AF 56 18 00            CALL 0x006b3640
0052DF91  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0052df94:
0052DF94  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0052DF97  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0052DF9A  42                        INC EDX
0052DF9B  83 C7 04                  ADD EDI,0x4
0052DF9E  83 C3 13                  ADD EBX,0x13
0052DFA1  48                        DEC EAX
0052DFA2  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0052DFA5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0052DFA8  75 B0                     JNZ 0x0052df5a
0052DFAA  E9 1E 02 00 00            JMP 0x0052e1cd
switchD_0052dd68::caseD_0:
0052DFAF  33 D2                     XOR EDX,EDX
0052DFB1  B9 20 76 80 00            MOV ECX,0x807620
0052DFB6  8A 15 47 73 80 00         MOV DL,byte ptr [0x00807347]
0052DFBC  8B FA                     MOV EDI,EDX
0052DFBE  E8 ED 71 1B 00            CALL 0x006e51b0
0052DFC3  8B 96 9D 00 00 00         MOV EDX,dword ptr [ESI + 0x9d]
0052DFC9  8B C8                     MOV ECX,EAX
0052DFCB  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0052DFCE  2B CA                     SUB ECX,EDX
0052DFD0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0052DFD3  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0052DFD6  B8 B8 0B 00 00            MOV EAX,0xbb8
0052DFDB  C1 E2 03                  SHL EDX,0x3
0052DFDE  2B C2                     SUB EAX,EDX
0052DFE0  BA 03 00 00 00            MOV EDX,0x3
0052DFE5  2B D7                     SUB EDX,EDI
0052DFE7  0F AF C2                  IMUL EAX,EDX
0052DFEA  3B C8                     CMP ECX,EAX
0052DFEC  77 17                     JA 0x0052e005
0052DFEE  8B 86 98 00 00 00         MOV EAX,dword ptr [ESI + 0x98]
0052DFF4  33 C9                     XOR ECX,ECX
0052DFF6  8A 0D 46 73 80 00         MOV CL,byte ptr [0x00807346]
0052DFFC  39 48 08                  CMP dword ptr [EAX + 0x8],ECX
0052DFFF  0F 8E C8 01 00 00         JLE 0x0052e1cd
LAB_0052e005:
0052E005  B9 20 76 80 00            MOV ECX,0x807620
0052E00A  E8 A1 71 1B 00            CALL 0x006e51b0
0052E00F  89 86 9D 00 00 00         MOV dword ptr [ESI + 0x9d],EAX
0052E015  8A 86 9C 00 00 00         MOV AL,byte ptr [ESI + 0x9c]
0052E01B  84 C0                     TEST AL,AL
0052E01D  0F 86 AA 01 00 00         JBE 0x0052e1cd
0052E023  8B 96 98 00 00 00         MOV EDX,dword ptr [ESI + 0x98]
0052E029  53                        PUSH EBX
0052E02A  52                        PUSH EDX
0052E02B  E8 00 98 18 00            CALL 0x006b7830
0052E030  8B 86 90 00 00 00         MOV EAX,dword ptr [ESI + 0x90]
0052E036  33 C9                     XOR ECX,ECX
0052E038  8A 8E 9C 00 00 00         MOV CL,byte ptr [ESI + 0x9c]
0052E03E  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
0052E041  8D 4C 51 ED               LEA ECX,[ECX + EDX*0x2 + -0x13]
0052E045  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0052E048  51                        PUSH ECX
0052E049  52                        PUSH EDX
0052E04A  6A 13                     PUSH 0x13
0052E04C  53                        PUSH EBX
0052E04D  53                        PUSH EBX
0052E04E  50                        PUSH EAX
0052E04F  53                        PUSH EBX
0052E050  53                        PUSH EBX
0052E051  53                        PUSH EBX
0052E052  50                        PUSH EAX
0052E053  E8 98 75 18 00            CALL 0x006b55f0
0052E058  8B 8E 90 00 00 00         MOV ECX,dword ptr [ESI + 0x90]
0052E05E  68 89 00 00 01            PUSH 0x1000089
0052E063  6A 13                     PUSH 0x13
0052E065  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0052E068  50                        PUSH EAX
0052E069  33 C0                     XOR EAX,EAX
0052E06B  8A 86 9C 00 00 00         MOV AL,byte ptr [ESI + 0x9c]
0052E071  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0052E074  8D 44 50 ED               LEA EAX,[EAX + EDX*0x2 + -0x13]
0052E078  50                        PUSH EAX
0052E079  53                        PUSH EBX
0052E07A  53                        PUSH EBX
0052E07B  51                        PUSH ECX
0052E07C  E8 EF 60 18 00            CALL 0x006b4170
0052E081  8B 86 98 00 00 00         MOV EAX,dword ptr [ESI + 0x98]
0052E087  8A 0D 46 73 80 00         MOV CL,byte ptr [0x00807346]
0052E08D  33 D2                     XOR EDX,EDX
0052E08F  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0052E092  8A D1                     MOV DL,CL
0052E094  3B FA                     CMP EDI,EDX
0052E096  7F 0F                     JG 0x0052e0a7
0052E098  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
0052E09B  88 8E 9C 00 00 00         MOV byte ptr [ESI + 0x9c],CL
0052E0A1  8A 0D 46 73 80 00         MOV CL,byte ptr [0x00807346]
LAB_0052e0a7:
0052E0A7  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0052E0AA  33 D2                     XOR EDX,EDX
0052E0AC  8A D1                     MOV DL,CL
0052E0AE  3B FA                     CMP EDI,EDX
0052E0B0  7C 0A                     JL 0x0052e0bc
0052E0B2  FE C9                     DEC CL
0052E0B4  51                        PUSH ECX
0052E0B5  8B CE                     MOV ECX,ESI
0052E0B7  E8 F9 60 ED FF            CALL 0x004041b5
LAB_0052e0bc:
0052E0BC  B9 E8 FF FF FF            MOV ECX,0xffffffe8
0052E0C1  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
0052E0C5  2B CE                     SUB ECX,ESI
0052E0C7  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0052E0CA  C7 45 F4 1E 00 00 00      MOV dword ptr [EBP + -0xc],0x1e
0052E0D1  8D 7E 18                  LEA EDI,[ESI + 0x18]
0052E0D4  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0052E0D7  EB 03                     JMP 0x0052e0dc
LAB_0052e0d9:
0052E0D9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0052e0dc:
0052E0DC  A1 42 73 80 00            MOV EAX,[0x00807342]
0052E0E1  85 C0                     TEST EAX,EAX
0052E0E3  0F 84 9B 00 00 00         JZ 0x0052e184
0052E0E9  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
0052E0EC  8A 96 9C 00 00 00         MOV DL,byte ptr [ESI + 0x9c]
0052E0F2  3A C2                     CMP AL,DL
0052E0F4  0F 83 8A 00 00 00         JNC 0x0052e184
0052E0FA  8B 86 98 00 00 00         MOV EAX,dword ptr [ESI + 0x98]
0052E100  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0052E103  3B DA                     CMP EBX,EDX
0052E105  7D 0D                     JGE 0x0052e114
0052E107  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0052E10A  03 D9                     ADD EBX,ECX
0052E10C  8B 0C 3B                  MOV ECX,dword ptr [EBX + EDI*0x1]
0052E10F  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0052E112  EB 02                     JMP 0x0052e116
LAB_0052e114:
0052E114  33 C9                     XOR ECX,ECX
LAB_0052e116:
0052E116  85 C9                     TEST ECX,ECX
0052E118  74 6A                     JZ 0x0052e184
0052E11A  3B DA                     CMP EBX,EDX
0052E11C  7D 0D                     JGE 0x0052e12b
0052E11E  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0052E121  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0052E124  03 C8                     ADD ECX,EAX
0052E126  8B 04 39                  MOV EAX,dword ptr [ECX + EDI*0x1]
0052E129  EB 02                     JMP 0x0052e12d
LAB_0052e12b:
0052E12B  33 C0                     XOR EAX,EAX
LAB_0052e12d:
0052E12D  8B 8E 94 00 00 00         MOV ECX,dword ptr [ESI + 0x94]
0052E133  50                        PUSH EAX
0052E134  E8 D7 2F 1E 00            CALL 0x00711110
0052E139  8B 96 90 00 00 00         MOV EDX,dword ptr [ESI + 0x90]
0052E13F  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0052E142  3B C1                     CMP EAX,ECX
0052E144  7C 02                     JL 0x0052e148
0052E146  8B C1                     MOV EAX,ECX
LAB_0052e148:
0052E148  6A 13                     PUSH 0x13
0052E14A  89 47 3C                  MOV dword ptr [EDI + 0x3c],EAX
0052E14D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052E153  50                        PUSH EAX
0052E154  8B 07                     MOV EAX,dword ptr [EDI]
0052E156  50                        PUSH EAX
0052E157  51                        PUSH ECX
0052E158  E8 A3 46 18 00            CALL 0x006b2800
0052E15D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0052E160  8B 07                     MOV EAX,dword ptr [EDI]
0052E162  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052E168  52                        PUSH EDX
0052E169  6A 0D                     PUSH 0xd
0052E16B  6A FF                     PUSH -0x1
0052E16D  50                        PUSH EAX
0052E16E  51                        PUSH ECX
0052E16F  E8 CC 54 18 00            CALL 0x006b3640
0052E174  8B 17                     MOV EDX,dword ptr [EDI]
0052E176  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0052E17B  52                        PUSH EDX
0052E17C  50                        PUSH EAX
0052E17D  E8 AE 52 18 00            CALL 0x006b3430
0052E182  EB 29                     JMP 0x0052e1ad
LAB_0052e184:
0052E184  C7 47 3C 00 00 00 00      MOV dword ptr [EDI + 0x3c],0x0
0052E18B  8B 0F                     MOV ECX,dword ptr [EDI]
0052E18D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0052E193  6A 13                     PUSH 0x13
0052E195  6A 00                     PUSH 0x0
0052E197  51                        PUSH ECX
0052E198  52                        PUSH EDX
0052E199  E8 62 46 18 00            CALL 0x006b2800
0052E19E  8B 07                     MOV EAX,dword ptr [EDI]
0052E1A0  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052E1A6  50                        PUSH EAX
0052E1A7  51                        PUSH ECX
0052E1A8  E8 43 59 18 00            CALL 0x006b3af0
LAB_0052e1ad:
0052E1AD  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
0052E1B0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0052E1B3  FE C0                     INC AL
0052E1B5  43                        INC EBX
0052E1B6  83 C7 04                  ADD EDI,0x4
0052E1B9  83 C2 13                  ADD EDX,0x13
0052E1BC  3C 0F                     CMP AL,0xf
0052E1BE  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
0052E1C1  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0052E1C4  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0052E1C7  0F 82 0C FF FF FF         JC 0x0052e0d9
switchD_0052dd68::caseD_1:
0052E1CD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052E1D0  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0052E1D3  50                        PUSH EAX
0052E1D4  8B CE                     MOV ECX,ESI
0052E1D6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052E1DC  E8 EF 7D 1B 00            CALL 0x006e5fd0
0052E1E1  5F                        POP EDI
0052E1E2  5E                        POP ESI
0052E1E3  5B                        POP EBX
0052E1E4  8B E5                     MOV ESP,EBP
0052E1E6  5D                        POP EBP
0052E1E7  C2 04 00                  RET 0x4
LAB_0052e1ea:
0052E1EA  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0052E1ED  68 40 70 7C 00            PUSH 0x7c7040
0052E1F2  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052E1F7  56                        PUSH ESI
0052E1F8  53                        PUSH EBX
0052E1F9  68 00 01 00 00            PUSH 0x100
0052E1FE  68 84 6F 7C 00            PUSH 0x7c6f84
0052E203  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052E209  E8 C2 F2 17 00            CALL 0x006ad4d0
0052E20E  83 C4 18                  ADD ESP,0x18
0052E211  85 C0                     TEST EAX,EAX
0052E213  74 01                     JZ 0x0052e216
0052E215  CC                        INT3
LAB_0052e216:
0052E216  68 00 01 00 00            PUSH 0x100
0052E21B  68 84 6F 7C 00            PUSH 0x7c6f84
0052E220  53                        PUSH EBX
0052E221  56                        PUSH ESI
0052E222  E8 19 7C 17 00            CALL 0x006a5e40
0052E227  5F                        POP EDI
0052E228  5E                        POP ESI
0052E229  B8 FF FF 00 00            MOV EAX,0xffff
0052E22E  5B                        POP EBX
0052E22F  8B E5                     MOV ESP,EBP
0052E231  5D                        POP EBP
0052E232  C2 04 00                  RET 0x4
