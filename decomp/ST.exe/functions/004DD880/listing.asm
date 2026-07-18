FUN_004dd880:
004DD880  55                        PUSH EBP
004DD881  8B EC                     MOV EBP,ESP
004DD883  81 EC 00 01 00 00         SUB ESP,0x100
004DD889  53                        PUSH EBX
004DD88A  8B D9                     MOV EBX,ECX
004DD88C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DD892  56                        PUSH ESI
004DD893  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004DD896  57                        PUSH EDI
004DD897  50                        PUSH EAX
004DD898  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
004DD89B  E8 17 71 F2 FF            CALL 0x004049b7
004DD8A0  B9 37 00 00 00            MOV ECX,0x37
004DD8A5  83 C8 FF                  OR EAX,0xffffffff
004DD8A8  8D BD 00 FF FF FF         LEA EDI,[EBP + 0xffffff00]
004DD8AE  F3 AB                     STOSD.REP ES:EDI
004DD8B0  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004DD8B3  8B 83 3D 02 00 00         MOV EAX,dword ptr [EBX + 0x23d]
004DD8B9  3B C8                     CMP ECX,EAX
004DD8BB  74 49                     JZ 0x004dd906
004DD8BD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DD8C3  8A D0                     MOV DL,AL
004DD8C5  52                        PUSH EDX
004DD8C6  E8 EC 70 F2 FF            CALL 0x004049b7
004DD8CB  8A C8                     MOV CL,AL
004DD8CD  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004DD8D3  81 E1 FF 00 00 00         AND ECX,0xff
004DD8D9  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004DD8DC  03 CA                     ADD ECX,EDX
004DD8DE  8B C1                     MOV EAX,ECX
004DD8E0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DD8E6  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
004DD8E9  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004DD8EC  50                        PUSH EAX
004DD8ED  E8 C5 70 F2 FF            CALL 0x004049b7
004DD8F2  25 FF 00 00 00            AND EAX,0xff
004DD8F7  8A 8C 06 84 19 7E 00      MOV CL,byte ptr [ESI + EAX*0x1 + 0x7e1984]
004DD8FE  84 C9                     TEST CL,CL
004DD900  0F 84 34 01 00 00         JZ 0x004dda3a
LAB_004dd906:
004DD906  8B 9B AC 05 00 00         MOV EBX,dword ptr [EBX + 0x5ac]
004DD90C  83 FB 34                  CMP EBX,0x34
004DD90F  74 12                     JZ 0x004dd923
004DD911  83 EB 5B                  SUB EBX,0x5b
004DD914  F7 DB                     NEG EBX
004DD916  1B DB                     SBB EBX,EBX
004DD918  83 E3 FE                  AND EBX,0xfffffffe
004DD91B  83 C3 02                  ADD EBX,0x2
004DD91E  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
004DD921  EB 07                     JMP 0x004dd92a
LAB_004dd923:
004DD923  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
LAB_004dd92a:
004DD92A  8D 8D 10 FF FF FF         LEA ECX,[EBP + 0xffffff10]
004DD930  8D 85 08 FF FF FF         LEA EAX,[EBP + 0xffffff08]
004DD936  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004DD939  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004DD93C  BF 96 00 00 00            MOV EDI,0x96
004DD941  8D 95 0C FF FF FF         LEA EDX,[EBP + 0xffffff0c]
004DD947  8D 8D 04 FF FF FF         LEA ECX,[EBP + 0xffffff04]
004DD94D  B8 7C F6 7B 00            MOV EAX,0x7bf67c
004DD952  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
004DD955  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004DD958  C7 45 E8 24 60 7E 00      MOV dword ptr [EBP + -0x18],0x7e6024
004DD95F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004DD962  8D 9D 00 FF FF FF         LEA EBX,[EBP + 0xffffff00]
004DD968  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_004dd96b:
004DD96B  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004DD96E  8B 48 FC                  MOV ECX,dword ptr [EAX + -0x4]
004DD971  3B CA                     CMP ECX,EDX
004DD973  0F 85 95 00 00 00         JNZ 0x004dda0e
004DD979  8B 00                     MOV EAX,dword ptr [EAX]
004DD97B  85 C0                     TEST EAX,EAX
004DD97D  7C 1F                     JL 0x004dd99e
004DD97F  74 1D                     JZ 0x004dd99e
004DD981  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
004DD984  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DD98A  50                        PUSH EAX
004DD98B  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DD98E  50                        PUSH EAX
004DD98F  E8 D7 3E F2 FF            CALL 0x0040186b
004DD994  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004DD997  3B 41 04                  CMP EAX,dword ptr [ECX + 0x4]
004DD99A  7C 72                     JL 0x004dda0e
004DD99C  EB 03                     JMP 0x004dd9a1
LAB_004dd99e:
004DD99E  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
LAB_004dd9a1:
004DD9A1  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
004DD9A7  8D 96 D0 04 00 00         LEA EDX,[ESI + 0x4d0]
004DD9AD  33 C0                     XOR EAX,EAX
004DD9AF  85 C9                     TEST ECX,ECX
004DD9B1  7C 13                     JL 0x004dd9c6
LAB_004dd9b3:
004DD9B3  3B CF                     CMP ECX,EDI
004DD9B5  0F 84 A2 00 00 00         JZ 0x004dda5d
004DD9BB  8B 4A 14                  MOV ECX,dword ptr [EDX + 0x14]
004DD9BE  83 C2 14                  ADD EDX,0x14
004DD9C1  40                        INC EAX
004DD9C2  85 C9                     TEST ECX,ECX
004DD9C4  7D ED                     JGE 0x004dd9b3
LAB_004dd9c6:
004DD9C6  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004DD9C9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004DD9CC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004DD9CF  33 D2                     XOR EDX,EDX
004DD9D1  83 39 0A                  CMP dword ptr [ECX],0xa
004DD9D4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004DD9D7  89 3B                     MOV dword ptr [EBX],EDI
004DD9D9  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004DD9DF  0F 9C C2                  SETL DL
004DD9E2  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
004DD9E8  89 11                     MOV dword ptr [ECX],EDX
004DD9EA  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004DD9ED  83 C3 14                  ADD EBX,0x14
004DD9F0  83 C0 14                  ADD EAX,0x14
004DD9F3  83 C6 14                  ADD ESI,0x14
004DD9F6  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
004DD9FC  83 C1 14                  ADD ECX,0x14
004DD9FF  83 C2 14                  ADD EDX,0x14
004DDA02  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004DDA05  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DDA08  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004DDA0B  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_004dda0e:
004DDA0E  B9 14 00 00 00            MOV ECX,0x14
LAB_004dda13:
004DDA13  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004DDA16  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004DDA19  83 C0 0C                  ADD EAX,0xc
004DDA1C  47                        INC EDI
004DDA1D  03 D1                     ADD EDX,ECX
004DDA1F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004DDA22  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004DDA25  8D 97 6A FF FF FF         LEA EDX,[EDI + 0xffffff6a]
004DDA2B  83 FA 2D                  CMP EDX,0x2d
004DDA2E  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
004DDA31  0F 8C 34 FF FF FF         JL 0x004dd96b
004DDA37  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_004dda3a:
004DDA3A  B9 37 00 00 00            MOV ECX,0x37
004DDA3F  8D B5 00 FF FF FF         LEA ESI,[EBP + 0xffffff00]
004DDA45  8D BB D0 04 00 00         LEA EDI,[EBX + 0x4d0]
004DDA4B  F3 A5                     MOVSD.REP ES:EDI,ESI
004DDA4D  8B CB                     MOV ECX,EBX
004DDA4F  E8 F5 64 F2 FF            CALL 0x00403f49
004DDA54  5F                        POP EDI
004DDA55  5E                        POP ESI
004DDA56  33 C0                     XOR EAX,EAX
004DDA58  5B                        POP EBX
004DDA59  8B E5                     MOV ESP,EBP
004DDA5B  5D                        POP EBP
004DDA5C  C3                        RET
LAB_004dda5d:
004DDA5D  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004DDA60  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004DDA63  B9 05 00 00 00            MOV ECX,0x5
004DDA68  8B FB                     MOV EDI,EBX
004DDA6A  8D B4 96 D0 04 00 00      LEA ESI,[ESI + EDX*0x4 + 0x4d0]
004DDA71  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004DDA74  F3 A5                     MOVSD.REP ES:EDI,ESI
004DDA76  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004DDA79  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004DDA7C  B9 14 00 00 00            MOV ECX,0x14
004DDA81  03 D9                     ADD EBX,ECX
004DDA83  03 F9                     ADD EDI,ECX
004DDA85  03 F1                     ADD ESI,ECX
004DDA87  03 D1                     ADD EDX,ECX
004DDA89  03 C1                     ADD EAX,ECX
004DDA8B  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004DDA8E  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
004DDA91  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DDA94  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004DDA97  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004DDA9A  E9 74 FF FF FF            JMP 0x004dda13
