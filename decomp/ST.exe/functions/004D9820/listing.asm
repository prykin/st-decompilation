FUN_004d9820:
004D9820  55                        PUSH EBP
004D9821  8B EC                     MOV EBP,ESP
004D9823  51                        PUSH ECX
004D9824  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D9829  53                        PUSH EBX
004D982A  56                        PUSH ESI
004D982B  8B F1                     MOV ESI,ECX
004D982D  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004D9833  57                        PUSH EDI
004D9834  8B 8E D8 04 00 00         MOV ECX,dword ptr [ESI + 0x4d8]
004D983A  83 C1 4B                  ADD ECX,0x4b
004D983D  3B C1                     CMP EAX,ECX
004D983F  0F 82 64 01 00 00         JC 0x004d99a9
004D9845  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
004D984B  33 C0                     XOR EAX,EAX
004D984D  89 86 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EAX
004D9853  89 86 E0 04 00 00         MOV dword ptr [ESI + 0x4e0],EAX
004D9859  8B 86 B4 05 00 00         MOV EAX,dword ptr [ESI + 0x5b4]
004D985F  8D 58 F3                  LEA EBX,[EAX + -0xd]
004D9862  83 C0 0D                  ADD EAX,0xd
004D9865  3B D8                     CMP EBX,EAX
004D9867  0F 8D 3C 01 00 00         JGE 0x004d99a9
LAB_004d986d:
004D986D  85 DB                     TEST EBX,EBX
004D986F  0F 8C 22 01 00 00         JL 0x004d9997
004D9875  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004D987C  3B DA                     CMP EBX,EDX
004D987E  0F 8D 13 01 00 00         JGE 0x004d9997
004D9884  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004D988A  8D 78 F3                  LEA EDI,[EAX + -0xd]
004D988D  83 C0 0D                  ADD EAX,0xd
004D9890  3B F8                     CMP EDI,EAX
004D9892  0F 8D FF 00 00 00         JGE 0x004d9997
004D9898  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
004D989F  66 8B 15 44 B2 7F 00      MOV DX,word ptr [0x007fb244]
LAB_004d98a6:
004D98A6  85 FF                     TEST EDI,EDI
004D98A8  0F 8C D7 00 00 00         JL 0x004d9985
004D98AE  0F BF C1                  MOVSX EAX,CX
004D98B1  3B F8                     CMP EDI,EAX
004D98B3  0F 8D CC 00 00 00         JGE 0x004d9985
004D98B9  33 C0                     XOR EAX,EAX
004D98BB  66 85 D2                  TEST DX,DX
004D98BE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004D98C1  0F 8E BE 00 00 00         JLE 0x004d9985
LAB_004d98c7:
004D98C7  66 85 FF                  TEST DI,DI
004D98CA  0F 8C 98 00 00 00         JL 0x004d9968
004D98D0  66 3B F9                  CMP DI,CX
004D98D3  0F 8D 8F 00 00 00         JGE 0x004d9968
004D98D9  66 85 DB                  TEST BX,BX
004D98DC  0F 8C 86 00 00 00         JL 0x004d9968
004D98E2  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
004D98E9  7D 7D                     JGE 0x004d9968
004D98EB  66 85 C0                  TEST AX,AX
004D98EE  7C 78                     JL 0x004d9968
004D98F0  66 3B C2                  CMP AX,DX
004D98F3  7D 73                     JGE 0x004d9968
004D98F5  0F BF D3                  MOVSX EDX,BX
004D98F8  0F BF C9                  MOVSX ECX,CX
004D98FB  0F AF D1                  IMUL EDX,ECX
004D98FE  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004D9905  0F BF C0                  MOVSX EAX,AX
004D9908  0F AF C1                  IMUL EAX,ECX
004D990B  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004D9911  03 D0                     ADD EDX,EAX
004D9913  0F BF C7                  MOVSX EAX,DI
004D9916  03 D0                     ADD EDX,EAX
004D9918  8B 0C D1                  MOV ECX,dword ptr [ECX + EDX*0x8]
004D991B  85 C9                     TEST ECX,ECX
004D991D  74 46                     JZ 0x004d9965
004D991F  3B CE                     CMP ECX,ESI
004D9921  74 42                     JZ 0x004d9965
004D9923  8B 11                     MOV EDX,dword ptr [ECX]
004D9925  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D9928  83 F8 3A                  CMP EAX,0x3a
004D992B  75 38                     JNZ 0x004d9965
004D992D  8B 86 B4 05 00 00         MOV EAX,dword ptr [ESI + 0x5b4]
004D9933  8B 8E B0 05 00 00         MOV ECX,dword ptr [ESI + 0x5b0]
004D9939  50                        PUSH EAX
004D993A  51                        PUSH ECX
004D993B  53                        PUSH EBX
004D993C  57                        PUSH EDI
004D993D  E8 96 35 1D 00            CALL 0x006aced8
004D9942  83 C4 10                  ADD ESP,0x10
004D9945  83 F8 0D                  CMP EAX,0xd
004D9948  7F 1B                     JG 0x004d9965
004D994A  8B 96 DC 04 00 00         MOV EDX,dword ptr [ESI + 0x4dc]
004D9950  8B 8E E0 04 00 00         MOV ECX,dword ptr [ESI + 0x4e0]
004D9956  42                        INC EDX
004D9957  03 C8                     ADD ECX,EAX
004D9959  89 96 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EDX
004D995F  89 8E E0 04 00 00         MOV dword ptr [ESI + 0x4e0],ECX
LAB_004d9965:
004D9965  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_004d9968:
004D9968  66 8B 15 44 B2 7F 00      MOV DX,word ptr [0x007fb244]
004D996F  40                        INC EAX
004D9970  0F BF CA                  MOVSX ECX,DX
004D9973  3B C1                     CMP EAX,ECX
004D9975  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
004D997C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004D997F  0F 8C 42 FF FF FF         JL 0x004d98c7
LAB_004d9985:
004D9985  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004D998B  47                        INC EDI
004D998C  83 C0 0D                  ADD EAX,0xd
004D998F  3B F8                     CMP EDI,EAX
004D9991  0F 8C 0F FF FF FF         JL 0x004d98a6
LAB_004d9997:
004D9997  8B 8E B4 05 00 00         MOV ECX,dword ptr [ESI + 0x5b4]
004D999D  43                        INC EBX
004D999E  83 C1 0D                  ADD ECX,0xd
004D99A1  3B D9                     CMP EBX,ECX
004D99A3  0F 8C C4 FE FF FF         JL 0x004d986d
LAB_004d99a9:
004D99A9  8B 86 DC 04 00 00         MOV EAX,dword ptr [ESI + 0x4dc]
004D99AF  8B 8E E0 04 00 00         MOV ECX,dword ptr [ESI + 0x4e0]
004D99B5  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004D99B8  8D 3C 90                  LEA EDI,[EAX + EDX*0x4]
004D99BB  2B F9                     SUB EDI,ECX
004D99BD  79 02                     JNS 0x004d99c1
004D99BF  33 FF                     XOR EDI,EDI
LAB_004d99c1:
004D99C1  85 C0                     TEST EAX,EAX
004D99C3  74 4B                     JZ 0x004d9a10
004D99C5  6A 0D                     PUSH 0xd
004D99C7  E8 00 79 1D 00            CALL 0x006b12cc
004D99CC  83 C4 04                  ADD ESP,0x4
004D99CF  50                        PUSH EAX
004D99D0  57                        PUSH EDI
004D99D1  E8 F6 78 1D 00            CALL 0x006b12cc
004D99D6  83 C4 04                  ADD ESP,0x4
004D99D9  50                        PUSH EAX
004D99DA  E8 C9 78 1D 00            CALL 0x006b12a8
004D99DF  8B 1D 8C DA 7E 00         MOV EBX,dword ptr [0x007eda8c]
004D99E5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D99EB  83 C4 08                  ADD ESP,0x8
004D99EE  03 C3                     ADD EAX,EBX
004D99F0  50                        PUSH EAX
004D99F1  E8 71 78 F2 FF            CALL 0x00401267
004D99F6  50                        PUSH EAX
004D99F7  E8 D0 78 1D 00            CALL 0x006b12cc
004D99FC  83 C4 04                  ADD ESP,0x4
004D99FF  50                        PUSH EAX
004D9A00  E8 D7 78 1D 00            CALL 0x006b12dc
004D9A05  50                        PUSH EAX
004D9A06  E8 75 78 1D 00            CALL 0x006b1280
004D9A0B  83 C4 0C                  ADD ESP,0xc
004D9A0E  EB 0B                     JMP 0x004d9a1b
LAB_004d9a10:
004D9A10  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D9A16  E8 4C 78 F2 FF            CALL 0x00401267
LAB_004d9a1b:
004D9A1B  8B BE D4 04 00 00         MOV EDI,dword ptr [ESI + 0x4d4]
004D9A21  89 86 E4 04 00 00         MOV dword ptr [ESI + 0x4e4],EAX
004D9A27  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D9A2C  8B 8E E4 04 00 00         MOV ECX,dword ptr [ESI + 0x4e4]
004D9A32  03 CF                     ADD ECX,EDI
004D9A34  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004D9A3A  3B C1                     CMP EAX,ECX
004D9A3C  72 32                     JC 0x004d9a70
004D9A3E  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004D9A44  89 86 D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EAX
004D9A4A  83 C2 02                  ADD EDX,0x2
004D9A4D  6A 02                     PUSH 0x2
004D9A4F  89 96 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDX
004D9A55  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D9A5B  E8 17 77 F2 FF            CALL 0x00401177
004D9A60  83 BE D0 04 00 00 64      CMP dword ptr [ESI + 0x4d0],0x64
004D9A67  7C 07                     JL 0x004d9a70
004D9A69  8B CE                     MOV ECX,ESI
004D9A6B  E8 2F B3 F2 FF            CALL 0x00404d9f
LAB_004d9a70:
004D9A70  5F                        POP EDI
004D9A71  5E                        POP ESI
004D9A72  33 C0                     XOR EAX,EAX
004D9A74  5B                        POP EBX
004D9A75  8B E5                     MOV ESP,EBP
004D9A77  5D                        POP EBP
004D9A78  C3                        RET
