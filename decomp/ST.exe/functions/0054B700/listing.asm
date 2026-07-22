CursorClassTy::sub_0054B700:
0054B700  55                        PUSH EBP
0054B701  8B EC                     MOV EBP,ESP
0054B703  83 EC 48                  SUB ESP,0x48
0054B706  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054B709  8B 91 DF 04 00 00         MOV EDX,dword ptr [ECX + 0x4df]
0054B70F  3B C2                     CMP EAX,EDX
0054B711  56                        PUSH ESI
0054B712  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0054B715  0F 84 E1 01 00 00         JZ 0x0054b8fc
0054B71B  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0054B721  8D 45 BC                  LEA EAX,[EBP + -0x44]
0054B724  8D 55 B8                  LEA EDX,[EBP + -0x48]
0054B727  6A 00                     PUSH 0x0
0054B729  50                        PUSH EAX
0054B72A  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0054B72D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054B733  E8 B8 20 1E 00            CALL 0x0072d7f0
0054B738  83 C4 08                  ADD ESP,0x8
0054B73B  85 C0                     TEST EAX,EAX
0054B73D  0F 85 B1 01 00 00         JNZ 0x0054b8f4
0054B743  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
0054B74A  74 1F                     JZ 0x0054b76b
0054B74C  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
0054B752  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0054B758  68 8F 00 00 00            PUSH 0x8f
0054B75D  6A 10                     PUSH 0x10
0054B75F  83 C1 E8                  ADD ECX,-0x18
0054B762  68 A1 00 00 00            PUSH 0xa1
0054B767  51                        PUSH ECX
0054B768  52                        PUSH EDX
0054B769  EB 19                     JMP 0x0054b784
LAB_0054b76b:
0054B76B  A1 30 67 80 00            MOV EAX,[0x00806730]
0054B770  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0054B776  6A 68                     PUSH 0x68
0054B778  6A 0B                     PUSH 0xb
0054B77A  83 C0 EB                  ADD EAX,-0x15
0054B77D  68 EA 00 00 00            PUSH 0xea
0054B782  50                        PUSH EAX
0054B783  51                        PUSH ECX
LAB_0054b784:
0054B784  E8 F7 A7 16 00            CALL 0x006b5f80
0054B789  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0054B78C  8B 86 DF 04 00 00         MOV EAX,dword ptr [ESI + 0x4df]
0054B792  85 C0                     TEST EAX,EAX
0054B794  0F 8C 81 00 00 00         JL 0x0054b81b
0054B79A  33 C0                     XOR EAX,EAX
0054B79C  A0 4E 87 80 00            MOV AL,[0x0080874e]
0054B7A1  48                        DEC EAX
0054B7A2  74 3A                     JZ 0x0054b7de
0054B7A4  48                        DEC EAX
0054B7A5  74 33                     JZ 0x0054b7da
0054B7A7  48                        DEC EAX
0054B7A8  75 71                     JNZ 0x0054b81b
0054B7AA  8B 96 E3 04 00 00         MOV EDX,dword ptr [ESI + 0x4e3]
0054B7B0  6A 05                     PUSH 0x5
0054B7B2  52                        PUSH EDX
0054B7B3  E8 E8 FB 1B 00            CALL 0x0070b3a0
0054B7B8  50                        PUSH EAX
0054B7B9  8B 86 DF 04 00 00         MOV EAX,dword ptr [ESI + 0x4df]
0054B7BF  6A 06                     PUSH 0x6
0054B7C1  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0054B7C4  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0054B7C7  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
0054B7CD  B8 36 01 00 00            MOV EAX,0x136
0054B7D2  2B C2                     SUB EAX,EDX
0054B7D4  83 C1 EB                  ADD ECX,-0x15
0054B7D7  50                        PUSH EAX
0054B7D8  EB 38                     JMP 0x0054b812
LAB_0054b7da:
0054B7DA  6A 03                     PUSH 0x3
0054B7DC  EB 02                     JMP 0x0054b7e0
LAB_0054b7de:
0054B7DE  6A 01                     PUSH 0x1
LAB_0054b7e0:
0054B7E0  8B 96 E3 04 00 00         MOV EDX,dword ptr [ESI + 0x4e3]
0054B7E6  52                        PUSH EDX
0054B7E7  E8 B4 FB 1B 00            CALL 0x0070b3a0
0054B7EC  50                        PUSH EAX
0054B7ED  8B 86 DF 04 00 00         MOV EAX,dword ptr [ESI + 0x4df]
0054B7F3  6A 06                     PUSH 0x6
0054B7F5  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0054B7FC  2B C8                     SUB ECX,EAX
0054B7FE  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
0054B801  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
0054B807  B8 15 01 00 00            MOV EAX,0x115
0054B80C  2B C2                     SUB EAX,EDX
0054B80E  83 C1 E8                  ADD ECX,-0x18
0054B811  50                        PUSH EAX
LAB_0054b812:
0054B812  51                        PUSH ECX
0054B813  E8 20 7F EB FF            CALL 0x00403738
0054B818  83 C4 18                  ADD ESP,0x18
LAB_0054b81b:
0054B81B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054B81E  85 C0                     TEST EAX,EAX
0054B820  89 86 DF 04 00 00         MOV dword ptr [ESI + 0x4df],EAX
0054B826  0F 8C B8 00 00 00         JL 0x0054b8e4
0054B82C  33 C0                     XOR EAX,EAX
0054B82E  A0 4E 87 80 00            MOV AL,[0x0080874e]
0054B833  48                        DEC EAX
0054B834  74 71                     JZ 0x0054b8a7
0054B836  48                        DEC EAX
0054B837  74 37                     JZ 0x0054b870
0054B839  48                        DEC EAX
0054B83A  0F 85 A4 00 00 00         JNZ 0x0054b8e4
0054B840  8B 96 E3 04 00 00         MOV EDX,dword ptr [ESI + 0x4e3]
0054B846  6A 04                     PUSH 0x4
0054B848  52                        PUSH EDX
0054B849  E8 52 FB 1B 00            CALL 0x0070b3a0
0054B84E  8B B6 DF 04 00 00         MOV ESI,dword ptr [ESI + 0x4df]
0054B854  50                        PUSH EAX
0054B855  BA 36 01 00 00            MOV EDX,0x136
0054B85A  6A 06                     PUSH 0x6
0054B85C  8D 04 F6                  LEA EAX,[ESI + ESI*0x8]
0054B85F  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
0054B862  A1 30 67 80 00            MOV EAX,[0x00806730]
0054B867  2B D1                     SUB EDX,ECX
0054B869  83 C0 EB                  ADD EAX,-0x15
0054B86C  52                        PUSH EDX
0054B86D  50                        PUSH EAX
0054B86E  EB 6C                     JMP 0x0054b8dc
LAB_0054b870:
0054B870  8B 8E E3 04 00 00         MOV ECX,dword ptr [ESI + 0x4e3]
0054B876  6A 02                     PUSH 0x2
0054B878  51                        PUSH ECX
0054B879  E8 22 FB 1B 00            CALL 0x0070b3a0
0054B87E  8B B6 DF 04 00 00         MOV ESI,dword ptr [ESI + 0x4df]
0054B884  50                        PUSH EAX
0054B885  B9 15 01 00 00            MOV ECX,0x115
0054B88A  6A 06                     PUSH 0x6
0054B88C  8D 14 F5 00 00 00 00      LEA EDX,[ESI*0x8 + 0x0]
0054B893  2B D6                     SUB EDX,ESI
0054B895  8D 04 96                  LEA EAX,[ESI + EDX*0x4]
0054B898  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
0054B89E  2B C8                     SUB ECX,EAX
0054B8A0  83 C2 E8                  ADD EDX,-0x18
0054B8A3  51                        PUSH ECX
0054B8A4  52                        PUSH EDX
0054B8A5  EB 35                     JMP 0x0054b8dc
LAB_0054b8a7:
0054B8A7  8B 86 E3 04 00 00         MOV EAX,dword ptr [ESI + 0x4e3]
0054B8AD  6A 00                     PUSH 0x0
0054B8AF  50                        PUSH EAX
0054B8B0  E8 EB FA 1B 00            CALL 0x0070b3a0
0054B8B5  8B B6 DF 04 00 00         MOV ESI,dword ptr [ESI + 0x4df]
0054B8BB  50                        PUSH EAX
0054B8BC  B8 15 01 00 00            MOV EAX,0x115
0054B8C1  6A 06                     PUSH 0x6
0054B8C3  8D 0C F5 00 00 00 00      LEA ECX,[ESI*0x8 + 0x0]
0054B8CA  2B CE                     SUB ECX,ESI
0054B8CC  8D 14 8E                  LEA EDX,[ESI + ECX*0x4]
0054B8CF  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
0054B8D5  2B C2                     SUB EAX,EDX
0054B8D7  83 C1 E8                  ADD ECX,-0x18
0054B8DA  50                        PUSH EAX
0054B8DB  51                        PUSH ECX
LAB_0054b8dc:
0054B8DC  E8 57 7E EB FF            CALL 0x00403738
0054B8E1  83 C4 18                  ADD ESP,0x18
LAB_0054b8e4:
0054B8E4  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0054B8E7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054B8ED  5E                        POP ESI
0054B8EE  8B E5                     MOV ESP,EBP
0054B8F0  5D                        POP EBP
0054B8F1  C2 04 00                  RET 0x4
LAB_0054b8f4:
0054B8F4  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0054B8F7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_0054b8fc:
0054B8FC  5E                        POP ESI
0054B8FD  8B E5                     MOV ESP,EBP
0054B8FF  5D                        POP EBP
0054B900  C2 04 00                  RET 0x4
