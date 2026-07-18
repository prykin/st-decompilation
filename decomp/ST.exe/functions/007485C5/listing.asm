FUN_007485c5:
007485C5  56                        PUSH ESI
007485C6  57                        PUSH EDI
007485C7  8B F9                     MOV EDI,ECX
007485C9  8B 87 9C 00 00 00         MOV EAX,dword ptr [EDI + 0x9c]
007485CF  8D B7 9C 00 00 00         LEA ESI,[EDI + 0x9c]
007485D5  85 C0                     TEST EAX,EAX
007485D7  74 09                     JZ 0x007485e2
007485D9  8B 08                     MOV ECX,dword ptr [EAX]
007485DB  50                        PUSH EAX
007485DC  FF 51 08                  CALL dword ptr [ECX + 0x8]
007485DF  83 26 00                  AND dword ptr [ESI],0x0
LAB_007485e2:
007485E2  8B CF                     MOV ECX,EDI
007485E4  E8 CB F5 FF FF            CALL 0x00747bb4
007485E9  5F                        POP EDI
007485EA  5E                        POP ESI
007485EB  C3                        RET
