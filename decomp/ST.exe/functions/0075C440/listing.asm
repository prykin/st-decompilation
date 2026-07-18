FUN_0075c440:
0075C440  55                        PUSH EBP
0075C441  8B EC                     MOV EBP,ESP
0075C443  83 EC 34                  SUB ESP,0x34
0075C446  53                        PUSH EBX
0075C447  56                        PUSH ESI
0075C448  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075C44B  57                        PUSH EDI
0075C44C  8B 86 82 01 00 00         MOV EAX,dword ptr [ESI + 0x182]
0075C452  8B 9E AA 01 00 00         MOV EBX,dword ptr [ESI + 0x1aa]
0075C458  8B 8E 8A 01 00 00         MOV ECX,dword ptr [ESI + 0x18a]
0075C45E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075C461  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0075C467  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0075C46A  85 C0                     TEST EAX,EAX
0075C46C  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0075C46F  74 1A                     JZ 0x0075c48b
0075C471  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
0075C474  85 C0                     TEST EAX,EAX
0075C476  75 13                     JNZ 0x0075c48b
0075C478  56                        PUSH ESI
0075C479  E8 32 FF FF FF            CALL 0x0075c3b0
0075C47E  85 C0                     TEST EAX,EAX
0075C480  75 09                     JNZ 0x0075c48b
0075C482  5F                        POP EDI
0075C483  5E                        POP ESI
0075C484  5B                        POP EBX
0075C485  8B E5                     MOV ESP,EBP
0075C487  5D                        POP EBP
0075C488  C2 08 00                  RET 0x8
LAB_0075c48b:
0075C48B  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
0075C48E  85 C0                     TEST EAX,EAX
0075C490  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0075C493  76 06                     JBE 0x0075c49b
0075C495  48                        DEC EAX
0075C496  E9 C0 01 00 00            JMP 0x0075c65b
LAB_0075c49b:
0075C49B  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0075C49E  8B 8E 8E 01 00 00         MOV ECX,dword ptr [ESI + 0x18e]
0075C4A4  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0075C4A7  8B 10                     MOV EDX,dword ptr [EAX]
0075C4A9  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0075C4AC  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0075C4AF  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0075C4B2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075C4B5  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0075C4B8  8B 7B 08                  MOV EDI,dword ptr [EBX + 0x8]
0075C4BB  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0075C4BE  8D 53 10                  LEA EDX,[EBX + 0x10]
0075C4C1  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0075C4C4  8B 11                     MOV EDX,dword ptr [ECX]
0075C4C6  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
0075C4C9  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0075C4CC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075C4CF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075C4D2  8B 8E 7E 01 00 00         MOV ECX,dword ptr [ESI + 0x17e]
0075C4D8  3B CA                     CMP ECX,EDX
0075C4DA  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0075C4DD  0F 8F 55 01 00 00         JG 0x0075c638
LAB_0075c4e3:
0075C4E3  83 F8 08                  CMP EAX,0x8
0075C4E6  7D 2A                     JGE 0x0075c512
0075C4E8  6A 00                     PUSH 0x0
0075C4EA  50                        PUSH EAX
0075C4EB  8D 55 CC                  LEA EDX,[EBP + -0x34]
0075C4EE  57                        PUSH EDI
0075C4EF  52                        PUSH EDX
0075C4F0  E8 2B F2 FF FF            CALL 0x0075b720
0075C4F5  85 C0                     TEST EAX,EAX
0075C4F7  0F 84 11 01 00 00         JZ 0x0075c60e
0075C4FD  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0075C500  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
0075C503  83 F8 08                  CMP EAX,0x8
0075C506  7D 0A                     JGE 0x0075c512
0075C508  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0075C50B  B9 01 00 00 00            MOV ECX,0x1
0075C510  EB 2F                     JMP 0x0075c541
LAB_0075c512:
0075C512  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0075C515  8D 48 F8                  LEA ECX,[EAX + -0x8]
0075C518  8B D7                     MOV EDX,EDI
0075C51A  D3 FA                     SAR EDX,CL
0075C51C  81 E2 FF 00 00 00         AND EDX,0xff
0075C522  8B 8C 96 D4 00 00 00      MOV ECX,dword ptr [ESI + EDX*0x4 + 0xd4]
0075C529  85 C9                     TEST ECX,ECX
0075C52B  74 0F                     JZ 0x0075c53c
0075C52D  2B C1                     SUB EAX,ECX
0075C52F  33 C9                     XOR ECX,ECX
0075C531  8A 8C 32 D4 04 00 00      MOV CL,byte ptr [EDX + ESI*0x1 + 0x4d4]
0075C538  8B F1                     MOV ESI,ECX
0075C53A  EB 22                     JMP 0x0075c55e
LAB_0075c53c:
0075C53C  B9 09 00 00 00            MOV ECX,0x9
LAB_0075c541:
0075C541  51                        PUSH ECX
0075C542  56                        PUSH ESI
0075C543  50                        PUSH EAX
0075C544  8D 55 CC                  LEA EDX,[EBP + -0x34]
0075C547  57                        PUSH EDI
0075C548  52                        PUSH EDX
0075C549  E8 B2 F2 FF FF            CALL 0x0075b800
0075C54E  8B F0                     MOV ESI,EAX
0075C550  85 F6                     TEST ESI,ESI
0075C552  0F 8C B6 00 00 00         JL 0x0075c60e
0075C558  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
0075C55B  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_0075c55e:
0075C55E  8B DE                     MOV EBX,ESI
0075C560  C1 FB 04                  SAR EBX,0x4
0075C563  83 E6 0F                  AND ESI,0xf
0075C566  74 69                     JZ 0x0075c5d1
0075C568  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075C56B  03 D3                     ADD EDX,EBX
0075C56D  3B C6                     CMP EAX,ESI
0075C56F  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0075C572  7D 1A                     JGE 0x0075c58e
0075C574  56                        PUSH ESI
0075C575  50                        PUSH EAX
0075C576  8D 45 CC                  LEA EAX,[EBP + -0x34]
0075C579  57                        PUSH EDI
0075C57A  50                        PUSH EAX
0075C57B  E8 A0 F1 FF FF            CALL 0x0075b720
0075C580  85 C0                     TEST EAX,EAX
0075C582  0F 84 86 00 00 00         JZ 0x0075c60e
0075C588  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
0075C58B  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_0075c58e:
0075C58E  BA 01 00 00 00            MOV EDX,0x1
0075C593  8B CE                     MOV ECX,ESI
0075C595  2B C6                     SUB EAX,ESI
0075C597  8B DF                     MOV EBX,EDI
0075C599  D3 E2                     SHL EDX,CL
0075C59B  8B C8                     MOV ECX,EAX
0075C59D  D3 FB                     SAR EBX,CL
0075C59F  8B 0C B5 54 20 7A 00      MOV ECX,dword ptr [ESI*0x4 + 0x7a2054]
0075C5A6  4A                        DEC EDX
0075C5A7  23 D3                     AND EDX,EBX
0075C5A9  3B D1                     CMP EDX,ECX
0075C5AB  7D 0B                     JGE 0x0075c5b8
0075C5AD  8B 34 B5 94 20 7A 00      MOV ESI,dword ptr [ESI*0x4 + 0x7a2094]
0075C5B4  03 F2                     ADD ESI,EDX
0075C5B6  EB 02                     JMP 0x0075c5ba
LAB_0075c5b8:
0075C5B8  8B F2                     MOV ESI,EDX
LAB_0075c5ba:
0075C5BA  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0075C5BD  D3 E6                     SHL ESI,CL
0075C5BF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075C5C2  8B 14 8D 94 1E 7A 00      MOV EDX,dword ptr [ECX*0x4 + 0x7a1e94]
0075C5C9  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0075C5CC  89 34 91                  MOV dword ptr [ECX + EDX*0x4],ESI
0075C5CF  EB 08                     JMP 0x0075c5d9
LAB_0075c5d1:
0075C5D1  83 FB 0F                  CMP EBX,0xf
0075C5D4  75 17                     JNZ 0x0075c5ed
0075C5D6  01 5D 0C                  ADD dword ptr [EBP + 0xc],EBX
LAB_0075c5d9:
0075C5D9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075C5DC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075C5DF  41                        INC ECX
0075C5E0  3B CA                     CMP ECX,EDX
0075C5E2  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0075C5E5  0F 8E F8 FE FF FF         JLE 0x0075c4e3
0075C5EB  EB 45                     JMP 0x0075c632
LAB_0075c5ed:
0075C5ED  BE 01 00 00 00            MOV ESI,0x1
0075C5F2  8B CB                     MOV ECX,EBX
0075C5F4  D3 E6                     SHL ESI,CL
0075C5F6  85 DB                     TEST EBX,EBX
0075C5F8  74 34                     JZ 0x0075c62e
0075C5FA  3B C3                     CMP EAX,EBX
0075C5FC  7D 21                     JGE 0x0075c61f
0075C5FE  53                        PUSH EBX
0075C5FF  50                        PUSH EAX
0075C600  8D 55 CC                  LEA EDX,[EBP + -0x34]
0075C603  57                        PUSH EDI
0075C604  52                        PUSH EDX
0075C605  E8 16 F1 FF FF            CALL 0x0075b720
0075C60A  85 C0                     TEST EAX,EAX
0075C60C  75 0B                     JNZ 0x0075c619
LAB_0075c60e:
0075C60E  5F                        POP EDI
0075C60F  5E                        POP ESI
0075C610  33 C0                     XOR EAX,EAX
0075C612  5B                        POP EBX
0075C613  8B E5                     MOV ESP,EBP
0075C615  5D                        POP EBP
0075C616  C2 08 00                  RET 0x8
LAB_0075c619:
0075C619  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
0075C61C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_0075c61f:
0075C61F  2B C3                     SUB EAX,EBX
0075C621  8B D7                     MOV EDX,EDI
0075C623  8B C8                     MOV ECX,EAX
0075C625  D3 FA                     SAR EDX,CL
0075C627  8D 4E FF                  LEA ECX,[ESI + -0x1]
0075C62A  23 D1                     AND EDX,ECX
0075C62C  03 F2                     ADD ESI,EDX
LAB_0075c62e:
0075C62E  4E                        DEC ESI
0075C62F  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_0075c632:
0075C632  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075C635  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_0075c638:
0075C638  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
0075C63B  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0075C63E  89 0A                     MOV dword ptr [EDX],ECX
0075C640  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
0075C643  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0075C646  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0075C649  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0075C64C  89 96 8E 01 00 00         MOV dword ptr [ESI + 0x18e],EDX
0075C652  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
0075C655  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0075C658  89 7B 08                  MOV dword ptr [EBX + 0x8],EDI
LAB_0075c65b:
0075C65B  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
0075C65E  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
0075C661  48                        DEC EAX
0075C662  5F                        POP EDI
0075C663  89 43 28                  MOV dword ptr [EBX + 0x28],EAX
0075C666  5E                        POP ESI
0075C667  B8 01 00 00 00            MOV EAX,0x1
0075C66C  5B                        POP EBX
0075C66D  8B E5                     MOV ESP,EBP
0075C66F  5D                        POP EBP
0075C670  C2 08 00                  RET 0x8
