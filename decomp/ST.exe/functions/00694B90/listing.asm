CGenerate::sub_00694B90:
00694B90  56                        PUSH ESI
00694B91  8B F1                     MOV ESI,ECX
00694B93  57                        PUSH EDI
00694B94  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00694B97  8D 7E 08                  LEA EDI,[ESI + 0x8]
00694B9A  85 C0                     TEST EAX,EAX
00694B9C  74 09                     JZ 0x00694ba7
00694B9E  57                        PUSH EDI
00694B9F  E8 3C BC 05 00            CALL 0x006f07e0
00694BA4  83 C4 04                  ADD ESP,0x4
LAB_00694ba7:
00694BA7  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00694BAA  83 C6 0C                  ADD ESI,0xc
00694BAD  85 C0                     TEST EAX,EAX
00694BAF  74 09                     JZ 0x00694bba
00694BB1  56                        PUSH ESI
00694BB2  E8 B9 AF 05 00            CALL 0x006efb70
00694BB7  83 C4 04                  ADD ESP,0x4
LAB_00694bba:
00694BBA  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
00694BC0  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
00694BC6  5F                        POP EDI
00694BC7  5E                        POP ESI
00694BC8  C3                        RET
