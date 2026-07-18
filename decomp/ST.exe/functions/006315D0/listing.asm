FUN_006315d0:
006315D0  55                        PUSH EBP
006315D1  8B EC                     MOV EBP,ESP
006315D3  83 EC 20                  SUB ESP,0x20
006315D6  53                        PUSH EBX
006315D7  8B 59 38                  MOV EBX,dword ptr [ECX + 0x38]
006315DA  56                        PUSH ESI
006315DB  57                        PUSH EDI
006315DC  85 DB                     TEST EBX,EBX
006315DE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006315E1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006315E4  0F 84 FB 01 00 00         JZ 0x006317e5
006315EA  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
006315ED  85 C9                     TEST ECX,ECX
006315EF  0F 84 F0 01 00 00         JZ 0x006317e5
006315F5  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
006315FC  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
00631600  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
00631607  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0063160A  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0063160D  03 C7                     ADD EAX,EDI
0063160F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00631612  0F AF C2                  IMUL EAX,EDX
00631615  03 C7                     ADD EAX,EDI
00631617  83 FE 01                  CMP ESI,0x1
0063161A  75 0C                     JNZ 0x00631628
0063161C  80 3C 01 00               CMP byte ptr [ECX + EAX*0x1],0x0
00631620  0F 85 BF 01 00 00         JNZ 0x006317e5
00631626  EB 2A                     JMP 0x00631652
LAB_00631628:
00631628  83 FE 04                  CMP ESI,0x4
0063162B  0F 85 B4 01 00 00         JNZ 0x006317e5
00631631  03 D0                     ADD EDX,EAX
00631633  80 3C 01 00               CMP byte ptr [ECX + EAX*0x1],0x0
00631637  75 19                     JNZ 0x00631652
00631639  80 7C 01 01 00            CMP byte ptr [ECX + EAX*0x1 + 0x1],0x0
0063163E  75 12                     JNZ 0x00631652
00631640  80 3C 11 00               CMP byte ptr [ECX + EDX*0x1],0x0
00631644  75 0C                     JNZ 0x00631652
00631646  8A 44 11 01               MOV AL,byte ptr [ECX + EDX*0x1 + 0x1]
0063164A  84 C0                     TEST AL,AL
0063164C  0F 84 93 01 00 00         JZ 0x006317e5
LAB_00631652:
00631652  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00631655  33 DB                     XOR EBX,EBX
00631657  85 D2                     TEST EDX,EDX
00631659  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0063165C  0F 8E 83 01 00 00         JLE 0x006317e5
00631662  3B DA                     CMP EBX,EDX
LAB_00631664:
00631664  73 10                     JNC 0x00631676
00631666  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00631669  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0063166C  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
0063166F  0F AF C3                  IMUL EAX,EBX
00631672  03 C6                     ADD EAX,ESI
00631674  EB 02                     JMP 0x00631678
LAB_00631676:
00631676  33 C0                     XOR EAX,EAX
LAB_00631678:
00631678  66 83 78 06 01            CMP word ptr [EAX + 0x6],0x1
0063167D  0F BF 08                  MOVSX ECX,word ptr [EAX]
00631680  75 18                     JNZ 0x0063169a
00631682  3B CF                     CMP ECX,EDI
00631684  75 7B                     JNZ 0x00631701
00631686  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
0063168A  3B 4D 0C                  CMP ECX,dword ptr [EBP + 0xc]
0063168D  75 72                     JNZ 0x00631701
0063168F  0F BF 40 04               MOVSX EAX,word ptr [EAX + 0x4]
00631693  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
00631696  74 7B                     JZ 0x00631713
00631698  EB 67                     JMP 0x00631701
LAB_0063169a:
0063169A  3B CF                     CMP ECX,EDI
0063169C  75 12                     JNZ 0x006316b0
0063169E  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
006316A2  3B 55 0C                  CMP EDX,dword ptr [EBP + 0xc]
006316A5  75 09                     JNZ 0x006316b0
006316A7  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
006316AB  3B 55 10                  CMP EDX,dword ptr [EBP + 0x10]
006316AE  74 63                     JZ 0x00631713
LAB_006316b0:
006316B0  8D 51 01                  LEA EDX,[ECX + 0x1]
006316B3  3B D7                     CMP EDX,EDI
006316B5  75 15                     JNZ 0x006316cc
006316B7  0F BF 70 02               MOVSX ESI,word ptr [EAX + 0x2]
006316BB  3B 75 0C                  CMP ESI,dword ptr [EBP + 0xc]
006316BE  75 09                     JNZ 0x006316c9
006316C0  0F BF 70 04               MOVSX ESI,word ptr [EAX + 0x4]
006316C4  3B 75 10                  CMP ESI,dword ptr [EBP + 0x10]
006316C7  74 4A                     JZ 0x00631713
LAB_006316c9:
006316C9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006316cc:
006316CC  3B CF                     CMP ECX,EDI
006316CE  75 15                     JNZ 0x006316e5
006316D0  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
006316D4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006316D7  41                        INC ECX
006316D8  3B CE                     CMP ECX,ESI
006316DA  75 09                     JNZ 0x006316e5
006316DC  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
006316E0  3B 4D 10                  CMP ECX,dword ptr [EBP + 0x10]
006316E3  74 2E                     JZ 0x00631713
LAB_006316e5:
006316E5  3B D7                     CMP EDX,EDI
006316E7  75 15                     JNZ 0x006316fe
006316E9  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
006316ED  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006316F0  42                        INC EDX
006316F1  3B D1                     CMP EDX,ECX
006316F3  75 09                     JNZ 0x006316fe
006316F5  0F BF 40 04               MOVSX EAX,word ptr [EAX + 0x4]
006316F9  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
006316FC  74 15                     JZ 0x00631713
LAB_006316fe:
006316FE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
LAB_00631701:
00631701  43                        INC EBX
00631702  3B DA                     CMP EBX,EDX
00631704  0F 8C 5A FF FF FF         JL 0x00631664
0063170A  5F                        POP EDI
0063170B  5E                        POP ESI
0063170C  5B                        POP EBX
0063170D  8B E5                     MOV ESP,EBP
0063170F  5D                        POP EBP
00631710  C2 10 00                  RET 0x10
LAB_00631713:
00631713  85 DB                     TEST EBX,EBX
00631715  0F 8C CA 00 00 00         JL 0x006317e5
0063171B  3B 5D 14                  CMP EBX,dword ptr [EBP + 0x14]
0063171E  73 10                     JNC 0x00631730
00631720  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00631723  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00631726  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00631729  0F AF C3                  IMUL EAX,EBX
0063172C  03 C2                     ADD EAX,EDX
0063172E  EB 02                     JMP 0x00631732
LAB_00631730:
00631730  33 C0                     XOR EAX,EAX
LAB_00631732:
00631732  B9 06 00 00 00            MOV ECX,0x6
00631737  8B F0                     MOV ESI,EAX
00631739  8D 7D E0                  LEA EDI,[EBP + -0x20]
0063173C  F3 A5                     MOVSD.REP ES:EDI,ESI
0063173E  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00631741  51                        PUSH ECX
00631742  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00631748  E8 83 7A 0B 00            CALL 0x006e91d0
0063174D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00631750  53                        PUSH EBX
00631751  8B CE                     MOV ECX,ESI
00631753  E8 C2 2E DD FF            CALL 0x0040461a
00631758  85 C0                     TEST EAX,EAX
0063175A  0F 84 85 00 00 00         JZ 0x006317e5
00631760  0F BF 45 E6               MOVSX EAX,word ptr [EBP + -0x1a]
00631764  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00631767  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0063176A  52                        PUSH EDX
0063176B  50                        PUSH EAX
0063176C  0F BF 55 E4               MOVSX EDX,word ptr [EBP + -0x1c]
00631770  0F BF 45 E2               MOVSX EAX,word ptr [EBP + -0x1e]
00631774  51                        PUSH ECX
00631775  52                        PUSH EDX
00631776  0F BF 4D E0               MOVSX ECX,word ptr [EBP + -0x20]
0063177A  50                        PUSH EAX
0063177B  51                        PUSH ECX
0063177C  8B CE                     MOV ECX,ESI
0063177E  E8 D4 05 DD FF            CALL 0x00401d57
00631783  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
00631786  C7 46 44 01 00 00 00      MOV dword ptr [ESI + 0x44],0x1
0063178D  85 C0                     TEST EAX,EAX
0063178F  74 19                     JZ 0x006317aa
00631791  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
00631794  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
00631797  6A 00                     PUSH 0x0
00631799  6A 01                     PUSH 0x1
0063179B  6A 01                     PUSH 0x1
0063179D  52                        PUSH EDX
0063179E  50                        PUSH EAX
0063179F  8B CE                     MOV ECX,ESI
006317A1  E8 F9 44 DD FF            CALL 0x00405c9f
006317A6  85 C0                     TEST EAX,EAX
006317A8  74 07                     JZ 0x006317b1
LAB_006317aa:
006317AA  C7 46 44 02 00 00 00      MOV dword ptr [ESI + 0x44],0x2
LAB_006317b1:
006317B1  8B 4E 61                  MOV ECX,dword ptr [ESI + 0x61]
006317B4  8D 56 40                  LEA EDX,[ESI + 0x40]
006317B7  51                        PUSH ECX
006317B8  52                        PUSH EDX
006317B9  8B CE                     MOV ECX,ESI
006317BB  E8 0A 47 DD FF            CALL 0x00405eca
006317C0  85 C0                     TEST EAX,EAX
006317C2  75 1A                     JNZ 0x006317de
006317C4  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
006317C7  85 C0                     TEST EAX,EAX
006317C9  74 13                     JZ 0x006317de
006317CB  8B 46 61                  MOV EAX,dword ptr [ESI + 0x61]
006317CE  85 C0                     TEST EAX,EAX
006317D0  74 0C                     JZ 0x006317de
006317D2  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006317D8  50                        PUSH EAX
006317D9  E8 C2 73 0B 00            CALL 0x006e8ba0
LAB_006317de:
006317DE  C7 46 61 FF FF FF FF      MOV dword ptr [ESI + 0x61],0xffffffff
LAB_006317e5:
006317E5  5F                        POP EDI
006317E6  5E                        POP ESI
006317E7  5B                        POP EBX
006317E8  8B E5                     MOV ESP,EBP
006317EA  5D                        POP EBP
006317EB  C2 10 00                  RET 0x10
