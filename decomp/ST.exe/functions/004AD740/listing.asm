FUN_004ad740:
004AD740  55                        PUSH EBP
004AD741  8B EC                     MOV EBP,ESP
004AD743  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004AD746  50                        PUSH EAX
004AD747  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004AD74A  6A 20                     PUSH 0x20
004AD74C  6A 20                     PUSH 0x20
004AD74E  D9 40 28                  FLD float ptr [EAX + 0x28]
004AD751  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
004AD754  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
004AD757  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
004AD75D  51                        PUSH ECX
004AD75E  51                        PUSH ECX
004AD75F  D9 1C 24                  FSTP float ptr [ESP]
004AD762  D9 40 24                  FLD float ptr [EAX + 0x24]
004AD765  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
004AD76B  51                        PUSH ECX
004AD76C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AD76F  D9 1C 24                  FSTP float ptr [ESP]
004AD772  52                        PUSH EDX
004AD773  E8 A5 66 F5 FF            CALL 0x00403e1d
004AD778  5D                        POP EBP
004AD779  C2 10 00                  RET 0x10
