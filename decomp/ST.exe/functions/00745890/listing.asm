FUN_00745890:
00745890  55                        PUSH EBP
00745891  8B EC                     MOV EBP,ESP
00745893  6A FF                     PUSH -0x1
00745895  68 50 10 7A 00            PUSH 0x7a1050
0074589A  68 64 D9 72 00            PUSH 0x72d964
0074589F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
007458A5  50                        PUSH EAX
007458A6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
007458AD  83 C4 E8                  ADD ESP,-0x18
007458B0  53                        PUSH EBX
007458B1  56                        PUSH ESI
007458B2  57                        PUSH EDI
007458B3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
007458B6  83 3D F8 74 85 00 00      CMP dword ptr [0x008574f8],0x0
007458BD  75 43                     JNZ 0x00745902
007458BF  6A 00                     PUSH 0x0
007458C1  6A 00                     PUSH 0x0
007458C3  6A 01                     PUSH 0x1
007458C5  6A 00                     PUSH 0x0
007458C7  FF 15 60 BC 85 00         CALL dword ptr [0x0085bc60]
007458CD  85 C0                     TEST EAX,EAX
007458CF  74 0C                     JZ 0x007458dd
007458D1  C7 05 F8 74 85 00 01 00 00 00  MOV dword ptr [0x008574f8],0x1
007458DB  EB 25                     JMP 0x00745902
LAB_007458dd:
007458DD  6A 00                     PUSH 0x0
007458DF  6A 00                     PUSH 0x0
007458E1  6A 01                     PUSH 0x1
007458E3  6A 00                     PUSH 0x0
007458E5  FF 15 10 BC 85 00         CALL dword ptr [0x0085bc10]
007458EB  85 C0                     TEST EAX,EAX
007458ED  74 0C                     JZ 0x007458fb
007458EF  C7 05 F8 74 85 00 02 00 00 00  MOV dword ptr [0x008574f8],0x2
007458F9  EB 07                     JMP 0x00745902
LAB_007458fb:
007458FB  33 C0                     XOR EAX,EAX
007458FD  E9 1F 01 00 00            JMP 0x00745a21
LAB_00745902:
00745902  83 3D F8 74 85 00 02      CMP dword ptr [0x008574f8],0x2
00745909  75 1B                     JNZ 0x00745926
0074590B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074590E  50                        PUSH EAX
0074590F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00745912  51                        PUSH ECX
00745913  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00745916  52                        PUSH EDX
00745917  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074591A  50                        PUSH EAX
0074591B  FF 15 10 BC 85 00         CALL dword ptr [0x0085bc10]
00745921  E9 FB 00 00 00            JMP 0x00745a21
LAB_00745926:
00745926  83 3D F8 74 85 00 01      CMP dword ptr [0x008574f8],0x1
0074592D  0F 85 EC 00 00 00         JNZ 0x00745a1f
00745933  83 7D 18 00               CMP dword ptr [EBP + 0x18],0x0
00745937  75 09                     JNZ 0x00745942
00745939  8B 0D 20 72 85 00         MOV ECX,dword ptr [0x00857220]
0074593F  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_00745942:
00745942  6A 00                     PUSH 0x0
00745944  6A 00                     PUSH 0x0
00745946  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00745949  52                        PUSH EDX
0074594A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074594D  50                        PUSH EAX
0074594E  FF 15 60 BC 85 00         CALL dword ptr [0x0085bc60]
00745954  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00745957  83 7D E4 00               CMP dword ptr [EBP + -0x1c],0x0
0074595B  75 07                     JNZ 0x00745964
0074595D  33 C0                     XOR EAX,EAX
0074595F  E9 BD 00 00 00            JMP 0x00745a21
LAB_00745964:
00745964  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0074596B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0074596E  D1 E0                     SHL EAX,0x1
00745970  83 C0 03                  ADD EAX,0x3
00745973  24 FC                     AND AL,0xfc
00745975  E8 C6 80 FE FF            CALL 0x0072da40
0074597A  89 65 D8                  MOV dword ptr [EBP + -0x28],ESP
0074597D  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00745980  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00745983  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00745986  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0074598D  EB 17                     JMP 0x007459a6
LAB_007459a6:
007459A6  83 7D E0 00               CMP dword ptr [EBP + -0x20],0x0
007459AA  75 04                     JNZ 0x007459b0
007459AC  33 C0                     XOR EAX,EAX
007459AE  EB 71                     JMP 0x00745a21
LAB_007459b0:
007459B0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
007459B3  52                        PUSH EDX
007459B4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
007459B7  50                        PUSH EAX
007459B8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007459BB  51                        PUSH ECX
007459BC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007459BF  52                        PUSH EDX
007459C0  FF 15 60 BC 85 00         CALL dword ptr [0x0085bc60]
007459C6  85 C0                     TEST EAX,EAX
007459C8  75 04                     JNZ 0x007459ce
007459CA  33 C0                     XOR EAX,EAX
007459CC  EB 53                     JMP 0x00745a21
LAB_007459ce:
007459CE  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
007459D2  75 22                     JNZ 0x007459f6
007459D4  6A 00                     PUSH 0x0
007459D6  6A 00                     PUSH 0x0
007459D8  6A 00                     PUSH 0x0
007459DA  6A 00                     PUSH 0x0
007459DC  6A FF                     PUSH -0x1
007459DE  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
007459E1  50                        PUSH EAX
007459E2  68 20 02 00 00            PUSH 0x220
007459E7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007459EA  51                        PUSH ECX
007459EB  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
007459F1  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
007459F4  EB 24                     JMP 0x00745a1a
LAB_007459f6:
007459F6  6A 00                     PUSH 0x0
007459F8  6A 00                     PUSH 0x0
007459FA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007459FD  52                        PUSH EDX
007459FE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00745A01  50                        PUSH EAX
00745A02  6A FF                     PUSH -0x1
00745A04  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00745A07  51                        PUSH ECX
00745A08  68 20 02 00 00            PUSH 0x220
00745A0D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00745A10  52                        PUSH EDX
00745A11  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
00745A17  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_00745a1a:
00745A1A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00745A1D  EB 02                     JMP 0x00745a21
LAB_00745a1f:
00745A1F  33 C0                     XOR EAX,EAX
LAB_00745a21:
00745A21  8D 65 CC                  LEA ESP,[EBP + -0x34]
00745A24  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00745A27  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00745A2E  5F                        POP EDI
00745A2F  5E                        POP ESI
00745A30  5B                        POP EBX
00745A31  8B E5                     MOV ESP,EBP
00745A33  5D                        POP EBP
00745A34  C3                        RET
