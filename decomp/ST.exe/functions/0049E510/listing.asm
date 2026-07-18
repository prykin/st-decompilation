FUN_0049e510:
0049E510  55                        PUSH EBP
0049E511  8B EC                     MOV EBP,ESP
0049E513  83 EC 74                  SUB ESP,0x74
0049E516  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049E519  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049E51F  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0049E522  53                        PUSH EBX
0049E523  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049E526  56                        PUSH ESI
0049E527  33 DB                     XOR EBX,EBX
0049E529  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0049E52C  57                        PUSH EDI
0049E52D  8D 4D 90                  LEA ECX,[EBP + -0x70]
0049E530  8D 45 8C                  LEA EAX,[EBP + -0x74]
0049E533  53                        PUSH EBX
0049E534  51                        PUSH ECX
0049E535  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0049E538  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0049E53B  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0049E53E  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
0049E545  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
0049E548  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049E54D  E8 9E F2 28 00            CALL 0x0072d7f0
0049E552  8B F0                     MOV ESI,EAX
0049E554  83 C4 08                  ADD ESP,0x8
0049E557  3B F3                     CMP ESI,EBX
0049E559  0F 85 49 03 00 00         JNZ 0x0049e8a8
0049E55F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049E562  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
0049E565  83 F8 01                  CMP EAX,0x1
0049E568  74 08                     JZ 0x0049e572
0049E56A  3B C3                     CMP EAX,EBX
0049E56C  0F 85 4F 02 00 00         JNZ 0x0049e7c1
LAB_0049e572:
0049E572  B9 15 00 00 00            MOV ECX,0x15
0049E577  33 C0                     XOR EAX,EAX
0049E579  8D BE 89 00 00 00         LEA EDI,[ESI + 0x89]
0049E57F  F3 AB                     STOSD.REP ES:EDI
0049E581  66 8B 86 7C 01 00 00      MOV AX,word ptr [ESI + 0x17c]
0049E588  89 5E 65                  MOV dword ptr [ESI + 0x65],EBX
0049E58B  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
0049E58F  66 89 86 AD 02 00 00      MOV word ptr [ESI + 0x2ad],AX
0049E596  66 8B 86 7E 01 00 00      MOV AX,word ptr [ESI + 0x17e]
0049E59D  66 89 45 D6               MOV word ptr [EBP + -0x2a],AX
0049E5A1  66 89 86 AF 02 00 00      MOV word ptr [ESI + 0x2af],AX
0049E5A8  66 8B 86 80 01 00 00      MOV AX,word ptr [ESI + 0x180]
0049E5AF  66 89 86 B1 02 00 00      MOV word ptr [ESI + 0x2b1],AX
0049E5B6  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0049E5BC  66 89 45 D8               MOV word ptr [EBP + -0x28],AX
0049E5C0  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0049E5C6  33 D2                     XOR EDX,EDX
0049E5C8  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0049E5CB  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0049E5CE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049E5D1  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0049E5D4  3B C3                     CMP EAX,EBX
0049E5D6  0F 8E 32 01 00 00         JLE 0x0049e70e
LAB_0049e5dc:
0049E5DC  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049E5DF  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049E5E2  50                        PUSH EAX
0049E5E3  E8 88 E6 20 00            CALL 0x006acc70
0049E5E8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049E5EB  66 3D FF FF               CMP AX,0xffff
0049E5EF  0F 84 07 01 00 00         JZ 0x0049e6fc
0049E5F5  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0049E5F8  6A 01                     PUSH 0x1
0049E5FA  50                        PUSH EAX
0049E5FB  51                        PUSH ECX
0049E5FC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049E602  E8 B3 42 F6 FF            CALL 0x004028ba
0049E607  8B F8                     MOV EDI,EAX
0049E609  3B FB                     CMP EDI,EBX
0049E60B  75 1B                     JNZ 0x0049e628
0049E60D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049E613  68 BE 0A 00 00            PUSH 0xabe
0049E618  68 3C BE 7A 00            PUSH 0x7abe3c
0049E61D  52                        PUSH EDX
0049E61E  68 04 00 FE AF            PUSH 0xaffe0004
0049E623  E8 18 78 20 00            CALL 0x006a5e40
LAB_0049e628:
0049E628  8B 07                     MOV EAX,dword ptr [EDI]
0049E62A  8B CF                     MOV ECX,EDI
0049E62C  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0049E632  85 C0                     TEST EAX,EAX
0049E634  0F 84 C2 00 00 00         JZ 0x0049e6fc
0049E63A  8B 17                     MOV EDX,dword ptr [EDI]
0049E63C  8B CF                     MOV ECX,EDI
0049E63E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049E641  83 F8 07                  CMP EAX,0x7
0049E644  74 0A                     JZ 0x0049e650
0049E646  83 F8 13                  CMP EAX,0x13
0049E649  74 05                     JZ 0x0049e650
0049E64B  83 F8 1B                  CMP EAX,0x1b
0049E64E  75 53                     JNZ 0x0049e6a3
LAB_0049e650:
0049E650  8B CF                     MOV ECX,EDI
0049E652  E8 B1 3F F6 FF            CALL 0x00402608
0049E657  85 C0                     TEST EAX,EAX
0049E659  74 48                     JZ 0x0049e6a3
0049E65B  8D 45 D0                  LEA EAX,[EBP + -0x30]
0049E65E  8B CF                     MOV ECX,EDI
0049E660  50                        PUSH EAX
0049E661  6A 10                     PUSH 0x10
0049E663  E8 BE 3A F6 FF            CALL 0x00402126
0049E668  83 C8 FF                  OR EAX,0xffffffff
0049E66B  66 39 86 AD 02 00 00      CMP word ptr [ESI + 0x2ad],AX
0049E672  75 12                     JNZ 0x0049e686
0049E674  66 39 86 AF 02 00 00      CMP word ptr [ESI + 0x2af],AX
0049E67B  75 09                     JNZ 0x0049e686
0049E67D  66 39 86 B1 02 00 00      CMP word ptr [ESI + 0x2b1],AX
0049E684  74 76                     JZ 0x0049e6fc
LAB_0049e686:
0049E686  39 5D F4                  CMP dword ptr [EBP + -0xc],EBX
0049E689  75 0F                     JNZ 0x0049e69a
0049E68B  6A 01                     PUSH 0x1
0049E68D  6A 02                     PUSH 0x2
0049E68F  6A 01                     PUSH 0x1
0049E691  53                        PUSH EBX
0049E692  E8 F9 FB 20 00            CALL 0x006ae290
0049E697  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0049e69a:
0049E69A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0049E69D  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049E6A0  51                        PUSH ECX
0049E6A1  EB 53                     JMP 0x0049e6f6
LAB_0049e6a3:
0049E6A3  8B CF                     MOV ECX,EDI
0049E6A5  E8 AE 67 F6 FF            CALL 0x00404e58
0049E6AA  85 C0                     TEST EAX,EAX
0049E6AC  75 0F                     JNZ 0x0049e6bd
0049E6AE  8D 45 EC                  LEA EAX,[EBP + -0x14]
0049E6B1  8B CF                     MOV ECX,EDI
0049E6B3  50                        PUSH EAX
0049E6B4  6A 03                     PUSH 0x3
0049E6B6  E8 6B 3A F6 FF            CALL 0x00402126
0049E6BB  EB 3F                     JMP 0x0049e6fc
LAB_0049e6bd:
0049E6BD  83 C8 FF                  OR EAX,0xffffffff
0049E6C0  66 39 86 AD 02 00 00      CMP word ptr [ESI + 0x2ad],AX
0049E6C7  75 12                     JNZ 0x0049e6db
0049E6C9  66 39 86 AF 02 00 00      CMP word ptr [ESI + 0x2af],AX
0049E6D0  75 09                     JNZ 0x0049e6db
0049E6D2  66 39 86 B1 02 00 00      CMP word ptr [ESI + 0x2b1],AX
0049E6D9  74 21                     JZ 0x0049e6fc
LAB_0049e6db:
0049E6DB  39 5D F8                  CMP dword ptr [EBP + -0x8],EBX
0049E6DE  75 0F                     JNZ 0x0049e6ef
0049E6E0  6A 01                     PUSH 0x1
0049E6E2  6A 02                     PUSH 0x2
0049E6E4  6A 01                     PUSH 0x1
0049E6E6  53                        PUSH EBX
0049E6E7  E8 A4 FB 20 00            CALL 0x006ae290
0049E6EC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0049e6ef:
0049E6EF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0049E6F2  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049E6F5  51                        PUSH ECX
LAB_0049e6f6:
0049E6F6  52                        PUSH EDX
0049E6F7  E8 C4 FA 20 00            CALL 0x006ae1c0
LAB_0049e6fc:
0049E6FC  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0049E6FF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049E702  42                        INC EDX
0049E703  3B D0                     CMP EDX,EAX
0049E705  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0049E708  0F 8C CE FE FF FF         JL 0x0049e5dc
LAB_0049e70e:
0049E70E  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0049E711  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0049E714  85 DB                     TEST EBX,EBX
0049E716  74 17                     JZ 0x0049e72f
0049E718  85 FF                     TEST EDI,EDI
0049E71A  74 13                     JZ 0x0049e72f
0049E71C  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0049E71F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049E725  57                        PUSH EDI
0049E726  53                        PUSH EBX
0049E727  50                        PUSH EAX
0049E728  E8 6E 56 F6 FF            CALL 0x00403d9b
0049E72D  EB 61                     JMP 0x0049e790
LAB_0049e72f:
0049E72F  85 DB                     TEST EBX,EBX
0049E731  75 61                     JNZ 0x0049e794
0049E733  85 FF                     TEST EDI,EDI
0049E735  74 4E                     JZ 0x0049e785
0049E737  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
0049E73A  33 FF                     XOR EDI,EDI
0049E73C  85 DB                     TEST EBX,EBX
0049E73E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0049E741  7E 35                     JLE 0x0049e778
LAB_0049e743:
0049E743  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049E746  8B D7                     MOV EDX,EDI
0049E748  51                        PUSH ECX
0049E749  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0049E74C  E8 1F E5 20 00            CALL 0x006acc70
0049E751  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0049E754  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0049E757  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049E75D  6A 01                     PUSH 0x1
0049E75F  52                        PUSH EDX
0049E760  50                        PUSH EAX
0049E761  E8 54 41 F6 FF            CALL 0x004028ba
0049E766  8D 4D EC                  LEA ECX,[EBP + -0x14]
0049E769  51                        PUSH ECX
0049E76A  6A 03                     PUSH 0x3
0049E76C  8B C8                     MOV ECX,EAX
0049E76E  E8 B3 39 F6 FF            CALL 0x00402126
0049E773  47                        INC EDI
0049E774  3B FB                     CMP EDI,EBX
0049E776  7C CB                     JL 0x0049e743
LAB_0049e778:
0049E778  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0049E77B  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0049E77E  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_0049e785:
0049E785  85 DB                     TEST EBX,EBX
0049E787  75 0B                     JNZ 0x0049e794
0049E789  85 FF                     TEST EDI,EDI
0049E78B  75 03                     JNZ 0x0049e790
0049E78D  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
LAB_0049e790:
0049E790  85 DB                     TEST EBX,EBX
0049E792  74 06                     JZ 0x0049e79a
LAB_0049e794:
0049E794  53                        PUSH EBX
0049E795  E8 76 F9 20 00            CALL 0x006ae110
LAB_0049e79a:
0049E79A  85 FF                     TEST EDI,EDI
0049E79C  74 06                     JZ 0x0049e7a4
0049E79E  57                        PUSH EDI
0049E79F  E8 6C F9 20 00            CALL 0x006ae110
LAB_0049e7a4:
0049E7A4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049E7AA  68 E9 0A 00 00            PUSH 0xae9
0049E7AF  68 3C BE 7A 00            PUSH 0x7abe3c
0049E7B4  52                        PUSH EDX
0049E7B5  68 09 00 FE AF            PUSH 0xaffe0009
0049E7BA  E8 81 76 20 00            CALL 0x006a5e40
0049E7BF  33 DB                     XOR EBX,EBX
LAB_0049e7c1:
0049E7C1  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0049E7C6  33 D2                     XOR EDX,EDX
0049E7C8  B9 32 00 00 00            MOV ECX,0x32
0049E7CD  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0049E7D3  F7 F1                     DIV ECX
0049E7D5  85 D2                     TEST EDX,EDX
0049E7D7  0F 85 B6 00 00 00         JNZ 0x0049e893
0049E7DD  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049E7E0  85 C0                     TEST EAX,EAX
0049E7E2  0F 8E 9D 00 00 00         JLE 0x0049e885
LAB_0049e7e8:
0049E7E8  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049E7EB  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049E7EE  52                        PUSH EDX
0049E7EF  8B D3                     MOV EDX,EBX
0049E7F1  E8 7A E4 20 00            CALL 0x006acc70
0049E7F6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049E7F9  66 3D FF FF               CMP AX,0xffff
0049E7FD  74 71                     JZ 0x0049e870
0049E7FF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049E805  6A 01                     PUSH 0x1
0049E807  50                        PUSH EAX
0049E808  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0049E80B  50                        PUSH EAX
0049E80C  E8 A9 40 F6 FF            CALL 0x004028ba
0049E811  8B F8                     MOV EDI,EAX
0049E813  85 FF                     TEST EDI,EDI
0049E815  75 1B                     JNZ 0x0049e832
0049E817  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049E81D  68 F1 0A 00 00            PUSH 0xaf1
0049E822  68 3C BE 7A 00            PUSH 0x7abe3c
0049E827  51                        PUSH ECX
0049E828  68 04 00 FE AF            PUSH 0xaffe0004
0049E82D  E8 0E 76 20 00            CALL 0x006a5e40
LAB_0049e832:
0049E832  8B 17                     MOV EDX,dword ptr [EDI]
0049E834  8B CF                     MOV ECX,EDI
0049E836  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0049E83C  85 C0                     TEST EAX,EAX
0049E83E  74 30                     JZ 0x0049e870
0049E840  8B 07                     MOV EAX,dword ptr [EDI]
0049E842  8B CF                     MOV ECX,EDI
0049E844  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049E847  83 F8 07                  CMP EAX,0x7
0049E84A  74 0A                     JZ 0x0049e856
0049E84C  83 F8 13                  CMP EAX,0x13
0049E84F  74 05                     JZ 0x0049e856
0049E851  83 F8 1B                  CMP EAX,0x1b
0049E854  75 1A                     JNZ 0x0049e870
LAB_0049e856:
0049E856  8B CF                     MOV ECX,EDI
0049E858  E8 7F 46 F6 FF            CALL 0x00402edc
0049E85D  83 F8 10                  CMP EAX,0x10
0049E860  74 1C                     JZ 0x0049e87e
0049E862  6A 10                     PUSH 0x10
0049E864  8B CF                     MOV ECX,EDI
0049E866  E8 8E 65 F6 FF            CALL 0x00404df9
0049E86B  83 F8 01                  CMP EAX,0x1
0049E86E  74 0E                     JZ 0x0049e87e
LAB_0049e870:
0049E870  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049E873  43                        INC EBX
0049E874  3B D8                     CMP EBX,EAX
0049E876  0F 8C 6C FF FF FF         JL 0x0049e7e8
0049E87C  EB 07                     JMP 0x0049e885
LAB_0049e87e:
0049E87E  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
LAB_0049e885:
0049E885  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0049E888  85 C0                     TEST EAX,EAX
0049E88A  75 07                     JNZ 0x0049e893
0049E88C  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_0049e893:
0049E893  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0049E896  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_0049e89c:
0049E89C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049E89F  5F                        POP EDI
0049E8A0  5E                        POP ESI
0049E8A1  5B                        POP EBX
0049E8A2  8B E5                     MOV ESP,EBP
0049E8A4  5D                        POP EBP
0049E8A5  C2 04 00                  RET 0x4
LAB_0049e8a8:
0049E8A8  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0049E8AB  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0049E8B1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049E8B7  74 E3                     JZ 0x0049e89c
0049E8B9  68 94 C0 7A 00            PUSH 0x7ac094
0049E8BE  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049E8C3  56                        PUSH ESI
0049E8C4  53                        PUSH EBX
0049E8C5  68 01 0B 00 00            PUSH 0xb01
0049E8CA  68 3C BE 7A 00            PUSH 0x7abe3c
0049E8CF  E8 FC EB 20 00            CALL 0x006ad4d0
0049E8D4  83 C4 18                  ADD ESP,0x18
0049E8D7  85 C0                     TEST EAX,EAX
0049E8D9  74 01                     JZ 0x0049e8dc
0049E8DB  CC                        INT3
LAB_0049e8dc:
0049E8DC  68 02 0B 00 00            PUSH 0xb02
0049E8E1  68 3C BE 7A 00            PUSH 0x7abe3c
0049E8E6  53                        PUSH EBX
0049E8E7  56                        PUSH ESI
0049E8E8  E8 53 75 20 00            CALL 0x006a5e40
0049E8ED  5F                        POP EDI
0049E8EE  5E                        POP ESI
0049E8EF  83 C8 FF                  OR EAX,0xffffffff
0049E8F2  5B                        POP EBX
0049E8F3  8B E5                     MOV ESP,EBP
0049E8F5  5D                        POP EBP
0049E8F6  C2 04 00                  RET 0x4
