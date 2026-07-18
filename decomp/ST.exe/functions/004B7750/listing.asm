FUN_004b7750:
004B7750  55                        PUSH EBP
004B7751  8B EC                     MOV EBP,ESP
004B7753  83 EC 24                  SUB ESP,0x24
004B7756  53                        PUSH EBX
004B7757  8B D9                     MOV EBX,ECX
004B7759  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B775C  56                        PUSH ESI
004B775D  0F BE C1                  MOVSX EAX,CL
004B7760  57                        PUSH EDI
004B7761  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004B7764  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004B7767  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
004B776A  8D 34 50                  LEA ESI,[EAX + EDX*0x2]
004B776D  C1 E6 04                  SHL ESI,0x4
004B7770  03 F0                     ADD ESI,EAX
004B7772  D1 E6                     SHL ESI,0x1
004B7774  8B 86 B2 57 7F 00         MOV EAX,dword ptr [ESI + 0x7f57b2]
004B777A  85 C0                     TEST EAX,EAX
004B777C  0F 84 3D 01 00 00         JZ 0x004b78bf
004B7782  51                        PUSH ECX
004B7783  8B CB                     MOV ECX,EBX
004B7785  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
004B778C  E8 4E C3 F4 FF            CALL 0x00403adf
004B7791  8B F8                     MOV EDI,EAX
004B7793  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B7796  50                        PUSH EAX
004B7797  8B CB                     MOV ECX,EBX
004B7799  E8 80 B1 F4 FF            CALL 0x0040291e
004B779E  3B C7                     CMP EAX,EDI
004B77A0  0F 8D 19 01 00 00         JGE 0x004b78bf
004B77A6  8B 8E 29 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4e29]
004B77AC  33 FF                     XOR EDI,EDI
004B77AE  3B CF                     CMP ECX,EDI
004B77B0  0F 84 09 01 00 00         JZ 0x004b78bf
004B77B6  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004B77B9  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004B77BC  3B C7                     CMP EAX,EDI
004B77BE  0F 86 FB 00 00 00         JBE 0x004b78bf
LAB_004b77c4:
004B77C4  8D 55 F8                  LEA EDX,[EBP + -0x8]
004B77C7  52                        PUSH EDX
004B77C8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004B77CB  E8 A0 54 1F 00            CALL 0x006acc70
004B77D0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B77D3  85 C9                     TEST ECX,ECX
004B77D5  0F 84 CC 00 00 00         JZ 0x004b78a7
004B77DB  8B 01                     MOV EAX,dword ptr [ECX]
004B77DD  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B77E0  83 F8 78                  CMP EAX,0x78
004B77E3  75 1D                     JNZ 0x004b7802
004B77E5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B77E8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B77EB  8B 81 59 02 00 00         MOV EAX,dword ptr [ECX + 0x259]
004B77F1  8B CB                     MOV ECX,EBX
004B77F3  50                        PUSH EAX
004B77F4  52                        PUSH EDX
004B77F5  E8 7D A8 F4 FF            CALL 0x00402077
004B77FA  85 C0                     TEST EAX,EAX
004B77FC  0F 84 A5 00 00 00         JZ 0x004b78a7
LAB_004b7802:
004B7802  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B7805  8B 01                     MOV EAX,dword ptr [ECX]
004B7807  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B780A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B780D  50                        PUSH EAX
004B780E  51                        PUSH ECX
004B780F  8B CB                     MOV ECX,EBX
004B7811  E8 81 B0 F4 FF            CALL 0x00402897
004B7816  85 C0                     TEST EAX,EAX
004B7818  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004B781B  0F 8E 86 00 00 00         JLE 0x004b78a7
004B7821  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B7824  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004B7827  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004B782A  8B 01                     MOV EAX,dword ptr [ECX]
004B782C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B782F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B7832  50                        PUSH EAX
004B7833  51                        PUSH ECX
004B7834  8B CB                     MOV ECX,EBX
004B7836  E8 8A D2 F4 FF            CALL 0x00404ac5
004B783B  8B 8E B2 57 7F 00         MOV ECX,dword ptr [ESI + 0x7f57b2]
004B7841  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004B7844  33 DB                     XOR EBX,EBX
004B7846  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004B7849  85 C0                     TEST EAX,EAX
004B784B  76 2F                     JBE 0x004b787c
LAB_004b784d:
004B784D  8D 55 DC                  LEA EDX,[EBP + -0x24]
004B7850  52                        PUSH EDX
004B7851  8B D3                     MOV EDX,EBX
004B7853  E8 18 54 1F 00            CALL 0x006acc70
004B7858  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004B785B  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004B785E  8B 8C 86 9A 57 7F 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x7f579a]
004B7865  8B 84 96 9A 57 7F 00      MOV EAX,dword ptr [ESI + EDX*0x4 + 0x7f579a]
004B786C  3B C8                     CMP ECX,EAX
004B786E  7F 5A                     JG 0x004b78ca
004B7870  8B 8E B2 57 7F 00         MOV ECX,dword ptr [ESI + 0x7f57b2]
004B7876  43                        INC EBX
004B7877  3B 59 0C                  CMP EBX,dword ptr [ECX + 0xc]
004B787A  72 D1                     JC 0x004b784d
LAB_004b787c:
004B787C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B787F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004B7882  50                        PUSH EAX
004B7883  E8 96 B0 F4 FF            CALL 0x0040291e
004B7888  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004B788B  03 CF                     ADD ECX,EDI
004B788D  3B C8                     CMP ECX,EAX
004B788F  7F 13                     JG 0x004b78a4
004B7891  8B 86 B2 57 7F 00         MOV EAX,dword ptr [ESI + 0x7f57b2]
004B7897  8D 55 E8                  LEA EDX,[EBP + -0x18]
004B789A  52                        PUSH EDX
004B789B  50                        PUSH EAX
004B789C  E8 1F 69 1F 00            CALL 0x006ae1c0
004B78A1  03 7D F0                  ADD EDI,dword ptr [EBP + -0x10]
LAB_004b78a4:
004B78A4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004b78a7:
004B78A7  8B 8E 29 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4e29]
004B78AD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004B78B0  40                        INC EAX
004B78B1  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
004B78B4  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004B78B7  3B C2                     CMP EAX,EDX
004B78B9  0F 82 05 FF FF FF         JC 0x004b77c4
LAB_004b78bf:
004B78BF  5F                        POP EDI
004B78C0  5E                        POP ESI
004B78C1  33 C0                     XOR EAX,EAX
004B78C3  5B                        POP EBX
004B78C4  8B E5                     MOV ESP,EBP
004B78C6  5D                        POP EBP
004B78C7  C2 04 00                  RET 0x4
LAB_004b78ca:
004B78CA  8B 8E B2 57 7F 00         MOV ECX,dword ptr [ESI + 0x7f57b2]
004B78D0  8D 45 E8                  LEA EAX,[EBP + -0x18]
004B78D3  50                        PUSH EAX
004B78D4  53                        PUSH EBX
004B78D5  51                        PUSH ECX
004B78D6  E8 F5 98 1F 00            CALL 0x006b11d0
004B78DB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B78DE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004B78E1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004B78E4  52                        PUSH EDX
004B78E5  03 F8                     ADD EDI,EAX
004B78E7  E8 32 B0 F4 FF            CALL 0x0040291e
004B78EC  3B F8                     CMP EDI,EAX
004B78EE  7E B4                     JLE 0x004b78a4
LAB_004b78f0:
004B78F0  8B 8E B2 57 7F 00         MOV ECX,dword ptr [ESI + 0x7f57b2]
004B78F6  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004B78F9  85 C0                     TEST EAX,EAX
004B78FB  74 A7                     JZ 0x004b78a4
004B78FD  8D 55 DC                  LEA EDX,[EBP + -0x24]
004B7900  52                        PUSH EDX
004B7901  8D 50 FF                  LEA EDX,[EAX + -0x1]
004B7904  E8 67 53 1F 00            CALL 0x006acc70
004B7909  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004B790C  2B F8                     SUB EDI,EAX
004B790E  8B 86 B2 57 7F 00         MOV EAX,dword ptr [ESI + 0x7f57b2]
004B7914  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004B7917  49                        DEC ECX
004B7918  51                        PUSH ECX
004B7919  50                        PUSH EAX
004B791A  E8 51 93 1F 00            CALL 0x006b0c70
004B791F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B7922  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004B7925  52                        PUSH EDX
004B7926  E8 F3 AF F4 FF            CALL 0x0040291e
004B792B  3B F8                     CMP EDI,EAX
004B792D  7F C1                     JG 0x004b78f0
004B792F  E9 70 FF FF FF            JMP 0x004b78a4
