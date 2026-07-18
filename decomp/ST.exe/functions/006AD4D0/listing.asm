FUN_006ad4d0:
006AD4D0  55                        PUSH EBP
006AD4D1  8B EC                     MOV EBP,ESP
006AD4D3  81 EC 48 07 00 00         SUB ESP,0x748
006AD4D9  56                        PUSH ESI
006AD4DA  89 6D FC                  MOV dword ptr [EBP + -0x4],EBP
006AD4DD  A1 98 D7 7E 00            MOV EAX,[0x007ed798]
006AD4E2  85 C0                     TEST EAX,EAX
006AD4E4  75 11                     JNZ 0x006ad4f7
006AD4E6  C7 05 D0 8D 85 00 00 00 00 00  MOV dword ptr [0x00858dd0],0x0
006AD4F0  33 C0                     XOR EAX,EAX
006AD4F2  5E                        POP ESI
006AD4F3  8B E5                     MOV ESP,EBP
006AD4F5  5D                        POP EBP
006AD4F6  C3                        RET
LAB_006ad4f7:
006AD4F7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AD4FA  53                        PUSH EBX
006AD4FB  85 C0                     TEST EAX,EAX
006AD4FD  57                        PUSH EDI
006AD4FE  C6 85 B8 FC FF FF 00      MOV byte ptr [EBP + 0xfffffcb8],0x0
006AD505  C6 85 B8 F8 FF FF 00      MOV byte ptr [EBP + 0xfffff8b8],0x0
006AD50C  74 4D                     JZ 0x006ad55b
006AD50E  8D 4D 1C                  LEA ECX,[EBP + 0x1c]
006AD511  8D 95 B8 FC FF FF         LEA EDX,[EBP + 0xfffffcb8]
006AD517  51                        PUSH ECX
006AD518  50                        PUSH EAX
006AD519  68 00 02 00 00            PUSH 0x200
006AD51E  52                        PUSH EDX
006AD51F  E8 BC 2B 08 00            CALL 0x007300e0
006AD524  83 C4 10                  ADD ESP,0x10
006AD527  85 C0                     TEST EAX,EAX
006AD529  7D 30                     JGE 0x006ad55b
006AD52B  BF B4 D7 7E 00            MOV EDI,0x7ed7b4
006AD530  83 C9 FF                  OR ECX,0xffffffff
006AD533  33 C0                     XOR EAX,EAX
006AD535  8D 95 B8 FC FF FF         LEA EDX,[EBP + 0xfffffcb8]
006AD53B  F2 AE                     SCASB.REPNE ES:EDI
006AD53D  F7 D1                     NOT ECX
006AD53F  2B F9                     SUB EDI,ECX
006AD541  8B F7                     MOV ESI,EDI
006AD543  8B D9                     MOV EBX,ECX
006AD545  8B FA                     MOV EDI,EDX
006AD547  83 C9 FF                  OR ECX,0xffffffff
006AD54A  F2 AE                     SCASB.REPNE ES:EDI
006AD54C  8B CB                     MOV ECX,EBX
006AD54E  4F                        DEC EDI
006AD54F  C1 E9 02                  SHR ECX,0x2
006AD552  F3 A5                     MOVSD.REP ES:EDI,ESI
006AD554  8B CB                     MOV ECX,EBX
006AD556  83 E1 03                  AND ECX,0x3
006AD559  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006ad55b:
006AD55B  A1 9C D7 7E 00            MOV EAX,[0x007ed79c]
006AD560  85 C0                     TEST EAX,EAX
006AD562  74 77                     JZ 0x006ad5db
006AD564  A1 B4 4E 85 00            MOV EAX,[0x00854eb4]
006AD569  85 C0                     TEST EAX,EAX
006AD56B  74 6E                     JZ 0x006ad5db
006AD56D  8B 15 94 4A 85 00         MOV EDX,dword ptr [0x00854a94]
006AD573  33 C9                     XOR ECX,ECX
006AD575  66 8B 0D 96 4A 85 00      MOV CX,word ptr [0x00854a96]
006AD57C  81 E2 FF FF 00 00         AND EDX,0xffff
006AD582  51                        PUSH ECX
006AD583  33 C9                     XOR ECX,ECX
006AD585  66 8B 0D 92 4A 85 00      MOV CX,word ptr [0x00854a92]
006AD58C  52                        PUSH EDX
006AD58D  8B 15 90 4A 85 00         MOV EDX,dword ptr [0x00854a90]
006AD593  51                        PUSH ECX
006AD594  8B 0D 88 4A 85 00         MOV ECX,dword ptr [0x00854a88]
006AD59A  81 E2 FF FF 00 00         AND EDX,0xffff
006AD5A0  52                        PUSH EDX
006AD5A1  81 E1 FF FF 00 00         AND ECX,0xffff
006AD5A7  33 D2                     XOR EDX,EDX
006AD5A9  51                        PUSH ECX
006AD5AA  66 8B 15 8A 4A 85 00      MOV DX,word ptr [0x00854a8a]
006AD5B1  33 C9                     XOR ECX,ECX
006AD5B3  66 8B 0D 8E 4A 85 00      MOV CX,word ptr [0x00854a8e]
006AD5BA  52                        PUSH EDX
006AD5BB  8B 15 AC 4E 85 00         MOV EDX,dword ptr [0x00854eac]
006AD5C1  51                        PUSH ECX
006AD5C2  52                        PUSH EDX
006AD5C3  68 AC D8 7E 00            PUSH 0x7ed8ac
006AD5C8  50                        PUSH EAX
006AD5C9  E8 A2 69 08 00            CALL 0x00733f70
006AD5CE  83 C4 28                  ADD ESP,0x28
006AD5D1  C7 05 9C D7 7E 00 00 00 00 00  MOV dword ptr [0x007ed79c],0x0
LAB_006ad5db:
006AD5DB  A1 BC 4E 85 00            MOV EAX,[0x00854ebc]
006AD5E0  8D 9D B8 F8 FF FF         LEA EBX,[EBP + 0xfffff8b8]
006AD5E6  85 C0                     TEST EAX,EAX
006AD5E8  0F 84 C2 00 00 00         JZ 0x006ad6b0
006AD5EE  A1 A0 D8 7E 00            MOV EAX,[0x007ed8a0]
006AD5F3  8B 0D A4 D8 7E 00         MOV ECX,dword ptr [0x007ed8a4]
006AD5F9  66 8B 15 A8 D8 7E 00      MOV DX,word ptr [0x007ed8a8]
006AD600  89 85 B8 F8 FF FF         MOV dword ptr [EBP + 0xfffff8b8],EAX
006AD606  8D 85 B8 FE FF FF         LEA EAX,[EBP + 0xfffffeb8]
006AD60C  68 04 01 00 00            PUSH 0x104
006AD611  50                        PUSH EAX
006AD612  6A 00                     PUSH 0x0
006AD614  89 8D BC F8 FF FF         MOV dword ptr [EBP + 0xfffff8bc],ECX
006AD61A  66 89 95 C0 F8 FF FF      MOV word ptr [EBP + 0xfffff8c0],DX
006AD621  8D B5 B8 FE FF FF         LEA ESI,[EBP + 0xfffffeb8]
006AD627  FF 15 94 BB 85 00         CALL dword ptr [0x0085bb94]
006AD62D  85 C0                     TEST EAX,EAX
006AD62F  74 61                     JZ 0x006ad692
006AD631  8D BD B8 FE FF FF         LEA EDI,[EBP + 0xfffffeb8]
006AD637  83 C9 FF                  OR ECX,0xffffffff
006AD63A  33 C0                     XOR EAX,EAX
006AD63C  F2 AE                     SCASB.REPNE ES:EDI
006AD63E  F7 D1                     NOT ECX
006AD640  49                        DEC ECX
006AD641  8B D1                     MOV EDX,ECX
006AD643  83 FA 40                  CMP EDX,0x40
006AD646  7E 1C                     JLE 0x006ad664
006AD648  8D B4 15 78 FE FF FF      LEA ESI,[EBP + EDX*0x1 + 0xfffffe78]
006AD64F  6A 03                     PUSH 0x3
006AD651  68 74 72 7C 00            PUSH 0x7c7274
006AD656  56                        PUSH ESI
006AD657  E8 E4 0C 08 00            CALL 0x0072e340
006AD65C  83 C4 0C                  ADD ESP,0xc
006AD65F  BA 40 00 00 00            MOV EDX,0x40
LAB_006ad664:
006AD664  8B FE                     MOV EDI,ESI
006AD666  83 C9 FF                  OR ECX,0xffffffff
006AD669  33 C0                     XOR EAX,EAX
006AD66B  8D 9D C1 F8 FF FF         LEA EBX,[EBP + 0xfffff8c1]
006AD671  F2 AE                     SCASB.REPNE ES:EDI
006AD673  F7 D1                     NOT ECX
006AD675  2B F9                     SUB EDI,ECX
006AD677  8B C1                     MOV EAX,ECX
006AD679  8B F7                     MOV ESI,EDI
006AD67B  8B FB                     MOV EDI,EBX
006AD67D  8D 9C 15 C1 F8 FF FF      LEA EBX,[EBP + EDX*0x1 + 0xfffff8c1]
006AD684  C1 E9 02                  SHR ECX,0x2
006AD687  F3 A5                     MOVSD.REP ES:EDI,ESI
006AD689  8B C8                     MOV ECX,EAX
006AD68B  83 E1 03                  AND ECX,0x3
006AD68E  F3 A4                     MOVSB.REP ES:EDI,ESI
006AD690  EB 1E                     JMP 0x006ad6b0
LAB_006ad692:
006AD692  8B 0D 98 D8 7E 00         MOV ECX,dword ptr [0x007ed898]
006AD698  8B 15 9C D8 7E 00         MOV EDX,dword ptr [0x007ed89c]
006AD69E  89 8D C1 F8 FF FF         MOV dword ptr [EBP + 0xfffff8c1],ECX
006AD6A4  89 95 C5 F8 FF FF         MOV dword ptr [EBP + 0xfffff8c5],EDX
006AD6AA  8D 9D C8 F8 FF FF         LEA EBX,[EBP + 0xfffff8c8]
LAB_006ad6b0:
006AD6B0  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006AD6B3  C6 03 0A                  MOV byte ptr [EBX],0xa
006AD6B6  43                        INC EBX
006AD6B7  85 F6                     TEST ESI,ESI
006AD6B9  0F 84 16 01 00 00         JZ 0x006ad7d5
006AD6BF  8B 0D 90 D8 7E 00         MOV ECX,dword ptr [0x007ed890]
006AD6C5  8B C3                     MOV EAX,EBX
006AD6C7  8B FE                     MOV EDI,ESI
006AD6C9  83 C3 06                  ADD EBX,0x6
006AD6CC  89 08                     MOV dword ptr [EAX],ECX
006AD6CE  66 8B 15 94 D8 7E 00      MOV DX,word ptr [0x007ed894]
006AD6D5  66 89 50 04               MOV word ptr [EAX + 0x4],DX
006AD6D9  8A 0D 96 D8 7E 00         MOV CL,byte ptr [0x007ed896]
006AD6DF  88 48 06                  MOV byte ptr [EAX + 0x6],CL
006AD6E2  83 C9 FF                  OR ECX,0xffffffff
006AD6E5  33 C0                     XOR EAX,EAX
006AD6E7  F2 AE                     SCASB.REPNE ES:EDI
006AD6E9  F7 D1                     NOT ECX
006AD6EB  49                        DEC ECX
006AD6EC  8B D1                     MOV EDX,ECX
006AD6EE  83 FA 40                  CMP EDX,0x40
006AD6F1  7E 36                     JLE 0x006ad729
006AD6F3  8D 7C 32 C0               LEA EDI,[EDX + ESI*0x1 + -0x40]
006AD6F7  83 C9 FF                  OR ECX,0xffffffff
006AD6FA  F2 AE                     SCASB.REPNE ES:EDI
006AD6FC  F7 D1                     NOT ECX
006AD6FE  2B F9                     SUB EDI,ECX
006AD700  6A 03                     PUSH 0x3
006AD702  8B D1                     MOV EDX,ECX
006AD704  8B F7                     MOV ESI,EDI
006AD706  8B FB                     MOV EDI,EBX
006AD708  68 74 72 7C 00            PUSH 0x7c7274
006AD70D  C1 E9 02                  SHR ECX,0x2
006AD710  F3 A5                     MOVSD.REP ES:EDI,ESI
006AD712  8B CA                     MOV ECX,EDX
006AD714  53                        PUSH EBX
006AD715  83 E1 03                  AND ECX,0x3
006AD718  F3 A4                     MOVSB.REP ES:EDI,ESI
006AD71A  E8 21 0C 08 00            CALL 0x0072e340
006AD71F  83 C4 0C                  ADD ESP,0xc
006AD722  BA 40 00 00 00            MOV EDX,0x40
006AD727  EB 1F                     JMP 0x006ad748
LAB_006ad729:
006AD729  8B FE                     MOV EDI,ESI
006AD72B  83 C9 FF                  OR ECX,0xffffffff
006AD72E  33 C0                     XOR EAX,EAX
006AD730  F2 AE                     SCASB.REPNE ES:EDI
006AD732  F7 D1                     NOT ECX
006AD734  2B F9                     SUB EDI,ECX
006AD736  8B C1                     MOV EAX,ECX
006AD738  8B F7                     MOV ESI,EDI
006AD73A  8B FB                     MOV EDI,EBX
006AD73C  C1 E9 02                  SHR ECX,0x2
006AD73F  F3 A5                     MOVSD.REP ES:EDI,ESI
006AD741  8B C8                     MOV ECX,EAX
006AD743  83 E1 03                  AND ECX,0x3
006AD746  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006ad748:
006AD748  A1 B4 4E 85 00            MOV EAX,[0x00854eb4]
006AD74D  03 DA                     ADD EBX,EDX
006AD74F  85 C0                     TEST EAX,EAX
006AD751  75 05                     JNZ 0x006ad758
006AD753  C6 03 0A                  MOV byte ptr [EBX],0xa
006AD756  EB 07                     JMP 0x006ad75f
LAB_006ad758:
006AD758  C6 03 20                  MOV byte ptr [EBX],0x20
006AD75B  43                        INC EBX
006AD75C  C6 03 20                  MOV byte ptr [EBX],0x20
LAB_006ad75f:
006AD75F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006AD762  43                        INC EBX
006AD763  85 C0                     TEST EAX,EAX
006AD765  7E 11                     JLE 0x006ad778
006AD767  50                        PUSH EAX
006AD768  68 84 D8 7E 00            PUSH 0x7ed884
006AD76D  53                        PUSH EBX
006AD76E  E8 CD 34 08 00            CALL 0x00730c40
006AD773  83 C4 0C                  ADD ESP,0xc
006AD776  03 D8                     ADD EBX,EAX
LAB_006ad778:
006AD778  A1 B4 4E 85 00            MOV EAX,[0x00854eb4]
006AD77D  85 C0                     TEST EAX,EAX
006AD77F  74 50                     JZ 0x006ad7d1
006AD781  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006AD784  8B 3D B8 BB 85 00         MOV EDI,dword ptr [0x0085bbb8]
006AD78A  6A 04                     PUSH 0x4
006AD78C  56                        PUSH ESI
006AD78D  FF D7                     CALL EDI
006AD78F  85 C0                     TEST EAX,EAX
006AD791  75 3E                     JNZ 0x006ad7d1
006AD793  8B 36                     MOV ESI,dword ptr [ESI]
006AD795  6A 08                     PUSH 0x8
006AD797  56                        PUSH ESI
006AD798  FF D7                     CALL EDI
006AD79A  85 C0                     TEST EAX,EAX
006AD79C  75 33                     JNZ 0x006ad7d1
006AD79E  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006AD7A1  51                        PUSH ECX
006AD7A2  68 7C D8 7E 00            PUSH 0x7ed87c
006AD7A7  53                        PUSH EBX
006AD7A8  E8 93 34 08 00            CALL 0x00730c40
006AD7AD  8B 36                     MOV ESI,dword ptr [ESI]
006AD7AF  83 C4 0C                  ADD ESP,0xc
006AD7B2  03 D8                     ADD EBX,EAX
006AD7B4  6A 08                     PUSH 0x8
006AD7B6  56                        PUSH ESI
006AD7B7  FF D7                     CALL EDI
006AD7B9  85 C0                     TEST EAX,EAX
006AD7BB  75 14                     JNZ 0x006ad7d1
006AD7BD  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006AD7C0  52                        PUSH EDX
006AD7C1  68 74 D8 7E 00            PUSH 0x7ed874
006AD7C6  53                        PUSH EBX
006AD7C7  E8 74 34 08 00            CALL 0x00730c40
006AD7CC  83 C4 0C                  ADD ESP,0xc
006AD7CF  03 D8                     ADD EBX,EAX
LAB_006ad7d1:
006AD7D1  C6 03 0A                  MOV byte ptr [EBX],0xa
006AD7D4  43                        INC EBX
LAB_006ad7d5:
006AD7D5  A1 D0 8D 85 00            MOV EAX,[0x00858dd0]
006AD7DA  85 C0                     TEST EAX,EAX
006AD7DC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006AD7DF  0F 84 C4 00 00 00         JZ 0x006ad8a9
006AD7E5  39 05 D4 8D 85 00         CMP dword ptr [0x00858dd4],EAX
006AD7EB  0F 85 B8 00 00 00         JNZ 0x006ad8a9
006AD7F1  8B 0D 68 D8 7E 00         MOV ECX,dword ptr [0x007ed868]
006AD7F7  8B C3                     MOV EAX,EBX
006AD7F9  83 C3 0A                  ADD EBX,0xa
006AD7FC  89 08                     MOV dword ptr [EAX],ECX
006AD7FE  8B 15 6C D8 7E 00         MOV EDX,dword ptr [0x007ed86c]
006AD804  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006AD807  66 8B 0D 70 D8 7E 00      MOV CX,word ptr [0x007ed870]
006AD80E  66 89 48 08               MOV word ptr [EAX + 0x8],CX
006AD812  8A 15 72 D8 7E 00         MOV DL,byte ptr [0x007ed872]
006AD818  83 C9 FF                  OR ECX,0xffffffff
006AD81B  88 50 0A                  MOV byte ptr [EAX + 0xa],DL
006AD81E  8B 35 D0 8D 85 00         MOV ESI,dword ptr [0x00858dd0]
006AD824  8B FE                     MOV EDI,ESI
006AD826  33 C0                     XOR EAX,EAX
006AD828  F2 AE                     SCASB.REPNE ES:EDI
006AD82A  F7 D1                     NOT ECX
006AD82C  49                        DEC ECX
006AD82D  8B D1                     MOV EDX,ECX
006AD82F  83 FA 36                  CMP EDX,0x36
006AD832  7E 36                     JLE 0x006ad86a
006AD834  8D 7C 16 CA               LEA EDI,[ESI + EDX*0x1 + -0x36]
006AD838  83 C9 FF                  OR ECX,0xffffffff
006AD83B  F2 AE                     SCASB.REPNE ES:EDI
006AD83D  F7 D1                     NOT ECX
006AD83F  2B F9                     SUB EDI,ECX
006AD841  6A 03                     PUSH 0x3
006AD843  8B C1                     MOV EAX,ECX
006AD845  8B F7                     MOV ESI,EDI
006AD847  8B FB                     MOV EDI,EBX
006AD849  68 74 72 7C 00            PUSH 0x7c7274
006AD84E  C1 E9 02                  SHR ECX,0x2
006AD851  F3 A5                     MOVSD.REP ES:EDI,ESI
006AD853  8B C8                     MOV ECX,EAX
006AD855  53                        PUSH EBX
006AD856  83 E1 03                  AND ECX,0x3
006AD859  F3 A4                     MOVSB.REP ES:EDI,ESI
006AD85B  E8 E0 0A 08 00            CALL 0x0072e340
006AD860  83 C4 0C                  ADD ESP,0xc
006AD863  BA 36 00 00 00            MOV EDX,0x36
006AD868  EB 1F                     JMP 0x006ad889
LAB_006ad86a:
006AD86A  8B FE                     MOV EDI,ESI
006AD86C  83 C9 FF                  OR ECX,0xffffffff
006AD86F  33 C0                     XOR EAX,EAX
006AD871  F2 AE                     SCASB.REPNE ES:EDI
006AD873  F7 D1                     NOT ECX
006AD875  2B F9                     SUB EDI,ECX
006AD877  8B C1                     MOV EAX,ECX
006AD879  8B F7                     MOV ESI,EDI
006AD87B  8B FB                     MOV EDI,EBX
006AD87D  C1 E9 02                  SHR ECX,0x2
006AD880  F3 A5                     MOVSD.REP ES:EDI,ESI
006AD882  8B C8                     MOV ECX,EAX
006AD884  83 E1 03                  AND ECX,0x3
006AD887  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006ad889:
006AD889  8B 0D D8 8D 85 00         MOV ECX,dword ptr [0x00858dd8]
006AD88F  03 DA                     ADD EBX,EDX
006AD891  51                        PUSH ECX
006AD892  68 64 D8 7E 00            PUSH 0x7ed864
006AD897  53                        PUSH EBX
006AD898  E8 A3 33 08 00            CALL 0x00730c40
006AD89D  03 D8                     ADD EBX,EAX
006AD89F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006AD8A2  83 C4 0C                  ADD ESP,0xc
006AD8A5  C6 03 0A                  MOV byte ptr [EBX],0xa
006AD8A8  43                        INC EBX
LAB_006ad8a9:
006AD8A9  85 C0                     TEST EAX,EAX
006AD8AB  C7 05 D0 8D 85 00 00 00 00 00  MOV dword ptr [0x00858dd0],0x0
006AD8B5  74 15                     JZ 0x006ad8cc
006AD8B7  0F BF D0                  MOVSX EDX,AX
006AD8BA  52                        PUSH EDX
006AD8BB  50                        PUSH EAX
006AD8BC  68 48 D8 7E 00            PUSH 0x7ed848
006AD8C1  53                        PUSH EBX
006AD8C2  E8 79 33 08 00            CALL 0x00730c40
006AD8C7  83 C4 10                  ADD ESP,0x10
006AD8CA  03 D8                     ADD EBX,EAX
LAB_006ad8cc:
006AD8CC  C6 03 0A                  MOV byte ptr [EBX],0xa
006AD8CF  8A 85 B8 FC FF FF         MOV AL,byte ptr [EBP + 0xfffffcb8]
006AD8D5  43                        INC EBX
006AD8D6  84 C0                     TEST AL,AL
006AD8D8  74 46                     JZ 0x006ad920
006AD8DA  A1 B4 4E 85 00            MOV EAX,[0x00854eb4]
006AD8DF  85 C0                     TEST EAX,EAX
006AD8E1  75 04                     JNZ 0x006ad8e7
006AD8E3  C6 03 0A                  MOV byte ptr [EBX],0xa
006AD8E6  43                        INC EBX
LAB_006ad8e7:
006AD8E7  8D BD B8 FC FF FF         LEA EDI,[EBP + 0xfffffcb8]
006AD8ED  83 C9 FF                  OR ECX,0xffffffff
006AD8F0  33 C0                     XOR EAX,EAX
006AD8F2  F2 AE                     SCASB.REPNE ES:EDI
006AD8F4  F7 D1                     NOT ECX
006AD8F6  2B F9                     SUB EDI,ECX
006AD8F8  8B C1                     MOV EAX,ECX
006AD8FA  8B F7                     MOV ESI,EDI
006AD8FC  8B FB                     MOV EDI,EBX
006AD8FE  C1 E9 02                  SHR ECX,0x2
006AD901  F3 A5                     MOVSD.REP ES:EDI,ESI
006AD903  8B C8                     MOV ECX,EAX
006AD905  33 C0                     XOR EAX,EAX
006AD907  83 E1 03                  AND ECX,0x3
006AD90A  F3 A4                     MOVSB.REP ES:EDI,ESI
006AD90C  8D BD B8 FC FF FF         LEA EDI,[EBP + 0xfffffcb8]
006AD912  83 C9 FF                  OR ECX,0xffffffff
006AD915  F2 AE                     SCASB.REPNE ES:EDI
006AD917  F7 D1                     NOT ECX
006AD919  49                        DEC ECX
006AD91A  03 D9                     ADD EBX,ECX
006AD91C  C6 03 0A                  MOV byte ptr [EBX],0xa
006AD91F  43                        INC EBX
LAB_006ad920:
006AD920  A1 B4 4E 85 00            MOV EAX,[0x00854eb4]
006AD925  85 C0                     TEST EAX,EAX
006AD927  0F 84 D0 00 00 00         JZ 0x006ad9fd
006AD92D  C6 03 00                  MOV byte ptr [EBX],0x0
006AD930  8B 0D B4 4E 85 00         MOV ECX,dword ptr [0x00854eb4]
006AD936  8D 95 B8 F8 FF FF         LEA EDX,[EBP + 0xfffff8b8]
006AD93C  51                        PUSH ECX
006AD93D  52                        PUSH EDX
006AD93E  E8 2D 12 08 00            CALL 0x0072eb70
006AD943  A1 DC 8D 85 00            MOV EAX,[0x00858ddc]
006AD948  83 C4 08                  ADD ESP,0x8
006AD94B  33 F6                     XOR ESI,ESI
006AD94D  85 C0                     TEST EAX,EAX
006AD94F  7E 4A                     JLE 0x006ad99b
LAB_006ad951:
006AD951  A1 C0 8D 85 00            MOV EAX,[0x00858dc0]
006AD956  8B 15 B4 4E 85 00         MOV EDX,dword ptr [0x00854eb4]
006AD95C  8B 0C B0                  MOV ECX,dword ptr [EAX + ESI*0x4]
006AD95F  51                        PUSH ECX
006AD960  68 40 D8 7E 00            PUSH 0x7ed840
006AD965  52                        PUSH EDX
006AD966  E8 05 66 08 00            CALL 0x00733f70
006AD96B  83 C4 0C                  ADD ESP,0xc
006AD96E  46                        INC ESI
006AD96F  8B C6                     MOV EAX,ESI
006AD971  25 07 00 00 80            AND EAX,0x80000007
006AD976  79 05                     JNS 0x006ad97d
006AD978  48                        DEC EAX
006AD979  83 C8 F8                  OR EAX,0xfffffff8
006AD97C  40                        INC EAX
LAB_006ad97d:
006AD97D  75 14                     JNZ 0x006ad993
006AD97F  8B 0D B4 4E 85 00         MOV ECX,dword ptr [0x00854eb4]
006AD985  68 F4 8F 7C 00            PUSH 0x7c8ff4
006AD98A  51                        PUSH ECX
006AD98B  E8 E0 65 08 00            CALL 0x00733f70
006AD990  83 C4 08                  ADD ESP,0x8
LAB_006ad993:
006AD993  3B 35 DC 8D 85 00         CMP ESI,dword ptr [0x00858ddc]
006AD999  7C B6                     JL 0x006ad951
LAB_006ad99b:
006AD99B  81 E6 07 00 00 80         AND ESI,0x80000007
006AD9A1  79 05                     JNS 0x006ad9a8
006AD9A3  4E                        DEC ESI
006AD9A4  83 CE F8                  OR ESI,0xfffffff8
006AD9A7  46                        INC ESI
LAB_006ad9a8:
006AD9A8  74 14                     JZ 0x006ad9be
006AD9AA  8B 15 B4 4E 85 00         MOV EDX,dword ptr [0x00854eb4]
006AD9B0  68 F4 8F 7C 00            PUSH 0x7c8ff4
006AD9B5  52                        PUSH EDX
006AD9B6  E8 B5 65 08 00            CALL 0x00733f70
006AD9BB  83 C4 08                  ADD ESP,0x8
LAB_006ad9be:
006AD9BE  A1 B4 4E 85 00            MOV EAX,[0x00854eb4]
006AD9C3  50                        PUSH EAX
006AD9C4  E8 97 63 08 00            CALL 0x00733d60
006AD9C9  83 C4 04                  ADD ESP,0x4
LAB_006ad9cc:
006AD9CC  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006AD9CF  F7 DE                     NEG ESI
006AD9D1  1B F6                     SBB ESI,ESI
LAB_006ad9d3:
006AD9D3  5F                        POP EDI
006AD9D4  C7 05 DC 8D 85 00 00 00 00 00  MOV dword ptr [0x00858ddc],0x0
006AD9DE  85 F6                     TEST ESI,ESI
006AD9E0  5B                        POP EBX
006AD9E1  0F 8D A0 01 00 00         JGE 0x006adb87
006AD9E7  E8 64 F8 FF FF            CALL 0x006ad250
006AD9EC  6A 16                     PUSH 0x16
006AD9EE  E8 4D 61 08 00            CALL 0x00733b40
006AD9F3  83 C4 04                  ADD ESP,0x4
006AD9F6  6A FF                     PUSH -0x1
006AD9F8  E8 A3 15 08 00            CALL 0x0072efa0
LAB_006ad9fd:
006AD9FD  A1 BC 4E 85 00            MOV EAX,[0x00854ebc]
006ADA02  85 C0                     TEST EAX,EAX
006ADA04  74 C6                     JZ 0x006ad9cc
006ADA06  8D 7B 01                  LEA EDI,[EBX + 0x1]
006ADA09  B9 09 00 00 00            MOV ECX,0x9
006ADA0E  BE 18 D8 7E 00            MOV ESI,0x7ed818
006ADA13  C6 03 0A                  MOV byte ptr [EBX],0xa
006ADA16  F3 A5                     MOVSD.REP ES:EDI,ESI
006ADA18  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006ADA1B  66 A5                     MOVSW ES:EDI,ESI
006ADA1D  85 C0                     TEST EAX,EAX
006ADA1F  A4                        MOVSB ES:EDI,ESI
006ADA20  74 11                     JZ 0x006ada33
006ADA22  B9 05 00 00 00            MOV ECX,0x5
006ADA27  BE 04 D8 7E 00            MOV ESI,0x7ed804
006ADA2C  8D 7D BC                  LEA EDI,[EBP + -0x44]
006ADA2F  F3 A5                     MOVSD.REP ES:EDI,ESI
006ADA31  EB 25                     JMP 0x006ada58
LAB_006ada33:
006ADA33  8B 0D CC D7 7E 00         MOV ECX,dword ptr [0x007ed7cc]
006ADA39  8B 15 D0 D7 7E 00         MOV EDX,dword ptr [0x007ed7d0]
006ADA3F  A1 D4 D7 7E 00            MOV EAX,[0x007ed7d4]
006ADA44  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006ADA47  66 8B 0D D8 D7 7E 00      MOV CX,word ptr [0x007ed7d8]
006ADA4E  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006ADA51  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006ADA54  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
LAB_006ada58:
006ADA58  8B 0D B8 4E 85 00         MOV ECX,dword ptr [0x00854eb8]
006ADA5E  85 C9                     TEST ECX,ECX
006ADA60  74 4A                     JZ 0x006adaac
006ADA62  8B 81 7C 04 00 00         MOV EAX,dword ptr [ECX + 0x47c]
006ADA68  85 C0                     TEST EAX,EAX
006ADA6A  74 40                     JZ 0x006adaac
006ADA6C  8B D8                     MOV EBX,EAX
006ADA6E  8B 13                     MOV EDX,dword ptr [EBX]
006ADA70  52                        PUSH EDX
006ADA71  51                        PUSH ECX
006ADA72  E8 49 0E 02 00            CALL 0x006ce8c0
006ADA77  BF F8 D7 7E 00            MOV EDI,0x7ed7f8
006ADA7C  83 C9 FF                  OR ECX,0xffffffff
006ADA7F  33 C0                     XOR EAX,EAX
006ADA81  8D 55 BC                  LEA EDX,[EBP + -0x44]
006ADA84  F2 AE                     SCASB.REPNE ES:EDI
006ADA86  F7 D1                     NOT ECX
006ADA88  2B F9                     SUB EDI,ECX
006ADA8A  8B F7                     MOV ESI,EDI
006ADA8C  8B FA                     MOV EDI,EDX
006ADA8E  8B D1                     MOV EDX,ECX
006ADA90  83 C9 FF                  OR ECX,0xffffffff
006ADA93  F2 AE                     SCASB.REPNE ES:EDI
006ADA95  8B CA                     MOV ECX,EDX
006ADA97  4F                        DEC EDI
006ADA98  C1 E9 02                  SHR ECX,0x2
006ADA9B  F3 A5                     MOVSD.REP ES:EDI,ESI
006ADA9D  8B CA                     MOV ECX,EDX
006ADA9F  83 E1 03                  AND ECX,0x3
006ADAA2  F3 A4                     MOVSB.REP ES:EDI,ESI
006ADAA4  8B 0D B8 4E 85 00         MOV ECX,dword ptr [0x00854eb8]
006ADAAA  EB 02                     JMP 0x006adaae
LAB_006adaac:
006ADAAC  33 DB                     XOR EBX,EBX
LAB_006adaae:
006ADAAE  85 C9                     TEST ECX,ECX
006ADAB0  74 36                     JZ 0x006adae8
006ADAB2  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006ADAB5  A9 00 00 00 02            TEST EAX,0x2000000
006ADABA  74 2C                     JZ 0x006adae8
006ADABC  25 FE FF FF FD            AND EAX,0xfdfffffe
006ADAC1  6A 08                     PUSH 0x8
006ADAC3  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006ADAC6  8B 0D B8 4E 85 00         MOV ECX,dword ptr [0x00854eb8]
006ADACC  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
006ADACF  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
006ADAD2  51                        PUSH ECX
006ADAD3  50                        PUSH EAX
006ADAD4  8B 10                     MOV EDX,dword ptr [EAX]
006ADAD6  FF 52 50                  CALL dword ptr [EDX + 0x50]
006ADAD9  8B 15 B8 4E 85 00         MOV EDX,dword ptr [0x00854eb8]
006ADADF  8B 42 30                  MOV EAX,dword ptr [EDX + 0x30]
006ADAE2  50                        PUSH EAX
006ADAE3  8B 08                     MOV ECX,dword ptr [EAX]
006ADAE5  FF 51 4C                  CALL dword ptr [ECX + 0x4c]
LAB_006adae8:
006ADAE8  8D 55 BC                  LEA EDX,[EBP + -0x44]
006ADAEB  6A 02                     PUSH 0x2
006ADAED  8D 85 B8 F8 FF FF         LEA EAX,[EBP + 0xfffff8b8]
006ADAF3  52                        PUSH EDX
006ADAF4  50                        PUSH EAX
006ADAF5  E8 A6 F8 FF FF            CALL 0x006ad3a0
006ADAFA  83 F8 04                  CMP EAX,0x4
006ADAFD  75 58                     JNZ 0x006adb57
006ADAFF  8B 0D B8 4E 85 00         MOV ECX,dword ptr [0x00854eb8]
006ADB05  BE 01 00 00 00            MOV ESI,0x1
006ADB0A  85 C9                     TEST ECX,ECX
006ADB0C  0F 84 C1 FE FF FF         JZ 0x006ad9d3
006ADB12  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006ADB15  A8 01                     TEST AL,0x1
006ADB17  0F 84 B6 FE FF FF         JZ 0x006ad9d3
006ADB1D  25 FE FF FF FD            AND EAX,0xfdfffffe
006ADB22  6A 08                     PUSH 0x8
006ADB24  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006ADB27  8B 0D B8 4E 85 00         MOV ECX,dword ptr [0x00854eb8]
006ADB2D  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
006ADB30  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
006ADB33  51                        PUSH ECX
006ADB34  50                        PUSH EAX
006ADB35  8B 10                     MOV EDX,dword ptr [EAX]
006ADB37  FF 52 50                  CALL dword ptr [EDX + 0x50]
006ADB3A  8B 15 B8 4E 85 00         MOV EDX,dword ptr [0x00854eb8]
006ADB40  68 00 01 00 00            PUSH 0x100
006ADB45  6A 00                     PUSH 0x0
006ADB47  68 A4 4A 85 00            PUSH 0x854aa4
006ADB4C  52                        PUSH EDX
006ADB4D  E8 9E 2D 00 00            CALL 0x006b08f0
006ADB52  E9 7C FE FF FF            JMP 0x006ad9d3
LAB_006adb57:
006ADB57  83 F8 03                  CMP EAX,0x3
006ADB5A  75 08                     JNZ 0x006adb64
006ADB5C  83 CE FF                  OR ESI,0xffffffff
006ADB5F  E9 6F FE FF FF            JMP 0x006ad9d3
LAB_006adb64:
006ADB64  A1 B8 4E 85 00            MOV EAX,[0x00854eb8]
006ADB69  33 F6                     XOR ESI,ESI
006ADB6B  85 C0                     TEST EAX,EAX
006ADB6D  0F 84 60 FE FF FF         JZ 0x006ad9d3
006ADB73  85 DB                     TEST EBX,EBX
006ADB75  0F 84 58 FE FF FF         JZ 0x006ad9d3
006ADB7B  53                        PUSH EBX
006ADB7C  50                        PUSH EAX
006ADB7D  E8 EE 0B 02 00            CALL 0x006ce770
006ADB82  E9 4C FE FF FF            JMP 0x006ad9d3
LAB_006adb87:
006ADB87  8B C6                     MOV EAX,ESI
006ADB89  5E                        POP ESI
006ADB8A  8B E5                     MOV ESP,EBP
006ADB8C  5D                        POP EBP
006ADB8D  C3                        RET
