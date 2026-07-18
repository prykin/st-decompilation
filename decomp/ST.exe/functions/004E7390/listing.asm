FUN_004e7390:
004E7390  55                        PUSH EBP
004E7391  8B EC                     MOV EBP,ESP
004E7393  83 EC 2C                  SUB ESP,0x2c
004E7396  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E7399  53                        PUSH EBX
004E739A  56                        PUSH ESI
004E739B  57                        PUSH EDI
004E739C  85 C0                     TEST EAX,EAX
004E739E  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
004E73A1  0F 8C C0 01 00 00         JL 0x004e7567
004E73A7  83 F8 08                  CMP EAX,0x8
004E73AA  0F 8D B7 01 00 00         JGE 0x004e7567
004E73B0  50                        PUSH EAX
004E73B1  E8 01 D6 F1 FF            CALL 0x004049b7
004E73B6  25 FF 00 00 00            AND EAX,0xff
004E73BB  B9 C3 00 00 00            MOV ECX,0xc3
004E73C0  48                        DEC EAX
004E73C1  BF 20 10 80 00            MOV EDI,0x801020
004E73C6  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
004E73C9  33 C0                     XOR EAX,EAX
004E73CB  F3 AB                     STOSD.REP ES:EDI
004E73CD  B9 C3 00 00 00            MOV ECX,0xc3
004E73D2  BF D0 0B 80 00            MOV EDI,0x800bd0
004E73D7  F3 AB                     STOSD.REP ES:EDI
004E73D9  8A 4D 10                  MOV CL,byte ptr [EBP + 0x10]
004E73DC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E73DF  88 0D D4 0B 80 00         MOV byte ptr [0x00800bd4],CL
004E73E5  33 DB                     XOR EBX,EBX
004E73E7  33 C9                     XOR ECX,ECX
004E73E9  A3 D0 0B 80 00            MOV [0x00800bd0],EAX
004E73EE  BE 01 00 00 00            MOV ESI,0x1
004E73F3  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
004E73F6  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_004e73f9:
004E73F9  85 F6                     TEST ESI,ESI
004E73FB  74 37                     JZ 0x004e7434
004E73FD  8D 04 33                  LEA EAX,[EBX + ESI*0x1]
004E7400  3D 9B 00 00 00            CMP EAX,0x9b
004E7405  0F 8D 5C 01 00 00         JGE 0x004e7567
004E740B  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004E740E  BE D0 0B 80 00            MOV ESI,0x800bd0
004E7413  8B D1                     MOV EDX,ECX
004E7415  8D BC 9B 20 10 80 00      LEA EDI,[EBX + EBX*0x4 + 0x801020]
004E741C  C1 E9 02                  SHR ECX,0x2
004E741F  F3 A5                     MOVSD.REP ES:EDI,ESI
004E7421  8B CA                     MOV ECX,EDX
004E7423  83 E1 03                  AND ECX,0x3
004E7426  F3 A4                     MOVSB.REP ES:EDI,ESI
004E7428  8B CB                     MOV ECX,EBX
004E742A  8B D8                     MOV EBX,EAX
004E742C  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004E742F  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
004E7432  33 F6                     XOR ESI,ESI
LAB_004e7434:
004E7434  33 D2                     XOR EDX,EDX
004E7436  3B CB                     CMP ECX,EBX
004E7438  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004E743B  0F 8D DE 00 00 00         JGE 0x004e751f
004E7441  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004E7444  8D BC 89 24 10 80 00      LEA EDI,[ECX + ECX*0x4 + 0x801024]
004E744B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004E744E  8B 04 85 C8 0D 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7c0dc8]
004E7455  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_004e7458:
004E7458  83 38 00                  CMP dword ptr [EAX],0x0
004E745B  0F 84 9B 00 00 00         JZ 0x004e74fc
004E7461  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E7464  8D 78 05                  LEA EDI,[EAX + 0x5]
004E7467  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004E746A  8B 49 FC                  MOV ECX,dword ptr [ECX + -0x4]
004E746D  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
004E7470  8B C8                     MOV ECX,EAX
004E7472  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_004e7475:
004E7475  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
004E7478  8B 18                     MOV EBX,dword ptr [EAX]
004E747A  3B DF                     CMP EBX,EDI
004E747C  75 5B                     JNZ 0x004e74d9
004E747E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004E7481  8A 41 04                  MOV AL,byte ptr [ECX + 0x4]
004E7484  83 C1 05                  ADD ECX,0x5
004E7487  3A 07                     CMP AL,byte ptr [EDI]
004E7489  75 4E                     JNZ 0x004e74d9
004E748B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004E748E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004E7495  83 38 00                  CMP dword ptr [EAX],0x0
004E7498  74 3F                     JZ 0x004e74d9
004E749A  8D 84 B6 D0 0B 80 00      LEA EAX,[ESI + ESI*0x4 + 0x800bd0]
LAB_004e74a1:
004E74A1  83 7D F8 04               CMP dword ptr [EBP + -0x8],0x4
004E74A5  7D 32                     JGE 0x004e74d9
004E74A7  8B D1                     MOV EDX,ECX
004E74A9  8B F8                     MOV EDI,EAX
004E74AB  83 C0 05                  ADD EAX,0x5
004E74AE  46                        INC ESI
004E74AF  8B 1A                     MOV EBX,dword ptr [EDX]
004E74B1  3D D7 0E 80 00            CMP EAX,0x800ed7
004E74B6  89 1F                     MOV dword ptr [EDI],EBX
004E74B8  8A 52 04                  MOV DL,byte ptr [EDX + 0x4]
004E74BB  88 57 04                  MOV byte ptr [EDI + 0x4],DL
004E74BE  BA 01 00 00 00            MOV EDX,0x1
004E74C3  0F 8D 9E 00 00 00         JGE 0x004e7567
004E74C9  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004E74CC  83 C1 05                  ADD ECX,0x5
004E74CF  47                        INC EDI
004E74D0  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004E74D3  8B 39                     MOV EDI,dword ptr [ECX]
004E74D5  85 FF                     TEST EDI,EDI
004E74D7  75 C8                     JNZ 0x004e74a1
LAB_004e74d9:
004E74D9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004E74DC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004E74DF  83 C1 19                  ADD ECX,0x19
004E74E2  83 C0 19                  ADD EAX,0x19
004E74E5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004E74E8  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004E74EB  8B 39                     MOV EDI,dword ptr [ECX]
004E74ED  8B C1                     MOV EAX,ECX
004E74EF  85 FF                     TEST EDI,EDI
004E74F1  75 82                     JNZ 0x004e7475
004E74F3  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004E74F6  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004E74F9  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_004e74fc:
004E74FC  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004E74FF  47                        INC EDI
004E7500  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
004E7503  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004E7506  83 C7 05                  ADD EDI,0x5
004E7509  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004E750C  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004E750F  3B FB                     CMP EDI,EBX
004E7511  0F 8C 41 FF FF FF         JL 0x004e7458
004E7517  85 D2                     TEST EDX,EDX
004E7519  0F 85 DA FE FF FF         JNZ 0x004e73f9
LAB_004e751f:
004E751F  8D 43 FF                  LEA EAX,[EBX + -0x1]
004E7522  85 C0                     TEST EAX,EAX
004E7524  7C 41                     JL 0x004e7567
004E7526  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004E7529  8D B4 80 20 10 80 00      LEA ESI,[EAX + EAX*0x4 + 0x801020]
004E7530  8D 78 01                  LEA EDI,[EAX + 0x1]
LAB_004e7533:
004E7533  85 DB                     TEST EBX,EBX
004E7535  75 15                     JNZ 0x004e754c
004E7537  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E753A  8B 0E                     MOV ECX,dword ptr [ESI]
004E753C  3B C8                     CMP ECX,EAX
004E753E  75 0C                     JNZ 0x004e754c
004E7540  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E7543  33 C9                     XOR ECX,ECX
004E7545  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
004E7548  3B C8                     CMP ECX,EAX
004E754A  74 15                     JZ 0x004e7561
LAB_004e754c:
004E754C  8B 06                     MOV EAX,dword ptr [ESI]
004E754E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E7551  33 D2                     XOR EDX,EDX
004E7553  8A 56 04                  MOV DL,byte ptr [ESI + 0x4]
004E7556  52                        PUSH EDX
004E7557  50                        PUSH EAX
004E7558  51                        PUSH ECX
004E7559  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
004E755C  E8 CF AB F1 FF            CALL 0x00402130
LAB_004e7561:
004E7561  83 EE 05                  SUB ESI,0x5
004E7564  4F                        DEC EDI
004E7565  75 CC                     JNZ 0x004e7533
LAB_004e7567:
004E7567  5F                        POP EDI
004E7568  5E                        POP ESI
004E7569  5B                        POP EBX
004E756A  8B E5                     MOV ESP,EBP
004E756C  5D                        POP EBP
004E756D  C2 10 00                  RET 0x10
