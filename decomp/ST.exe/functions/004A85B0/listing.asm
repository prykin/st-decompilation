STGroupBoatC::StartReceiveOrderSound:
004A85B0  55                        PUSH EBP
004A85B1  8B EC                     MOV EBP,ESP
004A85B3  83 EC 08                  SUB ESP,0x8
004A85B6  53                        PUSH EBX
004A85B7  56                        PUSH ESI
004A85B8  57                        PUSH EDI
004A85B9  8B F9                     MOV EDI,ECX
004A85BB  33 DB                     XOR EBX,EBX
004A85BD  8B 47 29                  MOV EAX,dword ptr [EDI + 0x29]
004A85C0  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
004A85C3  85 F6                     TEST ESI,ESI
004A85C5  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004A85C8  0F 86 87 00 00 00         JBE 0x004a8655
004A85CE  33 D2                     XOR EDX,EDX
LAB_004a85d0:
004A85D0  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A85D3  51                        PUSH ECX
004A85D4  8B 4F 29                  MOV ECX,dword ptr [EDI + 0x29]
004A85D7  E8 94 46 20 00            CALL 0x006acc70
004A85DC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A85DF  66 3D FF FF               CMP AX,0xffff
004A85E3  74 5F                     JZ 0x004a8644
004A85E5  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
004A85E8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A85EE  6A 01                     PUSH 0x1
004A85F0  50                        PUSH EAX
004A85F1  52                        PUSH EDX
004A85F2  E8 C3 A2 F5 FF            CALL 0x004028ba
004A85F7  8B F0                     MOV ESI,EAX
004A85F9  85 F6                     TEST ESI,ESI
004A85FB  75 3D                     JNZ 0x004a863a
004A85FD  68 0C C5 7A 00            PUSH 0x7ac50c
004A8602  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A8607  50                        PUSH EAX
004A8608  50                        PUSH EAX
004A8609  68 2D 17 00 00            PUSH 0x172d
004A860E  68 3C BE 7A 00            PUSH 0x7abe3c
004A8613  E8 B8 4E 20 00            CALL 0x006ad4d0
004A8618  83 C4 18                  ADD ESP,0x18
004A861B  85 C0                     TEST EAX,EAX
004A861D  74 01                     JZ 0x004a8620
004A861F  CC                        INT3
LAB_004a8620:
004A8620  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A8625  68 2E 17 00 00            PUSH 0x172e
004A862A  68 3C BE 7A 00            PUSH 0x7abe3c
004A862F  50                        PUSH EAX
004A8630  68 04 00 FE AF            PUSH 0xaffe0004
004A8635  E8 06 D8 1F 00            CALL 0x006a5e40
LAB_004a863a:
004A863A  8B CE                     MOV ECX,ESI
004A863C  E8 09 9A F5 FF            CALL 0x0040204a
004A8641  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_004a8644:
004A8644  43                        INC EBX
004A8645  8B D3                     MOV EDX,EBX
004A8647  81 E2 FF FF 00 00         AND EDX,0xffff
004A864D  3B D6                     CMP EDX,ESI
004A864F  0F 82 7B FF FF FF         JC 0x004a85d0
LAB_004a8655:
004A8655  5F                        POP EDI
004A8656  5E                        POP ESI
004A8657  5B                        POP EBX
004A8658  8B E5                     MOV ESP,EBP
004A865A  5D                        POP EBP
004A865B  C3                        RET
