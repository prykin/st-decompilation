FUN_006b5aa0:
006B5AA0  55                        PUSH EBP
006B5AA1  8B EC                     MOV EBP,ESP
006B5AA3  56                        PUSH ESI
006B5AA4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B5AA7  57                        PUSH EDI
006B5AA8  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B5AAB  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006B5AAE  3B C1                     CMP EAX,ECX
006B5AB0  72 28                     JC 0x006b5ada
006B5AB2  56                        PUSH ESI
006B5AB3  E8 C8 F9 FF FF            CALL 0x006b5480
006B5AB8  8B F8                     MOV EDI,EAX
006B5ABA  85 FF                     TEST EDI,EDI
006B5ABC  74 1C                     JZ 0x006b5ada
006B5ABE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B5AC4  6A 0E                     PUSH 0xe
006B5AC6  68 80 DB 7E 00            PUSH 0x7edb80
006B5ACB  51                        PUSH ECX
006B5ACC  57                        PUSH EDI
006B5ACD  E8 6E 03 FF FF            CALL 0x006a5e40
006B5AD2  8B C7                     MOV EAX,EDI
006B5AD4  5F                        POP EDI
006B5AD5  5E                        POP ESI
006B5AD6  5D                        POP EBP
006B5AD7  C2 08 00                  RET 0x8
LAB_006b5ada:
006B5ADA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B5ADD  85 C0                     TEST EAX,EAX
006B5ADF  74 15                     JZ 0x006b5af6
006B5AE1  50                        PUSH EAX
006B5AE2  E8 C9 EE 00 00            CALL 0x006c49b0
006B5AE7  85 C0                     TEST EAX,EAX
006B5AE9  75 0B                     JNZ 0x006b5af6
006B5AEB  5F                        POP EDI
006B5AEC  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B5AF1  5E                        POP ESI
006B5AF2  5D                        POP EBP
006B5AF3  C2 08 00                  RET 0x8
LAB_006b5af6:
006B5AF6  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006B5AF9  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006B5AFC  5F                        POP EDI
006B5AFD  89 04 91                  MOV dword ptr [ECX + EDX*0x4],EAX
006B5B00  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B5B03  8D 50 01                  LEA EDX,[EAX + 0x1]
006B5B06  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
006B5B09  5E                        POP ESI
006B5B0A  5D                        POP EBP
006B5B0B  C2 08 00                  RET 0x8
