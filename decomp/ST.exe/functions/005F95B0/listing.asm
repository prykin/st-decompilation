FUN_005f95b0:
005F95B0  55                        PUSH EBP
005F95B1  8B EC                     MOV EBP,ESP
005F95B3  83 EC 60                  SUB ESP,0x60
005F95B6  53                        PUSH EBX
005F95B7  56                        PUSH ESI
005F95B8  8B F1                     MOV ESI,ECX
005F95BA  33 DB                     XOR EBX,EBX
005F95BC  57                        PUSH EDI
005F95BD  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
005F95C0  39 9E E6 02 00 00         CMP dword ptr [ESI + 0x2e6],EBX
005F95C6  75 09                     JNZ 0x005f95d1
005F95C8  5F                        POP EDI
005F95C9  5E                        POP ESI
005F95CA  33 C0                     XOR EAX,EAX
005F95CC  5B                        POP EBX
005F95CD  8B E5                     MOV ESP,EBP
005F95CF  5D                        POP EBP
005F95D0  C3                        RET
LAB_005f95d1:
005F95D1  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005F95D4  33 D2                     XOR EDX,EDX
005F95D6  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005F95DC  05 39 30 00 00            ADD EAX,0x3039
005F95E1  B9 69 01 00 00            MOV ECX,0x169
005F95E6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005F95E9  C1 E8 10                  SHR EAX,0x10
005F95EC  F7 F1                     DIV ECX
005F95EE  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F95F4  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005F95F7  89 50 4C                  MOV dword ptr [EAX + 0x4c],EDX
005F95FA  DB 45 EC                  FILD dword ptr [EBP + -0x14]
005F95FD  D8 0D 0C C7 79 00         FMUL float ptr [0x0079c70c]
005F9603  D9 C0                     FLD ST0
005F9605  D9 FF                     FCOS
005F9607  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
005F960D  E8 76 4C 13 00            CALL 0x0072e288
005F9612  D9 FE                     FSIN
005F9614  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005F961A  89 41 50                  MOV dword ptr [ECX + 0x50],EAX
005F961D  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
005F9623  E8 60 4C 13 00            CALL 0x0072e288
005F9628  8B 96 E6 02 00 00         MOV EDX,dword ptr [ESI + 0x2e6]
005F962E  8D 4D FE                  LEA ECX,[EBP + -0x2]
005F9631  89 42 54                  MOV dword ptr [EDX + 0x54],EAX
005F9634  8D 45 F8                  LEA EAX,[EBP + -0x8]
005F9637  50                        PUSH EAX
005F9638  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F963B  51                        PUSH ECX
005F963C  52                        PUSH EDX
005F963D  8B CE                     MOV ECX,ESI
005F963F  E8 9F 9B E0 FF            CALL 0x004031e3
005F9644  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
005F9648  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
005F964C  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
005F9650  89 8E C5 02 00 00         MOV dword ptr [ESI + 0x2c5],ECX
005F9656  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005F965C  89 86 C1 02 00 00         MOV dword ptr [ESI + 0x2c1],EAX
005F9662  89 96 C9 02 00 00         MOV dword ptr [ESI + 0x2c9],EDX
005F9668  89 41 34                  MOV dword ptr [ECX + 0x34],EAX
005F966B  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F9671  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
005F9675  89 50 38                  MOV dword ptr [EAX + 0x38],EDX
005F9678  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F967E  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005F9681  89 48 40                  MOV dword ptr [EAX + 0x40],ECX
005F9684  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F968A  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
005F968D  89 50 44                  MOV dword ptr [EAX + 0x44],EDX
005F9690  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F9696  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005F9699  89 48 48                  MOV dword ptr [EAX + 0x48],ECX
005F969C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F969F  83 C0 14                  ADD EAX,0x14
005F96A2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005F96A5  0F BF D0                  MOVSX EDX,AX
005F96A8  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F96AE  89 50 3C                  MOV dword ptr [EAX + 0x3c],EDX
005F96B1  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F96B7  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005F96BA  8B 78 3C                  MOV EDI,dword ptr [EAX + 0x3c]
005F96BD  2B F9                     SUB EDI,ECX
005F96BF  3B FB                     CMP EDI,EBX
005F96C1  7F 09                     JG 0x005f96cc
005F96C3  5F                        POP EDI
005F96C4  5E                        POP ESI
005F96C5  33 C0                     XOR EAX,EAX
005F96C7  5B                        POP EBX
005F96C8  8B E5                     MOV ESP,EBP
005F96CA  5D                        POP EBP
005F96CB  C3                        RET
LAB_005f96cc:
005F96CC  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F96D1  F7 EF                     IMUL EDI
005F96D3  C1 FA 06                  SAR EDX,0x6
005F96D6  8B C2                     MOV EAX,EDX
005F96D8  C1 E8 1F                  SHR EAX,0x1f
005F96DB  03 D0                     ADD EDX,EAX
005F96DD  0F BF C2                  MOVSX EAX,DX
005F96E0  83 F8 01                  CMP EAX,0x1
005F96E3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005F96E6  0F 8D 85 00 00 00         JGE 0x005f9771
005F96EC  68 C8 00 00 00            PUSH 0xc8
005F96F1  E8 7A 15 0B 00            CALL 0x006aac70
005F96F6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005F96F9  B8 0A 00 00 00            MOV EAX,0xa
005F96FE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005F9701  33 C9                     XOR ECX,ECX
LAB_005f9703:
005F9703  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005F9706  83 C1 04                  ADD ECX,0x4
005F9709  66 C7 44 11 FE 00 00      MOV word ptr [ECX + EDX*0x1 + -0x2],0x0
005F9710  99                        CDQ
005F9711  2B C2                     SUB EAX,EDX
005F9713  D1 F8                     SAR EAX,0x1
005F9715  03 C7                     ADD EAX,EDI
005F9717  99                        CDQ
005F9718  F7 7D F4                  IDIV dword ptr [EBP + -0xc]
005F971B  03 D8                     ADD EBX,EAX
005F971D  2B F8                     SUB EDI,EAX
005F971F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005F9722  66 89 5C 01 FC            MOV word ptr [ECX + EAX*0x1 + -0x4],BX
005F9727  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F972A  48                        DEC EAX
005F972B  83 F9 28                  CMP ECX,0x28
005F972E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005F9731  7C D0                     JL 0x005f9703
005F9733  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005F9739  33 C0                     XOR EAX,EAX
005F973B  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
005F9742  5F                        POP EDI
005F9743  89 41 50                  MOV dword ptr [ECX + 0x50],EAX
005F9746  8B 96 E6 02 00 00         MOV EDX,dword ptr [ESI + 0x2e6]
005F974C  89 42 54                  MOV dword ptr [EDX + 0x54],EAX
005F974F  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F9755  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005F9758  89 48 58                  MOV dword ptr [EAX + 0x58],ECX
005F975B  8B 96 E6 02 00 00         MOV EDX,dword ptr [ESI + 0x2e6]
005F9761  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005F9764  5E                        POP ESI
005F9765  C7 42 5C 0A 00 00 00      MOV dword ptr [EDX + 0x5c],0xa
005F976C  5B                        POP EBX
005F976D  8B E5                     MOV ESP,EBP
005F976F  5D                        POP EBP
005F9770  C3                        RET
LAB_005f9771:
005F9771  3B CB                     CMP ECX,EBX
005F9773  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F9778  7C 11                     JL 0x005f978b
005F977A  F7 E9                     IMUL ECX
005F977C  C1 FA 06                  SAR EDX,0x6
005F977F  8B C2                     MOV EAX,EDX
005F9781  C1 E8 1F                  SHR EAX,0x1f
005F9784  03 D0                     ADD EDX,EAX
005F9786  0F BF DA                  MOVSX EBX,DX
005F9789  EB 10                     JMP 0x005f979b
LAB_005f978b:
005F978B  F7 E9                     IMUL ECX
005F978D  C1 FA 06                  SAR EDX,0x6
005F9790  8B CA                     MOV ECX,EDX
005F9792  C1 E9 1F                  SHR ECX,0x1f
005F9795  03 D1                     ADD EDX,ECX
005F9797  0F BF DA                  MOVSX EBX,DX
005F979A  4B                        DEC EBX
LAB_005f979b:
005F979B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F979E  66 85 C0                  TEST AX,AX
005F97A1  0F BF C8                  MOVSX ECX,AX
005F97A4  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F97A9  7C 11                     JL 0x005f97bc
005F97AB  F7 E9                     IMUL ECX
005F97AD  C1 FA 06                  SAR EDX,0x6
005F97B0  8B C2                     MOV EAX,EDX
005F97B2  C1 E8 1F                  SHR EAX,0x1f
005F97B5  03 D0                     ADD EDX,EAX
005F97B7  0F BF FA                  MOVSX EDI,DX
005F97BA  EB 10                     JMP 0x005f97cc
LAB_005f97bc:
005F97BC  F7 E9                     IMUL ECX
005F97BE  C1 FA 06                  SAR EDX,0x6
005F97C1  8B CA                     MOV ECX,EDX
005F97C3  C1 E9 1F                  SHR ECX,0x1f
005F97C6  03 D1                     ADD EDX,ECX
005F97C8  0F BF FA                  MOVSX EDI,DX
005F97CB  4F                        DEC EDI
LAB_005f97cc:
005F97CC  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
005F97D0  66 85 C0                  TEST AX,AX
005F97D3  0F BF C8                  MOVSX ECX,AX
005F97D6  B8 79 19 8C 02            MOV EAX,0x28c1979
005F97DB  7C 10                     JL 0x005f97ed
005F97DD  F7 E9                     IMUL ECX
005F97DF  D1 FA                     SAR EDX,0x1
005F97E1  8B C2                     MOV EAX,EDX
005F97E3  C1 E8 1F                  SHR EAX,0x1f
005F97E6  03 D0                     ADD EDX,EAX
005F97E8  0F BF CA                  MOVSX ECX,DX
005F97EB  EB 0F                     JMP 0x005f97fc
LAB_005f97ed:
005F97ED  F7 E9                     IMUL ECX
005F97EF  D1 FA                     SAR EDX,0x1
005F97F1  8B CA                     MOV ECX,EDX
005F97F3  C1 E9 1F                  SHR ECX,0x1f
005F97F6  03 D1                     ADD EDX,ECX
005F97F8  0F BF CA                  MOVSX ECX,DX
005F97FB  49                        DEC ECX
LAB_005f97fc:
005F97FC  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
005F9800  66 85 C0                  TEST AX,AX
005F9803  0F BF D0                  MOVSX EDX,AX
005F9806  B8 79 19 8C 02            MOV EAX,0x28c1979
005F980B  7C 10                     JL 0x005f981d
005F980D  F7 EA                     IMUL EDX
005F980F  D1 FA                     SAR EDX,0x1
005F9811  8B C2                     MOV EAX,EDX
005F9813  C1 E8 1F                  SHR EAX,0x1f
005F9816  03 D0                     ADD EDX,EAX
005F9818  0F BF C2                  MOVSX EAX,DX
005F981B  EB 0F                     JMP 0x005f982c
LAB_005f981d:
005F981D  F7 EA                     IMUL EDX
005F981F  D1 FA                     SAR EDX,0x1
005F9821  8B C2                     MOV EAX,EDX
005F9823  C1 E8 1F                  SHR EAX,0x1f
005F9826  03 D0                     ADD EDX,EAX
005F9828  0F BF C2                  MOVSX EAX,DX
005F982B  48                        DEC EAX
LAB_005f982c:
005F982C  8D 55 E0                  LEA EDX,[EBP + -0x20]
005F982F  52                        PUSH EDX
005F9830  8D 55 E4                  LEA EDX,[EBP + -0x1c]
005F9833  52                        PUSH EDX
005F9834  53                        PUSH EBX
005F9835  57                        PUSH EDI
005F9836  51                        PUSH ECX
005F9837  50                        PUSH EAX
005F9838  8B CE                     MOV ECX,ESI
005F983A  E8 AB C4 E0 FF            CALL 0x00405cea
005F983F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005F9842  49                        DEC ECX
005F9843  83 F9 03                  CMP ECX,0x3
005F9846  77 2B                     JA 0x005f9873
switchD_005f9848::switchD:
005F9848  FF 24 8D 80 9A 5F 00      JMP dword ptr [ECX*0x4 + 0x5f9a80]
switchD_005f9848::caseD_1:
005F984F  C7 45 F4 14 00 00 00      MOV dword ptr [EBP + -0xc],0x14
005F9856  EB 22                     JMP 0x005f987a
switchD_005f9848::caseD_2:
005F9858  C7 45 F4 1C 00 00 00      MOV dword ptr [EBP + -0xc],0x1c
005F985F  EB 19                     JMP 0x005f987a
switchD_005f9848::caseD_3:
005F9861  C7 45 F4 22 00 00 00      MOV dword ptr [EBP + -0xc],0x22
005F9868  EB 10                     JMP 0x005f987a
switchD_005f9848::caseD_4:
005F986A  C7 45 F4 2A 00 00 00      MOV dword ptr [EBP + -0xc],0x2a
005F9871  EB 07                     JMP 0x005f987a
switchD_005f9848::default:
005F9873  C7 45 F4 28 00 00 00      MOV dword ptr [EBP + -0xc],0x28
LAB_005f987a:
005F987A  33 DB                     XOR EBX,EBX
005F987C  3B C3                     CMP EAX,EBX
005F987E  75 3E                     JNZ 0x005f98be
005F9880  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005F9886  C7 45 EC 04 00 00 00      MOV dword ptr [EBP + -0x14],0x4
005F988D  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005F9890  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
005F9893  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
005F9896  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005F9899  83 C0 32                  ADD EAX,0x32
005F989C  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
005F989F  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
005F98A2  C7 45 C8 AA 00 00 00      MOV dword ptr [EBP + -0x38],0xaa
005F98A9  0F BF 45 F8               MOVSX EAX,word ptr [EBP + -0x8]
005F98AD  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005F98B0  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
005F98B3  8D 50 CE                  LEA EDX,[EAX + -0x32]
005F98B6  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
005F98B9  E9 56 01 00 00            JMP 0x005f9a14
LAB_005f98be:
005F98BE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005F98C1  83 C2 08                  ADD EDX,0x8
005F98C4  83 F8 01                  CMP EAX,0x1
005F98C7  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005F98CA  0F 85 84 00 00 00         JNZ 0x005f9954
005F98D0  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005F98D6  C7 45 EC 05 00 00 00      MOV dword ptr [EBP + -0x14],0x5
005F98DD  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005F98E0  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
005F98E3  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
005F98E6  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005F98E9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F98EC  83 C2 32                  ADD EDX,0x32
005F98EF  66 3B C3                  CMP AX,BX
005F98F2  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
005F98F5  0F BF F8                  MOVSX EDI,AX
005F98F8  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
005F98FB  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F9900  7C 11                     JL 0x005f9913
005F9902  F7 EF                     IMUL EDI
005F9904  C1 FA 06                  SAR EDX,0x6
005F9907  8B C2                     MOV EAX,EDX
005F9909  C1 E8 1F                  SHR EAX,0x1f
005F990C  03 D0                     ADD EDX,EAX
005F990E  0F BF C2                  MOVSX EAX,DX
005F9911  EB 10                     JMP 0x005f9923
LAB_005f9913:
005F9913  F7 EF                     IMUL EDI
005F9915  C1 FA 06                  SAR EDX,0x6
005F9918  8B C2                     MOV EAX,EDX
005F991A  C1 E8 1F                  SHR EAX,0x1f
005F991D  03 D0                     ADD EDX,EAX
005F991F  0F BF C2                  MOVSX EAX,DX
005F9922  48                        DEC EAX
LAB_005f9923:
005F9923  2B 45 E4                  SUB EAX,dword ptr [EBP + -0x1c]
005F9926  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005F9929  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005F992C  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005F992F  C7 45 C8 0E 01 00 00      MOV dword ptr [EBP + -0x38],0x10e
005F9936  C7 45 CC AA 00 00 00      MOV dword ptr [EBP + -0x34],0xaa
005F993D  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
005F9940  8D 47 CE                  LEA EAX,[EDI + -0x32]
005F9943  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
005F9946  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005F9949  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
005F994C  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
005F994F  E9 C0 00 00 00            JMP 0x005f9a14
LAB_005f9954:
005F9954  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005F995A  C7 45 EC 06 00 00 00      MOV dword ptr [EBP + -0x14],0x6
005F9961  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005F9964  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
005F9967  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
005F996A  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005F996D  83 C0 32                  ADD EAX,0x32
005F9970  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
005F9973  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
005F9976  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F9979  66 3B C3                  CMP AX,BX
005F997C  0F BF F8                  MOVSX EDI,AX
005F997F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F9984  7C 13                     JL 0x005f9999
005F9986  F7 EF                     IMUL EDI
005F9988  C1 FA 06                  SAR EDX,0x6
005F998B  8B C2                     MOV EAX,EDX
005F998D  C1 E8 1F                  SHR EAX,0x1f
005F9990  03 D0                     ADD EDX,EAX
005F9992  0F BF D2                  MOVSX EDX,DX
005F9995  8B C2                     MOV EAX,EDX
005F9997  EB 12                     JMP 0x005f99ab
LAB_005f9999:
005F9999  F7 EF                     IMUL EDI
005F999B  C1 FA 06                  SAR EDX,0x6
005F999E  8B C2                     MOV EAX,EDX
005F99A0  C1 E8 1F                  SHR EAX,0x1f
005F99A3  03 D0                     ADD EDX,EAX
005F99A5  0F BF D2                  MOVSX EDX,DX
005F99A8  8D 42 FF                  LEA EAX,[EDX + -0x1]
LAB_005f99ab:
005F99AB  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
005F99AE  2B C3                     SUB EAX,EBX
005F99B0  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
005F99B3  66 83 7D F8 00            CMP word ptr [EBP + -0x8],0x0
005F99B8  C7 45 C8 B4 00 00 00      MOV dword ptr [EBP + -0x38],0xb4
005F99BF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005F99C2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005F99C5  8D 04 C3                  LEA EAX,[EBX + EAX*0x8]
005F99C8  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
005F99CB  8B C2                     MOV EAX,EDX
005F99CD  7D 03                     JGE 0x005f99d2
005F99CF  8D 42 FF                  LEA EAX,[EDX + -0x1]
LAB_005f99d2:
005F99D2  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005F99D5  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
005F99D8  2B C2                     SUB EAX,EDX
005F99DA  C7 45 CC B4 00 00 00      MOV dword ptr [EBP + -0x34],0xb4
005F99E1  C7 45 D0 AA 00 00 00      MOV dword ptr [EBP + -0x30],0xaa
005F99E8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005F99EB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005F99EE  8D 04 C3                  LEA EAX,[EBX + EAX*0x8]
005F99F1  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005F99F4  8D 47 CE                  LEA EAX,[EDI + -0x32]
005F99F7  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005F99FA  8D 47 01                  LEA EAX,[EDI + 0x1]
005F99FD  3B C2                     CMP EAX,EDX
005F99FF  75 07                     JNZ 0x005f9a08
005F9A01  C7 45 CC 0E 01 00 00      MOV dword ptr [EBP + -0x34],0x10e
LAB_005f9a08:
005F9A08  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
005F9A0B  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
005F9A12  33 DB                     XOR EBX,EBX
LAB_005f9a14:
005F9A14  8B 49 58                  MOV ECX,dword ptr [ECX + 0x58]
005F9A17  3B CB                     CMP ECX,EBX
005F9A19  75 0C                     JNZ 0x005f9a27
005F9A1B  68 C8 00 00 00            PUSH 0xc8
005F9A20  E8 4B 12 0B 00            CALL 0x006aac70
005F9A25  EB 02                     JMP 0x005f9a29
LAB_005f9a27:
005F9A27  8B C1                     MOV EAX,ECX
LAB_005f9a29:
005F9A29  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005F9A2C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005F9A2F  57                        PUSH EDI
005F9A30  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005F9A33  50                        PUSH EAX
005F9A34  8D 55 C0                  LEA EDX,[EBP + -0x40]
005F9A37  51                        PUSH ECX
005F9A38  8D 45 A0                  LEA EAX,[EBP + -0x60]
005F9A3B  52                        PUSH EDX
005F9A3C  50                        PUSH EAX
005F9A3D  E8 FA C0 E0 FF            CALL 0x00405b3c
005F9A42  85 C0                     TEST EAX,EAX
005F9A44  75 26                     JNZ 0x005f9a6c
005F9A46  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005F9A4C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005F9A4F  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
005F9A56  89 51 58                  MOV dword ptr [ECX + 0x58],EDX
005F9A59  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F9A5F  89 78 5C                  MOV dword ptr [EAX + 0x5c],EDI
005F9A62  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005F9A65  5F                        POP EDI
005F9A66  5E                        POP ESI
005F9A67  5B                        POP EBX
005F9A68  8B E5                     MOV ESP,EBP
005F9A6A  5D                        POP EBP
005F9A6B  C3                        RET
LAB_005f9a6c:
005F9A6C  8D 4D F0                  LEA ECX,[EBP + -0x10]
005F9A6F  51                        PUSH ECX
005F9A70  E8 EB 15 0B 00            CALL 0x006ab060
005F9A75  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005F9A78  5F                        POP EDI
005F9A79  5E                        POP ESI
005F9A7A  5B                        POP EBX
005F9A7B  8B E5                     MOV ESP,EBP
005F9A7D  5D                        POP EBP
005F9A7E  C3                        RET
