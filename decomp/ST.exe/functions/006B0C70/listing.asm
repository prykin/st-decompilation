FUN_006b0c70:
006B0C70  55                        PUSH EBP
006B0C71  8B EC                     MOV EBP,ESP
006B0C73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B0C76  53                        PUSH EBX
006B0C77  85 C0                     TEST EAX,EAX
006B0C79  74 4B                     JZ 0x006b0cc6
006B0C7B  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006B0C7E  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006B0C81  3B D9                     CMP EBX,ECX
006B0C83  73 41                     JNC 0x006b0cc6
006B0C85  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006B0C88  56                        PUSH ESI
006B0C89  57                        PUSH EDI
006B0C8A  8B FA                     MOV EDI,EDX
006B0C8C  0F AF FB                  IMUL EDI,EBX
006B0C8F  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
006B0C92  2B CB                     SUB ECX,EBX
006B0C94  03 FE                     ADD EDI,ESI
006B0C96  49                        DEC ECX
006B0C97  0F AF CA                  IMUL ECX,EDX
006B0C9A  8D 34 3A                  LEA ESI,[EDX + EDI*0x1]
006B0C9D  8B D1                     MOV EDX,ECX
006B0C9F  C1 E9 02                  SHR ECX,0x2
006B0CA2  F3 A5                     MOVSD.REP ES:EDI,ESI
006B0CA4  8B CA                     MOV ECX,EDX
006B0CA6  83 E1 03                  AND ECX,0x3
006B0CA9  F3 A4                     MOVSB.REP ES:EDI,ESI
006B0CAB  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
006B0CAE  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B0CB1  4E                        DEC ESI
006B0CB2  5F                        POP EDI
006B0CB3  89 70 0C                  MOV dword ptr [EAX + 0xc],ESI
006B0CB6  3B CB                     CMP ECX,EBX
006B0CB8  5E                        POP ESI
006B0CB9  76 04                     JBE 0x006b0cbf
006B0CBB  49                        DEC ECX
006B0CBC  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
LAB_006b0cbf:
006B0CBF  33 C0                     XOR EAX,EAX
006B0CC1  5B                        POP EBX
006B0CC2  5D                        POP EBP
006B0CC3  C2 08 00                  RET 0x8
LAB_006b0cc6:
006B0CC6  B8 FC FF FF FF            MOV EAX,0xfffffffc
006B0CCB  5B                        POP EBX
006B0CCC  5D                        POP EBP
006B0CCD  C2 08 00                  RET 0x8
