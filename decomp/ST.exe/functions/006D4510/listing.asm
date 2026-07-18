FUN_006d4510:
006D4510  55                        PUSH EBP
006D4511  8B EC                     MOV EBP,ESP
006D4513  51                        PUSH ECX
006D4514  53                        PUSH EBX
006D4515  56                        PUSH ESI
006D4516  57                        PUSH EDI
006D4517  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D451A  85 FF                     TEST EDI,EDI
006D451C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006D4523  75 1F                     JNZ 0x006d4544
006D4525  6A 4C                     PUSH 0x4c
006D4527  E8 E4 66 FD FF            CALL 0x006aac10
006D452C  8B D8                     MOV EBX,EAX
006D452E  85 DB                     TEST EBX,EBX
006D4530  75 09                     JNZ 0x006d453b
006D4532  5F                        POP EDI
006D4533  5E                        POP ESI
006D4534  5B                        POP EBX
006D4535  8B E5                     MOV ESP,EBP
006D4537  5D                        POP EBP
006D4538  C2 10 00                  RET 0x10
LAB_006d453b:
006D453B  C7 43 08 00 00 40 00      MOV dword ptr [EBX + 0x8],0x400000
006D4542  EB 0B                     JMP 0x006d454f
LAB_006d4544:
006D4544  B9 13 00 00 00            MOV ECX,0x13
006D4549  33 C0                     XOR EAX,EAX
006D454B  8B DF                     MOV EBX,EDI
006D454D  F3 AB                     STOSD.REP ES:EDI
LAB_006d454f:
006D454F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006D4552  83 C9 FF                  OR ECX,0xffffffff
006D4555  8B FE                     MOV EDI,ESI
006D4557  33 C0                     XOR EAX,EAX
006D4559  F2 AE                     SCASB.REPNE ES:EDI
006D455B  F7 D1                     NOT ECX
006D455D  51                        PUSH ECX
006D455E  E8 0D B6 FE FF            CALL 0x006bfb70
006D4563  85 C0                     TEST EAX,EAX
006D4565  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006D4568  75 0A                     JNZ 0x006d4574
006D456A  BE FE FF FF FF            MOV ESI,0xfffffffe
006D456F  E9 E5 00 00 00            JMP 0x006d4659
LAB_006d4574:
006D4574  8B FE                     MOV EDI,ESI
006D4576  83 C9 FF                  OR ECX,0xffffffff
006D4579  33 C0                     XOR EAX,EAX
006D457B  6A 00                     PUSH 0x0
006D457D  F2 AE                     SCASB.REPNE ES:EDI
006D457F  F7 D1                     NOT ECX
006D4581  2B F9                     SUB EDI,ECX
006D4583  68 80 00 00 00            PUSH 0x80
006D4588  8B C1                     MOV EAX,ECX
006D458A  8B F7                     MOV ESI,EDI
006D458C  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
006D458F  6A 04                     PUSH 0x4
006D4591  C1 E9 02                  SHR ECX,0x2
006D4594  F3 A5                     MOVSD.REP ES:EDI,ESI
006D4596  8B C8                     MOV ECX,EAX
006D4598  6A 00                     PUSH 0x0
006D459A  83 E1 03                  AND ECX,0x3
006D459D  6A 00                     PUSH 0x0
006D459F  F3 A4                     MOVSB.REP ES:EDI,ESI
006D45A1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D45A4  68 00 00 00 C0            PUSH 0xc0000000
006D45A9  51                        PUSH ECX
006D45AA  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
006D45B0  83 F8 FF                  CMP EAX,-0x1
006D45B3  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
006D45B6  0F 84 8C 00 00 00         JZ 0x006d4648
006D45BC  8B 3D 74 BC 85 00         MOV EDI,dword ptr [0x0085bc74]
006D45C2  6A 02                     PUSH 0x2
006D45C4  6A 00                     PUSH 0x0
006D45C6  8B D0                     MOV EDX,EAX
006D45C8  6A 00                     PUSH 0x0
006D45CA  52                        PUSH EDX
006D45CB  FF D7                     CALL EDI
006D45CD  8B F0                     MOV ESI,EAX
006D45CF  83 FE FF                  CMP ESI,-0x1
006D45D2  74 74                     JZ 0x006d4648
006D45D4  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006D45D7  6A 00                     PUSH 0x0
006D45D9  6A 00                     PUSH 0x0
006D45DB  6A 00                     PUSH 0x0
006D45DD  50                        PUSH EAX
006D45DE  FF D7                     CALL EDI
006D45E0  83 F8 FF                  CMP EAX,-0x1
006D45E3  74 63                     JZ 0x006d4648
006D45E5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D45E8  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006D45EB  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006D45EE  89 73 18                  MOV dword ptr [EBX + 0x18],ESI
006D45F1  03 F0                     ADD ESI,EAX
006D45F3  6A 00                     PUSH 0x0
006D45F5  56                        PUSH ESI
006D45F6  6A 00                     PUSH 0x0
006D45F8  6A 04                     PUSH 0x4
006D45FA  81 CA 00 00 80 00         OR EDX,0x800000
006D4600  6A 00                     PUSH 0x0
006D4602  51                        PUSH ECX
006D4603  89 53 08                  MOV dword ptr [EBX + 0x8],EDX
006D4606  89 43 3C                  MOV dword ptr [EBX + 0x3c],EAX
006D4609  FF 15 58 BB 85 00         CALL dword ptr [0x0085bb58]
006D460F  8B F8                     MOV EDI,EAX
006D4611  85 FF                     TEST EDI,EDI
006D4613  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006D4616  74 30                     JZ 0x006d4648
006D4618  56                        PUSH ESI
006D4619  6A 00                     PUSH 0x0
006D461B  6A 00                     PUSH 0x0
006D461D  68 1F 00 0F 00            PUSH 0xf001f
006D4622  57                        PUSH EDI
006D4623  FF 15 5C BB 85 00         CALL dword ptr [0x0085bb5c]
006D4629  85 C0                     TEST EAX,EAX
006D462B  89 43 34                  MOV dword ptr [EBX + 0x34],EAX
006D462E  74 18                     JZ 0x006d4648
006D4630  57                        PUSH EDI
006D4631  89 73 38                  MOV dword ptr [EBX + 0x38],ESI
006D4634  89 73 18                  MOV dword ptr [EBX + 0x18],ESI
006D4637  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
006D463D  5F                        POP EDI
006D463E  8B C3                     MOV EAX,EBX
006D4640  5E                        POP ESI
006D4641  5B                        POP EBX
006D4642  8B E5                     MOV ESP,EBP
006D4644  5D                        POP EBP
006D4645  C2 10 00                  RET 0x10
LAB_006d4648:
006D4648  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006D464E  8B F0                     MOV ESI,EAX
006D4650  85 F6                     TEST ESI,ESI
006D4652  75 05                     JNZ 0x006d4659
006D4654  BE 03 FF FF FF            MOV ESI,0xffffff03
LAB_006d4659:
006D4659  6A 00                     PUSH 0x0
006D465B  53                        PUSH EBX
006D465C  E8 3F 00 00 00            CALL 0x006d46a0
006D4661  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D4664  85 C0                     TEST EAX,EAX
006D4666  74 07                     JZ 0x006d466f
006D4668  50                        PUSH EAX
006D4669  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_006d466f:
006D466F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006D4675  68 E4 00 00 00            PUSH 0xe4
006D467A  68 2C E2 7E 00            PUSH 0x7ee22c
006D467F  52                        PUSH EDX
006D4680  56                        PUSH ESI
006D4681  E8 BA 17 FD FF            CALL 0x006a5e40
006D4686  5F                        POP EDI
006D4687  5E                        POP ESI
006D4688  33 C0                     XOR EAX,EAX
006D468A  5B                        POP EBX
006D468B  8B E5                     MOV ESP,EBP
006D468D  5D                        POP EBP
006D468E  C2 10 00                  RET 0x10
