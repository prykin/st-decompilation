FUN_006d0460:
006D0460  55                        PUSH EBP
006D0461  8B EC                     MOV EBP,ESP
006D0463  81 EC 28 02 00 00         SUB ESP,0x228
006D0469  53                        PUSH EBX
006D046A  56                        PUSH ESI
006D046B  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006D046E  57                        PUSH EDI
006D046F  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D0472  85 FF                     TEST EDI,EDI
006D0474  75 0B                     JNZ 0x006d0481
006D0476  56                        PUSH ESI
006D0477  E8 24 4B FE FF            CALL 0x006b4fa0
006D047C  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006D047F  8B F8                     MOV EDI,EAX
LAB_006d0481:
006D0481  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
006D0484  56                        PUSH ESI
006D0485  E8 56 4B FE FF            CALL 0x006b4fe0
006D048A  85 C0                     TEST EAX,EAX
006D048C  0F 84 9B 00 00 00         JZ 0x006d052d
006D0492  3D 00 01 00 00            CMP EAX,0x100
006D0497  0F 8F 90 00 00 00         JG 0x006d052d
006D049D  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006D04A0  85 C9                     TEST ECX,ECX
006D04A2  0F 85 85 00 00 00         JNZ 0x006d052d
006D04A8  B9 0A 00 00 00            MOV ECX,0xa
006D04AD  8D BD D8 FD FF FF         LEA EDI,[EBP + 0xfffffdd8]
006D04B3  F3 A5                     MOVSD.REP ES:EDI,ESI
006D04B5  33 C9                     XOR ECX,ECX
006D04B7  85 C0                     TEST EAX,EAX
006D04B9  7E 11                     JLE 0x006d04cc
006D04BB  8D 95 00 FE FF FF         LEA EDX,[EBP + 0xfffffe00]
LAB_006d04c1:
006D04C1  66 89 0A                  MOV word ptr [EDX],CX
006D04C4  41                        INC ECX
006D04C5  83 C2 02                  ADD EDX,0x2
006D04C8  3B C8                     CMP ECX,EAX
006D04CA  7C F5                     JL 0x006d04c1
LAB_006d04cc:
006D04CC  85 DB                     TEST EBX,EBX
006D04CE  6A 01                     PUSH 0x1
006D04D0  7C 20                     JL 0x006d04f2
006D04D2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D04D5  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006D04D8  8D 85 D8 FD FF FF         LEA EAX,[EBP + 0xfffffdd8]
006D04DE  50                        PUSH EAX
006D04DF  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D04E2  51                        PUSH ECX
006D04E3  53                        PUSH EBX
006D04E4  2B DA                     SUB EBX,EDX
006D04E6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D04E9  2B D8                     SUB EBX,EAX
006D04EB  6A 00                     PUSH 0x0
006D04ED  53                        PUSH EBX
006D04EE  52                        PUSH EDX
006D04EF  50                        PUSH EAX
006D04F0  EB 1C                     JMP 0x006d050e
LAB_006d04f2:
006D04F2  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D04F5  8D 8D D8 FD FF FF         LEA ECX,[EBP + 0xfffffdd8]
006D04FB  51                        PUSH ECX
006D04FC  52                        PUSH EDX
LAB_006d04fd:
006D04FD  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D0500  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D0503  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006D0506  F7 DB                     NEG EBX
006D0508  53                        PUSH EBX
006D0509  6A 00                     PUSH 0x0
006D050B  50                        PUSH EAX
006D050C  51                        PUSH ECX
006D050D  52                        PUSH EDX
LAB_006d050e:
006D050E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D0511  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D0514  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D0517  50                        PUSH EAX
006D0518  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D051B  51                        PUSH ECX
006D051C  52                        PUSH EDX
006D051D  50                        PUSH EAX
006D051E  FF 15 BC BA 85 00         CALL dword ptr [0x0085babc]
006D0524  5F                        POP EDI
006D0525  5E                        POP ESI
006D0526  5B                        POP EBX
006D0527  8B E5                     MOV ESP,EBP
006D0529  5D                        POP EBP
006D052A  C2 24 00                  RET 0x24
LAB_006d052d:
006D052D  6A 00                     PUSH 0x0
006D052F  56                        PUSH ESI
006D0530  85 DB                     TEST EBX,EBX
006D0532  57                        PUSH EDI
006D0533  7C C8                     JL 0x006d04fd
006D0535  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D0538  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D053B  53                        PUSH EBX
006D053C  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006D053F  2B D8                     SUB EBX,EAX
006D0541  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D0544  2B D8                     SUB EBX,EAX
006D0546  6A 00                     PUSH 0x0
006D0548  53                        PUSH EBX
006D0549  51                        PUSH ECX
006D054A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D054D  50                        PUSH EAX
006D054E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D0551  52                        PUSH EDX
006D0552  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D0555  50                        PUSH EAX
006D0556  51                        PUSH ECX
006D0557  52                        PUSH EDX
006D0558  FF 15 BC BA 85 00         CALL dword ptr [0x0085babc]
006D055E  5F                        POP EDI
006D055F  5E                        POP ESI
006D0560  5B                        POP EBX
006D0561  8B E5                     MOV ESP,EBP
006D0563  5D                        POP EBP
006D0564  C2 24 00                  RET 0x24
