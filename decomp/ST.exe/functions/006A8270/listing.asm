FUN_006a8270:
006A8270  55                        PUSH EBP
006A8271  8B EC                     MOV EBP,ESP
006A8273  83 EC 30                  SUB ESP,0x30
006A8276  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006A8279  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006A827C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A827F  53                        PUSH EBX
006A8280  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006A8283  56                        PUSH ESI
006A8284  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A8287  57                        PUSH EDI
006A8288  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006A828E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A8291  51                        PUSH ECX
006A8292  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A8295  52                        PUSH EDX
006A8296  50                        PUSH EAX
006A8297  51                        PUSH ECX
006A8298  53                        PUSH EBX
006A8299  56                        PUSH ESI
006A829A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006A82A1  E8 2A 2B 00 00            CALL 0x006aadd0
006A82A6  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006A82A9  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006A82AC  3B C1                     CMP EAX,ECX
006A82AE  0F 8E 37 01 00 00         JLE 0x006a83eb
006A82B4  85 F6                     TEST ESI,ESI
006A82B6  0F 8C 2F 01 00 00         JL 0x006a83eb
006A82BC  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A82BF  3B F7                     CMP ESI,EDI
006A82C1  0F 8D 24 01 00 00         JGE 0x006a83eb
006A82C7  85 DB                     TEST EBX,EBX
006A82C9  0F 8C 1C 01 00 00         JL 0x006a83eb
006A82CF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A82D2  3B DA                     CMP EBX,EDX
006A82D4  0F 8D 11 01 00 00         JGE 0x006a83eb
006A82DA  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A82DD  85 C0                     TEST EAX,EAX
006A82DF  0F 8C 06 01 00 00         JL 0x006a83eb
006A82E5  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A82E8  3B C6                     CMP EAX,ESI
006A82EA  0F 8D FB 00 00 00         JGE 0x006a83eb
006A82F0  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A82F3  85 C0                     TEST EAX,EAX
006A82F5  0F 8C F0 00 00 00         JL 0x006a83eb
006A82FB  3B C7                     CMP EAX,EDI
006A82FD  0F 8D E8 00 00 00         JGE 0x006a83eb
006A8303  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A8306  85 C9                     TEST ECX,ECX
006A8308  0F 8C DD 00 00 00         JL 0x006a83eb
006A830E  3B CA                     CMP ECX,EDX
006A8310  0F 8D D5 00 00 00         JGE 0x006a83eb
006A8316  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A8319  85 C0                     TEST EAX,EAX
006A831B  0F 8C CA 00 00 00         JL 0x006a83eb
006A8321  3B C6                     CMP EAX,ESI
006A8323  0F 8D C2 00 00 00         JGE 0x006a83eb
006A8329  8B DF                     MOV EBX,EDI
006A832B  0F AF DA                  IMUL EBX,EDX
006A832E  8B F3                     MOV ESI,EBX
006A8330  8B D7                     MOV EDX,EDI
006A8332  0F AF F0                  IMUL ESI,EAX
006A8335  0F AF D1                  IMUL EDX,ECX
006A8338  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A833B  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006A833E  03 CE                     ADD ECX,ESI
006A8340  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A8343  03 D1                     ADD EDX,ECX
006A8345  8D 0C 56                  LEA ECX,[ESI + EDX*0x2]
006A8348  0F BF 14 56               MOVSX EDX,word ptr [ESI + EDX*0x2]
006A834C  83 FA FD                  CMP EDX,-0x3
006A834F  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006A8352  75 08                     JNZ 0x006a835c
006A8354  66 C7 01 00 00            MOV word ptr [ECX],0x0
006A8359  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
LAB_006a835c:
006A835C  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006A835F  F6 C1 02                  TEST CL,0x2
006A8362  74 47                     JZ 0x006a83ab
006A8364  83 E1 FE                  AND ECX,0xfffffffe
006A8367  8D 55 FC                  LEA EDX,[EBP + -0x4]
006A836A  51                        PUSH ECX
006A836B  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006A836E  6A 00                     PUSH 0x0
006A8370  6A 00                     PUSH 0x0
006A8372  52                        PUSH EDX
006A8373  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A8376  51                        PUSH ECX
006A8377  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A837A  50                        PUSH EAX
006A837B  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A837E  52                        PUSH EDX
006A837F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A8382  50                        PUSH EAX
006A8383  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A8386  51                        PUSH ECX
006A8387  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A838A  52                        PUSH EDX
006A838B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A838E  50                        PUSH EAX
006A838F  51                        PUSH ECX
006A8390  52                        PUSH EDX
006A8391  57                        PUSH EDI
006A8392  56                        PUSH ESI
006A8393  E8 F8 0D 00 00            CALL 0x006a9190
006A8398  8B D8                     MOV EBX,EAX
006A839A  85 DB                     TEST EBX,EBX
006A839C  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006A839F  0F 85 15 02 00 00         JNZ 0x006a85ba
006A83A5  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A83A8  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006a83ab:
006A83AB  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A83AE  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A83B1  50                        PUSH EAX
006A83B2  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A83B5  50                        PUSH EAX
006A83B6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A83B9  51                        PUSH ECX
006A83BA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A83BD  52                        PUSH EDX
006A83BE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A83C1  50                        PUSH EAX
006A83C2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A83C5  51                        PUSH ECX
006A83C6  52                        PUSH EDX
006A83C7  50                        PUSH EAX
006A83C8  57                        PUSH EDI
006A83C9  56                        PUSH ESI
006A83CA  E8 F1 0A 02 00            CALL 0x006c8ec0
006A83CF  85 C0                     TEST EAX,EAX
006A83D1  74 23                     JZ 0x006a83f6
006A83D3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006A83D9  68 D2 05 00 00            PUSH 0x5d2
006A83DE  68 18 D7 7E 00            PUSH 0x7ed718
006A83E3  51                        PUSH ECX
006A83E4  6A FE                     PUSH -0x2
006A83E6  E8 55 DA FF FF            CALL 0x006a5e40
LAB_006a83eb:
006A83EB  5F                        POP EDI
006A83EC  5E                        POP ESI
006A83ED  33 C0                     XOR EAX,EAX
006A83EF  5B                        POP EBX
006A83F0  8B E5                     MOV ESP,EBP
006A83F2  5D                        POP EBP
006A83F3  C2 34 00                  RET 0x34
LAB_006a83f6:
006A83F6  0F AF 5D 2C               IMUL EBX,dword ptr [EBP + 0x2c]
006A83FA  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A83FD  8B D7                     MOV EDX,EDI
006A83FF  0F AF 55 28               IMUL EDX,dword ptr [EBP + 0x28]
006A8403  8B C1                     MOV EAX,ECX
006A8405  03 C3                     ADD EAX,EBX
006A8407  03 D0                     ADD EDX,EAX
006A8409  0F BF 04 56               MOVSX EAX,word ptr [ESI + EDX*0x2]
006A840D  85 C0                     TEST EAX,EAX
006A840F  7C 0C                     JL 0x006a841d
006A8411  0F 85 AC 00 00 00         JNZ 0x006a84c3
006A8417  83 7D D0 FD               CMP dword ptr [EBP + -0x30],-0x3
006A841B  74 CE                     JZ 0x006a83eb
LAB_006a841d:
006A841D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A8420  8B C1                     MOV EAX,ECX
006A8422  2B C2                     SUB EAX,EDX
006A8424  99                        CDQ
006A8425  8B D8                     MOV EBX,EAX
006A8427  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A842A  33 DA                     XOR EBX,EDX
006A842C  2B DA                     SUB EBX,EDX
006A842E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A8431  2B C2                     SUB EAX,EDX
006A8433  99                        CDQ
006A8434  33 C2                     XOR EAX,EDX
006A8436  2B C2                     SUB EAX,EDX
006A8438  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A843B  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006A843E  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A8441  2B C2                     SUB EAX,EDX
006A8443  99                        CDQ
006A8444  33 C2                     XOR EAX,EDX
006A8446  2B C2                     SUB EAX,EDX
006A8448  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A844B  3B DA                     CMP EBX,EDX
006A844D  7C 08                     JL 0x006a8457
006A844F  3B D8                     CMP EBX,EAX
006A8451  7C 0A                     JL 0x006a845d
006A8453  8B C3                     MOV EAX,EBX
006A8455  EB 06                     JMP 0x006a845d
LAB_006a8457:
006A8457  3B D0                     CMP EDX,EAX
006A8459  7C 02                     JL 0x006a845d
006A845B  8B C2                     MOV EAX,EDX
LAB_006a845d:
006A845D  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A8460  8D 5D 2C                  LEA EBX,[EBP + 0x2c]
006A8463  53                        PUSH EBX
006A8464  8D 5D 28                  LEA EBX,[EBP + 0x28]
006A8467  53                        PUSH EBX
006A8468  8D 5D 24                  LEA EBX,[EBP + 0x24]
006A846B  53                        PUSH EBX
006A846C  50                        PUSH EAX
006A846D  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006A8470  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006A8473  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A8476  50                        PUSH EAX
006A8477  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A847A  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006A847D  52                        PUSH EDX
006A847E  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A8481  52                        PUSH EDX
006A8482  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006A8485  51                        PUSH ECX
006A8486  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A8489  50                        PUSH EAX
006A848A  51                        PUSH ECX
006A848B  57                        PUSH EDI
006A848C  56                        PUSH ESI
006A848D  E8 3E F2 FF FF            CALL 0x006a76d0
006A8492  85 C0                     TEST EAX,EAX
006A8494  0F 84 51 FF FF FF         JZ 0x006a83eb
006A849A  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A849D  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006A84A0  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A84A3  52                        PUSH EDX
006A84A4  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A84A7  50                        PUSH EAX
006A84A8  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A84AB  51                        PUSH ECX
006A84AC  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A84AF  52                        PUSH EDX
006A84B0  50                        PUSH EAX
006A84B1  51                        PUSH ECX
006A84B2  E8 19 29 00 00            CALL 0x006aadd0
006A84B7  3B 45 DC                  CMP EAX,dword ptr [EBP + -0x24]
006A84BA  0F 8D 2B FF FF FF         JGE 0x006a83eb
006A84C0  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
LAB_006a84c3:
006A84C3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A84C6  8B C7                     MOV EAX,EDI
006A84C8  0F AF 55 20               IMUL EDX,dword ptr [EBP + 0x20]
006A84CC  0F AF 45 1C               IMUL EAX,dword ptr [EBP + 0x1c]
006A84D0  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006A84D3  0F AF 7D 28               IMUL EDI,dword ptr [EBP + 0x28]
006A84D7  03 DA                     ADD EBX,EDX
006A84D9  03 C3                     ADD EAX,EBX
006A84DB  0F BF 14 46               MOVSX EDX,word ptr [ESI + EAX*0x2]
006A84DF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A84E2  0F AF 45 2C               IMUL EAX,dword ptr [EBP + 0x2c]
006A84E6  03 C8                     ADD ECX,EAX
006A84E8  B8 56 55 55 55            MOV EAX,0x55555556
006A84ED  03 F9                     ADD EDI,ECX
006A84EF  0F BF 0C 7E               MOVSX ECX,word ptr [ESI + EDI*0x2]
006A84F3  2B CA                     SUB ECX,EDX
006A84F5  83 C1 02                  ADD ECX,0x2
006A84F8  F7 E9                     IMUL ECX
006A84FA  8B CA                     MOV ECX,EDX
006A84FC  C1 E9 1F                  SHR ECX,0x1f
006A84FF  03 D1                     ADD EDX,ECX
006A8501  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006A8505  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A8508  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
006A850B  C1 E2 03                  SHL EDX,0x3
006A850E  52                        PUSH EDX
006A850F  E8 5C 27 00 00            CALL 0x006aac70
006A8514  8B D8                     MOV EBX,EAX
006A8516  85 DB                     TEST EBX,EBX
006A8518  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006A851B  0F 84 BC 03 00 00         JZ 0x006a88dd
006A8521  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A8524  8B FB                     MOV EDI,EBX
006A8526  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006A8529  83 C8 FF                  OR EAX,0xffffffff
006A852C  C1 E1 03                  SHL ECX,0x3
006A852F  8B D1                     MOV EDX,ECX
006A8531  C1 E9 02                  SHR ECX,0x2
006A8534  F3 AB                     STOSD.REP ES:EDI
006A8536  8B CA                     MOV ECX,EDX
006A8538  83 E1 03                  AND ECX,0x3
006A853B  F3 AA                     STOSB.REP ES:EDI
006A853D  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006A8540  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A8543  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A8546  50                        PUSH EAX
006A8547  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A854A  51                        PUSH ECX
006A854B  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A854E  53                        PUSH EBX
006A854F  52                        PUSH EDX
006A8550  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A8553  50                        PUSH EAX
006A8554  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A8557  51                        PUSH ECX
006A8558  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A855B  52                        PUSH EDX
006A855C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A855F  50                        PUSH EAX
006A8560  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A8563  51                        PUSH ECX
006A8564  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A8567  52                        PUSH EDX
006A8568  50                        PUSH EAX
006A8569  51                        PUSH ECX
006A856A  56                        PUSH ESI
006A856B  E8 E0 F7 FF FF            CALL 0x006a7d50
006A8570  8B F0                     MOV ESI,EAX
006A8572  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006A8575  85 C0                     TEST EAX,EAX
006A8577  7E 39                     JLE 0x006a85b2
006A8579  83 FE 01                  CMP ESI,0x1
006A857C  7E 34                     JLE 0x006a85b2
006A857E  8D 14 F6                  LEA EDX,[ESI + ESI*0x8]
006A8581  8D 7C D3 BA               LEA EDI,[EBX + EDX*0x8 + -0x46]
LAB_006a8585:
006A8585  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A8588  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A858B  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A858E  50                        PUSH EAX
006A858F  0F BF 47 02               MOVSX EAX,word ptr [EDI + 0x2]
006A8593  51                        PUSH ECX
006A8594  52                        PUSH EDX
006A8595  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006A8598  0F BF 57 FE               MOVSX EDX,word ptr [EDI + -0x2]
006A859C  50                        PUSH EAX
006A859D  51                        PUSH ECX
006A859E  52                        PUSH EDX
006A859F  E8 2C 28 00 00            CALL 0x006aadd0
006A85A4  3B 45 30                  CMP EAX,dword ptr [EBP + 0x30]
006A85A7  7F 09                     JG 0x006a85b2
006A85A9  4E                        DEC ESI
006A85AA  83 EF 48                  SUB EDI,0x48
006A85AD  83 FE 01                  CMP ESI,0x1
006A85B0  7F D3                     JG 0x006a8585
LAB_006a85b2:
006A85B2  8D 46 01                  LEA EAX,[ESI + 0x1]
006A85B5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A85B8  EB 06                     JMP 0x006a85c0
LAB_006a85ba:
006A85BA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A85BD  8D 71 FF                  LEA ESI,[ECX + -0x1]
LAB_006a85c0:
006A85C0  8D 14 F6                  LEA EDX,[ESI + ESI*0x8]
006A85C3  8D 04 D3                  LEA EAX,[EBX + EDX*0x8]
006A85C6  0F BF 14 D3               MOVSX EDX,word ptr [EBX + EDX*0x8]
006A85CA  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006A85CD  0F BF 70 02               MOVSX ESI,word ptr [EAX + 0x2]
006A85D1  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
006A85D4  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
006A85D8  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
006A85DB  0F BF 78 BC               MOVSX EDI,word ptr [EAX + -0x44]
006A85DF  2B CF                     SUB ECX,EDI
006A85E1  0F BF 78 BA               MOVSX EDI,word ptr [EAX + -0x46]
006A85E5  0F BF 40 B8               MOVSX EAX,word ptr [EAX + -0x48]
006A85E9  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006A85EC  2B CF                     SUB ECX,EDI
006A85EE  03 CE                     ADD ECX,ESI
006A85F0  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006A85F3  2B C8                     SUB ECX,EAX
006A85F5  A1 6C D5 7E 00            MOV EAX,[0x007ed56c]
006A85FA  03 CA                     ADD ECX,EDX
006A85FC  83 3C 88 05               CMP dword ptr [EAX + ECX*0x4],0x5
006A8600  7E 49                     JLE 0x006a864b
006A8602  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A8605  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006A8608  66 89 14 CB               MOV word ptr [EBX + ECX*0x8],DX
006A860C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A860F  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006A8612  66 8B 45 28               MOV AX,word ptr [EBP + 0x28]
006A8616  66 89 44 D3 02            MOV word ptr [EBX + EDX*0x8 + 0x2],AX
006A861B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A861E  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006A8622  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006A8625  66 89 54 CB 04            MOV word ptr [EBX + ECX*0x8 + 0x4],DX
006A862A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A862D  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006A8630  66 C7 44 C3 06 00 00      MOV word ptr [EBX + EAX*0x8 + 0x6],0x0
006A8637  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A863A  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006A863D  66 C7 44 CB 0E FF 7F      MOV word ptr [EBX + ECX*0x8 + 0xe],0x7fff
006A8644  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A8647  40                        INC EAX
006A8648  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006a864b:
006A864B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A864E  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
006A8655  4A                        DEC EDX
006A8656  83 FA 01                  CMP EDX,0x1
006A8659  0F 8E 7E 02 00 00         JLE 0x006a88dd
006A865F  8D 4B 4C                  LEA ECX,[EBX + 0x4c]
006A8662  C7 45 EC 09 00 00 00      MOV dword ptr [EBP + -0x14],0x9
006A8669  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
LAB_006a866c:
006A866C  0F BF 41 FC               MOVSX EAX,word ptr [ECX + -0x4]
006A8670  0F BF 79 B4               MOVSX EDI,word ptr [ECX + -0x4c]
006A8674  0F BF 71 FE               MOVSX ESI,word ptr [ECX + -0x2]
006A8678  0F BF 11                  MOVSX EDX,word ptr [ECX]
006A867B  3B F8                     CMP EDI,EAX
006A867D  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
006A8680  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006A8683  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006A8686  75 1F                     JNZ 0x006a86a7
006A8688  0F BF 79 B6               MOVSX EDI,word ptr [ECX + -0x4a]
006A868C  3B FE                     CMP EDI,ESI
006A868E  75 17                     JNZ 0x006a86a7
006A8690  0F BF 79 B8               MOVSX EDI,word ptr [ECX + -0x48]
006A8694  3B FA                     CMP EDI,EDX
006A8696  75 0F                     JNZ 0x006a86a7
006A8698  83 7D EC 12               CMP dword ptr [EBP + -0x14],0x12
006A869C  7C 09                     JL 0x006a86a7
006A869E  0F BF B9 72 FF FF FF      MOVSX EDI,word ptr [ECX + 0xffffff72]
006A86A5  EB 04                     JMP 0x006a86ab
LAB_006a86a7:
006A86A7  0F BF 79 BA               MOVSX EDI,word ptr [ECX + -0x46]
LAB_006a86ab:
006A86AB  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
006A86AE  0F BF 79 44               MOVSX EDI,word ptr [ECX + 0x44]
006A86B2  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006A86B5  0F BF 79 46               MOVSX EDI,word ptr [ECX + 0x46]
006A86B9  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
006A86BC  0F BF 79 48               MOVSX EDI,word ptr [ECX + 0x48]
006A86C0  89 7D 30                  MOV dword ptr [EBP + 0x30],EDI
006A86C3  0F BF 79 4A               MOVSX EDI,word ptr [ECX + 0x4a]
006A86C7  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006A86CA  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006A86CD  3B F8                     CMP EDI,EAX
006A86CF  75 3F                     JNZ 0x006a8710
006A86D1  39 75 18                  CMP dword ptr [EBP + 0x18],ESI
006A86D4  75 3A                     JNZ 0x006a8710
006A86D6  39 55 30                  CMP dword ptr [EBP + 0x30],EDX
006A86D9  75 35                     JNZ 0x006a8710
006A86DB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A86DE  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006A86E1  83 C0 FE                  ADD EAX,-0x2
006A86E4  3B F8                     CMP EDI,EAX
006A86E6  7D 28                     JGE 0x006a8710
006A86E8  0F BF 81 8C 00 00 00      MOVSX EAX,word ptr [ECX + 0x8c]
006A86EF  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006A86F2  0F BF 81 8E 00 00 00      MOVSX EAX,word ptr [ECX + 0x8e]
006A86F9  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006A86FC  0F BF 81 90 00 00 00      MOVSX EAX,word ptr [ECX + 0x90]
006A8703  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
006A8706  0F BF 81 92 00 00 00      MOVSX EAX,word ptr [ECX + 0x92]
006A870D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_006a8710:
006A8710  0F BF 79 B8               MOVSX EDI,word ptr [ECX + -0x48]
006A8714  8B C2                     MOV EAX,EDX
006A8716  2B C7                     SUB EAX,EDI
006A8718  0F BF 79 B6               MOVSX EDI,word ptr [ECX + -0x4a]
006A871C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A871F  2B C7                     SUB EAX,EDI
006A8721  03 C6                     ADD EAX,ESI
006A8723  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A8726  8B F8                     MOV EDI,EAX
006A8728  0F BF 41 B4               MOVSX EAX,word ptr [ECX + -0x4c]
006A872C  2B F8                     SUB EDI,EAX
006A872E  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006A8731  03 F8                     ADD EDI,EAX
006A8733  8B C7                     MOV EAX,EDI
006A8735  8B 3D 6C D5 7E 00         MOV EDI,dword ptr [0x007ed56c]
006A873B  8B 04 87                  MOV EAX,dword ptr [EDI + EAX*0x4]
006A873E  83 F8 1A                  CMP EAX,0x1a
006A8741  7C 1F                     JL 0x006a8762
006A8743  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006A8746  2B C2                     SUB EAX,EDX
006A8748  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A874B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A874E  2B C6                     SUB EAX,ESI
006A8750  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006A8753  03 C2                     ADD EAX,EDX
006A8755  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006A8758  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A875B  2B D6                     SUB EDX,ESI
006A875D  03 D0                     ADD EDX,EAX
006A875F  8B 04 97                  MOV EAX,dword ptr [EDI + EDX*0x4]
LAB_006a8762:
006A8762  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A8765  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
006A876C  C1 E0 05                  SHL EAX,0x5
006A876F  05 40 CB 7E 00            ADD EAX,0x7ecb40
006A8774  C7 45 D0 00 00 00 00      MOV dword ptr [EBP + -0x30],0x0
006A877B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006a877e:
006A877E  8B 38                     MOV EDI,dword ptr [EAX]
006A8780  83 FF FE                  CMP EDI,-0x2
006A8783  0F 84 32 01 00 00         JZ 0x006a88bb
006A8789  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006A878C  03 FA                     ADD EDI,EDX
006A878E  85 FF                     TEST EDI,EDI
006A8790  0F 8C 0F 01 00 00         JL 0x006a88a5
006A8796  3B 7D 0C                  CMP EDI,dword ptr [EBP + 0xc]
006A8799  0F 8D 06 01 00 00         JGE 0x006a88a5
006A879F  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
006A87A2  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006A87A5  03 F2                     ADD ESI,EDX
006A87A7  0F 88 F8 00 00 00         JS 0x006a88a5
006A87AD  3B 75 10                  CMP ESI,dword ptr [EBP + 0x10]
006A87B0  0F 8D EF 00 00 00         JGE 0x006a88a5
006A87B6  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006A87B9  03 55 DC                  ADD EDX,dword ptr [EBP + -0x24]
006A87BC  0F 88 E3 00 00 00         JS 0x006a88a5
006A87C2  3B 55 14                  CMP EDX,dword ptr [EBP + 0x14]
006A87C5  0F 8D DA 00 00 00         JGE 0x006a88a5
006A87CB  8B C2                     MOV EAX,EDX
006A87CD  8B CE                     MOV ECX,ESI
006A87CF  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
006A87D3  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006A87D7  8B DF                     MOV EBX,EDI
006A87D9  03 D8                     ADD EBX,EAX
006A87DB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A87DE  03 CB                     ADD ECX,EBX
006A87E0  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
006A87E5  0F 8C B1 00 00 00         JL 0x006a889c
006A87EB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006A87EE  2B DF                     SUB EBX,EDI
006A87F0  83 FB FF                  CMP EBX,-0x1
006A87F3  7C 49                     JL 0x006a883e
006A87F5  83 FB 01                  CMP EBX,0x1
006A87F8  7F 44                     JG 0x006a883e
006A87FA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A87FD  2B CE                     SUB ECX,ESI
006A87FF  83 F9 FF                  CMP ECX,-0x1
006A8802  7C 3A                     JL 0x006a883e
006A8804  83 F9 01                  CMP ECX,0x1
006A8807  7F 35                     JG 0x006a883e
006A8809  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006A880C  2B C2                     SUB EAX,EDX
006A880E  83 F8 FF                  CMP EAX,-0x1
006A8811  7C 2B                     JL 0x006a883e
006A8813  83 F8 01                  CMP EAX,0x1
006A8816  7F 26                     JG 0x006a883e
006A8818  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006A881B  03 C1                     ADD EAX,ECX
006A881D  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
006A8820  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006A8823  03 C1                     ADD EAX,ECX
006A8825  8B 0D 6C D5 7E 00         MOV ECX,dword ptr [0x007ed56c]
006A882B  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006A882E  8B CB                     MOV ECX,EBX
006A8830  83 F8 1A                  CMP EAX,0x1a
006A8833  7D 40                     JGE 0x006a8875
006A8835  8B 0C 85 40 D6 7E 00      MOV ECX,dword ptr [EAX*0x4 + 0x7ed640]
006A883C  EB 35                     JMP 0x006a8873
LAB_006a883e:
006A883E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006A8841  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A8844  2B C2                     SUB EAX,EDX
006A8846  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A8849  2B C6                     SUB EAX,ESI
006A884B  03 C1                     ADD EAX,ECX
006A884D  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006A8850  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A8853  2B C7                     SUB EAX,EDI
006A8855  03 C1                     ADD EAX,ECX
006A8857  8B 0D 6C D5 7E 00         MOV ECX,dword ptr [0x007ed56c]
006A885D  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006A8860  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A8863  83 F8 1A                  CMP EAX,0x1a
006A8866  0F BF 49 02               MOVSX ECX,word ptr [ECX + 0x2]
006A886A  7D 09                     JGE 0x006a8875
006A886C  8B 1C 85 40 D6 7E 00      MOV EBX,dword ptr [EAX*0x4 + 0x7ed640]
LAB_006a8873:
006A8873  03 CB                     ADD ECX,EBX
LAB_006a8875:
006A8875  3B 4D D4                  CMP ECX,dword ptr [EBP + -0x2c]
006A8878  7F 22                     JG 0x006a889c
006A887A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A887D  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006A8880  03 C3                     ADD EAX,EBX
006A8882  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006A8885  8D 04 C3                  LEA EAX,[EBX + EAX*0x8]
006A8888  66 89 38                  MOV word ptr [EAX],DI
006A888B  66 89 70 02               MOV word ptr [EAX + 0x2],SI
006A888F  66 89 50 04               MOV word ptr [EAX + 0x4],DX
006A8893  66 89 48 06               MOV word ptr [EAX + 0x6],CX
006A8897  FF 45 E8                  INC dword ptr [EBP + -0x18]
006A889A  EB 03                     JMP 0x006a889f
LAB_006a889c:
006A889C  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_006a889f:
006A889F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A88A2  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_006a88a5:
006A88A5  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A88A8  83 C0 0C                  ADD EAX,0xc
006A88AB  42                        INC EDX
006A88AC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006A88AF  83 FA 08                  CMP EDX,0x8
006A88B2  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006A88B5  0F 8C C3 FE FF FF         JL 0x006a877e
LAB_006a88bb:
006A88BB  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006A88BE  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006A88C1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A88C4  40                        INC EAX
006A88C5  83 C1 48                  ADD ECX,0x48
006A88C8  83 C7 09                  ADD EDI,0x9
006A88CB  4A                        DEC EDX
006A88CC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006A88CF  3B C2                     CMP EAX,EDX
006A88D1  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006A88D4  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006A88D7  0F 8C 8F FD FF FF         JL 0x006a866c
LAB_006a88dd:
006A88DD  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006A88E0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A88E3  5F                        POP EDI
006A88E4  5E                        POP ESI
006A88E5  89 08                     MOV dword ptr [EAX],ECX
006A88E7  8B C3                     MOV EAX,EBX
006A88E9  5B                        POP EBX
006A88EA  8B E5                     MOV ESP,EBP
006A88EC  5D                        POP EBP
006A88ED  C2 34 00                  RET 0x34
