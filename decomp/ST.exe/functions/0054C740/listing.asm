CreatePlaySystem:
0054C740  55                        PUSH EBP
0054C741  8B EC                     MOV EBP,ESP
0054C743  83 EC 4C                  SUB ESP,0x4c
0054C746  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054C74B  53                        PUSH EBX
0054C74C  56                        PUSH ESI
0054C74D  8D 55 B8                  LEA EDX,[EBP + -0x48]
0054C750  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0054C753  6A 00                     PUSH 0x0
0054C755  52                        PUSH EDX
0054C756  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0054C759  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054C75F  E8 8C 10 1E 00            CALL 0x0072d7f0
0054C764  8B F0                     MOV ESI,EAX
0054C766  83 C4 08                  ADD ESP,0x8
0054C769  85 F6                     TEST ESI,ESI
0054C76B  0F 85 C9 01 00 00         JNZ 0x0054c93a
0054C771  68 F8 00 00 00            PUSH 0xf8
0054C776  E8 B5 1D 1E 00            CALL 0x0072e530
0054C77B  83 C4 04                  ADD ESP,0x4
0054C77E  85 C0                     TEST EAX,EAX
0054C780  74 10                     JZ 0x0054c792
0054C782  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
0054C788  51                        PUSH ECX
0054C789  8B C8                     MOV ECX,EAX
0054C78B  E8 6A 58 EB FF            CALL 0x00401ffa
0054C790  EB 02                     JMP 0x0054c794
LAB_0054c792:
0054C792  33 C0                     XOR EAX,EAX
LAB_0054c794:
0054C794  85 C0                     TEST EAX,EAX
0054C796  A3 38 2A 80 00            MOV [0x00802a38],EAX
0054C79B  75 1A                     JNZ 0x0054c7b7
0054C79D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0054C7A3  6A 7D                     PUSH 0x7d
0054C7A5  68 30 84 7C 00            PUSH 0x7c8430
0054C7AA  52                        PUSH EDX
0054C7AB  6A FF                     PUSH -0x1
0054C7AD  E8 8E 96 15 00            CALL 0x006a5e40
0054C7B2  A1 38 2A 80 00            MOV EAX,[0x00802a38]
LAB_0054c7b7:
0054C7B7  C7 80 E0 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0xe0],0x0
0054C7C1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054C7C7  8B 01                     MOV EAX,dword ptr [ECX]
0054C7C9  FF 10                     CALL dword ptr [EAX]
0054C7CB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054C7D1  6A 00                     PUSH 0x0
0054C7D3  6A 00                     PUSH 0x0
0054C7D5  68 74 A1 7F 00            PUSH 0x7fa174
0054C7DA  8B 11                     MOV EDX,dword ptr [ECX]
0054C7DC  6A 00                     PUSH 0x0
0054C7DE  68 00 11 00 00            PUSH 0x1100
0054C7E3  FF 52 08                  CALL dword ptr [EDX + 0x8]
0054C7E6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054C7EC  6A 00                     PUSH 0x0
0054C7EE  6A 00                     PUSH 0x0
0054C7F0  6A 00                     PUSH 0x0
0054C7F2  8B 01                     MOV EAX,dword ptr [ECX]
0054C7F4  6A 00                     PUSH 0x0
0054C7F6  68 09 01 00 00            PUSH 0x109
0054C7FB  FF 50 08                  CALL dword ptr [EAX + 0x8]
0054C7FE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054C804  6A 00                     PUSH 0x0
0054C806  6A 00                     PUSH 0x0
0054C808  6A 00                     PUSH 0x0
0054C80A  8B 11                     MOV EDX,dword ptr [ECX]
0054C80C  6A 00                     PUSH 0x0
0054C80E  68 21 01 00 00            PUSH 0x121
0054C813  FF 52 08                  CALL dword ptr [EDX + 0x8]
0054C816  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054C81C  6A 00                     PUSH 0x0
0054C81E  6A 00                     PUSH 0x0
0054C820  6A 00                     PUSH 0x0
0054C822  8B 01                     MOV EAX,dword ptr [ECX]
0054C824  68 94 17 81 00            PUSH 0x811794
0054C829  68 43 01 00 00            PUSH 0x143
0054C82E  FF 50 08                  CALL dword ptr [EAX + 0x8]
0054C831  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054C837  6A 00                     PUSH 0x0
0054C839  6A 00                     PUSH 0x0
0054C83B  6A 00                     PUSH 0x0
0054C83D  8B 11                     MOV EDX,dword ptr [ECX]
0054C83F  68 A0 17 81 00            PUSH 0x8117a0
0054C844  68 45 01 00 00            PUSH 0x145
0054C849  FF 52 08                  CALL dword ptr [EDX + 0x8]
0054C84C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054C852  6A 00                     PUSH 0x0
0054C854  6A 00                     PUSH 0x0
0054C856  6A 00                     PUSH 0x0
0054C858  8B 01                     MOV EAX,dword ptr [ECX]
0054C85A  68 AC 17 81 00            PUSH 0x8117ac
0054C85F  68 46 01 00 00            PUSH 0x146
0054C864  FF 50 08                  CALL dword ptr [EAX + 0x8]
0054C867  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054C86D  6A 00                     PUSH 0x0
0054C86F  6A 00                     PUSH 0x0
0054C871  6A 00                     PUSH 0x0
0054C873  8B 11                     MOV EDX,dword ptr [ECX]
0054C875  68 80 17 81 00            PUSH 0x811780
0054C87A  68 5B 01 00 00            PUSH 0x15b
0054C87F  FF 52 08                  CALL dword ptr [EDX + 0x8]
0054C882  E8 E6 6B EB FF            CALL 0x0040346d
0054C887  A1 9C 87 80 00            MOV EAX,[0x0080879c]
0054C88C  85 C0                     TEST EAX,EAX
0054C88E  75 22                     JNZ 0x0054c8b2
0054C890  32 DB                     XOR BL,BL
0054C892  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
LAB_0054c895:
0054C895  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054C898  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0054C89E  6A 00                     PUSH 0x0
0054C8A0  6A 01                     PUSH 0x1
0054C8A2  50                        PUSH EAX
0054C8A3  E8 EF 55 EB FF            CALL 0x00401e97
0054C8A8  FE C3                     INC BL
0054C8AA  80 FB 08                  CMP BL,0x8
0054C8AD  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0054C8B0  72 E3                     JC 0x0054c895
LAB_0054c8b2:
0054C8B2  E8 11 89 EB FF            CALL 0x004051c8
0054C8B7  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0054C8BD  85 C9                     TEST ECX,ECX
0054C8BF  74 32                     JZ 0x0054c8f3
0054C8C1  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054C8C4  8D 45 F8                  LEA EAX,[EBP + -0x8]
0054C8C7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0054C8CA  8B 15 2C AE 79 00         MOV EDX,dword ptr [0x0079ae2c]
0054C8D0  6A 00                     PUSH 0x0
0054C8D2  50                        PUSH EAX
0054C8D3  52                        PUSH EDX
0054C8D4  6A 0C                     PUSH 0xc
0054C8D6  C7 45 FC 32 00 00 00      MOV dword ptr [EBP + -0x4],0x32
0054C8DD  E8 FE 53 1A 00            CALL 0x006f1ce0
0054C8E2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0054C8E8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054C8EB  39 41 20                  CMP dword ptr [ECX + 0x20],EAX
0054C8EE  73 03                     JNC 0x0054c8f3
0054C8F0  89 41 20                  MOV dword ptr [ECX + 0x20],EAX
LAB_0054c8f3:
0054C8F3  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0054C8F8  8B 0D 3C 16 81 00         MOV ECX,dword ptr [0x0081163c]
0054C8FE  6A 00                     PUSH 0x0
0054C900  50                        PUSH EAX
0054C901  51                        PUSH ECX
0054C902  B9 20 76 80 00            MOV ECX,0x807620
0054C907  E8 54 80 19 00            CALL 0x006e4960
0054C90C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0054C912  C7 82 E0 00 00 00 01 00 00 00  MOV dword ptr [EDX + 0xe0],0x1
0054C91C  A0 A0 67 80 00            MOV AL,[0x008067a0]
0054C921  84 C0                     TEST AL,AL
0054C923  74 07                     JZ 0x0054c92c
0054C925  C6 05 99 2A 80 00 01      MOV byte ptr [0x00802a99],0x1
LAB_0054c92c:
0054C92C  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0054C92F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054C934  5E                        POP ESI
0054C935  5B                        POP EBX
0054C936  8B E5                     MOV ESP,EBP
0054C938  5D                        POP EBP
0054C939  C3                        RET
LAB_0054c93a:
0054C93A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0054C93D  68 1C 84 7C 00            PUSH 0x7c841c
0054C942  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054C947  56                        PUSH ESI
0054C948  6A 00                     PUSH 0x0
0054C94A  68 B0 00 00 00            PUSH 0xb0
0054C94F  68 30 84 7C 00            PUSH 0x7c8430
0054C954  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054C95A  E8 71 0B 16 00            CALL 0x006ad4d0
0054C95F  83 C4 18                  ADD ESP,0x18
0054C962  85 C0                     TEST EAX,EAX
0054C964  74 01                     JZ 0x0054c967
0054C966  CC                        INT3
LAB_0054c967:
0054C967  68 B1 00 00 00            PUSH 0xb1
0054C96C  68 30 84 7C 00            PUSH 0x7c8430
0054C971  6A 00                     PUSH 0x0
0054C973  56                        PUSH ESI
0054C974  E8 C7 94 15 00            CALL 0x006a5e40
0054C979  5E                        POP ESI
0054C97A  5B                        POP EBX
0054C97B  8B E5                     MOV ESP,EBP
0054C97D  5D                        POP EBP
0054C97E  C3                        RET
