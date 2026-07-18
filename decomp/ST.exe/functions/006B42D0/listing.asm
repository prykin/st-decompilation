FUN_006b42d0:
006B42D0  55                        PUSH EBP
006B42D1  8B EC                     MOV EBP,ESP
006B42D3  6A FF                     PUSH -0x1
006B42D5  68 C0 D8 79 00            PUSH 0x79d8c0
006B42DA  68 64 D9 72 00            PUSH 0x72d964
006B42DF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006B42E5  50                        PUSH EAX
006B42E6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006B42ED  83 EC 38                  SUB ESP,0x38
006B42F0  53                        PUSH EBX
006B42F1  56                        PUSH ESI
006B42F2  57                        PUSH EDI
006B42F3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B42F6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B42F9  85 C0                     TEST EAX,EAX
006B42FB  0F 8E 1D 03 00 00         JLE 0x006b461e
006B4301  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006B4304  85 DB                     TEST EBX,EBX
006B4306  0F 8E 12 03 00 00         JLE 0x006b461e
006B430C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B430F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006B4312  25 00 11 00 00            AND EAX,0x1100
006B4317  3D 00 01 00 00            CMP EAX,0x100
006B431C  0F 84 FC 02 00 00         JZ 0x006b461e
006B4322  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
006B4329  B8 10 00 00 00            MOV EAX,0x10
006B432E  39 46 20                  CMP dword ptr [ESI + 0x20],EAX
006B4331  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006B4334  7F 07                     JG 0x006b433d
006B4336  66 83 7F 0E 08            CMP word ptr [EDI + 0xe],0x8
006B433B  74 18                     JZ 0x006b4355
LAB_006b433d:
006B433D  66 39 47 0E               CMP word ptr [EDI + 0xe],AX
006B4341  0F 85 66 02 00 00         JNZ 0x006b45ad
006B4347  8B 86 DC 04 00 00         MOV EAX,dword ptr [ESI + 0x4dc]
006B434D  85 C0                     TEST EAX,EAX
006B434F  0F 84 58 02 00 00         JZ 0x006b45ad
LAB_006b4355:
006B4355  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B4358  85 C0                     TEST EAX,EAX
006B435A  75 09                     JNZ 0x006b4365
006B435C  57                        PUSH EDI
006B435D  E8 3E 0C 00 00            CALL 0x006b4fa0
006B4362  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006b4365:
006B4365  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B436C  74 0D                     JZ 0x006b437b
006B436E  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006B4374  51                        PUSH ECX
006B4375  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b437b:
006B437B  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006B437E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B4381  03 D7                     ADD EDX,EDI
006B4383  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006B4386  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006B4389  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B438C  03 C3                     ADD EAX,EBX
006B438E  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006B4391  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B4394  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006B4397  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006B439A  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006B439D  8D 86 84 04 00 00         LEA EAX,[ESI + 0x484]
006B43A3  50                        PUSH EAX
006B43A4  8D 4D D0                  LEA ECX,[EBP + -0x30]
006B43A7  51                        PUSH ECX
006B43A8  8D 55 D0                  LEA EDX,[EBP + -0x30]
006B43AB  52                        PUSH EDX
006B43AC  E8 FF BA 01 00            CALL 0x006cfeb0
006B43B1  83 C4 0C                  ADD ESP,0xc
006B43B4  85 C0                     TEST EAX,EAX
006B43B6  0F 84 D9 01 00 00         JZ 0x006b4595
006B43BC  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006B43BF  2B 46 10                  SUB EAX,dword ptr [ESI + 0x10]
006B43C2  2B C7                     SUB EAX,EDI
006B43C4  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006B43C7  03 F8                     ADD EDI,EAX
006B43C9  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006B43CC  2B 4E 14                  SUB ECX,dword ptr [ESI + 0x14]
006B43CF  2B CB                     SUB ECX,EBX
006B43D1  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006B43D4  03 D9                     ADD EBX,ECX
006B43D6  56                        PUSH ESI
006B43D7  E8 D4 74 00 00            CALL 0x006bb8b0
006B43DC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006B43DF  85 C0                     TEST EAX,EAX
006B43E1  0F 85 99 01 00 00         JNZ 0x006b4580
006B43E7  B9 08 00 00 00            MOV ECX,0x8
006B43EC  39 4E 20                  CMP dword ptr [ESI + 0x20],ECX
006B43EF  0F 85 AD 00 00 00         JNZ 0x006b44a2
006B43F5  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B43F8  66 39 48 0E               CMP word ptr [EAX + 0xe],CX
006B43FC  75 4E                     JNZ 0x006b444c
006B43FE  8B 96 78 04 00 00         MOV EDX,dword ptr [ESI + 0x478]
006B4404  89 56 50                  MOV dword ptr [ESI + 0x50],EDX
006B4407  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006B440E  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006B4411  51                        PUSH ECX
006B4412  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006B4415  52                        PUSH EDX
006B4416  53                        PUSH EBX
006B4417  57                        PUSH EDI
006B4418  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B441B  51                        PUSH ECX
006B441C  50                        PUSH EAX
006B441D  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006B4420  52                        PUSH EDX
006B4421  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006B4424  50                        PUSH EAX
006B4425  8B 8E 74 04 00 00         MOV ECX,dword ptr [ESI + 0x474]
006B442B  51                        PUSH ECX
006B442C  8D 56 4C                  LEA EDX,[ESI + 0x4c]
006B442F  52                        PUSH EDX
006B4430  E8 BB 11 00 00            CALL 0x006b55f0
006B4435  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006B443C  E9 36 01 00 00            JMP 0x006b4577
LAB_006b444c:
006B444C  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006B4453  8B 8E E0 04 00 00         MOV ECX,dword ptr [ESI + 0x4e0]
006B4459  51                        PUSH ECX
006B445A  8B 96 DC 04 00 00         MOV EDX,dword ptr [ESI + 0x4dc]
006B4460  52                        PUSH EDX
006B4461  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006B4464  51                        PUSH ECX
006B4465  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006B4468  52                        PUSH EDX
006B4469  53                        PUSH EBX
006B446A  57                        PUSH EDI
006B446B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B446E  51                        PUSH ECX
006B446F  50                        PUSH EAX
006B4470  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006B4473  52                        PUSH EDX
006B4474  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006B4477  50                        PUSH EAX
006B4478  8B 8E 78 04 00 00         MOV ECX,dword ptr [ESI + 0x478]
006B447E  51                        PUSH ECX
006B447F  8B 96 74 04 00 00         MOV EDX,dword ptr [ESI + 0x474]
006B4485  52                        PUSH EDX
006B4486  E8 95 C3 01 00            CALL 0x006d0820
006B448B  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006B4492  E9 E0 00 00 00            JMP 0x006b4577
LAB_006b44a2:
006B44A2  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006B44A8  99                        CDQ
006B44A9  2B C2                     SUB EAX,EDX
006B44AB  D1 F8                     SAR EAX,0x1
006B44AD  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
006B44B0  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
006B44B3  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
006B44B6  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006B44B9  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006B44BC  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006B44BF  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006B44C2  8D 55 CC                  LEA EDX,[EBP + -0x34]
006B44C5  52                        PUSH EDX
006B44C6  8D 45 BC                  LEA EAX,[EBP + -0x44]
006B44C9  50                        PUSH EAX
006B44CA  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006B44CD  57                        PUSH EDI
006B44CE  8D 4D E0                  LEA ECX,[EBP + -0x20]
006B44D1  51                        PUSH ECX
006B44D2  8D 55 D0                  LEA EDX,[EBP + -0x30]
006B44D5  52                        PUSH EDX
006B44D6  8D 46 4C                  LEA EAX,[ESI + 0x4c]
006B44D9  50                        PUSH EAX
006B44DA  E8 A1 C1 01 00            CALL 0x006d0680
006B44DF  85 C0                     TEST EAX,EAX
006B44E1  0F 84 90 00 00 00         JZ 0x006b4577
006B44E7  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006B44EA  85 C0                     TEST EAX,EAX
006B44EC  7D 17                     JGE 0x006b4505
006B44EE  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006B44F1  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006B44F4  8D 4C 0A FF               LEA ECX,[EDX + ECX*0x1 + -0x1]
006B44F8  0F AF C8                  IMUL ECX,EAX
006B44FB  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006B44FE  2B D1                     SUB EDX,ECX
006B4500  01 55 18                  ADD dword ptr [EBP + 0x18],EDX
006B4503  EB 12                     JMP 0x006b4517
LAB_006b4505:
006B4505  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006B4508  2B 4D C8                  SUB ECX,dword ptr [EBP + -0x38]
006B450B  2B 4D C0                  SUB ECX,dword ptr [EBP + -0x40]
006B450E  0F AF C8                  IMUL ECX,EAX
006B4511  03 4D BC                  ADD ECX,dword ptr [EBP + -0x44]
006B4514  01 4D 18                  ADD dword ptr [EBP + 0x18],ECX
LAB_006b4517:
006B4517  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
006B451E  8B 96 C0 04 00 00         MOV EDX,dword ptr [ESI + 0x4c0]
006B4524  52                        PUSH EDX
006B4525  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006B4528  51                        PUSH ECX
006B4529  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006B452C  52                        PUSH EDX
006B452D  50                        PUSH EAX
006B452E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B4531  50                        PUSH EAX
006B4532  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006B4535  50                        PUSH EAX
006B4536  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006B4539  8D 4C 11 FF               LEA ECX,[ECX + EDX*0x1 + -0x1]
006B453D  0F AF C8                  IMUL ECX,EAX
006B4540  8B 96 74 04 00 00         MOV EDX,dword ptr [ESI + 0x474]
006B4546  2B D1                     SUB EDX,ECX
006B4548  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006B454B  8D 0C 42                  LEA ECX,[EDX + EAX*0x2]
006B454E  51                        PUSH ECX
006B454F  E8 5C C0 01 00            CALL 0x006d05b0
006B4554  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006B455B  EB 1A                     JMP 0x006b4577
LAB_006b4577:
006B4577  56                        PUSH ESI
006B4578  E8 03 74 00 00            CALL 0x006bb980
006B457D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_006b4580:
006B4580  3D A0 00 76 88            CMP EAX,0x887600a0
006B4585  74 07                     JZ 0x006b458e
006B4587  3D AE 01 76 88            CMP EAX,0x887601ae
006B458C  75 07                     JNZ 0x006b4595
LAB_006b458e:
006B458E  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
LAB_006b4595:
006B4595  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B459C  74 4D                     JZ 0x006b45eb
006B459E  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B45A4  56                        PUSH ESI
006B45A5  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006B45AB  EB 3E                     JMP 0x006b45eb
LAB_006b45ad:
006B45AD  8D 55 B8                  LEA EDX,[EBP + -0x48]
006B45B0  52                        PUSH EDX
006B45B1  56                        PUSH ESI
006B45B2  E8 B9 A1 01 00            CALL 0x006ce770
006B45B7  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006B45BA  85 C0                     TEST EAX,EAX
006B45BC  75 2D                     JNZ 0x006b45eb
006B45BE  53                        PUSH EBX
006B45BF  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B45C2  50                        PUSH EAX
006B45C3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B45C6  51                        PUSH ECX
006B45C7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B45CA  52                        PUSH EDX
006B45CB  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B45CE  50                        PUSH EAX
006B45CF  57                        PUSH EDI
006B45D0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B45D3  51                        PUSH ECX
006B45D4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B45D7  52                        PUSH EDX
006B45D8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006B45DB  50                        PUSH EAX
006B45DC  E8 FF BD 01 00            CALL 0x006d03e0
006B45E1  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006B45E4  51                        PUSH ECX
006B45E5  56                        PUSH ESI
006B45E6  E8 D5 A2 01 00            CALL 0x006ce8c0
LAB_006b45eb:
006B45EB  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
006B45EE  85 F6                     TEST ESI,ESI
006B45F0  74 2C                     JZ 0x006b461e
006B45F2  68 84 00 00 00            PUSH 0x84
006B45F7  68 F0 DA 7E 00            PUSH 0x7edaf0
006B45FC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B4602  52                        PUSH EDX
006B4603  56                        PUSH ESI
006B4604  E8 37 18 FF FF            CALL 0x006a5e40
006B4609  8B C6                     MOV EAX,ESI
006B460B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B460E  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B4615  5F                        POP EDI
006B4616  5E                        POP ESI
006B4617  5B                        POP EBX
006B4618  8B E5                     MOV ESP,EBP
006B461A  5D                        POP EBP
006B461B  C2 24 00                  RET 0x24
LAB_006b461e:
006B461E  33 C0                     XOR EAX,EAX
006B4620  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B4623  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B462A  5F                        POP EDI
006B462B  5E                        POP ESI
006B462C  5B                        POP EBX
006B462D  8B E5                     MOV ESP,EBP
006B462F  5D                        POP EBP
006B4630  C2 24 00                  RET 0x24
