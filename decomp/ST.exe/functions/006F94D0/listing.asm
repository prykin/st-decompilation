FUN_006f94d0:
006F94D0  55                        PUSH EBP
006F94D1  8B EC                     MOV EBP,ESP
006F94D3  83 EC 08                  SUB ESP,0x8
006F94D6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F94D9  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F94E3  48                        DEC EAX
006F94E4  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F94E7  0F 88 93 05 00 00         JS 0x006f9a80
006F94ED  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F94F0  53                        PUSH EBX
006F94F1  56                        PUSH ESI
006F94F2  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F94F5  57                        PUSH EDI
006F94F6  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
LAB_006f94f9:
006F94F9  F6 C2 01                  TEST DL,0x1
006F94FC  75 4E                     JNZ 0x006f954c
LAB_006f94fe:
006F94FE  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F9501  48                        DEC EAX
006F9502  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F9505  78 42                     JS 0x006f9549
006F9507  33 C0                     XOR EAX,EAX
006F9509  8A 06                     MOV AL,byte ptr [ESI]
006F950B  46                        INC ESI
006F950C  85 C0                     TEST EAX,EAX
006F950E  74 2C                     JZ 0x006f953c
006F9510  8B CF                     MOV ECX,EDI
LAB_006f9512:
006F9512  A8 80                     TEST AL,0x80
006F9514  74 16                     JZ 0x006f952c
006F9516  A8 40                     TEST AL,0x40
006F9518  74 06                     JZ 0x006f9520
006F951A  46                        INC ESI
006F951B  83 E0 3F                  AND EAX,0x3f
006F951E  EB 0F                     JMP 0x006f952f
LAB_006f9520:
006F9520  8B D8                     MOV EBX,EAX
006F9522  83 E3 3F                  AND EBX,0x3f
006F9525  03 F3                     ADD ESI,EBX
006F9527  83 E0 3F                  AND EAX,0x3f
006F952A  EB 03                     JMP 0x006f952f
LAB_006f952c:
006F952C  83 E0 7F                  AND EAX,0x7f
LAB_006f952f:
006F952F  2B C8                     SUB ECX,EAX
006F9531  85 C9                     TEST ECX,ECX
006F9533  7E 07                     JLE 0x006f953c
006F9535  33 C0                     XOR EAX,EAX
006F9537  8A 06                     MOV AL,byte ptr [ESI]
006F9539  46                        INC ESI
006F953A  EB D6                     JMP 0x006f9512
LAB_006f953c:
006F953C  42                        INC EDX
006F953D  83 FA 04                  CMP EDX,0x4
006F9540  7E 02                     JLE 0x006f9544
006F9542  33 D2                     XOR EDX,EDX
LAB_006f9544:
006F9544  F6 C2 01                  TEST DL,0x1
006F9547  74 B5                     JZ 0x006f94fe
LAB_006f9549:
006F9549  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_006f954c:
006F954C  33 C0                     XOR EAX,EAX
006F954E  8A 06                     MOV AL,byte ptr [ESI]
006F9550  46                        INC ESI
006F9551  85 C0                     TEST EAX,EAX
006F9553  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F9556  0F 84 F0 04 00 00         JZ 0x006f9a4c
006F955C  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006F955F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F9562  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F9565  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006F9568  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_006f956b:
006F956B  A8 80                     TEST AL,0x80
006F956D  74 34                     JZ 0x006f95a3
006F956F  83 E0 3F                  AND EAX,0x3f
006F9572  3B C3                     CMP EAX,EBX
006F9574  7F 43                     JG 0x006f95b9
006F9576  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
006F957A  74 13                     JZ 0x006f958f
006F957C  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F957F  46                        INC ESI
006F9580  2B D8                     SUB EBX,EAX
006F9582  33 C0                     XOR EAX,EAX
006F9584  8A 06                     MOV AL,byte ptr [ESI]
006F9586  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F9589  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F958C  46                        INC ESI
006F958D  EB DC                     JMP 0x006f956b
LAB_006f958f:
006F958F  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9592  03 F0                     ADD ESI,EAX
006F9594  2B D8                     SUB EBX,EAX
006F9596  33 C0                     XOR EAX,EAX
006F9598  8A 06                     MOV AL,byte ptr [ESI]
006F959A  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F959D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F95A0  46                        INC ESI
006F95A1  EB C8                     JMP 0x006f956b
LAB_006f95a3:
006F95A3  83 E0 7F                  AND EAX,0x7f
006F95A6  3B C3                     CMP EAX,EBX
006F95A8  7F 0F                     JG 0x006f95b9
006F95AA  2B D8                     SUB EBX,EAX
006F95AC  33 C0                     XOR EAX,EAX
006F95AE  8A 06                     MOV AL,byte ptr [ESI]
006F95B0  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F95B3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F95B6  46                        INC ESI
006F95B7  EB B2                     JMP 0x006f956b
LAB_006f95b9:
006F95B9  2B C3                     SUB EAX,EBX
006F95BB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F95BE  81 E3 C0 00 00 00         AND EBX,0xc0
006F95C4  80 FB 80                  CMP BL,0x80
006F95C7  75 03                     JNZ 0x006f95cc
006F95C9  03 75 1C                  ADD ESI,dword ptr [EBP + 0x1c]
LAB_006f95cc:
006F95CC  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006F95CF  3B C3                     CMP EAX,EBX
006F95D1  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F95D4  0F 8F 46 02 00 00         JG 0x006f9820
006F95DA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F95DD  81 E3 80 00 00 00         AND EBX,0x80
006F95E3  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006f95e6:
006F95E6  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F95E9  2B D8                     SUB EBX,EAX
006F95EB  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F95EE  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006F95F1  85 DB                     TEST EBX,EBX
006F95F3  0F 84 D7 01 00 00         JZ 0x006f97d0
006F95F9  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
006F95FD  0F 84 F3 00 00 00         JZ 0x006f96f6
006F9603  33 DB                     XOR EBX,EBX
006F9605  8A 1E                     MOV BL,byte ptr [ESI]
006F9607  46                        INC ESI
006F9608  85 C9                     TEST ECX,ECX
006F960A  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F960D  7E 66                     JLE 0x006f9675
006F960F  8D 59 FF                  LEA EBX,[ECX + -0x1]
006F9612  83 FB 03                  CMP EBX,0x3
006F9615  77 5E                     JA 0x006f9675
switchD_006f9617::switchD:
006F9617  FF 24 9D 88 9A 6F 00      JMP dword ptr [EBX*0x4 + 0x6f9a88]
switchD_006f9617::caseD_1:
006F961E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9621  33 C9                     XOR ECX,ECX
006F9623  66 8B 0F                  MOV CX,word ptr [EDI]
006F9626  3B D9                     CMP EBX,ECX
006F9628  77 05                     JA 0x006f962f
006F962A  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F962D  88 0A                     MOV byte ptr [EDX],CL
LAB_006f962f:
006F962F  83 C7 02                  ADD EDI,0x2
006F9632  42                        INC EDX
006F9633  48                        DEC EAX
006F9634  B9 02 00 00 00            MOV ECX,0x2
006F9639  85 C0                     TEST EAX,EAX
006F963B  0F 8E AC 01 00 00         JLE 0x006f97ed
switchD_006f9617::caseD_2:
006F9641  48                        DEC EAX
006F9642  B9 03 00 00 00            MOV ECX,0x3
006F9647  85 C0                     TEST EAX,EAX
006F9649  0F 8E 9E 01 00 00         JLE 0x006f97ed
switchD_006f9617::caseD_3:
006F964F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9652  33 C9                     XOR ECX,ECX
006F9654  66 8B 0F                  MOV CX,word ptr [EDI]
006F9657  3B D9                     CMP EBX,ECX
006F9659  77 05                     JA 0x006f9660
006F965B  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F965E  88 0A                     MOV byte ptr [EDX],CL
LAB_006f9660:
006F9660  83 C7 02                  ADD EDI,0x2
006F9663  42                        INC EDX
006F9664  48                        DEC EAX
006F9665  B9 04 00 00 00            MOV ECX,0x4
006F966A  85 C0                     TEST EAX,EAX
006F966C  0F 8E 7B 01 00 00         JLE 0x006f97ed
switchD_006f9617::caseD_4:
006F9672  33 C9                     XOR ECX,ECX
006F9674  48                        DEC EAX
switchD_006f9617::default:
006F9675  85 C0                     TEST EAX,EAX
006F9677  0F 8E 70 01 00 00         JLE 0x006f97ed
006F967D  48                        DEC EAX
006F967E  B9 01 00 00 00            MOV ECX,0x1
006F9683  85 C0                     TEST EAX,EAX
006F9685  0F 8E 62 01 00 00         JLE 0x006f97ed
006F968B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_006f968e:
006F968E  33 C9                     XOR ECX,ECX
006F9690  66 8B 0F                  MOV CX,word ptr [EDI]
006F9693  3B D9                     CMP EBX,ECX
006F9695  77 05                     JA 0x006f969c
006F9697  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F969A  88 0A                     MOV byte ptr [EDX],CL
LAB_006f969c:
006F969C  83 C7 02                  ADD EDI,0x2
006F969F  42                        INC EDX
006F96A0  48                        DEC EAX
006F96A1  B9 02 00 00 00            MOV ECX,0x2
006F96A6  85 C0                     TEST EAX,EAX
006F96A8  0F 8E 3F 01 00 00         JLE 0x006f97ed
006F96AE  48                        DEC EAX
006F96AF  B9 03 00 00 00            MOV ECX,0x3
006F96B4  85 C0                     TEST EAX,EAX
006F96B6  0F 8E 31 01 00 00         JLE 0x006f97ed
006F96BC  33 C9                     XOR ECX,ECX
006F96BE  66 8B 0F                  MOV CX,word ptr [EDI]
006F96C1  3B D9                     CMP EBX,ECX
006F96C3  77 05                     JA 0x006f96ca
006F96C5  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F96C8  88 0A                     MOV byte ptr [EDX],CL
LAB_006f96ca:
006F96CA  83 C7 02                  ADD EDI,0x2
006F96CD  42                        INC EDX
006F96CE  48                        DEC EAX
006F96CF  B9 04 00 00 00            MOV ECX,0x4
006F96D4  85 C0                     TEST EAX,EAX
006F96D6  0F 8E 11 01 00 00         JLE 0x006f97ed
006F96DC  33 C9                     XOR ECX,ECX
006F96DE  48                        DEC EAX
006F96DF  85 C0                     TEST EAX,EAX
006F96E1  0F 8E 06 01 00 00         JLE 0x006f97ed
006F96E7  48                        DEC EAX
006F96E8  B9 01 00 00 00            MOV ECX,0x1
006F96ED  85 C0                     TEST EAX,EAX
006F96EF  7F 9D                     JG 0x006f968e
006F96F1  E9 F7 00 00 00            JMP 0x006f97ed
LAB_006f96f6:
006F96F6  85 C9                     TEST ECX,ECX
006F96F8  7E 68                     JLE 0x006f9762
006F96FA  8D 59 FF                  LEA EBX,[ECX + -0x1]
006F96FD  83 FB 03                  CMP EBX,0x3
006F9700  77 60                     JA 0x006f9762
switchD_006f9702::switchD:
006F9702  FF 24 9D 98 9A 6F 00      JMP dword ptr [EBX*0x4 + 0x6f9a98]
switchD_006f9702::caseD_1:
006F9709  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F970C  33 C9                     XOR ECX,ECX
006F970E  66 8B 0F                  MOV CX,word ptr [EDI]
006F9711  3B D9                     CMP EBX,ECX
006F9713  77 04                     JA 0x006f9719
006F9715  8A 0E                     MOV CL,byte ptr [ESI]
006F9717  88 0A                     MOV byte ptr [EDX],CL
LAB_006f9719:
006F9719  83 C7 02                  ADD EDI,0x2
006F971C  42                        INC EDX
006F971D  46                        INC ESI
006F971E  48                        DEC EAX
006F971F  85 C0                     TEST EAX,EAX
006F9721  B9 02 00 00 00            MOV ECX,0x2
006F9726  0F 8E C1 00 00 00         JLE 0x006f97ed
switchD_006f9702::caseD_2:
006F972C  46                        INC ESI
006F972D  48                        DEC EAX
006F972E  85 C0                     TEST EAX,EAX
006F9730  B9 03 00 00 00            MOV ECX,0x3
006F9735  0F 8E B2 00 00 00         JLE 0x006f97ed
switchD_006f9702::caseD_3:
006F973B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F973E  33 C9                     XOR ECX,ECX
006F9740  66 8B 0F                  MOV CX,word ptr [EDI]
006F9743  3B D9                     CMP EBX,ECX
006F9745  77 04                     JA 0x006f974b
006F9747  8A 0E                     MOV CL,byte ptr [ESI]
006F9749  88 0A                     MOV byte ptr [EDX],CL
LAB_006f974b:
006F974B  83 C7 02                  ADD EDI,0x2
006F974E  42                        INC EDX
006F974F  46                        INC ESI
006F9750  48                        DEC EAX
006F9751  85 C0                     TEST EAX,EAX
006F9753  B9 04 00 00 00            MOV ECX,0x4
006F9758  0F 8E 8F 00 00 00         JLE 0x006f97ed
switchD_006f9702::caseD_4:
006F975E  46                        INC ESI
006F975F  33 C9                     XOR ECX,ECX
006F9761  48                        DEC EAX
switchD_006f9702::default:
006F9762  85 C0                     TEST EAX,EAX
006F9764  0F 8E 83 00 00 00         JLE 0x006f97ed
006F976A  46                        INC ESI
006F976B  48                        DEC EAX
006F976C  85 C0                     TEST EAX,EAX
006F976E  B9 01 00 00 00            MOV ECX,0x1
006F9773  7E 78                     JLE 0x006f97ed
006F9775  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_006f9778:
006F9778  33 C9                     XOR ECX,ECX
006F977A  66 8B 0F                  MOV CX,word ptr [EDI]
006F977D  3B D9                     CMP EBX,ECX
006F977F  77 04                     JA 0x006f9785
006F9781  8A 0E                     MOV CL,byte ptr [ESI]
006F9783  88 0A                     MOV byte ptr [EDX],CL
LAB_006f9785:
006F9785  83 C7 02                  ADD EDI,0x2
006F9788  42                        INC EDX
006F9789  46                        INC ESI
006F978A  48                        DEC EAX
006F978B  85 C0                     TEST EAX,EAX
006F978D  B9 02 00 00 00            MOV ECX,0x2
006F9792  7E 59                     JLE 0x006f97ed
006F9794  46                        INC ESI
006F9795  48                        DEC EAX
006F9796  85 C0                     TEST EAX,EAX
006F9798  B9 03 00 00 00            MOV ECX,0x3
006F979D  7E 4E                     JLE 0x006f97ed
006F979F  33 C9                     XOR ECX,ECX
006F97A1  66 8B 0F                  MOV CX,word ptr [EDI]
006F97A4  3B D9                     CMP EBX,ECX
006F97A6  77 04                     JA 0x006f97ac
006F97A8  8A 0E                     MOV CL,byte ptr [ESI]
006F97AA  88 0A                     MOV byte ptr [EDX],CL
LAB_006f97ac:
006F97AC  83 C7 02                  ADD EDI,0x2
006F97AF  42                        INC EDX
006F97B0  46                        INC ESI
006F97B1  48                        DEC EAX
006F97B2  85 C0                     TEST EAX,EAX
006F97B4  B9 04 00 00 00            MOV ECX,0x4
006F97B9  7E 32                     JLE 0x006f97ed
006F97BB  46                        INC ESI
006F97BC  33 C9                     XOR ECX,ECX
006F97BE  48                        DEC EAX
006F97BF  85 C0                     TEST EAX,EAX
006F97C1  7E 2A                     JLE 0x006f97ed
006F97C3  46                        INC ESI
006F97C4  48                        DEC EAX
006F97C5  85 C0                     TEST EAX,EAX
006F97C7  B9 01 00 00 00            MOV ECX,0x1
006F97CC  7F AA                     JG 0x006f9778
006F97CE  EB 1D                     JMP 0x006f97ed
LAB_006f97d0:
006F97D0  48                        DEC EAX
006F97D1  78 1A                     JS 0x006f97ed
006F97D3  40                        INC EAX
LAB_006f97d4:
006F97D4  8B D9                     MOV EBX,ECX
006F97D6  83 E3 01                  AND EBX,0x1
006F97D9  80 FB 01                  CMP BL,0x1
006F97DC  75 04                     JNZ 0x006f97e2
006F97DE  42                        INC EDX
006F97DF  83 C7 02                  ADD EDI,0x2
LAB_006f97e2:
006F97E2  41                        INC ECX
006F97E3  83 F9 04                  CMP ECX,0x4
006F97E6  7E 02                     JLE 0x006f97ea
006F97E8  33 C9                     XOR ECX,ECX
LAB_006f97ea:
006F97EA  48                        DEC EAX
006F97EB  75 E7                     JNZ 0x006f97d4
LAB_006f97ed:
006F97ED  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F97F0  85 C0                     TEST EAX,EAX
006F97F2  7E 2A                     JLE 0x006f981e
006F97F4  33 C0                     XOR EAX,EAX
006F97F6  8A 06                     MOV AL,byte ptr [ESI]
006F97F8  8B D8                     MOV EBX,EAX
006F97FA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F97FD  81 E3 80 00 00 00         AND EBX,0x80
006F9803  46                        INC ESI
006F9804  85 DB                     TEST EBX,EBX
006F9806  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F9809  74 05                     JZ 0x006f9810
006F980B  83 E0 3F                  AND EAX,0x3f
006F980E  EB 03                     JMP 0x006f9813
LAB_006f9810:
006F9810  83 E0 7F                  AND EAX,0x7f
LAB_006f9813:
006F9813  3B 45 1C                  CMP EAX,dword ptr [EBP + 0x1c]
006F9816  0F 8E CA FD FF FF         JLE 0x006f95e6
006F981C  EB 02                     JMP 0x006f9820
LAB_006f981e:
006F981E  33 C0                     XOR EAX,EAX
LAB_006f9820:
006F9820  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F9823  2B C3                     SUB EAX,EBX
006F9825  85 DB                     TEST EBX,EBX
006F9827  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F982A  0F 8E CD 01 00 00         JLE 0x006f99fd
006F9830  F6 C3 80                  TEST BL,0x80
006F9833  0F 84 C4 01 00 00         JZ 0x006f99fd
006F9839  F6 C3 40                  TEST BL,0x40
006F983C  0F 84 E7 00 00 00         JZ 0x006f9929
006F9842  33 DB                     XOR EBX,EBX
006F9844  8A 1E                     MOV BL,byte ptr [ESI]
006F9846  46                        INC ESI
006F9847  85 C9                     TEST ECX,ECX
006F9849  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F984C  7E 71                     JLE 0x006f98bf
006F984E  49                        DEC ECX
006F984F  83 F9 03                  CMP ECX,0x3
006F9852  77 6B                     JA 0x006f98bf
switchD_006f9854::switchD:
006F9854  FF 24 8D A8 9A 6F 00      JMP dword ptr [ECX*0x4 + 0x6f9aa8]
switchD_006f9854::caseD_1:
006F985B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F985E  33 C9                     XOR ECX,ECX
006F9860  66 8B 0F                  MOV CX,word ptr [EDI]
006F9863  3B D9                     CMP EBX,ECX
006F9865  77 05                     JA 0x006f986c
006F9867  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F986A  88 0A                     MOV byte ptr [EDX],CL
LAB_006f986c:
006F986C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F986F  83 C7 02                  ADD EDI,0x2
006F9872  42                        INC EDX
006F9873  49                        DEC ECX
006F9874  85 C9                     TEST ECX,ECX
006F9876  0F 8E 7E 01 00 00         JLE 0x006f99fa
006F987C  EB 06                     JMP 0x006f9884
switchD_006f9854::caseD_2:
006F987E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F9881  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_006f9884:
006F9884  49                        DEC ECX
006F9885  85 C9                     TEST ECX,ECX
006F9887  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F988A  0F 8E 6A 01 00 00         JLE 0x006f99fa
006F9890  EB 03                     JMP 0x006f9895
switchD_006f9854::caseD_3:
006F9892  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_006f9895:
006F9895  33 C9                     XOR ECX,ECX
006F9897  66 8B 0F                  MOV CX,word ptr [EDI]
006F989A  3B D9                     CMP EBX,ECX
006F989C  77 05                     JA 0x006f98a3
006F989E  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F98A1  88 0A                     MOV byte ptr [EDX],CL
LAB_006f98a3:
006F98A3  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F98A6  83 C7 02                  ADD EDI,0x2
006F98A9  42                        INC EDX
006F98AA  49                        DEC ECX
006F98AB  85 C9                     TEST ECX,ECX
006F98AD  0F 8E 47 01 00 00         JLE 0x006f99fa
006F98B3  49                        DEC ECX
006F98B4  EB 0F                     JMP 0x006f98c5
switchD_006f9854::caseD_4:
006F98B6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F98B9  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F98BC  49                        DEC ECX
006F98BD  EB 06                     JMP 0x006f98c5
LAB_006f98bf:
006F98BF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F98C2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
switchD_006f9854::default:
006F98C5  85 C9                     TEST ECX,ECX
006F98C7  0F 8E 2D 01 00 00         JLE 0x006f99fa
006F98CD  49                        DEC ECX
006F98CE  85 C9                     TEST ECX,ECX
006F98D0  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F98D3  0F 8E 21 01 00 00         JLE 0x006f99fa
LAB_006f98d9:
006F98D9  33 C9                     XOR ECX,ECX
006F98DB  66 8B 0F                  MOV CX,word ptr [EDI]
006F98DE  3B D9                     CMP EBX,ECX
006F98E0  77 05                     JA 0x006f98e7
006F98E2  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F98E5  88 0A                     MOV byte ptr [EDX],CL
LAB_006f98e7:
006F98E7  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F98EA  83 C7 02                  ADD EDI,0x2
006F98ED  83 E9 02                  SUB ECX,0x2
006F98F0  42                        INC EDX
006F98F1  85 C9                     TEST ECX,ECX
006F98F3  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F98F6  0F 8E FE 00 00 00         JLE 0x006f99fa
006F98FC  33 C9                     XOR ECX,ECX
006F98FE  66 8B 0F                  MOV CX,word ptr [EDI]
006F9901  3B D9                     CMP EBX,ECX
006F9903  77 05                     JA 0x006f990a
006F9905  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
006F9908  88 0A                     MOV byte ptr [EDX],CL
LAB_006f990a:
006F990A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F990D  83 C7 02                  ADD EDI,0x2
006F9910  83 E9 02                  SUB ECX,0x2
006F9913  42                        INC EDX
006F9914  85 C9                     TEST ECX,ECX
006F9916  0F 8E DE 00 00 00         JLE 0x006f99fa
006F991C  49                        DEC ECX
006F991D  85 C9                     TEST ECX,ECX
006F991F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F9922  7F B5                     JG 0x006f98d9
006F9924  E9 D1 00 00 00            JMP 0x006f99fa
LAB_006f9929:
006F9929  85 C9                     TEST ECX,ECX
006F992B  7E 6E                     JLE 0x006f999b
006F992D  49                        DEC ECX
006F992E  83 F9 03                  CMP ECX,0x3
006F9931  77 68                     JA 0x006f999b
switchD_006f9933::switchD:
006F9933  FF 24 8D B8 9A 6F 00      JMP dword ptr [ECX*0x4 + 0x6f9ab8]
switchD_006f9933::caseD_1:
006F993A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F993D  33 C9                     XOR ECX,ECX
006F993F  66 8B 0F                  MOV CX,word ptr [EDI]
006F9942  3B D9                     CMP EBX,ECX
006F9944  77 04                     JA 0x006f994a
006F9946  8A 0E                     MOV CL,byte ptr [ESI]
006F9948  88 0A                     MOV byte ptr [EDX],CL
LAB_006f994a:
006F994A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F994D  83 C7 02                  ADD EDI,0x2
006F9950  42                        INC EDX
006F9951  46                        INC ESI
006F9952  49                        DEC ECX
006F9953  85 C9                     TEST ECX,ECX
006F9955  0F 8E 9F 00 00 00         JLE 0x006f99fa
006F995B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_006f995e:
006F995E  46                        INC ESI
006F995F  49                        DEC ECX
006F9960  85 C9                     TEST ECX,ECX
006F9962  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F9965  0F 8E 92 00 00 00         JLE 0x006f99fd
switchD_006f9933::caseD_3:
006F996B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F996E  33 C9                     XOR ECX,ECX
006F9970  66 8B 0F                  MOV CX,word ptr [EDI]
006F9973  3B D9                     CMP EBX,ECX
006F9975  77 04                     JA 0x006f997b
006F9977  8A 0E                     MOV CL,byte ptr [ESI]
006F9979  88 0A                     MOV byte ptr [EDX],CL
LAB_006f997b:
006F997B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F997E  83 C7 02                  ADD EDI,0x2
006F9981  42                        INC EDX
006F9982  46                        INC ESI
006F9983  49                        DEC ECX
006F9984  85 C9                     TEST ECX,ECX
006F9986  7E 72                     JLE 0x006f99fa
006F9988  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006F998B  46                        INC ESI
006F998C  49                        DEC ECX
006F998D  EB 0F                     JMP 0x006f999e
switchD_006f9933::caseD_2:
006F998F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F9992  EB CA                     JMP 0x006f995e
switchD_006f9933::caseD_4:
006F9994  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F9997  46                        INC ESI
006F9998  49                        DEC ECX
006F9999  EB 03                     JMP 0x006f999e
LAB_006f999b:
006F999B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
switchD_006f9933::default:
006F999E  85 C9                     TEST ECX,ECX
006F99A0  7E 5B                     JLE 0x006f99fd
006F99A2  46                        INC ESI
006F99A3  49                        DEC ECX
006F99A4  85 C9                     TEST ECX,ECX
006F99A6  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F99A9  7E 52                     JLE 0x006f99fd
006F99AB  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_006f99ae:
006F99AE  33 C9                     XOR ECX,ECX
006F99B0  66 8B 0F                  MOV CX,word ptr [EDI]
006F99B3  3B D9                     CMP EBX,ECX
006F99B5  77 04                     JA 0x006f99bb
006F99B7  8A 0E                     MOV CL,byte ptr [ESI]
006F99B9  88 0A                     MOV byte ptr [EDX],CL
LAB_006f99bb:
006F99BB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F99BE  83 C7 02                  ADD EDI,0x2
006F99C1  42                        INC EDX
006F99C2  46                        INC ESI
006F99C3  49                        DEC ECX
006F99C4  85 C9                     TEST ECX,ECX
006F99C6  7E 32                     JLE 0x006f99fa
006F99C8  46                        INC ESI
006F99C9  49                        DEC ECX
006F99CA  85 C9                     TEST ECX,ECX
006F99CC  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F99CF  7E 29                     JLE 0x006f99fa
006F99D1  33 C9                     XOR ECX,ECX
006F99D3  66 8B 0F                  MOV CX,word ptr [EDI]
006F99D6  3B D9                     CMP EBX,ECX
006F99D8  77 04                     JA 0x006f99de
006F99DA  8A 0E                     MOV CL,byte ptr [ESI]
006F99DC  88 0A                     MOV byte ptr [EDX],CL
LAB_006f99de:
006F99DE  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F99E1  83 C7 02                  ADD EDI,0x2
006F99E4  42                        INC EDX
006F99E5  46                        INC ESI
006F99E6  49                        DEC ECX
006F99E7  85 C9                     TEST ECX,ECX
006F99E9  7E 0F                     JLE 0x006f99fa
006F99EB  46                        INC ESI
006F99EC  49                        DEC ECX
006F99ED  85 C9                     TEST ECX,ECX
006F99EF  7E 09                     JLE 0x006f99fa
006F99F1  46                        INC ESI
006F99F2  49                        DEC ECX
006F99F3  85 C9                     TEST ECX,ECX
006F99F5  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F99F8  7F B4                     JG 0x006f99ae
LAB_006f99fa:
006F99FA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_006f99fd:
006F99FD  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006F9A00  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006F9A03  8B CF                     MOV ECX,EDI
006F9A05  2B CA                     SUB ECX,EDX
006F9A07  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F9A0A  2B CA                     SUB ECX,EDX
006F9A0C  3B C1                     CMP EAX,ECX
006F9A0E  7D 2C                     JGE 0x006f9a3c
LAB_006f9a10:
006F9A10  81 E3 C0 00 00 00         AND EBX,0xc0
006F9A16  2B C8                     SUB ECX,EAX
006F9A18  80 FB 80                  CMP BL,0x80
006F9A1B  75 02                     JNZ 0x006f9a1f
006F9A1D  03 F0                     ADD ESI,EAX
LAB_006f9a1f:
006F9A1F  33 DB                     XOR EBX,EBX
006F9A21  8A 1E                     MOV BL,byte ptr [ESI]
006F9A23  8B D3                     MOV EDX,EBX
006F9A25  8B C3                     MOV EAX,EBX
006F9A27  80 E2 80                  AND DL,0x80
006F9A2A  46                        INC ESI
006F9A2B  84 D2                     TEST DL,DL
006F9A2D  74 09                     JZ 0x006f9a38
006F9A2F  83 E0 3F                  AND EAX,0x3f
006F9A32  F6 C3 40                  TEST BL,0x40
006F9A35  74 01                     JZ 0x006f9a38
006F9A37  46                        INC ESI
LAB_006f9a38:
006F9A38  3B C1                     CMP EAX,ECX
006F9A3A  7C D4                     JL 0x006f9a10
LAB_006f9a3c:
006F9A3C  81 E3 C0 00 00 00         AND EBX,0xc0
006F9A42  80 FB 80                  CMP BL,0x80
006F9A45  75 02                     JNZ 0x006f9a49
006F9A47  03 F1                     ADD ESI,ECX
LAB_006f9a49:
006F9A49  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
LAB_006f9a4c:
006F9A4C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F9A4F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F9A52  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F9A55  03 C8                     ADD ECX,EAX
006F9A57  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006F9A5A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F9A5D  03 D9                     ADD EBX,ECX
006F9A5F  42                        INC EDX
006F9A60  83 FA 04                  CMP EDX,0x4
006F9A63  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006F9A66  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
006F9A69  7E 05                     JLE 0x006f9a70
006F9A6B  33 D2                     XOR EDX,EDX
006F9A6D  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_006f9a70:
006F9A70  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F9A73  48                        DEC EAX
006F9A74  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F9A77  0F 89 7C FA FF FF         JNS 0x006f94f9
006F9A7D  5F                        POP EDI
006F9A7E  5E                        POP ESI
006F9A7F  5B                        POP EBX
LAB_006f9a80:
006F9A80  8B E5                     MOV ESP,EBP
006F9A82  5D                        POP EBP
006F9A83  C2 30 00                  RET 0x30
