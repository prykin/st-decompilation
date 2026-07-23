CGenerate::sub_00695EB0:
00695EB0  56                        PUSH ESI
00695EB1  57                        PUSH EDI
00695EB2  8B F9                     MOV EDI,ECX
00695EB4  8B 87 4B 58 00 00         MOV EAX,dword ptr [EDI + 0x584b]
00695EBA  8D B7 4B 58 00 00         LEA ESI,[EDI + 0x584b]
00695EC0  85 C0                     TEST EAX,EAX
00695EC2  74 06                     JZ 0x00695eca
00695EC4  56                        PUSH ESI
00695EC5  E8 96 51 01 00            CALL 0x006ab060
LAB_00695eca:
00695ECA  8B 87 4F 58 00 00         MOV EAX,dword ptr [EDI + 0x584f]
00695ED0  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
00695ED6  8D B7 4F 58 00 00         LEA ESI,[EDI + 0x584f]
00695EDC  85 C0                     TEST EAX,EAX
00695EDE  74 06                     JZ 0x00695ee6
00695EE0  56                        PUSH ESI
00695EE1  E8 7A 51 01 00            CALL 0x006ab060
LAB_00695ee6:
00695EE6  8B CF                     MOV ECX,EDI
00695EE8  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
00695EEE  E8 AE E2 D6 FF            CALL 0x004041a1
00695EF3  5F                        POP EDI
00695EF4  5E                        POP ESI
00695EF5  C3                        RET
