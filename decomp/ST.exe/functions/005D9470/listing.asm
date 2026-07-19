SIDTy::GetMessage:
005D9470  55                        PUSH EBP
005D9471  8B EC                     MOV EBP,ESP
005D9473  83 EC 60                  SUB ESP,0x60
005D9476  53                        PUSH EBX
005D9477  56                        PUSH ESI
005D9478  8B F1                     MOV ESI,ECX
005D947A  57                        PUSH EDI
005D947B  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005D947E  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005D9481  E8 2A BD 10 00            CALL 0x006e51b0
005D9486  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005D9489  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D948E  8D 55 A4                  LEA EDX,[EBP + -0x5c]
005D9491  8D 4D A0                  LEA ECX,[EBP + -0x60]
005D9494  6A 00                     PUSH 0x0
005D9496  52                        PUSH EDX
005D9497  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
005D949A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D94A0  E8 4B 43 15 00            CALL 0x0072d7f0
005D94A5  8B F0                     MOV ESI,EAX
005D94A7  83 C4 08                  ADD ESP,0x8
005D94AA  85 F6                     TEST ESI,ESI
005D94AC  0F 85 35 08 00 00         JNZ 0x005d9ce7
005D94B2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005D94B5  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005D94B8  56                        PUSH ESI
005D94B9  8B CB                     MOV ECX,EBX
005D94BB  E8 A3 90 E2 FF            CALL 0x00402563
005D94C0  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005D94C3  3D 7F 69 00 00            CMP EAX,0x697f
005D94C8  0F 87 5F 04 00 00         JA 0x005d992d
005D94CE  0F 84 7A 03 00 00         JZ 0x005d984e
005D94D4  BF 05 00 00 00            MOV EDI,0x5
005D94D9  3B C7                     CMP EAX,EDI
005D94DB  77 43                     JA 0x005d9520
005D94DD  74 35                     JZ 0x005d9514
005D94DF  83 E8 00                  SUB EAX,0x0
005D94E2  74 24                     JZ 0x005d9508
005D94E4  83 E8 02                  SUB EAX,0x2
005D94E7  74 13                     JZ 0x005d94fc
005D94E9  48                        DEC EAX
005D94EA  0F 85 DB 07 00 00         JNZ 0x005d9ccb
005D94F0  8B CB                     MOV ECX,EBX
005D94F2  E8 81 C6 E2 FF            CALL 0x00405b78
005D94F7  E9 CF 07 00 00            JMP 0x005d9ccb
LAB_005d94fc:
005D94FC  8B CB                     MOV ECX,EBX
005D94FE  E8 AC 94 E2 FF            CALL 0x004029af
005D9503  E9 C3 07 00 00            JMP 0x005d9ccb
LAB_005d9508:
005D9508  8B CB                     MOV ECX,EBX
005D950A  E8 55 A8 E2 FF            CALL 0x00403d64
005D950F  E9 B7 07 00 00            JMP 0x005d9ccb
LAB_005d9514:
005D9514  8B CB                     MOV ECX,EBX
005D9516  E8 B2 94 E2 FF            CALL 0x004029cd
005D951B  E9 AB 07 00 00            JMP 0x005d9ccb
LAB_005d9520:
005D9520  2D FF 68 00 00            SUB EAX,0x68ff
005D9525  0F 84 06 03 00 00         JZ 0x005d9831
005D952B  48                        DEC EAX
005D952C  0F 84 FF 00 00 00         JZ 0x005d9631
005D9532  48                        DEC EAX
005D9533  0F 85 92 07 00 00         JNZ 0x005d9ccb
005D9539  6A FF                     PUSH -0x1
005D953B  6A 01                     PUSH 0x1
005D953D  6A 0A                     PUSH 0xa
005D953F  8B CB                     MOV ECX,EBX
005D9541  E8 AB B6 E2 FF            CALL 0x00404bf1
005D9546  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005D954C  84 C0                     TEST AL,AL
005D954E  74 42                     JZ 0x005d9592
005D9550  8B CB                     MOV ECX,EBX
005D9552  C6 83 5F 1A 00 00 00      MOV byte ptr [EBX + 0x1a5f],0x0
005D9559  E8 DF 97 E2 FF            CALL 0x00402d3d
005D955E  89 7B 2D                  MOV dword ptr [EBX + 0x2d],EDI
005D9561  8D B3 F9 1A 00 00         LEA ESI,[EBX + 0x1af9]
005D9567  BF 02 00 00 00            MOV EDI,0x2
LAB_005d956c:
005D956C  8B 06                     MOV EAX,dword ptr [ESI]
005D956E  85 C0                     TEST EAX,EAX
005D9570  74 0E                     JZ 0x005d9580
005D9572  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005D9575  51                        PUSH ECX
005D9576  50                        PUSH EAX
005D9577  6A 02                     PUSH 0x2
005D9579  8B CB                     MOV ECX,EBX
005D957B  E8 00 CB 10 00            CALL 0x006e6080
LAB_005d9580:
005D9580  83 C6 04                  ADD ESI,0x4
005D9583  4F                        DEC EDI
005D9584  75 E6                     JNZ 0x005d956c
005D9586  8B CB                     MOV ECX,EBX
005D9588  E8 9F A3 E2 FF            CALL 0x0040392c
005D958D  E9 39 07 00 00            JMP 0x005d9ccb
LAB_005d9592:
005D9592  A0 DD 7D 80 00            MOV AL,[0x00807ddd]
005D9597  84 C0                     TEST AL,AL
005D9599  0F 84 2C 07 00 00         JZ 0x005d9ccb
005D959F  8B 93 CC 1C 00 00         MOV EDX,dword ptr [EBX + 0x1ccc]
005D95A5  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005D95A8  85 C0                     TEST EAX,EAX
005D95AA  0F 84 1B 07 00 00         JZ 0x005d9ccb
005D95B0  8B 83 F1 1A 00 00         MOV EAX,dword ptr [EBX + 0x1af1]
005D95B6  8D 73 1D                  LEA ESI,[EBX + 0x1d]
005D95B9  56                        PUSH ESI
005D95BA  50                        PUSH EAX
005D95BB  6A 02                     PUSH 0x2
005D95BD  8B CB                     MOV ECX,EBX
005D95BF  C6 83 5F 1A 00 00 01      MOV byte ptr [EBX + 0x1a5f],0x1
005D95C6  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005D95CD  C7 43 31 00 00 00 00      MOV dword ptr [EBX + 0x31],0x0
005D95D4  E8 A7 CA 10 00            CALL 0x006e6080
005D95D9  8B 8B F5 1A 00 00         MOV ECX,dword ptr [EBX + 0x1af5]
005D95DF  56                        PUSH ESI
005D95E0  51                        PUSH ECX
005D95E1  6A 02                     PUSH 0x2
005D95E3  8B CB                     MOV ECX,EBX
005D95E5  C7 43 2D 29 00 00 00      MOV dword ptr [EBX + 0x2d],0x29
005D95EC  C7 43 31 19 00 00 00      MOV dword ptr [EBX + 0x31],0x19
005D95F3  E8 88 CA 10 00            CALL 0x006e6080
005D95F8  89 7B 2D                  MOV dword ptr [EBX + 0x2d],EDI
005D95FB  8D BB F9 1A 00 00         LEA EDI,[EBX + 0x1af9]
005D9601  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
LAB_005d9608:
005D9608  8B 07                     MOV EAX,dword ptr [EDI]
005D960A  85 C0                     TEST EAX,EAX
005D960C  74 0B                     JZ 0x005d9619
005D960E  56                        PUSH ESI
005D960F  50                        PUSH EAX
005D9610  6A 02                     PUSH 0x2
005D9612  8B CB                     MOV ECX,EBX
005D9614  E8 67 CA 10 00            CALL 0x006e6080
LAB_005d9619:
005D9619  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005D961C  83 C7 04                  ADD EDI,0x4
005D961F  48                        DEC EAX
005D9620  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005D9623  75 E3                     JNZ 0x005d9608
005D9625  8B CB                     MOV ECX,EBX
005D9627  E8 11 97 E2 FF            CALL 0x00402d3d
005D962C  E9 9A 06 00 00            JMP 0x005d9ccb
LAB_005d9631:
005D9631  6A FF                     PUSH -0x1
005D9633  6A 01                     PUSH 0x1
005D9635  6A 0A                     PUSH 0xa
005D9637  8B CB                     MOV ECX,EBX
005D9639  E8 B3 B5 E2 FF            CALL 0x00404bf1
005D963E  8B 93 F5 1A 00 00         MOV EDX,dword ptr [EBX + 0x1af5]
005D9644  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005D9647  50                        PUSH EAX
005D9648  52                        PUSH EDX
005D9649  6A 02                     PUSH 0x2
005D964B  8B CB                     MOV ECX,EBX
005D964D  C7 43 2D 32 00 00 00      MOV dword ptr [EBX + 0x2d],0x32
005D9654  E8 27 CA 10 00            CALL 0x006e6080
005D9659  8B 83 D0 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cd0]
005D965F  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005D9662  85 C9                     TEST ECX,ECX
005D9664  7E 07                     JLE 0x005d966d
005D9666  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005D9669  8B 38                     MOV EDI,dword ptr [EAX]
005D966B  EB 02                     JMP 0x005d966f
LAB_005d966d:
005D966D  33 FF                     XOR EDI,EDI
LAB_005d966f:
005D966F  83 C9 FF                  OR ECX,0xffffffff
005D9672  33 C0                     XOR EAX,EAX
005D9674  F2 AE                     SCASB.REPNE ES:EDI
005D9676  F7 D1                     NOT ECX
005D9678  2B F9                     SUB EDI,ECX
005D967A  8D 93 D4 1C 00 00         LEA EDX,[EBX + 0x1cd4]
005D9680  8B C1                     MOV EAX,ECX
005D9682  8B F7                     MOV ESI,EDI
005D9684  8B FA                     MOV EDI,EDX
005D9686  52                        PUSH EDX
005D9687  C1 E9 02                  SHR ECX,0x2
005D968A  F3 A5                     MOVSD.REP ES:EDI,ESI
005D968C  8B C8                     MOV ECX,EAX
005D968E  52                        PUSH EDX
005D968F  83 E1 03                  AND ECX,0x3
005D9692  F3 A4                     MOVSB.REP ES:EDI,ESI
005D9694  E8 E7 E0 0D 00            CALL 0x006b7780
005D9699  8A 83 D4 1C 00 00         MOV AL,byte ptr [EBX + 0x1cd4]
005D969F  84 C0                     TEST AL,AL
005D96A1  0F 84 24 06 00 00         JZ 0x005d9ccb
005D96A7  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005D96AD  84 C0                     TEST AL,AL
005D96AF  0F 84 94 00 00 00         JZ 0x005d9749
005D96B5  8B 83 D0 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cd0]
005D96BB  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005D96BE  85 C9                     TEST ECX,ECX
005D96C0  7E 07                     JLE 0x005d96c9
005D96C2  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005D96C5  8B 01                     MOV EAX,dword ptr [ECX]
005D96C7  EB 02                     JMP 0x005d96cb
LAB_005d96c9:
005D96C9  33 C0                     XOR EAX,EAX
LAB_005d96cb:
005D96CB  8B 15 9C C1 79 00         MOV EDX,dword ptr [0x0079c19c]
005D96D1  50                        PUSH EAX
005D96D2  52                        PUSH EDX
005D96D3  68 80 76 80 00            PUSH 0x807680
005D96D8  8D B3 D4 1C 00 00         LEA ESI,[EBX + 0x1cd4]
005D96DE  68 DC 6E 7C 00            PUSH 0x7c6edc
005D96E3  56                        PUSH ESI
005D96E4  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005D96EA  6A 00                     PUSH 0x0
005D96EC  6A 00                     PUSH 0x0
005D96EE  68 20 5C 72 00            PUSH 0x725c20
005D96F3  6A 00                     PUSH 0x0
005D96F5  68 BC C8 7C 00            PUSH 0x7cc8bc
005D96FA  56                        PUSH ESI
005D96FB  E8 10 C2 14 00            CALL 0x00725910
005D9700  83 C4 2C                  ADD ESP,0x2c
005D9703  8B CB                     MOV ECX,EBX
005D9705  E8 22 A2 E2 FF            CALL 0x0040392c
005D970A  8B CB                     MOV ECX,EBX
005D970C  C6 83 5F 1A 00 00 00      MOV byte ptr [EBX + 0x1a5f],0x0
005D9713  E8 25 96 E2 FF            CALL 0x00402d3d
005D9718  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005D971F  8D B3 F9 1A 00 00         LEA ESI,[EBX + 0x1af9]
005D9725  BF 02 00 00 00            MOV EDI,0x2
LAB_005d972a:
005D972A  8B 06                     MOV EAX,dword ptr [ESI]
005D972C  85 C0                     TEST EAX,EAX
005D972E  74 0E                     JZ 0x005d973e
005D9730  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005D9733  51                        PUSH ECX
005D9734  50                        PUSH EAX
005D9735  6A 02                     PUSH 0x2
005D9737  8B CB                     MOV ECX,EBX
005D9739  E8 42 C9 10 00            CALL 0x006e6080
LAB_005d973e:
005D973E  83 C6 04                  ADD ESI,0x4
005D9741  4F                        DEC EDI
005D9742  75 E6                     JNZ 0x005d972a
005D9744  E9 82 05 00 00            JMP 0x005d9ccb
LAB_005d9749:
005D9749  8B 83 D0 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cd0]
005D974F  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
005D9756  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005D9759  85 C9                     TEST ECX,ECX
005D975B  7E 07                     JLE 0x005d9764
005D975D  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005D9760  8B 00                     MOV EAX,dword ptr [EAX]
005D9762  EB 02                     JMP 0x005d9766
LAB_005d9764:
005D9764  33 C0                     XOR EAX,EAX
LAB_005d9766:
005D9766  6A 3F                     PUSH 0x3f
005D9768  50                        PUSH EAX
005D9769  68 DD 7D 80 00            PUSH 0x807ddd
005D976E  E8 CD 4B 15 00            CALL 0x0072e340
005D9773  8B 83 CC 1C 00 00         MOV EAX,dword ptr [EBX + 0x1ccc]
005D9779  83 C4 0C                  ADD ESP,0xc
005D977C  33 C9                     XOR ECX,ECX
005D977E  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005D9781  85 C0                     TEST EAX,EAX
005D9783  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005D9786  7E 53                     JLE 0x005d97db
005D9788  3B C8                     CMP ECX,EAX
005D978A  7D 0E                     JGE 0x005d979a
LAB_005d978c:
005D978C  8B 83 CC 1C 00 00         MOV EAX,dword ptr [EBX + 0x1ccc]
005D9792  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005D9795  8B 34 8A                  MOV ESI,dword ptr [EDX + ECX*0x4]
005D9798  EB 02                     JMP 0x005d979c
LAB_005d979a:
005D979A  33 F6                     XOR ESI,ESI
LAB_005d979c:
005D979C  BF DD 7D 80 00            MOV EDI,0x807ddd
LAB_005d97a1:
005D97A1  8A 16                     MOV DL,byte ptr [ESI]
005D97A3  8A C2                     MOV AL,DL
005D97A5  3A 17                     CMP DL,byte ptr [EDI]
005D97A7  75 1C                     JNZ 0x005d97c5
005D97A9  84 C0                     TEST AL,AL
005D97AB  74 14                     JZ 0x005d97c1
005D97AD  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005D97B0  8A C2                     MOV AL,DL
005D97B2  3A 57 01                  CMP DL,byte ptr [EDI + 0x1]
005D97B5  75 0E                     JNZ 0x005d97c5
005D97B7  83 C6 02                  ADD ESI,0x2
005D97BA  83 C7 02                  ADD EDI,0x2
005D97BD  84 C0                     TEST AL,AL
005D97BF  75 E0                     JNZ 0x005d97a1
LAB_005d97c1:
005D97C1  33 C0                     XOR EAX,EAX
005D97C3  EB 05                     JMP 0x005d97ca
LAB_005d97c5:
005D97C5  1B C0                     SBB EAX,EAX
005D97C7  83 D8 FF                  SBB EAX,-0x1
LAB_005d97ca:
005D97CA  85 C0                     TEST EAX,EAX
005D97CC  74 0A                     JZ 0x005d97d8
005D97CE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D97D1  41                        INC ECX
005D97D2  3B C8                     CMP ECX,EAX
005D97D4  7C B6                     JL 0x005d978c
005D97D6  EB 03                     JMP 0x005d97db
LAB_005d97d8:
005D97D8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_005d97db:
005D97DB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005D97DE  C6 05 40 73 80 00 01      MOV byte ptr [0x00807340],0x1
005D97E5  85 C0                     TEST EAX,EAX
005D97E7  B9 58 76 80 00            MOV ECX,0x807658
005D97EC  7D 07                     JGE 0x005d97f5
005D97EE  E8 2B A5 E2 FF            CALL 0x00403d1e
005D97F3  EB 05                     JMP 0x005d97fa
LAB_005d97f5:
005D97F5  E8 B9 B0 E2 FF            CALL 0x004048b3
LAB_005d97fa:
005D97FA  A0 46 84 80 00            MOV AL,[0x00808446]
005D97FF  84 C0                     TEST AL,AL
005D9801  0F 84 C4 04 00 00         JZ 0x005d9ccb
005D9807  8B CB                     MOV ECX,EBX
005D9809  E8 81 A2 E2 FF            CALL 0x00403a8f
005D980E  6A FF                     PUSH -0x1
005D9810  6A 01                     PUSH 0x1
005D9812  6A 02                     PUSH 0x2
005D9814  8B CB                     MOV ECX,EBX
005D9816  C6 43 65 04               MOV byte ptr [EBX + 0x65],0x4
005D981A  E8 D2 B3 E2 FF            CALL 0x00404bf1
005D981F  33 C0                     XOR EAX,EAX
005D9821  A0 63 73 80 00            MOV AL,[0x00807363]
005D9826  50                        PUSH EAX
005D9827  E8 84 80 0E 00            CALL 0x006c18b0
005D982C  E9 9A 04 00 00            JMP 0x005d9ccb
LAB_005d9831:
005D9831  8B 13                     MOV EDX,dword ptr [EBX]
005D9833  C6 83 5F 1A 00 00 00      MOV byte ptr [EBX + 0x1a5f],0x0
005D983A  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005D983D  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005D9840  41                        INC ECX
005D9841  50                        PUSH EAX
005D9842  89 4B 2D                  MOV dword ptr [EBX + 0x2d],ECX
005D9845  8B CB                     MOV ECX,EBX
005D9847  FF 12                     CALL dword ptr [EDX]
005D9849  E9 7D 04 00 00            JMP 0x005d9ccb
LAB_005d984e:
005D984E  8B 83 C8 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cc8]
005D9854  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005D9857  85 C9                     TEST ECX,ECX
005D9859  75 18                     JNZ 0x005d9873
005D985B  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005D985F  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
005D9863  83 C1 1F                  ADD ECX,0x1f
005D9866  C1 E9 03                  SHR ECX,0x3
005D9869  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
005D986F  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_005d9873:
005D9873  50                        PUSH EAX
005D9874  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D9877  E8 24 B7 0D 00            CALL 0x006b4fa0
005D987C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005D987F  8B F8                     MOV EDI,EAX
005D9881  8B D1                     MOV EDX,ECX
005D9883  83 C8 FF                  OR EAX,0xffffffff
005D9886  C1 E9 02                  SHR ECX,0x2
005D9889  F3 AB                     STOSD.REP ES:EDI
005D988B  8B CA                     MOV ECX,EDX
005D988D  6A 00                     PUSH 0x0
005D988F  83 E1 03                  AND ECX,0x3
005D9892  6A 00                     PUSH 0x0
005D9894  F3 AA                     STOSB.REP ES:EDI
005D9896  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D989C  8B 83 C8 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cc8]
005D98A2  6A 00                     PUSH 0x0
005D98A4  6A 00                     PUSH 0x0
005D98A6  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005D98A9  6A 00                     PUSH 0x0
005D98AB  50                        PUSH EAX
005D98AC  E8 DF 71 13 00            CALL 0x00710a90
005D98B1  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005D98B4  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D98BA  6A 02                     PUSH 0x2
005D98BC  6A FF                     PUSH -0x1
005D98BE  8B 02                     MOV EAX,dword ptr [EDX]
005D98C0  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005D98C3  6A 00                     PUSH 0x0
005D98C5  50                        PUSH EAX
005D98C6  E8 F5 80 13 00            CALL 0x007119c0
005D98CB  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
005D98CF  66 81 F9 FF FF            CMP CX,0xffff
005D98D4  75 06                     JNZ 0x005d98dc
005D98D6  66 39 4E 1A               CMP word ptr [ESI + 0x1a],CX
005D98DA  74 25                     JZ 0x005d9901
LAB_005d98dc:
005D98DC  33 C0                     XOR EAX,EAX
005D98DE  6A 0D                     PUSH 0xd
005D98E0  66 8B 46 1A               MOV AX,word ptr [ESI + 0x1a]
005D98E4  81 E1 FF FF 00 00         AND ECX,0xffff
005D98EA  6A 07                     PUSH 0x7
005D98EC  8D 50 0E                  LEA EDX,[EAX + 0xe]
005D98EF  52                        PUSH EDX
005D98F0  51                        PUSH ECX
005D98F1  50                        PUSH EAX
005D98F2  8B 83 C8 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cc8]
005D98F8  51                        PUSH ECX
005D98F9  6A 00                     PUSH 0x0
005D98FB  50                        PUSH EAX
005D98FC  E8 0F C2 0D 00            CALL 0x006b5b10
LAB_005d9901:
005D9901  8B 83 C8 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cc8]
005D9907  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005D990A  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005D990D  51                        PUSH ECX
005D990E  52                        PUSH EDX
005D990F  6A 00                     PUSH 0x0
005D9911  6A 00                     PUSH 0x0
005D9913  6A 00                     PUSH 0x0
005D9915  50                        PUSH EAX
005D9916  8B 83 B8 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cb8]
005D991C  6A 01                     PUSH 0x1
005D991E  6A 04                     PUSH 0x4
005D9920  6A 00                     PUSH 0x0
005D9922  50                        PUSH EAX
005D9923  E8 C8 BC 0D 00            CALL 0x006b55f0
005D9928  E9 22 01 00 00            JMP 0x005d9a4f
LAB_005d992d:
005D992D  3D 63 81 00 00            CMP EAX,0x8163
005D9932  0F 87 2A 03 00 00         JA 0x005d9c62
005D9938  0F 84 90 02 00 00         JZ 0x005d9bce
005D993E  3D 60 81 00 00            CMP EAX,0x8160
005D9943  0F 87 2A 01 00 00         JA 0x005d9a73
005D9949  0F 84 18 01 00 00         JZ 0x005d9a67
005D994F  3D 80 69 00 00            CMP EAX,0x6980
005D9954  0F 82 71 03 00 00         JC 0x005d9ccb
005D995A  3D 81 69 00 00            CMP EAX,0x6981
005D995F  0F 87 66 03 00 00         JA 0x005d9ccb
005D9965  8A 4E 10                  MOV CL,byte ptr [ESI + 0x10]
005D9968  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005D996B  80 E9 7F                  SUB CL,0x7f
005D996E  68 FF 00 00 00            PUSH 0xff
005D9973  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
005D9976  8B 08                     MOV ECX,dword ptr [EAX]
005D9978  81 E9 E1 00 00 00         SUB ECX,0xe1
005D997E  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
005D9981  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
005D9984  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005D9987  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005D998A  81 EA A9 01 00 00         SUB EDX,0x1a9
005D9990  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005D9993  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
005D9996  50                        PUSH EAX
005D9997  57                        PUSH EDI
005D9998  52                        PUSH EDX
005D9999  8B 93 B8 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cb8]
005D999F  51                        PUSH ECX
005D99A0  6A 00                     PUSH 0x0
005D99A2  52                        PUSH EDX
005D99A3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005D99A6  E8 C5 A7 0D 00            CALL 0x006b4170
005D99AB  8B 8B B8 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cb8]
005D99B1  6A FF                     PUSH -0x1
005D99B3  68 87 00 00 00            PUSH 0x87
005D99B8  8D 45 E4                  LEA EAX,[EBP + -0x1c]
005D99BB  6A 02                     PUSH 0x2
005D99BD  50                        PUSH EAX
005D99BE  51                        PUSH ECX
005D99BF  8B CB                     MOV ECX,EBX
005D99C1  E8 99 B2 E2 FF            CALL 0x00404c5f
005D99C6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D99C9  25 FF 00 00 00            AND EAX,0xff
005D99CE  48                        DEC EAX
005D99CF  74 17                     JZ 0x005d99e8
005D99D1  8A 93 5F 1A 00 00         MOV DL,byte ptr [EBX + 0x1a5f]
005D99D7  F6 DA                     NEG DL
005D99D9  1B D2                     SBB EDX,EDX
005D99DB  83 E2 FD                  AND EDX,0xfffffffd
005D99DE  81 C2 BD 24 00 00         ADD EDX,0x24bd
005D99E4  8B FA                     MOV EDI,EDX
005D99E6  EB 14                     JMP 0x005d99fc
LAB_005d99e8:
005D99E8  8A 93 5F 1A 00 00         MOV DL,byte ptr [EBX + 0x1a5f]
005D99EE  33 C0                     XOR EAX,EAX
005D99F0  84 D2                     TEST DL,DL
005D99F2  0F 95 C0                  SETNZ AL
005D99F5  05 B8 24 00 00            ADD EAX,0x24b8
005D99FA  8B F8                     MOV EDI,EAX
LAB_005d99fc:
005D99FC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005D99FF  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005D9A02  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005D9A05  51                        PUSH ECX
005D9A06  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005D9A09  52                        PUSH EDX
005D9A0A  8B 93 B8 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cb8]
005D9A10  50                        PUSH EAX
005D9A11  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D9A16  51                        PUSH ECX
005D9A17  6A 00                     PUSH 0x0
005D9A19  52                        PUSH EDX
005D9A1A  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D9A1D  E8 6E 70 13 00            CALL 0x00710a90
005D9A22  33 C9                     XOR ECX,ECX
005D9A24  66 83 7E 14 01            CMP word ptr [ESI + 0x14],0x1
005D9A29  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005D9A2F  0F 95 C1                  SETNZ CL
005D9A32  83 C1 02                  ADD ECX,0x2
005D9A35  51                        PUSH ECX
005D9A36  6A FF                     PUSH -0x1
005D9A38  6A FF                     PUSH -0x1
005D9A3A  52                        PUSH EDX
005D9A3B  57                        PUSH EDI
005D9A3C  E8 FF 66 0D 00            CALL 0x006b0140
005D9A41  50                        PUSH EAX
005D9A42  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D9A47  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D9A4A  E8 71 7F 13 00            CALL 0x007119c0
LAB_005d9a4f:
005D9A4F  8B 8B B4 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cb4]
005D9A55  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005D9A5B  51                        PUSH ECX
005D9A5C  52                        PUSH EDX
005D9A5D  E8 6E 9B 0D 00            CALL 0x006b35d0
005D9A62  E9 64 02 00 00            JMP 0x005d9ccb
LAB_005d9a67:
005D9A67  C7 46 18 0E 00 00 00      MOV dword ptr [ESI + 0x18],0xe
005D9A6E  E9 58 02 00 00            JMP 0x005d9ccb
LAB_005d9a73:
005D9A73  3D 61 81 00 00            CMP EAX,0x8161
005D9A78  0F 85 4D 02 00 00         JNZ 0x005d9ccb
005D9A7E  8B 8B CC 1C 00 00         MOV ECX,dword ptr [EBX + 0x1ccc]
005D9A84  33 C0                     XOR EAX,EAX
005D9A86  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005D9A8A  3B 41 08                  CMP EAX,dword ptr [ECX + 0x8]
005D9A8D  7D 0B                     JGE 0x005d9a9a
005D9A8F  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
005D9A92  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
005D9A95  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005D9A98  EB 07                     JMP 0x005d9aa1
LAB_005d9a9a:
005D9A9A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_005d9aa1:
005D9AA1  8B 93 B8 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cb8]
005D9AA7  33 C0                     XOR EAX,EAX
005D9AA9  66 8B 46 1A               MOV AX,word ptr [ESI + 0x1a]
005D9AAD  33 C9                     XOR ECX,ECX
005D9AAF  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
005D9AB3  68 FF 00 00 00            PUSH 0xff
005D9AB8  6A 0E                     PUSH 0xe
005D9ABA  83 C0 15                  ADD EAX,0x15
005D9ABD  68 42 01 00 00            PUSH 0x142
005D9AC2  83 C1 03                  ADD ECX,0x3
005D9AC5  50                        PUSH EAX
005D9AC6  51                        PUSH ECX
005D9AC7  6A 00                     PUSH 0x0
005D9AC9  52                        PUSH EDX
005D9ACA  E8 A1 A6 0D 00            CALL 0x006b4170
005D9ACF  8B 83 BC 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cbc]
005D9AD5  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005D9AD8  85 C9                     TEST ECX,ECX
005D9ADA  75 18                     JNZ 0x005d9af4
005D9ADC  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005D9AE0  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
005D9AE4  83 C1 1F                  ADD ECX,0x1f
005D9AE7  C1 E9 03                  SHR ECX,0x3
005D9AEA  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
005D9AF0  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_005d9af4:
005D9AF4  50                        PUSH EAX
005D9AF5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005D9AF8  E8 A3 B4 0D 00            CALL 0x006b4fa0
005D9AFD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D9B00  8B F8                     MOV EDI,EAX
005D9B02  8B D1                     MOV EDX,ECX
005D9B04  83 C8 FF                  OR EAX,0xffffffff
005D9B07  C1 E9 02                  SHR ECX,0x2
005D9B0A  F3 AB                     STOSD.REP ES:EDI
005D9B0C  8B CA                     MOV ECX,EDX
005D9B0E  83 E1 03                  AND ECX,0x3
005D9B11  F3 AA                     STOSB.REP ES:EDI
005D9B13  66 83 7E 16 01            CMP word ptr [ESI + 0x16],0x1
005D9B18  75 37                     JNZ 0x005d9b51
005D9B1A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005D9B1D  85 C0                     TEST EAX,EAX
005D9B1F  74 30                     JZ 0x005d9b51
005D9B21  8B 93 B8 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cb8]
005D9B27  33 C0                     XOR EAX,EAX
005D9B29  66 8B 46 1A               MOV AX,word ptr [ESI + 0x1a]
005D9B2D  33 C9                     XOR ECX,ECX
005D9B2F  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
005D9B33  6A 0D                     PUSH 0xd
005D9B35  68 87 00 00 00            PUSH 0x87
005D9B3A  6A 0E                     PUSH 0xe
005D9B3C  83 C0 15                  ADD EAX,0x15
005D9B3F  68 42 01 00 00            PUSH 0x142
005D9B44  83 C1 03                  ADD ECX,0x3
005D9B47  50                        PUSH EAX
005D9B48  51                        PUSH ECX
005D9B49  6A 00                     PUSH 0x0
005D9B4B  52                        PUSH EDX
005D9B4C  E8 8F C3 0D 00            CALL 0x006b5ee0
LAB_005d9b51:
005D9B51  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D9B57  8B 83 BC 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cbc]
005D9B5D  6A 00                     PUSH 0x0
005D9B5F  6A 00                     PUSH 0x0
005D9B61  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005D9B64  6A 00                     PUSH 0x0
005D9B66  6A 00                     PUSH 0x0
005D9B68  6A 00                     PUSH 0x0
005D9B6A  50                        PUSH EAX
005D9B6B  E8 20 6F 13 00            CALL 0x00710a90
005D9B70  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D9B75  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005D9B78  6A 02                     PUSH 0x2
005D9B7A  6A FF                     PUSH -0x1
005D9B7C  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D9B7F  6A 00                     PUSH 0x0
005D9B81  52                        PUSH EDX
005D9B82  E8 39 7E 13 00            CALL 0x007119c0
005D9B87  8B 8B BC 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cbc]
005D9B8D  33 D2                     XOR EDX,EDX
005D9B8F  66 8B 56 1A               MOV DX,word ptr [ESI + 0x1a]
005D9B93  33 C0                     XOR EAX,EAX
005D9B95  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
005D9B99  68 FF 00 00 00            PUSH 0xff
005D9B9E  6A 00                     PUSH 0x0
005D9BA0  83 C2 15                  ADD EDX,0x15
005D9BA3  51                        PUSH ECX
005D9BA4  8B 8B B8 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cb8]
005D9BAA  83 C0 06                  ADD EAX,0x6
005D9BAD  52                        PUSH EDX
005D9BAE  50                        PUSH EAX
005D9BAF  6A 00                     PUSH 0x0
005D9BB1  51                        PUSH ECX
005D9BB2  E8 89 B8 0D 00            CALL 0x006b5440
005D9BB7  8B 93 B4 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cb4]
005D9BBD  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005D9BC2  52                        PUSH EDX
005D9BC3  50                        PUSH EAX
005D9BC4  E8 07 9A 0D 00            CALL 0x006b35d0
005D9BC9  E9 FD 00 00 00            JMP 0x005d9ccb
LAB_005d9bce:
005D9BCE  8B 8B CC 1C 00 00         MOV ECX,dword ptr [EBX + 0x1ccc]
005D9BD4  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D9BD7  85 C0                     TEST EAX,EAX
005D9BD9  74 4E                     JZ 0x005d9c29
005D9BDB  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005D9BDE  3B D0                     CMP EDX,EAX
005D9BE0  7D 08                     JGE 0x005d9bea
005D9BE2  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
005D9BE5  8B 04 91                  MOV EAX,dword ptr [ECX + EDX*0x4]
005D9BE8  EB 02                     JMP 0x005d9bec
LAB_005d9bea:
005D9BEA  33 C0                     XOR EAX,EAX
LAB_005d9bec:
005D9BEC  6A 3F                     PUSH 0x3f
005D9BEE  50                        PUSH EAX
005D9BEF  68 DD 7D 80 00            PUSH 0x807ddd
005D9BF4  E8 47 47 15 00            CALL 0x0072e340
005D9BF9  8B 83 CC 1C 00 00         MOV EAX,dword ptr [EBX + 0x1ccc]
005D9BFF  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005D9C02  83 C4 0C                  ADD ESP,0xc
005D9C05  3B 70 08                  CMP ESI,dword ptr [EAX + 0x8]
005D9C08  7D 12                     JGE 0x005d9c1c
005D9C0A  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005D9C0D  8B 83 D0 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cd0]
005D9C13  8B 34 B2                  MOV ESI,dword ptr [EDX + ESI*0x4]
005D9C16  56                        PUSH ESI
005D9C17  6A 00                     PUSH 0x0
005D9C19  50                        PUSH EAX
005D9C1A  EB 1B                     JMP 0x005d9c37
LAB_005d9c1c:
005D9C1C  8B 83 D0 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cd0]
005D9C22  33 F6                     XOR ESI,ESI
005D9C24  56                        PUSH ESI
005D9C25  56                        PUSH ESI
005D9C26  50                        PUSH EAX
005D9C27  EB 0E                     JMP 0x005d9c37
LAB_005d9c29:
005D9C29  8B 8B D0 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cd0]
005D9C2F  68 DD 7D 80 00            PUSH 0x807ddd
005D9C34  6A 00                     PUSH 0x0
005D9C36  51                        PUSH ECX
LAB_005d9c37:
005D9C37  E8 E4 C3 0D 00            CALL 0x006b6020
005D9C3C  8B 8B F5 1A 00 00         MOV ECX,dword ptr [EBX + 0x1af5]
005D9C42  8B 93 D0 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cd0]
005D9C48  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005D9C4B  C7 43 2D 33 00 00 00      MOV dword ptr [EBX + 0x2d],0x33
005D9C52  50                        PUSH EAX
005D9C53  51                        PUSH ECX
005D9C54  6A 02                     PUSH 0x2
005D9C56  8B CB                     MOV ECX,EBX
005D9C58  89 53 31                  MOV dword ptr [EBX + 0x31],EDX
005D9C5B  E8 20 C4 10 00            CALL 0x006e6080
005D9C60  EB 69                     JMP 0x005d9ccb
LAB_005d9c62:
005D9C62  2D 64 81 00 00            SUB EAX,0x8164
005D9C67  74 51                     JZ 0x005d9cba
005D9C69  48                        DEC EAX
005D9C6A  74 42                     JZ 0x005d9cae
005D9C6C  48                        DEC EAX
005D9C6D  75 5C                     JNZ 0x005d9ccb
005D9C6F  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005D9C72  33 C0                     XOR EAX,EAX
005D9C74  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
005D9C78  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
005D9C7B  03 C8                     ADD ECX,EAX
005D9C7D  89 8B 43 1C 00 00         MOV dword ptr [EBX + 0x1c43],ECX
005D9C83  8B 83 27 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c27]
005D9C89  83 F8 FF                  CMP EAX,-0x1
005D9C8C  74 3D                     JZ 0x005d9ccb
005D9C8E  8B D1                     MOV EDX,ECX
005D9C90  8B 8B 3F 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c3f]
005D9C96  52                        PUSH EDX
005D9C97  8B 93 2B 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c2b]
005D9C9D  51                        PUSH ECX
005D9C9E  52                        PUSH EDX
005D9C9F  50                        PUSH EAX
005D9CA0  8B 83 6B 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c6b]
005D9CA6  50                        PUSH EAX
005D9CA7  E8 84 9A 0D 00            CALL 0x006b3730
005D9CAC  EB 1D                     JMP 0x005d9ccb
LAB_005d9cae:
005D9CAE  6A 00                     PUSH 0x0
005D9CB0  8D 8B 92 1B 00 00         LEA ECX,[EBX + 0x1b92]
005D9CB6  56                        PUSH ESI
005D9CB7  51                        PUSH ECX
005D9CB8  EB 0A                     JMP 0x005d9cc4
LAB_005d9cba:
005D9CBA  6A 00                     PUSH 0x0
005D9CBC  8D 93 01 1B 00 00         LEA EDX,[EBX + 0x1b01]
005D9CC2  56                        PUSH ESI
005D9CC3  52                        PUSH EDX
LAB_005d9cc4:
005D9CC4  8B CB                     MOV ECX,EBX
005D9CC6  E8 09 95 E2 FF            CALL 0x004031d4
SIDTy::GetMessage::cf_common_exit_005D9CCB:
005D9CCB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D9CCE  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
005D9CD1  51                        PUSH ECX
005D9CD2  8B CB                     MOV ECX,EBX
005D9CD4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D9CD9  E8 A2 75 E2 FF            CALL 0x00401280
005D9CDE  5F                        POP EDI
005D9CDF  5E                        POP ESI
005D9CE0  5B                        POP EBX
005D9CE1  8B E5                     MOV ESP,EBP
005D9CE3  5D                        POP EBP
005D9CE4  C2 04 00                  RET 0x4
LAB_005d9ce7:
005D9CE7  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
005D9CEA  68 D4 D6 7C 00            PUSH 0x7cd6d4
005D9CEF  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D9CF4  56                        PUSH ESI
005D9CF5  6A 00                     PUSH 0x0
005D9CF7  68 12 02 00 00            PUSH 0x212
005D9CFC  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D9D01  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D9D07  E8 C4 37 0D 00            CALL 0x006ad4d0
005D9D0C  83 C4 18                  ADD ESP,0x18
005D9D0F  85 C0                     TEST EAX,EAX
005D9D11  74 01                     JZ 0x005d9d14
005D9D13  CC                        INT3
LAB_005d9d14:
005D9D14  68 12 02 00 00            PUSH 0x212
005D9D19  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D9D1E  6A 00                     PUSH 0x0
005D9D20  56                        PUSH ESI
005D9D21  E8 1A C1 0C 00            CALL 0x006a5e40
005D9D26  5F                        POP EDI
005D9D27  5E                        POP ESI
005D9D28  B8 FF FF 00 00            MOV EAX,0xffff
005D9D2D  5B                        POP EBX
005D9D2E  8B E5                     MOV ESP,EBP
005D9D30  5D                        POP EBP
005D9D31  C2 04 00                  RET 0x4
