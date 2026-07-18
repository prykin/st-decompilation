MReportTy::CreateBut:
005C0980  55                        PUSH EBP
005C0981  8B EC                     MOV EBP,ESP
005C0983  81 EC C8 01 00 00         SUB ESP,0x1c8
005C0989  56                        PUSH ESI
005C098A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005C098D  57                        PUSH EDI
005C098E  B9 5F 00 00 00            MOV ECX,0x5f
005C0993  33 C0                     XOR EAX,EAX
005C0995  8D BD 38 FE FF FF         LEA EDI,[EBP + 0xfffffe38]
005C099B  F3 AB                     STOSD.REP ES:EDI
005C099D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005C09A0  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C09A5  8D 55 B8                  LEA EDX,[EBP + -0x48]
005C09A8  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005C09AB  6A 00                     PUSH 0x0
005C09AD  52                        PUSH EDX
005C09AE  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005C09B1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C09B7  E8 34 CE 16 00            CALL 0x0072d7f0
005C09BC  8B F0                     MOV ESI,EAX
005C09BE  83 C4 08                  ADD ESP,0x8
005C09C1  85 F6                     TEST ESI,ESI
005C09C3  0F 85 97 00 00 00         JNZ 0x005c0a60
005C09C9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005C09CC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005C09CF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005C09D2  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
005C09D5  89 8D 38 FE FF FF         MOV dword ptr [EBP + 0xfffffe38],ECX
005C09DB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005C09DE  89 85 3C FE FF FF         MOV dword ptr [EBP + 0xfffffe3c],EAX
005C09E4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005C09E7  89 8D 48 FE FF FF         MOV dword ptr [EBP + 0xfffffe48],ECX
005C09ED  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005C09F0  89 95 40 FE FF FF         MOV dword ptr [EBP + 0xfffffe40],EDX
005C09F6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005C09F9  89 85 44 FE FF FF         MOV dword ptr [EBP + 0xfffffe44],EAX
005C09FF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005C0A02  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
005C0A05  89 B5 60 FE FF FF         MOV dword ptr [EBP + 0xfffffe60],ESI
005C0A0B  8D B5 38 FE FF FF         LEA ESI,[EBP + 0xfffffe38]
005C0A11  89 95 4C FE FF FF         MOV dword ptr [EBP + 0xfffffe4c],EDX
005C0A17  89 85 58 FE FF FF         MOV dword ptr [EBP + 0xfffffe58],EAX
005C0A1D  89 85 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],EAX
005C0A23  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005C0A26  6A 00                     PUSH 0x0
005C0A28  BA 02 00 00 00            MOV EDX,0x2
005C0A2D  56                        PUSH ESI
005C0A2E  8D 75 FC                  LEA ESI,[EBP + -0x4]
005C0A31  89 95 5C FE FF FF         MOV dword ptr [EBP + 0xfffffe5c],EDX
005C0A37  89 95 9C FE FF FF         MOV dword ptr [EBP + 0xfffffe9c],EDX
005C0A3D  89 85 A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],EAX
005C0A43  8B 01                     MOV EAX,dword ptr [ECX]
005C0A45  6A 00                     PUSH 0x0
005C0A47  56                        PUSH ESI
005C0A48  52                        PUSH EDX
005C0A49  FF 50 08                  CALL dword ptr [EAX + 0x8]
005C0A4C  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005C0A4F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C0A52  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C0A58  5F                        POP EDI
005C0A59  5E                        POP ESI
005C0A5A  8B E5                     MOV ESP,EBP
005C0A5C  5D                        POP EBP
005C0A5D  C2 20 00                  RET 0x20
LAB_005c0a60:
005C0A60  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005C0A63  68 28 D0 7C 00            PUSH 0x7cd028
005C0A68  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C0A6D  56                        PUSH ESI
005C0A6E  6A 00                     PUSH 0x0
005C0A70  68 9F 02 00 00            PUSH 0x29f
005C0A75  68 C8 CE 7C 00            PUSH 0x7ccec8
005C0A7A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C0A80  E8 4B CA 0E 00            CALL 0x006ad4d0
005C0A85  83 C4 18                  ADD ESP,0x18
005C0A88  85 C0                     TEST EAX,EAX
005C0A8A  74 01                     JZ 0x005c0a8d
005C0A8C  CC                        INT3
LAB_005c0a8d:
005C0A8D  68 9F 02 00 00            PUSH 0x29f
005C0A92  68 C8 CE 7C 00            PUSH 0x7ccec8
005C0A97  6A 00                     PUSH 0x0
005C0A99  56                        PUSH ESI
005C0A9A  E8 A1 53 0E 00            CALL 0x006a5e40
005C0A9F  5F                        POP EDI
005C0AA0  33 C0                     XOR EAX,EAX
005C0AA2  5E                        POP ESI
005C0AA3  8B E5                     MOV ESP,EBP
005C0AA5  5D                        POP EBP
005C0AA6  C2 20 00                  RET 0x20
