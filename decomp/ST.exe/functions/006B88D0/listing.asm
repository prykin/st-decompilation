FUN_006b88d0:
006B88D0  55                        PUSH EBP
006B88D1  8B EC                     MOV EBP,ESP
006B88D3  83 EC 48                  SUB ESP,0x48
006B88D6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B88D9  56                        PUSH ESI
006B88DA  6A 40                     PUSH 0x40
006B88DC  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006B88E2  E8 29 23 FF FF            CALL 0x006aac10
006B88E7  85 C0                     TEST EAX,EAX
006B88E9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B88EC  75 0C                     JNZ 0x006b88fa
006B88EE  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B88F3  5E                        POP ESI
006B88F4  8B E5                     MOV ESP,EBP
006B88F6  5D                        POP EBP
006B88F7  C2 20 00                  RET 0x20
LAB_006b88fa:
006B88FA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B88FD  6A 00                     PUSH 0x0
006B88FF  89 08                     MOV dword ptr [EAX],ECX
006B8901  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006B8907  8D 4D BC                  LEA ECX,[EBP + -0x44]
006B890A  8D 45 B8                  LEA EAX,[EBP + -0x48]
006B890D  51                        PUSH ECX
006B890E  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006B8911  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006B8916  E8 D5 4E 07 00            CALL 0x0072d7f0
006B891B  8B F0                     MOV ESI,EAX
006B891D  83 C4 08                  ADD ESP,0x8
006B8920  85 F6                     TEST ESI,ESI
006B8922  75 55                     JNZ 0x006b8979
006B8924  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B8927  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006B892A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B892D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006B8930  52                        PUSH EDX
006B8931  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B8934  50                        PUSH EAX
006B8935  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B8938  51                        PUSH ECX
006B8939  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B893C  52                        PUSH EDX
006B893D  50                        PUSH EAX
006B893E  51                        PUSH ECX
006B893F  56                        PUSH ESI
006B8940  E8 8B FC FF FF            CALL 0x006b85d0
006B8945  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006B8948  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B894B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B8951  C7 80 E4 04 00 00 50 8D 6B 00  MOV dword ptr [EAX + 0x4e4],0x6b8d50
006B895B  C7 80 E8 04 00 00 B0 89 6B 00  MOV dword ptr [EAX + 0x4e8],0x6b89b0
006B8965  89 B0 EC 04 00 00         MOV dword ptr [EAX + 0x4ec],ESI
006B896B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B896E  89 30                     MOV dword ptr [EAX],ESI
006B8970  33 C0                     XOR EAX,EAX
006B8972  5E                        POP ESI
006B8973  8B E5                     MOV ESP,EBP
006B8975  5D                        POP EBP
006B8976  C2 20 00                  RET 0x20
LAB_006b8979:
006B8979  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B897C  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006B897F  52                        PUSH EDX
006B8980  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B8986  E8 A5 00 00 00            CALL 0x006b8a30
006B898B  68 AA 00 00 00            PUSH 0xaa
006B8990  68 18 DC 7E 00            PUSH 0x7edc18
006B8995  6A 00                     PUSH 0x0
006B8997  56                        PUSH ESI
006B8998  E8 A3 D4 FE FF            CALL 0x006a5e40
006B899D  8B C6                     MOV EAX,ESI
006B899F  5E                        POP ESI
006B89A0  8B E5                     MOV ESP,EBP
006B89A2  5D                        POP EBP
006B89A3  C2 20 00                  RET 0x20
