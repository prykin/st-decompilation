SettMapMTy::ChangePlayerList:
005D0ED0  55                        PUSH EBP
005D0ED1  8B EC                     MOV EBP,ESP
005D0ED3  83 EC 48                  SUB ESP,0x48
005D0ED6  8B 81 84 1F 00 00         MOV EAX,dword ptr [ECX + 0x1f84]
005D0EDC  53                        PUSH EBX
005D0EDD  56                        PUSH ESI
005D0EDE  57                        PUSH EDI
005D0EDF  85 C0                     TEST EAX,EAX
005D0EE1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D0EE4  0F 84 8F 01 00 00         JZ 0x005d1079
005D0EEA  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D0EEF  8D 55 BC                  LEA EDX,[EBP + -0x44]
005D0EF2  8D 4D B8                  LEA ECX,[EBP + -0x48]
005D0EF5  6A 00                     PUSH 0x0
005D0EF7  52                        PUSH EDX
005D0EF8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005D0EFB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D0F01  E8 EA C8 15 00            CALL 0x0072d7f0
005D0F06  8B F0                     MOV ESI,EAX
005D0F08  83 C4 08                  ADD ESP,0x8
005D0F0B  85 F6                     TEST ESI,ESI
005D0F0D  0F 85 27 01 00 00         JNZ 0x005d103a
005D0F13  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005D0F16  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005D0F19  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D0F1F  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
005D0F22  73 0D                     JNC 0x005d0f31
005D0F24  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D0F27  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005D0F2A  0F AF C6                  IMUL EAX,ESI
005D0F2D  03 C2                     ADD EAX,EDX
005D0F2F  EB 02                     JMP 0x005d0f33
LAB_005d0f31:
005D0F31  33 C0                     XOR EAX,EAX
LAB_005d0f33:
005D0F33  85 C0                     TEST EAX,EAX
005D0F35  0F 84 EE 00 00 00         JZ 0x005d1029
005D0F3B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005D0F3E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005D0F41  83 F8 02                  CMP EAX,0x2
005D0F44  74 05                     JZ 0x005d0f4b
005D0F46  83 F8 03                  CMP EAX,0x3
005D0F49  75 08                     JNZ 0x005d0f53
LAB_005d0f4b:
005D0F4B  57                        PUSH EDI
005D0F4C  8B CB                     MOV ECX,EBX
005D0F4E  E8 0A 3A E3 FF            CALL 0x0040495d
LAB_005d0f53:
005D0F53  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D0F59  3B 70 0C                  CMP ESI,dword ptr [EAX + 0xc]
005D0F5C  73 0D                     JNC 0x005d0f6b
005D0F5E  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
005D0F61  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005D0F64  0F AF DE                  IMUL EBX,ESI
005D0F67  03 D9                     ADD EBX,ECX
005D0F69  EB 02                     JMP 0x005d0f6d
LAB_005d0f6b:
005D0F6B  33 DB                     XOR EBX,EBX
LAB_005d0f6d:
005D0F6D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005D0F70  8A 4D 14                  MOV CL,byte ptr [EBP + 0x14]
005D0F73  83 F8 02                  CMP EAX,0x2
005D0F76  88 43 04                  MOV byte ptr [EBX + 0x4],AL
005D0F79  88 4B 05                  MOV byte ptr [EBX + 0x5],CL
005D0F7C  74 09                     JZ 0x005d0f87
005D0F7E  83 F8 03                  CMP EAX,0x3
005D0F81  74 04                     JZ 0x005d0f87
005D0F83  33 C0                     XOR EAX,EAX
005D0F85  EB 02                     JMP 0x005d0f89
LAB_005d0f87:
005D0F87  8B C7                     MOV EAX,EDI
LAB_005d0f89:
005D0F89  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
005D0F8C  89 43 06                  MOV dword ptr [EBX + 0x6],EAX
005D0F8F  85 FF                     TEST EDI,EDI
005D0F91  75 05                     JNZ 0x005d0f98
005D0F93  BF A0 16 80 00            MOV EDI,0x8016a0
LAB_005d0f98:
005D0F98  83 C9 FF                  OR ECX,0xffffffff
005D0F9B  33 C0                     XOR EAX,EAX
005D0F9D  F2 AE                     SCASB.REPNE ES:EDI
005D0F9F  F7 D1                     NOT ECX
005D0FA1  2B F9                     SUB EDI,ECX
005D0FA3  8D 53 0A                  LEA EDX,[EBX + 0xa]
005D0FA6  8B C1                     MOV EAX,ECX
005D0FA8  8B F7                     MOV ESI,EDI
005D0FAA  8B FA                     MOV EDI,EDX
005D0FAC  C1 E9 02                  SHR ECX,0x2
005D0FAF  F3 A5                     MOVSD.REP ES:EDI,ESI
005D0FB1  8B C8                     MOV ECX,EAX
005D0FB3  83 E1 03                  AND ECX,0x3
005D0FB6  F3 A4                     MOVSB.REP ES:EDI,ESI
005D0FB8  8A 43 04                  MOV AL,byte ptr [EBX + 0x4]
005D0FBB  84 C0                     TEST AL,AL
005D0FBD  75 16                     JNZ 0x005d0fd5
005D0FBF  8A 43 02                  MOV AL,byte ptr [EBX + 0x2]
005D0FC2  3C FF                     CMP AL,0xff
005D0FC4  74 0B                     JZ 0x005d0fd1
005D0FC6  50                        PUSH EAX
005D0FC7  B9 20 76 80 00            MOV ECX,0x807620
005D0FCC  E8 96 2F E3 FF            CALL 0x00403f67
LAB_005d0fd1:
005D0FD1  C6 43 02 FF               MOV byte ptr [EBX + 0x2],0xff
LAB_005d0fd5:
005D0FD5  8A 4B 02                  MOV CL,byte ptr [EBX + 0x2]
005D0FD8  B0 01                     MOV AL,0x1
005D0FDA  80 F9 FF                  CMP CL,0xff
005D0FDD  75 06                     JNZ 0x005d0fe5
005D0FDF  C6 43 4F 00               MOV byte ptr [EBX + 0x4f],0x0
005D0FE3  EB 03                     JMP 0x005d0fe8
LAB_005d0fe5:
005D0FE5  88 43 4F                  MOV byte ptr [EBX + 0x4f],AL
LAB_005d0fe8:
005D0FE8  80 3B 00                  CMP byte ptr [EBX],0x0
005D0FEB  74 09                     JZ 0x005d0ff6
005D0FED  80 7B 04 02               CMP byte ptr [EBX + 0x4],0x2
005D0FF1  74 03                     JZ 0x005d0ff6
005D0FF3  88 43 01                  MOV byte ptr [EBX + 0x1],AL
LAB_005d0ff6:
005D0FF6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005D0FF9  8B CE                     MOV ECX,ESI
005D0FFB  E8 C6 25 E3 FF            CALL 0x004035c6
005D1000  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005D1006  3C 0C                     CMP AL,0xc
005D1008  74 0B                     JZ 0x005d1015
005D100A  3C 10                     CMP AL,0x10
005D100C  74 07                     JZ 0x005d1015
005D100E  8B CE                     MOV ECX,ESI
005D1010  E8 68 4B E3 FF            CALL 0x00405b7d
LAB_005d1015:
005D1015  8B 16                     MOV EDX,dword ptr [ESI]
005D1017  8B CE                     MOV ECX,ESI
005D1019  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005D101C  8B CE                     MOV ECX,ESI
005D101E  E8 77 1A E3 FF            CALL 0x00402a9a
005D1023  FF 86 21 21 00 00         INC dword ptr [ESI + 0x2121]
LAB_005d1029:
005D1029  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005D102C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D1031  5F                        POP EDI
005D1032  5E                        POP ESI
005D1033  5B                        POP EBX
005D1034  8B E5                     MOV ESP,EBP
005D1036  5D                        POP EBP
005D1037  C2 14 00                  RET 0x14
LAB_005d103a:
005D103A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005D103D  68 A0 D4 7C 00            PUSH 0x7cd4a0
005D1042  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D1047  56                        PUSH ESI
005D1048  6A 00                     PUSH 0x0
005D104A  68 05 06 00 00            PUSH 0x605
005D104F  68 58 D2 7C 00            PUSH 0x7cd258
005D1054  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D105A  E8 71 C4 0D 00            CALL 0x006ad4d0
005D105F  83 C4 18                  ADD ESP,0x18
005D1062  85 C0                     TEST EAX,EAX
005D1064  74 01                     JZ 0x005d1067
005D1066  CC                        INT3
LAB_005d1067:
005D1067  68 05 06 00 00            PUSH 0x605
005D106C  68 58 D2 7C 00            PUSH 0x7cd258
005D1071  6A 00                     PUSH 0x0
005D1073  56                        PUSH ESI
005D1074  E8 C7 4D 0D 00            CALL 0x006a5e40
LAB_005d1079:
005D1079  5F                        POP EDI
005D107A  5E                        POP ESI
005D107B  5B                        POP EBX
005D107C  8B E5                     MOV ESP,EBP
005D107E  5D                        POP EBP
005D107F  C2 14 00                  RET 0x14
