FUN_0040f270:
0040F270  55                        PUSH EBP
0040F271  8B EC                     MOV EBP,ESP
0040F273  83 EC 2C                  SUB ESP,0x2c
0040F276  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040F279  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040F27C  56                        PUSH ESI
0040F27D  57                        PUSH EDI
0040F27E  8B 08                     MOV ECX,dword ptr [EAX]
0040F280  8B 02                     MOV EAX,dword ptr [EDX]
0040F282  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0040F285  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0040F288  8B 3D 44 4D 7F 00         MOV EDI,dword ptr [0x007f4d44]
0040F28E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0040F291  8B 11                     MOV EDX,dword ptr [ECX]
0040F293  B8 30 75 00 00            MOV EAX,0x7530
0040F298  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0040F29B  8B 15 30 4D 7F 00         MOV EDX,dword ptr [0x007f4d30]
0040F2A1  0F AF 15 2C 4D 7F 00      IMUL EDX,dword ptr [0x007f4d2c]
0040F2A8  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0040F2AB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0040F2AE  A1 50 4D 7F 00            MOV EAX,[0x007f4d50]
0040F2B3  BE 01 00 00 00            MOV ESI,0x1
0040F2B8  83 C9 FF                  OR ECX,0xffffffff
0040F2BB  83 C0 04                  ADD EAX,0x4
0040F2BE  3B FE                     CMP EDI,ESI
0040F2C0  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0040F2C3  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0040F2C6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0040F2C9  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0040F2CC  0F 8E 63 01 00 00         JLE 0x0040f435
0040F2D2  53                        PUSH EBX
0040F2D3  EB 03                     JMP 0x0040f2d8
LAB_0040f2d5:
0040F2D5  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
LAB_0040f2d8:
0040F2D8  85 C9                     TEST ECX,ECX
0040F2DA  7C 0D                     JL 0x0040f2e9
0040F2DC  0F BE 70 03               MOVSX ESI,byte ptr [EAX + 0x3]
0040F2E0  39 75 D4                  CMP dword ptr [EBP + -0x2c],ESI
0040F2E3  0F 8C 01 01 00 00         JL 0x0040f3ea
LAB_0040f2e9:
0040F2E9  0F BE 78 01               MOVSX EDI,byte ptr [EAX + 0x1]
0040F2ED  0F BE 30                  MOVSX ESI,byte ptr [EAX]
0040F2F0  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0040F2F3  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0040F2F6  03 FB                     ADD EDI,EBX
0040F2F8  03 F1                     ADD ESI,ECX
0040F2FA  0F BE 58 02               MOVSX EBX,byte ptr [EAX + 0x2]
0040F2FE  03 5D DC                  ADD EBX,dword ptr [EBP + -0x24]
0040F301  0F 88 C5 00 00 00         JS 0x0040f3cc
0040F307  3B 1D 34 4D 7F 00         CMP EBX,dword ptr [0x007f4d34]
0040F30D  0F 8D B9 00 00 00         JGE 0x0040f3cc
0040F313  85 F6                     TEST ESI,ESI
0040F315  0F 8C B1 00 00 00         JL 0x0040f3cc
0040F31B  8B 0D 2C 4D 7F 00         MOV ECX,dword ptr [0x007f4d2c]
0040F321  3B F1                     CMP ESI,ECX
0040F323  0F 8D A3 00 00 00         JGE 0x0040f3cc
0040F329  85 FF                     TEST EDI,EDI
0040F32B  0F 8C 9B 00 00 00         JL 0x0040f3cc
0040F331  3B 3D 30 4D 7F 00         CMP EDI,dword ptr [0x007f4d30]
0040F337  0F 8D 8F 00 00 00         JGE 0x0040f3cc
0040F33D  0F AF CF                  IMUL ECX,EDI
0040F340  8B C3                     MOV EAX,EBX
0040F342  0F AF C2                  IMUL EAX,EDX
0040F345  8B D6                     MOV EDX,ESI
0040F347  03 D1                     ADD EDX,ECX
0040F349  8B 0D F0 4C 7F 00         MOV ECX,dword ptr [0x007f4cf0]
0040F34F  03 C2                     ADD EAX,EDX
0040F351  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
0040F356  75 71                     JNZ 0x0040f3c9
0040F358  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0040F35B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0040F35E  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
0040F364  80 F2 07                  XOR DL,0x7
0040F367  33 C0                     XOR EAX,EAX
0040F369  0F A3 11                  BT [ECX],EDX
0040F36C  D0 D0                     RCL AL,0x1
0040F36E  85 C0                     TEST EAX,EAX
0040F370  75 57                     JNZ 0x0040f3c9
0040F372  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0040F375  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0040F378  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0040F37B  52                        PUSH EDX
0040F37C  50                        PUSH EAX
0040F37D  51                        PUSH ECX
0040F37E  53                        PUSH EBX
0040F37F  57                        PUSH EDI
0040F380  56                        PUSH ESI
0040F381  E8 4A BA 29 00            CALL 0x006aadd0
0040F386  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0040F389  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0040F38C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0040F38F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0040F392  52                        PUSH EDX
0040F393  50                        PUSH EAX
0040F394  51                        PUSH ECX
0040F395  53                        PUSH EBX
0040F396  57                        PUSH EDI
0040F397  56                        PUSH ESI
0040F398  E8 33 BA 29 00            CALL 0x006aadd0
0040F39D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0040F3A0  3B C1                     CMP EAX,ECX
0040F3A2  7C 0C                     JL 0x0040f3b0
0040F3A4  75 23                     JNZ 0x0040f3c9
0040F3A6  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0040F3A9  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0040F3AC  3B D1                     CMP EDX,ECX
0040F3AE  7D 19                     JGE 0x0040f3c9
LAB_0040f3b0:
0040F3B0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0040F3B3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0040F3B6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0040F3B9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0040F3BC  0F BE 4A 03               MOVSX ECX,byte ptr [EDX + 0x3]
0040F3C0  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0040F3C3  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0040F3C6  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_0040f3c9:
0040F3C9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0040f3cc:
0040F3CC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0040F3CF  8B 15 44 4D 7F 00         MOV EDX,dword ptr [0x007f4d44]
0040F3D5  41                        INC ECX
0040F3D6  83 C0 04                  ADD EAX,0x4
0040F3D9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0040F3DC  3B CA                     CMP ECX,EDX
0040F3DE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0040F3E1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0040F3E4  0F 8C EB FE FF FF         JL 0x0040f2d5
LAB_0040f3ea:
0040F3EA  85 C9                     TEST ECX,ECX
0040F3EC  5B                        POP EBX
0040F3ED  7C 46                     JL 0x0040f435
0040F3EF  A1 50 4D 7F 00            MOV EAX,[0x007f4d50]
0040F3F4  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0040F3F7  5F                        POP EDI
0040F3F8  0F BE 14 88               MOVSX EDX,byte ptr [EAX + ECX*0x4]
0040F3FC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040F3FF  03 D6                     ADD EDX,ESI
0040F401  5E                        POP ESI
0040F402  89 10                     MOV dword ptr [EAX],EDX
0040F404  8B 15 50 4D 7F 00         MOV EDX,dword ptr [0x007f4d50]
0040F40A  0F BE 44 8A 01            MOVSX EAX,byte ptr [EDX + ECX*0x4 + 0x1]
0040F40F  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0040F412  03 C2                     ADD EAX,EDX
0040F414  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040F417  89 02                     MOV dword ptr [EDX],EAX
0040F419  A1 50 4D 7F 00            MOV EAX,[0x007f4d50]
0040F41E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0040F421  0F BE 4C 88 02            MOVSX ECX,byte ptr [EAX + ECX*0x4 + 0x2]
0040F426  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0040F429  03 C8                     ADD ECX,EAX
0040F42B  33 C0                     XOR EAX,EAX
0040F42D  89 0A                     MOV dword ptr [EDX],ECX
0040F42F  8B E5                     MOV ESP,EBP
0040F431  5D                        POP EBP
0040F432  C2 24 00                  RET 0x24
LAB_0040f435:
0040F435  5F                        POP EDI
0040F436  B8 FC FF FF FF            MOV EAX,0xfffffffc
0040F43B  5E                        POP ESI
0040F43C  8B E5                     MOV ESP,EBP
0040F43E  5D                        POP EBP
0040F43F  C2 24 00                  RET 0x24
