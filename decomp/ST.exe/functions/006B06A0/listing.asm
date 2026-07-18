FUN_006b06a0:
006B06A0  55                        PUSH EBP
006B06A1  8B EC                     MOV EBP,ESP
006B06A3  81 EC 04 04 00 00         SUB ESP,0x404
006B06A9  53                        PUSH EBX
006B06AA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B06AD  56                        PUSH ESI
006B06AE  57                        PUSH EDI
006B06AF  8B 03                     MOV EAX,dword ptr [EBX]
006B06B1  85 C0                     TEST EAX,EAX
006B06B3  74 0D                     JZ 0x006b06c2
006B06B5  50                        PUSH EAX
006B06B6  FF 15 78 BA 85 00         CALL dword ptr [0x0085ba78]
006B06BC  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
LAB_006b06c2:
006B06C2  8B 83 B4 04 00 00         MOV EAX,dword ptr [EBX + 0x4b4]
006B06C8  85 C0                     TEST EAX,EAX
006B06CA  74 11                     JZ 0x006b06dd
006B06CC  50                        PUSH EAX
006B06CD  FF 15 78 BA 85 00         CALL dword ptr [0x0085ba78]
006B06D3  C7 83 B4 04 00 00 00 00 00 00  MOV dword ptr [EBX + 0x4b4],0x0
LAB_006b06dd:
006B06DD  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B06E0  B9 01 01 00 00            MOV ECX,0x101
006B06E5  33 C0                     XOR EAX,EAX
006B06E7  8B FE                     MOV EDI,ESI
006B06E9  F3 AB                     STOSD.REP ES:EDI
006B06EB  66 C7 06 00 03            MOV word ptr [ESI],0x300
006B06F0  66 C7 46 02 00 01         MOV word ptr [ESI + 0x2],0x100
006B06F6  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
006B06F9  85 C0                     TEST EAX,EAX
006B06FB  74 17                     JZ 0x006b0714
006B06FD  8B 08                     MOV ECX,dword ptr [EAX]
006B06FF  8D 56 04                  LEA EDX,[ESI + 0x4]
006B0702  52                        PUSH EDX
006B0703  68 00 01 00 00            PUSH 0x100
006B0708  6A 00                     PUSH 0x0
006B070A  6A 00                     PUSH 0x0
006B070C  50                        PUSH EAX
006B070D  FF 51 10                  CALL dword ptr [ECX + 0x10]
006B0710  85 C0                     TEST EAX,EAX
006B0712  74 25                     JZ 0x006b0739
LAB_006b0714:
006B0714  6A 00                     PUSH 0x0
006B0716  FF 15 4C BE 85 00         CALL dword ptr [0x0085be4c]
006B071C  8B F8                     MOV EDI,EAX
006B071E  8D 46 04                  LEA EAX,[ESI + 0x4]
006B0721  50                        PUSH EAX
006B0722  68 00 01 00 00            PUSH 0x100
006B0727  6A 00                     PUSH 0x0
006B0729  57                        PUSH EDI
006B072A  FF 15 80 BA 85 00         CALL dword ptr [0x0085ba80]
006B0730  57                        PUSH EDI
006B0731  6A 00                     PUSH 0x0
006B0733  FF 15 48 BE 85 00         CALL dword ptr [0x0085be48]
LAB_006b0739:
006B0739  F6 43 08 01               TEST byte ptr [EBX + 0x8],0x1
006B073D  75 4C                     JNZ 0x006b078b
006B073F  83 7B 20 08               CMP dword ptr [EBX + 0x20],0x8
006B0743  7F 46                     JG 0x006b078b
006B0745  33 C9                     XOR ECX,ECX
006B0747  8D 46 05                  LEA EAX,[ESI + 0x5]
006B074A  8D BE 02 04 00 00         LEA EDI,[ESI + 0x402]
006B0750  8D 96 00 04 00 00         LEA EDX,[ESI + 0x400]
006B0756  B3 02                     MOV BL,0x2
LAB_006b0758:
006B0758  88 48 FF                  MOV byte ptr [EAX + -0x1],CL
006B075B  C6 00 00                  MOV byte ptr [EAX],0x0
006B075E  C6 40 01 00               MOV byte ptr [EAX + 0x1],0x0
006B0762  88 58 02                  MOV byte ptr [EAX + 0x2],BL
006B0765  80 CB FF                  OR BL,0xff
006B0768  83 EA 04                  SUB EDX,0x4
006B076B  2A D9                     SUB BL,CL
006B076D  41                        INC ECX
006B076E  88 5A 04                  MOV byte ptr [EDX + 0x4],BL
006B0771  C6 47 FF 00               MOV byte ptr [EDI + -0x1],0x0
006B0775  B3 02                     MOV BL,0x2
006B0777  C6 07 00                  MOV byte ptr [EDI],0x0
006B077A  88 5F 01                  MOV byte ptr [EDI + 0x1],BL
006B077D  83 C0 04                  ADD EAX,0x4
006B0780  83 EF 04                  SUB EDI,0x4
006B0783  83 F9 0A                  CMP ECX,0xa
006B0786  7C D0                     JL 0x006b0758
006B0788  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_006b078b:
006B078B  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006B078E  85 FF                     TEST EDI,EDI
006B0790  7E 30                     JLE 0x006b07c2
006B0792  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B0795  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B0798  8D 41 02                  LEA EAX,[ECX + 0x2]
006B079B  8D 4C 96 06               LEA ECX,[ESI + EDX*0x4 + 0x6]
LAB_006b079f:
006B079F  8A 50 FE                  MOV DL,byte ptr [EAX + -0x2]
006B07A2  83 C0 04                  ADD EAX,0x4
006B07A5  88 51 FE                  MOV byte ptr [ECX + -0x2],DL
006B07A8  8A 50 FB                  MOV DL,byte ptr [EAX + -0x5]
006B07AB  88 51 FF                  MOV byte ptr [ECX + -0x1],DL
006B07AE  8A 50 FC                  MOV DL,byte ptr [EAX + -0x4]
006B07B1  88 11                     MOV byte ptr [ECX],DL
006B07B3  8A 50 FD                  MOV DL,byte ptr [EAX + -0x3]
006B07B6  80 CA 04                  OR DL,0x4
006B07B9  88 51 01                  MOV byte ptr [ECX + 0x1],DL
006B07BC  83 C1 04                  ADD ECX,0x4
006B07BF  4F                        DEC EDI
006B07C0  75 DD                     JNZ 0x006b079f
LAB_006b07c2:
006B07C2  F7 43 08 00 00 00 20      TEST dword ptr [EBX + 0x8],0x20000000
006B07C9  75 1B                     JNZ 0x006b07e6
006B07CB  B0 FF                     MOV AL,0xff
006B07CD  C6 86 03 04 00 00 04      MOV byte ptr [ESI + 0x403],0x4
006B07D4  88 86 00 04 00 00         MOV byte ptr [ESI + 0x400],AL
006B07DA  88 86 01 04 00 00         MOV byte ptr [ESI + 0x401],AL
006B07E0  88 86 02 04 00 00         MOV byte ptr [ESI + 0x402],AL
LAB_006b07e6:
006B07E6  8B 3D 7C BA 85 00         MOV EDI,dword ptr [0x0085ba7c]
006B07EC  56                        PUSH ESI
006B07ED  FF D7                     CALL EDI
006B07EF  85 C0                     TEST EAX,EAX
006B07F1  89 03                     MOV dword ptr [EBX],EAX
006B07F3  75 09                     JNZ 0x006b07fe
006B07F5  5F                        POP EDI
006B07F6  5E                        POP ESI
006B07F7  5B                        POP EBX
006B07F8  8B E5                     MOV ESP,EBP
006B07FA  5D                        POP EBP
006B07FB  C2 14 00                  RET 0x14
LAB_006b07fe:
006B07FE  56                        PUSH ESI
006B07FF  FF D7                     CALL EDI
006B0801  85 C0                     TEST EAX,EAX
006B0803  89 83 B4 04 00 00         MOV dword ptr [EBX + 0x4b4],EAX
006B0809  75 1A                     JNZ 0x006b0825
006B080B  8B 03                     MOV EAX,dword ptr [EBX]
006B080D  50                        PUSH EAX
006B080E  FF 15 78 BA 85 00         CALL dword ptr [0x0085ba78]
006B0814  5F                        POP EDI
006B0815  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
006B081B  5E                        POP ESI
006B081C  33 C0                     XOR EAX,EAX
006B081E  5B                        POP EBX
006B081F  8B E5                     MOV ESP,EBP
006B0821  5D                        POP EBP
006B0822  C2 14 00                  RET 0x14
LAB_006b0825:
006B0825  B9 01 01 00 00            MOV ECX,0x101
006B082A  8D BD FC FB FF FF         LEA EDI,[EBP + 0xfffffbfc]
006B0830  F3 A5                     MOVSD.REP ES:EDI,ESI
006B0832  6A 00                     PUSH 0x0
006B0834  FF 15 4C BE 85 00         CALL dword ptr [0x0085be4c]
006B083A  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006B083D  8B F0                     MOV ESI,EAX
006B083F  85 FF                     TEST EDI,EDI
006B0841  7E 11                     JLE 0x006b0854
006B0843  8D 8D 00 FC FF FF         LEA ECX,[EBP + 0xfffffc00]
006B0849  51                        PUSH ECX
006B084A  57                        PUSH EDI
006B084B  6A 00                     PUSH 0x0
006B084D  56                        PUSH ESI
006B084E  FF 15 80 BA 85 00         CALL dword ptr [0x0085ba80]
LAB_006b0854:
006B0854  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B0857  8D 04 0F                  LEA EAX,[EDI + ECX*0x1]
006B085A  3D 00 01 00 00            CMP EAX,0x100
006B085F  7D 1A                     JGE 0x006b087b
006B0861  8D 94 85 00 FC FF FF      LEA EDX,[EBP + EAX*0x4 + 0xfffffc00]
006B0868  52                        PUSH EDX
006B0869  BA 00 01 00 00            MOV EDX,0x100
006B086E  2B D7                     SUB EDX,EDI
006B0870  2B D1                     SUB EDX,ECX
006B0872  52                        PUSH EDX
006B0873  50                        PUSH EAX
006B0874  56                        PUSH ESI
006B0875  FF 15 80 BA 85 00         CALL dword ptr [0x0085ba80]
LAB_006b087b:
006B087B  56                        PUSH ESI
006B087C  6A 00                     PUSH 0x0
006B087E  FF 15 48 BE 85 00         CALL dword ptr [0x0085be48]
006B0884  8B BB DC 04 00 00         MOV EDI,dword ptr [EBX + 0x4dc]
006B088A  85 FF                     TEST EDI,EDI
006B088C  74 3F                     JZ 0x006b08cd
006B088E  B9 00 20 00 00            MOV ECX,0x2000
006B0893  83 C8 FF                  OR EAX,0xffffffff
006B0896  F3 AB                     STOSD.REP ES:EDI
006B0898  8B BB DC 04 00 00         MOV EDI,dword ptr [EBX + 0x4dc]
006B089E  B9 00 20 00 00            MOV ECX,0x2000
006B08A3  33 C0                     XOR EAX,EAX
006B08A5  81 C7 00 80 00 00         ADD EDI,0x8000
006B08AB  F3 AB                     STOSD.REP ES:EDI
006B08AD  8D 85 FC FB FF FF         LEA EAX,[EBP + 0xfffffbfc]
006B08B3  50                        PUSH EAX
006B08B4  FF 15 7C BA 85 00         CALL dword ptr [0x0085ba7c]
006B08BA  85 C0                     TEST EAX,EAX
006B08BC  89 83 E0 04 00 00         MOV dword ptr [EBX + 0x4e0],EAX
006B08C2  75 09                     JNZ 0x006b08cd
006B08C4  5F                        POP EDI
006B08C5  5E                        POP ESI
006B08C6  5B                        POP EBX
006B08C7  8B E5                     MOV ESP,EBP
006B08C9  5D                        POP EBP
006B08CA  C2 14 00                  RET 0x14
LAB_006b08cd:
006B08CD  68 00 01 00 00            PUSH 0x100
006B08D2  8D 8D 00 FC FF FF         LEA ECX,[EBP + 0xfffffc00]
006B08D8  6A 00                     PUSH 0x0
006B08DA  51                        PUSH ECX
006B08DB  53                        PUSH EBX
006B08DC  E8 3F FC FF FF            CALL 0x006b0520
006B08E1  F7 D8                     NEG EAX
006B08E3  1B C0                     SBB EAX,EAX
006B08E5  5F                        POP EDI
006B08E6  5E                        POP ESI
006B08E7  40                        INC EAX
006B08E8  5B                        POP EBX
006B08E9  8B E5                     MOV ESP,EBP
006B08EB  5D                        POP EBP
006B08EC  C2 14 00                  RET 0x14
