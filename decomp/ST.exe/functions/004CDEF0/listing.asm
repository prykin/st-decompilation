FUN_004cdef0:
004CDEF0  55                        PUSH EBP
004CDEF1  8B EC                     MOV EBP,ESP
004CDEF3  56                        PUSH ESI
004CDEF4  8B F1                     MOV ESI,ECX
004CDEF6  33 C0                     XOR EAX,EAX
004CDEF8  57                        PUSH EDI
004CDEF9  8B 8E 24 05 00 00         MOV ECX,dword ptr [ESI + 0x524]
004CDEFF  85 C9                     TEST ECX,ECX
004CDF01  7E 52                     JLE 0x004cdf55
004CDF03  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004CDF06  8D 96 D0 04 00 00         LEA EDX,[ESI + 0x4d0]
LAB_004cdf0c:
004CDF0C  39 3A                     CMP dword ptr [EDX],EDI
004CDF0E  74 10                     JZ 0x004cdf20
004CDF10  40                        INC EAX
004CDF11  83 C2 04                  ADD EDX,0x4
004CDF14  3B C1                     CMP EAX,ECX
004CDF16  7C F4                     JL 0x004cdf0c
004CDF18  5F                        POP EDI
004CDF19  5E                        POP ESI
004CDF1A  33 C0                     XOR EAX,EAX
004CDF1C  5D                        POP EBP
004CDF1D  C2 04 00                  RET 0x4
LAB_004cdf20:
004CDF20  8D 50 01                  LEA EDX,[EAX + 0x1]
004CDF23  8B FA                     MOV EDI,EDX
004CDF25  C1 E7 1E                  SHL EDI,0x1e
004CDF28  2B FA                     SUB EDI,EDX
004CDF2A  8D 94 86 D0 04 00 00      LEA EDX,[ESI + EAX*0x4 + 0x4d0]
004CDF31  03 F9                     ADD EDI,ECX
004CDF33  8D 8C 86 D4 04 00 00      LEA ECX,[ESI + EAX*0x4 + 0x4d4]
004CDF3A  C1 E7 02                  SHL EDI,0x2
004CDF3D  57                        PUSH EDI
004CDF3E  51                        PUSH ECX
004CDF3F  52                        PUSH EDX
004CDF40  E8 2B FB 25 00            CALL 0x0072da70
004CDF45  8B 86 24 05 00 00         MOV EAX,dword ptr [ESI + 0x524]
004CDF4B  83 C4 0C                  ADD ESP,0xc
004CDF4E  48                        DEC EAX
004CDF4F  89 86 24 05 00 00         MOV dword ptr [ESI + 0x524],EAX
LAB_004cdf55:
004CDF55  5F                        POP EDI
004CDF56  5E                        POP ESI
004CDF57  33 C0                     XOR EAX,EAX
004CDF59  5D                        POP EBP
004CDF5A  C2 04 00                  RET 0x4
