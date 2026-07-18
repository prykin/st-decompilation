AiEventClassTy::_CreateRCCont:
0064D890  55                        PUSH EBP
0064D891  8B EC                     MOV EBP,ESP
0064D893  83 EC 68                  SUB ESP,0x68
0064D896  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064D89B  53                        PUSH EBX
0064D89C  56                        PUSH ESI
0064D89D  57                        PUSH EDI
0064D89E  8D 55 9C                  LEA EDX,[EBP + -0x64]
0064D8A1  8D 4D 98                  LEA ECX,[EBP + -0x68]
0064D8A4  6A 00                     PUSH 0x0
0064D8A6  52                        PUSH EDX
0064D8A7  C7 45 DC FF FF FF FF      MOV dword ptr [EBP + -0x24],0xffffffff
0064D8AE  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0064D8B1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064D8B7  E8 34 FF 0D 00            CALL 0x0072d7f0
0064D8BC  8B F0                     MOV ESI,EAX
0064D8BE  83 C4 08                  ADD ESP,0x8
0064D8C1  85 F6                     TEST ESI,ESI
0064D8C3  0F 85 39 01 00 00         JNZ 0x0064da02
0064D8C9  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0064D8CE  85 C0                     TEST EAX,EAX
0064D8D0  0F 84 17 01 00 00         JZ 0x0064d9ed
0064D8D6  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
0064D8DA  66 3D DD 00               CMP AX,0xdd
0064D8DE  74 16                     JZ 0x0064d8f6
0064D8E0  66 3D DE 00               CMP AX,0xde
0064D8E4  74 10                     JZ 0x0064d8f6
0064D8E6  66 3D E2 00               CMP AX,0xe2
0064D8EA  74 0A                     JZ 0x0064d8f6
0064D8EC  66 3D DC 00               CMP AX,0xdc
0064D8F0  74 04                     JZ 0x0064d8f6
0064D8F2  33 C0                     XOR EAX,EAX
0064D8F4  EB 05                     JMP 0x0064d8fb
LAB_0064d8f6:
0064D8F6  B8 01 00 00 00            MOV EAX,0x1
LAB_0064d8fb:
0064D8FB  85 C0                     TEST EAX,EAX
0064D8FD  0F 84 EA 00 00 00         JZ 0x0064d9ed
0064D903  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064D906  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0064D909  81 E6 FF FF 00 00         AND ESI,0xffff
0064D90F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0064D912  33 C9                     XOR ECX,ECX
0064D914  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0064D917  8D 04 F6                  LEA EAX,[ESI + ESI*0x8]
0064D91A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0064D91D  8A 8C C0 E8 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
0064D924  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0064D927  50                        PUSH EAX
0064D928  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0064D92B  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0064D931  53                        PUSH EBX
0064D932  57                        PUSH EDI
0064D933  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0064D936  E8 00 74 DB FF            CALL 0x00404d3b
0064D93B  85 C0                     TEST EAX,EAX
0064D93D  75 39                     JNZ 0x0064d978
0064D93F  B8 03 00 00 00            MOV EAX,0x3
0064D944  8D 55 E8                  LEA EDX,[EBP + -0x18]
0064D947  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0064D94A  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0064D94D  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0064D950  52                        PUSH EDX
0064D951  8D 4D EC                  LEA ECX,[EBP + -0x14]
0064D954  4F                        DEC EDI
0064D955  50                        PUSH EAX
0064D956  8D 55 F0                  LEA EDX,[EBP + -0x10]
0064D959  4B                        DEC EBX
0064D95A  51                        PUSH ECX
0064D95B  52                        PUSH EDX
0064D95C  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0064D95F  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0064D962  E8 9F 3F DB FF            CALL 0x00401906
0064D967  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0064D96A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0064D96D  83 C4 10                  ADD ESP,0x10
0064D970  40                        INC EAX
0064D971  41                        INC ECX
0064D972  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0064D975  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0064d978:
0064D978  8D 55 F4                  LEA EDX,[EBP + -0xc]
0064D97B  68 FE 00 00 00            PUSH 0xfe
0064D980  8D 45 FC                  LEA EAX,[EBP + -0x4]
0064D983  52                        PUSH EDX
0064D984  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0064D987  8D 4D F8                  LEA ECX,[EBP + -0x8]
0064D98A  50                        PUSH EAX
0064D98B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064D98E  51                        PUSH ECX
0064D98F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0064D992  52                        PUSH EDX
0064D993  50                        PUSH EAX
0064D994  51                        PUSH ECX
0064D995  E8 03 44 DB FF            CALL 0x00401d9d
0064D99A  83 C4 1C                  ADD ESP,0x1c
0064D99D  85 C0                     TEST EAX,EAX
0064D99F  74 4C                     JZ 0x0064d9ed
0064D9A1  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0064D9A4  85 C0                     TEST EAX,EAX
0064D9A6  75 05                     JNZ 0x0064d9ad
0064D9A8  B8 A0 16 80 00            MOV EAX,0x8016a0
LAB_0064d9ad:
0064D9AD  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0064D9B0  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
0064D9B4  52                        PUSH EDX
0064D9B5  6A FF                     PUSH -0x1
0064D9B7  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
0064D9BB  50                        PUSH EAX
0064D9BC  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
0064D9C0  50                        PUSH EAX
0064D9C1  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0064D9C4  51                        PUSH ECX
0064D9C5  52                        PUSH EDX
0064D9C6  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
0064D9CA  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0064D9CD  50                        PUSH EAX
0064D9CE  51                        PUSH ECX
0064D9CF  52                        PUSH EDX
0064D9D0  56                        PUSH ESI
0064D9D1  E8 6A 7D DB FF            CALL 0x00405740
0064D9D6  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0064D9D9  83 C4 28                  ADD ESP,0x28
0064D9DC  33 C0                     XOR EAX,EAX
0064D9DE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064D9E4  5F                        POP EDI
0064D9E5  5E                        POP ESI
0064D9E6  5B                        POP EBX
0064D9E7  8B E5                     MOV ESP,EBP
0064D9E9  5D                        POP EBP
0064D9EA  C2 20 00                  RET 0x20
LAB_0064d9ed:
0064D9ED  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0064D9F0  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0064D9F3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064D9F9  5F                        POP EDI
0064D9FA  5E                        POP ESI
0064D9FB  5B                        POP EBX
0064D9FC  8B E5                     MOV ESP,EBP
0064D9FE  5D                        POP EBP
0064D9FF  C2 20 00                  RET 0x20
LAB_0064da02:
0064DA02  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0064DA05  68 C0 2A 7D 00            PUSH 0x7d2ac0
0064DA0A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0064DA0F  56                        PUSH ESI
0064DA10  6A 00                     PUSH 0x0
0064DA12  68 EE 00 00 00            PUSH 0xee
0064DA17  68 34 2A 7D 00            PUSH 0x7d2a34
0064DA1C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064DA22  E8 A9 FA 05 00            CALL 0x006ad4d0
0064DA27  83 C4 18                  ADD ESP,0x18
0064DA2A  85 C0                     TEST EAX,EAX
0064DA2C  74 01                     JZ 0x0064da2f
0064DA2E  CC                        INT3
LAB_0064da2f:
0064DA2F  68 EF 00 00 00            PUSH 0xef
0064DA34  68 34 2A 7D 00            PUSH 0x7d2a34
0064DA39  6A 00                     PUSH 0x0
0064DA3B  56                        PUSH ESI
0064DA3C  E8 FF 83 05 00            CALL 0x006a5e40
0064DA41  8B C6                     MOV EAX,ESI
0064DA43  5F                        POP EDI
0064DA44  5E                        POP ESI
0064DA45  5B                        POP EBX
0064DA46  8B E5                     MOV ESP,EBP
0064DA48  5D                        POP EBP
0064DA49  C2 20 00                  RET 0x20
