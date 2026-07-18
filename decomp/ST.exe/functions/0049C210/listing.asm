STGroupBoatC::GrpLoadRC:
0049C210  55                        PUSH EBP
0049C211  8B EC                     MOV EBP,ESP
0049C213  81 EC FC 00 00 00         SUB ESP,0xfc
0049C219  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0049C21E  53                        PUSH EBX
0049C21F  56                        PUSH ESI
0049C220  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0049C223  33 F6                     XOR ESI,ESI
0049C225  57                        PUSH EDI
0049C226  8D 95 4C FF FF FF         LEA EDX,[EBP + 0xffffff4c]
0049C22C  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
0049C232  56                        PUSH ESI
0049C233  52                        PUSH EDX
0049C234  C7 45 F0 04 00 00 00      MOV dword ptr [EBP + -0x10],0x4
0049C23B  C7 45 D0 38 00 00 00      MOV dword ptr [EBP + -0x30],0x38
0049C242  C7 45 D4 39 00 00 00      MOV dword ptr [EBP + -0x2c],0x39
0049C249  C7 45 D8 4F 00 00 00      MOV dword ptr [EBP + -0x28],0x4f
0049C250  C7 45 DC 5E 00 00 00      MOV dword ptr [EBP + -0x24],0x5e
0049C257  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
0049C25D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049C263  E8 88 15 29 00            CALL 0x0072d7f0
0049C268  8B F8                     MOV EDI,EAX
0049C26A  83 C4 08                  ADD ESP,0x8
0049C26D  3B FE                     CMP EDI,ESI
0049C26F  0F 85 B7 07 00 00         JNZ 0x0049ca2c
0049C275  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049C278  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0049C27B  83 F8 01                  CMP EAX,0x1
0049C27E  74 08                     JZ 0x0049c288
0049C280  3B C6                     CMP EAX,ESI
0049C282  0F 85 7A 05 00 00         JNZ 0x0049c802
LAB_0049c288:
0049C288  B9 15 00 00 00            MOV ECX,0x15
0049C28D  33 C0                     XOR EAX,EAX
0049C28F  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
0049C295  F3 AB                     STOSD.REP ES:EDI
0049C297  8B 83 4E 02 00 00         MOV EAX,dword ptr [EBX + 0x24e]
0049C29D  89 73 65                  MOV dword ptr [EBX + 0x65],ESI
0049C2A0  3B C6                     CMP EAX,ESI
0049C2A2  74 06                     JZ 0x0049c2aa
0049C2A4  50                        PUSH EAX
0049C2A5  E8 66 1E 21 00            CALL 0x006ae110
LAB_0049c2aa:
0049C2AA  8B 83 66 02 00 00         MOV EAX,dword ptr [EBX + 0x266]
0049C2B0  3B C6                     CMP EAX,ESI
0049C2B2  74 06                     JZ 0x0049c2ba
0049C2B4  50                        PUSH EAX
0049C2B5  E8 56 1E 21 00            CALL 0x006ae110
LAB_0049c2ba:
0049C2BA  8D 83 0B 01 00 00         LEA EAX,[EBX + 0x10b]
0049C2C0  B9 0B 00 00 00            MOV ECX,0xb
0049C2C5  8B F0                     MOV ESI,EAX
0049C2C7  8D BB 4A 02 00 00         LEA EDI,[EBX + 0x24a]
0049C2CD  F3 A5                     MOVSD.REP ES:EDI,ESI
0049C2CF  8B 10                     MOV EDX,dword ptr [EAX]
0049C2D1  33 C9                     XOR ECX,ECX
0049C2D3  3B D1                     CMP EDX,ECX
0049C2D5  89 8B 4E 02 00 00         MOV dword ptr [EBX + 0x24e],ECX
0049C2DB  89 8B 66 02 00 00         MOV dword ptr [EBX + 0x266],ECX
0049C2E1  0F 85 22 01 00 00         JNZ 0x0049c409
0049C2E7  8B 83 0F 01 00 00         MOV EAX,dword ptr [EBX + 0x10f]
0049C2ED  3B C1                     CMP EAX,ECX
0049C2EF  74 0A                     JZ 0x0049c2fb
0049C2F1  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0049C2F4  3B C1                     CMP EAX,ECX
0049C2F6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0049C2F9  75 1A                     JNZ 0x0049c315
LAB_0049c2fb:
0049C2FB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049C300  68 1D 08 00 00            PUSH 0x81d
0049C305  68 3C BE 7A 00            PUSH 0x7abe3c
0049C30A  50                        PUSH EAX
0049C30B  68 09 00 FE AF            PUSH 0xaffe0009
0049C310  E8 2B 9B 20 00            CALL 0x006a5e40
LAB_0049c315:
0049C315  6A 01                     PUSH 0x1
0049C317  6A 02                     PUSH 0x2
0049C319  6A 00                     PUSH 0x0
0049C31B  6A 00                     PUSH 0x0
0049C31D  E8 6E 1F 21 00            CALL 0x006ae290
0049C322  89 83 4E 02 00 00         MOV dword ptr [EBX + 0x24e],EAX
0049C328  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049C32B  33 FF                     XOR EDI,EDI
0049C32D  85 C0                     TEST EAX,EAX
0049C32F  0F 8E 8D 00 00 00         JLE 0x0049c3c2
LAB_0049c335:
0049C335  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049C338  8B D7                     MOV EDX,EDI
0049C33A  51                        PUSH ECX
0049C33B  8B 8B 0F 01 00 00         MOV ECX,dword ptr [EBX + 0x10f]
0049C341  E8 2A 09 21 00            CALL 0x006acc70
0049C346  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049C349  66 3D FF FF               CMP AX,0xffff
0049C34D  74 67                     JZ 0x0049c3b6
0049C34F  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049C352  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049C358  6A 01                     PUSH 0x1
0049C35A  50                        PUSH EAX
0049C35B  52                        PUSH EDX
0049C35C  E8 59 65 F6 FF            CALL 0x004028ba
0049C361  8B F0                     MOV ESI,EAX
0049C363  85 F6                     TEST ESI,ESI
0049C365  74 4F                     JZ 0x0049c3b6
0049C367  8B 06                     MOV EAX,dword ptr [ESI]
0049C369  8B CE                     MOV ECX,ESI
0049C36B  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049C36E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0049C371  33 C9                     XOR ECX,ECX
0049C373  85 D2                     TEST EDX,EDX
0049C375  7E 10                     JLE 0x0049c387
0049C377  8D 55 D0                  LEA EDX,[EBP + -0x30]
LAB_0049c37a:
0049C37A  3B 02                     CMP EAX,dword ptr [EDX]
0049C37C  74 09                     JZ 0x0049c387
0049C37E  41                        INC ECX
0049C37F  83 C2 04                  ADD EDX,0x4
0049C382  3B 4D F0                  CMP ECX,dword ptr [EBP + -0x10]
0049C385  7C F3                     JL 0x0049c37a
LAB_0049c387:
0049C387  3B 4D F0                  CMP ECX,dword ptr [EBP + -0x10]
0049C38A  74 2A                     JZ 0x0049c3b6
0049C38C  3B 83 5E 02 00 00         CMP EAX,dword ptr [EBX + 0x25e]
0049C392  75 22                     JNZ 0x0049c3b6
0049C394  8B 16                     MOV EDX,dword ptr [ESI]
0049C396  8D 45 EC                  LEA EAX,[EBP + -0x14]
0049C399  50                        PUSH EAX
0049C39A  8B CE                     MOV ECX,ESI
0049C39C  FF 92 88 00 00 00         CALL dword ptr [EDX + 0x88]
0049C3A2  85 C0                     TEST EAX,EAX
0049C3A4  7E 10                     JLE 0x0049c3b6
0049C3A6  8B 93 4E 02 00 00         MOV EDX,dword ptr [EBX + 0x24e]
0049C3AC  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049C3AF  51                        PUSH ECX
0049C3B0  52                        PUSH EDX
0049C3B1  E8 0A 1E 21 00            CALL 0x006ae1c0
LAB_0049c3b6:
0049C3B6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049C3B9  47                        INC EDI
0049C3BA  3B F8                     CMP EDI,EAX
0049C3BC  0F 8C 73 FF FF FF         JL 0x0049c335
LAB_0049c3c2:
0049C3C2  8B 83 0F 01 00 00         MOV EAX,dword ptr [EBX + 0x10f]
0049C3C8  50                        PUSH EAX
0049C3C9  E8 42 1D 21 00            CALL 0x006ae110
0049C3CE  8B 8B 4E 02 00 00         MOV ECX,dword ptr [EBX + 0x24e]
0049C3D4  C7 83 0F 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x10f],0x0
0049C3DE  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0049C3E1  85 C0                     TEST EAX,EAX
0049C3E3  0F 85 24 01 00 00         JNZ 0x0049c50d
0049C3E9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049C3EF  68 34 08 00 00            PUSH 0x834
0049C3F4  68 3C BE 7A 00            PUSH 0x7abe3c
0049C3F9  52                        PUSH EDX
0049C3FA  68 09 00 FE AF            PUSH 0xaffe0009
0049C3FF  E8 3C 9A 20 00            CALL 0x006a5e40
0049C404  E9 04 01 00 00            JMP 0x0049c50d
LAB_0049c409:
0049C409  66 8B 83 5C 02 00 00      MOV AX,word ptr [EBX + 0x25c]
0049C410  66 8B 8B 5A 02 00 00      MOV CX,word ptr [EBX + 0x25a]
0049C417  66 8B 93 58 02 00 00      MOV DX,word ptr [EBX + 0x258]
0049C41E  6A FF                     PUSH -0x1
0049C420  6A 01                     PUSH 0x1
0049C422  50                        PUSH EAX
0049C423  66 8B 83 56 02 00 00      MOV AX,word ptr [EBX + 0x256]
0049C42A  51                        PUSH ECX
0049C42B  66 8B 8B 54 02 00 00      MOV CX,word ptr [EBX + 0x254]
0049C432  52                        PUSH EDX
0049C433  66 8B 93 52 02 00 00      MOV DX,word ptr [EBX + 0x252]
0049C43A  50                        PUSH EAX
0049C43B  8B 83 5E 02 00 00         MOV EAX,dword ptr [EBX + 0x25e]
0049C441  51                        PUSH ECX
0049C442  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049C445  52                        PUSH EDX
0049C446  50                        PUSH EAX
0049C447  51                        PUSH ECX
0049C448  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049C44E  E8 21 55 F6 FF            CALL 0x00401974
0049C453  8B F8                     MOV EDI,EAX
0049C455  6A 01                     PUSH 0x1
0049C457  6A 02                     PUSH 0x2
0049C459  6A 00                     PUSH 0x0
0049C45B  85 FF                     TEST EDI,EDI
0049C45D  6A 00                     PUSH 0x0
0049C45F  75 21                     JNZ 0x0049c482
0049C461  E8 2A 1E 21 00            CALL 0x006ae290
0049C466  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049C469  89 83 4E 02 00 00         MOV dword ptr [EBX + 0x24e],EAX
0049C46F  52                        PUSH EDX
0049C470  50                        PUSH EAX
0049C471  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
0049C478  E8 43 1D 21 00            CALL 0x006ae1c0
0049C47D  E9 8B 00 00 00            JMP 0x0049c50d
LAB_0049c482:
0049C482  E8 09 1E 21 00            CALL 0x006ae290
0049C487  89 83 4E 02 00 00         MOV dword ptr [EBX + 0x24e],EAX
0049C48D  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0049C490  33 F6                     XOR ESI,ESI
0049C492  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0049C495  85 C0                     TEST EAX,EAX
0049C497  7E 50                     JLE 0x0049c4e9
LAB_0049c499:
0049C499  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049C49C  8B D6                     MOV EDX,ESI
0049C49E  50                        PUSH EAX
0049C49F  8B CF                     MOV ECX,EDI
0049C4A1  E8 CA 07 21 00            CALL 0x006acc70
0049C4A6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049C4A9  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049C4AC  6A 01                     PUSH 0x1
0049C4AE  51                        PUSH ECX
0049C4AF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049C4B5  52                        PUSH EDX
0049C4B6  E8 FF 63 F6 FF            CALL 0x004028ba
0049C4BB  85 C0                     TEST EAX,EAX
0049C4BD  74 22                     JZ 0x0049c4e1
0049C4BF  8B 10                     MOV EDX,dword ptr [EAX]
0049C4C1  8D 4D EC                  LEA ECX,[EBP + -0x14]
0049C4C4  51                        PUSH ECX
0049C4C5  8B C8                     MOV ECX,EAX
0049C4C7  FF 92 88 00 00 00         CALL dword ptr [EDX + 0x88]
0049C4CD  85 C0                     TEST EAX,EAX
0049C4CF  7E 10                     JLE 0x0049c4e1
0049C4D1  8B 83 4E 02 00 00         MOV EAX,dword ptr [EBX + 0x24e]
0049C4D7  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049C4DA  52                        PUSH EDX
0049C4DB  50                        PUSH EAX
0049C4DC  E8 DF 1C 21 00            CALL 0x006ae1c0
LAB_0049c4e1:
0049C4E1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049C4E4  46                        INC ESI
0049C4E5  3B F0                     CMP ESI,EAX
0049C4E7  7C B0                     JL 0x0049c499
LAB_0049c4e9:
0049C4E9  8B 83 4E 02 00 00         MOV EAX,dword ptr [EBX + 0x24e]
0049C4EF  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049C4F2  85 C9                     TEST ECX,ECX
0049C4F4  75 11                     JNZ 0x0049c507
0049C4F6  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049C4F9  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
0049C500  51                        PUSH ECX
0049C501  50                        PUSH EAX
0049C502  E8 B9 1C 21 00            CALL 0x006ae1c0
LAB_0049c507:
0049C507  57                        PUSH EDI
0049C508  E8 03 1C 21 00            CALL 0x006ae110
LAB_0049c50d:
0049C50D  8B 83 62 02 00 00         MOV EAX,dword ptr [EBX + 0x262]
0049C513  85 C0                     TEST EAX,EAX
0049C515  0F 85 E1 00 00 00         JNZ 0x0049c5fc
0049C51B  8B 83 27 01 00 00         MOV EAX,dword ptr [EBX + 0x127]
0049C521  85 C0                     TEST EAX,EAX
0049C523  74 0C                     JZ 0x0049c531
0049C525  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0049C528  85 FF                     TEST EDI,EDI
0049C52A  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0049C52D  75 20                     JNZ 0x0049c54f
0049C52F  EB 03                     JMP 0x0049c534
LAB_0049c531:
0049C531  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0049c534:
0049C534  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049C53A  68 55 08 00 00            PUSH 0x855
0049C53F  68 3C BE 7A 00            PUSH 0x7abe3c
0049C544  52                        PUSH EDX
0049C545  68 09 00 FE AF            PUSH 0xaffe0009
0049C54A  E8 F1 98 20 00            CALL 0x006a5e40
LAB_0049c54f:
0049C54F  6A 01                     PUSH 0x1
0049C551  6A 02                     PUSH 0x2
0049C553  6A 00                     PUSH 0x0
0049C555  6A 00                     PUSH 0x0
0049C557  E8 34 1D 21 00            CALL 0x006ae290
0049C55C  33 F6                     XOR ESI,ESI
0049C55E  89 83 66 02 00 00         MOV dword ptr [EBX + 0x266],EAX
0049C564  85 FF                     TEST EDI,EDI
0049C566  7E 56                     JLE 0x0049c5be
LAB_0049c568:
0049C568  8B 8B 27 01 00 00         MOV ECX,dword ptr [EBX + 0x127]
0049C56E  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049C571  50                        PUSH EAX
0049C572  8B D6                     MOV EDX,ESI
0049C574  E8 F7 06 21 00            CALL 0x006acc70
0049C579  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049C57C  66 3D FF FF               CMP AX,0xffff
0049C580  74 37                     JZ 0x0049c5b9
0049C582  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049C585  6A 01                     PUSH 0x1
0049C587  50                        PUSH EAX
0049C588  51                        PUSH ECX
0049C589  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049C58F  E8 26 63 F6 FF            CALL 0x004028ba
0049C594  85 C0                     TEST EAX,EAX
0049C596  74 21                     JZ 0x0049c5b9
0049C598  8B 10                     MOV EDX,dword ptr [EAX]
0049C59A  8B C8                     MOV ECX,EAX
0049C59C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049C59F  83 F8 3B                  CMP EAX,0x3b
0049C5A2  74 05                     JZ 0x0049c5a9
0049C5A4  83 F8 60                  CMP EAX,0x60
0049C5A7  75 10                     JNZ 0x0049c5b9
LAB_0049c5a9:
0049C5A9  8B 8B 66 02 00 00         MOV ECX,dword ptr [EBX + 0x266]
0049C5AF  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049C5B2  50                        PUSH EAX
0049C5B3  51                        PUSH ECX
0049C5B4  E8 07 1C 21 00            CALL 0x006ae1c0
LAB_0049c5b9:
0049C5B9  46                        INC ESI
0049C5BA  3B F7                     CMP ESI,EDI
0049C5BC  7C AA                     JL 0x0049c568
LAB_0049c5be:
0049C5BE  8B 93 27 01 00 00         MOV EDX,dword ptr [EBX + 0x127]
0049C5C4  52                        PUSH EDX
0049C5C5  E8 46 1B 21 00            CALL 0x006ae110
0049C5CA  8B 83 66 02 00 00         MOV EAX,dword ptr [EBX + 0x266]
0049C5D0  C7 83 27 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x127],0x0
0049C5DA  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049C5DD  85 C9                     TEST ECX,ECX
0049C5DF  75 1B                     JNZ 0x0049c5fc
0049C5E1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049C5E7  68 66 08 00 00            PUSH 0x866
0049C5EC  68 3C BE 7A 00            PUSH 0x7abe3c
0049C5F1  51                        PUSH ECX
0049C5F2  68 09 00 FE AF            PUSH 0xaffe0009
0049C5F7  E8 44 98 20 00            CALL 0x006a5e40
LAB_0049c5fc:
0049C5FC  83 BB 62 02 00 00 02      CMP dword ptr [EBX + 0x262],0x2
0049C603  0F 85 17 01 00 00         JNZ 0x0049c720
0049C609  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049C60C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049C612  52                        PUSH EDX
0049C613  E8 9F 83 F6 FF            CALL 0x004049b7
0049C618  3C 03                     CMP AL,0x3
0049C61A  6A FF                     PUSH -0x1
0049C61C  6A 00                     PUSH 0x0
0049C61E  74 38                     JZ 0x0049c658
0049C620  66 8B 83 74 02 00 00      MOV AX,word ptr [EBX + 0x274]
0049C627  66 8B 8B 72 02 00 00      MOV CX,word ptr [EBX + 0x272]
0049C62E  66 8B 93 70 02 00 00      MOV DX,word ptr [EBX + 0x270]
0049C635  50                        PUSH EAX
0049C636  66 8B 83 6E 02 00 00      MOV AX,word ptr [EBX + 0x26e]
0049C63D  51                        PUSH ECX
0049C63E  66 8B 8B 6C 02 00 00      MOV CX,word ptr [EBX + 0x26c]
0049C645  52                        PUSH EDX
0049C646  66 8B 93 6A 02 00 00      MOV DX,word ptr [EBX + 0x26a]
0049C64D  50                        PUSH EAX
0049C64E  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049C651  51                        PUSH ECX
0049C652  52                        PUSH EDX
0049C653  6A 3B                     PUSH 0x3b
0049C655  50                        PUSH EAX
0049C656  EB 36                     JMP 0x0049c68e
LAB_0049c658:
0049C658  66 8B 8B 74 02 00 00      MOV CX,word ptr [EBX + 0x274]
0049C65F  66 8B 93 72 02 00 00      MOV DX,word ptr [EBX + 0x272]
0049C666  66 8B 83 70 02 00 00      MOV AX,word ptr [EBX + 0x270]
0049C66D  51                        PUSH ECX
0049C66E  66 8B 8B 6E 02 00 00      MOV CX,word ptr [EBX + 0x26e]
0049C675  52                        PUSH EDX
0049C676  66 8B 93 6C 02 00 00      MOV DX,word ptr [EBX + 0x26c]
0049C67D  50                        PUSH EAX
0049C67E  66 8B 83 6A 02 00 00      MOV AX,word ptr [EBX + 0x26a]
0049C685  51                        PUSH ECX
0049C686  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049C689  52                        PUSH EDX
0049C68A  50                        PUSH EAX
0049C68B  6A 60                     PUSH 0x60
0049C68D  51                        PUSH ECX
LAB_0049c68e:
0049C68E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049C694  E8 DB 52 F6 FF            CALL 0x00401974
0049C699  8B F0                     MOV ESI,EAX
0049C69B  6A 01                     PUSH 0x1
0049C69D  6A 02                     PUSH 0x2
0049C69F  6A 00                     PUSH 0x0
0049C6A1  85 F6                     TEST ESI,ESI
0049C6A3  6A 00                     PUSH 0x0
0049C6A5  75 1E                     JNZ 0x0049c6c5
0049C6A7  E8 E4 1B 21 00            CALL 0x006ae290
0049C6AC  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049C6AF  89 83 66 02 00 00         MOV dword ptr [EBX + 0x266],EAX
0049C6B5  52                        PUSH EDX
0049C6B6  50                        PUSH EAX
0049C6B7  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
0049C6BE  E8 FD 1A 21 00            CALL 0x006ae1c0
0049C6C3  EB 5B                     JMP 0x0049c720
LAB_0049c6c5:
0049C6C5  E8 C6 1B 21 00            CALL 0x006ae290
0049C6CA  89 83 66 02 00 00         MOV dword ptr [EBX + 0x266],EAX
0049C6D0  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0049C6D3  33 FF                     XOR EDI,EDI
0049C6D5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0049C6D8  85 C0                     TEST EAX,EAX
0049C6DA  7E 3E                     JLE 0x0049c71a
LAB_0049c6dc:
0049C6DC  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049C6DF  8B D7                     MOV EDX,EDI
0049C6E1  50                        PUSH EAX
0049C6E2  8B CE                     MOV ECX,ESI
0049C6E4  E8 87 05 21 00            CALL 0x006acc70
0049C6E9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049C6EC  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049C6EF  6A 01                     PUSH 0x1
0049C6F1  51                        PUSH ECX
0049C6F2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049C6F8  52                        PUSH EDX
0049C6F9  E8 BC 61 F6 FF            CALL 0x004028ba
0049C6FE  85 C0                     TEST EAX,EAX
0049C700  74 10                     JZ 0x0049c712
0049C702  8B 8B 66 02 00 00         MOV ECX,dword ptr [EBX + 0x266]
0049C708  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049C70B  50                        PUSH EAX
0049C70C  51                        PUSH ECX
0049C70D  E8 AE 1A 21 00            CALL 0x006ae1c0
LAB_0049c712:
0049C712  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049C715  47                        INC EDI
0049C716  3B F8                     CMP EDI,EAX
0049C718  7C C2                     JL 0x0049c6dc
LAB_0049c71a:
0049C71A  56                        PUSH ESI
0049C71B  E8 F0 19 21 00            CALL 0x006ae110
LAB_0049c720:
0049C720  83 BB 62 02 00 00 01      CMP dword ptr [EBX + 0x262],0x1
0049C727  0F 85 BA 00 00 00         JNZ 0x0049c7e7
0049C72D  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049C730  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049C736  52                        PUSH EDX
0049C737  E8 7B 82 F6 FF            CALL 0x004049b7
0049C73C  3C 03                     CMP AL,0x3
0049C73E  6A FF                     PUSH -0x1
0049C740  6A 00                     PUSH 0x0
0049C742  74 08                     JZ 0x0049c74c
0049C744  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049C747  6A 3B                     PUSH 0x3b
0049C749  50                        PUSH EAX
0049C74A  EB 06                     JMP 0x0049c752
LAB_0049c74c:
0049C74C  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049C74F  6A 60                     PUSH 0x60
0049C751  51                        PUSH ECX
LAB_0049c752:
0049C752  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049C758  E8 B8 4C F6 FF            CALL 0x00401415
0049C75D  8B F0                     MOV ESI,EAX
0049C75F  6A 01                     PUSH 0x1
0049C761  6A 02                     PUSH 0x2
0049C763  6A 00                     PUSH 0x0
0049C765  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0049C768  6A 00                     PUSH 0x0
0049C76A  85 C0                     TEST EAX,EAX
0049C76C  75 1E                     JNZ 0x0049c78c
0049C76E  E8 1D 1B 21 00            CALL 0x006ae290
0049C773  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049C776  89 83 66 02 00 00         MOV dword ptr [EBX + 0x266],EAX
0049C77C  52                        PUSH EDX
0049C77D  50                        PUSH EAX
0049C77E  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
0049C785  E8 36 1A 21 00            CALL 0x006ae1c0
0049C78A  EB 55                     JMP 0x0049c7e1
LAB_0049c78c:
0049C78C  E8 FF 1A 21 00            CALL 0x006ae290
0049C791  89 83 66 02 00 00         MOV dword ptr [EBX + 0x266],EAX
0049C797  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0049C79A  33 FF                     XOR EDI,EDI
0049C79C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0049C79F  85 C0                     TEST EAX,EAX
0049C7A1  7E 3E                     JLE 0x0049c7e1
LAB_0049c7a3:
0049C7A3  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049C7A6  8B D7                     MOV EDX,EDI
0049C7A8  50                        PUSH EAX
0049C7A9  8B CE                     MOV ECX,ESI
0049C7AB  E8 C0 04 21 00            CALL 0x006acc70
0049C7B0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049C7B3  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049C7B6  6A 01                     PUSH 0x1
0049C7B8  51                        PUSH ECX
0049C7B9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049C7BF  52                        PUSH EDX
0049C7C0  E8 F5 60 F6 FF            CALL 0x004028ba
0049C7C5  85 C0                     TEST EAX,EAX
0049C7C7  74 10                     JZ 0x0049c7d9
0049C7C9  8B 8B 66 02 00 00         MOV ECX,dword ptr [EBX + 0x266]
0049C7CF  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049C7D2  50                        PUSH EAX
0049C7D3  51                        PUSH ECX
0049C7D4  E8 E7 19 21 00            CALL 0x006ae1c0
LAB_0049c7d9:
0049C7D9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049C7DC  47                        INC EDI
0049C7DD  3B F8                     CMP EDI,EAX
0049C7DF  7C C2                     JL 0x0049c7a3
LAB_0049c7e1:
0049C7E1  56                        PUSH ESI
0049C7E2  E8 29 19 21 00            CALL 0x006ae110
LAB_0049c7e7:
0049C7E7  8B 53 29                  MOV EDX,dword ptr [EBX + 0x29]
0049C7EA  8B 83 66 02 00 00         MOV EAX,dword ptr [EBX + 0x266]
0049C7F0  8B 8B 4E 02 00 00         MOV ECX,dword ptr [EBX + 0x24e]
0049C7F6  52                        PUSH EDX
0049C7F7  50                        PUSH EAX
0049C7F8  51                        PUSH ECX
0049C7F9  6A 01                     PUSH 0x1
0049C7FB  8B CB                     MOV ECX,EBX
0049C7FD  E8 3B 4C F6 FF            CALL 0x0040143d
LAB_0049c802:
0049C802  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0049C808  B9 64 00 00 00            MOV ECX,0x64
0049C80D  C7 45 E0 02 00 00 00      MOV dword ptr [EBP + -0x20],0x2
0049C814  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0049C81A  33 D2                     XOR EDX,EDX
0049C81C  F7 F1                     DIV ECX
0049C81E  85 D2                     TEST EDX,EDX
0049C820  0F 85 EE 01 00 00         JNZ 0x0049ca14
0049C826  8B 83 4A 02 00 00         MOV EAX,dword ptr [EBX + 0x24a]
0049C82C  85 C0                     TEST EAX,EAX
0049C82E  74 0E                     JZ 0x0049c83e
0049C830  8B 83 62 02 00 00         MOV EAX,dword ptr [EBX + 0x262]
0049C836  85 C0                     TEST EAX,EAX
0049C838  0F 85 D6 01 00 00         JNZ 0x0049ca14
LAB_0049c83e:
0049C83E  8B 53 29                  MOV EDX,dword ptr [EBX + 0x29]
0049C841  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0049C848  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0049C84B  85 C0                     TEST EAX,EAX
0049C84D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0049C850  0F 8E AD 01 00 00         JLE 0x0049ca03
LAB_0049c856:
0049C856  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0049C859  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049C85C  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049C85F  50                        PUSH EAX
0049C860  E8 0B 04 21 00            CALL 0x006acc70
0049C865  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049C868  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049C86B  6A 01                     PUSH 0x1
0049C86D  51                        PUSH ECX
0049C86E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049C874  52                        PUSH EDX
0049C875  E8 40 60 F6 FF            CALL 0x004028ba
0049C87A  8B F0                     MOV ESI,EAX
0049C87C  85 F6                     TEST ESI,ESI
0049C87E  0F 84 6D 01 00 00         JZ 0x0049c9f1
0049C884  8B CE                     MOV ECX,ESI
0049C886  E8 51 66 F6 FF            CALL 0x00402edc
0049C88B  83 F8 0C                  CMP EAX,0xc
0049C88E  0F 85 5D 01 00 00         JNZ 0x0049c9f1
0049C894  8B CE                     MOV ECX,ESI
0049C896  E8 E9 68 F6 FF            CALL 0x00403184
0049C89B  85 C0                     TEST EAX,EAX
0049C89D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0049C8A0  0F 84 4B 01 00 00         JZ 0x0049c9f1
0049C8A6  8D 85 04 FF FF FF         LEA EAX,[EBP + 0xffffff04]
0049C8AC  8B CE                     MOV ECX,ESI
0049C8AE  50                        PUSH EAX
0049C8AF  E8 19 5C F6 FF            CALL 0x004024cd
0049C8B4  B9 10 00 00 00            MOV ECX,0x10
0049C8B9  8B F0                     MOV ESI,EAX
0049C8BB  8D 7D 8C                  LEA EDI,[EBP + -0x74]
0049C8BE  F3 A5                     MOVSD.REP ES:EDI,ESI
0049C8C0  66 A5                     MOVSW ES:EDI,ESI
0049C8C2  8B 45 C6                  MOV EAX,dword ptr [EBP + -0x3a]
0049C8C5  83 F8 06                  CMP EAX,0x6
0049C8C8  0F 84 35 01 00 00         JZ 0x0049ca03
0049C8CE  83 F8 0E                  CMP EAX,0xe
0049C8D1  0F 84 2C 01 00 00         JZ 0x0049ca03
0049C8D7  83 7D E8 01               CMP dword ptr [EBP + -0x18],0x1
0049C8DB  0F 85 99 00 00 00         JNZ 0x0049c97a
0049C8E1  83 7D 92 FF               CMP dword ptr [EBP + -0x6e],-0x1
0049C8E5  0F 84 06 01 00 00         JZ 0x0049c9f1
0049C8EB  66 8B 55 8C               MOV DX,word ptr [EBP + -0x74]
0049C8EF  66 85 D2                  TEST DX,DX
0049C8F2  7C 58                     JL 0x0049c94c
0049C8F4  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
0049C8FB  66 3B D6                  CMP DX,SI
0049C8FE  7D 4C                     JGE 0x0049c94c
0049C900  66 8B 4D 8E               MOV CX,word ptr [EBP + -0x72]
0049C904  66 85 C9                  TEST CX,CX
0049C907  7C 43                     JL 0x0049c94c
0049C909  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0049C910  7D 3A                     JGE 0x0049c94c
0049C912  66 8B 45 90               MOV AX,word ptr [EBP + -0x70]
0049C916  66 85 C0                  TEST AX,AX
0049C919  7C 31                     JL 0x0049c94c
0049C91B  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0049C922  7D 28                     JGE 0x0049c94c
0049C924  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0049C92B  0F BF C0                  MOVSX EAX,AX
0049C92E  0F BF C9                  MOVSX ECX,CX
0049C931  0F AF C7                  IMUL EAX,EDI
0049C934  0F BF F6                  MOVSX ESI,SI
0049C937  0F AF CE                  IMUL ECX,ESI
0049C93A  0F BF D2                  MOVSX EDX,DX
0049C93D  03 C1                     ADD EAX,ECX
0049C93F  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0049C945  03 C2                     ADD EAX,EDX
0049C947  8B 0C C1                  MOV ECX,dword ptr [ECX + EAX*0x8]
0049C94A  EB 02                     JMP 0x0049c94e
LAB_0049c94c:
0049C94C  33 C9                     XOR ECX,ECX
LAB_0049c94e:
0049C94E  85 C9                     TEST ECX,ECX
0049C950  0F 84 9B 00 00 00         JZ 0x0049c9f1
0049C956  8B 55 92                  MOV EDX,dword ptr [EBP + -0x6e]
0049C959  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0049C95C  3B C2                     CMP EAX,EDX
0049C95E  0F 85 8D 00 00 00         JNZ 0x0049c9f1
0049C964  8B 01                     MOV EAX,dword ptr [ECX]
0049C966  8D 55 E8                  LEA EDX,[EBP + -0x18]
0049C969  52                        PUSH EDX
0049C96A  FF 90 88 00 00 00         CALL dword ptr [EAX + 0x88]
0049C970  85 C0                     TEST EAX,EAX
0049C972  0F 8F 8B 00 00 00         JG 0x0049ca03
0049C978  EB 77                     JMP 0x0049c9f1
LAB_0049c97a:
0049C97A  83 7D 9C FF               CMP dword ptr [EBP + -0x64],-0x1
0049C97E  74 71                     JZ 0x0049c9f1
0049C980  66 8B 55 96               MOV DX,word ptr [EBP + -0x6a]
0049C984  66 85 D2                  TEST DX,DX
0049C987  7C 58                     JL 0x0049c9e1
0049C989  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
0049C990  66 3B D6                  CMP DX,SI
0049C993  7D 4C                     JGE 0x0049c9e1
0049C995  66 8B 4D 98               MOV CX,word ptr [EBP + -0x68]
0049C999  66 85 C9                  TEST CX,CX
0049C99C  7C 43                     JL 0x0049c9e1
0049C99E  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0049C9A5  7D 3A                     JGE 0x0049c9e1
0049C9A7  66 8B 45 9A               MOV AX,word ptr [EBP + -0x66]
0049C9AB  66 85 C0                  TEST AX,AX
0049C9AE  7C 31                     JL 0x0049c9e1
0049C9B0  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0049C9B7  7D 28                     JGE 0x0049c9e1
0049C9B9  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0049C9C0  0F BF C0                  MOVSX EAX,AX
0049C9C3  0F BF C9                  MOVSX ECX,CX
0049C9C6  0F AF C7                  IMUL EAX,EDI
0049C9C9  0F BF F6                  MOVSX ESI,SI
0049C9CC  0F AF CE                  IMUL ECX,ESI
0049C9CF  0F BF D2                  MOVSX EDX,DX
0049C9D2  03 C1                     ADD EAX,ECX
0049C9D4  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0049C9DA  03 C2                     ADD EAX,EDX
0049C9DC  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
0049C9DF  EB 02                     JMP 0x0049c9e3
LAB_0049c9e1:
0049C9E1  33 C0                     XOR EAX,EAX
LAB_0049c9e3:
0049C9E3  85 C0                     TEST EAX,EAX
0049C9E5  74 0A                     JZ 0x0049c9f1
0049C9E7  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0049C9EA  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0049C9ED  3B CA                     CMP ECX,EDX
0049C9EF  74 12                     JZ 0x0049ca03
LAB_0049c9f1:
0049C9F1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049C9F4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0049C9F7  40                        INC EAX
0049C9F8  3B C1                     CMP EAX,ECX
0049C9FA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0049C9FD  0F 8C 53 FE FF FF         JL 0x0049c856
LAB_0049ca03:
0049CA03  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049CA06  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0049CA09  3B C8                     CMP ECX,EAX
0049CA0B  75 07                     JNZ 0x0049ca14
0049CA0D  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_0049ca14:
0049CA14  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
0049CA1A  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0049CA1D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049CA23  5F                        POP EDI
0049CA24  5E                        POP ESI
0049CA25  5B                        POP EBX
0049CA26  8B E5                     MOV ESP,EBP
0049CA28  5D                        POP EBP
0049CA29  C2 04 00                  RET 0x4
LAB_0049ca2c:
0049CA2C  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
0049CA32  81 FF 09 00 FE AF         CMP EDI,0xaffe0009
0049CA38  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049CA3E  75 66                     JNZ 0x0049caa6
0049CA40  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0049CA43  8B 87 0F 01 00 00         MOV EAX,dword ptr [EDI + 0x10f]
0049CA49  3B C6                     CMP EAX,ESI
0049CA4B  74 0C                     JZ 0x0049ca59
0049CA4D  50                        PUSH EAX
0049CA4E  E8 BD 16 21 00            CALL 0x006ae110
0049CA53  89 B7 0F 01 00 00         MOV dword ptr [EDI + 0x10f],ESI
LAB_0049ca59:
0049CA59  8B 87 27 01 00 00         MOV EAX,dword ptr [EDI + 0x127]
0049CA5F  3B C6                     CMP EAX,ESI
0049CA61  74 0C                     JZ 0x0049ca6f
0049CA63  50                        PUSH EAX
0049CA64  E8 A7 16 21 00            CALL 0x006ae110
0049CA69  89 B7 27 01 00 00         MOV dword ptr [EDI + 0x127],ESI
LAB_0049ca6f:
0049CA6F  8B 87 4E 02 00 00         MOV EAX,dword ptr [EDI + 0x24e]
0049CA75  3B C6                     CMP EAX,ESI
0049CA77  74 0C                     JZ 0x0049ca85
0049CA79  50                        PUSH EAX
0049CA7A  E8 91 16 21 00            CALL 0x006ae110
0049CA7F  89 B7 4E 02 00 00         MOV dword ptr [EDI + 0x24e],ESI
LAB_0049ca85:
0049CA85  8B 87 66 02 00 00         MOV EAX,dword ptr [EDI + 0x266]
0049CA8B  3B C6                     CMP EAX,ESI
0049CA8D  74 0C                     JZ 0x0049ca9b
0049CA8F  50                        PUSH EAX
0049CA90  E8 7B 16 21 00            CALL 0x006ae110
0049CA95  89 B7 66 02 00 00         MOV dword ptr [EDI + 0x266],ESI
LAB_0049ca9b:
0049CA9B  33 C0                     XOR EAX,EAX
0049CA9D  5F                        POP EDI
0049CA9E  5E                        POP ESI
0049CA9F  5B                        POP EBX
0049CAA0  8B E5                     MOV ESP,EBP
0049CAA2  5D                        POP EBP
0049CAA3  C2 04 00                  RET 0x4
LAB_0049caa6:
0049CAA6  68 C0 BF 7A 00            PUSH 0x7abfc0
0049CAAB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049CAB0  57                        PUSH EDI
0049CAB1  56                        PUSH ESI
0049CAB2  68 EE 08 00 00            PUSH 0x8ee
0049CAB7  68 3C BE 7A 00            PUSH 0x7abe3c
0049CABC  E8 0F 0A 21 00            CALL 0x006ad4d0
0049CAC1  83 C4 18                  ADD ESP,0x18
0049CAC4  85 C0                     TEST EAX,EAX
0049CAC6  74 01                     JZ 0x0049cac9
0049CAC8  CC                        INT3
LAB_0049cac9:
0049CAC9  68 EF 08 00 00            PUSH 0x8ef
0049CACE  68 3C BE 7A 00            PUSH 0x7abe3c
0049CAD3  56                        PUSH ESI
0049CAD4  57                        PUSH EDI
0049CAD5  E8 66 93 20 00            CALL 0x006a5e40
0049CADA  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0049CADD  5F                        POP EDI
0049CADE  5E                        POP ESI
0049CADF  5B                        POP EBX
0049CAE0  8B E5                     MOV ESP,EBP
0049CAE2  5D                        POP EBP
0049CAE3  C2 04 00                  RET 0x4
