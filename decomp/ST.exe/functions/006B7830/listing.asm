FUN_006b7830:
006B7830  55                        PUSH EBP
006B7831  8B EC                     MOV EBP,ESP
006B7833  53                        PUSH EBX
006B7834  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B7837  57                        PUSH EDI
006B7838  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B783B  3B 7B 08                  CMP EDI,dword ptr [EBX + 0x8]
006B783E  73 66                     JNC 0x006b78a6
006B7840  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
006B7843  56                        PUSH ESI
006B7844  8D 34 BD 00 00 00 00      LEA ESI,[EDI*0x4 + 0x0]
006B784B  8B 04 06                  MOV EAX,dword ptr [ESI + EAX*0x1]
006B784E  85 C0                     TEST EAX,EAX
006B7850  74 06                     JZ 0x006b7858
006B7852  50                        PUSH EAX
006B7853  E8 38 E6 FE FF            CALL 0x006a5e90
LAB_006b7858:
006B7858  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006B785B  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
006B785E  2B CF                     SUB ECX,EDI
006B7860  03 F0                     ADD ESI,EAX
006B7862  8B C6                     MOV EAX,ESI
006B7864  8D 0C 8D FC FF FF FF      LEA ECX,[ECX*0x4 + 0xfffffffc]
006B786B  8B F8                     MOV EDI,EAX
006B786D  8B D1                     MOV EDX,ECX
006B786F  8D 70 04                  LEA ESI,[EAX + 0x4]
006B7872  C1 E9 02                  SHR ECX,0x2
006B7875  F3 A5                     MOVSD.REP ES:EDI,ESI
006B7877  8B CA                     MOV ECX,EDX
006B7879  83 E1 03                  AND ECX,0x3
006B787C  F3 A4                     MOVSB.REP ES:EDI,ESI
006B787E  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006B7881  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
006B7884  4A                        DEC EDX
006B7885  5E                        POP ESI
006B7886  8B C2                     MOV EAX,EDX
006B7888  89 53 08                  MOV dword ptr [EBX + 0x8],EDX
006B788B  C7 04 81 00 00 00 00      MOV dword ptr [ECX + EAX*0x4],0x0
006B7892  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006B7895  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
006B7898  76 04                     JBE 0x006b789e
006B789A  48                        DEC EAX
006B789B  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
LAB_006b789e:
006B789E  5F                        POP EDI
006B789F  33 C0                     XOR EAX,EAX
006B78A1  5B                        POP EBX
006B78A2  5D                        POP EBP
006B78A3  C2 08 00                  RET 0x8
LAB_006b78a6:
006B78A6  5F                        POP EDI
006B78A7  B8 FC FF FF FF            MOV EAX,0xfffffffc
006B78AC  5B                        POP EBX
006B78AD  5D                        POP EBP
006B78AE  C2 08 00                  RET 0x8
