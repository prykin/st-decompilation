FUN_00696eb0:
00696EB0  55                        PUSH EBP
00696EB1  8B EC                     MOV EBP,ESP
00696EB3  83 EC 18                  SUB ESP,0x18
00696EB6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00696EB9  53                        PUSH EBX
00696EBA  56                        PUSH ESI
00696EBB  57                        PUSH EDI
00696EBC  85 D2                     TEST EDX,EDX
00696EBE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00696EC1  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00696EC8  0F 8C EE 01 00 00         JL 0x006970bc
00696ECE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00696ED1  8B 39                     MOV EDI,dword ptr [ECX]
00696ED3  3B D7                     CMP EDX,EDI
00696ED5  0F 8D E1 01 00 00         JGE 0x006970bc
00696EDB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00696EDE  85 C0                     TEST EAX,EAX
00696EE0  0F 8C D6 01 00 00         JL 0x006970bc
00696EE6  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
00696EE9  3B C6                     CMP EAX,ESI
00696EEB  0F 8D CB 01 00 00         JGE 0x006970bc
00696EF1  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00696EF4  85 DB                     TEST EBX,EBX
00696EF6  0F 8C C0 01 00 00         JL 0x006970bc
00696EFC  3B DF                     CMP EBX,EDI
00696EFE  0F 8D B8 01 00 00         JGE 0x006970bc
00696F04  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00696F07  85 FF                     TEST EDI,EDI
00696F09  0F 8C AD 01 00 00         JL 0x006970bc
00696F0F  3B FE                     CMP EDI,ESI
00696F11  0F 8D A5 01 00 00         JGE 0x006970bc
00696F17  8D 75 F0                  LEA ESI,[EBP + -0x10]
00696F1A  56                        PUSH ESI
00696F1B  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00696F1E  56                        PUSH ESI
00696F1F  50                        PUSH EAX
00696F20  52                        PUSH EDX
00696F21  51                        PUSH ECX
00696F22  E8 25 D2 D6 FF            CALL 0x0040414c
00696F27  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00696F2A  8D 4D E8                  LEA ECX,[EBP + -0x18]
00696F2D  51                        PUSH ECX
00696F2E  56                        PUSH ESI
00696F2F  0F BF C0                  MOVSX EAX,AX
00696F32  57                        PUSH EDI
00696F33  53                        PUSH EBX
00696F34  52                        PUSH EDX
00696F35  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00696F38  E8 0F D2 D6 FF            CALL 0x0040414c
00696F3D  8B 4D F2                  MOV ECX,dword ptr [EBP + -0xe]
00696F40  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00696F43  0F BF C0                  MOVSX EAX,AX
00696F46  83 C4 28                  ADD ESP,0x28
00696F49  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
00696F4C  66 85 C9                  TEST CX,CX
00696F4F  74 2A                     JZ 0x00696f7b
00696F51  8B 8A 33 58 00 00         MOV ECX,dword ptr [EDX + 0x5833]
00696F57  8B 82 4B 58 00 00         MOV EAX,dword ptr [EDX + 0x584b]
00696F5D  0F AF 4D 10               IMUL ECX,dword ptr [EBP + 0x10]
00696F61  03 C8                     ADD ECX,EAX
00696F63  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00696F66  03 C8                     ADD ECX,EAX
00696F68  B0 01                     MOV AL,0x1
00696F6A  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00696F6D  8B CE                     MOV ECX,ESI
00696F6F  D2 E0                     SHL AL,CL
00696F71  8A C8                     MOV CL,AL
00696F73  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00696F76  08 08                     OR byte ptr [EAX],CL
00696F78  8B 4D F2                  MOV ECX,dword ptr [EBP + -0xe]
LAB_00696f7b:
00696F7B  8B 45 EA                  MOV EAX,dword ptr [EBP + -0x16]
00696F7E  66 85 C0                  TEST AX,AX
00696F81  74 25                     JZ 0x00696fa8
00696F83  8B 82 33 58 00 00         MOV EAX,dword ptr [EDX + 0x5833]
00696F89  8B 8A 4B 58 00 00         MOV ECX,dword ptr [EDX + 0x584b]
00696F8F  0F AF C7                  IMUL EAX,EDI
00696F92  03 C1                     ADD EAX,ECX
00696F94  B2 01                     MOV DL,0x1
00696F96  8B CE                     MOV ECX,ESI
00696F98  03 C3                     ADD EAX,EBX
00696F9A  D2 E2                     SHL DL,CL
00696F9C  8A 08                     MOV CL,byte ptr [EAX]
00696F9E  0A CA                     OR CL,DL
00696FA0  88 08                     MOV byte ptr [EAX],CL
00696FA2  8B 45 EA                  MOV EAX,dword ptr [EBP + -0x16]
00696FA5  8B 4D F2                  MOV ECX,dword ptr [EBP + -0xe]
LAB_00696fa8:
00696FA8  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00696FAB  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00696FAE  33 D6                     XOR EDX,ESI
00696FB0  F6 C6 FF                  TEST DH,0xff
00696FB3  0F 85 F7 00 00 00         JNZ 0x006970b0
00696FB9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00696FBC  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00696FBF  3B F2                     CMP ESI,EDX
00696FC1  0F 85 E9 00 00 00         JNZ 0x006970b0
00696FC7  8B F1                     MOV ESI,ECX
00696FC9  8B D0                     MOV EDX,EAX
00696FCB  81 E6 00 20 00 00         AND ESI,0x2000
00696FD1  81 E2 FF FF 00 00         AND EDX,0xffff
00696FD7  F7 DE                     NEG ESI
00696FD9  1B F6                     SBB ESI,ESI
00696FDB  81 E1 FF FF 00 00         AND ECX,0xffff
00696FE1  81 E6 01 FF FF FF         AND ESI,0xffffff01
00696FE7  25 00 20 00 00            AND EAX,0x2000
00696FEC  81 C6 FF FF 00 00         ADD ESI,0xffff
00696FF2  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00696FF5  23 F1                     AND ESI,ECX
00696FF7  F7 D8                     NEG EAX
00696FF9  1B C0                     SBB EAX,EAX
00696FFB  24 01                     AND AL,0x1
00696FFD  05 FF FF 00 00            ADD EAX,0xffff
00697002  23 C2                     AND EAX,EDX
00697004  3B F0                     CMP ESI,EAX
00697006  0F 85 A4 00 00 00         JNZ 0x006970b0
0069700C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0069700F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00697012  8B F1                     MOV ESI,ECX
00697014  8B D0                     MOV EDX,EAX
00697016  81 E6 00 20 00 00         AND ESI,0x2000
0069701C  81 E2 FF FF 00 00         AND EDX,0xffff
00697022  F7 DE                     NEG ESI
00697024  1B F6                     SBB ESI,ESI
00697026  81 E1 FF FF 00 00         AND ECX,0xffff
0069702C  81 E6 01 FF FF FF         AND ESI,0xffffff01
00697032  25 00 20 00 00            AND EAX,0x2000
00697037  81 C6 FF FF 00 00         ADD ESI,0xffff
0069703D  23 F1                     AND ESI,ECX
0069703F  F7 D8                     NEG EAX
00697041  1B C0                     SBB EAX,EAX
00697043  24 01                     AND AL,0x1
00697045  05 FF FF 00 00            ADD EAX,0xffff
0069704A  23 C2                     AND EAX,EDX
0069704C  3B F0                     CMP ESI,EAX
0069704E  75 60                     JNZ 0x006970b0
00697050  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00697053  BE 01 00 00 00            MOV ESI,0x1
00697058  3B C6                     CMP EAX,ESI
0069705A  75 0A                     JNZ 0x00697066
0069705C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069705F  83 E0 0F                  AND EAX,0xf
00697062  8B D0                     MOV EDX,EAX
00697064  EB 03                     JMP 0x00697069
LAB_00697066:
00697066  83 E2 0F                  AND EDX,0xf
LAB_00697069:
00697069  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069706C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069706F  2B D9                     SUB EBX,ECX
00697071  2B F8                     SUB EDI,EAX
00697073  33 C9                     XOR ECX,ECX
00697075  B8 2C F8 7D 00            MOV EAX,0x7df82c
LAB_0069707a:
0069707A  39 58 FC                  CMP dword ptr [EAX + -0x4],EBX
0069707D  75 04                     JNZ 0x00697083
0069707F  39 38                     CMP dword ptr [EAX],EDI
00697081  74 17                     JZ 0x0069709a
LAB_00697083:
00697083  83 C0 08                  ADD EAX,0x8
00697086  41                        INC ECX
00697087  3D 6C F8 7D 00            CMP EAX,0x7df86c
0069708C  7C EC                     JL 0x0069707a
0069708E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00697091  5F                        POP EDI
00697092  5E                        POP ESI
00697093  5B                        POP EBX
00697094  8B E5                     MOV ESP,EBP
00697096  5D                        POP EBP
00697097  C2 1C 00                  RET 0x1c
LAB_0069709a:
0069709A  83 F9 FF                  CMP ECX,-0x1
0069709D  74 11                     JZ 0x006970b0
0069709F  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
006970A2  66 83 3C 45 98 F8 7D 00 00  CMP word ptr [EAX*0x2 + 0x7df898],0x0
006970AB  74 03                     JZ 0x006970b0
006970AD  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_006970b0:
006970B0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006970B3  5F                        POP EDI
006970B4  5E                        POP ESI
006970B5  5B                        POP EBX
006970B6  8B E5                     MOV ESP,EBP
006970B8  5D                        POP EBP
006970B9  C2 1C 00                  RET 0x1c
LAB_006970bc:
006970BC  5F                        POP EDI
006970BD  5E                        POP ESI
006970BE  33 C0                     XOR EAX,EAX
006970C0  5B                        POP EBX
006970C1  8B E5                     MOV ESP,EBP
006970C3  5D                        POP EBP
006970C4  C2 1C 00                  RET 0x1c
