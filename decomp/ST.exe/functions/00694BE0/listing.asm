CGenerate::sub_00694BE0:
00694BE0  56                        PUSH ESI
00694BE1  8B F1                     MOV ESI,ECX
00694BE3  57                        PUSH EDI
00694BE4  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00694BE7  8D 7E 10                  LEA EDI,[ESI + 0x10]
00694BEA  85 C0                     TEST EAX,EAX
00694BEC  74 09                     JZ 0x00694bf7
00694BEE  57                        PUSH EDI
00694BEF  E8 EC BB 05 00            CALL 0x006f07e0
00694BF4  83 C4 04                  ADD ESP,0x4
LAB_00694bf7:
00694BF7  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00694BFA  83 C6 14                  ADD ESI,0x14
00694BFD  85 C0                     TEST EAX,EAX
00694BFF  74 09                     JZ 0x00694c0a
00694C01  56                        PUSH ESI
00694C02  E8 69 AF 05 00            CALL 0x006efb70
00694C07  83 C4 04                  ADD ESP,0x4
LAB_00694c0a:
00694C0A  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
00694C10  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
00694C16  5F                        POP EDI
00694C17  5E                        POP ESI
00694C18  C3                        RET
