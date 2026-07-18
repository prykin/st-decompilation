FUN_005daf20:
005DAF20  A1 64 17 81 00            MOV EAX,[0x00811764]
005DAF25  56                        PUSH ESI
005DAF26  85 C0                     TEST EAX,EAX
005DAF28  8B F1                     MOV ESI,ECX
005DAF2A  74 7F                     JZ 0x005dafab
005DAF2C  6A 01                     PUSH 0x1
005DAF2E  50                        PUSH EAX
005DAF2F  E8 CC B5 0D 00            CALL 0x006b6500
005DAF34  A0 7E 87 80 00            MOV AL,[0x0080877e]
005DAF39  84 C0                     TEST AL,AL
005DAF3B  74 14                     JZ 0x005daf51
005DAF3D  A1 64 17 81 00            MOV EAX,[0x00811764]
005DAF42  6A FF                     PUSH -0x1
005DAF44  6A 00                     PUSH 0x0
005DAF46  6A 00                     PUSH 0x0
005DAF48  6A 00                     PUSH 0x0
005DAF4A  6A 10                     PUSH 0x10
005DAF4C  6A 00                     PUSH 0x0
005DAF4E  50                        PUSH EAX
005DAF4F  EB 40                     JMP 0x005daf91
LAB_005daf51:
005DAF51  A1 0E C5 80 00            MOV EAX,[0x0080c50e]
005DAF56  85 C0                     TEST EAX,EAX
005DAF58  74 1B                     JZ 0x005daf75
005DAF5A  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005DAF60  6A FF                     PUSH -0x1
005DAF62  6A 00                     PUSH 0x0
005DAF64  6A 00                     PUSH 0x0
005DAF66  6A 00                     PUSH 0x0
005DAF68  6A 13                     PUSH 0x13
005DAF6A  6A 00                     PUSH 0x0
005DAF6C  51                        PUSH ECX
005DAF6D  E8 EE A3 13 00            CALL 0x00715360
005DAF72  83 C4 1C                  ADD ESP,0x1c
LAB_005daf75:
005DAF75  A1 0A C5 80 00            MOV EAX,[0x0080c50a]
005DAF7A  85 C0                     TEST EAX,EAX
005DAF7C  74 1B                     JZ 0x005daf99
005DAF7E  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005DAF84  6A FF                     PUSH -0x1
005DAF86  6A 00                     PUSH 0x0
005DAF88  6A 00                     PUSH 0x0
005DAF8A  6A 00                     PUSH 0x0
005DAF8C  6A 11                     PUSH 0x11
005DAF8E  6A 00                     PUSH 0x0
005DAF90  52                        PUSH EDX
LAB_005daf91:
005DAF91  E8 CA A3 13 00            CALL 0x00715360
005DAF96  83 C4 1C                  ADD ESP,0x1c
LAB_005daf99:
005DAF99  A1 3C 73 80 00            MOV EAX,[0x0080733c]
005DAF9E  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005DAFA4  50                        PUSH EAX
005DAFA5  51                        PUSH ECX
005DAFA6  E8 55 B5 0D 00            CALL 0x006b6500
LAB_005dafab:
005DAFAB  8B CE                     MOV ECX,ESI
005DAFAD  E8 7E 7B E2 FF            CALL 0x00402b30
005DAFB2  8B CE                     MOV ECX,ESI
005DAFB4  E8 CA 9B E2 FF            CALL 0x00404b83
005DAFB9  8B CE                     MOV ECX,ESI
005DAFBB  E8 34 85 E2 FF            CALL 0x004034f4
005DAFC0  8B 86 96 06 00 00         MOV EAX,dword ptr [ESI + 0x696]
005DAFC6  85 C0                     TEST EAX,EAX
005DAFC8  74 06                     JZ 0x005dafd0
005DAFCA  50                        PUSH EAX
005DAFCB  E8 A0 A5 0D 00            CALL 0x006b5570
LAB_005dafd0:
005DAFD0  C7 86 96 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x696],0x0
005DAFDA  5E                        POP ESI
005DAFDB  C3                        RET
