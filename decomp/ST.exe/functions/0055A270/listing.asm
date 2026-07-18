VisibleClassTy::SetZoneMin1:
0055A270  55                        PUSH EBP
0055A271  8B EC                     MOV EBP,ESP
0055A273  83 EC 5C                  SUB ESP,0x5c
0055A276  53                        PUSH EBX
0055A277  56                        PUSH ESI
0055A278  57                        PUSH EDI
0055A279  8B F9                     MOV EDI,ECX
0055A27B  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0055A27E  8B 87 14 01 00 00         MOV EAX,dword ptr [EDI + 0x114]
0055A284  85 C0                     TEST EAX,EAX
0055A286  0F 84 9D 01 00 00         JZ 0x0055a429
0055A28C  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0055A28F  85 F6                     TEST ESI,ESI
0055A291  0F 8C 92 01 00 00         JL 0x0055a429
0055A297  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055A29A  83 F8 08                  CMP EAX,0x8
0055A29D  0F 83 86 01 00 00         JNC 0x0055a429
0055A2A3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0055A2A9  85 C9                     TEST ECX,ECX
0055A2AB  74 11                     JZ 0x0055a2be
0055A2AD  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0055A2B0  80 BC C9 E9 87 80 00 08   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0x8
0055A2B8  0F 83 6B 01 00 00         JNC 0x0055a429
LAB_0055a2be:
0055A2BE  8B 8C 87 B4 00 00 00      MOV ECX,dword ptr [EDI + EAX*0x4 + 0xb4]
0055A2C5  85 C9                     TEST ECX,ECX
0055A2C7  75 4F                     JNZ 0x0055a318
0055A2C9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055A2CE  8D 55 A8                  LEA EDX,[EBP + -0x58]
0055A2D1  8D 4D A4                  LEA ECX,[EBP + -0x5c]
0055A2D4  6A 00                     PUSH 0x0
0055A2D6  52                        PUSH EDX
0055A2D7  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0055A2DA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055A2E0  E8 0B 35 1D 00            CALL 0x0072d7f0
0055A2E5  83 C4 08                  ADD ESP,0x8
0055A2E8  85 C0                     TEST EAX,EAX
0055A2EA  0F 85 BC 00 00 00         JNZ 0x0055a3ac
0055A2F0  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0055A2F3  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0055A2F6  0F AF 47 20               IMUL EAX,dword ptr [EDI + 0x20]
0055A2FA  50                        PUSH EAX
0055A2FB  E8 10 09 15 00            CALL 0x006aac10
0055A300  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055A303  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0055A306  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0055A309  89 84 8F B4 00 00 00      MOV dword ptr [EDI + ECX*0x4 + 0xb4],EAX
0055A310  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055A316  8B C1                     MOV EAX,ECX
LAB_0055a318:
0055A318  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0055A31B  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0055A31E  F6 C5 10                  TEST CH,0x10
0055A321  74 18                     JZ 0x0055a33b
0055A323  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0055A326  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055A329  52                        PUSH EDX
0055A32A  56                        PUSH ESI
0055A32B  50                        PUSH EAX
0055A32C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055A32F  50                        PUSH EAX
0055A330  53                        PUSH EBX
0055A331  51                        PUSH ECX
0055A332  6A 05                     PUSH 0x5
0055A334  8B CF                     MOV ECX,EDI
0055A336  E8 C7 97 EA FF            CALL 0x00403b02
LAB_0055a33b:
0055A33B  F6 45 20 20               TEST byte ptr [EBP + 0x20],0x20
0055A33F  0F 84 E4 00 00 00         JZ 0x0055a429
0055A345  85 F6                     TEST ESI,ESI
0055A347  7D 05                     JGE 0x0055a34e
0055A349  33 F6                     XOR ESI,ESI
0055A34B  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
LAB_0055a34e:
0055A34E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055A351  8D 54 36 01               LEA EDX,[ESI + ESI*0x1 + 0x1]
0055A355  2B C6                     SUB EAX,ESI
0055A357  56                        PUSH ESI
0055A358  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0055A35B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0055A35E  2B DE                     SUB EBX,ESI
0055A360  E8 5A 85 EA FF            CALL 0x004028bf
0055A365  8B C8                     MOV ECX,EAX
0055A367  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0055A36A  83 C4 04                  ADD ESP,0x4
0055A36D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0055A370  85 C0                     TEST EAX,EAX
0055A372  0F 8E B1 00 00 00         JLE 0x0055a429
0055A378  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055A37B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0055a37e:
0055A37E  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0055A381  33 C0                     XOR EAX,EAX
LAB_0055a383:
0055A383  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0055A386  85 C9                     TEST ECX,ECX
0055A388  74 09                     JZ 0x0055a393
0055A38A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055A38D  80 3C 01 00               CMP byte ptr [ECX + EAX*0x1],0x0
0055A391  74 73                     JZ 0x0055a406
LAB_0055a393:
0055A393  85 F6                     TEST ESI,ESI
0055A395  7C 4B                     JL 0x0055a3e2
0055A397  3B 77 20                  CMP ESI,dword ptr [EDI + 0x20]
0055A39A  7D 46                     JGE 0x0055a3e2
0055A39C  85 DB                     TEST EBX,EBX
0055A39E  7C 42                     JL 0x0055a3e2
0055A3A0  3B 5F 24                  CMP EBX,dword ptr [EDI + 0x24]
0055A3A3  7D 3D                     JGE 0x0055a3e2
0055A3A5  B9 01 00 00 00            MOV ECX,0x1
0055A3AA  EB 38                     JMP 0x0055a3e4
LAB_0055a3ac:
0055A3AC  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0055A3AF  68 1C 94 7C 00            PUSH 0x7c941c
0055A3B4  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055A3B9  50                        PUSH EAX
0055A3BA  6A 00                     PUSH 0x0
0055A3BC  68 5F 03 00 00            PUSH 0x35f
0055A3C1  68 CC 92 7C 00            PUSH 0x7c92cc
0055A3C6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055A3CC  E8 FF 30 15 00            CALL 0x006ad4d0
0055A3D1  83 C4 18                  ADD ESP,0x18
0055A3D4  85 C0                     TEST EAX,EAX
0055A3D6  74 51                     JZ 0x0055a429
0055A3D8  CC                        INT3
LAB_0055a3e2:
0055A3E2  33 C9                     XOR ECX,ECX
LAB_0055a3e4:
0055A3E4  85 C9                     TEST ECX,ECX
0055A3E6  74 1E                     JZ 0x0055a406
0055A3E8  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0055A3EB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055A3EE  0F AF D3                  IMUL EDX,EBX
0055A3F1  03 94 8F B4 00 00 00      ADD EDX,dword ptr [EDI + ECX*0x4 + 0xb4]
0055A3F8  8A 0C 32                  MOV CL,byte ptr [EDX + ESI*0x1]
0055A3FB  03 D6                     ADD EDX,ESI
0055A3FD  80 F9 FF                  CMP CL,0xff
0055A400  73 04                     JNC 0x0055a406
0055A402  FE C1                     INC CL
0055A404  88 0A                     MOV byte ptr [EDX],CL
LAB_0055a406:
0055A406  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0055A409  40                        INC EAX
0055A40A  46                        INC ESI
0055A40B  3B C1                     CMP EAX,ECX
0055A40D  0F 8C 70 FF FF FF         JL 0x0055a383
0055A413  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055A416  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055A419  03 D1                     ADD EDX,ECX
0055A41B  43                        INC EBX
0055A41C  48                        DEC EAX
0055A41D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0055A420  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0055A423  0F 85 55 FF FF FF         JNZ 0x0055a37e
LAB_0055a429:
0055A429  5F                        POP EDI
0055A42A  5E                        POP ESI
0055A42B  5B                        POP EBX
0055A42C  8B E5                     MOV ESP,EBP
0055A42E  5D                        POP EBP
0055A42F  C2 1C 00                  RET 0x1c
