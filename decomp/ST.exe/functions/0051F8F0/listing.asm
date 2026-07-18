FUN_0051f8f0:
0051F8F0  55                        PUSH EBP
0051F8F1  8B EC                     MOV EBP,ESP
0051F8F3  83 EC 48                  SUB ESP,0x48
0051F8F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051F8FB  53                        PUSH EBX
0051F8FC  56                        PUSH ESI
0051F8FD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051F900  57                        PUSH EDI
0051F901  8D 55 BC                  LEA EDX,[EBP + -0x44]
0051F904  8D 4D B8                  LEA ECX,[EBP + -0x48]
0051F907  6A 00                     PUSH 0x0
0051F909  52                        PUSH EDX
0051F90A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0051F90D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051F913  E8 D8 DE 20 00            CALL 0x0072d7f0
0051F918  8B F0                     MOV ESI,EAX
0051F91A  83 C4 08                  ADD ESP,0x8
0051F91D  85 F6                     TEST ESI,ESI
0051F91F  0F 85 F6 00 00 00         JNZ 0x0051fa1b
0051F925  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051F92A  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
0051F930  2C 03                     SUB AL,0x3
0051F932  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
0051F938  F6 D8                     NEG AL
0051F93A  1B C0                     SBB EAX,EAX
0051F93C  6A 12                     PUSH 0x12
0051F93E  24 F6                     AND AL,0xf6
0051F940  83 C2 E6                  ADD EDX,-0x1a
0051F943  83 C0 1E                  ADD EAX,0x1e
0051F946  2B C8                     SUB ECX,EAX
0051F948  81 E9 87 00 00 00         SUB ECX,0x87
0051F94E  51                        PUSH ECX
0051F94F  52                        PUSH EDX
0051F950  50                        PUSH EAX
0051F951  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0051F956  50                        PUSH EAX
0051F957  E8 24 66 19 00            CALL 0x006b5f80
0051F95C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0051F95F  8B 86 2A 01 00 00         MOV EAX,dword ptr [ESI + 0x12a]
0051F965  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0051F968  85 DB                     TEST EBX,EBX
0051F96A  75 18                     JNZ 0x0051f984
0051F96C  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
0051F970  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
0051F974  83 C3 1F                  ADD EBX,0x1f
0051F977  C1 EB 03                  SHR EBX,0x3
0051F97A  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
0051F980  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_0051f984:
0051F984  50                        PUSH EAX
0051F985  E8 16 56 19 00            CALL 0x006b4fa0
0051F98A  8B CB                     MOV ECX,EBX
0051F98C  8B F8                     MOV EDI,EAX
0051F98E  8B D1                     MOV EDX,ECX
0051F990  33 C0                     XOR EAX,EAX
0051F992  C1 E9 02                  SHR ECX,0x2
0051F995  F3 AB                     STOSD.REP ES:EDI
0051F997  8B CA                     MOV ECX,EDX
0051F999  83 E1 03                  AND ECX,0x3
0051F99C  F3 AA                     STOSB.REP ES:EDI
0051F99E  8A 46 18                  MOV AL,byte ptr [ESI + 0x18]
0051F9A1  8D 7E 18                  LEA EDI,[ESI + 0x18]
0051F9A4  84 C0                     TEST AL,AL
0051F9A6  74 35                     JZ 0x0051f9dd
0051F9A8  8B 86 2A 01 00 00         MOV EAX,dword ptr [ESI + 0x12a]
0051F9AE  8B 8E 1E 01 00 00         MOV ECX,dword ptr [ESI + 0x11e]
0051F9B4  6A 00                     PUSH 0x0
0051F9B6  6A 00                     PUSH 0x0
0051F9B8  6A 00                     PUSH 0x0
0051F9BA  6A 00                     PUSH 0x0
0051F9BC  6A 00                     PUSH 0x0
0051F9BE  50                        PUSH EAX
0051F9BF  E8 CC 10 1F 00            CALL 0x00710a90
0051F9C4  33 C9                     XOR ECX,ECX
0051F9C6  8A 8E 1D 01 00 00         MOV CL,byte ptr [ESI + 0x11d]
0051F9CC  51                        PUSH ECX
0051F9CD  8B 8E 1E 01 00 00         MOV ECX,dword ptr [ESI + 0x11e]
0051F9D3  6A FF                     PUSH -0x1
0051F9D5  6A 00                     PUSH 0x0
0051F9D7  57                        PUSH EDI
0051F9D8  E8 E3 1F 1F 00            CALL 0x007119c0
LAB_0051f9dd:
0051F9DD  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051F9E3  A1 34 67 80 00            MOV EAX,[0x00806734]
0051F9E8  8B 96 2A 01 00 00         MOV EDX,dword ptr [ESI + 0x12a]
0051F9EE  80 E9 03                  SUB CL,0x3
0051F9F1  83 C0 E6                  ADD EAX,-0x1a
0051F9F4  52                        PUSH EDX
0051F9F5  F6 D9                     NEG CL
0051F9F7  1B C9                     SBB ECX,ECX
0051F9F9  6A 01                     PUSH 0x1
0051F9FB  83 E1 F6                  AND ECX,0xfffffff6
0051F9FE  50                        PUSH EAX
0051F9FF  83 C1 1E                  ADD ECX,0x1e
0051FA02  51                        PUSH ECX
0051FA03  E8 30 3D EE FF            CALL 0x00403738
0051FA08  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0051FA0B  83 C4 10                  ADD ESP,0x10
0051FA0E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051FA14  5F                        POP EDI
0051FA15  5E                        POP ESI
0051FA16  5B                        POP EBX
0051FA17  8B E5                     MOV ESP,EBP
0051FA19  5D                        POP EBP
0051FA1A  C3                        RET
LAB_0051fa1b:
0051FA1B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051FA1E  68 74 3E 7C 00            PUSH 0x7c3e74
0051FA23  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051FA28  56                        PUSH ESI
0051FA29  6A 00                     PUSH 0x0
0051FA2B  6A 1B                     PUSH 0x1b
0051FA2D  68 4C 3E 7C 00            PUSH 0x7c3e4c
0051FA32  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051FA37  E8 94 DA 18 00            CALL 0x006ad4d0
0051FA3C  83 C4 18                  ADD ESP,0x18
0051FA3F  85 C0                     TEST EAX,EAX
0051FA41  74 01                     JZ 0x0051fa44
0051FA43  CC                        INT3
LAB_0051fa44:
0051FA44  6A 1B                     PUSH 0x1b
0051FA46  68 4C 3E 7C 00            PUSH 0x7c3e4c
0051FA4B  6A 00                     PUSH 0x0
0051FA4D  56                        PUSH ESI
0051FA4E  E8 ED 63 18 00            CALL 0x006a5e40
0051FA53  5F                        POP EDI
0051FA54  5E                        POP ESI
0051FA55  5B                        POP EBX
0051FA56  8B E5                     MOV ESP,EBP
0051FA58  5D                        POP EBP
0051FA59  C3                        RET
