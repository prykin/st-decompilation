FUN_006c44e0:
006C44E0  55                        PUSH EBP
006C44E1  8B EC                     MOV EBP,ESP
006C44E3  83 EC 7C                  SUB ESP,0x7c
006C44E6  53                        PUSH EBX
006C44E7  56                        PUSH ESI
006C44E8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C44EB  57                        PUSH EDI
006C44EC  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C44F3  74 0D                     JZ 0x006c4502
006C44F5  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006C44FB  50                        PUSH EAX
006C44FC  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006c4502:
006C4502  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006C4505  8D 55 84                  LEA EDX,[EBP + -0x7c]
006C4508  C7 45 84 7C 00 00 00      MOV dword ptr [EBP + -0x7c],0x7c
006C450F  C7 45 88 06 10 00 00      MOV dword ptr [EBP + -0x78],0x1006
006C4516  8B 07                     MOV EAX,dword ptr [EDI]
006C4518  C7 45 CC 20 00 00 00      MOV dword ptr [EBP + -0x34],0x20
006C451F  52                        PUSH EDX
006C4520  50                        PUSH EAX
006C4521  8B 08                     MOV ECX,dword ptr [EAX]
006C4523  FF 51 58                  CALL dword ptr [ECX + 0x58]
006C4526  8B D8                     MOV EBX,EAX
006C4528  85 DB                     TEST EBX,EBX
006C452A  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006C452D  0F 85 B8 00 00 00         JNZ 0x006c45eb
006C4533  8B 07                     MOV EAX,dword ptr [EDI]
006C4535  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
006C4538  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006C453B  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006C453E  89 4E 10                  MOV dword ptr [ESI + 0x10],ECX
006C4541  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
006C4544  83 F8 10                  CMP EAX,0x10
006C4547  89 56 14                  MOV dword ptr [ESI + 0x14],EDX
006C454A  75 0C                     JNZ 0x006c4558
006C454C  8D 86 C0 04 00 00         LEA EAX,[ESI + 0x4c0]
006C4552  50                        PUSH EAX
006C4553  E8 08 6B FE FF            CALL 0x006ab060
LAB_006c4558:
006C4558  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006C455B  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006C455E  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
006C4561  89 8E C0 04 00 00         MOV dword ptr [ESI + 0x4c0],ECX
006C4567  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006C456A  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
006C456D  83 F9 10                  CMP ECX,0x10
006C4570  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006C4573  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
006C4576  75 60                     JNZ 0x006c45d8
006C4578  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006C457B  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006C457E  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006C4581  33 FF                     XOR EDI,EDI
006C4583  F6 C4 80                  TEST AH,0x80
006C4586  89 86 C4 04 00 00         MOV dword ptr [ESI + 0x4c4],EAX
006C458C  89 8E C8 04 00 00         MOV dword ptr [ESI + 0x4c8],ECX
006C4592  89 96 CC 04 00 00         MOV dword ptr [ESI + 0x4cc],EDX
006C4598  75 08                     JNZ 0x006c45a2
LAB_006c459a:
006C459A  D1 E0                     SHL EAX,0x1
006C459C  47                        INC EDI
006C459D  F6 C4 80                  TEST AH,0x80
006C45A0  74 F8                     JZ 0x006c459a
LAB_006c45a2:
006C45A2  33 DB                     XOR EBX,EBX
006C45A4  F6 C5 80                  TEST CH,0x80
006C45A7  75 08                     JNZ 0x006c45b1
LAB_006c45a9:
006C45A9  D1 E1                     SHL ECX,0x1
006C45AB  43                        INC EBX
006C45AC  F6 C5 80                  TEST CH,0x80
006C45AF  74 F8                     JZ 0x006c45a9
LAB_006c45b1:
006C45B1  33 C0                     XOR EAX,EAX
006C45B3  F6 C6 80                  TEST DH,0x80
006C45B6  75 08                     JNZ 0x006c45c0
LAB_006c45b8:
006C45B8  D1 E2                     SHL EDX,0x1
006C45BA  40                        INC EAX
006C45BB  F6 C6 80                  TEST DH,0x80
006C45BE  74 F8                     JZ 0x006c45b8
LAB_006c45c0:
006C45C0  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
006C45C6  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C45C9  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
006C45CF  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
006C45D2  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
LAB_006c45d8:
006C45D8  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006C45DB  66 8B 56 20               MOV DX,word ptr [ESI + 0x20]
006C45DF  F7 D8                     NEG EAX
006C45E1  89 4E 50                  MOV dword ptr [ESI + 0x50],ECX
006C45E4  89 46 54                  MOV dword ptr [ESI + 0x54],EAX
006C45E7  66 89 56 5A               MOV word ptr [ESI + 0x5a],DX
LAB_006c45eb:
006C45EB  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C45F2  74 0D                     JZ 0x006c4601
006C45F4  81 C6 F0 04 00 00         ADD ESI,0x4f0
006C45FA  56                        PUSH ESI
006C45FB  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006c4601:
006C4601  85 DB                     TEST EBX,EBX
006C4603  74 1E                     JZ 0x006c4623
006C4605  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006C460A  6A 59                     PUSH 0x59
006C460C  68 F4 DE 7E 00            PUSH 0x7edef4
006C4611  50                        PUSH EAX
006C4612  53                        PUSH EBX
006C4613  E8 28 18 FE FF            CALL 0x006a5e40
006C4618  5F                        POP EDI
006C4619  8B C3                     MOV EAX,EBX
006C461B  5E                        POP ESI
006C461C  5B                        POP EBX
006C461D  8B E5                     MOV ESP,EBP
006C461F  5D                        POP EBP
006C4620  C2 08 00                  RET 0x8
LAB_006c4623:
006C4623  5F                        POP EDI
006C4624  5E                        POP ESI
006C4625  33 C0                     XOR EAX,EAX
006C4627  5B                        POP EBX
006C4628  8B E5                     MOV ESP,EBP
006C462A  5D                        POP EBP
006C462B  C2 08 00                  RET 0x8
