LoadGamePlt:
0055D730  55                        PUSH EBP
0055D731  8B EC                     MOV EBP,ESP
0055D733  83 EC 44                  SUB ESP,0x44
0055D736  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055D73B  56                        PUSH ESI
0055D73C  57                        PUSH EDI
0055D73D  8D 55 C0                  LEA EDX,[EBP + -0x40]
0055D740  8D 4D BC                  LEA ECX,[EBP + -0x44]
0055D743  6A 00                     PUSH 0x0
0055D745  52                        PUSH EDX
0055D746  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0055D749  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055D74F  E8 9C 00 1D 00            CALL 0x0072d7f0
0055D754  8B F0                     MOV ESI,EAX
0055D756  83 C4 08                  ADD ESP,0x8
0055D759  85 F6                     TEST ESI,ESI
0055D75B  0F 85 FB 00 00 00         JNZ 0x0055d85c
0055D761  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0055D764  A1 70 AF 79 00            MOV EAX,[0x0079af70]
0055D769  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0055D76C  6A 01                     PUSH 0x1
0055D76E  56                        PUSH ESI
0055D76F  50                        PUSH EAX
0055D770  57                        PUSH EDI
0055D771  E8 4A A8 1B 00            CALL 0x00717fc0
0055D776  8B 0D 74 AF 79 00         MOV ECX,dword ptr [0x0079af74]
0055D77C  6A 01                     PUSH 0x1
0055D77E  56                        PUSH ESI
0055D77F  51                        PUSH ECX
0055D780  57                        PUSH EDI
0055D781  A3 B4 32 80 00            MOV [0x008032b4],EAX
0055D786  E8 35 A8 1B 00            CALL 0x00717fc0
0055D78B  8B 15 78 AF 79 00         MOV EDX,dword ptr [0x0079af78]
0055D791  6A 01                     PUSH 0x1
0055D793  56                        PUSH ESI
0055D794  52                        PUSH EDX
0055D795  57                        PUSH EDI
0055D796  A3 B8 32 80 00            MOV [0x008032b8],EAX
0055D79B  E8 20 A8 1B 00            CALL 0x00717fc0
0055D7A0  A3 BC 32 80 00            MOV [0x008032bc],EAX
0055D7A5  A1 7C AF 79 00            MOV EAX,[0x0079af7c]
0055D7AA  6A 01                     PUSH 0x1
0055D7AC  56                        PUSH ESI
0055D7AD  50                        PUSH EAX
0055D7AE  57                        PUSH EDI
0055D7AF  E8 0C A8 1B 00            CALL 0x00717fc0
0055D7B4  8B 0D 80 AF 79 00         MOV ECX,dword ptr [0x0079af80]
0055D7BA  83 C4 40                  ADD ESP,0x40
0055D7BD  A3 C0 32 80 00            MOV [0x008032c0],EAX
0055D7C2  6A 01                     PUSH 0x1
0055D7C4  56                        PUSH ESI
0055D7C5  51                        PUSH ECX
0055D7C6  57                        PUSH EDI
0055D7C7  E8 F4 A7 1B 00            CALL 0x00717fc0
0055D7CC  8B 15 84 AF 79 00         MOV EDX,dword ptr [0x0079af84]
0055D7D2  6A 01                     PUSH 0x1
0055D7D4  56                        PUSH ESI
0055D7D5  52                        PUSH EDX
0055D7D6  57                        PUSH EDI
0055D7D7  A3 C4 32 80 00            MOV [0x008032c4],EAX
0055D7DC  E8 DF A7 1B 00            CALL 0x00717fc0
0055D7E1  A3 C8 32 80 00            MOV [0x008032c8],EAX
0055D7E6  A1 8C AF 79 00            MOV EAX,[0x0079af8c]
0055D7EB  6A 01                     PUSH 0x1
0055D7ED  56                        PUSH ESI
0055D7EE  50                        PUSH EAX
0055D7EF  57                        PUSH EDI
0055D7F0  E8 CB A7 1B 00            CALL 0x00717fc0
0055D7F5  8B 0D 90 AF 79 00         MOV ECX,dword ptr [0x0079af90]
0055D7FB  6A 01                     PUSH 0x1
0055D7FD  56                        PUSH ESI
0055D7FE  51                        PUSH ECX
0055D7FF  57                        PUSH EDI
0055D800  A3 CC 32 80 00            MOV [0x008032cc],EAX
0055D805  E8 B6 A7 1B 00            CALL 0x00717fc0
0055D80A  8B 15 94 AF 79 00         MOV EDX,dword ptr [0x0079af94]
0055D810  83 C4 40                  ADD ESP,0x40
0055D813  A3 D0 32 80 00            MOV [0x008032d0],EAX
0055D818  6A 01                     PUSH 0x1
0055D81A  56                        PUSH ESI
0055D81B  52                        PUSH EDX
0055D81C  57                        PUSH EDI
0055D81D  E8 9E A7 1B 00            CALL 0x00717fc0
0055D822  8B 0D C4 32 80 00         MOV ECX,dword ptr [0x008032c4]
0055D828  8B 15 BC 32 80 00         MOV EDX,dword ptr [0x008032bc]
0055D82E  A3 D4 32 80 00            MOV [0x008032d4],EAX
0055D833  A1 C0 32 80 00            MOV EAX,[0x008032c0]
0055D838  A3 CC 73 80 00            MOV [0x008073cc],EAX
0055D83D  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0055D840  83 C4 10                  ADD ESP,0x10
0055D843  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055D848  89 0D 60 75 80 00         MOV dword ptr [0x00807560],ECX
0055D84E  89 15 C8 73 80 00         MOV dword ptr [0x008073c8],EDX
0055D854  33 C0                     XOR EAX,EAX
0055D856  5F                        POP EDI
0055D857  5E                        POP ESI
0055D858  8B E5                     MOV ESP,EBP
0055D85A  5D                        POP EBP
0055D85B  C3                        RET
LAB_0055d85c:
0055D85C  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0055D85F  68 B8 95 7C 00            PUSH 0x7c95b8
0055D864  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055D869  56                        PUSH ESI
0055D86A  6A 00                     PUSH 0x0
0055D86C  6A 51                     PUSH 0x51
0055D86E  68 9C 95 7C 00            PUSH 0x7c959c
0055D873  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055D879  E8 52 FC 14 00            CALL 0x006ad4d0
0055D87E  83 C4 18                  ADD ESP,0x18
0055D881  85 C0                     TEST EAX,EAX
0055D883  74 01                     JZ 0x0055d886
0055D885  CC                        INT3
LAB_0055d886:
0055D886  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055D889  52                        PUSH EDX
0055D88A  E8 AA 67 EA FF            CALL 0x00404039
0055D88F  83 C4 04                  ADD ESP,0x4
0055D892  6A 55                     PUSH 0x55
0055D894  68 9C 95 7C 00            PUSH 0x7c959c
0055D899  6A 00                     PUSH 0x0
0055D89B  56                        PUSH ESI
0055D89C  E8 9F 85 14 00            CALL 0x006a5e40
0055D8A1  8B C6                     MOV EAX,ESI
0055D8A3  5F                        POP EDI
0055D8A4  5E                        POP ESI
0055D8A5  8B E5                     MOV ESP,EBP
0055D8A7  5D                        POP EBP
0055D8A8  C3                        RET
