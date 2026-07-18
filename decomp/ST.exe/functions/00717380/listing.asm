FUN_00717380:
00717380  55                        PUSH EBP
00717381  8B EC                     MOV EBP,ESP
00717383  83 EC 08                  SUB ESP,0x8
00717386  53                        PUSH EBX
00717387  56                        PUSH ESI
00717388  8B F1                     MOV ESI,ECX
0071738A  57                        PUSH EDI
0071738B  8B 86 66 04 00 00         MOV EAX,dword ptr [ESI + 0x466]
00717391  85 C0                     TEST EAX,EAX
00717393  0F 84 29 02 00 00         JZ 0x007175c2
00717399  8B 86 D6 04 00 00         MOV EAX,dword ptr [ESI + 0x4d6]
0071739F  8B 8E F0 02 00 00         MOV ECX,dword ptr [ESI + 0x2f0]
007173A5  8B 9E CE 04 00 00         MOV EBX,dword ptr [ESI + 0x4ce]
007173AB  BF 10 27 00 00            MOV EDI,0x2710
007173B0  0F AF 08                  IMUL ECX,dword ptr [EAX]
007173B3  B8 1F 85 EB 51            MOV EAX,0x51eb851f
007173B8  C7 86 DE 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4de],0x0
007173C2  F7 E9                     IMUL ECX
007173C4  C1 FA 05                  SAR EDX,0x5
007173C7  8B C2                     MOV EAX,EDX
007173C9  33 C9                     XOR ECX,ECX
007173CB  C1 E8 1F                  SHR EAX,0x1f
007173CE  03 D0                     ADD EDX,EAX
007173D0  85 DB                     TEST EBX,EBX
007173D2  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007173D5  7E 30                     JLE 0x00717407
007173D7  8B 96 D6 04 00 00         MOV EDX,dword ptr [ESI + 0x4d6]
007173DD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_007173e0:
007173E0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007173E3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007173E6  2B 02                     SUB EAX,dword ptr [EDX]
007173E8  99                        CDQ
007173E9  33 C2                     XOR EAX,EDX
007173EB  2B C2                     SUB EAX,EDX
007173ED  3B C7                     CMP EAX,EDI
007173EF  7D 08                     JGE 0x007173f9
007173F1  8B F8                     MOV EDI,EAX
007173F3  89 8E DE 04 00 00         MOV dword ptr [ESI + 0x4de],ECX
LAB_007173f9:
007173F9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007173FC  41                        INC ECX
007173FD  83 C2 04                  ADD EDX,0x4
00717400  3B CB                     CMP ECX,EBX
00717402  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00717405  7C D9                     JL 0x007173e0
LAB_00717407:
00717407  8B 86 DE 04 00 00         MOV EAX,dword ptr [ESI + 0x4de]
0071740D  8B 8E D6 04 00 00         MOV ECX,dword ptr [ESI + 0x4d6]
00717413  8B 96 E2 04 00 00         MOV EDX,dword ptr [ESI + 0x4e2]
00717419  C1 E0 02                  SHL EAX,0x2
0071741C  8B 0C 08                  MOV ECX,dword ptr [EAX + ECX*0x1]
0071741F  3B D1                     CMP EDX,ECX
00717421  75 15                     JNZ 0x00717438
00717423  8B 96 DA 04 00 00         MOV EDX,dword ptr [ESI + 0x4da]
00717429  8B BE E6 04 00 00         MOV EDI,dword ptr [ESI + 0x4e6]
0071742F  3B 3C 02                  CMP EDI,dword ptr [EDX + EAX*0x1]
00717432  0F 84 8A 01 00 00         JZ 0x007175c2
LAB_00717438:
00717438  89 8E E2 04 00 00         MOV dword ptr [ESI + 0x4e2],ECX
0071743E  8B 8E DA 04 00 00         MOV ECX,dword ptr [ESI + 0x4da]
00717444  33 FF                     XOR EDI,EDI
00717446  8B 14 01                  MOV EDX,dword ptr [ECX + EAX*0x1]
00717449  89 96 E6 04 00 00         MOV dword ptr [ESI + 0x4e6],EDX
LAB_0071744f:
0071744F  8B 9E 72 04 00 00         MOV EBX,dword ptr [ESI + 0x472]
00717455  8B C7                     MOV EAX,EDI
00717457  03 C3                     ADD EAX,EBX
00717459  50                        PUSH EAX
0071745A  E8 01 3C F9 FF            CALL 0x006ab060
0071745F  83 C7 04                  ADD EDI,0x4
00717462  81 FF 40 01 00 00         CMP EDI,0x140
00717468  7C E5                     JL 0x0071744f
0071746A  8B 86 D2 04 00 00         MOV EAX,dword ptr [ESI + 0x4d2]
00717470  33 FF                     XOR EDI,EDI
00717472  85 C0                     TEST EAX,EAX
00717474  7E 3F                     JLE 0x007174b5
LAB_00717476:
00717476  8B 8E E6 04 00 00         MOV ECX,dword ptr [ESI + 0x4e6]
0071747C  6A 18                     PUSH 0x18
0071747E  51                        PUSH ECX
0071747F  8B 8E DE 04 00 00         MOV ECX,dword ptr [ESI + 0x4de]
00717485  8B 96 E2 04 00 00         MOV EDX,dword ptr [ESI + 0x4e2]
0071748B  0F AF C8                  IMUL ECX,EAX
0071748E  52                        PUSH EDX
0071748F  8B 96 CA 04 00 00         MOV EDX,dword ptr [ESI + 0x4ca]
00717495  03 CF                     ADD ECX,EDI
00717497  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
0071749A  50                        PUSH EAX
0071749B  E8 30 01 00 00            CALL 0x007175d0
007174A0  8B 8E 72 04 00 00         MOV ECX,dword ptr [ESI + 0x472]
007174A6  47                        INC EDI
007174A7  89 44 B9 FC               MOV dword ptr [ECX + EDI*0x4 + -0x4],EAX
007174AB  8B 86 D2 04 00 00         MOV EAX,dword ptr [ESI + 0x4d2]
007174B1  3B F8                     CMP EDI,EAX
007174B3  7C C1                     JL 0x00717476
LAB_007174b5:
007174B5  8B 86 D2 04 00 00         MOV EAX,dword ptr [ESI + 0x4d2]
007174BB  33 FF                     XOR EDI,EDI
007174BD  85 C0                     TEST EAX,EAX
007174BF  7E 48                     JLE 0x00717509
007174C1  BB 40 00 00 00            MOV EBX,0x40
LAB_007174c6:
007174C6  8B 96 E6 04 00 00         MOV EDX,dword ptr [ESI + 0x4e6]
007174CC  6A 10                     PUSH 0x10
007174CE  6A 18                     PUSH 0x18
007174D0  52                        PUSH EDX
007174D1  8B 96 DE 04 00 00         MOV EDX,dword ptr [ESI + 0x4de]
007174D7  8B 8E E2 04 00 00         MOV ECX,dword ptr [ESI + 0x4e2]
007174DD  0F AF D0                  IMUL EDX,EAX
007174E0  8B 86 CA 04 00 00         MOV EAX,dword ptr [ESI + 0x4ca]
007174E6  03 D7                     ADD EDX,EDI
007174E8  51                        PUSH ECX
007174E9  8B 0C 90                  MOV ECX,dword ptr [EAX + EDX*0x4]
007174EC  51                        PUSH ECX
007174ED  E8 2E 01 00 00            CALL 0x00717620
007174F2  8B 96 72 04 00 00         MOV EDX,dword ptr [ESI + 0x472]
007174F8  47                        INC EDI
007174F9  89 04 13                  MOV dword ptr [EBX + EDX*0x1],EAX
007174FC  8B 86 D2 04 00 00         MOV EAX,dword ptr [ESI + 0x4d2]
00717502  83 C3 04                  ADD EBX,0x4
00717505  3B F8                     CMP EDI,EAX
00717507  7C BD                     JL 0x007174c6
LAB_00717509:
00717509  8B 86 D2 04 00 00         MOV EAX,dword ptr [ESI + 0x4d2]
0071750F  33 FF                     XOR EDI,EDI
00717511  85 C0                     TEST EAX,EAX
00717513  7E 46                     JLE 0x0071755b
00717515  BB 80 00 00 00            MOV EBX,0x80
LAB_0071751a:
0071751A  8B 8E E6 04 00 00         MOV ECX,dword ptr [ESI + 0x4e6]
00717520  6A 10                     PUSH 0x10
00717522  51                        PUSH ECX
00717523  8B 8E DE 04 00 00         MOV ECX,dword ptr [ESI + 0x4de]
00717529  8B 96 E2 04 00 00         MOV EDX,dword ptr [ESI + 0x4e2]
0071752F  0F AF C8                  IMUL ECX,EAX
00717532  52                        PUSH EDX
00717533  8B 96 C6 04 00 00         MOV EDX,dword ptr [ESI + 0x4c6]
00717539  03 CF                     ADD ECX,EDI
0071753B  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
0071753E  50                        PUSH EAX
0071753F  E8 8C 00 00 00            CALL 0x007175d0
00717544  8B 8E 72 04 00 00         MOV ECX,dword ptr [ESI + 0x472]
0071754A  47                        INC EDI
0071754B  89 04 0B                  MOV dword ptr [EBX + ECX*0x1],EAX
0071754E  8B 86 D2 04 00 00         MOV EAX,dword ptr [ESI + 0x4d2]
00717554  83 C3 04                  ADD EBX,0x4
00717557  3B F8                     CMP EDI,EAX
00717559  7C BF                     JL 0x0071751a
LAB_0071755b:
0071755B  BF C0 00 00 00            MOV EDI,0xc0
00717560  BB 54 05 7F 00            MOV EBX,0x7f0554
LAB_00717565:
00717565  8B 86 DE 04 00 00         MOV EAX,dword ptr [ESI + 0x4de]
0071756B  8B 96 E6 04 00 00         MOV EDX,dword ptr [ESI + 0x4e6]
00717571  0F AF 86 D2 04 00 00      IMUL EAX,dword ptr [ESI + 0x4d2]
00717578  8B 8E E2 04 00 00         MOV ECX,dword ptr [ESI + 0x4e2]
0071757E  6A 10                     PUSH 0x10
00717580  6A 18                     PUSH 0x18
00717582  52                        PUSH EDX
00717583  33 D2                     XOR EDX,EDX
00717585  51                        PUSH ECX
00717586  8A 53 01                  MOV DL,byte ptr [EBX + 0x1]
00717589  8B 8E C6 04 00 00         MOV ECX,dword ptr [ESI + 0x4c6]
0071758F  03 D0                     ADD EDX,EAX
00717591  8B 14 91                  MOV EDX,dword ptr [ECX + EDX*0x4]
00717594  33 C9                     XOR ECX,ECX
00717596  8A 0B                     MOV CL,byte ptr [EBX]
00717598  52                        PUSH EDX
00717599  8B 96 CA 04 00 00         MOV EDX,dword ptr [ESI + 0x4ca]
0071759F  03 C8                     ADD ECX,EAX
007175A1  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
007175A4  50                        PUSH EAX
007175A5  E8 D6 00 00 00            CALL 0x00717680
007175AA  8B 8E 72 04 00 00         MOV ECX,dword ptr [ESI + 0x472]
007175B0  83 C7 04                  ADD EDI,0x4
007175B3  83 C3 02                  ADD EBX,0x2
007175B6  81 FF 40 01 00 00         CMP EDI,0x140
007175BC  89 44 0F FC               MOV dword ptr [EDI + ECX*0x1 + -0x4],EAX
007175C0  7C A3                     JL 0x00717565
LAB_007175c2:
007175C2  5F                        POP EDI
007175C3  5E                        POP ESI
007175C4  5B                        POP EBX
007175C5  8B E5                     MOV ESP,EBP
007175C7  5D                        POP EBP
007175C8  C3                        RET
