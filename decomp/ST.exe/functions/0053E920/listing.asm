FUN_0053e920:
0053E920  55                        PUSH EBP
0053E921  8B EC                     MOV EBP,ESP
0053E923  83 EC 48                  SUB ESP,0x48
0053E926  8A 81 84 01 00 00         MOV AL,byte ptr [ECX + 0x184]
0053E92C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053E92F  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
0053E932  56                        PUSH ESI
0053E933  3A C1                     CMP AL,CL
0053E935  75 09                     JNZ 0x0053e940
0053E937  33 C0                     XOR EAX,EAX
0053E939  5E                        POP ESI
0053E93A  8B E5                     MOV ESP,EBP
0053E93C  5D                        POP EBP
0053E93D  C2 04 00                  RET 0x4
LAB_0053e940:
0053E940  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0053E946  8D 45 BC                  LEA EAX,[EBP + -0x44]
0053E949  8D 55 B8                  LEA EDX,[EBP + -0x48]
0053E94C  6A 00                     PUSH 0x0
0053E94E  50                        PUSH EAX
0053E94F  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0053E952  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053E958  E8 93 EE 1E 00            CALL 0x0072d7f0
0053E95D  8B F0                     MOV ESI,EAX
0053E95F  83 C4 08                  ADD ESP,0x8
0053E962  85 F6                     TEST ESI,ESI
0053E964  75 5B                     JNZ 0x0053e9c1
0053E966  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0053E969  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053E96C  84 C0                     TEST AL,AL
0053E96E  88 86 84 01 00 00         MOV byte ptr [ESI + 0x184],AL
0053E974  74 0B                     JZ 0x0053e981
0053E976  8B 16                     MOV EDX,dword ptr [ESI]
0053E978  8B CE                     MOV ECX,ESI
0053E97A  FF 52 20                  CALL dword ptr [EDX + 0x20]
0053E97D  6A 01                     PUSH 0x1
0053E97F  EB 24                     JMP 0x0053e9a5
LAB_0053e981:
0053E981  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0053E987  85 C9                     TEST ECX,ECX
0053E989  74 18                     JZ 0x0053e9a3
0053E98B  66 83 B9 3F 02 00 00 01   CMP word ptr [ECX + 0x23f],0x1
0053E993  75 0E                     JNZ 0x0053e9a3
0053E995  8B 86 80 01 00 00         MOV EAX,dword ptr [ESI + 0x180]
0053E99B  6A 01                     PUSH 0x1
0053E99D  50                        PUSH EAX
0053E99E  E8 19 74 EC FF            CALL 0x00405dbc
LAB_0053e9a3:
0053E9A3  6A 00                     PUSH 0x0
LAB_0053e9a5:
0053E9A5  8B CE                     MOV ECX,ESI
0053E9A7  E8 DF 59 EC FF            CALL 0x0040438b
0053E9AC  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053E9AF  B8 01 00 00 00            MOV EAX,0x1
0053E9B4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053E9BA  5E                        POP ESI
0053E9BB  8B E5                     MOV ESP,EBP
0053E9BD  5D                        POP EBP
0053E9BE  C2 04 00                  RET 0x4
LAB_0053e9c1:
0053E9C1  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0053E9C4  68 84 79 7C 00            PUSH 0x7c7984
0053E9C9  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053E9CE  56                        PUSH ESI
0053E9CF  6A 00                     PUSH 0x0
0053E9D1  68 24 01 00 00            PUSH 0x124
0053E9D6  68 70 78 7C 00            PUSH 0x7c7870
0053E9DB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053E9E1  E8 EA EA 16 00            CALL 0x006ad4d0
0053E9E6  83 C4 18                  ADD ESP,0x18
0053E9E9  85 C0                     TEST EAX,EAX
0053E9EB  74 01                     JZ 0x0053e9ee
0053E9ED  CC                        INT3
LAB_0053e9ee:
0053E9EE  68 24 01 00 00            PUSH 0x124
0053E9F3  68 70 78 7C 00            PUSH 0x7c7870
0053E9F8  6A 00                     PUSH 0x0
0053E9FA  56                        PUSH ESI
0053E9FB  E8 40 74 16 00            CALL 0x006a5e40
0053EA00  B8 01 00 00 00            MOV EAX,0x1
0053EA05  5E                        POP ESI
0053EA06  8B E5                     MOV ESP,EBP
0053EA08  5D                        POP EBP
0053EA09  C2 04 00                  RET 0x4
