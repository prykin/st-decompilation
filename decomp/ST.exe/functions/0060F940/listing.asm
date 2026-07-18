FUN_0060f940:
0060F940  55                        PUSH EBP
0060F941  8B EC                     MOV EBP,ESP
0060F943  51                        PUSH ECX
0060F944  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060F947  53                        PUSH EBX
0060F948  56                        PUSH ESI
0060F949  57                        PUSH EDI
0060F94A  85 C0                     TEST EAX,EAX
0060F94C  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0060F953  0F 84 DA 04 00 00         JZ 0x0060fe33
0060F959  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0060F95C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0060F95F  3B DE                     CMP EBX,ESI
0060F961  0F 84 B9 04 00 00         JZ 0x0060fe20
0060F967  8D 04 DD 74 D5 7E 00      LEA EAX,[EBX*0x8 + 0x7ed574]
0060F96E  8D 3C F5 74 D5 7E 00      LEA EDI,[ESI*0x8 + 0x7ed574]
0060F975  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
0060F978  89 7D 38                  MOV dword ptr [EBP + 0x38],EDI
0060F97B  0F BF 00                  MOVSX EAX,word ptr [EAX]
0060F97E  0F BF 3F                  MOVSX EDI,word ptr [EDI]
0060F981  8D 0C F5 72 D5 7E 00      LEA ECX,[ESI*0x8 + 0x7ed572]
0060F988  0F AF C7                  IMUL EAX,EDI
0060F98B  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
0060F98E  8D 14 DD 72 D5 7E 00      LEA EDX,[EBX*0x8 + 0x7ed572]
0060F995  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
0060F998  89 55 30                  MOV dword ptr [EBP + 0x30],EDX
0060F99B  0F BF 12                  MOVSX EDX,word ptr [EDX]
0060F99E  0F BF 3F                  MOVSX EDI,word ptr [EDI]
0060F9A1  0F AF D7                  IMUL EDX,EDI
0060F9A4  8D 0C DD 70 D5 7E 00      LEA ECX,[EBX*0x8 + 0x7ed570]
0060F9AB  03 C2                     ADD EAX,EDX
0060F9AD  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
0060F9B0  8D 0C F5 70 D5 7E 00      LEA ECX,[ESI*0x8 + 0x7ed570]
0060F9B7  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0060F9BA  89 4D 34                  MOV dword ptr [EBP + 0x34],ECX
0060F9BD  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
0060F9C0  8B 0C 9D 74 FE 7C 00      MOV ECX,dword ptr [EBX*0x4 + 0x7cfe74]
0060F9C7  0F BF 12                  MOVSX EDX,word ptr [EDX]
0060F9CA  0F BF 3F                  MOVSX EDI,word ptr [EDI]
0060F9CD  0F AF D7                  IMUL EDX,EDI
0060F9D0  03 C2                     ADD EAX,EDX
0060F9D2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060F9D5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060F9D8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060F9DB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060F9DE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060F9E1  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060F9E4  C1 E0 06                  SHL EAX,0x6
0060F9E7  99                        CDQ
0060F9E8  F7 F9                     IDIV ECX
0060F9EA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060F9ED  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060F9F0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060F9F3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060F9F6  C1 E0 04                  SHL EAX,0x4
0060F9F9  99                        CDQ
0060F9FA  F7 3C B5 74 FE 7C 00      IDIV dword ptr [ESI*0x4 + 0x7cfe74]
0060FA01  8B D0                     MOV EDX,EAX
0060FA03  85 D2                     TEST EDX,EDX
0060FA05  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
0060FA08  7D 0C                     JGE 0x0060fa16
0060FA0A  81 FA 54 F2 FF FF         CMP EDX,0xfffff254
0060FA10  0F 8C DE 05 00 00         JL 0x0060fff4
LAB_0060fa16:
0060FA16  B8 67 66 66 66            MOV EAX,0x66666667
0060FA1B  F7 EA                     IMUL EDX
0060FA1D  C1 FA 02                  SAR EDX,0x2
0060FA20  8B C2                     MOV EAX,EDX
0060FA22  C1 E8 1F                  SHR EAX,0x1f
0060FA25  03 D0                     ADD EDX,EAX
0060FA27  81 FA F4 01 00 00         CMP EDX,0x1f4
0060FA2D  0F 8F 70 02 00 00         JG 0x0060fca3
0060FA33  0F 84 61 02 00 00         JZ 0x0060fc9a
0060FA39  81 FA B3 FE FF FF         CMP EDX,0xfffffeb3
0060FA3F  0F 84 0A 01 00 00         JZ 0x0060fb4f
0060FA45  85 D2                     TEST EDX,EDX
0060FA47  74 18                     JZ 0x0060fa61
0060FA49  81 FA 4D 01 00 00         CMP EDX,0x14d
0060FA4F  0F 85 93 05 00 00         JNZ 0x0060ffe8
0060FA55  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
0060FA5C  E9 74 02 00 00            JMP 0x0060fcd5
LAB_0060fa61:
0060FA61  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0060FA64  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0060FA67  6A 00                     PUSH 0x0
0060FA69  6A 00                     PUSH 0x0
0060FA6B  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0060FA6E  B8 D3 4D 62 10            MOV EAX,0x10624dd3
0060FA73  6A 00                     PUSH 0x0
0060FA75  C7 45 FC 06 00 00 00      MOV dword ptr [EBP + -0x4],0x6
0060FA7C  8D 0C D1                  LEA ECX,[ECX + EDX*0x8]
0060FA7F  F7 E9                     IMUL ECX
0060FA81  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
0060FA84  C1 FA 06                  SAR EDX,0x6
0060FA87  8B C2                     MOV EAX,EDX
0060FA89  C1 E8 1F                  SHR EAX,0x1f
0060FA8C  03 D0                     ADD EDX,EAX
0060FA8E  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
0060FA91  0F BF 09                  MOVSX ECX,word ptr [ECX]
0060FA94  8B C1                     MOV EAX,ECX
0060FA96  F7 D8                     NEG EAX
0060FA98  C1 E0 02                  SHL EAX,0x2
0060FA9B  2B C1                     SUB EAX,ECX
0060FA9D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FAA0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FAA3  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0060FAA6  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0060FAA9  C1 E2 04                  SHL EDX,0x4
0060FAAC  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
0060FAAF  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
0060FAB2  0F BF 08                  MOVSX ECX,word ptr [EAX]
0060FAB5  8B C1                     MOV EAX,ECX
0060FAB7  F7 D8                     NEG EAX
0060FAB9  C1 E0 02                  SHL EAX,0x2
0060FABC  2B C1                     SUB EAX,ECX
0060FABE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FAC1  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FAC4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0060FAC7  C1 E1 04                  SHL ECX,0x4
0060FACA  89 4E 10                  MOV dword ptr [ESI + 0x10],ECX
0060FACD  0F BF 0A                  MOVSX ECX,word ptr [EDX]
0060FAD0  8B C1                     MOV EAX,ECX
0060FAD2  F7 D8                     NEG EAX
0060FAD4  C1 E0 02                  SHL EAX,0x2
0060FAD7  2B C1                     SUB EAX,ECX
0060FAD9  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0060FADC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FADF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FAE2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FAE5  C1 E0 04                  SHL EAX,0x4
0060FAE8  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0060FAEB  50                        PUSH EAX
0060FAEC  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0060FAEF  50                        PUSH EAX
0060FAF0  51                        PUSH ECX
0060FAF1  E8 17 D4 09 00            CALL 0x006acf0d
0060FAF6  8B C8                     MOV ECX,EAX
0060FAF8  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0060FAFB  83 C4 18                  ADD ESP,0x18
0060FAFE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB01  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB04  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB07  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB0A  C1 E0 04                  SHL EAX,0x4
0060FB0D  99                        CDQ
0060FB0E  F7 F9                     IDIV ECX
0060FB10  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0060FB13  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0060FB16  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB19  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB1C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB1F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB22  C1 E0 04                  SHL EAX,0x4
0060FB25  99                        CDQ
0060FB26  F7 F9                     IDIV ECX
0060FB28  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0060FB2B  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0060FB2E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB31  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB34  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB37  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB3A  C1 E0 04                  SHL EAX,0x4
0060FB3D  99                        CDQ
0060FB3E  F7 F9                     IDIV ECX
0060FB40  5F                        POP EDI
0060FB41  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0060FB44  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060FB47  5E                        POP ESI
0060FB48  5B                        POP EBX
0060FB49  8B E5                     MOV ESP,EBP
0060FB4B  5D                        POP EBP
0060FB4C  C2 3C 00                  RET 0x3c
LAB_0060fb4f:
0060FB4F  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0060FB52  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0060FB55  6A 00                     PUSH 0x0
0060FB57  6A 00                     PUSH 0x0
0060FB59  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0060FB5C  B8 D3 4D 62 10            MOV EAX,0x10624dd3
0060FB61  6A 00                     PUSH 0x0
0060FB63  C7 45 FC 07 00 00 00      MOV dword ptr [EBP + -0x4],0x7
0060FB6A  8D 0C D1                  LEA ECX,[ECX + EDX*0x8]
0060FB6D  F7 E9                     IMUL ECX
0060FB6F  C1 FA 06                  SAR EDX,0x6
0060FB72  8B C2                     MOV EAX,EDX
0060FB74  C1 E8 1F                  SHR EAX,0x1f
0060FB77  03 D0                     ADD EDX,EAX
0060FB79  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
0060FB7C  8B 1C 9D 74 FE 7C 00      MOV EBX,dword ptr [EBX*0x4 + 0x7cfe74]
0060FB83  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0060FB86  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB89  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB8C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FB8F  C1 E0 04                  SHL EAX,0x4
0060FB92  99                        CDQ
0060FB93  F7 7D 24                  IDIV dword ptr [EBP + 0x24]
0060FB96  8B C8                     MOV ECX,EAX
0060FB98  0F BF 04 F5 70 D5 7E 00   MOVSX EAX,word ptr [ESI*0x8 + 0x7ed570]
0060FBA0  0F AF C1                  IMUL EAX,ECX
0060FBA3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FBA6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FBA9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FBAC  C1 E0 03                  SHL EAX,0x3
0060FBAF  99                        CDQ
0060FBB0  F7 3C B5 74 FE 7C 00      IDIV dword ptr [ESI*0x4 + 0x7cfe74]
0060FBB7  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0060FBBA  0F BF 12                  MOVSX EDX,word ptr [EDX]
0060FBBD  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FBC0  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FBC3  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FBC6  C1 E2 03                  SHL EDX,0x3
0060FBC9  2B D0                     SUB EDX,EAX
0060FBCB  89 57 0C                  MOV dword ptr [EDI + 0xc],EDX
0060FBCE  0F BF 04 F5 72 D5 7E 00   MOVSX EAX,word ptr [ESI*0x8 + 0x7ed572]
0060FBD6  0F AF C1                  IMUL EAX,ECX
0060FBD9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FBDC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FBDF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FBE2  C1 E0 03                  SHL EAX,0x3
0060FBE5  99                        CDQ
0060FBE6  F7 3C B5 74 FE 7C 00      IDIV dword ptr [ESI*0x4 + 0x7cfe74]
0060FBED  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
0060FBF0  0F BF 12                  MOVSX EDX,word ptr [EDX]
0060FBF3  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FBF6  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FBF9  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FBFC  C1 E2 03                  SHL EDX,0x3
0060FBFF  2B D0                     SUB EDX,EAX
0060FC01  89 57 10                  MOV dword ptr [EDI + 0x10],EDX
0060FC04  0F BF 04 F5 74 D5 7E 00   MOVSX EAX,word ptr [ESI*0x8 + 0x7ed574]
0060FC0C  0F AF C1                  IMUL EAX,ECX
0060FC0F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0060FC12  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FC15  0F BF 09                  MOVSX ECX,word ptr [ECX]
0060FC18  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FC1B  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0060FC1E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FC21  C1 E0 03                  SHL EAX,0x3
0060FC24  99                        CDQ
0060FC25  F7 3C B5 74 FE 7C 00      IDIV dword ptr [ESI*0x4 + 0x7cfe74]
0060FC2C  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0060FC2F  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
0060FC32  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0060FC35  C1 E1 03                  SHL ECX,0x3
0060FC38  2B C8                     SUB ECX,EAX
0060FC3A  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0060FC3D  51                        PUSH ECX
0060FC3E  52                        PUSH EDX
0060FC3F  50                        PUSH EAX
0060FC40  89 4F 14                  MOV dword ptr [EDI + 0x14],ECX
0060FC43  E8 C5 D2 09 00            CALL 0x006acf0d
0060FC48  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
0060FC4B  83 C4 18                  ADD ESP,0x18
0060FC4E  8B C8                     MOV ECX,EAX
0060FC50  8B C2                     MOV EAX,EDX
0060FC52  F7 D8                     NEG EAX
0060FC54  C1 E0 02                  SHL EAX,0x2
0060FC57  2B C2                     SUB EAX,EDX
0060FC59  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FC5C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FC5F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FC62  C1 E0 04                  SHL EAX,0x4
0060FC65  99                        CDQ
0060FC66  F7 F9                     IDIV ECX
0060FC68  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
0060FC6B  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
0060FC6E  8B C2                     MOV EAX,EDX
0060FC70  F7 D8                     NEG EAX
0060FC72  C1 E0 02                  SHL EAX,0x2
0060FC75  2B C2                     SUB EAX,EDX
0060FC77  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FC7A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FC7D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FC80  C1 E0 04                  SHL EAX,0x4
0060FC83  99                        CDQ
0060FC84  F7 F9                     IDIV ECX
0060FC86  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
0060FC89  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
0060FC8C  8B C2                     MOV EAX,EDX
0060FC8E  F7 D8                     NEG EAX
0060FC90  C1 E0 02                  SHL EAX,0x2
0060FC93  2B C2                     SUB EAX,EDX
0060FC95  E9 68 01 00 00            JMP 0x0060fe02
LAB_0060fc9a:
0060FC9A  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
0060FCA1  EB 32                     JMP 0x0060fcd5
LAB_0060fca3:
0060FCA3  81 EA 41 02 00 00         SUB EDX,0x241
0060FCA9  74 23                     JZ 0x0060fcce
0060FCAB  81 EA 82 00 00 00         SUB EDX,0x82
0060FCB1  74 12                     JZ 0x0060fcc5
0060FCB3  83 EA 6D                  SUB EDX,0x6d
0060FCB6  0F 85 2C 03 00 00         JNZ 0x0060ffe8
0060FCBC  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0060FCC3  EB 10                     JMP 0x0060fcd5
LAB_0060fcc5:
0060FCC5  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0060FCCC  EB 07                     JMP 0x0060fcd5
LAB_0060fcce:
0060FCCE  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
LAB_0060fcd5:
0060FCD5  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0060FCD8  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0060FCDB  6A 00                     PUSH 0x0
0060FCDD  6A 00                     PUSH 0x0
0060FCDF  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0060FCE2  B8 D3 4D 62 10            MOV EAX,0x10624dd3
0060FCE7  6A 00                     PUSH 0x0
0060FCE9  8D 0C D1                  LEA ECX,[ECX + EDX*0x8]
0060FCEC  F7 E9                     IMUL ECX
0060FCEE  C1 FA 06                  SAR EDX,0x6
0060FCF1  8B C2                     MOV EAX,EDX
0060FCF3  C1 E8 1F                  SHR EAX,0x1f
0060FCF6  03 D0                     ADD EDX,EAX
0060FCF8  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
0060FCFB  8B 1C 9D 74 FE 7C 00      MOV EBX,dword ptr [EBX*0x4 + 0x7cfe74]
0060FD02  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0060FD05  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FD08  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FD0B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FD0E  C1 E0 04                  SHL EAX,0x4
0060FD11  99                        CDQ
0060FD12  F7 7D 24                  IDIV dword ptr [EBP + 0x24]
0060FD15  8B C8                     MOV ECX,EAX
0060FD17  0F BF 04 F5 70 D5 7E 00   MOVSX EAX,word ptr [ESI*0x8 + 0x7ed570]
0060FD1F  0F AF C1                  IMUL EAX,ECX
0060FD22  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FD25  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FD28  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FD2B  C1 E0 03                  SHL EAX,0x3
0060FD2E  99                        CDQ
0060FD2F  F7 3C B5 74 FE 7C 00      IDIV dword ptr [ESI*0x4 + 0x7cfe74]
0060FD36  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0060FD39  0F BF 12                  MOVSX EDX,word ptr [EDX]
0060FD3C  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FD3F  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FD42  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FD45  C1 E2 03                  SHL EDX,0x3
0060FD48  2B D0                     SUB EDX,EAX
0060FD4A  89 57 0C                  MOV dword ptr [EDI + 0xc],EDX
0060FD4D  0F BF 04 F5 72 D5 7E 00   MOVSX EAX,word ptr [ESI*0x8 + 0x7ed572]
0060FD55  0F AF C1                  IMUL EAX,ECX
0060FD58  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FD5B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FD5E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FD61  C1 E0 03                  SHL EAX,0x3
0060FD64  99                        CDQ
0060FD65  F7 3C B5 74 FE 7C 00      IDIV dword ptr [ESI*0x4 + 0x7cfe74]
0060FD6C  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
0060FD6F  0F BF 12                  MOVSX EDX,word ptr [EDX]
0060FD72  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FD75  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FD78  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FD7B  C1 E2 03                  SHL EDX,0x3
0060FD7E  2B D0                     SUB EDX,EAX
0060FD80  89 57 10                  MOV dword ptr [EDI + 0x10],EDX
0060FD83  0F BF 04 F5 74 D5 7E 00   MOVSX EAX,word ptr [ESI*0x8 + 0x7ed574]
0060FD8B  0F AF C1                  IMUL EAX,ECX
0060FD8E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0060FD91  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FD94  0F BF 09                  MOVSX ECX,word ptr [ECX]
0060FD97  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FD9A  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0060FD9D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FDA0  C1 E0 03                  SHL EAX,0x3
0060FDA3  99                        CDQ
0060FDA4  F7 3C B5 74 FE 7C 00      IDIV dword ptr [ESI*0x4 + 0x7cfe74]
0060FDAB  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0060FDAE  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
0060FDB1  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0060FDB4  C1 E1 03                  SHL ECX,0x3
0060FDB7  2B C8                     SUB ECX,EAX
0060FDB9  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0060FDBC  51                        PUSH ECX
0060FDBD  52                        PUSH EDX
0060FDBE  50                        PUSH EAX
0060FDBF  89 4F 14                  MOV dword ptr [EDI + 0x14],ECX
0060FDC2  E8 46 D1 09 00            CALL 0x006acf0d
0060FDC7  8B C8                     MOV ECX,EAX
0060FDC9  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0060FDCC  83 C4 18                  ADD ESP,0x18
0060FDCF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FDD2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FDD5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FDD8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FDDB  C1 E0 04                  SHL EAX,0x4
0060FDDE  99                        CDQ
0060FDDF  F7 F9                     IDIV ECX
0060FDE1  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
0060FDE4  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0060FDE7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FDEA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FDED  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FDF0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FDF3  C1 E0 04                  SHL EAX,0x4
0060FDF6  99                        CDQ
0060FDF7  F7 F9                     IDIV ECX
0060FDF9  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
0060FDFC  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0060FDFF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
LAB_0060fe02:
0060FE02  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FE05  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FE08  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FE0B  C1 E0 04                  SHL EAX,0x4
0060FE0E  99                        CDQ
0060FE0F  F7 F9                     IDIV ECX
0060FE11  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
0060FE14  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060FE17  5F                        POP EDI
0060FE18  5E                        POP ESI
0060FE19  5B                        POP EBX
0060FE1A  8B E5                     MOV ESP,EBP
0060FE1C  5D                        POP EBP
0060FE1D  C2 3C 00                  RET 0x3c
LAB_0060fe20:
0060FE20  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0060FE27  5F                        POP EDI
0060FE28  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060FE2B  5E                        POP ESI
0060FE2C  5B                        POP EBX
0060FE2D  8B E5                     MOV ESP,EBP
0060FE2F  5D                        POP EBP
0060FE30  C2 3C 00                  RET 0x3c
LAB_0060fe33:
0060FE33  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
0060FE36  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0060FE39  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0060FE3C  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0060FE3F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0060FE42  56                        PUSH ESI
0060FE43  51                        PUSH ECX
0060FE44  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0060FE47  52                        PUSH EDX
0060FE48  50                        PUSH EAX
0060FE49  51                        PUSH ECX
0060FE4A  53                        PUSH EBX
0060FE4B  E8 BD D0 09 00            CALL 0x006acf0d
0060FE50  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
0060FE53  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
0060FE56  8B F8                     MOV EDI,EAX
0060FE58  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
0060FE5B  52                        PUSH EDX
0060FE5C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0060FE5F  50                        PUSH EAX
0060FE60  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0060FE63  51                        PUSH ECX
0060FE64  56                        PUSH ESI
0060FE65  52                        PUSH EDX
0060FE66  50                        PUSH EAX
0060FE67  E8 A1 D0 09 00            CALL 0x006acf0d
0060FE6C  83 C4 30                  ADD ESP,0x30
0060FE6F  8B C8                     MOV ECX,EAX
0060FE71  85 FF                     TEST EDI,EDI
0060FE73  0F 84 7B 01 00 00         JZ 0x0060fff4
0060FE79  85 C9                     TEST ECX,ECX
0060FE7B  0F 84 73 01 00 00         JZ 0x0060fff4
0060FE81  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0060FE84  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0060FE87  2B C3                     SUB EAX,EBX
0060FE89  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
0060FE8C  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0060FE8F  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0060FE92  2B D8                     SUB EBX,EAX
0060FE94  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0060FE97  2B C2                     SUB EAX,EDX
0060FE99  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0060FE9C  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
0060FE9F  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
0060FEA2  2B C2                     SUB EAX,EDX
0060FEA4  8B D6                     MOV EDX,ESI
0060FEA6  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
0060FEA9  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0060FEAC  2B D0                     SUB EDX,EAX
0060FEAE  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
0060FEB1  2B C6                     SUB EAX,ESI
0060FEB3  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
0060FEB6  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
0060FEB9  0F AF C2                  IMUL EAX,EDX
0060FEBC  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0060FEBF  0F AF 55 30               IMUL EDX,dword ptr [EBP + 0x30]
0060FEC3  03 C2                     ADD EAX,EDX
0060FEC5  8B D3                     MOV EDX,EBX
0060FEC7  0F AF 55 14               IMUL EDX,dword ptr [EBP + 0x14]
0060FECB  03 C2                     ADD EAX,EDX
0060FECD  3B F9                     CMP EDI,ECX
0060FECF  99                        CDQ
0060FED0  7D 19                     JGE 0x0060feeb
0060FED2  F7 FF                     IDIV EDI
0060FED4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FED7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FEDA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FEDD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FEE0  C1 E0 04                  SHL EAX,0x4
0060FEE3  99                        CDQ
0060FEE4  F7 F9                     IDIV ECX
0060FEE6  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
0060FEE9  EB 17                     JMP 0x0060ff02
LAB_0060feeb:
0060FEEB  F7 F9                     IDIV ECX
0060FEED  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FEF0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FEF3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FEF6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FEF9  C1 E0 04                  SHL EAX,0x4
0060FEFC  99                        CDQ
0060FEFD  F7 FF                     IDIV EDI
0060FEFF  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
LAB_0060ff02:
0060FF02  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
0060FF05  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0060FF08  85 C0                     TEST EAX,EAX
0060FF0A  89 02                     MOV dword ptr [EDX],EAX
0060FF0C  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
0060FF0F  89 0A                     MOV dword ptr [EDX],ECX
0060FF11  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
0060FF14  74 63                     JZ 0x0060ff79
0060FF16  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
0060FF19  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0060FF1C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FF1F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FF22  C1 E0 04                  SHL EAX,0x4
0060FF25  99                        CDQ
0060FF26  F7 7D 24                  IDIV dword ptr [EBP + 0x24]
0060FF29  8B F8                     MOV EDI,EAX
0060FF2B  0F AF DF                  IMUL EBX,EDI
0060FF2E  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0060FF31  D1 E0                     SHL EAX,0x1
0060FF33  99                        CDQ
0060FF34  F7 F9                     IDIV ECX
0060FF36  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0060FF39  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FF3C  D1 E2                     SHL EDX,0x1
0060FF3E  2B D0                     SUB EDX,EAX
0060FF40  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0060FF43  0F AF C7                  IMUL EAX,EDI
0060FF46  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
0060FF49  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FF4C  D1 E0                     SHL EAX,0x1
0060FF4E  99                        CDQ
0060FF4F  F7 F9                     IDIV ECX
0060FF51  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
0060FF54  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060FF57  D1 E2                     SHL EDX,0x1
0060FF59  2B D0                     SUB EDX,EAX
0060FF5B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0060FF5E  0F AF C7                  IMUL EAX,EDI
0060FF61  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
0060FF64  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FF67  D1 E0                     SHL EAX,0x1
0060FF69  99                        CDQ
0060FF6A  F7 F9                     IDIV ECX
0060FF6C  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
0060FF6F  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0060FF72  D1 E1                     SHL ECX,0x1
0060FF74  2B C8                     SUB ECX,EAX
0060FF76  89 4E 14                  MOV dword ptr [ESI + 0x14],ECX
LAB_0060ff79:
0060FF79  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0060FF7C  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0060FF7F  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0060FF82  6A 00                     PUSH 0x0
0060FF84  6A 00                     PUSH 0x0
0060FF86  6A 00                     PUSH 0x0
0060FF88  52                        PUSH EDX
0060FF89  50                        PUSH EAX
0060FF8A  51                        PUSH ECX
0060FF8B  E8 7D CF 09 00            CALL 0x006acf0d
0060FF90  8B C8                     MOV ECX,EAX
0060FF92  83 C4 18                  ADD ESP,0x18
0060FF95  85 C9                     TEST ECX,ECX
0060FF97  74 4F                     JZ 0x0060ffe8
0060FF99  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0060FF9C  C7 45 FC 08 00 00 00      MOV dword ptr [EBP + -0x4],0x8
0060FFA3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFA6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFA9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFAC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFAF  C1 E0 04                  SHL EAX,0x4
0060FFB2  99                        CDQ
0060FFB3  F7 F9                     IDIV ECX
0060FFB5  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0060FFB8  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0060FFBB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFBE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFC1  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFC4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFC7  C1 E0 04                  SHL EAX,0x4
0060FFCA  99                        CDQ
0060FFCB  F7 F9                     IDIV ECX
0060FFCD  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0060FFD0  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0060FFD3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFD6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFD9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFDC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060FFDF  C1 E0 04                  SHL EAX,0x4
0060FFE2  99                        CDQ
0060FFE3  F7 F9                     IDIV ECX
0060FFE5  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
LAB_0060ffe8:
0060FFE8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060FFEB  5F                        POP EDI
0060FFEC  5E                        POP ESI
0060FFED  5B                        POP EBX
0060FFEE  8B E5                     MOV ESP,EBP
0060FFF0  5D                        POP EBP
0060FFF1  C2 3C 00                  RET 0x3c
LAB_0060fff4:
0060FFF4  5F                        POP EDI
0060FFF5  5E                        POP ESI
0060FFF6  83 C8 FF                  OR EAX,0xffffffff
0060FFF9  5B                        POP EBX
0060FFFA  8B E5                     MOV ESP,EBP
0060FFFC  5D                        POP EBP
0060FFFD  C2 3C 00                  RET 0x3c
