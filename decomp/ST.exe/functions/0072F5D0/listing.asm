FUN_0072f5d0:
0072F5D0  55                        PUSH EBP
0072F5D1  8B EC                     MOV EBP,ESP
0072F5D3  81 EC A8 00 00 00         SUB ESP,0xa8
0072F5D9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F5DC  50                        PUSH EAX
0072F5DD  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
0072F5E3  51                        PUSH ECX
0072F5E4  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
0072F5EA  52                        PUSH EDX
0072F5EB  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
0072F5F1  50                        PUSH EAX
0072F5F2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072F5F5  51                        PUSH ECX
0072F5F6  E8 75 02 00 00            CALL 0x0072f870
0072F5FB  83 C4 14                  ADD ESP,0x14
0072F5FE  85 C0                     TEST EAX,EAX
0072F600  75 07                     JNZ 0x0072f609
0072F602  33 C0                     XOR EAX,EAX
0072F604  E9 56 01 00 00            JMP 0x0072f75f
LAB_0072f609:
0072F609  68 32 01 00 00            PUSH 0x132
0072F60E  68 F4 FE 79 00            PUSH 0x79fef4
0072F613  6A 02                     PUSH 0x2
0072F615  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
0072F61B  52                        PUSH EDX
0072F61C  E8 EF 75 00 00            CALL 0x00736c10
0072F621  83 C4 04                  ADD ESP,0x4
0072F624  83 C0 01                  ADD EAX,0x1
0072F627  50                        PUSH EAX
0072F628  E8 D7 1A CD FF            CALL 0x00401104
0072F62D  83 C4 10                  ADD ESP,0x10
0072F630  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0072F633  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0072F637  75 07                     JNZ 0x0072f640
0072F639  33 C0                     XOR EAX,EAX
0072F63B  E9 1F 01 00 00            JMP 0x0072f75f
LAB_0072f640:
0072F640  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F643  6B C0 0C                  IMUL EAX,EAX,0xc
0072F646  8B 88 34 12 7F 00         MOV ECX,dword ptr [EAX + 0x7f1234]
0072F64C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0072F64F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F652  8B 04 95 08 72 85 00      MOV EAX,dword ptr [EDX*0x4 + 0x857208]
0072F659  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072F65C  6A 06                     PUSH 0x6
0072F65E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072F661  6B C9 06                  IMUL ECX,ECX,0x6
0072F664  81 C1 50 72 85 00         ADD ECX,0x857250
0072F66A  51                        PUSH ECX
0072F66B  8D 55 EC                  LEA EDX,[EBP + -0x14]
0072F66E  52                        PUSH EDX
0072F66F  E8 BC AC 00 00            CALL 0x0073a330
0072F674  83 C4 0C                  ADD ESP,0xc
0072F677  A1 20 72 85 00            MOV EAX,[0x00857220]
0072F67C  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0072F67F  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
0072F685  51                        PUSH ECX
0072F686  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072F689  52                        PUSH EDX
0072F68A  E8 B1 AB 00 00            CALL 0x0073a240
0072F68F  83 C4 08                  ADD ESP,0x8
0072F692  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072F695  6B C9 0C                  IMUL ECX,ECX,0xc
0072F698  89 81 34 12 7F 00         MOV dword ptr [ECX + 0x7f1234],EAX
0072F69E  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
0072F6A4  81 E2 FF FF 00 00         AND EDX,0xffff
0072F6AA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F6AD  89 14 85 08 72 85 00      MOV dword ptr [EAX*0x4 + 0x857208],EDX
0072F6B4  6A 06                     PUSH 0x6
0072F6B6  8D 8D 58 FF FF FF         LEA ECX,[EBP + 0xffffff58]
0072F6BC  51                        PUSH ECX
0072F6BD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F6C0  6B D2 06                  IMUL EDX,EDX,0x6
0072F6C3  81 C2 50 72 85 00         ADD EDX,0x857250
0072F6C9  52                        PUSH EDX
0072F6CA  E8 61 AC 00 00            CALL 0x0073a330
0072F6CF  83 C4 0C                  ADD ESP,0xc
0072F6D2  83 7D 08 02               CMP dword ptr [EBP + 0x8],0x2
0072F6D6  75 0B                     JNZ 0x0072f6e3
0072F6D8  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
0072F6DE  A3 20 72 85 00            MOV [0x00857220],EAX
LAB_0072f6e3:
0072F6E3  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
0072F6E7  75 0C                     JNZ 0x0072f6f5
0072F6E9  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
0072F6EF  89 0D 24 72 85 00         MOV dword ptr [0x00857224],ECX
LAB_0072f6f5:
0072F6F5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F6F8  6B D2 0C                  IMUL EDX,EDX,0xc
0072F6FB  FF 92 38 12 7F 00         CALL dword ptr [EDX + 0x7f1238]
0072F701  85 C0                     TEST EAX,EAX
0072F703  74 37                     JZ 0x0072f73c
0072F705  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F708  6B C0 0C                  IMUL EAX,EAX,0xc
0072F70B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072F70E  89 88 34 12 7F 00         MOV dword ptr [EAX + 0x7f1234],ECX
0072F714  6A 02                     PUSH 0x2
0072F716  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072F719  52                        PUSH EDX
0072F71A  E8 ED 4D CD FF            CALL 0x0040450c
0072F71F  83 C4 08                  ADD ESP,0x8
0072F722  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F725  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072F728  89 0C 85 08 72 85 00      MOV dword ptr [EAX*0x4 + 0x857208],ECX
0072F72F  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0072F732  89 15 20 72 85 00         MOV dword ptr [0x00857220],EDX
0072F738  33 C0                     XOR EAX,EAX
0072F73A  EB 23                     JMP 0x0072f75f
LAB_0072f73c:
0072F73C  81 7D F4 20 11 7F 00      CMP dword ptr [EBP + -0xc],0x7f1120
0072F743  74 0E                     JZ 0x0072f753
0072F745  6A 02                     PUSH 0x2
0072F747  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072F74A  50                        PUSH EAX
0072F74B  E8 BC 4D CD FF            CALL 0x0040450c
0072F750  83 C4 08                  ADD ESP,0x8
LAB_0072f753:
0072F753  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072F756  6B C9 0C                  IMUL ECX,ECX,0xc
0072F759  8B 81 34 12 7F 00         MOV EAX,dword ptr [ECX + 0x7f1234]
LAB_0072f75f:
0072F75F  8B E5                     MOV ESP,EBP
0072F761  5D                        POP EBP
0072F762  C3                        RET
