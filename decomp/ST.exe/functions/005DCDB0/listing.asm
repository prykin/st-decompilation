StartSystemTy::~StartSystemTy:
005DCDB0  56                        PUSH ESI
005DCDB1  8B F1                     MOV ESI,ECX
005DCDB3  57                        PUSH EDI
005DCDB4  33 FF                     XOR EDI,EDI
005DCDB6  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
005DCDB9  3B C7                     CMP EAX,EDI
005DCDBB  74 06                     JZ 0x005dcdc3
005DCDBD  50                        PUSH EAX
005DCDBE  E8 ED 88 10 00            CALL 0x006e56b0
LAB_005dcdc3:
005DCDC3  8B 86 89 03 00 00         MOV EAX,dword ptr [ESI + 0x389]
005DCDC9  89 7E 20                  MOV dword ptr [ESI + 0x20],EDI
005DCDCC  3B C7                     CMP EAX,EDI
005DCDCE  74 08                     JZ 0x005dcdd8
005DCDD0  50                        PUSH EAX
005DCDD1  8B CE                     MOV ECX,ESI
005DCDD3  E8 D8 88 10 00            CALL 0x006e56b0
LAB_005dcdd8:
005DCDD8  8B 86 4C 05 00 00         MOV EAX,dword ptr [ESI + 0x54c]
005DCDDE  89 BE 89 03 00 00         MOV dword ptr [ESI + 0x389],EDI
005DCDE4  3B C7                     CMP EAX,EDI
005DCDE6  74 08                     JZ 0x005dcdf0
005DCDE8  50                        PUSH EAX
005DCDE9  8B CE                     MOV ECX,ESI
005DCDEB  E8 C0 88 10 00            CALL 0x006e56b0
LAB_005dcdf0:
005DCDF0  8B 86 50 05 00 00         MOV EAX,dword ptr [ESI + 0x550]
005DCDF6  89 BE 4C 05 00 00         MOV dword ptr [ESI + 0x54c],EDI
005DCDFC  3B C7                     CMP EAX,EDI
005DCDFE  74 08                     JZ 0x005dce08
005DCE00  50                        PUSH EAX
005DCE01  8B CE                     MOV ECX,ESI
005DCE03  E8 A8 88 10 00            CALL 0x006e56b0
LAB_005dce08:
005DCE08  8B 8E 9A 06 00 00         MOV ECX,dword ptr [ESI + 0x69a]
005DCE0E  8D 86 9A 06 00 00         LEA EAX,[ESI + 0x69a]
005DCE14  3B CF                     CMP ECX,EDI
005DCE16  89 BE 50 05 00 00         MOV dword ptr [ESI + 0x550],EDI
005DCE1C  74 06                     JZ 0x005dce24
005DCE1E  50                        PUSH EAX
005DCE1F  E8 3C E2 0C 00            CALL 0x006ab060
LAB_005dce24:
005DCE24  E8 C1 6B E2 FF            CALL 0x004039ea
005DCE29  8B CE                     MOV ECX,ESI
005DCE2B  E8 56 61 E2 FF            CALL 0x00402f86
005DCE30  8B CE                     MOV ECX,ESI
005DCE32  C7 05 0A C5 80 00 01 00 00 00  MOV dword ptr [0x0080c50a],0x1
005DCE3C  E8 CB 8A E2 FF            CALL 0x0040590c
005DCE41  8B CE                     MOV ECX,ESI
005DCE43  E8 C3 86 E2 FF            CALL 0x0040550b
005DCE48  8B CE                     MOV ECX,ESI
005DCE4A  E8 A7 87 E2 FF            CALL 0x004055f6
005DCE4F  8B CE                     MOV ECX,ESI
005DCE51  E8 7A 84 10 00            CALL 0x006e52d0
005DCE56  5F                        POP EDI
005DCE57  5E                        POP ESI
005DCE58  C3                        RET
