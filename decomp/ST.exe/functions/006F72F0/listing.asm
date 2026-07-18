FUN_006f72f0:
006F72F0  55                        PUSH EBP
006F72F1  8B EC                     MOV EBP,ESP
006F72F3  83 EC 0C                  SUB ESP,0xc
006F72F6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F72F9  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F7303  48                        DEC EAX
006F7304  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F7307  0F 88 CD 04 00 00         JS 0x006f77da
006F730D  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006F7310  53                        PUSH EBX
006F7311  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006F7314  56                        PUSH ESI
006F7315  57                        PUSH EDI
006F7316  EB 03                     JMP 0x006f731b
LAB_006f7318:
006F7318  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
LAB_006f731b:
006F731B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F731E  33 D2                     XOR EDX,EDX
006F7320  8A 11                     MOV DL,byte ptr [ECX]
006F7322  41                        INC ECX
006F7323  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F7326  33 C9                     XOR ECX,ECX
006F7328  8A 0B                     MOV CL,byte ptr [EBX]
006F732A  43                        INC EBX
006F732B  85 C9                     TEST ECX,ECX
006F732D  89 55 30                  MOV dword ptr [EBP + 0x30],EDX
006F7330  74 40                     JZ 0x006f7372
006F7332  85 D2                     TEST EDX,EDX
006F7334  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006F7337  75 03                     JNZ 0x006f733c
006F7339  8D 50 FF                  LEA EDX,[EAX + -0x1]
LAB_006f733c:
006F733C  F6 C1 80                  TEST CL,0x80
006F733F  8B C1                     MOV EAX,ECX
006F7341  74 1A                     JZ 0x006f735d
006F7343  83 E0 3F                  AND EAX,0x3f
006F7346  F6 C1 40                  TEST CL,0x40
006F7349  74 03                     JZ 0x006f734e
006F734B  43                        INC EBX
006F734C  EB 02                     JMP 0x006f7350
LAB_006f734e:
006F734E  03 D8                     ADD EBX,EAX
LAB_006f7350:
006F7350  3B C2                     CMP EAX,EDX
006F7352  7F 19                     JG 0x006f736d
006F7354  33 C9                     XOR ECX,ECX
006F7356  2B D0                     SUB EDX,EAX
006F7358  8A 0B                     MOV CL,byte ptr [EBX]
006F735A  43                        INC EBX
006F735B  EB DF                     JMP 0x006f733c
LAB_006f735d:
006F735D  83 E0 7F                  AND EAX,0x7f
006F7360  3B C2                     CMP EAX,EDX
006F7362  7F 09                     JG 0x006f736d
006F7364  33 C9                     XOR ECX,ECX
006F7366  2B D0                     SUB EDX,EAX
006F7368  8A 0B                     MOV CL,byte ptr [EBX]
006F736A  43                        INC EBX
006F736B  EB CF                     JMP 0x006f733c
LAB_006f736d:
006F736D  2B C2                     SUB EAX,EDX
006F736F  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
LAB_006f7372:
006F7372  85 D2                     TEST EDX,EDX
006F7374  0F 84 3A 04 00 00         JZ 0x006f77b4
006F737A  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
LAB_006f737d:
006F737D  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006F7380  F6 C2 80                  TEST DL,0x80
006F7383  8B F2                     MOV ESI,EDX
006F7385  74 1C                     JZ 0x006f73a3
006F7387  83 E6 3F                  AND ESI,0x3f
006F738A  3B F7                     CMP ESI,EDI
006F738C  7F 30                     JG 0x006f73be
006F738E  F6 C2 40                  TEST DL,0x40
006F7391  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F7394  74 06                     JZ 0x006f739c
006F7396  42                        INC EDX
006F7397  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F739A  EB 0E                     JMP 0x006f73aa
LAB_006f739c:
006F739C  03 D6                     ADD EDX,ESI
006F739E  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F73A1  EB 07                     JMP 0x006f73aa
LAB_006f73a3:
006F73A3  83 E6 7F                  AND ESI,0x7f
006F73A6  3B F7                     CMP ESI,EDI
006F73A8  7F 14                     JG 0x006f73be
LAB_006f73aa:
006F73AA  2B FE                     SUB EDI,ESI
006F73AC  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F73AF  33 D2                     XOR EDX,EDX
006F73B1  8A 16                     MOV DL,byte ptr [ESI]
006F73B3  89 55 30                  MOV dword ptr [EBP + 0x30],EDX
006F73B6  8B D6                     MOV EDX,ESI
006F73B8  42                        INC EDX
006F73B9  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F73BC  EB BF                     JMP 0x006f737d
LAB_006f73be:
006F73BE  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006F73C1  2B F7                     SUB ESI,EDI
006F73C3  81 E2 C0 00 00 00         AND EDX,0xc0
006F73C9  80 FA 80                  CMP DL,0x80
006F73CC  75 03                     JNZ 0x006f73d1
006F73CE  01 7D 1C                  ADD dword ptr [EBP + 0x1c],EDI
LAB_006f73d1:
006F73D1  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F73D4  3B F2                     CMP ESI,EDX
006F73D6  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F73D9  0F 8F 90 01 00 00         JG 0x006f756f
006F73DF  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006F73E2  81 E7 80 00 00 00         AND EDI,0x80
LAB_006f73e8:
006F73E8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F73EB  2B D6                     SUB EDX,ESI
006F73ED  85 FF                     TEST EDI,EDI
006F73EF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F73F2  0F 84 02 01 00 00         JZ 0x006f74fa
006F73F8  F6 45 30 40               TEST byte ptr [EBP + 0x30],0x40
006F73FC  0F 84 80 00 00 00         JZ 0x006f7482
006F7402  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F7405  33 D2                     XOR EDX,EDX
006F7407  8A 17                     MOV DL,byte ptr [EDI]
006F7409  47                        INC EDI
006F740A  4E                        DEC ESI
006F740B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F740E  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006F7411  0F 88 20 01 00 00         JS 0x006f7537
006F7417  8B F9                     MOV EDI,ECX
006F7419  81 E7 80 00 00 00         AND EDI,0x80
006F741F  46                        INC ESI
006F7420  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006f7423:
006F7423  85 FF                     TEST EDI,EDI
006F7425  74 17                     JZ 0x006f743e
006F7427  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F742A  33 D2                     XOR EDX,EDX
006F742C  66 8B 16                  MOV DX,word ptr [ESI]
006F742F  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F7432  3B F2                     CMP ESI,EDX
006F7434  77 08                     JA 0x006f743e
006F7436  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F7439  8A 55 F8                  MOV DL,byte ptr [EBP + -0x8]
006F743C  88 16                     MOV byte ptr [ESI],DL
LAB_006f743e:
006F743E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F7441  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F7444  83 C2 02                  ADD EDX,0x2
006F7447  46                        INC ESI
006F7448  48                        DEC EAX
006F7449  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F744C  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006F744F  79 23                     JNS 0x006f7474
006F7451  33 C9                     XOR ECX,ECX
006F7453  8A 0B                     MOV CL,byte ptr [EBX]
006F7455  43                        INC EBX
006F7456  8B F9                     MOV EDI,ECX
006F7458  8B C1                     MOV EAX,ECX
006F745A  81 E7 80 00 00 00         AND EDI,0x80
006F7460  74 0F                     JZ 0x006f7471
006F7462  83 E0 3F                  AND EAX,0x3f
006F7465  F6 C1 40                  TEST CL,0x40
006F7468  74 03                     JZ 0x006f746d
006F746A  43                        INC EBX
006F746B  EB 07                     JMP 0x006f7474
LAB_006f746d:
006F746D  03 D8                     ADD EBX,EAX
006F746F  EB 03                     JMP 0x006f7474
LAB_006f7471:
006F7471  83 E0 7F                  AND EAX,0x7f
LAB_006f7474:
006F7474  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F7477  4A                        DEC EDX
006F7478  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006F747B  75 A6                     JNZ 0x006f7423
006F747D  E9 B5 00 00 00            JMP 0x006f7537
LAB_006f7482:
006F7482  4E                        DEC ESI
006F7483  0F 88 AE 00 00 00         JS 0x006f7537
006F7489  8B F9                     MOV EDI,ECX
006F748B  81 E7 80 00 00 00         AND EDI,0x80
006F7491  46                        INC ESI
006F7492  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006f7495:
006F7495  85 FF                     TEST EDI,EDI
006F7497  74 19                     JZ 0x006f74b2
006F7499  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F749C  33 D2                     XOR EDX,EDX
006F749E  66 8B 16                  MOV DX,word ptr [ESI]
006F74A1  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F74A4  3B F2                     CMP ESI,EDX
006F74A6  77 0A                     JA 0x006f74b2
006F74A8  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F74AB  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F74AE  8A 12                     MOV DL,byte ptr [EDX]
006F74B0  88 16                     MOV byte ptr [ESI],DL
LAB_006f74b2:
006F74B2  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F74B5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F74B8  83 C6 02                  ADD ESI,0x2
006F74BB  42                        INC EDX
006F74BC  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006F74BF  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F74C2  46                        INC ESI
006F74C3  48                        DEC EAX
006F74C4  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F74C7  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F74CA  79 23                     JNS 0x006f74ef
006F74CC  33 C9                     XOR ECX,ECX
006F74CE  8A 0B                     MOV CL,byte ptr [EBX]
006F74D0  43                        INC EBX
006F74D1  8B F9                     MOV EDI,ECX
006F74D3  8B C1                     MOV EAX,ECX
006F74D5  81 E7 80 00 00 00         AND EDI,0x80
006F74DB  74 0F                     JZ 0x006f74ec
006F74DD  83 E0 3F                  AND EAX,0x3f
006F74E0  F6 C1 40                  TEST CL,0x40
006F74E3  74 03                     JZ 0x006f74e8
006F74E5  43                        INC EBX
006F74E6  EB 07                     JMP 0x006f74ef
LAB_006f74e8:
006F74E8  03 D8                     ADD EBX,EAX
006F74EA  EB 03                     JMP 0x006f74ef
LAB_006f74ec:
006F74EC  83 E0 7F                  AND EAX,0x7f
LAB_006f74ef:
006F74EF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F74F2  4A                        DEC EDX
006F74F3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006F74F6  75 9D                     JNZ 0x006f7495
006F74F8  EB 3D                     JMP 0x006f7537
LAB_006f74fa:
006F74FA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F74FD  03 D6                     ADD EDX,ESI
006F74FF  3B C6                     CMP EAX,ESI
006F7501  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F7504  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F7507  8D 14 72                  LEA EDX,[EDX + ESI*0x2]
006F750A  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F750D  8B D6                     MOV EDX,ESI
006F750F  7D 24                     JGE 0x006f7535
LAB_006f7511:
006F7511  33 C9                     XOR ECX,ECX
006F7513  2B D0                     SUB EDX,EAX
006F7515  8A 0B                     MOV CL,byte ptr [EBX]
006F7517  43                        INC EBX
006F7518  F6 C1 80                  TEST CL,0x80
006F751B  8B C1                     MOV EAX,ECX
006F751D  74 0F                     JZ 0x006f752e
006F751F  83 E0 3F                  AND EAX,0x3f
006F7522  F6 C1 40                  TEST CL,0x40
006F7525  74 03                     JZ 0x006f752a
006F7527  43                        INC EBX
006F7528  EB 07                     JMP 0x006f7531
LAB_006f752a:
006F752A  03 D8                     ADD EBX,EAX
006F752C  EB 03                     JMP 0x006f7531
LAB_006f752e:
006F752E  83 E0 7F                  AND EAX,0x7f
LAB_006f7531:
006F7531  3B C2                     CMP EAX,EDX
006F7533  7C DC                     JL 0x006f7511
LAB_006f7535:
006F7535  2B C2                     SUB EAX,EDX
LAB_006f7537:
006F7537  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F753A  85 D2                     TEST EDX,EDX
006F753C  7E 2F                     JLE 0x006f756d
006F753E  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F7541  33 D2                     XOR EDX,EDX
006F7543  8A 16                     MOV DL,byte ptr [ESI]
006F7545  8B FA                     MOV EDI,EDX
006F7547  89 55 30                  MOV dword ptr [EBP + 0x30],EDX
006F754A  81 E7 80 00 00 00         AND EDI,0x80
006F7550  46                        INC ESI
006F7551  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F7554  8B F2                     MOV ESI,EDX
006F7556  85 FF                     TEST EDI,EDI
006F7558  74 05                     JZ 0x006f755f
006F755A  83 E6 3F                  AND ESI,0x3f
006F755D  EB 03                     JMP 0x006f7562
LAB_006f755f:
006F755F  83 E6 7F                  AND ESI,0x7f
LAB_006f7562:
006F7562  3B 75 FC                  CMP ESI,dword ptr [EBP + -0x4]
006F7565  0F 8E 7D FE FF FF         JLE 0x006f73e8
006F756B  EB 02                     JMP 0x006f756f
LAB_006f756d:
006F756D  33 F6                     XOR ESI,ESI
LAB_006f756f:
006F756F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F7572  85 D2                     TEST EDX,EDX
006F7574  7E 22                     JLE 0x006f7598
006F7576  85 C0                     TEST EAX,EAX
006F7578  7F 1E                     JG 0x006f7598
006F757A  33 C9                     XOR ECX,ECX
006F757C  8A 0B                     MOV CL,byte ptr [EBX]
006F757E  43                        INC EBX
006F757F  F6 C1 80                  TEST CL,0x80
006F7582  8B C1                     MOV EAX,ECX
006F7584  74 0F                     JZ 0x006f7595
006F7586  83 E0 3F                  AND EAX,0x3f
006F7589  F6 C1 40                  TEST CL,0x40
006F758C  74 03                     JZ 0x006f7591
006F758E  43                        INC EBX
006F758F  EB 07                     JMP 0x006f7598
LAB_006f7591:
006F7591  03 D8                     ADD EBX,EAX
006F7593  EB 03                     JMP 0x006f7598
LAB_006f7595:
006F7595  83 E0 7F                  AND EAX,0x7f
LAB_006f7598:
006F7598  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F759B  2B F2                     SUB ESI,EDX
006F759D  8A 55 30                  MOV DL,byte ptr [EBP + 0x30]
006F75A0  F6 C2 80                  TEST DL,0x80
006F75A3  0F 84 11 01 00 00         JZ 0x006f76ba
006F75A9  F6 C2 40                  TEST DL,0x40
006F75AC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F75AF  0F 84 8D 00 00 00         JZ 0x006f7642
006F75B5  85 D2                     TEST EDX,EDX
006F75B7  0F 8E 3D 01 00 00         JLE 0x006f76fa
006F75BD  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F75C0  33 D2                     XOR EDX,EDX
006F75C2  8A 17                     MOV DL,byte ptr [EDI]
006F75C4  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F75C7  8B D7                     MOV EDX,EDI
006F75C9  42                        INC EDX
006F75CA  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F75CD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F75D0  4A                        DEC EDX
006F75D1  0F 88 23 01 00 00         JS 0x006f76fa
006F75D7  81 E1 80 00 00 00         AND ECX,0x80
006F75DD  42                        INC EDX
006F75DE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_006f75e1:
006F75E1  85 C9                     TEST ECX,ECX
006F75E3  74 17                     JZ 0x006f75fc
006F75E5  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F75E8  33 D2                     XOR EDX,EDX
006F75EA  66 8B 17                  MOV DX,word ptr [EDI]
006F75ED  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F75F0  3B FA                     CMP EDI,EDX
006F75F2  77 08                     JA 0x006f75fc
006F75F4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F75F7  8A 55 F8                  MOV DL,byte ptr [EBP + -0x8]
006F75FA  88 17                     MOV byte ptr [EDI],DL
LAB_006f75fc:
006F75FC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F75FF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F7602  83 C2 02                  ADD EDX,0x2
006F7605  47                        INC EDI
006F7606  48                        DEC EAX
006F7607  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F760A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F760D  79 25                     JNS 0x006f7634
006F760F  33 D2                     XOR EDX,EDX
006F7611  8A 13                     MOV DL,byte ptr [EBX]
006F7613  43                        INC EBX
006F7614  8B CA                     MOV ECX,EDX
006F7616  81 E1 80 00 00 00         AND ECX,0x80
006F761C  74 11                     JZ 0x006f762f
006F761E  8B C2                     MOV EAX,EDX
006F7620  83 E0 3F                  AND EAX,0x3f
006F7623  F6 C2 40                  TEST DL,0x40
006F7626  74 03                     JZ 0x006f762b
006F7628  43                        INC EBX
006F7629  EB 09                     JMP 0x006f7634
LAB_006f762b:
006F762B  03 D8                     ADD EBX,EAX
006F762D  EB 05                     JMP 0x006f7634
LAB_006f762f:
006F762F  83 E2 7F                  AND EDX,0x7f
006F7632  8B C2                     MOV EAX,EDX
LAB_006f7634:
006F7634  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F7637  4A                        DEC EDX
006F7638  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006F763B  75 A4                     JNZ 0x006f75e1
006F763D  E9 B8 00 00 00            JMP 0x006f76fa
LAB_006f7642:
006F7642  4A                        DEC EDX
006F7643  0F 88 B1 00 00 00         JS 0x006f76fa
006F7649  81 E1 80 00 00 00         AND ECX,0x80
006F764F  42                        INC EDX
006F7650  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_006f7653:
006F7653  85 C9                     TEST ECX,ECX
006F7655  74 19                     JZ 0x006f7670
006F7657  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F765A  33 D2                     XOR EDX,EDX
006F765C  66 8B 17                  MOV DX,word ptr [EDI]
006F765F  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F7662  3B FA                     CMP EDI,EDX
006F7664  77 0A                     JA 0x006f7670
006F7666  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F7669  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F766C  8A 12                     MOV DL,byte ptr [EDX]
006F766E  88 17                     MOV byte ptr [EDI],DL
LAB_006f7670:
006F7670  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F7673  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F7676  83 C7 02                  ADD EDI,0x2
006F7679  42                        INC EDX
006F767A  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006F767D  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F7680  47                        INC EDI
006F7681  48                        DEC EAX
006F7682  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F7685  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006F7688  79 25                     JNS 0x006f76af
006F768A  33 D2                     XOR EDX,EDX
006F768C  8A 13                     MOV DL,byte ptr [EBX]
006F768E  43                        INC EBX
006F768F  8B CA                     MOV ECX,EDX
006F7691  81 E1 80 00 00 00         AND ECX,0x80
006F7697  74 11                     JZ 0x006f76aa
006F7699  8B C2                     MOV EAX,EDX
006F769B  83 E0 3F                  AND EAX,0x3f
006F769E  F6 C2 40                  TEST DL,0x40
006F76A1  74 03                     JZ 0x006f76a6
006F76A3  43                        INC EBX
006F76A4  EB 09                     JMP 0x006f76af
LAB_006f76a6:
006F76A6  03 D8                     ADD EBX,EAX
006F76A8  EB 05                     JMP 0x006f76af
LAB_006f76aa:
006F76AA  83 E2 7F                  AND EDX,0x7f
006F76AD  8B C2                     MOV EAX,EDX
LAB_006f76af:
006F76AF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F76B2  4A                        DEC EDX
006F76B3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006F76B6  75 9B                     JNZ 0x006f7653
006F76B8  EB 40                     JMP 0x006f76fa
LAB_006f76ba:
006F76BA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F76BD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F76C0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F76C3  03 FA                     ADD EDI,EDX
006F76C5  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006F76C8  3B C2                     CMP EAX,EDX
006F76CA  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F76CD  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F76D0  7D 26                     JGE 0x006f76f8
LAB_006f76d2:
006F76D2  33 C9                     XOR ECX,ECX
006F76D4  2B D0                     SUB EDX,EAX
006F76D6  8A 0B                     MOV CL,byte ptr [EBX]
006F76D8  43                        INC EBX
006F76D9  F6 C1 80                  TEST CL,0x80
006F76DC  74 11                     JZ 0x006f76ef
006F76DE  8B C1                     MOV EAX,ECX
006F76E0  83 E0 3F                  AND EAX,0x3f
006F76E3  F6 C1 40                  TEST CL,0x40
006F76E6  74 03                     JZ 0x006f76eb
006F76E8  43                        INC EBX
006F76E9  EB 09                     JMP 0x006f76f4
LAB_006f76eb:
006F76EB  03 D8                     ADD EBX,EAX
006F76ED  EB 05                     JMP 0x006f76f4
LAB_006f76ef:
006F76EF  83 E1 7F                  AND ECX,0x7f
006F76F2  8B C1                     MOV EAX,ECX
LAB_006f76f4:
006F76F4  3B C2                     CMP EAX,EDX
006F76F6  7C DA                     JL 0x006f76d2
LAB_006f76f8:
006F76F8  2B C2                     SUB EAX,EDX
LAB_006f76fa:
006F76FA  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006F76FD  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006F7700  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006F7703  2B CA                     SUB ECX,EDX
006F7705  2B CF                     SUB ECX,EDI
006F7707  3B F1                     CMP ESI,ECX
006F7709  7D 42                     JGE 0x006f774d
LAB_006f770b:
006F770B  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006F770E  2B CE                     SUB ECX,ESI
006F7710  81 E2 C0 00 00 00         AND EDX,0xc0
006F7716  80 FA 80                  CMP DL,0x80
006F7719  75 03                     JNZ 0x006f771e
006F771B  01 75 1C                  ADD dword ptr [EBP + 0x1c],ESI
LAB_006f771e:
006F771E  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F7721  33 D2                     XOR EDX,EDX
006F7723  8B FE                     MOV EDI,ESI
006F7725  8A 16                     MOV DL,byte ptr [ESI]
006F7727  89 55 30                  MOV dword ptr [EBP + 0x30],EDX
006F772A  80 E2 80                  AND DL,0x80
006F772D  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006F7730  47                        INC EDI
006F7731  84 D2                     TEST DL,DL
006F7733  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006F7736  74 11                     JZ 0x006f7749
006F7738  8A 55 30                  MOV DL,byte ptr [EBP + 0x30]
006F773B  83 E6 3F                  AND ESI,0x3f
006F773E  F6 C2 40                  TEST DL,0x40
006F7741  74 06                     JZ 0x006f7749
006F7743  8B D7                     MOV EDX,EDI
006F7745  42                        INC EDX
006F7746  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006f7749:
006F7749  3B F1                     CMP ESI,ECX
006F774B  7C BE                     JL 0x006f770b
LAB_006f774d:
006F774D  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006F7750  81 E2 C0 00 00 00         AND EDX,0xc0
006F7756  80 FA 80                  CMP DL,0x80
006F7759  75 03                     JNZ 0x006f775e
006F775B  01 4D 1C                  ADD dword ptr [EBP + 0x1c],ECX
LAB_006f775e:
006F775E  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F7761  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006F7764  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
006F7767  2B D6                     SUB EDX,ESI
006F7769  2B D7                     SUB EDX,EDI
006F776B  3B C2                     CMP EAX,EDX
006F776D  7D 26                     JGE 0x006f7795
LAB_006f776f:
006F776F  33 C9                     XOR ECX,ECX
006F7771  2B D0                     SUB EDX,EAX
006F7773  8A 0B                     MOV CL,byte ptr [EBX]
006F7775  43                        INC EBX
006F7776  F6 C1 80                  TEST CL,0x80
006F7779  74 11                     JZ 0x006f778c
006F777B  8B C1                     MOV EAX,ECX
006F777D  83 E0 3F                  AND EAX,0x3f
006F7780  F6 C1 40                  TEST CL,0x40
006F7783  74 03                     JZ 0x006f7788
006F7785  43                        INC EBX
006F7786  EB 09                     JMP 0x006f7791
LAB_006f7788:
006F7788  03 D8                     ADD EBX,EAX
006F778A  EB 05                     JMP 0x006f7791
LAB_006f778c:
006F778C  83 E1 7F                  AND ECX,0x7f
006F778F  8B C1                     MOV EAX,ECX
LAB_006f7791:
006F7791  3B C2                     CMP EAX,EDX
006F7793  7C DA                     JL 0x006f776f
LAB_006f7795:
006F7795  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F7798  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F779B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F779E  8D 04 36                  LEA EAX,[ESI + ESI*0x1]
006F77A1  2B D6                     SUB EDX,ESI
006F77A3  2B C8                     SUB ECX,EAX
006F77A5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F77A8  03 FA                     ADD EDI,EDX
006F77AA  03 C1                     ADD EAX,ECX
006F77AC  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F77AF  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F77B2  EB 16                     JMP 0x006f77ca
LAB_006f77b4:
006F77B4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F77B7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F77BA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F77BD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F77C0  03 F2                     ADD ESI,EDX
006F77C2  03 C8                     ADD ECX,EAX
006F77C4  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006F77C7  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006f77ca:
006F77CA  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F77CD  48                        DEC EAX
006F77CE  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F77D1  0F 89 41 FB FF FF         JNS 0x006f7318
006F77D7  5F                        POP EDI
006F77D8  5E                        POP ESI
006F77D9  5B                        POP EBX
LAB_006f77da:
006F77DA  8B E5                     MOV ESP,EBP
006F77DC  5D                        POP EBP
006F77DD  C2 34 00                  RET 0x34
