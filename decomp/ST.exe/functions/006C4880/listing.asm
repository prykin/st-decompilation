FUN_006c4880:
006C4880  55                        PUSH EBP
006C4881  8B EC                     MOV EBP,ESP
006C4883  83 EC 54                  SUB ESP,0x54
006C4886  53                        PUSH EBX
006C4887  56                        PUSH ESI
006C4888  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C488B  57                        PUSH EDI
006C488C  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006C488F  85 C0                     TEST EAX,EAX
006C4891  75 0B                     JNZ 0x006c489e
006C4893  33 C0                     XOR EAX,EAX
006C4895  5F                        POP EDI
006C4896  5E                        POP ESI
006C4897  5B                        POP EBX
006C4898  8B E5                     MOV ESP,EBP
006C489A  5D                        POP EBP
006C489B  C2 18 00                  RET 0x18
LAB_006c489e:
006C489E  8B 86 08 05 00 00         MOV EAX,dword ptr [ESI + 0x508]
006C48A4  33 DB                     XOR EBX,EBX
006C48A6  85 C0                     TEST EAX,EAX
006C48A8  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006C48AB  74 0D                     JZ 0x006c48ba
006C48AD  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006C48B3  50                        PUSH EAX
006C48B4  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006c48ba:
006C48BA  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006C48BD  8D 55 FC                  LEA EDX,[EBP + -0x4]
006C48C0  52                        PUSH EDX
006C48C1  50                        PUSH EAX
006C48C2  8B 08                     MOV ECX,dword ptr [EAX]
006C48C4  FF 51 44                  CALL dword ptr [ECX + 0x44]
006C48C7  8B F8                     MOV EDI,EAX
006C48C9  85 FF                     TEST EDI,EDI
006C48CB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006C48CE  0F 85 9B 00 00 00         JNZ 0x006c496f
006C48D4  8B 86 B4 04 00 00         MOV EAX,dword ptr [ESI + 0x4b4]
006C48DA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006C48DD  8B 1D 94 BA 85 00         MOV EBX,dword ptr [0x0085ba94]
006C48E3  6A 01                     PUSH 0x1
006C48E5  50                        PUSH EAX
006C48E6  51                        PUSH ECX
006C48E7  FF D3                     CALL EBX
006C48E9  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006C48EF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006C48F2  8D 4D B0                  LEA ECX,[EBP + -0x50]
006C48F5  8D 45 AC                  LEA EAX,[EBP + -0x54]
006C48F8  57                        PUSH EDI
006C48F9  51                        PUSH ECX
006C48FA  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
006C48FD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006C4902  E8 E9 8E 06 00            CALL 0x0072d7f0
006C4907  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C490A  83 C4 08                  ADD ESP,0x8
006C490D  85 C0                     TEST EAX,EAX
006C490F  75 34                     JNZ 0x006c4945
006C4911  8B 96 B4 04 00 00         MOV EDX,dword ptr [ESI + 0x4b4]
006C4917  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C491A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C491D  52                        PUSH EDX
006C491E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C4921  50                        PUSH EAX
006C4922  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C4925  51                        PUSH ECX
006C4926  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C4929  52                        PUSH EDX
006C492A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C492D  50                        PUSH EAX
006C492E  51                        PUSH ECX
006C492F  52                        PUSH EDX
006C4930  E8 1B 2C 01 00            CALL 0x006d7550
006C4935  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006C4938  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006C493B  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006C493E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006C4943  EB 0E                     JMP 0x006c4953
LAB_006c4945:
006C4945  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006C4948  8B F8                     MOV EDI,EAX
006C494A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006C4950  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_006c4953:
006C4953  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006C4956  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C4959  6A 01                     PUSH 0x1
006C495B  52                        PUSH EDX
006C495C  50                        PUSH EAX
006C495D  FF D3                     CALL EBX
006C495F  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006C4962  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C4965  52                        PUSH EDX
006C4966  50                        PUSH EAX
006C4967  8B 08                     MOV ECX,dword ptr [EAX]
006C4969  FF 51 68                  CALL dword ptr [ECX + 0x68]
006C496C  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_006c496f:
006C496F  8B 86 08 05 00 00         MOV EAX,dword ptr [ESI + 0x508]
006C4975  85 C0                     TEST EAX,EAX
006C4977  74 0D                     JZ 0x006c4986
006C4979  81 C6 F0 04 00 00         ADD ESI,0x4f0
006C497F  56                        PUSH ESI
006C4980  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006c4986:
006C4986  85 FF                     TEST EDI,EDI
006C4988  74 13                     JZ 0x006c499d
006C498A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006C498F  6A 24                     PUSH 0x24
006C4991  68 0C DF 7E 00            PUSH 0x7edf0c
006C4996  50                        PUSH EAX
006C4997  57                        PUSH EDI
006C4998  E8 A3 14 FE FF            CALL 0x006a5e40
LAB_006c499d:
006C499D  5F                        POP EDI
006C499E  8B C3                     MOV EAX,EBX
006C49A0  5E                        POP ESI
006C49A1  5B                        POP EBX
006C49A2  8B E5                     MOV ESP,EBP
006C49A4  5D                        POP EBP
006C49A5  C2 18 00                  RET 0x18
