FUN_00607200:
00607200  55                        PUSH EBP
00607201  8B EC                     MOV EBP,ESP
00607203  81 EC 08 01 00 00         SUB ESP,0x108
00607209  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0060720C  56                        PUSH ESI
0060720D  8B F1                     MOV ESI,ECX
0060720F  57                        PUSH EDI
00607210  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00607216  50                        PUSH EAX
00607217  E8 9B D7 DF FF            CALL 0x004049b7
0060721C  25 FF 00 00 00            AND EAX,0xff
00607221  8D 4D 88                  LEA ECX,[EBP + -0x78]
00607224  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00607227  8D 55 E8                  LEA EDX,[EBP + -0x18]
0060722A  51                        PUSH ECX
0060722B  8D 45 8C                  LEA EAX,[EBP + -0x74]
0060722E  52                        PUSH EDX
0060722F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00607232  8D 4D 98                  LEA ECX,[EBP + -0x68]
00607235  50                        PUSH EAX
00607236  51                        PUSH ECX
00607237  52                        PUSH EDX
00607238  8B CE                     MOV ECX,ESI
0060723A  E8 E2 9F DF FF            CALL 0x00401221
0060723F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00607242  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00607245  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0060724B  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0060724E  05 39 30 00 00            ADD EAX,0x3039
00607253  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607256  33 D2                     XOR EDX,EDX
00607258  C1 E8 10                  SHR EAX,0x10
0060725B  41                        INC ECX
0060725C  F7 F1                     DIV ECX
0060725E  8B CE                     MOV ECX,ESI
00607260  8B FA                     MOV EDI,EDX
00607262  83 C7 09                  ADD EDI,0x9
00607265  57                        PUSH EDI
00607266  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00607269  E8 1E CB DF FF            CALL 0x00403d8c
0060726E  3B C7                     CMP EAX,EDI
00607270  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
00607276  74 0B                     JZ 0x00607283
00607278  5F                        POP EDI
00607279  83 C8 FF                  OR EAX,0xffffffff
0060727C  5E                        POP ESI
0060727D  8B E5                     MOV ESP,EBP
0060727F  5D                        POP EBP
00607280  C2 24 00                  RET 0x24
LAB_00607283:
00607283  B9 08 00 00 00            MOV ECX,0x8
00607288  33 C0                     XOR EAX,EAX
0060728A  8D BD 68 FF FF FF         LEA EDI,[EBP + 0xffffff68]
00607290  53                        PUSH EBX
00607291  F3 AB                     STOSD.REP ES:EDI
00607293  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00607296  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0060729D  85 C0                     TEST EAX,EAX
0060729F  0F 8E 81 00 00 00         JLE 0x00607326
006072A5  8D 8D F8 FE FF FF         LEA ECX,[EBP + 0xfffffef8]
006072AB  8B F8                     MOV EDI,EAX
006072AD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006072b0:
006072B0  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006072B3  BB 07 00 00 00            MOV EBX,0x7
006072B8  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
006072BE  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
006072C4  33 D2                     XOR EDX,EDX
006072C6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006072C9  C1 E8 10                  SHR EAX,0x10
006072CC  F7 F3                     DIV EBX
006072CE  8B 84 95 68 FF FF FF      MOV EAX,dword ptr [EBP + EDX*0x4 + 0xffffff68]
006072D5  85 C0                     TEST EAX,EAX
006072D7  7E 1B                     JLE 0x006072f4
006072D9  33 C0                     XOR EAX,EAX
LAB_006072db:
006072DB  83 F8 06                  CMP EAX,0x6
006072DE  7F 14                     JG 0x006072f4
006072E0  42                        INC EDX
006072E1  83 FA 06                  CMP EDX,0x6
006072E4  7E 02                     JLE 0x006072e8
006072E6  33 D2                     XOR EDX,EDX
LAB_006072e8:
006072E8  8B 9C 95 68 FF FF FF      MOV EBX,dword ptr [EBP + EDX*0x4 + 0xffffff68]
006072EF  40                        INC EAX
006072F0  85 DB                     TEST EBX,EBX
006072F2  75 E7                     JNZ 0x006072db
LAB_006072f4:
006072F4  8B 84 95 68 FF FF FF      MOV EAX,dword ptr [EBP + EDX*0x4 + 0xffffff68]
006072FB  89 11                     MOV dword ptr [ECX],EDX
006072FD  40                        INC EAX
006072FE  89 84 95 68 FF FF FF      MOV dword ptr [EBP + EDX*0x4 + 0xffffff68],EAX
00607305  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00607308  48                        DEC EAX
00607309  74 10                     JZ 0x0060731b
0060730B  48                        DEC EAX
0060730C  74 08                     JZ 0x00607316
0060730E  48                        DEC EAX
0060730F  75 0F                     JNZ 0x00607320
00607311  80 CE 40                  OR DH,0x40
00607314  EB 08                     JMP 0x0060731e
LAB_00607316:
00607316  80 CE 02                  OR DH,0x2
00607319  EB 03                     JMP 0x0060731e
LAB_0060731b:
0060731B  80 CE 08                  OR DH,0x8
LAB_0060731e:
0060731E  89 11                     MOV dword ptr [ECX],EDX
LAB_00607320:
00607320  83 C1 04                  ADD ECX,0x4
00607323  4F                        DEC EDI
00607324  75 8A                     JNZ 0x006072b0
LAB_00607326:
00607326  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00607329  33 FF                     XOR EDI,EDI
0060732B  85 C0                     TEST EAX,EAX
0060732D  0F 8E F0 00 00 00         JLE 0x00607423
00607333  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00607336  8D 8C 85 F8 FE FF FF      LEA ECX,[EBP + EAX*0x4 + 0xfffffef8]
LAB_0060733d:
0060733D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00607340  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00607343  3B D0                     CMP EDX,EAX
00607345  0F 84 D8 00 00 00         JZ 0x00607423
0060734B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0060734E  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
00607354  48                        DEC EAX
00607355  0F 84 8D 00 00 00         JZ 0x006073e8
0060735B  48                        DEC EAX
0060735C  74 64                     JZ 0x006073c2
0060735E  48                        DEC EAX
0060735F  0F 85 A8 00 00 00         JNZ 0x0060740d
00607365  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00607368  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0060736E  05 39 30 00 00            ADD EAX,0x3039
00607373  A9 00 00 03 00            TEST EAX,0x30000
00607378  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060737B  75 21                     JNZ 0x0060739e
0060737D  8B D0                     MOV EDX,EAX
0060737F  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00607385  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0060738B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060738E  C1 E8 10                  SHR EAX,0x10
00607391  83 E0 01                  AND EAX,0x1
00607394  83 C0 07                  ADD EAX,0x7
00607397  80 CC 40                  OR AH,0x40
0060739A  89 01                     MOV dword ptr [ECX],EAX
0060739C  EB 6F                     JMP 0x0060740d
LAB_0060739e:
0060739E  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006073A1  33 D2                     XOR EDX,EDX
006073A3  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
006073A9  05 39 30 00 00            ADD EAX,0x3039
006073AE  BB 05 00 00 00            MOV EBX,0x5
006073B3  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006073B6  C1 E8 10                  SHR EAX,0x10
006073B9  F7 F3                     DIV EBX
006073BB  03 D3                     ADD EDX,EBX
006073BD  80 CE 20                  OR DH,0x20
006073C0  EB 49                     JMP 0x0060740b
LAB_006073c2:
006073C2  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006073C5  BB 09 00 00 00            MOV EBX,0x9
006073CA  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
006073D0  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
006073D6  33 D2                     XOR EDX,EDX
006073D8  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006073DB  C1 E8 10                  SHR EAX,0x10
006073DE  F7 F3                     DIV EBX
006073E0  83 C2 07                  ADD EDX,0x7
006073E3  80 CE 02                  OR DH,0x2
006073E6  EB 23                     JMP 0x0060740b
LAB_006073e8:
006073E8  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006073EB  33 D2                     XOR EDX,EDX
006073ED  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
006073F3  05 39 30 00 00            ADD EAX,0x3039
006073F8  BB 09 00 00 00            MOV EBX,0x9
006073FD  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607400  C1 E8 10                  SHR EAX,0x10
00607403  F7 F3                     DIV EBX
00607405  83 C2 07                  ADD EDX,0x7
00607408  80 CE 08                  OR DH,0x8
LAB_0060740b:
0060740B  89 11                     MOV dword ptr [ECX],EDX
LAB_0060740d:
0060740D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00607410  83 C1 04                  ADD ECX,0x4
00607413  40                        INC EAX
00607414  47                        INC EDI
00607415  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00607418  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0060741B  3B F8                     CMP EDI,EAX
0060741D  0F 8C 1A FF FF FF         JL 0x0060733d
LAB_00607423:
00607423  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00607426  33 FF                     XOR EDI,EDI
00607428  8D 8C 8D F8 FE FF FF      LEA ECX,[EBP + ECX*0x4 + 0xfffffef8]
LAB_0060742f:
0060742F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00607432  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00607435  3B D0                     CMP EDX,EAX
00607437  0F 84 A1 00 00 00         JZ 0x006074de
0060743D  83 7D F4 03               CMP dword ptr [EBP + -0xc],0x3
00607441  75 64                     JNZ 0x006074a7
00607443  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00607446  33 D2                     XOR EDX,EDX
00607448  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0060744E  05 39 30 00 00            ADD EAX,0x3039
00607453  BB 03 00 00 00            MOV EBX,0x3
00607458  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060745B  C1 E8 10                  SHR EAX,0x10
0060745E  F7 F3                     DIV EBX
00607460  85 D2                     TEST EDX,EDX
00607462  75 21                     JNZ 0x00607485
00607464  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00607467  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0060746D  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00607473  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607476  C1 E8 10                  SHR EAX,0x10
00607479  23 C3                     AND EAX,EBX
0060747B  83 C0 06                  ADD EAX,0x6
0060747E  80 CC 20                  OR AH,0x20
00607481  89 01                     MOV dword ptr [ECX],EAX
00607483  EB 45                     JMP 0x006074ca
LAB_00607485:
00607485  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00607488  33 D2                     XOR EDX,EDX
0060748A  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00607490  05 39 30 00 00            ADD EAX,0x3039
00607495  BB 03 00 00 00            MOV EBX,0x3
0060749A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060749D  C1 E8 10                  SHR EAX,0x10
006074A0  F7 F3                     DIV EBX
006074A2  80 CE 10                  OR DH,0x10
006074A5  EB 21                     JMP 0x006074c8
LAB_006074a7:
006074A7  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006074AA  BB 07 00 00 00            MOV EBX,0x7
006074AF  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
006074B5  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
006074BB  33 D2                     XOR EDX,EDX
006074BD  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006074C0  C1 E8 10                  SHR EAX,0x10
006074C3  F7 F3                     DIV EBX
006074C5  83 C2 09                  ADD EDX,0x9
LAB_006074c8:
006074C8  89 11                     MOV dword ptr [ECX],EDX
LAB_006074ca:
006074CA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006074CD  83 C1 04                  ADD ECX,0x4
006074D0  40                        INC EAX
006074D1  47                        INC EDI
006074D2  83 FF 14                  CMP EDI,0x14
006074D5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006074D8  0F 8C 51 FF FF FF         JL 0x0060742f
LAB_006074de:
006074DE  B9 08 00 00 00            MOV ECX,0x8
006074E3  33 C0                     XOR EAX,EAX
006074E5  8D BD 48 FF FF FF         LEA EDI,[EBP + 0xffffff48]
006074EB  33 D2                     XOR EDX,EDX
006074ED  F3 AB                     STOSD.REP ES:EDI
006074EF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006074F2  33 DB                     XOR EBX,EBX
006074F4  3B C2                     CMP EAX,EDX
006074F6  C7 85 58 FF FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffff58],0x2
00607500  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00607503  0F 8E 71 03 00 00         JLE 0x0060787a
00607509  8D 85 F8 FE FF FF         LEA EAX,[EBP + 0xfffffef8]
0060750F  8D 8E 19 02 00 00         LEA ECX,[ESI + 0x219]
00607515  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00607518  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0060751B  EB 05                     JMP 0x00607522
LAB_0060751d:
0060751D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00607520  33 D2                     XOR EDX,EDX
LAB_00607522:
00607522  B9 11 00 00 00            MOV ECX,0x11
00607527  33 C0                     XOR EAX,EAX
00607529  8D 7D 9C                  LEA EDI,[EBP + -0x64]
0060752C  F3 AB                     STOSD.REP ES:EDI
0060752E  8A 4D 28                  MOV CL,byte ptr [EBP + 0x28]
00607531  66 AB                     STOSW ES:EDI
00607533  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00607536  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
00607539  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
0060753C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0060753F  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00607542  88 4D DC                  MOV byte ptr [EBP + -0x24],CL
00607545  8B 02                     MOV EAX,dword ptr [EDX]
00607547  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0060754A  3C 0A                     CMP AL,0xa
0060754C  C7 45 9C 64 00 00 00      MOV dword ptr [EBP + -0x64],0x64
00607553  89 5D DE                  MOV dword ptr [EBP + -0x22],EBX
00607556  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00607559  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0060755C  76 06                     JBE 0x00607564
0060755E  C6 45 DD 00               MOV byte ptr [EBP + -0x23],0x0
00607562  EB 24                     JMP 0x00607588
LAB_00607564:
00607564  3C 04                     CMP AL,0x4
00607566  76 1C                     JBE 0x00607584
00607568  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0060756B  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00607571  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00607577  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060757A  C1 E8 10                  SHR EAX,0x10
0060757D  24 01                     AND AL,0x1
0060757F  88 45 DD                  MOV byte ptr [EBP + -0x23],AL
00607582  EB 04                     JMP 0x00607588
LAB_00607584:
00607584  C6 45 DD 01               MOV byte ptr [EBP + -0x23],0x1
LAB_00607588:
00607588  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0060758B  33 D2                     XOR EDX,EDX
0060758D  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00607593  05 39 30 00 00            ADD EAX,0x3039
00607598  B9 69 01 00 00            MOV ECX,0x169
0060759D  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006075A0  C1 E8 10                  SHR EAX,0x10
006075A3  F7 F1                     DIV ECX
006075A5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006075A8  85 C0                     TEST EAX,EAX
006075AA  8B CA                     MOV ECX,EDX
006075AC  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006075AF  75 08                     JNZ 0x006075b9
006075B1  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
006075B4  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006075B7  EB 03                     JMP 0x006075bc
LAB_006075b9:
006075B9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
LAB_006075bc:
006075BC  83 FB 05                  CMP EBX,0x5
006075BF  0F 8E 9B 00 00 00         JLE 0x00607660
006075C5  8B C3                     MOV EAX,EBX
006075C7  BF 03 00 00 00            MOV EDI,0x3
006075CC  99                        CDQ
006075CD  F7 FF                     IDIV EDI
006075CF  85 D2                     TEST EDX,EDX
006075D1  0F 85 89 00 00 00         JNZ 0x00607660
006075D7  51                        PUSH ECX
006075D8  E8 7E 89 0A 00            CALL 0x006aff5b
006075DD  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006075E0  50                        PUSH EAX
006075E1  E8 6A 89 0A 00            CALL 0x006aff50
006075E6  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006075E9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006075EC  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
006075F2  99                        CDQ
006075F3  83 E2 07                  AND EDX,0x7
006075F6  81 C1 39 30 00 00         ADD ECX,0x3039
006075FC  03 C2                     ADD EAX,EDX
006075FE  33 D2                     XOR EDX,EDX
00607600  C1 F8 03                  SAR EAX,0x3
00607603  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
00607606  83 C4 08                  ADD ESP,0x8
00607609  8D 78 01                  LEA EDI,[EAX + 0x1]
0060760C  8B C1                     MOV EAX,ECX
0060760E  C1 E8 10                  SHR EAX,0x10
00607611  F7 F7                     DIV EDI
00607613  03 55 08                  ADD EDX,dword ptr [EBP + 0x8]
00607616  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00607619  8B D1                     MOV EDX,ECX
0060761B  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00607621  B9 1F 00 00 00            MOV ECX,0x1f
00607626  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0060762C  33 D2                     XOR EDX,EDX
0060762E  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607631  C1 E8 10                  SHR EAX,0x10
00607634  F7 F7                     DIV EDI
00607636  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00607639  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0060763C  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00607642  05 39 30 00 00            ADD EAX,0x3039
00607647  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060764A  C1 E8 10                  SHR EAX,0x10
0060764D  03 D7                     ADD EDX,EDI
0060764F  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00607652  33 D2                     XOR EDX,EDX
00607654  F7 F1                     DIV ECX
00607656  B9 82 00 00 00            MOV ECX,0x82
0060765B  E9 C6 00 00 00            JMP 0x00607726
LAB_00607660:
00607660  51                        PUSH ECX
00607661  E8 F5 88 0A 00            CALL 0x006aff5b
00607666  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00607669  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0060766C  52                        PUSH EDX
0060766D  E8 DE 88 0A 00            CALL 0x006aff50
00607672  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00607675  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00607678  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0060767E  83 C4 08                  ADD ESP,0x8
00607681  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
00607687  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0060768A  99                        CDQ
0060768B  83 E2 07                  AND EDX,0x7
0060768E  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
00607691  03 C2                     ADD EAX,EDX
00607693  C1 F8 03                  SAR EAX,0x3
00607696  8D 58 01                  LEA EBX,[EAX + 0x1]
00607699  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0060769C  99                        CDQ
0060769D  2B C2                     SUB EAX,EDX
0060769F  33 D2                     XOR EDX,EDX
006076A1  8B C8                     MOV ECX,EAX
006076A3  8B C7                     MOV EAX,EDI
006076A5  C1 E8 10                  SHR EAX,0x10
006076A8  F7 F3                     DIV EBX
006076AA  D1 F9                     SAR ECX,0x1
006076AC  B8 AD 8B DB 68            MOV EAX,0x68db8bad
006076B1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006076B4  03 D1                     ADD EDX,ECX
006076B6  0F AF 55 94               IMUL EDX,dword ptr [EBP + -0x6c]
006076BA  F7 EA                     IMUL EDX
006076BC  C1 FA 0C                  SAR EDX,0xc
006076BF  8B C2                     MOV EAX,EDX
006076C1  C1 E8 1F                  SHR EAX,0x1f
006076C4  03 D0                     ADD EDX,EAX
006076C6  03 D7                     ADD EDX,EDI
006076C8  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006076CB  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006076CE  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006076D1  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
006076D7  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
006076DD  33 D2                     XOR EDX,EDX
006076DF  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006076E2  C1 E8 10                  SHR EAX,0x10
006076E5  F7 F3                     DIV EBX
006076E7  B8 AD 8B DB 68            MOV EAX,0x68db8bad
006076EC  03 D1                     ADD EDX,ECX
006076EE  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006076F1  0F AF 55 90               IMUL EDX,dword ptr [EBP + -0x70]
006076F5  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
006076FB  F7 EA                     IMUL EDX
006076FD  C1 FA 0C                  SAR EDX,0xc
00607700  8B C2                     MOV EAX,EDX
00607702  C1 E8 1F                  SHR EAX,0x1f
00607705  03 D0                     ADD EDX,EAX
00607707  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0060770D  03 D7                     ADD EDX,EDI
0060770F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607712  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00607715  33 D2                     XOR EDX,EDX
00607717  C1 E8 10                  SHR EAX,0x10
0060771A  B9 29 00 00 00            MOV ECX,0x29
0060771F  F7 F1                     DIV ECX
00607721  B9 14 00 00 00            MOV ECX,0x14
LAB_00607726:
00607726  2B CA                     SUB ECX,EDX
00607728  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0060772B  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00607731  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00607734  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
00607737  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0060773D  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
00607740  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607743  C1 E8 10                  SHR EAX,0x10
00607746  83 E0 07                  AND EAX,0x7
00607749  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0060774C  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0060774F  83 F8 0F                  CMP EAX,0xf
00607752  0F 87 BC 00 00 00         JA 0x00607814
00607758  33 D2                     XOR EDX,EDX
0060775A  8A 90 98 78 60 00         MOV DL,byte ptr [EAX + 0x607898]
switchD_00607760::switchD:
00607760  FF 24 95 88 78 60 00      JMP dword ptr [EDX*0x4 + 0x607888]
switchD_00607760::caseD_0:
00607767  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0060776A  33 D2                     XOR EDX,EDX
0060776C  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00607772  05 39 30 00 00            ADD EAX,0x3039
00607777  BF 03 00 00 00            MOV EDI,0x3
0060777C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060777F  C7 45 D4 7D 00 00 00      MOV dword ptr [EBP + -0x2c],0x7d
00607786  C1 E8 10                  SHR EAX,0x10
00607789  F7 F7                     DIV EDI
0060778B  8B FA                     MOV EDI,EDX
0060778D  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
00607790  E9 82 00 00 00            JMP 0x00607817
switchD_00607760::caseD_3:
00607795  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00607798  C7 45 D4 87 00 00 00      MOV dword ptr [EBP + -0x2c],0x87
0060779F  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
006077A5  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
006077AB  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
006077AE  C1 EF 10                  SHR EDI,0x10
006077B1  83 E7 03                  AND EDI,0x3
006077B4  47                        INC EDI
006077B5  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006077B8  EB 5D                     JMP 0x00607817
switchD_00607760::caseD_6:
006077BA  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006077BD  33 D2                     XOR EDX,EDX
006077BF  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
006077C5  05 39 30 00 00            ADD EAX,0x3039
006077CA  BF 05 00 00 00            MOV EDI,0x5
006077CF  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006077D2  C7 45 D4 91 00 00 00      MOV dword ptr [EBP + -0x2c],0x91
006077D9  C1 E8 10                  SHR EAX,0x10
006077DC  F7 F7                     DIV EDI
006077DE  8B FA                     MOV EDI,EDX
006077E0  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006077E3  EB 32                     JMP 0x00607817
switchD_00607760::caseD_a:
006077E5  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006077E8  BF 03 00 00 00            MOV EDI,0x3
006077ED  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
006077F3  C7 45 D4 96 00 00 00      MOV dword ptr [EBP + -0x2c],0x96
006077FA  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00607800  33 D2                     XOR EDX,EDX
00607802  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00607805  C1 E8 10                  SHR EAX,0x10
00607808  F7 F7                     DIV EDI
0060780A  8B FA                     MOV EDI,EDX
0060780C  83 C7 04                  ADD EDI,0x4
0060780F  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
00607812  EB 03                     JMP 0x00607817
LAB_00607814:
00607814  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
switchD_00607760::default:
00607817  8B C1                     MOV EAX,ECX
00607819  99                        CDQ
0060781A  33 C2                     XOR EAX,EDX
0060781C  2B C2                     SUB EAX,EDX
0060781E  83 F8 14                  CMP EAX,0x14
00607821  7D 1C                     JGE 0x0060783f
00607823  83 F8 0A                  CMP EAX,0xa
00607826  7D 0B                     JGE 0x00607833
00607828  83 C7 05                  ADD EDI,0x5
0060782B  83 C3 5A                  ADD EBX,0x5a
0060782E  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
00607831  EB 09                     JMP 0x0060783c
LAB_00607833:
00607833  83 C7 03                  ADD EDI,0x3
00607836  83 C3 50                  ADD EBX,0x50
00607839  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
LAB_0060783c:
0060783C  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
LAB_0060783f:
0060783F  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
00607842  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
00607848  8D 45 9C                  LEA EAX,[EBP + -0x64]
0060784B  51                        PUSH ECX
0060784C  8B 0F                     MOV ECX,dword ptr [EDI]
0060784E  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
00607854  E8 41 E4 DF FF            CALL 0x00405c9a
00607859  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060785C  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0060785F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00607862  40                        INC EAX
00607863  83 C3 04                  ADD EBX,0x4
00607866  83 C7 04                  ADD EDI,0x4
00607869  3B C1                     CMP EAX,ECX
0060786B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0060786E  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00607871  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00607874  0F 8C A3 FC FF FF         JL 0x0060751d
LAB_0060787a:
0060787A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060787D  5B                        POP EBX
0060787E  5F                        POP EDI
0060787F  5E                        POP ESI
00607880  8B E5                     MOV ESP,EBP
00607882  5D                        POP EBP
00607883  C2 24 00                  RET 0x24
