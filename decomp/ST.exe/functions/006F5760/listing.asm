FUN_006f5760:
006F5760  55                        PUSH EBP
006F5761  8B EC                     MOV EBP,ESP
006F5763  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006F5766  53                        PUSH EBX
006F5767  56                        PUSH ESI
006F5768  57                        PUSH EDI
006F5769  A3 2C 70 85 00            MOV [0x0085702c],EAX
006F576E  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F5771  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F5774  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F5777  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F577A  C1 E2 10                  SHL EDX,0x10
006F577D  80 3D 00 70 85 00 00      CMP byte ptr [0x00857000],0x0
006F5784  0F 85 C0 00 00 00         JNZ 0x006f584a
LAB_006f578a:
006F578A  33 C9                     XOR ECX,ECX
006F578C  8A 0E                     MOV CL,byte ptr [ESI]
006F578E  46                        INC ESI
006F578F  0B C9                     OR ECX,ECX
006F5791  0F 84 9F 00 00 00         JZ 0x006f5836
006F5797  55                        PUSH EBP
006F5798  8B 6D 20                  MOV EBP,dword ptr [EBP + 0x20]
LAB_006f579b:
006F579B  F6 C1 80                  TEST CL,0x80
006F579E  75 13                     JNZ 0x006f57b3
LAB_006f57a0:
006F57A0  03 F9                     ADD EDI,ECX
006F57A2  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
006F57A5  2B E9                     SUB EBP,ECX
006F57A7  7E 7B                     JLE 0x006f5824
006F57A9  33 C9                     XOR ECX,ECX
006F57AB  8A 0E                     MOV CL,byte ptr [ESI]
006F57AD  46                        INC ESI
006F57AE  F6 C1 80                  TEST CL,0x80
006F57B1  74 ED                     JZ 0x006f57a0
LAB_006f57b3:
006F57B3  F6 C1 40                  TEST CL,0x40
006F57B6  74 2B                     JZ 0x006f57e3
006F57B8  33 C0                     XOR EAX,EAX
006F57BA  83 E1 3F                  AND ECX,0x3f
006F57BD  AC                        LODSB ESI
006F57BE  2B E9                     SUB EBP,ECX
006F57C0  03 05 2C 70 85 00         ADD EAX,dword ptr [0x0085702c]
006F57C6  8A 00                     MOV AL,byte ptr [EAX]
LAB_006f57c8:
006F57C8  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F57CB  77 0A                     JA 0x006f57d7
006F57CD  88 07                     MOV byte ptr [EDI],AL
006F57CF  43                        INC EBX
006F57D0  47                        INC EDI
006F57D1  43                        INC EBX
006F57D2  49                        DEC ECX
006F57D3  7F F3                     JG 0x006f57c8
006F57D5  EB 3F                     JMP 0x006f5816
LAB_006f57d7:
006F57D7  C6 05 00 70 85 00 01      MOV byte ptr [0x00857000],0x1
006F57DE  E9 B8 00 00 00            JMP 0x006f589b
LAB_006f57e3:
006F57E3  83 E1 3F                  AND ECX,0x3f
006F57E6  2B E9                     SUB EBP,ECX
006F57E8  55                        PUSH EBP
006F57E9  8B 2D 2C 70 85 00         MOV EBP,dword ptr [0x0085702c]
LAB_006f57ef:
006F57EF  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F57F2  77 16                     JA 0x006f580a
006F57F4  33 C0                     XOR EAX,EAX
006F57F6  8A 06                     MOV AL,byte ptr [ESI]
006F57F8  83 C3 02                  ADD EBX,0x2
006F57FB  47                        INC EDI
006F57FC  46                        INC ESI
006F57FD  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
006F5801  49                        DEC ECX
006F5802  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006F5805  7F E8                     JG 0x006f57ef
006F5807  5D                        POP EBP
006F5808  EB 0C                     JMP 0x006f5816
LAB_006f580a:
006F580A  C6 05 00 70 85 00 01      MOV byte ptr [0x00857000],0x1
006F5811  E9 BC 00 00 00            JMP 0x006f58d2
LAB_006f5816:
006F5816  0B ED                     OR EBP,EBP
006F5818  7E 0A                     JLE 0x006f5824
006F581A  33 C9                     XOR ECX,ECX
006F581C  8A 0E                     MOV CL,byte ptr [ESI]
006F581E  46                        INC ESI
006F581F  E9 77 FF FF FF            JMP 0x006f579b
LAB_006f5824:
006F5824  5D                        POP EBP
006F5825  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F5828  2B 7D 20                  SUB EDI,dword ptr [EBP + 0x20]
006F582B  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F582E  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F5831  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F5834  EB 06                     JMP 0x006f583c
LAB_006f5836:
006F5836  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F5839  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
LAB_006f583c:
006F583C  FF 4D 24                  DEC dword ptr [EBP + 0x24]
006F583F  0F 8F 45 FF FF FF         JG 0x006f578a
006F5845  E9 C6 00 00 00            JMP 0x006f5910
LAB_006f584a:
006F584A  33 C9                     XOR ECX,ECX
006F584C  8A 0E                     MOV CL,byte ptr [ESI]
006F584E  46                        INC ESI
006F584F  0B C9                     OR ECX,ECX
006F5851  0F 84 AA 00 00 00         JZ 0x006f5901
006F5857  55                        PUSH EBP
006F5858  8B 6D 20                  MOV EBP,dword ptr [EBP + 0x20]
LAB_006f585b:
006F585B  F6 C1 80                  TEST CL,0x80
006F585E  75 17                     JNZ 0x006f5877
LAB_006f5860:
006F5860  03 F9                     ADD EDI,ECX
006F5862  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
006F5865  2B E9                     SUB EBP,ECX
006F5867  0F 8E 82 00 00 00         JLE 0x006f58ef
006F586D  33 C9                     XOR ECX,ECX
006F586F  8A 0E                     MOV CL,byte ptr [ESI]
006F5871  46                        INC ESI
006F5872  F6 C1 80                  TEST CL,0x80
006F5875  74 E9                     JZ 0x006f5860
LAB_006f5877:
006F5877  F6 C1 40                  TEST CL,0x40
006F587A  74 2D                     JZ 0x006f58a9
006F587C  33 C0                     XOR EAX,EAX
006F587E  83 E1 3F                  AND ECX,0x3f
006F5881  AC                        LODSB ESI
006F5882  2B E9                     SUB EBP,ECX
006F5884  03 05 2C 70 85 00         ADD EAX,dword ptr [0x0085702c]
006F588A  8A 00                     MOV AL,byte ptr [EAX]
LAB_006f588c:
006F588C  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F588F  77 0A                     JA 0x006f589b
LAB_006f5891:
006F5891  88 07                     MOV byte ptr [EDI],AL
006F5893  43                        INC EBX
006F5894  47                        INC EDI
006F5895  43                        INC EBX
006F5896  49                        DEC ECX
006F5897  7F F3                     JG 0x006f588c
006F5899  EB 46                     JMP 0x006f58e1
LAB_006f589b:
006F589B  83 C3 02                  ADD EBX,0x2
006F589E  47                        INC EDI
006F589F  49                        DEC ECX
006F58A0  7E 3F                     JLE 0x006f58e1
006F58A2  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F58A5  77 F4                     JA 0x006f589b
006F58A7  EB E8                     JMP 0x006f5891
LAB_006f58a9:
006F58A9  83 E1 3F                  AND ECX,0x3f
006F58AC  33 C0                     XOR EAX,EAX
006F58AE  2B E9                     SUB EBP,ECX
006F58B0  55                        PUSH EBP
006F58B1  8B 2D 2C 70 85 00         MOV EBP,dword ptr [0x0085702c]
LAB_006f58b7:
006F58B7  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F58BA  77 16                     JA 0x006f58d2
LAB_006f58bc:
006F58BC  33 C0                     XOR EAX,EAX
006F58BE  8A 06                     MOV AL,byte ptr [ESI]
006F58C0  83 C3 02                  ADD EBX,0x2
006F58C3  46                        INC ESI
006F58C4  47                        INC EDI
006F58C5  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
006F58C9  49                        DEC ECX
006F58CA  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006F58CD  7F E8                     JG 0x006f58b7
006F58CF  5D                        POP EBP
006F58D0  EB 0F                     JMP 0x006f58e1
LAB_006f58d2:
006F58D2  43                        INC EBX
006F58D3  46                        INC ESI
006F58D4  43                        INC EBX
006F58D5  47                        INC EDI
006F58D6  49                        DEC ECX
006F58D7  7E 07                     JLE 0x006f58e0
006F58D9  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F58DC  77 F4                     JA 0x006f58d2
006F58DE  EB DC                     JMP 0x006f58bc
LAB_006f58e0:
006F58E0  5D                        POP EBP
LAB_006f58e1:
006F58E1  0B ED                     OR EBP,EBP
006F58E3  7E 0A                     JLE 0x006f58ef
006F58E5  33 C9                     XOR ECX,ECX
006F58E7  8A 0E                     MOV CL,byte ptr [ESI]
006F58E9  46                        INC ESI
006F58EA  E9 6C FF FF FF            JMP 0x006f585b
LAB_006f58ef:
006F58EF  5D                        POP EBP
006F58F0  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F58F3  2B 7D 20                  SUB EDI,dword ptr [EBP + 0x20]
006F58F6  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F58F9  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F58FC  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F58FF  EB 06                     JMP 0x006f5907
LAB_006f5901:
006F5901  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F5904  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
LAB_006f5907:
006F5907  FF 4D 24                  DEC dword ptr [EBP + 0x24]
006F590A  0F 8F 3A FF FF FF         JG 0x006f584a
LAB_006f5910:
006F5910  5F                        POP EDI
006F5911  5E                        POP ESI
006F5912  5B                        POP EBX
006F5913  5D                        POP EBP
006F5914  C2 24 00                  RET 0x24
