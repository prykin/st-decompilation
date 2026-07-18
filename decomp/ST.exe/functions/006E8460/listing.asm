FUN_006e8460:
006E8460  55                        PUSH EBP
006E8461  8B EC                     MOV EBP,ESP
006E8463  53                        PUSH EBX
006E8464  56                        PUSH ESI
006E8465  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E8468  57                        PUSH EDI
006E8469  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006E846C  8B C6                     MOV EAX,ESI
006E846E  2B C7                     SUB EAX,EDI
006E8470  8B 3D 84 6D 85 00         MOV EDI,dword ptr [0x00856d84]
006E8476  0F AF C7                  IMUL EAX,EDI
006E8479  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006E847C  DB 45 08                  FILD dword ptr [EBP + 0x8]
006E847F  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E8485  DA 05 84 6D 85 00         FIADD dword ptr [0x00856d84]
006E848B  E8 F8 5D 04 00            CALL 0x0072e288
006E8490  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E8493  8B D8                     MOV EBX,EAX
006E8495  03 F1                     ADD ESI,ECX
006E8497  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006E849A  0F AF F7                  IMUL ESI,EDI
006E849D  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
006E84A0  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006E84A3  D8 0D 80 6D 85 00         FMUL float ptr [0x00856d80]
006E84A9  E8 DA 5D 04 00            CALL 0x0072e288
006E84AE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E84B1  8B F0                     MOV ESI,EAX
006E84B3  8D 41 FF                  LEA EAX,[ECX + -0x1]
006E84B6  3B F0                     CMP ESI,EAX
006E84B8  7D 02                     JGE 0x006e84bc
006E84BA  8B F0                     MOV ESI,EAX
LAB_006e84bc:
006E84BC  A1 A0 6D 85 00            MOV EAX,[0x00856da0]
006E84C1  8B D0                     MOV EDX,EAX
006E84C3  2B D1                     SUB EDX,ECX
006E84C5  3B F2                     CMP ESI,EDX
006E84C7  7C 03                     JL 0x006e84cc
006E84C9  8D 72 FF                  LEA ESI,[EDX + -0x1]
LAB_006e84cc:
006E84CC  3B F7                     CMP ESI,EDI
006E84CE  7F 20                     JG 0x006e84f0
006E84D0  8B C7                     MOV EAX,EDI
006E84D2  2B C6                     SUB EAX,ESI
006E84D4  3B D8                     CMP EBX,EAX
006E84D6  7D 05                     JGE 0x006e84dd
006E84D8  8B D8                     MOV EBX,EAX
006E84DA  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
LAB_006e84dd:
006E84DD  8D 54 0B FF               LEA EDX,[EBX + ECX*0x1 + -0x1]
006E84E1  8D 04 37                  LEA EAX,[EDI + ESI*0x1]
006E84E4  3B D0                     CMP EDX,EAX
006E84E6  7C 3A                     JL 0x006e8522
006E84E8  2B F9                     SUB EDI,ECX
006E84EA  03 FE                     ADD EDI,ESI
006E84EC  8B DF                     MOV EBX,EDI
006E84EE  EB 2F                     JMP 0x006e851f
LAB_006e84f0:
006E84F0  8B D7                     MOV EDX,EDI
006E84F2  2B D0                     SUB EDX,EAX
006E84F4  03 D6                     ADD EDX,ESI
006E84F6  8D 42 01                  LEA EAX,[EDX + 0x1]
006E84F9  3B D8                     CMP EBX,EAX
006E84FB  7F 06                     JG 0x006e8503
006E84FD  8D 5A 02                  LEA EBX,[EDX + 0x2]
006E8500  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
LAB_006e8503:
006E8503  A1 A0 6D 85 00            MOV EAX,[0x00856da0]
006E8508  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
006E850B  2B C6                     SUB EAX,ESI
006E850D  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006E8510  03 C7                     ADD EAX,EDI
006E8512  3B D0                     CMP EDX,EAX
006E8514  7C 0C                     JL 0x006e8522
006E8516  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006E8519  2B D9                     SUB EBX,ECX
006E851B  8D 5C 3B FF               LEA EBX,[EBX + EDI*0x1 + -0x1]
LAB_006e851f:
006E851F  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
LAB_006e8522:
006E8522  33 C0                     XOR EAX,EAX
006E8524  85 C9                     TEST ECX,ECX
006E8526  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006E8529  7E 43                     JLE 0x006e856e
006E852B  EB 03                     JMP 0x006e8530
LAB_006e852d:
006E852D  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_006e8530:
006E8530  03 C6                     ADD EAX,ESI
006E8532  8B 3D 88 6D 85 00         MOV EDI,dword ptr [0x00856d88]
006E8538  0F AF 05 8C 6D 85 00      IMUL EAX,dword ptr [0x00856d8c]
006E853F  2B F8                     SUB EDI,EAX
006E8541  8A 45 14                  MOV AL,byte ptr [EBP + 0x14]
006E8544  03 FB                     ADD EDI,EBX
006E8546  8A D8                     MOV BL,AL
006E8548  8A FB                     MOV BH,BL
006E854A  8B D1                     MOV EDX,ECX
006E854C  8B C3                     MOV EAX,EBX
006E854E  C1 E0 10                  SHL EAX,0x10
006E8551  66 8B C3                  MOV AX,BX
006E8554  C1 E9 02                  SHR ECX,0x2
006E8557  F3 AB                     STOSD.REP ES:EDI
006E8559  8B CA                     MOV ECX,EDX
006E855B  83 E1 03                  AND ECX,0x3
006E855E  F3 AA                     STOSB.REP ES:EDI
006E8560  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E8563  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E8566  40                        INC EAX
006E8567  3B C1                     CMP EAX,ECX
006E8569  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006E856C  7C BF                     JL 0x006e852d
LAB_006e856e:
006E856E  5F                        POP EDI
006E856F  5E                        POP ESI
006E8570  5B                        POP EBX
006E8571  5D                        POP EBP
006E8572  C3                        RET
