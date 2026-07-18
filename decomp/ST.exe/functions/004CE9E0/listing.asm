FUN_004ce9e0:
004CE9E0  55                        PUSH EBP
004CE9E1  8B EC                     MOV EBP,ESP
004CE9E3  8D 45 08                  LEA EAX,[EBP + 0x8]
004CE9E6  56                        PUSH ESI
004CE9E7  85 C0                     TEST EAX,EAX
004CE9E9  57                        PUSH EDI
004CE9EA  74 06                     JZ 0x004ce9f2
004CE9EC  66 8B 79 41               MOV DI,word ptr [ECX + 0x41]
004CE9F0  EB 03                     JMP 0x004ce9f5
LAB_004ce9f2:
004CE9F2  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_004ce9f5:
004CE9F5  8D 55 08                  LEA EDX,[EBP + 0x8]
004CE9F8  85 D2                     TEST EDX,EDX
004CE9FA  74 06                     JZ 0x004cea02
004CE9FC  66 8B 71 43               MOV SI,word ptr [ECX + 0x43]
004CEA00  EB 03                     JMP 0x004cea05
LAB_004cea02:
004CEA02  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_004cea05:
004CEA05  8D 45 08                  LEA EAX,[EBP + 0x8]
004CEA08  85 C0                     TEST EAX,EAX
004CEA0A  74 06                     JZ 0x004cea12
004CEA0C  66 8B 51 45               MOV DX,word ptr [ECX + 0x45]
004CEA10  EB 03                     JMP 0x004cea15
LAB_004cea12:
004CEA12  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_004cea15:
004CEA15  8B 89 AC 05 00 00         MOV ECX,dword ptr [ECX + 0x5ac]
004CEA1B  8D 41 CE                  LEA EAX,[ECX + -0x32]
004CEA1E  83 F8 2A                  CMP EAX,0x2a
004CEA21  77 51                     JA 0x004cea74
004CEA23  33 C9                     XOR ECX,ECX
004CEA25  8A 88 88 EA 4C 00         MOV CL,byte ptr [EAX + 0x4cea88]
switchD_004cea2b::switchD:
004CEA2B  FF 24 8D 7C EA 4C 00      JMP dword ptr [ECX*0x4 + 0x4cea7c]
switchD_004cea2b::caseD_40:
004CEA32  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004CEA35  0F BF C7                  MOVSX EAX,DI
004CEA38  89 01                     MOV dword ptr [ECX],EAX
004CEA3A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CEA3D  0F BF C6                  MOVSX EAX,SI
004CEA40  0F BF D2                  MOVSX EDX,DX
004CEA43  89 01                     MOV dword ptr [ECX],EAX
004CEA45  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004CEA48  83 C2 0A                  ADD EDX,0xa
004CEA4B  5F                        POP EDI
004CEA4C  89 10                     MOV dword ptr [EAX],EDX
004CEA4E  5E                        POP ESI
004CEA4F  5D                        POP EBP
004CEA50  C2 0C 00                  RET 0xc
switchD_004cea2b::caseD_32:
004CEA53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CEA56  0F BF CF                  MOVSX ECX,DI
004CEA59  83 C1 64                  ADD ECX,0x64
004CEA5C  89 08                     MOV dword ptr [EAX],ECX
004CEA5E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CEA61  0F BF CE                  MOVSX ECX,SI
004CEA64  83 C1 64                  ADD ECX,0x64
004CEA67  89 08                     MOV dword ptr [EAX],ECX
004CEA69  0F BF CA                  MOVSX ECX,DX
004CEA6C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004CEA6F  83 C1 0A                  ADD ECX,0xa
004CEA72  89 0A                     MOV dword ptr [EDX],ECX
switchD_004cea2b::caseD_33:
004CEA74  5F                        POP EDI
004CEA75  5E                        POP ESI
004CEA76  5D                        POP EBP
004CEA77  C2 0C 00                  RET 0xc
