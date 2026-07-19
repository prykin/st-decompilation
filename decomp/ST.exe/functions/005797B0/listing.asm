FUN_005797b0:
005797B0  55                        PUSH EBP
005797B1  8B EC                     MOV EBP,ESP
005797B3  83 EC 14                  SUB ESP,0x14
005797B6  53                        PUSH EBX
005797B7  56                        PUSH ESI
005797B8  8B F1                     MOV ESI,ECX
005797BA  57                        PUSH EDI
005797BB  33 C9                     XOR ECX,ECX
005797BD  33 FF                     XOR EDI,EDI
005797BF  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
005797C3  66 85 C0                  TEST AX,AX
005797C6  0F BF D0                  MOVSX EDX,AX
005797C9  B8 79 19 8C 02            MOV EAX,0x28c1979
005797CE  7C 10                     JL 0x005797e0
005797D0  F7 EA                     IMUL EDX
005797D2  D1 FA                     SAR EDX,0x1
005797D4  8B C2                     MOV EAX,EDX
005797D6  C1 E8 1F                  SHR EAX,0x1f
005797D9  03 D0                     ADD EDX,EAX
005797DB  0F BF DA                  MOVSX EBX,DX
005797DE  EB 0F                     JMP 0x005797ef
LAB_005797e0:
005797E0  F7 EA                     IMUL EDX
005797E2  D1 FA                     SAR EDX,0x1
005797E4  8B C2                     MOV EAX,EDX
005797E6  C1 E8 1F                  SHR EAX,0x1f
005797E9  03 D0                     ADD EDX,EAX
005797EB  0F BF DA                  MOVSX EBX,DX
005797EE  4B                        DEC EBX
LAB_005797ef:
005797EF  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
005797F3  66 89 5E 47               MOV word ptr [ESI + 0x47],BX
005797F7  66 85 C0                  TEST AX,AX
005797FA  0F BF D0                  MOVSX EDX,AX
005797FD  B8 79 19 8C 02            MOV EAX,0x28c1979
00579802  7C 10                     JL 0x00579814
00579804  F7 EA                     IMUL EDX
00579806  D1 FA                     SAR EDX,0x1
00579808  8B C2                     MOV EAX,EDX
0057980A  C1 E8 1F                  SHR EAX,0x1f
0057980D  03 D0                     ADD EDX,EAX
0057980F  0F BF C2                  MOVSX EAX,DX
00579812  EB 0F                     JMP 0x00579823
LAB_00579814:
00579814  F7 EA                     IMUL EDX
00579816  D1 FA                     SAR EDX,0x1
00579818  8B C2                     MOV EAX,EDX
0057981A  C1 E8 1F                  SHR EAX,0x1f
0057981D  03 D0                     ADD EDX,EAX
0057981F  0F BF C2                  MOVSX EAX,DX
00579822  48                        DEC EAX
LAB_00579823:
00579823  0F BF D3                  MOVSX EDX,BX
00579826  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00579829  4A                        DEC EDX
0057982A  85 D2                     TEST EDX,EDX
0057982C  66 89 46 49               MOV word ptr [ESI + 0x49],AX
00579830  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00579833  7D 07                     JGE 0x0057983c
00579835  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0057983c:
0057983C  0F BF D8                  MOVSX EBX,AX
0057983F  8D 43 FF                  LEA EAX,[EBX + -0x1]
00579842  85 C0                     TEST EAX,EAX
00579844  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00579847  7D 07                     JGE 0x00579850
00579849  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00579850:
00579850  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00579853  8D 42 01                  LEA EAX,[EDX + 0x1]
00579856  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0057985D  3B C2                     CMP EAX,EDX
0057985F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00579862  7C 06                     JL 0x0057986a
00579864  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00579867  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0057986a:
0057986A  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
00579871  8D 43 01                  LEA EAX,[EBX + 0x1]
00579874  3B C2                     CMP EAX,EDX
00579876  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00579879  7C 03                     JL 0x0057987e
0057987B  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_0057987e:
0057987E  0F BF 46 6C               MOVSX EAX,word ptr [ESI + 0x6c]
00579882  83 F8 07                  CMP EAX,0x7
00579885  0F 87 58 03 00 00         JA 0x00579be3
switchD_0057988b::switchD:
0057988B  FF 24 85 B4 9E 57 00      JMP dword ptr [EAX*0x4 + 0x579eb4]
switchD_0057988b::caseD_0:
00579892  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00579895  85 C0                     TEST EAX,EAX
00579897  7D 10                     JGE 0x005798a9
00579899  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0057989C  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005798A2  05 39 30 00 00            ADD EAX,0x3039
005798A7  EB 0F                     JMP 0x005798b8
LAB_005798a9:
005798A9  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005798AC  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005798B2  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
LAB_005798b8:
005798B8  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005798BB  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005798BE  2B CF                     SUB ECX,EDI
005798C0  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005798C3  41                        INC ECX
005798C4  33 D2                     XOR EDX,EDX
005798C6  C1 E8 10                  SHR EAX,0x10
005798C9  F7 F1                     DIV ECX
005798CB  8B CA                     MOV ECX,EDX
005798CD  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
005798D1  03 CF                     ADD ECX,EDI
005798D3  8B C1                     MOV EAX,ECX
005798D5  2B C2                     SUB EAX,EDX
005798D7  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
005798DB  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
005798DE  2B D0                     SUB EDX,EAX
005798E0  8B DA                     MOV EBX,EDX
005798E2  0F 88 84 01 00 00         JS 0x00579a6c
LAB_005798e8:
005798E8  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005798EB  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005798F1  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005798F7  E9 7E 01 00 00            JMP 0x00579a7a
switchD_0057988b::caseD_1:
005798FC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005798FF  85 C0                     TEST EAX,EAX
00579901  7D 10                     JGE 0x00579913
00579903  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00579906  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057990C  05 39 30 00 00            ADD EAX,0x3039
00579911  EB 0F                     JMP 0x00579922
LAB_00579913:
00579913  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00579916  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0057991C  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
LAB_00579922:
00579922  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00579925  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00579928  2B D9                     SUB EBX,ECX
0057992A  33 D2                     XOR EDX,EDX
0057992C  43                        INC EBX
0057992D  C1 E8 10                  SHR EAX,0x10
00579930  F7 F3                     DIV EBX
00579932  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
00579936  8B FA                     MOV EDI,EDX
00579938  03 F9                     ADD EDI,ECX
0057993A  85 DB                     TEST EBX,EBX
0057993C  0F 8D 68 02 00 00         JGE 0x00579baa
00579942  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00579945  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057994B  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00579951  E9 73 02 00 00            JMP 0x00579bc9
switchD_0057988b::caseD_2:
00579956  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00579959  85 C0                     TEST EAX,EAX
0057995B  7D 11                     JGE 0x0057996e
0057995D  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00579960  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00579966  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0057996C  EB 0F                     JMP 0x0057997d
LAB_0057996e:
0057996E  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00579971  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00579977  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_0057997d:
0057997D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00579980  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00579983  2B D9                     SUB EBX,ECX
00579985  33 D2                     XOR EDX,EDX
00579987  43                        INC EBX
00579988  C1 E8 10                  SHR EAX,0x10
0057998B  F7 F3                     DIV EBX
0057998D  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00579991  8B FA                     MOV EDI,EDX
00579993  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00579997  03 F9                     ADD EDI,ECX
00579999  2B C7                     SUB EAX,EDI
0057999B  8D 0C 02                  LEA ECX,[EDX + EAX*0x1]
0057999E  2B D0                     SUB EDX,EAX
005799A0  8B DA                     MOV EBX,EDX
005799A2  0F 89 AE 01 00 00         JNS 0x00579b56
LAB_005799a8:
005799A8  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005799AB  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005799B1  05 39 30 00 00            ADD EAX,0x3039
005799B6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005799B9  E9 11 02 00 00            JMP 0x00579bcf
switchD_0057988b::caseD_3:
005799BE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005799C1  85 C0                     TEST EAX,EAX
005799C3  7D 10                     JGE 0x005799d5
005799C5  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005799C8  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005799CE  05 39 30 00 00            ADD EAX,0x3039
005799D3  EB 0F                     JMP 0x005799e4
LAB_005799d5:
005799D5  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005799D8  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
005799DE  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
LAB_005799e4:
005799E4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005799E7  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005799EA  2B CF                     SUB ECX,EDI
005799EC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005799EF  41                        INC ECX
005799F0  33 D2                     XOR EDX,EDX
005799F2  C1 E8 10                  SHR EAX,0x10
005799F5  F7 F1                     DIV ECX
005799F7  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005799FA  8B CA                     MOV ECX,EDX
005799FC  03 CF                     ADD ECX,EDI
005799FE  0F BF 7E 49               MOVSX EDI,word ptr [ESI + 0x49]
00579A02  85 DB                     TEST EBX,EBX
00579A04  7D 66                     JGE 0x00579a6c
00579A06  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00579A09  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00579A0F  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00579A15  EB 63                     JMP 0x00579a7a
switchD_0057988b::caseD_4:
00579A17  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00579A1A  85 C0                     TEST EAX,EAX
00579A1C  7D 11                     JGE 0x00579a2f
00579A1E  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00579A21  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00579A27  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00579A2D  EB 0F                     JMP 0x00579a3e
LAB_00579a2f:
00579A2F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00579A32  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00579A38  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_00579a3e:
00579A3E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00579A41  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00579A44  2B CF                     SUB ECX,EDI
00579A46  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00579A49  41                        INC ECX
00579A4A  33 D2                     XOR EDX,EDX
00579A4C  C1 E8 10                  SHR EAX,0x10
00579A4F  F7 F1                     DIV ECX
00579A51  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00579A55  8B CA                     MOV ECX,EDX
00579A57  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00579A5B  03 CF                     ADD ECX,EDI
00579A5D  2B C1                     SUB EAX,ECX
00579A5F  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
00579A62  2B D0                     SUB EDX,EAX
00579A64  8B DA                     MOV EBX,EDX
00579A66  0F 89 7C FE FF FF         JNS 0x005798e8
LAB_00579a6c:
00579A6C  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00579A6F  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00579A75  05 39 30 00 00            ADD EAX,0x3039
LAB_00579a7a:
00579A7A  2B FB                     SUB EDI,EBX
00579A7C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00579A7F  47                        INC EDI
00579A80  33 D2                     XOR EDX,EDX
00579A82  C1 E8 10                  SHR EAX,0x10
00579A85  F7 F7                     DIV EDI
00579A87  8B FA                     MOV EDI,EDX
00579A89  03 FB                     ADD EDI,EBX
00579A8B  E9 4D 01 00 00            JMP 0x00579bdd
switchD_0057988b::caseD_5:
00579A90  85 DB                     TEST EBX,EBX
00579A92  7D 10                     JGE 0x00579aa4
00579A94  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00579A97  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00579A9D  05 39 30 00 00            ADD EAX,0x3039
00579AA2  EB 0F                     JMP 0x00579ab3
LAB_00579aa4:
00579AA4  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00579AA7  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00579AAD  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
LAB_00579ab3:
00579AB3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00579AB6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00579AB9  2B CB                     SUB ECX,EBX
00579ABB  33 D2                     XOR EDX,EDX
00579ABD  41                        INC ECX
00579ABE  C1 E8 10                  SHR EAX,0x10
00579AC1  F7 F1                     DIV ECX
00579AC3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00579AC6  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
00579ACA  8B FA                     MOV EDI,EDX
00579ACC  03 FB                     ADD EDI,EBX
00579ACE  85 C0                     TEST EAX,EAX
00579AD0  7D 1A                     JGE 0x00579aec
00579AD2  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00579AD5  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00579AD8  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00579ADE  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00579AE4  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00579AE7  E9 E3 00 00 00            JMP 0x00579bcf
LAB_00579aec:
00579AEC  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00579AEF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00579AF2  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00579AF8  05 39 30 00 00            ADD EAX,0x3039
00579AFD  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00579B00  E9 CA 00 00 00            JMP 0x00579bcf
switchD_0057988b::caseD_6:
00579B05  85 DB                     TEST EBX,EBX
00579B07  7D 11                     JGE 0x00579b1a
00579B09  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00579B0C  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00579B12  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00579B18  EB 0F                     JMP 0x00579b29
LAB_00579b1a:
00579B1A  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00579B1D  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00579B23  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_00579b29:
00579B29  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00579B2C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00579B2F  2B CB                     SUB ECX,EBX
00579B31  33 D2                     XOR EDX,EDX
00579B33  41                        INC ECX
00579B34  C1 E8 10                  SHR EAX,0x10
00579B37  F7 F1                     DIV ECX
00579B39  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00579B3D  8B FA                     MOV EDI,EDX
00579B3F  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00579B43  03 FB                     ADD EDI,EBX
00579B45  8B C7                     MOV EAX,EDI
00579B47  2B C1                     SUB EAX,ECX
00579B49  8D 0C 02                  LEA ECX,[EDX + EAX*0x1]
00579B4C  2B D0                     SUB EDX,EAX
00579B4E  8B DA                     MOV EBX,EDX
00579B50  0F 89 52 FE FF FF         JNS 0x005799a8
LAB_00579b56:
00579B56  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00579B59  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00579B5F  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00579B65  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00579B68  EB 65                     JMP 0x00579bcf
switchD_0057988b::caseD_7:
00579B6A  85 DB                     TEST EBX,EBX
00579B6C  7D 11                     JGE 0x00579b7f
00579B6E  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00579B71  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00579B77  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00579B7D  EB 0F                     JMP 0x00579b8e
LAB_00579b7f:
00579B7F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00579B82  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00579B88  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_00579b8e:
00579B8E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00579B91  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00579B94  2B CB                     SUB ECX,EBX
00579B96  33 D2                     XOR EDX,EDX
00579B98  41                        INC ECX
00579B99  C1 E8 10                  SHR EAX,0x10
00579B9C  F7 F1                     DIV ECX
00579B9E  8B FA                     MOV EDI,EDX
00579BA0  03 FB                     ADD EDI,EBX
00579BA2  0F BF 5E 47               MOVSX EBX,word ptr [ESI + 0x47]
00579BA6  85 DB                     TEST EBX,EBX
00579BA8  7D 10                     JGE 0x00579bba
LAB_00579baa:
00579BAA  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00579BAD  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00579BB3  05 39 30 00 00            ADD EAX,0x3039
00579BB8  EB 0F                     JMP 0x00579bc9
LAB_00579bba:
00579BBA  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00579BBD  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00579BC3  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
LAB_00579bc9:
00579BC9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00579BCC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
LAB_00579bcf:
00579BCF  2B CB                     SUB ECX,EBX
00579BD1  33 D2                     XOR EDX,EDX
00579BD3  41                        INC ECX
00579BD4  C1 E8 10                  SHR EAX,0x10
00579BD7  F7 F1                     DIV ECX
00579BD9  8B CA                     MOV ECX,EDX
00579BDB  03 CB                     ADD ECX,EBX
LAB_00579bdd:
00579BDD  85 C9                     TEST ECX,ECX
00579BDF  7D 02                     JGE 0x00579be3
00579BE1  33 C9                     XOR ECX,ECX
switchD_0057988b::default:
00579BE3  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00579BEA  3B C8                     CMP ECX,EAX
00579BEC  7C 03                     JL 0x00579bf1
00579BEE  8D 48 FF                  LEA ECX,[EAX + -0x1]
LAB_00579bf1:
00579BF1  85 FF                     TEST EDI,EDI
00579BF3  7D 02                     JGE 0x00579bf7
00579BF5  33 FF                     XOR EDI,EDI
LAB_00579bf7:
00579BF7  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
00579BFE  3B F8                     CMP EDI,EAX
00579C00  7C 03                     JL 0x00579c05
00579C02  8D 78 FF                  LEA EDI,[EAX + -0x1]
LAB_00579c05:
00579C05  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00579C09  8B D9                     MOV EBX,ECX
00579C0B  66 85 C0                  TEST AX,AX
00579C0E  0F BF D0                  MOVSX EDX,AX
00579C11  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00579C14  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00579C19  7C 14                     JL 0x00579c2f
00579C1B  F7 EA                     IMUL EDX
00579C1D  C1 FA 06                  SAR EDX,0x6
00579C20  8B C2                     MOV EAX,EDX
00579C22  C1 E8 1F                  SHR EAX,0x1f
00579C25  03 D0                     ADD EDX,EAX
00579C27  0F BF D2                  MOVSX EDX,DX
00579C2A  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00579C2D  EB 13                     JMP 0x00579c42
LAB_00579c2f:
00579C2F  F7 EA                     IMUL EDX
00579C31  C1 FA 06                  SAR EDX,0x6
00579C34  8B C2                     MOV EAX,EDX
00579C36  C1 E8 1F                  SHR EAX,0x1f
00579C39  03 D0                     ADD EDX,EAX
00579C3B  0F BF C2                  MOVSX EAX,DX
00579C3E  48                        DEC EAX
00579C3F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00579c42:
00579C42  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00579C45  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00579C48  8D 44 D1 64               LEA EAX,[ECX + EDX*0x8 + 0x64]
00579C4C  0F BF C8                  MOVSX ECX,AX
00579C4F  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00579C52  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00579C55  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00579C58  8D 44 D7 64               LEA EAX,[EDI + EDX*0x8 + 0x64]
00579C5C  0F BF C8                  MOVSX ECX,AX
00579C5F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_00579c62:
00579C62  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
00579C66  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00579C69  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00579C6C  52                        PUSH EDX
00579C6D  50                        PUSH EAX
00579C6E  51                        PUSH ECX
00579C6F  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00579C75  E8 C4 AD E8 FF            CALL 0x00404a3e
00579C7A  85 C0                     TEST EAX,EAX
00579C7C  0F 8D 92 00 00 00         JGE 0x00579d14
00579C82  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
00579C86  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
00579C8A  0F BF FB                  MOVSX EDI,BX
00579C8D  50                        PUSH EAX
00579C8E  51                        PUSH ECX
00579C8F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00579C95  57                        PUSH EDI
00579C96  E8 AD C1 E8 FF            CALL 0x00405e48
00579C9B  85 C0                     TEST EAX,EAX
00579C9D  75 75                     JNZ 0x00579d14
00579C9F  66 85 DB                  TEST BX,BX
00579CA2  0F 8C F9 00 00 00         JL 0x00579da1
00579CA8  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
00579CAF  0F 8D EC 00 00 00         JGE 0x00579da1
00579CB5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00579CB8  66 85 C9                  TEST CX,CX
00579CBB  0F 8C E3 00 00 00         JL 0x00579da4
00579CC1  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00579CC8  0F 8D D6 00 00 00         JGE 0x00579da4
00579CCE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00579CD1  66 85 C0                  TEST AX,AX
00579CD4  0F 8C CA 00 00 00         JL 0x00579da4
00579CDA  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00579CE1  0F 8D BD 00 00 00         JGE 0x00579da4
00579CE7  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00579CEE  0F BF C0                  MOVSX EAX,AX
00579CF1  0F AF D0                  IMUL EDX,EAX
00579CF4  03 FA                     ADD EDI,EDX
00579CF6  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
00579CFD  0F BF C1                  MOVSX EAX,CX
00579D00  0F AF D0                  IMUL EDX,EAX
00579D03  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00579D08  03 D7                     ADD EDX,EDI
00579D0A  83 3C D0 00               CMP dword ptr [EAX + EDX*0x8],0x0
00579D0E  0F 84 8D 00 00 00         JZ 0x00579da1
LAB_00579d14:
00579D14  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
00579D18  8B C3                     MOV EAX,EBX
00579D1A  2B C1                     SUB EAX,ECX
00579D1C  85 C0                     TEST EAX,EAX
00579D1E  7E 1C                     JLE 0x00579d3c
00579D20  4B                        DEC EBX
00579D21  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
00579D24  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00579D27  8D 44 D3 64               LEA EAX,[EBX + EDX*0x8 + 0x64]
00579D2B  0F BF C8                  MOVSX ECX,AX
00579D2E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00579D31  0F 88 58 01 00 00         JS 0x00579e8f
00579D37  E9 26 FF FF FF            JMP 0x00579c62
LAB_00579d3c:
00579D3C  7D 16                     JGE 0x00579d54
00579D3E  43                        INC EBX
00579D3F  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
00579D42  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00579D45  8D 44 D3 64               LEA EAX,[EBX + EDX*0x8 + 0x64]
00579D49  0F BF C8                  MOVSX ECX,AX
00579D4C  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00579D4F  E9 0E FF FF FF            JMP 0x00579c62
LAB_00579d54:
00579D54  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00579D58  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00579D5B  8B C8                     MOV ECX,EAX
00579D5D  2B CA                     SUB ECX,EDX
00579D5F  85 C9                     TEST ECX,ECX
00579D61  7E 1F                     JLE 0x00579d82
00579D63  48                        DEC EAX
00579D64  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00579D67  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00579D6A  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00579D6D  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
00579D71  0F BF C2                  MOVSX EAX,DX
00579D74  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00579D77  0F 88 12 01 00 00         JS 0x00579e8f
00579D7D  E9 E0 FE FF FF            JMP 0x00579c62
LAB_00579d82:
00579D82  0F 8D 07 01 00 00         JGE 0x00579e8f
00579D88  40                        INC EAX
00579D89  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00579D8C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00579D8F  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00579D92  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
00579D96  0F BF C2                  MOVSX EAX,DX
00579D99  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00579D9C  E9 C1 FE FF FF            JMP 0x00579c62
LAB_00579da1:
00579DA1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00579da4:
00579DA4  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00579DA8  3B D3                     CMP EDX,EBX
00579DAA  75 0C                     JNZ 0x00579db8
00579DAC  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00579DB0  3B C1                     CMP EAX,ECX
00579DB2  0F 84 D7 00 00 00         JZ 0x00579e8f
LAB_00579db8:
00579DB8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00579DBB  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00579DBE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00579DC1  8B C7                     MOV EAX,EDI
00579DC3  66 89 39                  MOV word ptr [ECX],DI
00579DC6  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00579DC9  66 89 0A                  MOV word ptr [EDX],CX
00579DCC  33 DB                     XOR EBX,EBX
00579DCE  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
00579DD2  2B C2                     SUB EAX,EDX
00579DD4  53                        PUSH EBX
00579DD5  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00579DD9  2B CA                     SUB ECX,EDX
00579DDB  89 86 45 02 00 00         MOV dword ptr [ESI + 0x245],EAX
00579DE1  51                        PUSH ECX
00579DE2  50                        PUSH EAX
00579DE3  53                        PUSH EBX
00579DE4  53                        PUSH EBX
00579DE5  53                        PUSH EBX
00579DE6  89 8E 4D 02 00 00         MOV dword ptr [ESI + 0x24d],ECX
00579DEC  E8 1C 31 13 00            CALL 0x006acf0d
00579DF1  8B C8                     MOV ECX,EAX
00579DF3  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
00579DF9  C1 E0 09                  SHL EAX,0x9
00579DFC  99                        CDQ
00579DFD  F7 F9                     IDIV ECX
00579DFF  83 C4 18                  ADD ESP,0x18
00579E02  89 9E 49 02 00 00         MOV dword ptr [ESI + 0x249],EBX
00579E08  89 9E 41 02 00 00         MOV dword ptr [ESI + 0x241],EBX
00579E0E  8B 1E                     MOV EBX,dword ptr [ESI]
00579E10  89 86 45 02 00 00         MOV dword ptr [ESI + 0x245],EAX
00579E16  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
00579E1C  C1 E0 09                  SHL EAX,0x9
00579E1F  99                        CDQ
00579E20  F7 F9                     IDIV ECX
00579E22  89 86 4D 02 00 00         MOV dword ptr [ESI + 0x24d],EAX
00579E28  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
00579E2C  0F BF C8                  MOVSX ECX,AX
00579E2F  89 8E 51 02 00 00         MOV dword ptr [ESI + 0x251],ECX
00579E35  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
00579E39  0F BF D1                  MOVSX EDX,CX
00579E3C  89 96 55 02 00 00         MOV dword ptr [ESI + 0x255],EDX
00579E42  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00579E46  52                        PUSH EDX
00579E47  FF 75 EC                  PUSH dword ptr [EBP + -0x14]
00579E4A  57                        PUSH EDI
00579E4B  52                        PUSH EDX
00579E4C  51                        PUSH ECX
00579E4D  50                        PUSH EAX
00579E4E  8B CE                     MOV ECX,ESI
00579E50  FF 53 10                  CALL dword ptr [EBX + 0x10]
00579E53  0F BF C8                  MOVSX ECX,AX
00579E56  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
00579E5B  F7 E9                     IMUL ECX
00579E5D  03 D1                     ADD EDX,ECX
00579E5F  C1 FA 05                  SAR EDX,0x5
00579E62  8B C2                     MOV EAX,EDX
00579E64  C1 E8 1F                  SHR EAX,0x1f
00579E67  8D 4C 02 03               LEA ECX,[EDX + EAX*0x1 + 0x3]
00579E6B  0F BF D1                  MOVSX EDX,CX
00579E6E  81 E2 07 00 00 80         AND EDX,0x80000007
00579E74  79 05                     JNS 0x00579e7b
00579E76  4A                        DEC EDX
00579E77  83 CA F8                  OR EDX,0xfffffff8
00579E7A  42                        INC EDX
LAB_00579e7b:
00579E7B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00579E7E  5F                        POP EDI
00579E7F  5E                        POP ESI
00579E80  5B                        POP EBX
00579E81  66 89 10                  MOV word ptr [EAX],DX
00579E84  B8 01 00 00 00            MOV EAX,0x1
00579E89  8B E5                     MOV ESP,EBP
00579E8B  5D                        POP EBP
00579E8C  C2 0C 00                  RET 0xc
FUN_005797b0::cf_common_exit_00579E8F:
00579E8F  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
00579E93  41                        INC ECX
00579E94  81 E1 07 00 00 80         AND ECX,0x80000007
00579E9A  79 05                     JNS 0x00579ea1
00579E9C  49                        DEC ECX
00579E9D  83 C9 F8                  OR ECX,0xfffffff8
00579EA0  41                        INC ECX
LAB_00579ea1:
00579EA1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00579EA4  5F                        POP EDI
00579EA5  5E                        POP ESI
00579EA6  33 C0                     XOR EAX,EAX
00579EA8  66 89 0A                  MOV word ptr [EDX],CX
00579EAB  5B                        POP EBX
00579EAC  8B E5                     MOV ESP,EBP
00579EAE  5D                        POP EBP
00579EAF  C2 0C 00                  RET 0xc
