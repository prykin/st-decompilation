FUN_005734c0:
005734C0  55                        PUSH EBP
005734C1  8B EC                     MOV EBP,ESP
005734C3  51                        PUSH ECX
005734C4  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
005734C7  53                        PUSH EBX
005734C8  56                        PUSH ESI
005734C9  57                        PUSH EDI
005734CA  A8 01                     TEST AL,0x1
005734CC  8B D9                     MOV EBX,ECX
005734CE  0F 84 20 01 00 00         JZ 0x005735f4
005734D4  B9 20 00 00 00            MOV ECX,0x20
005734D9  33 C0                     XOR EAX,EAX
005734DB  BF F8 72 80 00            MOV EDI,0x8072f8
005734E0  33 F6                     XOR ESI,ESI
005734E2  F3 AB                     STOSD.REP ES:EDI
005734E4  66 AB                     STOSW ES:EDI
005734E6  33 FF                     XOR EDI,EDI
005734E8  C7 05 FC 72 80 00 82 00 00 00  MOV dword ptr [0x008072fc],0x82
005734F2  33 C0                     XOR EAX,EAX
LAB_005734f4:
005734F4  33 C9                     XOR ECX,ECX
005734F6  8A 88 F8 72 80 00         MOV CL,byte ptr [EAX + 0x8072f8]
005734FC  03 F1                     ADD ESI,ECX
005734FE  40                        INC EAX
005734FF  3D 82 00 00 00            CMP EAX,0x82
00573504  72 EE                     JC 0x005734f4
00573506  A0 01 73 80 00            MOV AL,[0x00807301]
0057350B  89 35 F8 72 80 00         MOV dword ptr [0x008072f8],ESI
00573511  BE 01 00 00 00            MOV ESI,0x1
00573516  0C 0F                     OR AL,0xf
00573518  8B CB                     MOV ECX,EBX
0057351A  89 35 1A 73 80 00         MOV dword ptr [0x0080731a],ESI
00573520  89 35 1E 73 80 00         MOV dword ptr [0x0080731e],ESI
00573526  89 35 22 73 80 00         MOV dword ptr [0x00807322],ESI
0057352C  C6 05 26 73 80 00 01      MOV byte ptr [0x00807326],0x1
00573533  89 35 28 73 80 00         MOV dword ptr [0x00807328],ESI
00573539  89 35 2C 73 80 00         MOV dword ptr [0x0080732c],ESI
0057353F  C6 05 27 73 80 00 07      MOV byte ptr [0x00807327],0x7
00573546  A2 01 73 80 00            MOV [0x00807301],AL
0057354B  C6 05 00 73 80 00 08      MOV byte ptr [0x00807300],0x8
00573552  66 C7 05 30 73 80 00 03 00  MOV word ptr [0x00807330],0x3
0057355B  89 35 32 73 80 00         MOV dword ptr [0x00807332],ESI
00573561  89 35 36 73 80 00         MOV dword ptr [0x00807336],ESI
00573567  C6 05 4C 73 80 00 01      MOV byte ptr [0x0080734c],0x1
0057356E  C6 05 3A 73 80 00 00      MOV byte ptr [0x0080733a],0x0
00573575  C6 05 3B 73 80 00 02      MOV byte ptr [0x0080733b],0x2
0057357C  89 3D 3C 73 80 00         MOV dword ptr [0x0080733c],EDI
00573582  C6 05 40 73 80 00 00      MOV byte ptr [0x00807340],0x0
00573589  C6 05 61 73 80 00 01      MOV byte ptr [0x00807361],0x1
00573590  C6 05 41 73 80 00 01      MOV byte ptr [0x00807341],0x1
00573597  89 35 42 73 80 00         MOV dword ptr [0x00807342],ESI
0057359D  C6 05 46 73 80 00 0A      MOV byte ptr [0x00807346],0xa
005735A4  C6 05 47 73 80 00 01      MOV byte ptr [0x00807347],0x1
005735AB  C6 05 48 73 80 00 00      MOV byte ptr [0x00807348],0x0
005735B2  C6 05 49 73 80 00 00      MOV byte ptr [0x00807349],0x0
005735B9  C6 05 4D 73 80 00 01      MOV byte ptr [0x0080734d],0x1
005735C0  89 3D 4E 73 80 00         MOV dword ptr [0x0080734e],EDI
005735C6  89 3D 52 73 80 00         MOV dword ptr [0x00807352],EDI
005735CC  89 3D 56 73 80 00         MOV dword ptr [0x00807356],EDI
005735D2  89 3D 5A 73 80 00         MOV dword ptr [0x0080735a],EDI
005735D8  C6 05 5E 73 80 00 00      MOV byte ptr [0x0080735e],0x0
005735DF  C6 05 63 73 80 00 02      MOV byte ptr [0x00807363],0x2
005735E6  C6 05 64 73 80 00 01      MOV byte ptr [0x00807364],0x1
005735ED  E8 6E 01 E9 FF            CALL 0x00403760
005735F2  EB 07                     JMP 0x005735fb
LAB_005735f4:
005735F4  BE 01 00 00 00            MOV ESI,0x1
005735F9  33 FF                     XOR EDI,EDI
LAB_005735fb:
005735FB  F6 45 0C 02               TEST byte ptr [EBP + 0xc],0x2
005735FF  74 10                     JZ 0x00573611
00573601  B9 40 00 00 00            MOV ECX,0x40
00573606  33 C0                     XOR EAX,EAX
00573608  BF F8 71 80 00            MOV EDI,0x8071f8
0057360D  F3 AB                     STOSD.REP ES:EDI
0057360F  33 FF                     XOR EDI,EDI
LAB_00573611:
00573611  39 7D 08                  CMP dword ptr [EBP + 0x8],EDI
00573614  0F 84 CB 01 00 00         JZ 0x005737e5
0057361A  8D 55 0C                  LEA EDX,[EBP + 0xc]
0057361D  52                        PUSH EDX
0057361E  68 44 A5 7C 00            PUSH 0x7ca544
00573623  68 01 00 00 80            PUSH 0x80000001
00573628  FF 15 58 B9 85 00         CALL dword ptr [0x0085b958]
0057362E  85 C0                     TEST EAX,EAX
00573630  75 3A                     JNZ 0x0057366c
00573632  8D 45 08                  LEA EAX,[EBP + 0x8]
00573635  8D 8B 85 07 00 00         LEA ECX,[EBX + 0x785]
0057363B  50                        PUSH EAX
0057363C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057363F  8D 55 FC                  LEA EDX,[EBP + -0x4]
00573642  51                        PUSH ECX
00573643  52                        PUSH EDX
00573644  57                        PUSH EDI
00573645  68 70 A5 7C 00            PUSH 0x7ca570
0057364A  50                        PUSH EAX
0057364B  C7 45 08 40 00 00 00      MOV dword ptr [EBP + 0x8],0x40
00573652  FF 15 54 B9 85 00         CALL dword ptr [0x0085b954]
00573658  85 C0                     TEST EAX,EAX
0057365A  74 02                     JZ 0x0057365e
0057365C  33 F6                     XOR ESI,ESI
LAB_0057365e:
0057365E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00573661  51                        PUSH ECX
00573662  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
00573668  3B F7                     CMP ESI,EDI
0057366A  75 28                     JNZ 0x00573694
LAB_0057366c:
0057366C  BF A0 16 80 00            MOV EDI,0x8016a0
00573671  83 C9 FF                  OR ECX,0xffffffff
00573674  33 C0                     XOR EAX,EAX
00573676  8D 93 85 07 00 00         LEA EDX,[EBX + 0x785]
0057367C  F2 AE                     SCASB.REPNE ES:EDI
0057367E  F7 D1                     NOT ECX
00573680  2B F9                     SUB EDI,ECX
00573682  8B C1                     MOV EAX,ECX
00573684  8B F7                     MOV ESI,EDI
00573686  8B FA                     MOV EDI,EDX
00573688  C1 E9 02                  SHR ECX,0x2
0057368B  F3 A5                     MOVSD.REP ES:EDI,ESI
0057368D  8B C8                     MOV ECX,EAX
0057368F  83 E1 03                  AND ECX,0x3
00573692  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00573694:
00573694  83 C9 FF                  OR ECX,0xffffffff
00573697  BF 94 A6 7C 00            MOV EDI,0x7ca694
0057369C  33 C0                     XOR EAX,EAX
0057369E  8D 93 40 06 00 00         LEA EDX,[EBX + 0x640]
005736A4  F2 AE                     SCASB.REPNE ES:EDI
005736A6  F7 D1                     NOT ECX
005736A8  2B F9                     SUB EDI,ECX
005736AA  8B C1                     MOV EAX,ECX
005736AC  8B F7                     MOV ESI,EDI
005736AE  C1 E9 02                  SHR ECX,0x2
005736B1  8B FA                     MOV EDI,EDX
005736B3  8D 93 49 07 00 00         LEA EDX,[EBX + 0x749]
005736B9  F3 A5                     MOVSD.REP ES:EDI,ESI
005736BB  8B C8                     MOV ECX,EAX
005736BD  33 C0                     XOR EAX,EAX
005736BF  83 E1 03                  AND ECX,0x3
005736C2  F3 A4                     MOVSB.REP ES:EDI,ESI
005736C4  83 C9 FF                  OR ECX,0xffffffff
005736C7  BF 84 A6 7C 00            MOV EDI,0x7ca684
005736CC  C7 83 79 07 00 00 08 00 B0 DE  MOV dword ptr [EBX + 0x779],0xdeb00008
005736D6  C7 83 7D 07 00 00 00 00 00 00  MOV dword ptr [EBX + 0x77d],0x0
005736E0  F2 AE                     SCASB.REPNE ES:EDI
005736E2  F7 D1                     NOT ECX
005736E4  2B F9                     SUB EDI,ECX
005736E6  8B C1                     MOV EAX,ECX
005736E8  8B F7                     MOV ESI,EDI
005736EA  C1 E9 02                  SHR ECX,0x2
005736ED  8B FA                     MOV EDI,EDX
005736EF  8D 53 28                  LEA EDX,[EBX + 0x28]
005736F2  F3 A5                     MOVSD.REP ES:EDI,ESI
005736F4  8B C8                     MOV ECX,EAX
005736F6  33 C0                     XOR EAX,EAX
005736F8  83 E1 03                  AND ECX,0x3
005736FB  F3 A4                     MOVSB.REP ES:EDI,ESI
005736FD  BF A0 16 80 00            MOV EDI,0x8016a0
00573702  83 C9 FF                  OR ECX,0xffffffff
00573705  F2 AE                     SCASB.REPNE ES:EDI
00573707  F7 D1                     NOT ECX
00573709  2B F9                     SUB EDI,ECX
0057370B  8B C1                     MOV EAX,ECX
0057370D  8B F7                     MOV ESI,EDI
0057370F  8B FA                     MOV EDI,EDX
00573711  8D 93 2C 01 00 00         LEA EDX,[EBX + 0x12c]
00573717  C1 E9 02                  SHR ECX,0x2
0057371A  F3 A5                     MOVSD.REP ES:EDI,ESI
0057371C  8B C8                     MOV ECX,EAX
0057371E  33 C0                     XOR EAX,EAX
00573720  83 E1 03                  AND ECX,0x3
00573723  F3 A4                     MOVSB.REP ES:EDI,ESI
00573725  BF A0 16 80 00            MOV EDI,0x8016a0
0057372A  83 C9 FF                  OR ECX,0xffffffff
0057372D  F2 AE                     SCASB.REPNE ES:EDI
0057372F  F7 D1                     NOT ECX
00573731  2B F9                     SUB EDI,ECX
00573733  8B C1                     MOV EAX,ECX
00573735  8B F7                     MOV ESI,EDI
00573737  8B FA                     MOV EDI,EDX
00573739  8D 93 38 04 00 00         LEA EDX,[EBX + 0x438]
0057373F  C1 E9 02                  SHR ECX,0x2
00573742  F3 A5                     MOVSD.REP ES:EDI,ESI
00573744  8B C8                     MOV ECX,EAX
00573746  33 C0                     XOR EAX,EAX
00573748  83 E1 03                  AND ECX,0x3
0057374B  F3 A4                     MOVSB.REP ES:EDI,ESI
0057374D  BF A0 16 80 00            MOV EDI,0x8016a0
00573752  83 C9 FF                  OR ECX,0xffffffff
00573755  F2 AE                     SCASB.REPNE ES:EDI
00573757  F7 D1                     NOT ECX
00573759  2B F9                     SUB EDI,ECX
0057375B  8B C1                     MOV EAX,ECX
0057375D  8B F7                     MOV ESI,EDI
0057375F  8B FA                     MOV EDI,EDX
00573761  8D 93 30 02 00 00         LEA EDX,[EBX + 0x230]
00573767  C1 E9 02                  SHR ECX,0x2
0057376A  F3 A5                     MOVSD.REP ES:EDI,ESI
0057376C  8B C8                     MOV ECX,EAX
0057376E  83 E1 03                  AND ECX,0x3
00573771  F3 A4                     MOVSB.REP ES:EDI,ESI
00573773  83 C9 FF                  OR ECX,0xffffffff
00573776  BF A0 16 80 00            MOV EDI,0x8016a0
0057377B  33 C0                     XOR EAX,EAX
0057377D  F2 AE                     SCASB.REPNE ES:EDI
0057377F  F7 D1                     NOT ECX
00573781  2B F9                     SUB EDI,ECX
00573783  8B C1                     MOV EAX,ECX
00573785  8B F7                     MOV ESI,EDI
00573787  8B FA                     MOV EDI,EDX
00573789  8D 93 34 03 00 00         LEA EDX,[EBX + 0x334]
0057378F  C1 E9 02                  SHR ECX,0x2
00573792  F3 A5                     MOVSD.REP ES:EDI,ESI
00573794  8B C8                     MOV ECX,EAX
00573796  33 C0                     XOR EAX,EAX
00573798  83 E1 03                  AND ECX,0x3
0057379B  F3 A4                     MOVSB.REP ES:EDI,ESI
0057379D  BF A0 16 80 00            MOV EDI,0x8016a0
005737A2  83 C9 FF                  OR ECX,0xffffffff
005737A5  F2 AE                     SCASB.REPNE ES:EDI
005737A7  F7 D1                     NOT ECX
005737A9  2B F9                     SUB EDI,ECX
005737AB  8B C1                     MOV EAX,ECX
005737AD  8B F7                     MOV ESI,EDI
005737AF  8B FA                     MOV EDI,EDX
005737B1  8D 93 45 06 00 00         LEA EDX,[EBX + 0x645]
005737B7  C1 E9 02                  SHR ECX,0x2
005737BA  F3 A5                     MOVSD.REP ES:EDI,ESI
005737BC  8B C8                     MOV ECX,EAX
005737BE  33 C0                     XOR EAX,EAX
005737C0  83 E1 03                  AND ECX,0x3
005737C3  F3 A4                     MOVSB.REP ES:EDI,ESI
005737C5  BF A0 16 80 00            MOV EDI,0x8016a0
005737CA  83 C9 FF                  OR ECX,0xffffffff
005737CD  F2 AE                     SCASB.REPNE ES:EDI
005737CF  F7 D1                     NOT ECX
005737D1  2B F9                     SUB EDI,ECX
005737D3  8B C1                     MOV EAX,ECX
005737D5  8B F7                     MOV ESI,EDI
005737D7  8B FA                     MOV EDI,EDX
005737D9  C1 E9 02                  SHR ECX,0x2
005737DC  F3 A5                     MOVSD.REP ES:EDI,ESI
005737DE  8B C8                     MOV ECX,EAX
005737E0  83 E1 03                  AND ECX,0x3
005737E3  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005737e5:
005737E5  8B CB                     MOV ECX,EBX
005737E7  E8 BC EE E8 FF            CALL 0x004026a8
005737EC  5F                        POP EDI
005737ED  5E                        POP ESI
005737EE  5B                        POP EBX
005737EF  8B E5                     MOV ESP,EBP
005737F1  5D                        POP EBP
005737F2  C2 08 00                  RET 0x8
