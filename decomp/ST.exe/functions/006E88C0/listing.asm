FUN_006e88c0:
006E88C0  55                        PUSH EBP
006E88C1  8B EC                     MOV EBP,ESP
006E88C3  56                        PUSH ESI
006E88C4  57                        PUSH EDI
006E88C5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E88C8  6A 00                     PUSH 0x0
006E88CA  6A 00                     PUSH 0x0
006E88CC  6A 00                     PUSH 0x0
006E88CE  6A 00                     PUSH 0x0
006E88D0  6A 00                     PUSH 0x0
006E88D2  6A 00                     PUSH 0x0
006E88D4  6A 00                     PUSH 0x0
006E88D6  8B F1                     MOV ESI,ECX
006E88D8  57                        PUSH EDI
006E88D9  E8 82 FD FF FF            CALL 0x006e8660
006E88DE  85 C0                     TEST EAX,EAX
006E88E0  0F 85 BC 00 00 00         JNZ 0x006e89a2
006E88E6  8B 0F                     MOV ECX,dword ptr [EDI]
006E88E8  6A 49                     PUSH 0x49
006E88EA  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006E88ED  C1 E0 03                  SHL EAX,0x3
006E88F0  2B C1                     SUB EAX,ECX
006E88F2  8B 8E 1C 03 00 00         MOV ECX,dword ptr [ESI + 0x31c]
006E88F8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E88FB  8D 34 81                  LEA ESI,[ECX + EAX*0x4]
006E88FE  E8 6D 23 FC FF            CALL 0x006aac70
006E8903  85 C0                     TEST EAX,EAX
006E8905  89 86 A0 00 00 00         MOV dword ptr [ESI + 0xa0],EAX
006E890B  75 0B                     JNZ 0x006e8918
006E890D  5F                        POP EDI
006E890E  B8 FE FF FF FF            MOV EAX,0xfffffffe
006E8913  5E                        POP ESI
006E8914  5D                        POP EBP
006E8915  C2 30 00                  RET 0x30
LAB_006e8918:
006E8918  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E891B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E891E  89 10                     MOV dword ptr [EAX],EDX
006E8920  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006E8926  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006E8929  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006E892F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E8932  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
006E8935  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
006E893B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006E893E  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
006E8941  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006E8947  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006E894A  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
006E894D  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006E8953  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006E8956  89 42 14                  MOV dword ptr [EDX + 0x14],EAX
006E8959  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
006E895F  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006E8962  89 51 18                  MOV dword ptr [ECX + 0x18],EDX
006E8965  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006E896B  8A 4D 28                  MOV CL,byte ptr [EBP + 0x28]
006E896E  88 48 1C                  MOV byte ptr [EAX + 0x1c],CL
006E8971  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006E8977  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006E897A  89 42 1D                  MOV dword ptr [EDX + 0x1d],EAX
006E897D  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
006E8983  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006E8986  89 51 21                  MOV dword ptr [ECX + 0x21],EDX
006E8989  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006E898F  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
006E8992  89 48 25                  MOV dword ptr [EAX + 0x25],ECX
006E8995  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006E8998  0D 05 40 00 00            OR EAX,0x4005
006E899D  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006E89A0  33 C0                     XOR EAX,EAX
LAB_006e89a2:
006E89A2  5F                        POP EDI
006E89A3  5E                        POP ESI
006E89A4  5D                        POP EBP
006E89A5  C2 30 00                  RET 0x30
