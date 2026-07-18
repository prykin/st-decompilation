FUN_005efc40:
005EFC40  56                        PUSH ESI
005EFC41  8B F1                     MOV ESI,ECX
005EFC43  57                        PUSH EDI
005EFC44  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005EFC47  C6 86 4E 02 00 00 01      MOV byte ptr [ESI + 0x24e],0x1
005EFC4E  0F BF 86 46 02 00 00      MOVSX EAX,word ptr [ESI + 0x246]
005EFC55  0F BF 8E 44 02 00 00      MOVSX ECX,word ptr [ESI + 0x244]
005EFC5C  0F BF 96 42 02 00 00      MOVSX EDX,word ptr [ESI + 0x242]
005EFC63  57                        PUSH EDI
005EFC64  56                        PUSH ESI
005EFC65  6A 00                     PUSH 0x0
005EFC67  50                        PUSH EAX
005EFC68  51                        PUSH ECX
005EFC69  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005EFC6F  52                        PUSH EDX
005EFC70  E8 4C 52 E1 FF            CALL 0x00404ec1
005EFC75  85 C0                     TEST EAX,EAX
005EFC77  75 06                     JNZ 0x005efc7f
005EFC79  FE 8E 52 02 00 00         DEC byte ptr [ESI + 0x252]
LAB_005efc7f:
005EFC7F  8B CE                     MOV ECX,ESI
005EFC81  C7 86 3A 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x23a],0x4
005EFC8B  C6 86 E9 02 00 00 00      MOV byte ptr [ESI + 0x2e9],0x0
005EFC92  C6 86 17 03 00 00 00      MOV byte ptr [ESI + 0x317],0x0
005EFC99  E8 88 5B E1 FF            CALL 0x00405826
005EFC9E  5F                        POP EDI
005EFC9F  5E                        POP ESI
005EFCA0  C3                        RET
