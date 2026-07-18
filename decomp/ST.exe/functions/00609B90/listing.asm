FUN_00609b90:
00609B90  55                        PUSH EBP
00609B91  8B EC                     MOV EBP,ESP
00609B93  83 EC 48                  SUB ESP,0x48
00609B96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00609B9B  53                        PUSH EBX
00609B9C  56                        PUSH ESI
00609B9D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00609BA0  57                        PUSH EDI
00609BA1  8D 55 BC                  LEA EDX,[EBP + -0x44]
00609BA4  8D 4D B8                  LEA ECX,[EBP + -0x48]
00609BA7  6A 00                     PUSH 0x0
00609BA9  52                        PUSH EDX
00609BAA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00609BAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00609BB3  E8 38 3C 12 00            CALL 0x0072d7f0
00609BB8  8B F0                     MOV ESI,EAX
00609BBA  83 C4 08                  ADD ESP,0x8
00609BBD  85 F6                     TEST ESI,ESI
00609BBF  75 73                     JNZ 0x00609c34
00609BC1  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00609BC4  8B 87 34 02 00 00         MOV EAX,dword ptr [EDI + 0x234]
00609BCA  85 C0                     TEST EAX,EAX
00609BCC  74 50                     JZ 0x00609c1e
00609BCE  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
00609BD1  85 DB                     TEST EBX,EBX
00609BD3  7E 49                     JLE 0x00609c1e
LAB_00609bd5:
00609BD5  8B 8F 34 02 00 00         MOV ECX,dword ptr [EDI + 0x234]
00609BDB  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
00609BDE  73 0D                     JNC 0x00609bed
00609BE0  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00609BE3  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00609BE6  0F AF C6                  IMUL EAX,ESI
00609BE9  03 C2                     ADD EAX,EDX
00609BEB  EB 02                     JMP 0x00609bef
LAB_00609bed:
00609BED  33 C0                     XOR EAX,EAX
LAB_00609bef:
00609BEF  85 C0                     TEST EAX,EAX
00609BF1  74 26                     JZ 0x00609c19
00609BF3  83 BF F5 01 00 00 4D      CMP dword ptr [EDI + 0x1f5],0x4d
00609BFA  75 0E                     JNZ 0x00609c0a
00609BFC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00609BFF  85 C9                     TEST ECX,ECX
00609C01  74 07                     JZ 0x00609c0a
00609C03  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
LAB_00609c0a:
00609C0A  8B 48 3C                  MOV ECX,dword ptr [EAX + 0x3c]
00609C0D  85 C9                     TEST ECX,ECX
00609C0F  7D 08                     JGE 0x00609c19
00609C11  56                        PUSH ESI
00609C12  8B CF                     MOV ECX,EDI
00609C14  E8 C6 85 DF FF            CALL 0x004021df
LAB_00609c19:
00609C19  46                        INC ESI
00609C1A  3B F3                     CMP ESI,EBX
00609C1C  7C B7                     JL 0x00609bd5
LAB_00609c1e:
00609C1E  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00609C21  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00609C26  B8 01 00 00 00            MOV EAX,0x1
00609C2B  5F                        POP EDI
00609C2C  5E                        POP ESI
00609C2D  5B                        POP EBX
00609C2E  8B E5                     MOV ESP,EBP
00609C30  5D                        POP EBP
00609C31  C2 04 00                  RET 0x4
LAB_00609c34:
00609C34  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00609C37  68 74 F8 7C 00            PUSH 0x7cf874
00609C3C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00609C41  56                        PUSH ESI
00609C42  6A 00                     PUSH 0x0
00609C44  68 08 02 00 00            PUSH 0x208
00609C49  68 50 F8 7C 00            PUSH 0x7cf850
00609C4E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00609C54  E8 77 38 0A 00            CALL 0x006ad4d0
00609C59  83 C4 18                  ADD ESP,0x18
00609C5C  85 C0                     TEST EAX,EAX
00609C5E  74 01                     JZ 0x00609c61
00609C60  CC                        INT3
LAB_00609c61:
00609C61  68 0A 02 00 00            PUSH 0x20a
00609C66  68 50 F8 7C 00            PUSH 0x7cf850
00609C6B  6A 00                     PUSH 0x0
00609C6D  56                        PUSH ESI
00609C6E  E8 CD C1 09 00            CALL 0x006a5e40
00609C73  5F                        POP EDI
00609C74  5E                        POP ESI
00609C75  B8 FF FF 00 00            MOV EAX,0xffff
00609C7A  5B                        POP EBX
00609C7B  8B E5                     MOV ESP,EBP
00609C7D  5D                        POP EBP
00609C7E  C2 04 00                  RET 0x4
