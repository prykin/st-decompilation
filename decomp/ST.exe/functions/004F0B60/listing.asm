BldObjPanelTy::Update:
004F0B60  55                        PUSH EBP
004F0B61  8B EC                     MOV EBP,ESP
004F0B63  83 EC 48                  SUB ESP,0x48
004F0B66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F0B6B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F0B6E  56                        PUSH ESI
004F0B6F  8D 55 BC                  LEA EDX,[EBP + -0x44]
004F0B72  8D 4D B8                  LEA ECX,[EBP + -0x48]
004F0B75  6A 00                     PUSH 0x0
004F0B77  52                        PUSH EDX
004F0B78  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004F0B7B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F0B81  E8 6A CC 23 00            CALL 0x0072d7f0
004F0B86  8B F0                     MOV ESI,EAX
004F0B88  83 C4 08                  ADD ESP,0x8
004F0B8B  85 F6                     TEST ESI,ESI
004F0B8D  75 68                     JNZ 0x004f0bf7
004F0B8F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004F0B92  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004F0B98  8D 86 7E 02 00 00         LEA EAX,[ESI + 0x27e]
004F0B9E  50                        PUSH EAX
004F0B9F  6A 08                     PUSH 0x8
004F0BA1  E8 16 2A F1 FF            CALL 0x004035bc
004F0BA6  33 C9                     XOR ECX,ECX
004F0BA8  8A 8E 79 02 00 00         MOV CL,byte ptr [ESI + 0x279]
004F0BAE  8B 84 8E 7E 02 00 00      MOV EAX,dword ptr [ESI + ECX*0x4 + 0x27e]
004F0BB5  85 C0                     TEST EAX,EAX
004F0BB7  74 05                     JZ 0x004f0bbe
004F0BB9  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004F0BBC  EB 02                     JMP 0x004f0bc0
LAB_004f0bbe:
004F0BBE  33 C9                     XOR ECX,ECX
LAB_004f0bc0:
004F0BC0  33 D2                     XOR EDX,EDX
004F0BC2  8A 96 78 02 00 00         MOV DL,byte ptr [ESI + 0x278]
004F0BC8  8B 84 96 7E 02 00 00      MOV EAX,dword ptr [ESI + EDX*0x4 + 0x27e]
004F0BCF  85 C0                     TEST EAX,EAX
004F0BD1  74 05                     JZ 0x004f0bd8
004F0BD3  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
004F0BD6  EB 02                     JMP 0x004f0bda
LAB_004f0bd8:
004F0BD8  33 C0                     XOR EAX,EAX
LAB_004f0bda:
004F0BDA  51                        PUSH ECX
004F0BDB  50                        PUSH EAX
004F0BDC  8B CE                     MOV ECX,ESI
004F0BDE  E8 30 1E F1 FF            CALL 0x00402a13
004F0BE3  8B CE                     MOV ECX,ESI
004F0BE5  E8 90 20 F1 FF            CALL 0x00402c7a
004F0BEA  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004F0BED  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F0BF2  5E                        POP ESI
004F0BF3  8B E5                     MOV ESP,EBP
004F0BF5  5D                        POP EBP
004F0BF6  C3                        RET
LAB_004f0bf7:
004F0BF7  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004F0BFA  68 F0 19 7C 00            PUSH 0x7c19f0
004F0BFF  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F0C04  56                        PUSH ESI
004F0C05  6A 00                     PUSH 0x0
004F0C07  6A 5E                     PUSH 0x5e
004F0C09  68 84 19 7C 00            PUSH 0x7c1984
004F0C0E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F0C14  E8 B7 C8 1B 00            CALL 0x006ad4d0
004F0C19  83 C4 18                  ADD ESP,0x18
004F0C1C  85 C0                     TEST EAX,EAX
004F0C1E  74 01                     JZ 0x004f0c21
004F0C20  CC                        INT3
LAB_004f0c21:
004F0C21  6A 5E                     PUSH 0x5e
004F0C23  68 84 19 7C 00            PUSH 0x7c1984
004F0C28  6A 00                     PUSH 0x0
004F0C2A  56                        PUSH ESI
004F0C2B  E8 10 52 1B 00            CALL 0x006a5e40
004F0C30  5E                        POP ESI
004F0C31  8B E5                     MOV ESP,EBP
004F0C33  5D                        POP EBP
004F0C34  C3                        RET
