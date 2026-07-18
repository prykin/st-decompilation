FUN_004e0830:
004E0830  55                        PUSH EBP
004E0831  8B EC                     MOV EBP,ESP
004E0833  83 EC 0C                  SUB ESP,0xc
004E0836  53                        PUSH EBX
004E0837  56                        PUSH ESI
004E0838  8B F1                     MOV ESI,ECX
004E083A  33 DB                     XOR EBX,EBX
004E083C  57                        PUSH EDI
004E083D  BF 03 00 00 00            MOV EDI,0x3
004E0842  83 BE D0 04 00 00 01      CMP dword ptr [ESI + 0x4d0],0x1
004E0849  0F 85 33 02 00 00         JNZ 0x004e0a82
004E084F  8B 86 F5 01 00 00         MOV EAX,dword ptr [ESI + 0x1f5]
004E0855  8B 88 A4 01 00 00         MOV ECX,dword ptr [EAX + 0x1a4]
004E085B  8B 90 A0 01 00 00         MOV EDX,dword ptr [EAX + 0x1a0]
004E0861  3B CA                     CMP ECX,EDX
004E0863  0F 85 BD 01 00 00         JNZ 0x004e0a26
004E0869  8B 86 E8 04 00 00         MOV EAX,dword ptr [ESI + 0x4e8]
004E086F  83 F8 01                  CMP EAX,0x1
004E0872  75 5A                     JNZ 0x004e08ce
004E0874  39 9E E4 04 00 00         CMP dword ptr [ESI + 0x4e4],EBX
004E087A  74 0F                     JZ 0x004e088b
004E087C  C7 86 E8 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4e8],0x2
004E0886  E9 94 01 00 00            JMP 0x004e0a1f
LAB_004e088b:
004E088B  8B CE                     MOV ECX,ESI
004E088D  89 BE E8 04 00 00         MOV dword ptr [ESI + 0x4e8],EDI
004E0893  E8 3F 26 F2 FF            CALL 0x00402ed7
004E0898  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E089E  83 C0 C7                  ADD EAX,-0x39
004E08A1  83 F8 27                  CMP EAX,0x27
004E08A4  0F 87 7C 01 00 00         JA 0x004e0a26
004E08AA  33 D2                     XOR EDX,EDX
004E08AC  8A 90 5C 10 4E 00         MOV DL,byte ptr [EAX + 0x4e105c]
switchD_004e08b2::switchD:
004E08B2  FF 24 95 44 10 4E 00      JMP dword ptr [EDX*0x4 + 0x4e1044]
switchD_004e08b2::caseD_60:
004E08B9  8B 06                     MOV EAX,dword ptr [ESI]
004E08BB  68 B9 03 00 00            PUSH 0x3b9
004E08C0  57                        PUSH EDI
004E08C1  8B CE                     MOV ECX,ESI
004E08C3  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004E08C9  E9 58 01 00 00            JMP 0x004e0a26
LAB_004e08ce:
004E08CE  83 F8 02                  CMP EAX,0x2
004E08D1  0F 85 3E 01 00 00         JNZ 0x004e0a15
004E08D7  39 9E E4 04 00 00         CMP dword ptr [ESI + 0x4e4],EBX
004E08DD  74 26                     JZ 0x004e0905
004E08DF  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E08E5  83 F8 3B                  CMP EAX,0x3b
004E08E8  0F 84 31 01 00 00         JZ 0x004e0a1f
004E08EE  83 F8 60                  CMP EAX,0x60
004E08F1  0F 84 28 01 00 00         JZ 0x004e0a1f
004E08F7  83 F8 52                  CMP EAX,0x52
004E08FA  0F 85 26 01 00 00         JNZ 0x004e0a26
004E0900  E9 1A 01 00 00            JMP 0x004e0a1f
LAB_004e0905:
004E0905  8B CE                     MOV ECX,ESI
004E0907  89 BE E8 04 00 00         MOV dword ptr [ESI + 0x4e8],EDI
004E090D  E8 C5 25 F2 FF            CALL 0x00402ed7
004E0912  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E0918  83 C0 C7                  ADD EAX,-0x39
004E091B  83 F8 27                  CMP EAX,0x27
004E091E  0F 87 02 01 00 00         JA 0x004e0a26
004E0924  33 D2                     XOR EDX,EDX
004E0926  8A 90 A0 10 4E 00         MOV DL,byte ptr [EAX + 0x4e10a0]
switchD_004e092c::switchD:
004E092C  FF 24 95 84 10 4E 00      JMP dword ptr [EDX*0x4 + 0x4e1084]
switchD_004e08b2::caseD_5e:
004E0933  8B 06                     MOV EAX,dword ptr [ESI]
004E0935  68 AA 03 00 00            PUSH 0x3aa
004E093A  57                        PUSH EDI
004E093B  8B CE                     MOV ECX,ESI
004E093D  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004E0943  E9 DE 00 00 00            JMP 0x004e0a26
switchD_004e08b2::caseD_39:
004E0948  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004E094E  8B 3E                     MOV EDI,dword ptr [ESI]
004E0950  51                        PUSH ECX
004E0951  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0957  E8 5B 40 F2 FF            CALL 0x004049b7
004E095C  2C 02                     SUB AL,0x2
004E095E  8B CE                     MOV ECX,ESI
004E0960  F6 D8                     NEG AL
004E0962  1B C0                     SBB EAX,EAX
004E0964  24 3A                     AND AL,0x3a
004E0966  05 E9 02 00 00            ADD EAX,0x2e9
004E096B  50                        PUSH EAX
004E096C  6A 03                     PUSH 0x3
004E096E  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
004E0974  E9 AD 00 00 00            JMP 0x004e0a26
switchD_004e08b2::caseD_4f:
004E0979  8A 96 3D 02 00 00         MOV DL,byte ptr [ESI + 0x23d]
004E097F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0985  8B 3E                     MOV EDI,dword ptr [ESI]
004E0987  52                        PUSH EDX
004E0988  E8 2A 40 F2 FF            CALL 0x004049b7
004E098D  2C 02                     SUB AL,0x2
004E098F  8B CE                     MOV ECX,ESI
004E0991  F6 D8                     NEG AL
004E0993  1B C0                     SBB EAX,EAX
004E0995  24 32                     AND AL,0x32
004E0997  05 4F 03 00 00            ADD EAX,0x34f
004E099C  50                        PUSH EAX
004E099D  6A 03                     PUSH 0x3
004E099F  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
004E09A5  EB 7F                     JMP 0x004e0a26
switchD_004e092c::caseD_60:
004E09A7  8B 06                     MOV EAX,dword ptr [ESI]
004E09A9  68 B9 03 00 00            PUSH 0x3b9
004E09AE  57                        PUSH EDI
004E09AF  8B CE                     MOV ECX,ESI
004E09B1  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004E09B7  EB 6D                     JMP 0x004e0a26
switchD_004e08b2::caseD_3b:
004E09B9  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004E09BF  8B 3E                     MOV EDI,dword ptr [ESI]
004E09C1  51                        PUSH ECX
004E09C2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E09C8  E8 EA 3F F2 FF            CALL 0x004049b7
004E09CD  2C 02                     SUB AL,0x2
004E09CF  8B CE                     MOV ECX,ESI
004E09D1  F6 D8                     NEG AL
004E09D3  1B C0                     SBB EAX,EAX
004E09D5  24 3A                     AND AL,0x3a
004E09D7  05 F6 02 00 00            ADD EAX,0x2f6
004E09DC  50                        PUSH EAX
004E09DD  6A 03                     PUSH 0x3
004E09DF  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
004E09E5  EB 3F                     JMP 0x004e0a26
switchD_004e092c::caseD_52:
004E09E7  8A 96 3D 02 00 00         MOV DL,byte ptr [ESI + 0x23d]
004E09ED  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E09F3  8B 3E                     MOV EDI,dword ptr [ESI]
004E09F5  52                        PUSH EDX
004E09F6  E8 BC 3F F2 FF            CALL 0x004049b7
004E09FB  2C 02                     SUB AL,0x2
004E09FD  8B CE                     MOV ECX,ESI
004E09FF  F6 D8                     NEG AL
004E0A01  1B C0                     SBB EAX,EAX
004E0A03  24 3B                     AND AL,0x3b
004E0A05  05 5C 03 00 00            ADD EAX,0x35c
004E0A0A  50                        PUSH EAX
004E0A0B  6A 03                     PUSH 0x3
004E0A0D  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
004E0A13  EB 11                     JMP 0x004e0a26
LAB_004e0a15:
004E0A15  3B C7                     CMP EAX,EDI
004E0A17  75 0D                     JNZ 0x004e0a26
004E0A19  89 9E E8 04 00 00         MOV dword ptr [ESI + 0x4e8],EBX
LAB_004e0a1f:
004E0A1F  8B CE                     MOV ECX,ESI
004E0A21  E8 B1 24 F2 FF            CALL 0x00402ed7
switchD_004e08b2::caseD_3a:
004E0A26  39 9E E4 04 00 00         CMP dword ptr [ESI + 0x4e4],EBX
004E0A2C  75 54                     JNZ 0x004e0a82
004E0A2E  83 BE AC 05 00 00 4F      CMP dword ptr [ESI + 0x5ac],0x4f
004E0A35  75 18                     JNZ 0x004e0a4f
004E0A37  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004E0A3A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0A40  50                        PUSH EAX
004E0A41  E8 71 3F F2 FF            CALL 0x004049b7
004E0A46  3C 02                     CMP AL,0x2
004E0A48  B8 0E 00 00 00            MOV EAX,0xe
004E0A4D  74 05                     JZ 0x004e0a54
LAB_004e0a4f:
004E0A4F  B8 0C 00 00 00            MOV EAX,0xc
LAB_004e0a54:
004E0A54  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004E0A5A  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004E0A5D  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
004E0A60  8B 4C 8A 18               MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
004E0A64  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
004E0A67  3B CA                     CMP ECX,EDX
004E0A69  75 17                     JNZ 0x004e0a82
004E0A6B  39 9E E8 04 00 00         CMP dword ptr [ESI + 0x4e8],EBX
004E0A71  75 0F                     JNZ 0x004e0a82
004E0A73  6A 01                     PUSH 0x1
004E0A75  8B CE                     MOV ECX,ESI
004E0A77  89 9E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EBX
004E0A7D  E8 75 22 F2 FF            CALL 0x00402cf7
LAB_004e0a82:
004E0A82  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E0A88  BF 05 00 00 00            MOV EDI,0x5
004E0A8D  83 F8 52                  CMP EAX,0x52
004E0A90  74 09                     JZ 0x004e0a9b
004E0A92  83 F8 5F                  CMP EAX,0x5f
004E0A95  0F 85 83 04 00 00         JNZ 0x004e0f1e
LAB_004e0a9b:
004E0A9B  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004E0AA1  83 C0 FE                  ADD EAX,-0x2
004E0AA4  83 F8 04                  CMP EAX,0x4
004E0AA7  0F 87 71 04 00 00         JA 0x004e0f1e
switchD_004e0aad::switchD:
004E0AAD  FF 24 85 C8 10 4E 00      JMP dword ptr [EAX*0x4 + 0x4e10c8]
switchD_004e0aad::caseD_2:
004E0AB4  8B 8E B4 05 00 00         MOV ECX,dword ptr [ESI + 0x5b4]
004E0ABA  8D 41 02                  LEA EAX,[ECX + 0x2]
004E0ABD  3B C8                     CMP ECX,EAX
004E0ABF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004E0AC2  0F 8D 56 04 00 00         JGE 0x004e0f1e
004E0AC8  8B BE B0 05 00 00         MOV EDI,dword ptr [ESI + 0x5b0]
004E0ACE  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
004E0AD5  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004E0AD8  8D 57 02                  LEA EDX,[EDI + 0x2]
LAB_004e0adb:
004E0ADB  8B C7                     MOV EAX,EDI
004E0ADD  3B C2                     CMP EAX,EDX
004E0ADF  7D 72                     JGE 0x004e0b53
004E0AE1  66 8B 96 B8 05 00 00      MOV DX,word ptr [ESI + 0x5b8]
004E0AE8  66 42                     INC DX
004E0AEA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004E0AED  EB 03                     JMP 0x004e0af2
LAB_004e0aef:
004E0AEF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_004e0af2:
004E0AF2  66 85 C0                  TEST AX,AX
004E0AF5  7C 6D                     JL 0x004e0b64
004E0AF7  66 3B C3                  CMP AX,BX
004E0AFA  7D 68                     JGE 0x004e0b64
004E0AFC  66 85 C9                  TEST CX,CX
004E0AFF  7C 63                     JL 0x004e0b64
004E0B01  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004E0B08  7D 5A                     JGE 0x004e0b64
004E0B0A  66 85 D2                  TEST DX,DX
004E0B0D  7C 55                     JL 0x004e0b64
004E0B0F  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004E0B16  7D 4C                     JGE 0x004e0b64
004E0B18  0F BF F9                  MOVSX EDI,CX
004E0B1B  0F BF DB                  MOVSX EBX,BX
004E0B1E  0F AF FB                  IMUL EDI,EBX
004E0B21  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004E0B28  0F BF D2                  MOVSX EDX,DX
004E0B2B  0F AF DA                  IMUL EBX,EDX
004E0B2E  0F BF D0                  MOVSX EDX,AX
004E0B31  03 FB                     ADD EDI,EBX
004E0B33  03 FA                     ADD EDI,EDX
004E0B35  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004E0B3B  83 3C FA 00               CMP dword ptr [EDX + EDI*0x8],0x0
004E0B3F  74 23                     JZ 0x004e0b64
004E0B41  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004E0B44  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
004E0B4B  40                        INC EAX
004E0B4C  8D 57 02                  LEA EDX,[EDI + 0x2]
004E0B4F  3B C2                     CMP EAX,EDX
004E0B51  7C 9C                     JL 0x004e0aef
LAB_004e0b53:
004E0B53  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004E0B56  41                        INC ECX
004E0B57  3B C8                     CMP ECX,EAX
004E0B59  0F 8D BF 03 00 00         JGE 0x004e0f1e
004E0B5F  E9 77 FF FF FF            JMP 0x004e0adb
LAB_004e0b64:
004E0B64  89 86 F0 04 00 00         MOV dword ptr [ESI + 0x4f0],EAX
004E0B6A  8B 86 B8 05 00 00         MOV EAX,dword ptr [ESI + 0x5b8]
004E0B70  40                        INC EAX
004E0B71  C7 86 EC 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4ec],0x1
004E0B7B  89 8E F4 04 00 00         MOV dword ptr [ESI + 0x4f4],ECX
004E0B81  89 86 F8 04 00 00         MOV dword ptr [ESI + 0x4f8],EAX
004E0B87  A1 CC 0B 80 00            MOV EAX,[0x00800bcc]
004E0B8C  85 C0                     TEST EAX,EAX
004E0B8E  75 07                     JNZ 0x004e0b97
004E0B90  8B CE                     MOV ECX,ESI
004E0B92  E8 1E 27 F2 FF            CALL 0x004032b5
LAB_004e0b97:
004E0B97  8B 8E F8 04 00 00         MOV ECX,dword ptr [ESI + 0x4f8]
004E0B9D  8B 96 F4 04 00 00         MOV EDX,dword ptr [ESI + 0x4f4]
004E0BA3  8B 86 F0 04 00 00         MOV EAX,dword ptr [ESI + 0x4f0]
004E0BA9  51                        PUSH ECX
004E0BAA  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004E0BB0  52                        PUSH EDX
004E0BB1  50                        PUSH EAX
004E0BB2  E8 CB 09 F2 FF            CALL 0x00401582
004E0BB7  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004E0BBD  C7 86 D0 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d0],0x3
004E0BC7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E0BCA  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004E0BCD  8D 94 C8 DC 00 00 00      LEA EDX,[EAX + ECX*0x8 + 0xdc]
004E0BD4  8B 86 B4 05 00 00         MOV EAX,dword ptr [ESI + 0x5b4]
004E0BDA  89 96 FC 04 00 00         MOV dword ptr [ESI + 0x4fc],EDX
004E0BE0  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E0BE3  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004E0BE6  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
004E0BEA  8B 86 B8 05 00 00         MOV EAX,dword ptr [ESI + 0x5b8]
004E0BF0  89 96 00 05 00 00         MOV dword ptr [ESI + 0x500],EDX
004E0BF6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E0BF9  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004E0BFC  8D 54 C8 D8               LEA EDX,[EAX + ECX*0x8 + -0x28]
004E0C00  8B CE                     MOV ECX,ESI
004E0C02  89 96 04 05 00 00         MOV dword ptr [ESI + 0x504],EDX
004E0C08  E8 02 13 F2 FF            CALL 0x00401f0f
004E0C0D  6A 00                     PUSH 0x0
004E0C0F  8B CE                     MOV ECX,ESI
004E0C11  E8 E1 20 F2 FF            CALL 0x00402cf7
004E0C16  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E0C1C  83 F8 52                  CMP EAX,0x52
004E0C1F  75 31                     JNZ 0x004e0c52
004E0C21  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004E0C27  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0C2D  8B 3E                     MOV EDI,dword ptr [ESI]
004E0C2F  50                        PUSH EAX
004E0C30  E8 82 3D F2 FF            CALL 0x004049b7
004E0C35  2C 02                     SUB AL,0x2
004E0C37  8B CE                     MOV ECX,ESI
004E0C39  F6 D8                     NEG AL
004E0C3B  1B C0                     SBB EAX,EAX
004E0C3D  24 3B                     AND AL,0x3b
004E0C3F  05 5E 03 00 00            ADD EAX,0x35e
004E0C44  50                        PUSH EAX
004E0C45  6A 03                     PUSH 0x3
004E0C47  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
004E0C4D  E9 CC 02 00 00            JMP 0x004e0f1e
LAB_004e0c52:
004E0C52  83 F8 5F                  CMP EAX,0x5f
004E0C55  0F 85 C3 02 00 00         JNZ 0x004e0f1e
004E0C5B  8B 16                     MOV EDX,dword ptr [ESI]
004E0C5D  68 B1 03 00 00            PUSH 0x3b1
004E0C62  E9 AD 02 00 00            JMP 0x004e0f14
switchD_004e0aad::caseD_3:
004E0C67  6A 0E                     PUSH 0xe
004E0C69  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004E0C6F  E8 3B 36 F2 FF            CALL 0x004042af
004E0C74  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004E0C7A  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004E0C80  0F 8C 98 02 00 00         JL 0x004e0f1e
004E0C86  39 9E DC 04 00 00         CMP dword ptr [ESI + 0x4dc],EBX
004E0C8C  0F 84 8C 02 00 00         JZ 0x004e0f1e
004E0C92  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
004E0C95  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E0C98  33 C0                     XOR EAX,EAX
004E0C9A  89 9E 08 05 00 00         MOV dword ptr [ESI + 0x508],EBX
004E0CA0  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
004E0CA6  3B C8                     CMP ECX,EAX
004E0CA8  75 17                     JNZ 0x004e0cc1
004E0CAA  8B 8E FD 01 00 00         MOV ECX,dword ptr [ESI + 0x1fd]
004E0CB0  8B 96 F9 01 00 00         MOV EDX,dword ptr [ESI + 0x1f9]
004E0CB6  51                        PUSH ECX
004E0CB7  52                        PUSH EDX
004E0CB8  53                        PUSH EBX
004E0CB9  E8 9D 20 F2 FF            CALL 0x00402d5b
004E0CBE  83 C4 0C                  ADD ESP,0xc
LAB_004e0cc1:
004E0CC1  C7 86 D0 04 00 00 04 00 00 00  MOV dword ptr [ESI + 0x4d0],0x4
004E0CCB  89 9E 10 05 00 00         MOV dword ptr [ESI + 0x510],EBX
004E0CD1  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E0CD6  53                        PUSH EBX
004E0CD7  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004E0CDD  89 8E 14 05 00 00         MOV dword ptr [ESI + 0x514],ECX
004E0CE3  8B CE                     MOV ECX,ESI
004E0CE5  E8 0D 20 F2 FF            CALL 0x00402cf7
004E0CEA  E9 2F 02 00 00            JMP 0x004e0f1e
switchD_004e0aad::caseD_4:
004E0CEF  83 BE 10 05 00 00 1E      CMP dword ptr [ESI + 0x510],0x1e
004E0CF6  0F 8C 22 02 00 00         JL 0x004e0f1e
004E0CFC  8B 96 F8 04 00 00         MOV EDX,dword ptr [ESI + 0x4f8]
004E0D02  8B 86 F4 04 00 00         MOV EAX,dword ptr [ESI + 0x4f4]
004E0D08  8B 8E F0 04 00 00         MOV ECX,dword ptr [ESI + 0x4f0]
004E0D0E  52                        PUSH EDX
004E0D0F  50                        PUSH EAX
004E0D10  51                        PUSH ECX
004E0D11  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004E0D17  E8 B8 10 F2 FF            CALL 0x00401dd4
004E0D1C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004E0D1F  8B 86 F8 04 00 00         MOV EAX,dword ptr [ESI + 0x4f8]
004E0D25  8B 8E F4 04 00 00         MOV ECX,dword ptr [ESI + 0x4f4]
004E0D2B  6A 5A                     PUSH 0x5a
004E0D2D  52                        PUSH EDX
004E0D2E  8B 96 F0 04 00 00         MOV EDX,dword ptr [ESI + 0x4f0]
004E0D34  53                        PUSH EBX
004E0D35  50                        PUSH EAX
004E0D36  8B 86 04 05 00 00         MOV EAX,dword ptr [ESI + 0x504]
004E0D3C  51                        PUSH ECX
004E0D3D  8B 8E 00 05 00 00         MOV ECX,dword ptr [ESI + 0x500]
004E0D43  52                        PUSH EDX
004E0D44  8B 96 FC 04 00 00         MOV EDX,dword ptr [ESI + 0x4fc]
004E0D4A  50                        PUSH EAX
004E0D4B  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E0D51  51                        PUSH ECX
004E0D52  8B 8E DC 04 00 00         MOV ECX,dword ptr [ESI + 0x4dc]
004E0D58  52                        PUSH EDX
004E0D59  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004E0D5C  50                        PUSH EAX
004E0D5D  89 9E EC 04 00 00         MOV dword ptr [ESI + 0x4ec],EBX
004E0D63  51                        PUSH ECX
004E0D64  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0D6A  52                        PUSH EDX
004E0D6B  E8 47 3C F2 FF            CALL 0x004049b7
004E0D70  25 FF 00 00 00            AND EAX,0xff
004E0D75  50                        PUSH EAX
004E0D76  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E0D79  50                        PUSH EAX
004E0D7A  E8 10 4B F2 FF            CALL 0x0040588f
004E0D7F  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004E0D82  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E0D85  33 D2                     XOR EDX,EDX
004E0D87  83 C4 34                  ADD ESP,0x34
004E0D8A  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004E0D90  3B C2                     CMP EAX,EDX
004E0D92  75 58                     JNZ 0x004e0dec
004E0D94  8B 86 FD 01 00 00         MOV EAX,dword ptr [ESI + 0x1fd]
004E0D9A  8B 8E F9 01 00 00         MOV ECX,dword ptr [ESI + 0x1f9]
004E0DA0  50                        PUSH EAX
004E0DA1  51                        PUSH ECX
004E0DA2  53                        PUSH EBX
004E0DA3  E8 B3 1F F2 FF            CALL 0x00402d5b
004E0DA8  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004E0DAB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0DB1  83 C4 0C                  ADD ESP,0xc
004E0DB4  52                        PUSH EDX
004E0DB5  E8 FD 3B F2 FF            CALL 0x004049b7
004E0DBA  25 FF 00 00 00            AND EAX,0xff
004E0DBF  48                        DEC EAX
004E0DC0  74 1C                     JZ 0x004e0dde
004E0DC2  48                        DEC EAX
004E0DC3  74 09                     JZ 0x004e0dce
004E0DC5  48                        DEC EAX
004E0DC6  75 24                     JNZ 0x004e0dec
004E0DC8  8B 06                     MOV EAX,dword ptr [ESI]
004E0DCA  6A 6D                     PUSH 0x6d
004E0DCC  EB 14                     JMP 0x004e0de2
LAB_004e0dce:
004E0DCE  8B 16                     MOV EDX,dword ptr [ESI]
004E0DD0  6A 6C                     PUSH 0x6c
004E0DD2  6A 06                     PUSH 0x6
004E0DD4  8B CE                     MOV ECX,ESI
004E0DD6  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004E0DDC  EB 0E                     JMP 0x004e0dec
LAB_004e0dde:
004E0DDE  8B 06                     MOV EAX,dword ptr [ESI]
004E0DE0  6A 6B                     PUSH 0x6b
LAB_004e0de2:
004E0DE2  6A 06                     PUSH 0x6
004E0DE4  8B CE                     MOV ECX,ESI
004E0DE6  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
LAB_004e0dec:
004E0DEC  8B CE                     MOV ECX,ESI
004E0DEE  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004E0DF4  E8 1D 28 F2 FF            CALL 0x00403616
004E0DF9  53                        PUSH EBX
004E0DFA  8B CE                     MOV ECX,ESI
004E0DFC  E8 F6 1E F2 FF            CALL 0x00402cf7
004E0E01  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E0E07  83 F8 52                  CMP EAX,0x52
004E0E0A  75 31                     JNZ 0x004e0e3d
004E0E0C  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004E0E12  8B 3E                     MOV EDI,dword ptr [ESI]
004E0E14  51                        PUSH ECX
LAB_004e0e15:
004E0E15  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0E1B  E8 97 3B F2 FF            CALL 0x004049b7
004E0E20  2C 02                     SUB AL,0x2
004E0E22  8B CE                     MOV ECX,ESI
004E0E24  F6 D8                     NEG AL
004E0E26  1B C0                     SBB EAX,EAX
004E0E28  24 3B                     AND AL,0x3b
004E0E2A  05 5F 03 00 00            ADD EAX,0x35f
004E0E2F  50                        PUSH EAX
004E0E30  6A 03                     PUSH 0x3
004E0E32  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
004E0E38  E9 E1 00 00 00            JMP 0x004e0f1e
LAB_004e0e3d:
004E0E3D  83 F8 5F                  CMP EAX,0x5f
004E0E40  0F 85 D8 00 00 00         JNZ 0x004e0f1e
004E0E46  E9 C2 00 00 00            JMP 0x004e0f0d
switchD_004e0aad::caseD_5:
004E0E4B  6A 0E                     PUSH 0xe
004E0E4D  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004E0E53  E8 57 34 F2 FF            CALL 0x004042af
004E0E58  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004E0E5E  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004E0E64  0F 85 B4 00 00 00         JNZ 0x004e0f1e
004E0E6A  8B CE                     MOV ECX,ESI
004E0E6C  89 9E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EBX
004E0E72  89 9E DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EBX
004E0E78  89 9E 08 05 00 00         MOV dword ptr [ESI + 0x508],EBX
004E0E7E  E8 93 27 F2 FF            CALL 0x00403616
004E0E83  53                        PUSH EBX
004E0E84  8B CE                     MOV ECX,ESI
004E0E86  E8 6C 1E F2 FF            CALL 0x00402cf7
004E0E8B  E9 8E 00 00 00            JMP 0x004e0f1e
switchD_004e0aad::caseD_6:
004E0E90  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004E0E96  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E0E99  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004E0E9C  8B 8E FC 04 00 00         MOV ECX,dword ptr [ESI + 0x4fc]
004E0EA2  8D 84 D0 DC 00 00 00      LEA EAX,[EAX + EDX*0x8 + 0xdc]
004E0EA9  3B C8                     CMP ECX,EAX
004E0EAB  75 71                     JNZ 0x004e0f1e
004E0EAD  8B 86 B4 05 00 00         MOV EAX,dword ptr [ESI + 0x5b4]
004E0EB3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E0EB6  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004E0EB9  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
004E0EBD  8B 86 00 05 00 00         MOV EAX,dword ptr [ESI + 0x500]
004E0EC3  3B C2                     CMP EAX,EDX
004E0EC5  75 57                     JNZ 0x004e0f1e
004E0EC7  8B 86 B8 05 00 00         MOV EAX,dword ptr [ESI + 0x5b8]
004E0ECD  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E0ED0  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004E0ED3  8D 54 C8 D8               LEA EDX,[EAX + ECX*0x8 + -0x28]
004E0ED7  8B 86 04 05 00 00         MOV EAX,dword ptr [ESI + 0x504]
004E0EDD  3B C2                     CMP EAX,EDX
004E0EDF  75 3D                     JNZ 0x004e0f1e
004E0EE1  53                        PUSH EBX
004E0EE2  8B CE                     MOV ECX,ESI
004E0EE4  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004E0EEA  E8 08 1E F2 FF            CALL 0x00402cf7
004E0EEF  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E0EF5  83 F8 52                  CMP EAX,0x52
004E0EF8  75 0E                     JNZ 0x004e0f08
004E0EFA  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004E0F00  8B 3E                     MOV EDI,dword ptr [ESI]
004E0F02  50                        PUSH EAX
004E0F03  E9 0D FF FF FF            JMP 0x004e0e15
LAB_004e0f08:
004E0F08  83 F8 5F                  CMP EAX,0x5f
004E0F0B  75 11                     JNZ 0x004e0f1e
LAB_004e0f0d:
004E0F0D  8B 16                     MOV EDX,dword ptr [ESI]
004E0F0F  68 B2 03 00 00            PUSH 0x3b2
LAB_004e0f14:
004E0F14  6A 03                     PUSH 0x3
004E0F16  8B CE                     MOV ECX,ESI
004E0F18  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
switchD_004e0aad::default:
004E0F1E  83 BE AC 05 00 00 61      CMP dword ptr [ESI + 0x5ac],0x61
004E0F25  0F 85 10 01 00 00         JNZ 0x004e103b
004E0F2B  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E0F31  85 C0                     TEST EAX,EAX
004E0F33  0F 84 02 01 00 00         JZ 0x004e103b
004E0F39  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E0F3C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0F42  50                        PUSH EAX
004E0F43  E8 38 4E F2 FF            CALL 0x00405d80
004E0F48  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E0F4B  8B F8                     MOV EDI,EAX
004E0F4D  51                        PUSH ECX
004E0F4E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0F54  E8 4E 27 F2 FF            CALL 0x004036a7
004E0F59  3B C7                     CMP EAX,EDI
004E0F5B  0F 8D DA 00 00 00         JGE 0x004e103b
004E0F61  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004E0F67  8B 8E 28 05 00 00         MOV ECX,dword ptr [ESI + 0x528]
004E0F6D  8B BE 24 05 00 00         MOV EDI,dword ptr [ESI + 0x524]
004E0F73  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004E0F79  03 CF                     ADD ECX,EDI
004E0F7B  3B C1                     CMP EAX,ECX
004E0F7D  0F 82 B8 00 00 00         JC 0x004e103b
004E0F83  8B 96 18 05 00 00         MOV EDX,dword ptr [ESI + 0x518]
004E0F89  89 86 24 05 00 00         MOV dword ptr [ESI + 0x524],EAX
004E0F8F  3B 15 C4 E8 7B 00         CMP EDX,dword ptr [0x007be8c4]
004E0F95  7C 07                     JL 0x004e0f9e
004E0F97  8B CE                     MOV ECX,ESI
004E0F99  E8 F2 06 F2 FF            CALL 0x00401690
LAB_004e0f9e:
004E0F9E  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E0FA4  83 C0 FB                  ADD EAX,-0x5
004E0FA7  89 86 E0 04 00 00         MOV dword ptr [ESI + 0x4e0],EAX
004E0FAD  79 0A                     JNS 0x004e0fb9
004E0FAF  C7 86 E0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4e0],0x0
LAB_004e0fb9:
004E0FB9  8B BE 18 05 00 00         MOV EDI,dword ptr [ESI + 0x518]
004E0FBF  83 C7 05                  ADD EDI,0x5
004E0FC2  89 BE 18 05 00 00         MOV dword ptr [ESI + 0x518],EDI
004E0FC8  8B 0D C4 E8 7B 00         MOV ECX,dword ptr [0x007be8c4]
004E0FCE  8B C7                     MOV EAX,EDI
004E0FD0  3B C1                     CMP EAX,ECX
004E0FD2  7E 06                     JLE 0x004e0fda
004E0FD4  89 8E 18 05 00 00         MOV dword ptr [ESI + 0x518],ECX
LAB_004e0fda:
004E0FDA  8B 86 B8 05 00 00         MOV EAX,dword ptr [ESI + 0x5b8]
004E0FE0  8B 8E B4 05 00 00         MOV ECX,dword ptr [ESI + 0x5b4]
004E0FE6  8B 96 B0 05 00 00         MOV EDX,dword ptr [ESI + 0x5b0]
004E0FEC  50                        PUSH EAX
004E0FED  51                        PUSH ECX
004E0FEE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0FF4  52                        PUSH EDX
004E0FF5  E8 4E 4E F2 FF            CALL 0x00405e48
004E0FFA  85 C0                     TEST EAX,EAX
004E0FFC  74 10                     JZ 0x004e100e
004E0FFE  8B 8E E0 04 00 00         MOV ECX,dword ptr [ESI + 0x4e0]
004E1004  6A 01                     PUSH 0x1
004E1006  51                        PUSH ECX
004E1007  8B C8                     MOV ECX,EAX
004E1009  E8 65 19 F2 FF            CALL 0x00402973
LAB_004e100e:
004E100E  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E1014  85 C0                     TEST EAX,EAX
004E1016  75 23                     JNZ 0x004e103b
004E1018  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
004E101B  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E101E  33 C0                     XOR EAX,EAX
004E1020  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
004E1026  3B C8                     CMP ECX,EAX
004E1028  75 11                     JNZ 0x004e103b
004E102A  8B 16                     MOV EDX,dword ptr [ESI]
004E102C  68 BD 03 00 00            PUSH 0x3bd
004E1031  6A 04                     PUSH 0x4
004E1033  8B CE                     MOV ECX,ESI
004E1035  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004e103b:
004E103B  5F                        POP EDI
004E103C  5E                        POP ESI
004E103D  33 C0                     XOR EAX,EAX
004E103F  5B                        POP EBX
004E1040  8B E5                     MOV ESP,EBP
004E1042  5D                        POP EBP
004E1043  C3                        RET
