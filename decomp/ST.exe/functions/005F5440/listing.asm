FUN_005f5440:
005F5440  55                        PUSH EBP
005F5441  8B EC                     MOV EBP,ESP
005F5443  83 EC 18                  SUB ESP,0x18
005F5446  8B 81 69 01 00 00         MOV EAX,dword ptr [ECX + 0x169]
005F544C  57                        PUSH EDI
005F544D  85 C0                     TEST EAX,EAX
005F544F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005F5452  0F 84 0C 02 00 00         JZ 0x005f5664
005F5458  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
005F545B  33 D2                     XOR EDX,EDX
005F545D  85 FF                     TEST EDI,EDI
005F545F  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005F5462  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005F5465  0F 8E F9 01 00 00         JLE 0x005f5664
005F546B  53                        PUSH EBX
005F546C  56                        PUSH ESI
LAB_005f546d:
005F546D  8B 81 69 01 00 00         MOV EAX,dword ptr [ECX + 0x169]
005F5473  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
005F5476  0F 83 DA 01 00 00         JNC 0x005f5656
005F547C  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005F547F  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
005F5482  0F AF F2                  IMUL ESI,EDX
005F5485  03 F3                     ADD ESI,EBX
005F5487  85 F6                     TEST ESI,ESI
005F5489  0F 84 C7 01 00 00         JZ 0x005f5656
005F548F  80 3E 01                  CMP byte ptr [ESI],0x1
005F5492  0F 85 BE 01 00 00         JNZ 0x005f5656
005F5498  83 7E 1F FF               CMP dword ptr [ESI + 0x1f],-0x1
005F549C  75 0C                     JNZ 0x005f54aa
005F549E  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
005F54A1  6A 00                     PUSH 0x0
005F54A3  50                        PUSH EAX
005F54A4  56                        PUSH ESI
005F54A5  E8 9D DD E0 FF            CALL 0x00403247
LAB_005f54aa:
005F54AA  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
005F54B0  85 FF                     TEST EDI,EDI
005F54B2  0F 84 32 01 00 00         JZ 0x005f55ea
005F54B8  8B 4E 0A                  MOV ECX,dword ptr [ESI + 0xa]
005F54BB  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F54C0  85 C9                     TEST ECX,ECX
005F54C2  7C 14                     JL 0x005f54d8
005F54C4  F7 E9                     IMUL ECX
005F54C6  C1 FA 06                  SAR EDX,0x6
005F54C9  8B CA                     MOV ECX,EDX
005F54CB  C1 E9 1F                  SHR ECX,0x1f
005F54CE  03 D1                     ADD EDX,ECX
005F54D0  0F BF D2                  MOVSX EDX,DX
005F54D3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005F54D6  EB 13                     JMP 0x005f54eb
LAB_005f54d8:
005F54D8  F7 E9                     IMUL ECX
005F54DA  C1 FA 06                  SAR EDX,0x6
005F54DD  8B C2                     MOV EAX,EDX
005F54DF  C1 E8 1F                  SHR EAX,0x1f
005F54E2  03 D0                     ADD EDX,EAX
005F54E4  0F BF C2                  MOVSX EAX,DX
005F54E7  48                        DEC EAX
005F54E8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_005f54eb:
005F54EB  8B 4E 06                  MOV ECX,dword ptr [ESI + 0x6]
005F54EE  B8 79 19 8C 02            MOV EAX,0x28c1979
005F54F3  85 C9                     TEST ECX,ECX
005F54F5  7C 10                     JL 0x005f5507
005F54F7  F7 E9                     IMUL ECX
005F54F9  D1 FA                     SAR EDX,0x1
005F54FB  8B CA                     MOV ECX,EDX
005F54FD  C1 E9 1F                  SHR ECX,0x1f
005F5500  03 D1                     ADD EDX,ECX
005F5502  0F BF DA                  MOVSX EBX,DX
005F5505  EB 0F                     JMP 0x005f5516
LAB_005f5507:
005F5507  F7 E9                     IMUL ECX
005F5509  D1 FA                     SAR EDX,0x1
005F550B  8B C2                     MOV EAX,EDX
005F550D  C1 E8 1F                  SHR EAX,0x1f
005F5510  03 D0                     ADD EDX,EAX
005F5512  0F BF DA                  MOVSX EBX,DX
005F5515  4B                        DEC EBX
LAB_005f5516:
005F5516  8B 4E 02                  MOV ECX,dword ptr [ESI + 0x2]
005F5519  B8 79 19 8C 02            MOV EAX,0x28c1979
005F551E  85 C9                     TEST ECX,ECX
005F5520  7C 10                     JL 0x005f5532
005F5522  F7 E9                     IMUL ECX
005F5524  D1 FA                     SAR EDX,0x1
005F5526  8B CA                     MOV ECX,EDX
005F5528  C1 E9 1F                  SHR ECX,0x1f
005F552B  03 D1                     ADD EDX,ECX
005F552D  0F BF C2                  MOVSX EAX,DX
005F5530  EB 0F                     JMP 0x005f5541
LAB_005f5532:
005F5532  F7 E9                     IMUL ECX
005F5534  D1 FA                     SAR EDX,0x1
005F5536  8B C2                     MOV EAX,EDX
005F5538  C1 E8 1F                  SHR EAX,0x1f
005F553B  03 D0                     ADD EDX,EAX
005F553D  0F BF C2                  MOVSX EAX,DX
005F5540  48                        DEC EAX
LAB_005f5541:
005F5541  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
005F5548  74 68                     JZ 0x005f55b2
005F554A  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
005F5550  85 C9                     TEST ECX,ECX
005F5552  74 5E                     JZ 0x005f55b2
005F5554  8D 4D F0                  LEA ECX,[EBP + -0x10]
005F5557  8D 55 F4                  LEA EDX,[EBP + -0xc]
005F555A  51                        PUSH ECX
005F555B  52                        PUSH EDX
005F555C  53                        PUSH EBX
005F555D  50                        PUSH EAX
005F555E  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
005F5564  8B CF                     MOV ECX,EDI
005F5566  50                        PUSH EAX
005F5567  E8 E7 E9 E0 FF            CALL 0x00403f53
005F556C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F556F  85 C0                     TEST EAX,EAX
005F5571  7C 3F                     JL 0x005f55b2
005F5573  83 F8 05                  CMP EAX,0x5
005F5576  7D 3A                     JGE 0x005f55b2
005F5578  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005F557B  85 D2                     TEST EDX,EDX
005F557D  7C 33                     JL 0x005f55b2
005F557F  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
005F5582  3B D1                     CMP EDX,ECX
005F5584  7D 2C                     JGE 0x005f55b2
005F5586  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
005F558D  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005F5590  03 C3                     ADD EAX,EBX
005F5592  85 C0                     TEST EAX,EAX
005F5594  7C 1C                     JL 0x005f55b2
005F5596  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
005F5599  7D 17                     JGE 0x005f55b2
005F559B  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
005F559E  85 FF                     TEST EDI,EDI
005F55A0  74 10                     JZ 0x005f55b2
005F55A2  0F AF C1                  IMUL EAX,ECX
005F55A5  03 C7                     ADD EAX,EDI
005F55A7  33 C9                     XOR ECX,ECX
005F55A9  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
005F55AC  8B C1                     MOV EAX,ECX
005F55AE  85 C0                     TEST EAX,EAX
005F55B0  74 1E                     JZ 0x005f55d0
LAB_005f55b2:
005F55B2  8A 46 1E                  MOV AL,byte ptr [ESI + 0x1e]
005F55B5  84 C0                     TEST AL,AL
005F55B7  75 31                     JNZ 0x005f55ea
005F55B9  8B 56 1F                  MOV EDX,dword ptr [ESI + 0x1f]
005F55BC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F55C2  6A 00                     PUSH 0x0
005F55C4  52                        PUSH EDX
005F55C5  E8 D6 54 0F 00            CALL 0x006eaaa0
005F55CA  C6 46 1E 01               MOV byte ptr [ESI + 0x1e],0x1
005F55CE  EB 1A                     JMP 0x005f55ea
LAB_005f55d0:
005F55D0  8A 46 1E                  MOV AL,byte ptr [ESI + 0x1e]
005F55D3  84 C0                     TEST AL,AL
005F55D5  74 13                     JZ 0x005f55ea
005F55D7  8B 46 1F                  MOV EAX,dword ptr [ESI + 0x1f]
005F55DA  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F55E0  50                        PUSH EAX
005F55E1  E8 7A 55 0F 00            CALL 0x006eab60
005F55E6  C6 46 1E 00               MOV byte ptr [ESI + 0x1e],0x0
LAB_005f55ea:
005F55EA  8B 4E 0E                  MOV ECX,dword ptr [ESI + 0xe]
005F55ED  8B 56 1F                  MOV EDX,dword ptr [ESI + 0x1f]
005F55F0  51                        PUSH ECX
005F55F1  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F55F7  6A 00                     PUSH 0x0
005F55F9  52                        PUSH EDX
005F55FA  E8 71 4C 0F 00            CALL 0x006ea270
005F55FF  DB 46 0A                  FILD dword ptr [ESI + 0xa]
005F5602  51                        PUSH ECX
005F5603  8B 46 1F                  MOV EAX,dword ptr [ESI + 0x1f]
005F5606  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F560C  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F5612  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005F5618  D9 1C 24                  FSTP float ptr [ESP]
005F561B  DB 46 06                  FILD dword ptr [ESI + 0x6]
005F561E  51                        PUSH ECX
005F561F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F5625  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F562B  D9 1C 24                  FSTP float ptr [ESP]
005F562E  DB 46 02                  FILD dword ptr [ESI + 0x2]
005F5631  51                        PUSH ECX
005F5632  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F5638  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F563E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F5644  D9 1C 24                  FSTP float ptr [ESP]
005F5647  50                        PUSH EAX
005F5648  E8 13 53 0F 00            CALL 0x006ea960
005F564D  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
005F5650  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005F5653  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_005f5656:
005F5656  42                        INC EDX
005F5657  3B D7                     CMP EDX,EDI
005F5659  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005F565C  0F 8C 0B FE FF FF         JL 0x005f546d
005F5662  5E                        POP ESI
005F5663  5B                        POP EBX
LAB_005f5664:
005F5664  5F                        POP EDI
005F5665  8B E5                     MOV ESP,EBP
005F5667  5D                        POP EBP
005F5668  C3                        RET
