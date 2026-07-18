FUN_006799b0:
006799B0  55                        PUSH EBP
006799B1  8B EC                     MOV EBP,ESP
006799B3  83 EC 38                  SUB ESP,0x38
006799B6  56                        PUSH ESI
006799B7  8B F1                     MOV ESI,ECX
006799B9  57                        PUSH EDI
006799BA  8A 86 44 06 00 00         MOV AL,byte ptr [ESI + 0x644]
006799C0  8B 96 40 06 00 00         MOV EDX,dword ptr [ESI + 0x640]
006799C6  3C 01                     CMP AL,0x1
006799C8  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006799CB  0F 85 AB 01 00 00         JNZ 0x00679b7c
006799D1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006799D4  66 83 F9 08               CMP CX,0x8
006799D8  0F 83 9E 01 00 00         JNC 0x00679b7c
006799DE  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006799E3  85 C0                     TEST EAX,EAX
006799E5  74 14                     JZ 0x006799fb
006799E7  0F BF C1                  MOVSX EAX,CX
006799EA  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006799ED  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
006799F5  0F 83 81 01 00 00         JNC 0x00679b7c
LAB_006799fb:
006799FB  0F BF F9                  MOVSX EDI,CX
006799FE  3B FA                     CMP EDI,EDX
00679A00  0F 84 76 01 00 00         JZ 0x00679b7c
00679A06  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
00679A0C  3B F8                     CMP EDI,EAX
00679A0E  0F 84 68 01 00 00         JZ 0x00679b7c
00679A14  88 45 08                  MOV byte ptr [EBP + 0x8],AL
00679A17  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
00679A1C  84 C0                     TEST AL,AL
00679A1E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00679A21  74 26                     JZ 0x00679a49
00679A23  25 FF 00 00 00            AND EAX,0xff
00679A28  81 E1 FF 00 00 00         AND ECX,0xff
00679A2E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00679A31  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00679A34  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00679A3B  33 C0                     XOR EAX,EAX
00679A3D  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00679A44  0F 95 C0                  SETNZ AL
00679A47  EB 15                     JMP 0x00679a5e
LAB_00679a49:
00679A49  50                        PUSH EAX
00679A4A  51                        PUSH ECX
00679A4B  B9 20 76 80 00            MOV ECX,0x807620
00679A50  E8 3A C3 D8 FF            CALL 0x00405d8f
00679A55  33 C9                     XOR ECX,ECX
00679A57  85 C0                     TEST EAX,EAX
00679A59  0F 9C C1                  SETL CL
00679A5C  8B C1                     MOV EAX,ECX
LAB_00679a5e:
00679A5E  85 C0                     TEST EAX,EAX
00679A60  0F 84 16 01 00 00         JZ 0x00679b7c
00679A66  39 BE 49 06 00 00         CMP dword ptr [ESI + 0x649],EDI
00679A6C  0F 85 FB 00 00 00         JNZ 0x00679b6d
00679A72  66 FF 86 4D 06 00 00      INC word ptr [ESI + 0x64d]
00679A79  8D 04 FF                  LEA EAX,[EDI + EDI*0x8]
00679A7C  8A 8C C0 C7 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087c7]
00679A83  8B 86 40 06 00 00         MOV EAX,dword ptr [ESI + 0x640]
00679A89  84 C9                     TEST CL,CL
00679A8B  75 5F                     JNZ 0x00679aec
00679A8D  83 F8 08                  CMP EAX,0x8
00679A90  73 34                     JNC 0x00679ac6
00679A92  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00679A95  8A 8C C0 C7 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087c7]
00679A9C  84 C9                     TEST CL,CL
00679A9E  75 26                     JNZ 0x00679ac6
00679AA0  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
00679AA6  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00679AAC  81 C2 39 30 00 00         ADD EDX,0x3039
00679AB2  89 96 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EDX
00679AB8  C1 EA 10                  SHR EDX,0x10
00679ABB  83 E2 07                  AND EDX,0x7
00679ABE  83 C2 08                  ADD EDX,0x8
00679AC1  E9 85 00 00 00            JMP 0x00679b4b
LAB_00679ac6:
00679AC6  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
00679ACC  33 D2                     XOR EDX,EDX
00679ACE  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00679AD4  05 39 30 00 00            ADD EAX,0x3039
00679AD9  B9 03 00 00 00            MOV ECX,0x3
00679ADE  89 86 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EAX
00679AE4  C1 E8 10                  SHR EAX,0x10
00679AE7  F7 F1                     DIV ECX
00679AE9  42                        INC EDX
00679AEA  EB 5F                     JMP 0x00679b4b
LAB_00679aec:
00679AEC  83 F8 08                  CMP EAX,0x8
00679AEF  73 37                     JNC 0x00679b28
00679AF1  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00679AF4  8A 8C C0 C7 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087c7]
00679AFB  84 C9                     TEST CL,CL
00679AFD  75 29                     JNZ 0x00679b28
00679AFF  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
00679B05  B9 0B 00 00 00            MOV ECX,0xb
00679B0A  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00679B10  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00679B16  33 D2                     XOR EDX,EDX
00679B18  89 86 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EAX
00679B1E  C1 E8 10                  SHR EAX,0x10
00679B21  F7 F1                     DIV ECX
00679B23  83 C2 14                  ADD EDX,0x14
00679B26  EB 23                     JMP 0x00679b4b
LAB_00679b28:
00679B28  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
00679B2E  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00679B34  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00679B3A  89 86 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EAX
00679B40  C1 E8 10                  SHR EAX,0x10
00679B43  83 E0 07                  AND EAX,0x7
00679B46  83 C0 08                  ADD EAX,0x8
00679B49  8B D0                     MOV EDX,EAX
LAB_00679b4b:
00679B4B  0F BF 86 4D 06 00 00      MOVSX EAX,word ptr [ESI + 0x64d]
00679B52  3B C2                     CMP EAX,EDX
00679B54  7E 26                     JLE 0x00679b7c
00679B56  89 BE 40 06 00 00         MOV dword ptr [ESI + 0x640],EDI
00679B5C  89 BE 49 06 00 00         MOV dword ptr [ESI + 0x649],EDI
00679B62  66 C7 86 4D 06 00 00 00 00  MOV word ptr [ESI + 0x64d],0x0
00679B6B  EB 0F                     JMP 0x00679b7c
LAB_00679b6d:
00679B6D  89 BE 49 06 00 00         MOV dword ptr [ESI + 0x649],EDI
00679B73  66 C7 86 4D 06 00 00 01 00  MOV word ptr [ESI + 0x64d],0x1
LAB_00679b7c:
00679B7C  8B 96 40 06 00 00         MOV EDX,dword ptr [ESI + 0x640]
00679B82  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00679B85  3B D0                     CMP EDX,EAX
00679B87  74 2C                     JZ 0x00679bb5
00679B89  B9 0D 00 00 00            MOV ECX,0xd
00679B8E  33 C0                     XOR EAX,EAX
00679B90  8D 7D C8                  LEA EDI,[EBP + -0x38]
00679B93  6A FF                     PUSH -0x1
00679B95  F3 AB                     STOSD.REP ES:EDI
00679B97  8B 8E FE 06 00 00         MOV ECX,dword ptr [ESI + 0x6fe]
00679B9D  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00679BA0  8D 55 C8                  LEA EDX,[EBP + -0x38]
00679BA3  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00679BA6  52                        PUSH EDX
00679BA7  8B CE                     MOV ECX,ESI
00679BA9  C7 45 C8 6A 00 00 00      MOV dword ptr [EBP + -0x38],0x6a
00679BB0  E8 11 C2 D8 FF            CALL 0x00405dc6
LAB_00679bb5:
00679BB5  5F                        POP EDI
00679BB6  5E                        POP ESI
00679BB7  8B E5                     MOV ESP,EBP
00679BB9  5D                        POP EBP
00679BBA  C2 04 00                  RET 0x4
