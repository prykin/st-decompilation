FUN_006b4680:
006B4680  55                        PUSH EBP
006B4681  8B EC                     MOV EBP,ESP
006B4683  83 EC 28                  SUB ESP,0x28
006B4686  56                        PUSH ESI
006B4687  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B468A  57                        PUSH EDI
006B468B  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006B468E  25 00 11 00 00            AND EAX,0x1100
006B4693  3D 00 01 00 00            CMP EAX,0x100
006B4698  0F 84 F5 01 00 00         JZ 0x006b4893
006B469E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B46A1  33 FF                     XOR EDI,EDI
006B46A3  3B C7                     CMP EAX,EDI
006B46A5  0F 8E E8 01 00 00         JLE 0x006b4893
006B46AB  39 7D 28                  CMP dword ptr [EBP + 0x28],EDI
006B46AE  0F 8E DF 01 00 00         JLE 0x006b4893
006B46B4  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006B46B7  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B46BA  81 E1 FF FF FF 00         AND ECX,0xffffff
006B46C0  A9 00 00 00 04            TEST EAX,0x4000000
006B46C5  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
006B46C8  74 0D                     JZ 0x006b46d7
006B46CA  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006B46D0  51                        PUSH ECX
006B46D1  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b46d7:
006B46D7  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006B46DA  53                        PUSH EBX
006B46DB  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006B46DE  83 F8 10                  CMP EAX,0x10
006B46E1  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006B46E4  7F 5D                     JG 0x006b4743
006B46E6  66 83 7B 0E 08            CMP word ptr [EBX + 0xe],0x8
006B46EB  75 56                     JNZ 0x006b4743
006B46ED  56                        PUSH ESI
006B46EE  E8 BD 71 00 00            CALL 0x006bb8b0
006B46F3  8B F8                     MOV EDI,EAX
006B46F5  85 FF                     TEST EDI,EDI
006B46F7  75 2F                     JNZ 0x006b4728
006B46F9  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006B46FC  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006B46FF  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B4702  52                        PUSH EDX
006B4703  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B4706  50                        PUSH EAX
006B4707  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B470A  51                        PUSH ECX
006B470B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B470E  52                        PUSH EDX
006B470F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B4712  50                        PUSH EAX
006B4713  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B4716  51                        PUSH ECX
006B4717  53                        PUSH EBX
006B4718  52                        PUSH EDX
006B4719  50                        PUSH EAX
006B471A  56                        PUSH ESI
006B471B  E8 D0 C5 01 00            CALL 0x006d0cf0
006B4720  56                        PUSH ESI
006B4721  8B F8                     MOV EDI,EAX
006B4723  E8 58 72 00 00            CALL 0x006bb980
LAB_006b4728:
006B4728  81 FF A0 00 76 88         CMP EDI,0x887600a0
006B472E  74 0C                     JZ 0x006b473c
006B4730  81 FF AE 01 76 88         CMP EDI,0x887601ae
006B4736  0F 85 11 01 00 00         JNZ 0x006b484d
LAB_006b473c:
006B473C  33 FF                     XOR EDI,EDI
006B473E  E9 0A 01 00 00            JMP 0x006b484d
LAB_006b4743:
006B4743  39 7D 18                  CMP dword ptr [EBP + 0x18],EDI
006B4746  75 09                     JNZ 0x006b4751
006B4748  53                        PUSH EBX
006B4749  E8 52 08 00 00            CALL 0x006b4fa0
006B474E  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006b4751:
006B4751  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006B4754  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006B4757  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006B475A  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B475D  03 D8                     ADD EBX,EAX
006B475F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B4762  03 C2                     ADD EAX,EDX
006B4764  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006B4767  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006B476A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006B476D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006B4770  8D 86 84 04 00 00         LEA EAX,[ESI + 0x484]
006B4776  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006B4779  8D 4D E8                  LEA ECX,[EBP + -0x18]
006B477C  50                        PUSH EAX
006B477D  8D 55 E8                  LEA EDX,[EBP + -0x18]
006B4780  51                        PUSH ECX
006B4781  52                        PUSH EDX
006B4782  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006B4785  E8 26 B7 01 00            CALL 0x006cfeb0
006B478A  83 C4 0C                  ADD ESP,0xc
006B478D  85 C0                     TEST EAX,EAX
006B478F  0F 84 B8 00 00 00         JZ 0x006b484d
006B4795  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006B4798  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B479B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006B479E  2B CB                     SUB ECX,EBX
006B47A0  03 CA                     ADD ECX,EDX
006B47A2  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006B47A5  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006B47A8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B47AB  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
006B47AE  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006B47B1  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006B47B4  2B D1                     SUB EDX,ECX
006B47B6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006B47B9  03 D0                     ADD EDX,EAX
006B47BB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006B47BE  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006B47C1  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B47C4  8D 55 FC                  LEA EDX,[EBP + -0x4]
006B47C7  8D 45 D8                  LEA EAX,[EBP + -0x28]
006B47CA  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006B47CD  52                        PUSH EDX
006B47CE  50                        PUSH EAX
006B47CF  8D 4D F8                  LEA ECX,[EBP + -0x8]
006B47D2  53                        PUSH EBX
006B47D3  8D 55 E8                  LEA EDX,[EBP + -0x18]
006B47D6  51                        PUSH ECX
006B47D7  8D 46 4C                  LEA EAX,[ESI + 0x4c]
006B47DA  52                        PUSH EDX
006B47DB  50                        PUSH EAX
006B47DC  E8 9F BE 01 00            CALL 0x006d0680
006B47E1  85 C0                     TEST EAX,EAX
006B47E3  74 68                     JZ 0x006b484d
006B47E5  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006B47E8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006B47EB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006B47EE  6A 00                     PUSH 0x0
006B47F0  51                        PUSH ECX
006B47F1  52                        PUSH EDX
006B47F2  8D 4D 08                  LEA ECX,[EBP + 0x8]
006B47F5  50                        PUSH EAX
006B47F6  51                        PUSH ECX
006B47F7  56                        PUSH ESI
006B47F8  E8 C3 6E 00 00            CALL 0x006bb6c0
006B47FD  8B F8                     MOV EDI,EAX
006B47FF  85 FF                     TEST EDI,EDI
006B4801  75 4A                     JNZ 0x006b484d
006B4803  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006B4806  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006B4809  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006B480C  52                        PUSH EDX
006B480D  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006B4810  50                        PUSH EAX
006B4811  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B4814  51                        PUSH ECX
006B4815  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B4818  52                        PUSH EDX
006B4819  50                        PUSH EAX
006B481A  53                        PUSH EBX
006B481B  57                        PUSH EDI
006B481C  57                        PUSH EDI
006B481D  51                        PUSH ECX
006B481E  56                        PUSH ESI
006B481F  E8 FC C1 01 00            CALL 0x006d0a20
006B4824  8B F8                     MOV EDI,EAX
006B4826  85 FF                     TEST EDI,EDI
006B4828  75 23                     JNZ 0x006b484d
006B482A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006B482D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B4830  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B4833  68 00 80 00 00            PUSH 0x8000
006B4838  50                        PUSH EAX
006B4839  51                        PUSH ECX
006B483A  52                        PUSH EDX
006B483B  50                        PUSH EAX
006B483C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006B483F  51                        PUSH ECX
006B4840  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006B4843  50                        PUSH EAX
006B4844  51                        PUSH ECX
006B4845  56                        PUSH ESI
006B4846  E8 85 71 00 00            CALL 0x006bb9d0
006B484B  8B F8                     MOV EDI,EAX
LAB_006b484d:
006B484D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B4850  5B                        POP EBX
006B4851  A9 00 00 00 04            TEST EAX,0x4000000
006B4856  74 0D                     JZ 0x006b4865
006B4858  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B485E  56                        PUSH ESI
006B485F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b4865:
006B4865  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B4868  85 C0                     TEST EAX,EAX
006B486A  74 06                     JZ 0x006b4872
006B486C  8B 10                     MOV EDX,dword ptr [EAX]
006B486E  50                        PUSH EAX
006B486F  FF 52 08                  CALL dword ptr [EDX + 0x8]
LAB_006b4872:
006B4872  85 FF                     TEST EDI,EDI
006B4874  74 1D                     JZ 0x006b4893
006B4876  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B487B  6A 4C                     PUSH 0x4c
006B487D  68 08 DB 7E 00            PUSH 0x7edb08
006B4882  50                        PUSH EAX
006B4883  57                        PUSH EDI
006B4884  E8 B7 15 FF FF            CALL 0x006a5e40
006B4889  8B C7                     MOV EAX,EDI
006B488B  5F                        POP EDI
006B488C  5E                        POP ESI
006B488D  8B E5                     MOV ESP,EBP
006B488F  5D                        POP EBP
006B4890  C2 28 00                  RET 0x28
LAB_006b4893:
006B4893  5F                        POP EDI
006B4894  33 C0                     XOR EAX,EAX
006B4896  5E                        POP ESI
006B4897  8B E5                     MOV ESP,EBP
006B4899  5D                        POP EBP
006B489A  C2 28 00                  RET 0x28
