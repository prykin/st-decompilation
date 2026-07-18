FUN_004a9b60:
004A9B60  55                        PUSH EBP
004A9B61  8B EC                     MOV EBP,ESP
004A9B63  83 EC 08                  SUB ESP,0x8
004A9B66  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004A9B69  53                        PUSH EBX
004A9B6A  56                        PUSH ESI
004A9B6B  8B 1D 08 74 80 00         MOV EBX,dword ptr [0x00807408]
004A9B71  57                        PUSH EDI
004A9B72  8B F9                     MOV EDI,ECX
004A9B74  8B 0D 00 74 80 00         MOV ECX,dword ptr [0x00807400]
004A9B7A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004A9B7D  2B C1                     SUB EAX,ECX
004A9B7F  8B 35 0C 74 80 00         MOV ESI,dword ptr [0x0080740c]
004A9B85  8B C8                     MOV ECX,EAX
004A9B87  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A9B8A  2B CB                     SUB ECX,EBX
004A9B8C  8B 1D 04 74 80 00         MOV EBX,dword ptr [0x00807404]
004A9B92  03 CA                     ADD ECX,EDX
004A9B94  89 15 18 74 80 00         MOV dword ptr [0x00807418],EDX
004A9B9A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
004A9B9D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004A9BA0  2B CB                     SUB ECX,EBX
004A9BA2  8B D9                     MOV EBX,ECX
004A9BA4  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004A9BA7  2B DE                     SUB EBX,ESI
004A9BA9  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
004A9BAC  03 DE                     ADD EBX,ESI
004A9BAE  56                        PUSH ESI
004A9BAF  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
004A9BB2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004A9BB5  89 1D 10 74 80 00         MOV dword ptr [0x00807410],EBX
004A9BBB  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004A9BBE  52                        PUSH EDX
004A9BBF  51                        PUSH ECX
004A9BC0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A9BC6  50                        PUSH EAX
004A9BC7  89 1D 14 74 80 00         MOV dword ptr [0x00807414],EBX
004A9BCD  89 35 1C 74 80 00         MOV dword ptr [0x0080741c],ESI
004A9BD3  E8 88 3A 23 00            CALL 0x006dd660
004A9BD8  DB 05 08 74 80 00         FILD dword ptr [0x00807408]
004A9BDE  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004A9BE1  8B CF                     MOV ECX,EDI
004A9BE3  D8 0D 20 74 80 00         FMUL float ptr [0x00807420]
004A9BE9  D8 F1                     FDIV ST0,ST1
004A9BEB  D9 1D 3D 74 80 00         FSTP float ptr [0x0080743d]
004A9BF1  DB 45 10                  FILD dword ptr [EBP + 0x10]
004A9BF4  D8 0D 20 74 80 00         FMUL float ptr [0x00807420]
004A9BFA  D8 F1                     FDIV ST0,ST1
004A9BFC  D9 1D 41 74 80 00         FSTP float ptr [0x00807441]
004A9C02  DD D8                     FSTP ST0
004A9C04  DB 05 0C 74 80 00         FILD dword ptr [0x0080740c]
004A9C0A  DB 45 14                  FILD dword ptr [EBP + 0x14]
004A9C0D  D8 0D 24 74 80 00         FMUL float ptr [0x00807424]
004A9C13  D8 F1                     FDIV ST0,ST1
004A9C15  D9 1D 45 74 80 00         FSTP float ptr [0x00807445]
004A9C1B  DB 45 F8                  FILD dword ptr [EBP + -0x8]
004A9C1E  D8 0D 24 74 80 00         FMUL float ptr [0x00807424]
004A9C24  D8 F1                     FDIV ST0,ST1
004A9C26  D9 1D 49 74 80 00         FSTP float ptr [0x00807449]
004A9C2C  DD D8                     FSTP ST0
004A9C2E  E8 94 B1 F5 FF            CALL 0x00404dc7
004A9C33  5F                        POP EDI
004A9C34  5E                        POP ESI
004A9C35  5B                        POP EBX
004A9C36  8B E5                     MOV ESP,EBP
004A9C38  5D                        POP EBP
004A9C39  C2 10 00                  RET 0x10
