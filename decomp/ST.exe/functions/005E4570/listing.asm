MTaskTy::GetMessage:
005E4570  55                        PUSH EBP
005E4571  8B EC                     MOV EBP,ESP
005E4573  83 EC 64                  SUB ESP,0x64
005E4576  53                        PUSH EBX
005E4577  56                        PUSH ESI
005E4578  8B F1                     MOV ESI,ECX
005E457A  57                        PUSH EDI
005E457B  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
005E457E  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005E4581  E8 2A 0C 10 00            CALL 0x006e51b0
005E4586  33 FF                     XOR EDI,EDI
005E4588  89 46 65                  MOV dword ptr [ESI + 0x65],EAX
005E458B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E4590  8D 55 A0                  LEA EDX,[EBP + -0x60]
005E4593  8D 4D 9C                  LEA ECX,[EBP + -0x64]
005E4596  57                        PUSH EDI
005E4597  52                        PUSH EDX
005E4598  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
005E459B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E45A1  E8 4A 92 14 00            CALL 0x0072d7f0
005E45A6  8B F0                     MOV ESI,EAX
005E45A8  83 C4 08                  ADD ESP,0x8
005E45AB  3B F7                     CMP ESI,EDI
005E45AD  0F 85 C4 0C 00 00         JNZ 0x005e5277
005E45B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005E45B6  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005E45B9  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
005E45BC  81 FE 13 62 00 00         CMP ESI,0x6213
005E45C2  0F 87 BC 05 00 00         JA 0x005e4b84
005E45C8  81 FE 13 62 00 00         CMP ESI,0x6213
005E45CE  0F 84 7C 05 00 00         JZ 0x005e4b50
005E45D4  81 FE 00 62 00 00         CMP ESI,0x6200
005E45DA  0F 87 AF 01 00 00         JA 0x005e478f
005E45E0  0F 84 59 01 00 00         JZ 0x005e473f
005E45E6  83 FE 64                  CMP ESI,0x64
005E45E9  0F 87 6C 0C 00 00         JA 0x005e525b
005E45EF  33 C9                     XOR ECX,ECX
005E45F1  8A 8E E0 52 5E 00         MOV CL,byte ptr [ESI + 0x5e52e0]
switchD_005e45f7::switchD:
005E45F7  FF 24 8D C4 52 5E 00      JMP dword ptr [ECX*0x4 + 0x5e52c4]
switchD_005e45f7::caseD_2:
005E45FE  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005E4601  8B CB                     MOV ECX,EBX
005E4603  8A 50 18                  MOV DL,byte ptr [EAX + 0x18]
005E4606  8A 40 14                  MOV AL,byte ptr [EAX + 0x14]
005E4609  52                        PUSH EDX
005E460A  50                        PUSH EAX
005E460B  E8 4E E9 E1 FF            CALL 0x00402f5e
005E4610  E9 46 0C 00 00            JMP 0x005e525b
switchD_005e45f7::caseD_3:
005E4615  8B CB                     MOV ECX,EBX
005E4617  E8 0D DD E1 FF            CALL 0x00402329
005E461C  E9 3A 0C 00 00            JMP 0x005e525b
switchD_005e45f7::caseD_5:
005E4621  8B CB                     MOV ECX,EBX
005E4623  E8 48 F0 E1 FF            CALL 0x00403670
005E4628  E9 2E 0C 00 00            JMP 0x005e525b
switchD_005e45f7::caseD_0:
005E462D  8B CB                     MOV ECX,EBX
005E462F  E8 DB C9 E1 FF            CALL 0x0040100f
005E4634  E9 22 0C 00 00            JMP 0x005e525b
switchD_005e45f7::caseD_62:
005E4639  39 3D 6E FB 80 00         CMP dword ptr [0x0080fb6e],EDI
005E463F  74 1E                     JZ 0x005e465f
005E4641  8D 4B 3D                  LEA ECX,[EBX + 0x3d]
005E4644  C7 43 4D 02 71 00 00      MOV dword ptr [EBX + 0x4d],0x7102
005E464B  51                        PUSH ECX
005E464C  8B CB                     MOV ECX,EBX
005E464E  C7 43 49 01 00 00 00      MOV dword ptr [EBX + 0x49],0x1
005E4655  E8 C6 19 10 00            CALL 0x006e6020
005E465A  E9 FC 0B 00 00            JMP 0x005e525b
LAB_005e465f:
005E465F  80 7B 6D 01               CMP byte ptr [EBX + 0x6d],0x1
005E4663  0F 85 F2 0B 00 00         JNZ 0x005e525b
005E4669  8B CB                     MOV ECX,EBX
005E466B  E8 48 07 E2 FF            CALL 0x00404db8
005E4670  BF 16 ED 80 00            MOV EDI,0x80ed16
005E4675  83 C9 FF                  OR ECX,0xffffffff
005E4678  33 C0                     XOR EAX,EAX
005E467A  F2 AE                     SCASB.REPNE ES:EDI
005E467C  F7 D1                     NOT ECX
005E467E  2B F9                     SUB EDI,ECX
005E4680  8B D1                     MOV EDX,ECX
005E4682  8B F7                     MOV ESI,EDI
005E4684  BF 1A EE 80 00            MOV EDI,0x80ee1a
005E4689  C1 E9 02                  SHR ECX,0x2
005E468C  F3 A5                     MOVSD.REP ES:EDI,ESI
005E468E  8B CA                     MOV ECX,EDX
005E4690  83 E1 03                  AND ECX,0x3
005E4693  F3 A4                     MOVSB.REP ES:EDI,ESI
005E4695  C7 43 4D FF 60 00 00      MOV dword ptr [EBX + 0x4d],0x60ff
005E469C  C7 43 49 01 00 00 00      MOV dword ptr [EBX + 0x49],0x1
005E46A3  E9 B3 0B 00 00            JMP 0x005e525b
switchD_005e45f7::caseD_64:
005E46A8  8A 43 6D                  MOV AL,byte ptr [EBX + 0x6d]
005E46AB  BE 01 00 00 00            MOV ESI,0x1
005E46B0  3C 01                     CMP AL,0x1
005E46B2  75 67                     JNZ 0x005e471b
005E46B4  39 3D 6E FB 80 00         CMP dword ptr [0x0080fb6e],EDI
005E46BA  74 1A                     JZ 0x005e46d6
005E46BC  8D 43 3D                  LEA EAX,[EBX + 0x3d]
005E46BF  C7 43 4D 02 71 00 00      MOV dword ptr [EBX + 0x4d],0x7102
005E46C6  50                        PUSH EAX
005E46C7  8B CB                     MOV ECX,EBX
005E46C9  89 73 49                  MOV dword ptr [EBX + 0x49],ESI
005E46CC  E8 4F 19 10 00            CALL 0x006e6020
005E46D1  E9 85 0B 00 00            JMP 0x005e525b
LAB_005e46d6:
005E46D6  8B CB                     MOV ECX,EBX
005E46D8  E8 DB 06 E2 FF            CALL 0x00404db8
005E46DD  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005E46E4  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005E46E7  8A 4B 6F                  MOV CL,byte ptr [EBX + 0x6f]
005E46EA  80 E9 02                  SUB CL,0x2
005E46ED  F6 D9                     NEG CL
005E46EF  1B C9                     SBB ECX,ECX
005E46F1  83 E1 1F                  AND ECX,0x1f
005E46F4  81 C1 03 61 00 00         ADD ECX,0x6103
005E46FA  89 4B 4D                  MOV dword ptr [EBX + 0x4d],ECX
005E46FD  8A 43 6F                  MOV AL,byte ptr [EBX + 0x6f]
005E4700  3C 02                     CMP AL,0x2
005E4702  75 0A                     JNZ 0x005e470e
005E4704  8B C6                     MOV EAX,ESI
005E4706  89 43 51                  MOV dword ptr [EBX + 0x51],EAX
005E4709  E9 4D 0B 00 00            JMP 0x005e525b
LAB_005e470e:
005E470E  25 FF 00 00 00            AND EAX,0xff
005E4713  89 43 51                  MOV dword ptr [EBX + 0x51],EAX
005E4716  E9 40 0B 00 00            JMP 0x005e525b
LAB_005e471b:
005E471B  8B CB                     MOV ECX,EBX
005E471D  C6 43 6D 05               MOV byte ptr [EBX + 0x6d],0x5
005E4721  E8 F2 14 E2 FF            CALL 0x00405c18
005E4726  BF 1F 00 00 00            MOV EDI,0x1f
LAB_005e472b:
005E472B  56                        PUSH ESI
005E472C  B9 58 76 80 00            MOV ECX,0x807658
005E4731  E8 66 EB E1 FF            CALL 0x0040329c
005E4736  46                        INC ESI
005E4737  4F                        DEC EDI
005E4738  75 F1                     JNZ 0x005e472b
005E473A  E9 1C 0B 00 00            JMP 0x005e525b
LAB_005e473f:
005E473F  6A FF                     PUSH -0x1
005E4741  6A 01                     PUSH 0x1
005E4743  6A 04                     PUSH 0x4
005E4745  8B CB                     MOV ECX,EBX
005E4747  E8 A5 04 E2 FF            CALL 0x00404bf1
005E474C  39 3D 6E FB 80 00         CMP dword ptr [0x0080fb6e],EDI
005E4752  74 1E                     JZ 0x005e4772
005E4754  8D 53 3D                  LEA EDX,[EBX + 0x3d]
005E4757  C7 43 4D 02 71 00 00      MOV dword ptr [EBX + 0x4d],0x7102
005E475E  52                        PUSH EDX
005E475F  8B CB                     MOV ECX,EBX
005E4761  C7 43 49 01 00 00 00      MOV dword ptr [EBX + 0x49],0x1
005E4768  E8 B3 18 10 00            CALL 0x006e6020
005E476D  E9 E9 0A 00 00            JMP 0x005e525b
LAB_005e4772:
005E4772  8B CB                     MOV ECX,EBX
005E4774  E8 3F 06 E2 FF            CALL 0x00404db8
005E4779  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005E4780  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005E4783  C7 43 4D 02 61 00 00      MOV dword ptr [EBX + 0x4d],0x6102
005E478A  E9 CC 0A 00 00            JMP 0x005e525b
LAB_005e478f:
005E478F  81 C6 FF 9D FF FF         ADD ESI,0xffff9dff
005E4795  83 FE 11                  CMP ESI,0x11
005E4798  0F 87 BD 0A 00 00         JA 0x005e525b
005E479E  33 C9                     XOR ECX,ECX
005E47A0  8A 8E 64 53 5E 00         MOV CL,byte ptr [ESI + 0x5e5364]
switchD_005e47a6::switchD:
005E47A6  FF 24 8D 48 53 5E 00      JMP dword ptr [ECX*0x4 + 0x5e5348]
switchD_005e47a6::caseD_6201:
005E47AD  6A FF                     PUSH -0x1
005E47AF  6A 01                     PUSH 0x1
005E47B1  6A 04                     PUSH 0x4
005E47B3  8B CB                     MOV ECX,EBX
005E47B5  E8 37 04 E2 FF            CALL 0x00404bf1
005E47BA  39 3D 6E FB 80 00         CMP dword ptr [0x0080fb6e],EDI
005E47C0  74 1E                     JZ 0x005e47e0
005E47C2  8D 53 3D                  LEA EDX,[EBX + 0x3d]
005E47C5  C7 43 4D 02 71 00 00      MOV dword ptr [EBX + 0x4d],0x7102
005E47CC  52                        PUSH EDX
005E47CD  8B CB                     MOV ECX,EBX
005E47CF  C7 43 49 01 00 00 00      MOV dword ptr [EBX + 0x49],0x1
005E47D6  E8 45 18 10 00            CALL 0x006e6020
005E47DB  E9 7B 0A 00 00            JMP 0x005e525b
LAB_005e47e0:
005E47E0  8B CB                     MOV ECX,EBX
005E47E2  E8 D1 05 E2 FF            CALL 0x00404db8
005E47E7  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005E47EE  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005E47F1  8A 43 6F                  MOV AL,byte ptr [EBX + 0x6f]
005E47F4  2C 02                     SUB AL,0x2
005E47F6  F6 D8                     NEG AL
005E47F8  1B C0                     SBB EAX,EAX
005E47FA  83 E0 1F                  AND EAX,0x1f
005E47FD  05 03 61 00 00            ADD EAX,0x6103
005E4802  89 43 4D                  MOV dword ptr [EBX + 0x4d],EAX
005E4805  8A 43 6F                  MOV AL,byte ptr [EBX + 0x6f]
005E4808  3C 02                     CMP AL,0x2
005E480A  0F 85 FE FE FF FF         JNZ 0x005e470e
005E4810  B8 01 00 00 00            MOV EAX,0x1
005E4815  89 43 51                  MOV dword ptr [EBX + 0x51],EAX
005E4818  E9 3E 0A 00 00            JMP 0x005e525b
switchD_005e47a6::caseD_6202:
005E481D  BE 01 00 00 00            MOV ESI,0x1
005E4822  6A FF                     PUSH -0x1
005E4824  56                        PUSH ESI
005E4825  6A 04                     PUSH 0x4
005E4827  8B CB                     MOV ECX,EBX
005E4829  E8 C3 03 E2 FF            CALL 0x00404bf1
005E482E  39 3D 6E FB 80 00         CMP dword ptr [0x0080fb6e],EDI
005E4834  74 1A                     JZ 0x005e4850
005E4836  8D 4B 3D                  LEA ECX,[EBX + 0x3d]
005E4839  C7 43 4D 02 71 00 00      MOV dword ptr [EBX + 0x4d],0x7102
005E4840  51                        PUSH ECX
005E4841  8B CB                     MOV ECX,EBX
005E4843  89 73 49                  MOV dword ptr [EBX + 0x49],ESI
005E4846  E8 D5 17 10 00            CALL 0x006e6020
005E484B  E9 0B 0A 00 00            JMP 0x005e525b
LAB_005e4850:
005E4850  89 73 49                  MOV dword ptr [EBX + 0x49],ESI
005E4853  8A 43 6E                  MOV AL,byte ptr [EBX + 0x6e]
005E4856  3C 01                     CMP AL,0x1
005E4858  75 13                     JNZ 0x005e486d
005E485A  8B CB                     MOV ECX,EBX
005E485C  C7 43 4D 08 61 00 00      MOV dword ptr [EBX + 0x4d],0x6108
005E4863  E8 50 05 E2 FF            CALL 0x00404db8
005E4868  E9 EE 09 00 00            JMP 0x005e525b
LAB_005e486d:
005E486D  BF 16 ED 80 00            MOV EDI,0x80ed16
005E4872  83 C9 FF                  OR ECX,0xffffffff
005E4875  33 C0                     XOR EAX,EAX
005E4877  F2 AE                     SCASB.REPNE ES:EDI
005E4879  F7 D1                     NOT ECX
005E487B  2B F9                     SUB EDI,ECX
005E487D  8B D1                     MOV EDX,ECX
005E487F  8B F7                     MOV ESI,EDI
005E4881  BF 1A EE 80 00            MOV EDI,0x80ee1a
005E4886  C1 E9 02                  SHR ECX,0x2
005E4889  F3 A5                     MOVSD.REP ES:EDI,ESI
005E488B  8B CA                     MOV ECX,EDX
005E488D  83 E1 03                  AND ECX,0x3
005E4890  F3 A4                     MOVSB.REP ES:EDI,ESI
005E4892  8B CB                     MOV ECX,EBX
005E4894  C7 43 4D FF 60 00 00      MOV dword ptr [EBX + 0x4d],0x60ff
005E489B  E8 18 05 E2 FF            CALL 0x00404db8
005E48A0  E9 B6 09 00 00            JMP 0x005e525b
switchD_005e47a6::caseD_6203:
005E48A5  6A FF                     PUSH -0x1
005E48A7  6A 01                     PUSH 0x1
005E48A9  6A 04                     PUSH 0x4
005E48AB  8B CB                     MOV ECX,EBX
005E48AD  E8 3F 03 E2 FF            CALL 0x00404bf1
005E48B2  8B 43 69                  MOV EAX,dword ptr [EBX + 0x69]
005E48B5  89 7B 7C                  MOV dword ptr [EBX + 0x7c],EDI
005E48B8  89 43 61                  MOV dword ptr [EBX + 0x61],EAX
005E48BB  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005E48C1  57                        PUSH EDI
005E48C2  6A 01                     PUSH 0x1
005E48C4  51                        PUSH ECX
005E48C5  E8 79 D4 E1 FF            CALL 0x00401d43
005E48CA  8B 83 4F 06 00 00         MOV EAX,dword ptr [EBX + 0x64f]
005E48D0  83 C4 0C                  ADD ESP,0xc
005E48D3  3B C7                     CMP EAX,EDI
005E48D5  74 32                     JZ 0x005e4909
005E48D7  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E48DA  33 F6                     XOR ESI,ESI
005E48DC  3B CF                     CMP ECX,EDI
005E48DE  76 29                     JBE 0x005e4909
005E48E0  3B F1                     CMP ESI,ECX
005E48E2  73 0D                     JNC 0x005e48f1
LAB_005e48e4:
005E48E4  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005E48E7  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005E48EA  0F AF CE                  IMUL ECX,ESI
005E48ED  03 CA                     ADD ECX,EDX
005E48EF  EB 02                     JMP 0x005e48f3
LAB_005e48f1:
005E48F1  33 C9                     XOR ECX,ECX
LAB_005e48f3:
005E48F3  51                        PUSH ECX
005E48F4  8B CB                     MOV ECX,EBX
005E48F6  E8 60 0C E2 FF            CALL 0x0040555b
005E48FB  8B 83 4F 06 00 00         MOV EAX,dword ptr [EBX + 0x64f]
005E4901  46                        INC ESI
005E4902  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E4905  3B F1                     CMP ESI,ECX
005E4907  72 DB                     JC 0x005e48e4
LAB_005e4909:
005E4909  8B 8B 47 06 00 00         MOV ECX,dword ptr [EBX + 0x647]
005E490F  3B CF                     CMP ECX,EDI
005E4911  74 32                     JZ 0x005e4945
005E4913  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005E4916  33 F6                     XOR ESI,ESI
005E4918  3B C7                     CMP EAX,EDI
005E491A  76 29                     JBE 0x005e4945
005E491C  3B F0                     CMP ESI,EAX
005E491E  73 0D                     JNC 0x005e492d
LAB_005e4920:
005E4920  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005E4923  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005E4926  0F AF C6                  IMUL EAX,ESI
005E4929  03 C2                     ADD EAX,EDX
005E492B  EB 02                     JMP 0x005e492f
LAB_005e492d:
005E492D  33 C0                     XOR EAX,EAX
LAB_005e492f:
005E492F  50                        PUSH EAX
005E4930  8B CB                     MOV ECX,EBX
005E4932  E8 24 0C E2 FF            CALL 0x0040555b
005E4937  8B 8B 47 06 00 00         MOV ECX,dword ptr [EBX + 0x647]
005E493D  46                        INC ESI
005E493E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005E4941  3B F0                     CMP ESI,EAX
005E4943  72 DB                     JC 0x005e4920
LAB_005e4945:
005E4945  8B 83 4B 06 00 00         MOV EAX,dword ptr [EBX + 0x64b]
005E494B  3B C7                     CMP EAX,EDI
005E494D  74 47                     JZ 0x005e4996
005E494F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E4952  33 FF                     XOR EDI,EDI
005E4954  85 C9                     TEST ECX,ECX
005E4956  76 3E                     JBE 0x005e4996
005E4958  3B F9                     CMP EDI,ECX
005E495A  73 0D                     JNC 0x005e4969
LAB_005e495c:
005E495C  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005E495F  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005E4962  0F AF F7                  IMUL ESI,EDI
005E4965  03 F1                     ADD ESI,ECX
005E4967  EB 02                     JMP 0x005e496b
LAB_005e4969:
005E4969  33 F6                     XOR ESI,ESI
LAB_005e496b:
005E496B  8B CE                     MOV ECX,ESI
005E496D  E8 3E 11 13 00            CALL 0x00715ab0
005E4972  8B 86 9A 00 00 00         MOV EAX,dword ptr [ESI + 0x9a]
005E4978  81 C6 9A 00 00 00         ADD ESI,0x9a
005E497E  85 C0                     TEST EAX,EAX
005E4980  74 06                     JZ 0x005e4988
005E4982  56                        PUSH ESI
005E4983  E8 D8 66 0C 00            CALL 0x006ab060
LAB_005e4988:
005E4988  8B 83 4B 06 00 00         MOV EAX,dword ptr [EBX + 0x64b]
005E498E  47                        INC EDI
005E498F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E4992  3B F9                     CMP EDI,ECX
005E4994  72 C6                     JC 0x005e495c
LAB_005e4996:
005E4996  8B 83 CD 02 00 00         MOV EAX,dword ptr [EBX + 0x2cd]
005E499C  85 C0                     TEST EAX,EAX
005E499E  74 13                     JZ 0x005e49b3
005E49A0  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005E49A3  50                        PUSH EAX
005E49A4  E8 07 0D 10 00            CALL 0x006e56b0
005E49A9  C7 83 CD 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x2cd],0x0
LAB_005e49b3:
005E49B3  8B 93 84 04 00 00         MOV EDX,dword ptr [EBX + 0x484]
005E49B9  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E49BE  52                        PUSH EDX
005E49BF  50                        PUSH EAX
005E49C0  E8 2B F1 0C 00            CALL 0x006b3af0
005E49C5  8B 83 D5 02 00 00         MOV EAX,dword ptr [EBX + 0x2d5]
005E49CB  83 F8 FF                  CMP EAX,-0x1
005E49CE  74 0D                     JZ 0x005e49dd
005E49D0  8B 8B 19 03 00 00         MOV ECX,dword ptr [EBX + 0x319]
005E49D6  50                        PUSH EAX
005E49D7  51                        PUSH ECX
005E49D8  E8 13 F1 0C 00            CALL 0x006b3af0
LAB_005e49dd:
005E49DD  8B 83 66 03 00 00         MOV EAX,dword ptr [EBX + 0x366]
005E49E3  83 F8 FF                  CMP EAX,-0x1
005E49E6  74 0D                     JZ 0x005e49f5
005E49E8  8B 93 AA 03 00 00         MOV EDX,dword ptr [EBX + 0x3aa]
005E49EE  50                        PUSH EAX
005E49EF  52                        PUSH EDX
005E49F0  E8 FB F0 0C 00            CALL 0x006b3af0
LAB_005e49f5:
005E49F5  8B 83 F7 03 00 00         MOV EAX,dword ptr [EBX + 0x3f7]
005E49FB  83 F8 FF                  CMP EAX,-0x1
005E49FE  74 0D                     JZ 0x005e4a0d
005E4A00  50                        PUSH EAX
005E4A01  8B 83 3B 04 00 00         MOV EAX,dword ptr [EBX + 0x43b]
005E4A07  50                        PUSH EAX
005E4A08  E8 E3 F0 0C 00            CALL 0x006b3af0
LAB_005e4a0d:
005E4A0D  8D B3 BD 02 00 00         LEA ESI,[EBX + 0x2bd]
005E4A13  BF 04 00 00 00            MOV EDI,0x4
LAB_005e4a18:
005E4A18  8B 0E                     MOV ECX,dword ptr [ESI]
005E4A1A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E4A20  51                        PUSH ECX
005E4A21  52                        PUSH EDX
005E4A22  E8 C9 F0 0C 00            CALL 0x006b3af0
005E4A27  83 C6 04                  ADD ESI,0x4
005E4A2A  4F                        DEC EDI
005E4A2B  75 EB                     JNZ 0x005e4a18
005E4A2D  8B 83 B9 02 00 00         MOV EAX,dword ptr [EBX + 0x2b9]
005E4A33  85 C0                     TEST EAX,EAX
005E4A35  74 13                     JZ 0x005e4a4a
005E4A37  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005E4A3A  50                        PUSH EAX
005E4A3B  E8 70 0C 10 00            CALL 0x006e56b0
005E4A40  C7 83 B9 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x2b9],0x0
LAB_005e4a4a:
005E4A4A  8D B3 91 02 00 00         LEA ESI,[EBX + 0x291]
005E4A50  BF 05 00 00 00            MOV EDI,0x5
LAB_005e4a55:
005E4A55  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005E4A58  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E4A5E  50                        PUSH EAX
005E4A5F  51                        PUSH ECX
005E4A60  E8 8B F0 0C 00            CALL 0x006b3af0
005E4A65  8B 06                     MOV EAX,dword ptr [ESI]
005E4A67  85 C0                     TEST EAX,EAX
005E4A69  74 0F                     JZ 0x005e4a7a
005E4A6B  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005E4A6E  50                        PUSH EAX
005E4A6F  E8 3C 0C 10 00            CALL 0x006e56b0
005E4A74  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_005e4a7a:
005E4A7A  83 C6 04                  ADD ESI,0x4
005E4A7D  4F                        DEC EDI
005E4A7E  75 D5                     JNZ 0x005e4a55
005E4A80  8B CB                     MOV ECX,EBX
005E4A82  E8 E9 EB E1 FF            CALL 0x00403670
005E4A87  8B 53 78                  MOV EDX,dword ptr [EBX + 0x78]
005E4A8A  8D 4B 74                  LEA ECX,[EBX + 0x74]
005E4A8D  C6 43 6D 03               MOV byte ptr [EBX + 0x6d],0x3
005E4A91  E8 AA B3 0C 00            CALL 0x006afe40
005E4A96  8B CB                     MOV ECX,EBX
005E4A98  E8 7B 11 E2 FF            CALL 0x00405c18
005E4A9D  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005E4AA0  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E4AA5  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005E4AAB  6A 00                     PUSH 0x0
005E4AAD  6A 02                     PUSH 0x2
005E4AAF  6A 0A                     PUSH 0xa
005E4AB1  52                        PUSH EDX
005E4AB2  50                        PUSH EAX
005E4AB3  51                        PUSH ECX
005E4AB4  E8 D1 F9 E1 FF            CALL 0x0040448a
005E4AB9  83 C4 18                  ADD ESP,0x18
005E4ABC  E9 9A 07 00 00            JMP 0x005e525b
switchD_005e47a6::caseD_6204:
005E4AC1  80 7B 6D 01               CMP byte ptr [EBX + 0x6d],0x1
005E4AC5  0F 84 90 07 00 00         JZ 0x005e525b
005E4ACB  8B CB                     MOV ECX,EBX
005E4ACD  C6 43 6D 05               MOV byte ptr [EBX + 0x6d],0x5
005E4AD1  E8 42 11 E2 FF            CALL 0x00405c18
005E4AD6  BE 01 00 00 00            MOV ESI,0x1
005E4ADB  BF 1F 00 00 00            MOV EDI,0x1f
LAB_005e4ae0:
005E4AE0  56                        PUSH ESI
005E4AE1  B9 58 76 80 00            MOV ECX,0x807658
005E4AE6  E8 B1 E7 E1 FF            CALL 0x0040329c
005E4AEB  46                        INC ESI
005E4AEC  4F                        DEC EDI
005E4AED  75 F1                     JNZ 0x005e4ae0
005E4AEF  E9 67 07 00 00            JMP 0x005e525b
switchD_005e47a6::caseD_6205:
005E4AF4  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005E4AF7  6A FF                     PUSH -0x1
005E4AF9  6A 01                     PUSH 0x1
005E4AFB  6A 04                     PUSH 0x4
005E4AFD  8B CB                     MOV ECX,EBX
005E4AFF  E8 ED 00 E2 FF            CALL 0x00404bf1
005E4B04  8A 06                     MOV AL,byte ptr [ESI]
005E4B06  FE C8                     DEC AL
005E4B08  3C 03                     CMP AL,0x3
005E4B0A  A2 40 73 80 00            MOV [0x00807340],AL
005E4B0F  0F 94 C2                  SETZ DL
005E4B12  88 15 41 73 80 00         MOV byte ptr [0x00807341],DL
005E4B18  E9 3E 07 00 00            JMP 0x005e525b
switchD_005e47a6::caseD_6212:
005E4B1D  66 8B 40 14               MOV AX,word ptr [EAX + 0x14]
005E4B21  8D 8B 53 06 00 00         LEA ECX,[EBX + 0x653]
005E4B27  50                        PUSH EAX
005E4B28  6A 01                     PUSH 0x1
005E4B2A  6A 04                     PUSH 0x4
005E4B2C  68 AC 26 00 00            PUSH 0x26ac
005E4B31  51                        PUSH ECX
005E4B32  8B CB                     MOV ECX,EBX
005E4B34  E8 21 CF E1 FF            CALL 0x00401a5a
005E4B39  8B 93 A5 02 00 00         MOV EDX,dword ptr [EBX + 0x2a5]
005E4B3F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E4B44  52                        PUSH EDX
005E4B45  50                        PUSH EAX
005E4B46  E8 85 EA 0C 00            CALL 0x006b35d0
005E4B4B  E9 0B 07 00 00            JMP 0x005e525b
LAB_005e4b50:
005E4B50  66 8B 48 14               MOV CX,word ptr [EAX + 0x14]
005E4B54  8D 93 5F 06 00 00         LEA EDX,[EBX + 0x65f]
005E4B5A  51                        PUSH ECX
005E4B5B  6A 01                     PUSH 0x1
005E4B5D  6A 04                     PUSH 0x4
005E4B5F  68 BC 24 00 00            PUSH 0x24bc
005E4B64  52                        PUSH EDX
005E4B65  8B CB                     MOV ECX,EBX
005E4B67  E8 EE CE E1 FF            CALL 0x00401a5a
005E4B6C  8B 83 A9 02 00 00         MOV EAX,dword ptr [EBX + 0x2a9]
005E4B72  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E4B78  50                        PUSH EAX
005E4B79  51                        PUSH ECX
005E4B7A  E8 51 EA 0C 00            CALL 0x006b35d0
005E4B7F  E9 D7 06 00 00            JMP 0x005e525b
LAB_005e4b84:
005E4B84  81 FE 34 63 00 00         CMP ESI,0x6334
005E4B8A  0F 87 68 04 00 00         JA 0x005e4ff8
005E4B90  0F 84 41 04 00 00         JZ 0x005e4fd7
005E4B96  81 FE 17 62 00 00         CMP ESI,0x6217
005E4B9C  0F 87 70 02 00 00         JA 0x005e4e12
005E4BA2  0F 84 CA 00 00 00         JZ 0x005e4c72
005E4BA8  81 EE 14 62 00 00         SUB ESI,0x6214
005E4BAE  74 71                     JZ 0x005e4c21
005E4BB0  4E                        DEC ESI
005E4BB1  74 3B                     JZ 0x005e4bee
005E4BB3  4E                        DEC ESI
005E4BB4  0F 85 A1 06 00 00         JNZ 0x005e525b
005E4BBA  66 8B 50 14               MOV DX,word ptr [EAX + 0x14]
005E4BBE  8D 83 83 06 00 00         LEA EAX,[EBX + 0x683]
005E4BC4  52                        PUSH EDX
005E4BC5  6A 01                     PUSH 0x1
005E4BC7  6A 04                     PUSH 0x4
005E4BC9  68 5E 23 00 00            PUSH 0x235e
005E4BCE  50                        PUSH EAX
005E4BCF  8B CB                     MOV ECX,EBX
005E4BD1  E8 84 CE E1 FF            CALL 0x00401a5a
005E4BD6  8B 8B B5 02 00 00         MOV ECX,dword ptr [EBX + 0x2b5]
005E4BDC  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E4BE2  51                        PUSH ECX
005E4BE3  52                        PUSH EDX
005E4BE4  E8 E7 E9 0C 00            CALL 0x006b35d0
005E4BE9  E9 6D 06 00 00            JMP 0x005e525b
LAB_005e4bee:
005E4BEE  66 8B 40 14               MOV AX,word ptr [EAX + 0x14]
005E4BF2  8D 8B 77 06 00 00         LEA ECX,[EBX + 0x677]
005E4BF8  50                        PUSH EAX
005E4BF9  6A 01                     PUSH 0x1
005E4BFB  6A 04                     PUSH 0x4
005E4BFD  68 58 23 00 00            PUSH 0x2358
005E4C02  51                        PUSH ECX
005E4C03  8B CB                     MOV ECX,EBX
005E4C05  E8 50 CE E1 FF            CALL 0x00401a5a
005E4C0A  8B 93 B1 02 00 00         MOV EDX,dword ptr [EBX + 0x2b1]
005E4C10  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E4C15  52                        PUSH EDX
005E4C16  50                        PUSH EAX
005E4C17  E8 B4 E9 0C 00            CALL 0x006b35d0
005E4C1C  E9 3A 06 00 00            JMP 0x005e525b
LAB_005e4c21:
005E4C21  8A 4B 6E                  MOV CL,byte ptr [EBX + 0x6e]
005E4C24  84 C9                     TEST CL,CL
005E4C26  75 07                     JNZ 0x005e4c2f
005E4C28  B9 43 23 00 00            MOV ECX,0x2343
005E4C2D  EB 13                     JMP 0x005e4c42
LAB_005e4c2f:
005E4C2F  8A 0D 32 C6 80 00         MOV CL,byte ptr [0x0080c632]
005E4C35  F6 D9                     NEG CL
005E4C37  1B C9                     SBB ECX,ECX
005E4C39  83 E1 2B                  AND ECX,0x2b
005E4C3C  81 C1 2C 23 00 00         ADD ECX,0x232c
LAB_005e4c42:
005E4C42  66 8B 50 14               MOV DX,word ptr [EAX + 0x14]
005E4C46  8D 83 6B 06 00 00         LEA EAX,[EBX + 0x66b]
005E4C4C  52                        PUSH EDX
005E4C4D  6A 01                     PUSH 0x1
005E4C4F  6A 04                     PUSH 0x4
005E4C51  51                        PUSH ECX
005E4C52  50                        PUSH EAX
005E4C53  8B CB                     MOV ECX,EBX
005E4C55  E8 00 CE E1 FF            CALL 0x00401a5a
005E4C5A  8B 8B AD 02 00 00         MOV ECX,dword ptr [EBX + 0x2ad]
005E4C60  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E4C66  51                        PUSH ECX
005E4C67  52                        PUSH EDX
005E4C68  E8 63 E9 0C 00            CALL 0x006b35d0
005E4C6D  E9 E9 05 00 00            JMP 0x005e525b
LAB_005e4c72:
005E4C72  8B 78 14                  MOV EDI,dword ptr [EAX + 0x14]
005E4C75  C7 45 E0 52 1F 00 00      MOV dword ptr [EBP + -0x20],0x1f52
005E4C7C  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005E4C7F  8B 0F                     MOV ECX,dword ptr [EDI]
005E4C81  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
005E4C84  8D 8C 83 83 06 00 00      LEA ECX,[EBX + EAX*0x4 + 0x683]
005E4C8B  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005E4C8E  8A 41 0A                  MOV AL,byte ptr [ECX + 0xa]
005E4C91  8B 31                     MOV ESI,dword ptr [ECX]
005E4C93  FE C8                     DEC AL
005E4C95  F6 D8                     NEG AL
005E4C97  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005E4C9A  1A C0                     SBB AL,AL
005E4C9C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005E4C9F  24 EC                     AND AL,0xec
005E4CA1  04 2C                     ADD AL,0x2c
005E4CA3  88 45 E4                  MOV byte ptr [EBP + -0x1c],AL
005E4CA6  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005E4CA9  83 F8 03                  CMP EAX,0x3
005E4CAC  75 14                     JNZ 0x005e4cc2
005E4CAE  8A 49 08                  MOV CL,byte ptr [ECX + 0x8]
005E4CB1  FE C9                     DEC CL
005E4CB3  F6 D9                     NEG CL
005E4CB5  1A C9                     SBB CL,CL
005E4CB7  80 E1 FE                  AND CL,0xfe
005E4CBA  80 C1 03                  ADD CL,0x3
005E4CBD  88 4D F0                  MOV byte ptr [EBP + -0x10],CL
005E4CC0  EB 0E                     JMP 0x005e4cd0
LAB_005e4cc2:
005E4CC2  80 79 08 01               CMP byte ptr [ECX + 0x8],0x1
005E4CC6  0F 95 C0                  SETNZ AL
005E4CC9  48                        DEC EAX
005E4CCA  83 E0 02                  AND EAX,0x2
005E4CCD  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
LAB_005e4cd0:
005E4CD0  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005E4CD3  85 C0                     TEST EAX,EAX
005E4CD5  75 16                     JNZ 0x005e4ced
005E4CD7  66 8B 46 0E               MOV AX,word ptr [ESI + 0xe]
005E4CDB  0F AF 46 04               IMUL EAX,dword ptr [ESI + 0x4]
005E4CDF  83 C0 1F                  ADD EAX,0x1f
005E4CE2  C1 E8 03                  SHR EAX,0x3
005E4CE5  25 FC FF FF 1F            AND EAX,0x1ffffffc
005E4CEA  0F AF C2                  IMUL EAX,EDX
LAB_005e4ced:
005E4CED  56                        PUSH ESI
005E4CEE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005E4CF1  E8 AA 02 0D 00            CALL 0x006b4fa0
005E4CF6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005E4CF9  8B F8                     MOV EDI,EAX
005E4CFB  8B D1                     MOV EDX,ECX
005E4CFD  83 C8 FF                  OR EAX,0xffffffff
005E4D00  C1 E9 02                  SHR ECX,0x2
005E4D03  F3 AB                     STOSD.REP ES:EDI
005E4D05  8B CA                     MOV ECX,EDX
005E4D07  6A 00                     PUSH 0x0
005E4D09  83 E1 03                  AND ECX,0x3
005E4D0C  6A 02                     PUSH 0x2
005E4D0E  F3 AA                     STOSB.REP ES:EDI
005E4D10  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E4D13  50                        PUSH EAX
005E4D14  6A 16                     PUSH 0x16
005E4D16  6A 00                     PUSH 0x0
005E4D18  6A 00                     PUSH 0x0
005E4D1A  6A 00                     PUSH 0x0
005E4D1C  56                        PUSH ESI
005E4D1D  E8 EE 28 0E 00            CALL 0x006c7610
005E4D22  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005E4D25  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005E4D28  83 F8 01                  CMP EAX,0x1
005E4D2B  74 0E                     JZ 0x005e4d3b
005E4D2D  83 F8 03                  CMP EAX,0x3
005E4D30  75 3E                     JNZ 0x005e4d70
005E4D32  8B D1                     MOV EDX,ECX
005E4D34  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005E4D37  85 C0                     TEST EAX,EAX
005E4D39  74 35                     JZ 0x005e4d70
LAB_005e4d3b:
005E4D3B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005E4D3E  33 C0                     XOR EAX,EAX
005E4D40  8A 51 0B                  MOV DL,byte ptr [ECX + 0xb]
005E4D43  80 FA 01                  CMP DL,0x1
005E4D46  8B 93 81 00 00 00         MOV EDX,dword ptr [EBX + 0x81]
005E4D4C  0F 94 C0                  SETZ AL
005E4D4F  50                        PUSH EAX
005E4D50  52                        PUSH EDX
005E4D51  E8 4A 66 12 00            CALL 0x0070b3a0
005E4D56  50                        PUSH EAX
005E4D57  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E4D5A  83 C0 F0                  ADD EAX,-0x10
005E4D5D  6A 06                     PUSH 0x6
005E4D5F  99                        CDQ
005E4D60  2B C2                     SUB EAX,EDX
005E4D62  D1 F8                     SAR EAX,0x1
005E4D64  50                        PUSH EAX
005E4D65  6A 02                     PUSH 0x2
005E4D67  56                        PUSH ESI
005E4D68  E8 BC E4 E1 FF            CALL 0x00403229
005E4D6D  83 C4 1C                  ADD ESP,0x1c
LAB_005e4d70:
005E4D70  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005E4D73  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005E4D76  51                        PUSH ECX
005E4D77  6A 02                     PUSH 0x2
005E4D79  52                        PUSH EDX
005E4D7A  6A 16                     PUSH 0x16
005E4D7C  6A 00                     PUSH 0x0
005E4D7E  6A 00                     PUSH 0x0
005E4D80  6A 00                     PUSH 0x0
005E4D82  56                        PUSH ESI
005E4D83  E8 E8 27 0E 00            CALL 0x006c7570
005E4D88  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005E4D8B  8B 00                     MOV EAX,dword ptr [EAX]
005E4D8D  48                        DEC EAX
005E4D8E  83 E8 00                  SUB EAX,0x0
005E4D91  74 14                     JZ 0x005e4da7
005E4D93  48                        DEC EAX
005E4D94  74 0A                     JZ 0x005e4da0
005E4D96  48                        DEC EAX
005E4D97  75 15                     JNZ 0x005e4dae
005E4D99  BF 49 1F 00 00            MOV EDI,0x1f49
005E4D9E  EB 11                     JMP 0x005e4db1
LAB_005e4da0:
005E4DA0  BF 48 1F 00 00            MOV EDI,0x1f48
005E4DA5  EB 0A                     JMP 0x005e4db1
LAB_005e4da7:
005E4DA7  BF 47 1F 00 00            MOV EDI,0x1f47
005E4DAC  EB 03                     JMP 0x005e4db1
LAB_005e4dae:
005E4DAE  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
LAB_005e4db1:
005E4DB1  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005E4DB4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005E4DB7  83 EA 1B                  SUB EDX,0x1b
005E4DBA  51                        PUSH ECX
005E4DBB  8B 8B 8D 00 00 00         MOV ECX,dword ptr [EBX + 0x8d]
005E4DC1  52                        PUSH EDX
005E4DC2  6A 00                     PUSH 0x0
005E4DC4  6A 1B                     PUSH 0x1b
005E4DC6  6A 00                     PUSH 0x0
005E4DC8  56                        PUSH ESI
005E4DC9  E8 C2 BC 12 00            CALL 0x00710a90
005E4DCE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005E4DD1  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005E4DD7  25 FF 00 00 00            AND EAX,0xff
005E4DDC  50                        PUSH EAX
005E4DDD  6A FF                     PUSH -0x1
005E4DDF  6A 00                     PUSH 0x0
005E4DE1  51                        PUSH ECX
005E4DE2  57                        PUSH EDI
005E4DE3  E8 58 B3 0C 00            CALL 0x006b0140
005E4DE8  8B 8B 8D 00 00 00         MOV ECX,dword ptr [EBX + 0x8d]
005E4DEE  50                        PUSH EAX
005E4DEF  E8 CC CB 12 00            CALL 0x007119c0
005E4DF4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005E4DF7  8B 02                     MOV EAX,dword ptr [EDX]
005E4DF9  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E4DFF  8B 8C 83 B9 02 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2b9]
005E4E06  51                        PUSH ECX
005E4E07  52                        PUSH EDX
005E4E08  E8 C3 E7 0C 00            CALL 0x006b35d0
005E4E0D  E9 49 04 00 00            JMP 0x005e525b
LAB_005e4e12:
005E4E12  81 EE 32 63 00 00         SUB ESI,0x6332
005E4E18  74 28                     JZ 0x005e4e42
005E4E1A  4E                        DEC ESI
005E4E1B  0F 85 3A 04 00 00         JNZ 0x005e525b
005E4E21  8A 8B CA 06 00 00         MOV CL,byte ptr [EBX + 0x6ca]
005E4E27  8D 93 D1 02 00 00         LEA EDX,[EBX + 0x2d1]
005E4E2D  80 F9 01                  CMP CL,0x1
005E4E30  0F 94 C1                  SETZ CL
005E4E33  51                        PUSH ECX
005E4E34  50                        PUSH EAX
005E4E35  52                        PUSH EDX
005E4E36  8B CB                     MOV ECX,EBX
005E4E38  E8 97 E3 E1 FF            CALL 0x004031d4
005E4E3D  E9 19 04 00 00            JMP 0x005e525b
LAB_005e4e42:
005E4E42  39 BB 84 04 00 00         CMP dword ptr [EBX + 0x484],EDI
005E4E48  0F 8C 0D 04 00 00         JL 0x005e525b
005E4E4E  3B C7                     CMP EAX,EDI
005E4E50  0F 84 05 04 00 00         JZ 0x005e525b
005E4E56  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005E4E59  3B C7                     CMP EAX,EDI
005E4E5B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E4E5E  0F 84 F7 03 00 00         JZ 0x005e525b
005E4E64  8B B3 8D 00 00 00         MOV ESI,dword ptr [EBX + 0x8d]
005E4E6A  39 BE A0 00 00 00         CMP dword ptr [ESI + 0xa0],EDI
005E4E70  74 09                     JZ 0x005e4e7b
005E4E72  56                        PUSH ESI
005E4E73  E8 18 B9 12 00            CALL 0x00710790
005E4E78  83 C4 04                  ADD ESP,0x4
LAB_005e4e7b:
005E4E7B  8B 86 8A 00 00 00         MOV EAX,dword ptr [ESI + 0x8a]
005E4E81  8B B3 BF 06 00 00         MOV ESI,dword ptr [EBX + 0x6bf]
005E4E87  85 F6                     TEST ESI,ESI
005E4E89  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005E4E8C  0F 84 C9 03 00 00         JZ 0x005e525b
005E4E92  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005E4E95  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005E4E98  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005E4E9B  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
005E4E9E  85 C0                     TEST EAX,EAX
005E4EA0  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005E4EA3  75 15                     JNZ 0x005e4eba
005E4EA5  66 8B 46 0E               MOV AX,word ptr [ESI + 0xe]
005E4EA9  0F AF C1                  IMUL EAX,ECX
005E4EAC  83 C0 1F                  ADD EAX,0x1f
005E4EAF  C1 E8 03                  SHR EAX,0x3
005E4EB2  25 FC FF FF 1F            AND EAX,0x1ffffffc
005E4EB7  0F AF C2                  IMUL EAX,EDX
LAB_005e4eba:
005E4EBA  56                        PUSH ESI
005E4EBB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005E4EBE  E8 DD 00 0D 00            CALL 0x006b4fa0
005E4EC3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005E4EC6  8B F8                     MOV EDI,EAX
005E4EC8  8B D1                     MOV EDX,ECX
005E4ECA  83 C8 FF                  OR EAX,0xffffffff
005E4ECD  C1 E9 02                  SHR ECX,0x2
005E4ED0  F3 AB                     STOSD.REP ES:EDI
005E4ED2  8B CA                     MOV ECX,EDX
005E4ED4  6A 00                     PUSH 0x0
005E4ED6  83 E1 03                  AND ECX,0x3
005E4ED9  6A 02                     PUSH 0x2
005E4EDB  F3 AA                     STOSB.REP ES:EDI
005E4EDD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005E4EE0  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
005E4EE3  50                        PUSH EAX
005E4EE4  57                        PUSH EDI
005E4EE5  6A 00                     PUSH 0x0
005E4EE7  6A 00                     PUSH 0x0
005E4EE9  6A 00                     PUSH 0x0
005E4EEB  56                        PUSH ESI
005E4EEC  E8 1F 27 0E 00            CALL 0x006c7610
005E4EF1  8A 8B C9 06 00 00         MOV CL,byte ptr [EBX + 0x6c9]
005E4EF7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005E4EFA  FE C9                     DEC CL
005E4EFC  F6 D9                     NEG CL
005E4EFE  1A C9                     SBB CL,CL
005E4F00  80 E1 EC                  AND CL,0xec
005E4F03  80 C1 2C                  ADD CL,0x2c
005E4F06  51                        PUSH ECX
005E4F07  6A 02                     PUSH 0x2
005E4F09  52                        PUSH EDX
005E4F0A  57                        PUSH EDI
005E4F0B  6A 00                     PUSH 0x0
005E4F0D  6A 00                     PUSH 0x0
005E4F0F  6A 00                     PUSH 0x0
005E4F11  56                        PUSH ESI
005E4F12  E8 59 26 0E 00            CALL 0x006c7570
005E4F17  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005E4F1A  33 C0                     XOR EAX,EAX
005E4F1C  66 8B 41 16               MOV AX,word ptr [ECX + 0x16]
005E4F20  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005E4F23  8B D0                     MOV EDX,EAX
005E4F25  8B F8                     MOV EDI,EAX
005E4F27  03 91 E0 01 00 00         ADD EDX,dword ptr [ECX + 0x1e0]
005E4F2D  3B FA                     CMP EDI,EDX
005E4F2F  0F 8D 8A 00 00 00         JGE 0x005e4fbf
LAB_005e4f35:
005E4F35  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E4F3B  8B 8A 48 05 00 00         MOV ECX,dword ptr [EDX + 0x548]
005E4F41  3B 79 08                  CMP EDI,dword ptr [ECX + 0x8]
005E4F44  7D 08                     JGE 0x005e4f4e
005E4F46  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
005E4F49  8B 0C B9                  MOV ECX,dword ptr [ECX + EDI*0x4]
005E4F4C  EB 02                     JMP 0x005e4f50
LAB_005e4f4e:
005E4F4E  33 C9                     XOR ECX,ECX
LAB_005e4f50:
005E4F50  85 C9                     TEST ECX,ECX
005E4F52  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005E4F55  74 4B                     JZ 0x005e4fa2
005E4F57  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005E4F5A  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005E4F5D  51                        PUSH ECX
005E4F5E  8B 52 2C                  MOV EDX,dword ptr [EDX + 0x2c]
005E4F61  52                        PUSH EDX
005E4F62  8B D7                     MOV EDX,EDI
005E4F64  2B D0                     SUB EDX,EAX
005E4F66  0F AF D1                  IMUL EDX,ECX
005E4F69  8B 8B 8D 00 00 00         MOV ECX,dword ptr [EBX + 0x8d]
005E4F6F  83 C2 0F                  ADD EDX,0xf
005E4F72  52                        PUSH EDX
005E4F73  6A 0F                     PUSH 0xf
005E4F75  6A 00                     PUSH 0x0
005E4F77  56                        PUSH ESI
005E4F78  E8 13 BB 12 00            CALL 0x00710a90
005E4F7D  8A 83 C7 06 00 00         MOV AL,byte ptr [EBX + 0x6c7]
005E4F83  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005E4F86  FE C8                     DEC AL
005E4F88  F6 D8                     NEG AL
005E4F8A  1B C0                     SBB EAX,EAX
005E4F8C  24 FE                     AND AL,0xfe
005E4F8E  83 C0 02                  ADD EAX,0x2
005E4F91  50                        PUSH EAX
005E4F92  6A FF                     PUSH -0x1
005E4F94  6A 00                     PUSH 0x0
005E4F96  51                        PUSH ECX
005E4F97  8B 8B 8D 00 00 00         MOV ECX,dword ptr [EBX + 0x8d]
005E4F9D  E8 1E CA 12 00            CALL 0x007119c0
LAB_005e4fa2:
005E4FA2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005E4FA5  33 C0                     XOR EAX,EAX
005E4FA7  47                        INC EDI
005E4FA8  66 8B 42 16               MOV AX,word ptr [EDX + 0x16]
005E4FAC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005E4FAF  8B C8                     MOV ECX,EAX
005E4FB1  03 8A E0 01 00 00         ADD ECX,dword ptr [EDX + 0x1e0]
005E4FB7  3B F9                     CMP EDI,ECX
005E4FB9  0F 8C 76 FF FF FF         JL 0x005e4f35
LAB_005e4fbf:
005E4FBF  8B 83 84 04 00 00         MOV EAX,dword ptr [EBX + 0x484]
005E4FC5  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E4FCB  50                        PUSH EAX
005E4FCC  51                        PUSH ECX
005E4FCD  E8 FE E5 0C 00            CALL 0x006b35d0
005E4FD2  E9 84 02 00 00            JMP 0x005e525b
LAB_005e4fd7:
005E4FD7  8A 8B CA 06 00 00         MOV CL,byte ptr [EBX + 0x6ca]
005E4FDD  80 F9 01                  CMP CL,0x1
005E4FE0  8B CB                     MOV ECX,EBX
005E4FE2  0F 94 C2                  SETZ DL
005E4FE5  52                        PUSH EDX
005E4FE6  50                        PUSH EAX
005E4FE7  8D 83 62 03 00 00         LEA EAX,[EBX + 0x362]
005E4FED  50                        PUSH EAX
005E4FEE  E8 E1 E1 E1 FF            CALL 0x004031d4
005E4FF3  E9 63 02 00 00            JMP 0x005e525b
LAB_005e4ff8:
005E4FF8  81 C6 CB 9C FF FF         ADD ESI,0xffff9ccb
005E4FFE  83 FE 04                  CMP ESI,0x4
005E5001  0F 87 54 02 00 00         JA 0x005e525b
switchD_005e5007::switchD:
005E5007  FF 24 B5 78 53 5E 00      JMP dword ptr [ESI*0x4 + 0x5e5378]
switchD_005e5007::caseD_6335:
005E500E  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
005E5011  33 D2                     XOR EDX,EDX
005E5013  66 8B 50 16               MOV DX,word ptr [EAX + 0x16]
005E5017  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005E501A  03 C2                     ADD EAX,EDX
005E501C  89 83 13 04 00 00         MOV dword ptr [EBX + 0x413],EAX
005E5022  8B 83 F7 03 00 00         MOV EAX,dword ptr [EBX + 0x3f7]
005E5028  83 F8 FF                  CMP EAX,-0x1
005E502B  0F 84 2A 02 00 00         JZ 0x005e525b
005E5031  8B 8B 13 04 00 00         MOV ECX,dword ptr [EBX + 0x413]
005E5037  8B 93 0F 04 00 00         MOV EDX,dword ptr [EBX + 0x40f]
005E503D  51                        PUSH ECX
005E503E  8B 8B FB 03 00 00         MOV ECX,dword ptr [EBX + 0x3fb]
005E5044  52                        PUSH EDX
005E5045  8B 93 3B 04 00 00         MOV EDX,dword ptr [EBX + 0x43b]
005E504B  51                        PUSH ECX
005E504C  50                        PUSH EAX
005E504D  E9 03 02 00 00            JMP 0x005e5255
switchD_005e5007::caseD_6336:
005E5052  39 BB 84 04 00 00         CMP dword ptr [EBX + 0x484],EDI
005E5058  0F 8C FD 01 00 00         JL 0x005e525b
005E505E  3B C7                     CMP EAX,EDI
005E5060  0F 84 F5 01 00 00         JZ 0x005e525b
005E5066  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005E5069  3B C7                     CMP EAX,EDI
005E506B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E506E  0F 84 E7 01 00 00         JZ 0x005e525b
005E5074  8B B3 CB 06 00 00         MOV ESI,dword ptr [EBX + 0x6cb]
005E507A  3B F7                     CMP ESI,EDI
005E507C  0F 84 D9 01 00 00         JZ 0x005e525b
005E5082  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
005E5085  8B BB 8D 00 00 00         MOV EDI,dword ptr [EBX + 0x8d]
005E508B  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005E508E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005E5091  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
005E5097  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005E509A  85 C0                     TEST EAX,EAX
005E509C  74 09                     JZ 0x005e50a7
005E509E  57                        PUSH EDI
005E509F  E8 EC B6 12 00            CALL 0x00710790
005E50A4  83 C4 04                  ADD ESP,0x4
LAB_005e50a7:
005E50A7  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005E50AA  8B 97 8A 00 00 00         MOV EDX,dword ptr [EDI + 0x8a]
005E50B0  85 C0                     TEST EAX,EAX
005E50B2  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005E50B5  75 17                     JNZ 0x005e50ce
005E50B7  66 8B 46 0E               MOV AX,word ptr [ESI + 0xe]
005E50BB  0F AF 46 04               IMUL EAX,dword ptr [ESI + 0x4]
005E50BF  83 C0 1F                  ADD EAX,0x1f
005E50C2  C1 E8 03                  SHR EAX,0x3
005E50C5  25 FC FF FF 1F            AND EAX,0x1ffffffc
005E50CA  0F AF 46 08               IMUL EAX,dword ptr [ESI + 0x8]
LAB_005e50ce:
005E50CE  56                        PUSH ESI
005E50CF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005E50D2  E8 C9 FE 0C 00            CALL 0x006b4fa0
005E50D7  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005E50DA  8B F8                     MOV EDI,EAX
005E50DC  8B D1                     MOV EDX,ECX
005E50DE  83 C8 FF                  OR EAX,0xffffffff
005E50E1  C1 E9 02                  SHR ECX,0x2
005E50E4  F3 AB                     STOSD.REP ES:EDI
005E50E6  8B CA                     MOV ECX,EDX
005E50E8  6A 00                     PUSH 0x0
005E50EA  83 E1 03                  AND ECX,0x3
005E50ED  6A 02                     PUSH 0x2
005E50EF  F3 AA                     STOSB.REP ES:EDI
005E50F1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005E50F4  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
005E50F7  50                        PUSH EAX
005E50F8  57                        PUSH EDI
005E50F9  6A 00                     PUSH 0x0
005E50FB  6A 00                     PUSH 0x0
005E50FD  6A 00                     PUSH 0x0
005E50FF  56                        PUSH ESI
005E5100  E8 0B 25 0E 00            CALL 0x006c7610
005E5105  8A 8B D5 06 00 00         MOV CL,byte ptr [EBX + 0x6d5]
005E510B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005E510E  FE C9                     DEC CL
005E5110  F6 D9                     NEG CL
005E5112  1A C9                     SBB CL,CL
005E5114  80 E1 EC                  AND CL,0xec
005E5117  80 C1 2C                  ADD CL,0x2c
005E511A  51                        PUSH ECX
005E511B  6A 02                     PUSH 0x2
005E511D  52                        PUSH EDX
005E511E  57                        PUSH EDI
005E511F  6A 00                     PUSH 0x0
005E5121  6A 00                     PUSH 0x0
005E5123  6A 00                     PUSH 0x0
005E5125  56                        PUSH ESI
005E5126  E8 45 24 0E 00            CALL 0x006c7570
005E512B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005E512E  33 C0                     XOR EAX,EAX
005E5130  66 8B 41 16               MOV AX,word ptr [ECX + 0x16]
005E5134  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005E5137  8B D0                     MOV EDX,EAX
005E5139  8B F8                     MOV EDI,EAX
005E513B  03 91 E0 01 00 00         ADD EDX,dword ptr [ECX + 0x1e0]
005E5141  3B FA                     CMP EDI,EDX
005E5143  0F 8D 80 00 00 00         JGE 0x005e51c9
LAB_005e5149:
005E5149  8B 8B 43 06 00 00         MOV ECX,dword ptr [EBX + 0x643]
005E514F  3B 79 08                  CMP EDI,dword ptr [ECX + 0x8]
005E5152  7D 08                     JGE 0x005e515c
005E5154  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
005E5157  8B 0C BA                  MOV ECX,dword ptr [EDX + EDI*0x4]
005E515A  EB 02                     JMP 0x005e515e
LAB_005e515c:
005E515C  33 C9                     XOR ECX,ECX
LAB_005e515e:
005E515E  85 C9                     TEST ECX,ECX
005E5160  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005E5163  74 4B                     JZ 0x005e51b0
005E5165  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005E5168  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005E516B  51                        PUSH ECX
005E516C  8B 52 2C                  MOV EDX,dword ptr [EDX + 0x2c]
005E516F  52                        PUSH EDX
005E5170  8B D7                     MOV EDX,EDI
005E5172  2B D0                     SUB EDX,EAX
005E5174  0F AF D1                  IMUL EDX,ECX
005E5177  8B 8B 89 00 00 00         MOV ECX,dword ptr [EBX + 0x89]
005E517D  83 C2 0F                  ADD EDX,0xf
005E5180  52                        PUSH EDX
005E5181  6A 0F                     PUSH 0xf
005E5183  6A 00                     PUSH 0x0
005E5185  56                        PUSH ESI
005E5186  E8 05 B9 12 00            CALL 0x00710a90
005E518B  8A 83 D3 06 00 00         MOV AL,byte ptr [EBX + 0x6d3]
005E5191  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005E5194  FE C8                     DEC AL
005E5196  F6 D8                     NEG AL
005E5198  1B C0                     SBB EAX,EAX
005E519A  24 FE                     AND AL,0xfe
005E519C  83 C0 02                  ADD EAX,0x2
005E519F  50                        PUSH EAX
005E51A0  6A FF                     PUSH -0x1
005E51A2  6A 00                     PUSH 0x0
005E51A4  51                        PUSH ECX
005E51A5  8B 8B 89 00 00 00         MOV ECX,dword ptr [EBX + 0x89]
005E51AB  E8 10 C8 12 00            CALL 0x007119c0
LAB_005e51b0:
005E51B0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005E51B3  33 C0                     XOR EAX,EAX
005E51B5  47                        INC EDI
005E51B6  66 8B 42 16               MOV AX,word ptr [EDX + 0x16]
005E51BA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005E51BD  8B C8                     MOV ECX,EAX
005E51BF  03 8A E0 01 00 00         ADD ECX,dword ptr [EDX + 0x1e0]
005E51C5  3B F9                     CMP EDI,ECX
005E51C7  7C 80                     JL 0x005e5149
LAB_005e51c9:
005E51C9  8B 83 3F 06 00 00         MOV EAX,dword ptr [EBX + 0x63f]
005E51CF  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E51D5  50                        PUSH EAX
005E51D6  51                        PUSH ECX
005E51D7  E8 F4 E3 0C 00            CALL 0x006b35d0
005E51DC  EB 7D                     JMP 0x005e525b
switchD_005e5007::caseD_6337:
005E51DE  8A 8B D6 06 00 00         MOV CL,byte ptr [EBX + 0x6d6]
005E51E4  80 F9 01                  CMP CL,0x1
005E51E7  8B CB                     MOV ECX,EBX
005E51E9  0F 94 C2                  SETZ DL
005E51EC  52                        PUSH EDX
005E51ED  50                        PUSH EAX
005E51EE  8D 83 8C 04 00 00         LEA EAX,[EBX + 0x48c]
005E51F4  50                        PUSH EAX
005E51F5  E8 DA DF E1 FF            CALL 0x004031d4
005E51FA  EB 5F                     JMP 0x005e525b
switchD_005e5007::caseD_6338:
005E51FC  8A 8B D6 06 00 00         MOV CL,byte ptr [EBX + 0x6d6]
005E5202  8D 93 1D 05 00 00         LEA EDX,[EBX + 0x51d]
005E5208  80 F9 01                  CMP CL,0x1
005E520B  0F 94 C1                  SETZ CL
005E520E  51                        PUSH ECX
005E520F  50                        PUSH EAX
005E5210  52                        PUSH EDX
005E5211  8B CB                     MOV ECX,EBX
005E5213  E8 BC DF E1 FF            CALL 0x004031d4
005E5218  EB 41                     JMP 0x005e525b
switchD_005e5007::caseD_6339:
005E521A  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
005E521D  33 D2                     XOR EDX,EDX
005E521F  66 8B 50 16               MOV DX,word ptr [EAX + 0x16]
005E5223  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005E5226  03 C2                     ADD EAX,EDX
005E5228  89 83 CE 05 00 00         MOV dword ptr [EBX + 0x5ce],EAX
005E522E  8B 83 B2 05 00 00         MOV EAX,dword ptr [EBX + 0x5b2]
005E5234  83 F8 FF                  CMP EAX,-0x1
005E5237  74 22                     JZ 0x005e525b
005E5239  8B 8B CE 05 00 00         MOV ECX,dword ptr [EBX + 0x5ce]
005E523F  8B 93 CA 05 00 00         MOV EDX,dword ptr [EBX + 0x5ca]
005E5245  51                        PUSH ECX
005E5246  8B 8B B6 05 00 00         MOV ECX,dword ptr [EBX + 0x5b6]
005E524C  52                        PUSH EDX
005E524D  8B 93 F6 05 00 00         MOV EDX,dword ptr [EBX + 0x5f6]
005E5253  51                        PUSH ECX
005E5254  50                        PUSH EAX
LAB_005e5255:
005E5255  52                        PUSH EDX
005E5256  E8 D5 E4 0C 00            CALL 0x006b3730
switchD_005e45f7::caseD_1:
005E525B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005E525E  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
005E5261  51                        PUSH ECX
005E5262  8B CB                     MOV ECX,EBX
005E5264  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E5269  E8 62 0D 10 00            CALL 0x006e5fd0
005E526E  5F                        POP EDI
005E526F  5E                        POP ESI
005E5270  5B                        POP EBX
005E5271  8B E5                     MOV ESP,EBP
005E5273  5D                        POP EBP
005E5274  C2 04 00                  RET 0x4
LAB_005e5277:
005E5277  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
005E527A  68 A4 DC 7C 00            PUSH 0x7cdca4
005E527F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E5284  56                        PUSH ESI
005E5285  57                        PUSH EDI
005E5286  68 B5 05 00 00            PUSH 0x5b5
005E528B  68 94 D9 7C 00            PUSH 0x7cd994
005E5290  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E5296  E8 35 82 0C 00            CALL 0x006ad4d0
005E529B  83 C4 18                  ADD ESP,0x18
005E529E  85 C0                     TEST EAX,EAX
005E52A0  74 01                     JZ 0x005e52a3
005E52A2  CC                        INT3
LAB_005e52a3:
005E52A3  68 B5 05 00 00            PUSH 0x5b5
005E52A8  68 94 D9 7C 00            PUSH 0x7cd994
005E52AD  57                        PUSH EDI
005E52AE  56                        PUSH ESI
005E52AF  E8 8C 0B 0C 00            CALL 0x006a5e40
005E52B4  5F                        POP EDI
005E52B5  5E                        POP ESI
005E52B6  B8 FF FF 00 00            MOV EAX,0xffff
005E52BB  5B                        POP EBX
005E52BC  8B E5                     MOV ESP,EBP
005E52BE  5D                        POP EBP
005E52BF  C2 04 00                  RET 0x4
