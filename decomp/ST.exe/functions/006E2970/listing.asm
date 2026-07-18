FUN_006e2970:
006E2970  55                        PUSH EBP
006E2971  8B EC                     MOV EBP,ESP
006E2973  83 EC 1C                  SUB ESP,0x1c
006E2976  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E2979  56                        PUSH ESI
006E297A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006E297D  6A 01                     PUSH 0x1
006E297F  8B F1                     MOV ESI,ECX
006E2981  6A 00                     PUSH 0x0
006E2983  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E2986  6A 00                     PUSH 0x0
006E2988  6A 00                     PUSH 0x0
006E298A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006E298D  6A 00                     PUSH 0x0
006E298F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006E2992  6A 00                     PUSH 0x0
006E2994  8D 45 F4                  LEA EAX,[EBP + -0xc]
006E2997  6A 00                     PUSH 0x0
006E2999  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006E299C  50                        PUSH EAX
006E299D  51                        PUSH ECX
006E299E  8B CE                     MOV ECX,ESI
006E29A0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E29A3  E8 28 FC FF FF            CALL 0x006e25d0
006E29A8  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006E29AB  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006E29AE  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006E29B1  C1 FA 10                  SAR EDX,0x10
006E29B4  03 D0                     ADD EDX,EAX
006E29B6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E29B9  C1 F9 10                  SAR ECX,0x10
006E29BC  89 10                     MOV dword ptr [EAX],EDX
006E29BE  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
006E29C1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006E29C4  03 C8                     ADD ECX,EAX
006E29C6  5E                        POP ESI
006E29C7  89 0A                     MOV dword ptr [EDX],ECX
006E29C9  8B E5                     MOV ESP,EBP
006E29CB  5D                        POP EBP
006E29CC  C2 14 00                  RET 0x14
