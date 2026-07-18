FUN_006978c0:
006978C0  55                        PUSH EBP
006978C1  8B EC                     MOV EBP,ESP
006978C3  83 EC 20                  SUB ESP,0x20
006978C6  57                        PUSH EDI
006978C7  8B F9                     MOV EDI,ECX
006978C9  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006978CC  8B 87 53 58 00 00         MOV EAX,dword ptr [EDI + 0x5853]
006978D2  85 C0                     TEST EAX,EAX
006978D4  0F 84 97 01 00 00         JZ 0x00697a71
006978DA  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006978DD  33 C9                     XOR ECX,ECX
006978DF  85 D2                     TEST EDX,EDX
006978E1  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006978E4  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006978E7  0F 8E 84 01 00 00         JLE 0x00697a71
006978ED  53                        PUSH EBX
006978EE  56                        PUSH ESI
LAB_006978ef:
006978EF  8B 87 53 58 00 00         MOV EAX,dword ptr [EDI + 0x5853]
006978F5  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
006978F8  73 10                     JNC 0x0069790a
006978FA  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006978FD  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
00697900  0F AF F1                  IMUL ESI,ECX
00697903  03 F3                     ADD ESI,EBX
00697905  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00697908  EB 0A                     JMP 0x00697914
LAB_0069790a:
0069790A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00697911  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00697914:
00697914  8B 06                     MOV EAX,dword ptr [ESI]
00697916  85 C0                     TEST EAX,EAX
00697918  0F 8E 45 01 00 00         JLE 0x00697a63
0069791E  8B 9F 47 58 00 00         MOV EBX,dword ptr [EDI + 0x5847]
00697924  4B                        DEC EBX
00697925  3B C3                     CMP EAX,EBX
00697927  0F 8F 36 01 00 00         JG 0x00697a63
0069792D  83 7E 09 04               CMP dword ptr [ESI + 0x9],0x4
00697931  0F 85 2C 01 00 00         JNZ 0x00697a63
00697937  83 7E 11 0C               CMP dword ptr [ESI + 0x11],0xc
0069793B  0F 8C 22 01 00 00         JL 0x00697a63
00697941  8B 4E 15                  MOV ECX,dword ptr [ESI + 0x15]
00697944  40                        INC EAX
00697945  33 DB                     XOR EBX,EBX
00697947  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0069794A  85 C9                     TEST ECX,ECX
0069794C  74 2E                     JZ 0x0069797c
0069794E  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
00697951  33 D2                     XOR EDX,EDX
00697953  85 FF                     TEST EDI,EDI
00697955  7E 22                     JLE 0x00697979
00697957  3B D7                     CMP EDX,EDI
LAB_00697959:
00697959  73 0B                     JNC 0x00697966
0069795B  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0069795E  0F AF C2                  IMUL EAX,EDX
00697961  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00697964  EB 02                     JMP 0x00697968
LAB_00697966:
00697966  33 C0                     XOR EAX,EAX
LAB_00697968:
00697968  80 78 01 00               CMP byte ptr [EAX + 0x1],0x0
0069796C  75 06                     JNZ 0x00697974
0069796E  F6 00 01                  TEST byte ptr [EAX],0x1
00697971  74 01                     JZ 0x00697974
00697973  43                        INC EBX
LAB_00697974:
00697974  42                        INC EDX
00697975  3B D7                     CMP EDX,EDI
00697977  7C E0                     JL 0x00697959
LAB_00697979:
00697979  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0069797c:
0069797C  E8 3F 6D 09 00            CALL 0x0072e6c0
00697981  25 01 00 00 80            AND EAX,0x80000001
00697986  79 05                     JNS 0x0069798d
00697988  48                        DEC EAX
00697989  83 C8 FE                  OR EAX,0xfffffffe
0069798C  40                        INC EAX
LAB_0069798d:
0069798D  8B 0E                     MOV ECX,dword ptr [ESI]
0069798F  8B 97 47 58 00 00         MOV EDX,dword ptr [EDI + 0x5847]
00697995  40                        INC EAX
00697996  03 C8                     ADD ECX,EAX
00697998  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0069799B  3B CA                     CMP ECX,EDX
0069799D  7E 04                     JLE 0x006979a3
0069799F  48                        DEC EAX
006979A0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006979a3:
006979A3  85 C0                     TEST EAX,EAX
006979A5  0F 84 B2 00 00 00         JZ 0x00697a5d
006979AB  83 FB 01                  CMP EBX,0x1
006979AE  0F 8C A9 00 00 00         JL 0x00697a5d
006979B4  E8 07 6D 09 00            CALL 0x0072e6c0
006979B9  99                        CDQ
006979BA  8D 4B 01                  LEA ECX,[EBX + 0x1]
006979BD  F7 F9                     IDIV ECX
006979BF  85 D2                     TEST EDX,EDX
006979C1  0F 8C 96 00 00 00         JL 0x00697a5d
006979C7  33 D2                     XOR EDX,EDX
006979C9  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
006979CC  83 FB 03                  CMP EBX,0x3
006979CF  0F 9C C2                  SETL DL
006979D2  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006979D5  4A                        DEC EDX
006979D6  83 E2 02                  AND EDX,0x2
006979D9  42                        INC EDX
006979DA  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006979DD  33 D2                     XOR EDX,EDX
006979DF  85 C9                     TEST ECX,ECX
006979E1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006979E4  7E 77                     JLE 0x00697a5d
006979E6  3B D1                     CMP EDX,ECX
LAB_006979e8:
006979E8  73 0D                     JNC 0x006979f7
006979EA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006979ED  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
006979F0  0F AF CA                  IMUL ECX,EDX
006979F3  03 CB                     ADD ECX,EBX
006979F5  EB 02                     JMP 0x006979f9
LAB_006979f7:
006979F7  33 C9                     XOR ECX,ECX
LAB_006979f9:
006979F9  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
006979FC  84 C0                     TEST AL,AL
006979FE  75 4F                     JNZ 0x00697a4f
00697A00  8B 71 02                  MOV ESI,dword ptr [ECX + 0x2]
00697A03  8B BF 33 58 00 00         MOV EDI,dword ptr [EDI + 0x5833]
00697A09  8B C6                     MOV EAX,ESI
00697A0B  99                        CDQ
00697A0C  F7 FF                     IDIV EDI
00697A0E  8B D8                     MOV EBX,EAX
00697A10  8B C6                     MOV EAX,ESI
00697A12  99                        CDQ
00697A13  F7 FF                     IDIV EDI
00697A15  F6 01 02                  TEST byte ptr [ECX],0x2
00697A18  8B F2                     MOV ESI,EDX
00697A1A  74 2A                     JZ 0x00697a46
00697A1C  E8 9F 6C 09 00            CALL 0x0072e6c0
00697A21  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00697A24  99                        CDQ
00697A25  41                        INC ECX
00697A26  F7 F9                     IDIV ECX
00697A28  83 FA 01                  CMP EDX,0x1
00697A2B  75 19                     JNZ 0x00697a46
00697A2D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00697A30  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00697A33  52                        PUSH EDX
00697A34  52                        PUSH EDX
00697A35  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00697A38  68 FF 00 00 00            PUSH 0xff
00697A3D  52                        PUSH EDX
00697A3E  50                        PUSH EAX
00697A3F  53                        PUSH EBX
00697A40  56                        PUSH ESI
00697A41  E8 09 A6 D6 FF            CALL 0x0040204f
LAB_00697a46:
00697A46  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00697A49  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00697A4C  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_00697a4f:
00697A4F  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
00697A52  42                        INC EDX
00697A53  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00697A56  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00697A59  3B D1                     CMP EDX,ECX
00697A5B  7C 8B                     JL 0x006979e8
LAB_00697a5d:
00697A5D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00697A60  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
LAB_00697a63:
00697A63  41                        INC ECX
00697A64  3B CA                     CMP ECX,EDX
00697A66  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00697A69  0F 8C 80 FE FF FF         JL 0x006978ef
00697A6F  5E                        POP ESI
00697A70  5B                        POP EBX
LAB_00697a71:
00697A71  5F                        POP EDI
00697A72  8B E5                     MOV ESP,EBP
00697A74  5D                        POP EBP
00697A75  C3                        RET
