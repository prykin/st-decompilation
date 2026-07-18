FUN_006a0ef0:
006A0EF0  55                        PUSH EBP
006A0EF1  8B EC                     MOV EBP,ESP
006A0EF3  83 EC 28                  SUB ESP,0x28
006A0EF6  8D 45 D8                  LEA EAX,[EBP + -0x28]
006A0EF9  53                        PUSH EBX
006A0EFA  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006A0EFD  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006A0F00  33 D2                     XOR EDX,EDX
006A0F02  B8 2C F8 7D 00            MOV EAX,0x7df82c
006A0F07  56                        PUSH ESI
006A0F08  57                        PUSH EDI
006A0F09  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006A0F0C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A0F0F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006a0f12:
006A0F12  8B 70 FC                  MOV ESI,dword ptr [EAX + -0x4]
006A0F15  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A0F18  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A0F1B  03 F7                     ADD ESI,EDI
006A0F1D  8B 38                     MOV EDI,dword ptr [EAX]
006A0F1F  03 F9                     ADD EDI,ECX
006A0F21  85 F6                     TEST ESI,ESI
006A0F23  0F 8C CE 00 00 00         JL 0x006a0ff7
006A0F29  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A0F2C  3B 31                     CMP ESI,dword ptr [ECX]
006A0F2E  0F 8D C3 00 00 00         JGE 0x006a0ff7
006A0F34  85 FF                     TEST EDI,EDI
006A0F36  0F 8C BB 00 00 00         JL 0x006a0ff7
006A0F3C  3B 79 04                  CMP EDI,dword ptr [ECX + 0x4]
006A0F3F  0F 8D B2 00 00 00         JGE 0x006a0ff7
006A0F45  85 DB                     TEST EBX,EBX
006A0F47  0F 8C AA 00 00 00         JL 0x006a0ff7
006A0F4D  83 FB 06                  CMP EBX,0x6
006A0F50  0F 8D A1 00 00 00         JGE 0x006a0ff7
006A0F56  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A0F59  52                        PUSH EDX
006A0F5A  53                        PUSH EBX
006A0F5B  57                        PUSH EDI
006A0F5C  56                        PUSH ESI
006A0F5D  51                        PUSH ECX
006A0F5E  E8 4D 0A D6 FF            CALL 0x004019b0
006A0F63  83 C4 14                  ADD ESP,0x14
006A0F66  85 C0                     TEST EAX,EAX
006A0F68  74 67                     JZ 0x006a0fd1
006A0F6A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A0F6D  8D 45 E8                  LEA EAX,[EBP + -0x18]
006A0F70  50                        PUSH EAX
006A0F71  53                        PUSH EBX
006A0F72  57                        PUSH EDI
006A0F73  56                        PUSH ESI
006A0F74  51                        PUSH ECX
006A0F75  E8 D2 31 D6 FF            CALL 0x0040414c
006A0F7A  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A0F7D  8D 55 E8                  LEA EDX,[EBP + -0x18]
006A0F80  0F BF C0                  MOVSX EAX,AX
006A0F83  56                        PUSH ESI
006A0F84  50                        PUSH EAX
006A0F85  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A0F88  52                        PUSH EDX
006A0F89  53                        PUSH EBX
006A0F8A  50                        PUSH EAX
006A0F8B  E8 CE 3D D6 FF            CALL 0x00404d5e
006A0F90  83 C4 28                  ADD ESP,0x28
006A0F93  85 C0                     TEST EAX,EAX
006A0F95  74 3A                     JZ 0x006a0fd1
006A0F97  81 FE FF 00 00 00         CMP ESI,0xff
006A0F9D  74 14                     JZ 0x006a0fb3
006A0F9F  8B 45 EA                  MOV EAX,dword ptr [EBP + -0x16]
006A0FA2  83 FE 01                  CMP ESI,0x1
006A0FA5  74 03                     JZ 0x006a0faa
006A0FA7  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
LAB_006a0faa:
006A0FAA  83 E0 0F                  AND EAX,0xf
006A0FAD  85 C0                     TEST EAX,EAX
006A0FAF  7C 64                     JL 0x006a1015
006A0FB1  EB 08                     JMP 0x006a0fbb
LAB_006a0fb3:
006A0FB3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A0FB6  83 E0 0F                  AND EAX,0xf
006A0FB9  7C 5A                     JL 0x006a1015
LAB_006a0fbb:
006A0FBB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A0FBE  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
006A0FC1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A0FC4  66 8B 04 55 98 F8 7D 00   MOV AX,word ptr [EDX*0x2 + 0x7df898]
006A0FCC  0B C8                     OR ECX,EAX
006A0FCE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006a0fd1:
006A0FD1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_006a0fd4:
006A0FD4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A0FD7  83 C0 08                  ADD EAX,0x8
006A0FDA  42                        INC EDX
006A0FDB  3D 6C F8 7D 00            CMP EAX,0x7df86c
006A0FE0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A0FE3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A0FE6  0F 8C 26 FF FF FF         JL 0x006a0f12
006A0FEC  66 8B 45 F4               MOV AX,word ptr [EBP + -0xc]
006A0FF0  5F                        POP EDI
006A0FF1  5E                        POP ESI
006A0FF2  5B                        POP EBX
006A0FF3  8B E5                     MOV ESP,EBP
006A0FF5  5D                        POP EBP
006A0FF6  C3                        RET
LAB_006a0ff7:
006A0FF7  8B CA                     MOV ECX,EDX
006A0FF9  81 E1 01 00 00 80         AND ECX,0x80000001
006A0FFF  79 05                     JNS 0x006a1006
006A1001  49                        DEC ECX
006A1002  83 C9 FE                  OR ECX,0xfffffffe
006A1005  41                        INC ECX
LAB_006a1006:
006A1006  74 CC                     JZ 0x006a0fd4
006A1008  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006A100B  89 11                     MOV dword ptr [ECX],EDX
006A100D  83 C1 04                  ADD ECX,0x4
006A1010  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006A1013  EB BF                     JMP 0x006a0fd4
LAB_006a1015:
006A1015  5F                        POP EDI
006A1016  5E                        POP ESI
006A1017  66 0D FF FF               OR AX,0xffff
006A101B  5B                        POP EBX
006A101C  8B E5                     MOV ESP,EBP
006A101E  5D                        POP EBP
006A101F  C3                        RET
