FUN_0067d9c0:
0067D9C0  55                        PUSH EBP
0067D9C1  8B EC                     MOV EBP,ESP
0067D9C3  83 EC 54                  SUB ESP,0x54
0067D9C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067D9CB  53                        PUSH EBX
0067D9CC  56                        PUSH ESI
0067D9CD  33 DB                     XOR EBX,EBX
0067D9CF  57                        PUSH EDI
0067D9D0  8D 55 B0                  LEA EDX,[EBP + -0x50]
0067D9D3  8D 4D AC                  LEA ECX,[EBP + -0x54]
0067D9D6  53                        PUSH EBX
0067D9D7  52                        PUSH EDX
0067D9D8  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0067D9DB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0067D9DE  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0067D9E1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067D9E7  E8 04 FE 0A 00            CALL 0x0072d7f0
0067D9EC  8B F0                     MOV ESI,EAX
0067D9EE  83 C4 08                  ADD ESP,0x8
0067D9F1  3B F3                     CMP ESI,EBX
0067D9F3  0F 85 8D 00 00 00         JNZ 0x0067da86
0067D9F9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0067D9FC  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0067D9FF  3B FB                     CMP EDI,EBX
0067DA01  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0067DA04  74 0A                     JZ 0x0067da10
0067DA06  85 DB                     TEST EBX,EBX
0067DA08  74 06                     JZ 0x0067da10
0067DA0A  80 7E 18 02               CMP byte ptr [ESI + 0x18],0x2
0067DA0E  74 17                     JZ 0x0067da27
LAB_0067da10:
0067DA10  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067DA15  68 0B 01 00 00            PUSH 0x10b
0067DA1A  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DA1F  50                        PUSH EAX
0067DA20  6A CC                     PUSH -0x34
0067DA22  E8 19 84 02 00            CALL 0x006a5e40
LAB_0067da27:
0067DA27  8B 96 06 01 00 00         MOV EDX,dword ptr [ESI + 0x106]
0067DA2D  8D 4D F0                  LEA ECX,[EBP + -0x10]
0067DA30  51                        PUSH ECX
0067DA31  52                        PUSH EDX
0067DA32  E8 88 44 D8 FF            CALL 0x00401ebf
0067DA37  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0067DA3A  8D 4D F4                  LEA ECX,[EBP + -0xc]
0067DA3D  51                        PUSH ECX
0067DA3E  52                        PUSH EDX
0067DA3F  50                        PUSH EAX
0067DA40  56                        PUSH ESI
0067DA41  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0067DA44  E8 BB 77 D8 FF            CALL 0x00405204
0067DA49  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067DA4C  8D 45 F8                  LEA EAX,[EBP + -0x8]
0067DA4F  50                        PUSH EAX
0067DA50  E8 E2 3A D8 FF            CALL 0x00401537
0067DA55  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0067DA58  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0067DA5B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067DA5E  51                        PUSH ECX
0067DA5F  52                        PUSH EDX
0067DA60  50                        PUSH EAX
0067DA61  53                        PUSH EBX
0067DA62  57                        PUSH EDI
0067DA63  E8 A8 56 07 00            CALL 0x006f3110
0067DA68  8D 4D FC                  LEA ECX,[EBP + -0x4]
0067DA6B  51                        PUSH ECX
0067DA6C  E8 94 53 D8 FF            CALL 0x00402e05
0067DA71  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0067DA74  83 C4 34                  ADD ESP,0x34
0067DA77  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067DA7D  33 C0                     XOR EAX,EAX
0067DA7F  5F                        POP EDI
0067DA80  5E                        POP ESI
0067DA81  5B                        POP EBX
0067DA82  8B E5                     MOV ESP,EBP
0067DA84  5D                        POP EBP
0067DA85  C3                        RET
LAB_0067da86:
0067DA86  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0067DA89  68 E8 2F 7D 00            PUSH 0x7d2fe8
0067DA8E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067DA93  56                        PUSH ESI
0067DA94  53                        PUSH EBX
0067DA95  68 12 01 00 00            PUSH 0x112
0067DA9A  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DA9F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067DAA4  E8 27 FA 02 00            CALL 0x006ad4d0
0067DAA9  83 C4 18                  ADD ESP,0x18
0067DAAC  85 C0                     TEST EAX,EAX
0067DAAE  74 01                     JZ 0x0067dab1
0067DAB0  CC                        INT3
LAB_0067dab1:
0067DAB1  8D 4D F8                  LEA ECX,[EBP + -0x8]
0067DAB4  51                        PUSH ECX
0067DAB5  E8 7D 3A D8 FF            CALL 0x00401537
0067DABA  8D 55 FC                  LEA EDX,[EBP + -0x4]
0067DABD  52                        PUSH EDX
0067DABE  E8 42 53 D8 FF            CALL 0x00402e05
0067DAC3  83 C4 08                  ADD ESP,0x8
0067DAC6  68 15 01 00 00            PUSH 0x115
0067DACB  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DAD0  53                        PUSH EBX
0067DAD1  56                        PUSH ESI
0067DAD2  E8 69 83 02 00            CALL 0x006a5e40
0067DAD7  8B C6                     MOV EAX,ESI
0067DAD9  5F                        POP EDI
0067DADA  5E                        POP ESI
0067DADB  5B                        POP EBX
0067DADC  8B E5                     MOV ESP,EBP
0067DADE  5D                        POP EBP
0067DADF  C3                        RET
