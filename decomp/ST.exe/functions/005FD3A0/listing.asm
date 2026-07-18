FUN_005fd3a0:
005FD3A0  55                        PUSH EBP
005FD3A1  8B EC                     MOV EBP,ESP
005FD3A3  83 EC 0C                  SUB ESP,0xc
005FD3A6  53                        PUSH EBX
005FD3A7  56                        PUSH ESI
005FD3A8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005FD3AB  8B D9                     MOV EBX,ECX
005FD3AD  56                        PUSH ESI
005FD3AE  E8 0A 6B E0 FF            CALL 0x00403ebd
005FD3B3  3D FF FF 00 00            CMP EAX,0xffff
005FD3B8  75 08                     JNZ 0x005fd3c2
005FD3BA  5E                        POP ESI
005FD3BB  5B                        POP EBX
005FD3BC  8B E5                     MOV ESP,EBP
005FD3BE  5D                        POP EBP
005FD3BF  C2 04 00                  RET 0x4
LAB_005fd3c2:
005FD3C2  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005FD3C5  57                        PUSH EDI
005FD3C6  83 F8 03                  CMP EAX,0x3
005FD3C9  0F 87 3E 01 00 00         JA 0x005fd50d
005FD3CF  0F 84 26 01 00 00         JZ 0x005fd4fb
005FD3D5  83 E8 00                  SUB EAX,0x0
005FD3D8  0F 84 00 01 00 00         JZ 0x005fd4de
005FD3DE  83 E8 02                  SUB EAX,0x2
005FD3E1  0F 85 5C 01 00 00         JNZ 0x005fd543
005FD3E7  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005FD3EA  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
005FD3EE  0F 84 AA 00 00 00         JZ 0x005fd49e
005FD3F4  B9 0B 00 00 00            MOV ECX,0xb
005FD3F9  8D BB 06 02 00 00         LEA EDI,[EBX + 0x206]
005FD3FF  F3 A5                     MOVSD.REP ES:EDI,ESI
005FD401  A1 E4 65 7E 00            MOV EAX,[0x007e65e4]
005FD406  0F BF 8B 1E 02 00 00      MOVSX ECX,word ptr [EBX + 0x21e]
005FD40D  0F BF 93 1C 02 00 00      MOVSX EDX,word ptr [EBX + 0x21c]
005FD414  89 83 2A 02 00 00         MOV dword ptr [EBX + 0x22a],EAX
005FD41A  51                        PUSH ECX
005FD41B  0F BF 83 1A 02 00 00      MOVSX EAX,word ptr [EBX + 0x21a]
005FD422  52                        PUSH EDX
005FD423  50                        PUSH EAX
005FD424  8B CB                     MOV ECX,EBX
005FD426  E8 3D 47 E0 FF            CALL 0x00401b68
005FD42B  85 C0                     TEST EAX,EAX
005FD42D  74 07                     JZ 0x005fd436
005FD42F  C6 83 32 02 00 00 01      MOV byte ptr [EBX + 0x232],0x1
LAB_005fd436:
005FD436  8B CB                     MOV ECX,EBX
005FD438  E8 42 4E E0 FF            CALL 0x0040227f
005FD43D  85 C0                     TEST EAX,EAX
005FD43F  0F 8C A4 00 00 00         JL 0x005fd4e9
005FD445  8D 4D FC                  LEA ECX,[EBP + -0x4]
005FD448  8D 55 0A                  LEA EDX,[EBP + 0xa]
005FD44B  51                        PUSH ECX
005FD44C  8D 45 FE                  LEA EAX,[EBP + -0x2]
005FD44F  52                        PUSH EDX
005FD450  50                        PUSH EAX
005FD451  8B CB                     MOV ECX,EBX
005FD453  E8 6E 52 E0 FF            CALL 0x004026c6
005FD458  85 C0                     TEST EAX,EAX
005FD45A  8B CB                     MOV ECX,EBX
005FD45C  0F 84 89 00 00 00         JZ 0x005fd4eb
005FD462  E8 4A 8A E0 FF            CALL 0x00405eb1
005FD467  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
005FD46B  0F BF 55 0A               MOVSX EDX,word ptr [EBP + 0xa]
005FD46F  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
005FD473  51                        PUSH ECX
005FD474  52                        PUSH EDX
005FD475  50                        PUSH EAX
005FD476  8B CB                     MOV ECX,EBX
005FD478  E8 9A 65 E0 FF            CALL 0x00403a17
005FD47D  0F BF 4D 0A               MOVSX ECX,word ptr [EBP + 0xa]
005FD481  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
005FD485  68 5F 04 00 00            PUSH 0x45f
005FD48A  51                        PUSH ECX
005FD48B  52                        PUSH EDX
005FD48C  8B CB                     MOV ECX,EBX
005FD48E  E8 7D 71 E0 FF            CALL 0x00404610
005FD493  5F                        POP EDI
005FD494  5E                        POP ESI
005FD495  33 C0                     XOR EAX,EAX
005FD497  5B                        POP EBX
005FD498  8B E5                     MOV ESP,EBP
005FD49A  5D                        POP EBP
005FD49B  C2 04 00                  RET 0x4
LAB_005fd49e:
005FD49E  56                        PUSH ESI
005FD49F  8B CB                     MOV ECX,EBX
005FD4A1  E8 F2 7A E0 FF            CALL 0x00404f98
005FD4A6  85 C0                     TEST EAX,EAX
005FD4A8  0F 84 95 00 00 00         JZ 0x005fd543
005FD4AE  B9 0B 00 00 00            MOV ECX,0xb
005FD4B3  33 C0                     XOR EAX,EAX
005FD4B5  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
005FD4BB  F3 AB                     STOSD.REP ES:EDI
005FD4BD  AA                        STOSB ES:EDI
005FD4BE  8A 83 32 02 00 00         MOV AL,byte ptr [EBX + 0x232]
005FD4C4  84 C0                     TEST AL,AL
005FD4C6  74 7B                     JZ 0x005fd543
005FD4C8  6A FF                     PUSH -0x1
005FD4CA  6A 00                     PUSH 0x0
005FD4CC  8B CB                     MOV ECX,EBX
005FD4CE  E8 54 69 E0 FF            CALL 0x00403e27
005FD4D3  5F                        POP EDI
005FD4D4  5E                        POP ESI
005FD4D5  33 C0                     XOR EAX,EAX
005FD4D7  5B                        POP EBX
005FD4D8  8B E5                     MOV ESP,EBP
005FD4DA  5D                        POP EBP
005FD4DB  C2 04 00                  RET 0x4
LAB_005fd4de:
005FD4DE  8B CB                     MOV ECX,EBX
005FD4E0  E8 95 61 E0 FF            CALL 0x0040367a
005FD4E5  85 C0                     TEST EAX,EAX
005FD4E7  74 5A                     JZ 0x005fd543
LAB_005fd4e9:
005FD4E9  8B CB                     MOV ECX,EBX
LAB_005fd4eb:
005FD4EB  E8 20 67 E0 FF            CALL 0x00403c10
005FD4F0  5F                        POP EDI
005FD4F1  5E                        POP ESI
005FD4F2  33 C0                     XOR EAX,EAX
005FD4F4  5B                        POP EBX
005FD4F5  8B E5                     MOV ESP,EBP
005FD4F7  5D                        POP EBP
005FD4F8  C2 04 00                  RET 0x4
LAB_005fd4fb:
005FD4FB  8B CB                     MOV ECX,EBX
005FD4FD  E8 4D 87 E0 FF            CALL 0x00405c4f
005FD502  5F                        POP EDI
005FD503  5E                        POP ESI
005FD504  33 C0                     XOR EAX,EAX
005FD506  5B                        POP EBX
005FD507  8B E5                     MOV ESP,EBP
005FD509  5D                        POP EBP
005FD50A  C2 04 00                  RET 0x4
LAB_005fd50d:
005FD50D  3D 0F 01 00 00            CMP EAX,0x10f
005FD512  75 2F                     JNZ 0x005fd543
005FD514  8D 45 F8                  LEA EAX,[EBP + -0x8]
005FD517  8B CB                     MOV ECX,EBX
005FD519  50                        PUSH EAX
005FD51A  E8 42 5C E0 FF            CALL 0x00403161
005FD51F  85 C0                     TEST EAX,EAX
005FD521  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005FD524  74 1D                     JZ 0x005fd543
005FD526  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005FD529  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
005FD52C  51                        PUSH ECX
005FD52D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005FD533  50                        PUSH EAX
005FD534  52                        PUSH EDX
005FD535  E8 BF 50 E0 FF            CALL 0x004025f9
005FD53A  8D 45 F4                  LEA EAX,[EBP + -0xc]
005FD53D  50                        PUSH EAX
005FD53E  E8 1D DB 0A 00            CALL 0x006ab060
LAB_005fd543:
005FD543  5F                        POP EDI
005FD544  5E                        POP ESI
005FD545  33 C0                     XOR EAX,EAX
005FD547  5B                        POP EBX
005FD548  8B E5                     MOV ESP,EBP
005FD54A  5D                        POP EBP
005FD54B  C2 04 00                  RET 0x4
