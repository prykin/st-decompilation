FUN_006bc440:
006BC440  55                        PUSH EBP
006BC441  8B EC                     MOV EBP,ESP
006BC443  51                        PUSH ECX
006BC444  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006BC447  53                        PUSH EBX
006BC448  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006BC44B  56                        PUSH ESI
006BC44C  8B 81 E4 01 00 00         MOV EAX,dword ptr [ECX + 0x1e4]
006BC452  57                        PUSH EDI
006BC453  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006BC456  2B 9C C1 1C 01 00 00      SUB EBX,dword ptr [ECX + EAX*0x8 + 0x11c]
006BC45D  79 04                     JNS 0x006bc463
006BC45F  03 FB                     ADD EDI,EBX
006BC461  33 DB                     XOR EBX,EBX
LAB_006bc463:
006BC463  8B 84 C1 20 01 00 00      MOV EAX,dword ptr [ECX + EAX*0x8 + 0x120]
006BC46A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006BC46D  2B D0                     SUB EDX,EAX
006BC46F  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
006BC472  79 0F                     JNS 0x006bc483
006BC474  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006BC477  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
006BC47E  03 C3                     ADD EAX,EBX
006BC480  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006bc483:
006BC483  85 FF                     TEST EDI,EDI
006BC485  0F 8E D5 00 00 00         JLE 0x006bc560
006BC48B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006BC48E  85 C0                     TEST EAX,EAX
006BC490  0F 8E CA 00 00 00         JLE 0x006bc560
006BC496  8B B1 EC 01 00 00         MOV ESI,dword ptr [ECX + 0x1ec]
006BC49C  8B C3                     MOV EAX,EBX
006BC49E  99                        CDQ
006BC49F  F7 FE                     IDIV ESI
006BC4A1  03 D6                     ADD EDX,ESI
006BC4A3  8D 44 3A FF               LEA EAX,[EDX + EDI*0x1 + -0x1]
006BC4A7  8B B9 F0 01 00 00         MOV EDI,dword ptr [ECX + 0x1f0]
006BC4AD  99                        CDQ
006BC4AE  F7 FE                     IDIV ESI
006BC4B0  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006BC4B3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006BC4B6  99                        CDQ
006BC4B7  F7 FF                     IDIV EDI
006BC4B9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006BC4BC  03 D7                     ADD EDX,EDI
006BC4BE  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
006BC4C2  99                        CDQ
006BC4C3  F7 FF                     IDIV EDI
006BC4C5  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006BC4C8  8B C3                     MOV EAX,EBX
006BC4CA  99                        CDQ
006BC4CB  F7 FE                     IDIV ESI
006BC4CD  8B 99 F4 01 00 00         MOV EBX,dword ptr [ECX + 0x1f4]
006BC4D3  8B F0                     MOV ESI,EAX
006BC4D5  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006BC4D8  99                        CDQ
006BC4D9  F7 FF                     IDIV EDI
006BC4DB  8B D3                     MOV EDX,EBX
006BC4DD  8B B9 04 02 00 00         MOV EDI,dword ptr [ECX + 0x204]
006BC4E3  8B 89 1C 02 00 00         MOV ECX,dword ptr [ECX + 0x21c]
006BC4E9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BC4EC  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
006BC4F3  0F AF D0                  IMUL EDX,EAX
006BC4F6  03 FA                     ADD EDI,EDX
006BC4F8  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
006BC4FB  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006BC4FE  03 FE                     ADD EDI,ESI
006BC500  03 C6                     ADD EAX,ESI
006BC502  85 D2                     TEST EDX,EDX
006BC504  7E 5A                     JLE 0x006bc560
LAB_006bc506:
006BC506  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006BC509  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
006BC510  85 D2                     TEST EDX,EDX
006BC512  7E 3A                     JLE 0x006bc54e
006BC514  8B F7                     MOV ESI,EDI
006BC516  8B D0                     MOV EDX,EAX
006BC518  2B F0                     SUB ESI,EAX
006BC51A  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006BC51D  EB 03                     JMP 0x006bc522
LAB_006bc51f:
006BC51F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_006bc522:
006BC522  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
006BC526  74 06                     JZ 0x006bc52e
006BC528  80 3C 16 00               CMP byte ptr [ESI + EDX*0x1],0x0
006BC52C  74 10                     JZ 0x006bc53e
LAB_006bc52e:
006BC52E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006BC531  85 F6                     TEST ESI,ESI
006BC533  75 39                     JNZ 0x006bc56e
006BC535  85 C9                     TEST ECX,ECX
006BC537  74 35                     JZ 0x006bc56e
006BC539  80 3A 00                  CMP byte ptr [EDX],0x0
006BC53C  75 30                     JNZ 0x006bc56e
LAB_006bc53e:
006BC53E  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006BC541  46                        INC ESI
006BC542  42                        INC EDX
006BC543  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006BC546  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006BC549  39 75 10                  CMP dword ptr [EBP + 0x10],ESI
006BC54C  7C D1                     JL 0x006bc51f
LAB_006bc54e:
006BC54E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006BC551  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006BC554  03 FB                     ADD EDI,EBX
006BC556  03 C3                     ADD EAX,EBX
006BC558  42                        INC EDX
006BC559  3B D6                     CMP EDX,ESI
006BC55B  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
006BC55E  7C A6                     JL 0x006bc506
LAB_006bc560:
006BC560  5F                        POP EDI
006BC561  5E                        POP ESI
006BC562  B8 01 00 00 00            MOV EAX,0x1
006BC567  5B                        POP EBX
006BC568  8B E5                     MOV ESP,EBP
006BC56A  5D                        POP EBP
006BC56B  C2 18 00                  RET 0x18
LAB_006bc56e:
006BC56E  5F                        POP EDI
006BC56F  5E                        POP ESI
006BC570  33 C0                     XOR EAX,EAX
006BC572  5B                        POP EBX
006BC573  8B E5                     MOV ESP,EBP
006BC575  5D                        POP EBP
006BC576  C2 18 00                  RET 0x18
