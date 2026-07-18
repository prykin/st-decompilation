FUN_0057b350:
0057B350  55                        PUSH EBP
0057B351  8B EC                     MOV EBP,ESP
0057B353  83 EC 18                  SUB ESP,0x18
0057B356  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057B359  53                        PUSH EBX
0057B35A  56                        PUSH ESI
0057B35B  83 F8 1A                  CMP EAX,0x1a
0057B35E  57                        PUSH EDI
0057B35F  0F 8C 39 02 00 00         JL 0x0057b59e
0057B365  83 F8 23                  CMP EAX,0x23
0057B368  0F 8F 30 02 00 00         JG 0x0057b59e
0057B36E  C1 E0 03                  SHL EAX,0x3
0057B371  50                        PUSH EAX
0057B372  E8 F9 F8 12 00            CALL 0x006aac70
0057B377  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0057B37A  85 C0                     TEST EAX,EAX
0057B37C  89 01                     MOV dword ptr [ECX],EAX
0057B37E  75 30                     JNZ 0x0057b3b0
0057B380  68 C8 AF 7C 00            PUSH 0x7cafc8
0057B385  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057B38A  50                        PUSH EAX
0057B38B  50                        PUSH EAX
0057B38C  68 5D 01 00 00            PUSH 0x15d
0057B391  68 5C AF 7C 00            PUSH 0x7caf5c
0057B396  E8 35 21 13 00            CALL 0x006ad4d0
0057B39B  83 C4 18                  ADD ESP,0x18
0057B39E  85 C0                     TEST EAX,EAX
0057B3A0  0F 84 1D 02 00 00         JZ 0x0057b5c3
0057B3A6  CC                        INT3
LAB_0057b3b0:
0057B3B0  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0057B3B3  B9 37 FF FF FF            MOV ECX,0xffffff37
0057B3B8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0057B3BF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0057B3C2  C7 45 EC 03 00 00 00      MOV dword ptr [EBP + -0x14],0x3
LAB_0057b3c9:
0057B3C9  B8 37 FF FF FF            MOV EAX,0xffffff37
0057B3CE  C7 45 F0 03 00 00 00      MOV dword ptr [EBP + -0x10],0x3
0057B3D5  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0057b3d8:
0057B3D8  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0057B3DB  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
0057B3DE  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0057B3E1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0057B3E4  BB 38 FF FF FF            MOV EBX,0xffffff38
0057B3E9  C7 45 F4 03 00 00 00      MOV dword ptr [EBP + -0xc],0x3
0057B3F0  8D 3C BA                  LEA EDI,[EDX + EDI*0x4]
LAB_0057b3f3:
0057B3F3  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0057B3F6  03 D3                     ADD EDX,EBX
0057B3F8  85 D2                     TEST EDX,EDX
0057B3FA  74 62                     JZ 0x0057b45e
0057B3FC  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0057B400  66 03 D1                  ADD DX,CX
0057B403  8B 0F                     MOV ECX,dword ptr [EDI]
0057B405  66 89 11                  MOV word ptr [ECX],DX
0057B408  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
0057B40C  66 03 D0                  ADD DX,AX
0057B40F  8B 07                     MOV EAX,dword ptr [EDI]
0057B411  66 8B CB                  MOV CX,BX
0057B414  66 89 50 02               MOV word ptr [EAX + 0x2],DX
0057B418  66 03 4E 45               ADD CX,word ptr [ESI + 0x45]
0057B41C  8B 17                     MOV EDX,dword ptr [EDI]
0057B41E  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0057B422  8B 07                     MOV EAX,dword ptr [EDI]
0057B424  8B 16                     MOV EDX,dword ptr [ESI]
0057B426  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
0057B42A  51                        PUSH ECX
0057B42B  66 8B 48 02               MOV CX,word ptr [EAX + 0x2]
0057B42F  66 8B 00                  MOV AX,word ptr [EAX]
0057B432  51                        PUSH ECX
0057B433  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0057B437  50                        PUSH EAX
0057B438  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0057B43C  51                        PUSH ECX
0057B43D  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0057B441  50                        PUSH EAX
0057B442  51                        PUSH ECX
0057B443  8B CE                     MOV ECX,ESI
0057B445  FF 52 10                  CALL dword ptr [EDX + 0x10]
0057B448  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0057B44B  8B 17                     MOV EDX,dword ptr [EDI]
0057B44D  41                        INC ECX
0057B44E  83 C7 04                  ADD EDI,0x4
0057B451  66 89 42 06               MOV word ptr [EDX + 0x6],AX
0057B455  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057B458  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0057B45B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0057b45e:
0057B45E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0057B461  81 C3 C8 00 00 00         ADD EBX,0xc8
0057B467  4A                        DEC EDX
0057B468  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0057B46B  75 86                     JNZ 0x0057b3f3
0057B46D  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0057B470  05 C9 00 00 00            ADD EAX,0xc9
0057B475  4A                        DEC EDX
0057B476  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0057B479  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0057B47C  0F 85 56 FF FF FF         JNZ 0x0057b3d8
0057B482  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0057B485  81 C1 C9 00 00 00         ADD ECX,0xc9
0057B48B  48                        DEC EAX
0057B48C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0057B48F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0057B492  0F 85 31 FF FF FF         JNZ 0x0057b3c9
0057B498  83 7D 0C 1A               CMP dword ptr [EBP + 0xc],0x1a
0057B49C  75 0C                     JNZ 0x0057b4aa
0057B49E  5F                        POP EDI
0057B49F  5E                        POP ESI
0057B4A0  B8 01 00 00 00            MOV EAX,0x1
0057B4A5  5B                        POP EBX
0057B4A6  8B E5                     MOV ESP,EBP
0057B4A8  5D                        POP EBP
0057B4A9  C3                        RET
LAB_0057b4aa:
0057B4AA  C7 45 F8 9C FF FF FF      MOV dword ptr [EBP + -0x8],0xffffff9c
0057B4B1  C7 45 F4 02 00 00 00      MOV dword ptr [EBP + -0xc],0x2
LAB_0057b4b8:
0057B4B8  B8 9C FF FF FF            MOV EAX,0xffffff9c
0057B4BD  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
0057B4C4  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0057b4c7:
0057B4C7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0057B4CA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0057B4CD  BB 9C FF FF FF            MOV EBX,0xffffff9c
0057B4D2  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0057B4D9  8D 3C 91                  LEA EDI,[ECX + EDX*0x4]
LAB_0057b4dc:
0057B4DC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0057B4DF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0057B4E2  3B D1                     CMP EDX,ECX
0057B4E4  7D 7E                     JGE 0x0057b564
0057B4E6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0057B4E9  8D 14 03                  LEA EDX,[EBX + EAX*0x1]
0057B4EC  03 D1                     ADD EDX,ECX
0057B4EE  74 5F                     JZ 0x0057b54f
0057B4F0  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0057B4F4  66 03 D1                  ADD DX,CX
0057B4F7  8B 0F                     MOV ECX,dword ptr [EDI]
0057B4F9  66 89 11                  MOV word ptr [ECX],DX
0057B4FC  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
0057B500  66 03 D0                  ADD DX,AX
0057B503  8B 07                     MOV EAX,dword ptr [EDI]
0057B505  66 8B CB                  MOV CX,BX
0057B508  66 89 50 02               MOV word ptr [EAX + 0x2],DX
0057B50C  66 03 4E 45               ADD CX,word ptr [ESI + 0x45]
0057B510  8B 17                     MOV EDX,dword ptr [EDI]
0057B512  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0057B516  8B 07                     MOV EAX,dword ptr [EDI]
0057B518  8B 16                     MOV EDX,dword ptr [ESI]
0057B51A  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
0057B51E  51                        PUSH ECX
0057B51F  66 8B 48 02               MOV CX,word ptr [EAX + 0x2]
0057B523  66 8B 00                  MOV AX,word ptr [EAX]
0057B526  51                        PUSH ECX
0057B527  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0057B52B  50                        PUSH EAX
0057B52C  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0057B530  51                        PUSH ECX
0057B531  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0057B535  50                        PUSH EAX
0057B536  51                        PUSH ECX
0057B537  8B CE                     MOV ECX,ESI
0057B539  FF 52 10                  CALL dword ptr [EDX + 0x10]
0057B53C  8B 17                     MOV EDX,dword ptr [EDI]
0057B53E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0057B541  41                        INC ECX
0057B542  83 C7 04                  ADD EDI,0x4
0057B545  66 89 42 06               MOV word ptr [EDX + 0x6],AX
0057B549  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057B54C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0057b54f:
0057B54F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0057B552  81 C3 C8 00 00 00         ADD EBX,0xc8
0057B558  49                        DEC ECX
0057B559  85 C9                     TEST ECX,ECX
0057B55B  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0057B55E  0F 8D 78 FF FF FF         JGE 0x0057b4dc
LAB_0057b564:
0057B564  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0057B567  05 C9 00 00 00            ADD EAX,0xc9
0057B56C  49                        DEC ECX
0057B56D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0057B570  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0057B573  0F 85 4E FF FF FF         JNZ 0x0057b4c7
0057B579  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0057B57C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0057B57F  81 C1 C9 00 00 00         ADD ECX,0xc9
0057B585  48                        DEC EAX
0057B586  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0057B589  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0057B58C  0F 85 26 FF FF FF         JNZ 0x0057b4b8
0057B592  5F                        POP EDI
0057B593  5E                        POP ESI
0057B594  B8 01 00 00 00            MOV EAX,0x1
0057B599  5B                        POP EBX
0057B59A  8B E5                     MOV ESP,EBP
0057B59C  5D                        POP EBP
0057B59D  C3                        RET
LAB_0057b59e:
0057B59E  68 80 AF 7C 00            PUSH 0x7caf80
0057B5A3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057B5A8  6A 00                     PUSH 0x0
0057B5AA  6A 00                     PUSH 0x0
0057B5AC  68 56 01 00 00            PUSH 0x156
0057B5B1  68 5C AF 7C 00            PUSH 0x7caf5c
0057B5B6  E8 15 1F 13 00            CALL 0x006ad4d0
0057B5BB  83 C4 18                  ADD ESP,0x18
0057B5BE  85 C0                     TEST EAX,EAX
0057B5C0  74 01                     JZ 0x0057b5c3
0057B5C2  CC                        INT3
LAB_0057b5c3:
0057B5C3  5F                        POP EDI
0057B5C4  5E                        POP ESI
0057B5C5  33 C0                     XOR EAX,EAX
0057B5C7  5B                        POP EBX
0057B5C8  8B E5                     MOV ESP,EBP
0057B5CA  5D                        POP EBP
0057B5CB  C3                        RET
