FUN_004e46f0:
004E46F0  55                        PUSH EBP
004E46F1  8B EC                     MOV EBP,ESP
004E46F3  83 EC 24                  SUB ESP,0x24
004E46F6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E46FB  56                        PUSH ESI
004E46FC  8B F1                     MOV ESI,ECX
004E46FE  57                        PUSH EDI
004E46FF  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004E4705  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
004E470B  83 C1 19                  ADD ECX,0x19
004E470E  3B C1                     CMP EAX,ECX
004E4710  0F 82 51 01 00 00         JC 0x004e4867
004E4716  8B BE D8 04 00 00         MOV EDI,dword ptr [ESI + 0x4d8]
004E471C  53                        PUSH EBX
004E471D  89 86 D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EAX
004E4723  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004e472a:
004E472A  8B C7                     MOV EAX,EDI
004E472C  B9 1D 00 00 00            MOV ECX,0x1d
004E4731  99                        CDQ
004E4732  F7 F9                     IDIV ECX
004E4734  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004E473A  8D 4C 02 F1               LEA ECX,[EDX + EAX*0x1 + -0xf]
004E473E  B8 09 CB 3D 8D            MOV EAX,0x8d3dcb09
004E4743  F7 EF                     IMUL EDI
004E4745  03 D7                     ADD EDX,EDI
004E4747  C1 FA 04                  SAR EDX,0x4
004E474A  8B C2                     MOV EAX,EDX
004E474C  C1 E8 1F                  SHR EAX,0x1f
004E474F  03 D0                     ADD EDX,EAX
004E4751  8B 86 B4 05 00 00         MOV EAX,dword ptr [ESI + 0x5b4]
004E4757  85 C9                     TEST ECX,ECX
004E4759  8D 54 02 F1               LEA EDX,[EDX + EAX*0x1 + -0xf]
004E475D  7C 65                     JL 0x004e47c4
004E475F  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004E4766  3B C8                     CMP ECX,EAX
004E4768  7D 5A                     JGE 0x004e47c4
004E476A  85 D2                     TEST EDX,EDX
004E476C  7C 56                     JL 0x004e47c4
004E476E  0F BF 1D 42 B2 7F 00      MOVSX EBX,word ptr [0x007fb242]
004E4775  3B D3                     CMP EDX,EBX
004E4777  7D 4B                     JGE 0x004e47c4
004E4779  0F AF C2                  IMUL EAX,EDX
004E477C  03 05 68 A1 7F 00         ADD EAX,dword ptr [0x007fa168]
004E4782  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
004E4785  8A 04 08                  MOV AL,byte ptr [EAX + ECX*0x1]
004E4788  8B C8                     MOV ECX,EAX
004E478A  81 E1 FF 00 00 00         AND ECX,0xff
004E4790  74 32                     JZ 0x004e47c4
004E4792  83 F9 0A                  CMP ECX,0xa
004E4795  7C 05                     JL 0x004e479c
004E4797  B9 0A 00 00 00            MOV ECX,0xa
LAB_004e479c:
004E479C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004E479F  2A C1                     SUB AL,CL
004E47A1  88 02                     MOV byte ptr [EDX],AL
004E47A3  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004E47A9  03 D1                     ADD EDX,ECX
004E47AB  03 D9                     ADD EBX,ECX
004E47AD  8B C2                     MOV EAX,EDX
004E47AF  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004E47B2  83 F8 64                  CMP EAX,0x64
004E47B5  89 96 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDX
004E47BB  7C 07                     JL 0x004e47c4
004E47BD  8B CE                     MOV ECX,ESI
004E47BF  E8 43 E4 F1 FF            CALL 0x00402c07
LAB_004e47c4:
004E47C4  47                        INC EDI
004E47C5  81 FF 49 03 00 00         CMP EDI,0x349
004E47CB  7C 02                     JL 0x004e47cf
004E47CD  33 FF                     XOR EDI,EDI
LAB_004e47cf:
004E47CF  3B BE D8 04 00 00         CMP EDI,dword ptr [ESI + 0x4d8]
004E47D5  74 0A                     JZ 0x004e47e1
004E47D7  83 7D FC 0A               CMP dword ptr [EBP + -0x4],0xa
004E47DB  0F 8C 49 FF FF FF         JL 0x004e472a
LAB_004e47e1:
004E47E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E47E4  89 BE D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EDI
004E47EA  85 C0                     TEST EAX,EAX
004E47EC  5B                        POP EBX
004E47ED  75 78                     JNZ 0x004e4867
004E47EF  8B 86 DC 04 00 00         MOV EAX,dword ptr [ESI + 0x4dc]
004E47F5  85 C0                     TEST EAX,EAX
004E47F7  75 6E                     JNZ 0x004e4867
004E47F9  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004E47FC  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E47FF  33 D2                     XOR EDX,EDX
004E4801  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004E4807  3B C2                     CMP EAX,EDX
004E4809  75 5C                     JNZ 0x004e4867
004E480B  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
004E480F  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004E4812  BF 01 00 00 00            MOV EDI,0x1
004E4817  50                        PUSH EAX
004E4818  89 BE DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EDI
004E481E  51                        PUSH ECX
004E481F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E4825  E8 CF 14 F2 FF            CALL 0x00405cf9
004E482A  85 C0                     TEST EAX,EAX
004E482C  74 28                     JZ 0x004e4856
004E482E  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
004E4831  85 C9                     TEST ECX,ECX
004E4833  74 21                     JZ 0x004e4856
004E4835  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004E4838  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004E483C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004E483F  C7 45 EC 99 5D 00 00      MOV dword ptr [EBP + -0x14],0x5d99
004E4846  66 89 7D F0               MOV word ptr [EBP + -0x10],DI
004E484A  66 89 55 F2               MOV word ptr [EBP + -0xe],DX
004E484E  8B 11                     MOV EDX,dword ptr [ECX]
004E4850  8D 45 DC                  LEA EAX,[EBP + -0x24]
004E4853  50                        PUSH EAX
004E4854  FF 12                     CALL dword ptr [EDX]
LAB_004e4856:
004E4856  8B 16                     MOV EDX,dword ptr [ESI]
004E4858  68 CF 03 00 00            PUSH 0x3cf
004E485D  6A 04                     PUSH 0x4
004E485F  8B CE                     MOV ECX,ESI
004E4861  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004e4867:
004E4867  5F                        POP EDI
004E4868  33 C0                     XOR EAX,EAX
004E486A  5E                        POP ESI
004E486B  8B E5                     MOV ESP,EBP
004E486D  5D                        POP EBP
004E486E  C3                        RET
