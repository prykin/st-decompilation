AppClassTy::AddSystem:
006E4650  55                        PUSH EBP
006E4651  8B EC                     MOV EBP,ESP
006E4653  83 EC 74                  SUB ESP,0x74
006E4656  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E465B  56                        PUSH ESI
006E465C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E465F  57                        PUSH EDI
006E4660  8D 55 90                  LEA EDX,[EBP + -0x70]
006E4663  8D 4D 8C                  LEA ECX,[EBP + -0x74]
006E4666  6A 00                     PUSH 0x0
006E4668  52                        PUSH EDX
006E4669  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
006E466C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E4672  E8 79 91 04 00            CALL 0x0072d7f0
006E4677  8B F0                     MOV ESI,EAX
006E4679  83 C4 08                  ADD ESP,0x8
006E467C  85 F6                     TEST ESI,ESI
006E467E  0F 85 09 01 00 00         JNZ 0x006e478d
006E4684  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E4687  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006E468A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E468D  85 C0                     TEST EAX,EAX
006E468F  74 33                     JZ 0x006e46c4
006E4691  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006E4694  8B CF                     MOV ECX,EDI
006E4696  50                        PUSH EAX
006E4697  E8 44 FE FF FF            CALL 0x006e44e0
006E469C  85 C0                     TEST EAX,EAX
006E469E  74 24                     JZ 0x006e46c4
006E46A0  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006E46A3  51                        PUSH ECX
006E46A4  68 90 E9 7E 00            PUSH 0x7ee990
006E46A9  6A 00                     PUSH 0x0
006E46AB  6A 00                     PUSH 0x0
006E46AD  68 CF 01 00 00            PUSH 0x1cf
006E46B2  68 8C E7 7E 00            PUSH 0x7ee78c
006E46B7  E8 14 8E FC FF            CALL 0x006ad4d0
006E46BC  83 C4 18                  ADD ESP,0x18
006E46BF  85 C0                     TEST EAX,EAX
006E46C1  74 01                     JZ 0x006e46c4
006E46C3  CC                        INT3
LAB_006e46c4:
006E46C4  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006E46C7  8B CF                     MOV ECX,EDI
006E46C9  52                        PUSH EDX
006E46CA  E8 D1 FE FF FF            CALL 0x006e45a0
006E46CF  85 C0                     TEST EAX,EAX
006E46D1  74 4E                     JZ 0x006e4721
006E46D3  83 38 01                  CMP dword ptr [EAX],0x1
006E46D6  0F 84 9E 00 00 00         JZ 0x006e477a
006E46DC  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006E46DF  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
006E46E5  85 C9                     TEST ECX,ECX
006E46E7  74 08                     JZ 0x006e46f1
006E46E9  50                        PUSH EAX
006E46EA  8B CF                     MOV ECX,EDI
006E46EC  E8 CF FE FF FF            CALL 0x006e45c0
LAB_006e46f1:
006E46F1  8B 06                     MOV EAX,dword ptr [ESI]
006E46F3  8D 4D D0                  LEA ECX,[EBP + -0x30]
006E46F6  51                        PUSH ECX
006E46F7  8B CE                     MOV ECX,ESI
006E46F9  C7 45 DC 0F 00 00 00      MOV dword ptr [EBP + -0x24],0xf
006E4700  C7 45 E0 08 00 00 00      MOV dword ptr [EBP + -0x20],0x8
006E4707  FF 50 18                  CALL dword ptr [EAX + 0x18]
006E470A  85 C0                     TEST EAX,EAX
006E470C  74 6C                     JZ 0x006e477a
006E470E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006E4714  68 DB 01 00 00            PUSH 0x1db
006E4719  68 8C E7 7E 00            PUSH 0x7ee78c
006E471E  52                        PUSH EDX
006E471F  EB 53                     JMP 0x006e4774
LAB_006e4721:
006E4721  C7 46 1C 00 00 00 00      MOV dword ptr [ESI + 0x1c],0x0
006E4728  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
006E472B  8D 45 F0                  LEA EAX,[EBP + -0x10]
006E472E  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
006E4735  50                        PUSH EAX
006E4736  51                        PUSH ECX
006E4737  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006E473A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006E4741  E8 7A 9A FC FF            CALL 0x006ae1c0
006E4746  8B 16                     MOV EDX,dword ptr [ESI]
006E4748  8D 45 D0                  LEA EAX,[EBP + -0x30]
006E474B  50                        PUSH EAX
006E474C  8B CE                     MOV ECX,ESI
006E474E  C7 45 DC 0F 00 00 00      MOV dword ptr [EBP + -0x24],0xf
006E4755  C7 45 E0 08 00 00 00      MOV dword ptr [EBP + -0x20],0x8
006E475C  FF 52 18                  CALL dword ptr [EDX + 0x18]
006E475F  85 C0                     TEST EAX,EAX
006E4761  74 17                     JZ 0x006e477a
006E4763  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006E4769  68 E6 01 00 00            PUSH 0x1e6
006E476E  68 8C E7 7E 00            PUSH 0x7ee78c
006E4773  51                        PUSH ECX
LAB_006e4774:
006E4774  50                        PUSH EAX
006E4775  E8 C6 16 FC FF            CALL 0x006a5e40
LAB_006e477a:
006E477A  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006E477D  33 C0                     XOR EAX,EAX
006E477F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E4785  5F                        POP EDI
006E4786  5E                        POP ESI
006E4787  8B E5                     MOV ESP,EBP
006E4789  5D                        POP EBP
006E478A  C2 08 00                  RET 0x8
LAB_006e478d:
006E478D  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
006E4790  68 70 E9 7E 00            PUSH 0x7ee970
006E4795  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E479A  56                        PUSH ESI
006E479B  6A 00                     PUSH 0x0
006E479D  68 E9 01 00 00            PUSH 0x1e9
006E47A2  68 8C E7 7E 00            PUSH 0x7ee78c
006E47A7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E47AC  E8 1F 8D FC FF            CALL 0x006ad4d0
006E47B1  83 C4 18                  ADD ESP,0x18
006E47B4  85 C0                     TEST EAX,EAX
006E47B6  74 01                     JZ 0x006e47b9
006E47B8  CC                        INT3
LAB_006e47b9:
006E47B9  68 EA 01 00 00            PUSH 0x1ea
006E47BE  68 8C E7 7E 00            PUSH 0x7ee78c
006E47C3  6A 00                     PUSH 0x0
006E47C5  56                        PUSH ESI
006E47C6  E8 75 16 FC FF            CALL 0x006a5e40
006E47CB  8B C6                     MOV EAX,ESI
006E47CD  5F                        POP EDI
006E47CE  5E                        POP ESI
006E47CF  8B E5                     MOV ESP,EBP
006E47D1  5D                        POP EBP
006E47D2  C2 08 00                  RET 0x8
