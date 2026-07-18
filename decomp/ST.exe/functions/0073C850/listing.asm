FUN_0073c850:
0073C850  55                        PUSH EBP
0073C851  8B EC                     MOV EBP,ESP
0073C853  6A FF                     PUSH -0x1
0073C855  68 60 0A 7A 00            PUSH 0x7a0a60
0073C85A  68 64 D9 72 00            PUSH 0x72d964
0073C85F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0073C865  50                        PUSH EAX
0073C866  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0073C86D  83 C4 E4                  ADD ESP,-0x1c
0073C870  53                        PUSH EBX
0073C871  56                        PUSH ESI
0073C872  57                        PUSH EDI
0073C873  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0073C876  83 3D E0 72 85 00 00      CMP dword ptr [0x008572e0],0x0
0073C87D  75 4F                     JNZ 0x0073c8ce
0073C87F  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0073C882  50                        PUSH EAX
0073C883  6A 01                     PUSH 0x1
0073C885  68 5C 0A 7A 00            PUSH 0x7a0a5c
0073C88A  6A 01                     PUSH 0x1
0073C88C  FF 15 24 BC 85 00         CALL dword ptr [0x0085bc24]
0073C892  85 C0                     TEST EAX,EAX
0073C894  74 0C                     JZ 0x0073c8a2
0073C896  C7 05 E0 72 85 00 01 00 00 00  MOV dword ptr [0x008572e0],0x1
0073C8A0  EB 2C                     JMP 0x0073c8ce
LAB_0073c8a2:
0073C8A2  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0073C8A5  51                        PUSH ECX
0073C8A6  6A 01                     PUSH 0x1
0073C8A8  68 58 0A 7A 00            PUSH 0x7a0a58
0073C8AD  6A 01                     PUSH 0x1
0073C8AF  6A 00                     PUSH 0x0
0073C8B1  FF 15 C4 BC 85 00         CALL dword ptr [0x0085bcc4]
0073C8B7  85 C0                     TEST EAX,EAX
0073C8B9  74 0C                     JZ 0x0073c8c7
0073C8BB  C7 05 E0 72 85 00 02 00 00 00  MOV dword ptr [0x008572e0],0x2
0073C8C5  EB 07                     JMP 0x0073c8ce
LAB_0073c8c7:
0073C8C7  33 C0                     XOR EAX,EAX
0073C8C9  E9 2A 01 00 00            JMP 0x0073c9f8
LAB_0073c8ce:
0073C8CE  83 3D E0 72 85 00 02      CMP dword ptr [0x008572e0],0x2
0073C8D5  75 2E                     JNZ 0x0073c905
0073C8D7  83 7D 1C 00               CMP dword ptr [EBP + 0x1c],0x0
0073C8DB  75 09                     JNZ 0x0073c8e6
0073C8DD  8B 15 10 72 85 00         MOV EDX,dword ptr [0x00857210]
0073C8E3  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_0073c8e6:
0073C8E6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0073C8E9  50                        PUSH EAX
0073C8EA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073C8ED  51                        PUSH ECX
0073C8EE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073C8F1  52                        PUSH EDX
0073C8F2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C8F5  50                        PUSH EAX
0073C8F6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0073C8F9  51                        PUSH ECX
0073C8FA  FF 15 C4 BC 85 00         CALL dword ptr [0x0085bcc4]
0073C900  E9 F3 00 00 00            JMP 0x0073c9f8
LAB_0073c905:
0073C905  83 3D E0 72 85 00 01      CMP dword ptr [0x008572e0],0x1
0073C90C  0F 85 E4 00 00 00         JNZ 0x0073c9f6
0073C912  83 7D 18 00               CMP dword ptr [EBP + 0x18],0x0
0073C916  75 09                     JNZ 0x0073c921
0073C918  8B 15 20 72 85 00         MOV EDX,dword ptr [0x00857220]
0073C91E  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_0073c921:
0073C921  6A 00                     PUSH 0x0
0073C923  6A 00                     PUSH 0x0
0073C925  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073C928  50                        PUSH EAX
0073C929  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073C92C  51                        PUSH ECX
0073C92D  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0073C930  F7 DA                     NEG EDX
0073C932  1B D2                     SBB EDX,EDX
0073C934  83 E2 08                  AND EDX,0x8
0073C937  83 C2 01                  ADD EDX,0x1
0073C93A  52                        PUSH EDX
0073C93B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0073C93E  50                        PUSH EAX
0073C93F  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
0073C945  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0073C948  83 7D E0 00               CMP dword ptr [EBP + -0x20],0x0
0073C94C  75 07                     JNZ 0x0073c955
0073C94E  33 C0                     XOR EAX,EAX
0073C950  E9 A3 00 00 00            JMP 0x0073c9f8
LAB_0073c955:
0073C955  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073C95C  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0073C95F  D1 E0                     SHL EAX,0x1
0073C961  83 C0 03                  ADD EAX,0x3
0073C964  24 FC                     AND AL,0xfc
0073C966  E8 D5 10 FF FF            CALL 0x0072da40
0073C96B  89 65 D4                  MOV dword ptr [EBP + -0x2c],ESP
0073C96E  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0073C971  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0073C974  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0073C977  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0073C97A  D1 E2                     SHL EDX,0x1
0073C97C  52                        PUSH EDX
0073C97D  6A 00                     PUSH 0x0
0073C97F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0073C982  50                        PUSH EAX
0073C983  E8 88 EA FF FF            CALL 0x0073b410
0073C988  83 C4 0C                  ADD ESP,0xc
0073C98B  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0073C992  EB 17                     JMP 0x0073c9ab
LAB_0073c9ab:
0073C9AB  83 7D DC 00               CMP dword ptr [EBP + -0x24],0x0
0073C9AF  75 04                     JNZ 0x0073c9b5
0073C9B1  33 C0                     XOR EAX,EAX
0073C9B3  EB 43                     JMP 0x0073c9f8
LAB_0073c9b5:
0073C9B5  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073C9B8  51                        PUSH ECX
0073C9B9  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0073C9BC  52                        PUSH EDX
0073C9BD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073C9C0  50                        PUSH EAX
0073C9C1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073C9C4  51                        PUSH ECX
0073C9C5  6A 01                     PUSH 0x1
0073C9C7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0073C9CA  52                        PUSH EDX
0073C9CB  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
0073C9D1  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0073C9D4  83 7D D8 00               CMP dword ptr [EBP + -0x28],0x0
0073C9D8  75 04                     JNZ 0x0073c9de
0073C9DA  33 C0                     XOR EAX,EAX
0073C9DC  EB 1A                     JMP 0x0073c9f8
LAB_0073c9de:
0073C9DE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0073C9E1  50                        PUSH EAX
0073C9E2  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0073C9E5  51                        PUSH ECX
0073C9E6  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0073C9E9  52                        PUSH EDX
0073C9EA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C9ED  50                        PUSH EAX
0073C9EE  FF 15 24 BC 85 00         CALL dword ptr [0x0085bc24]
0073C9F4  EB 02                     JMP 0x0073c9f8
LAB_0073c9f6:
0073C9F6  33 C0                     XOR EAX,EAX
LAB_0073c9f8:
0073C9F8  8D 65 C8                  LEA ESP,[EBP + -0x38]
0073C9FB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073C9FE  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0073CA05  5F                        POP EDI
0073CA06  5E                        POP ESI
0073CA07  5B                        POP EBX
0073CA08  8B E5                     MOV ESP,EBP
0073CA0A  5D                        POP EBP
0073CA0B  C3                        RET
