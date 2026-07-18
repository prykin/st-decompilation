FUN_004e9c20:
004E9C20  55                        PUSH EBP
004E9C21  8B EC                     MOV EBP,ESP
004E9C23  51                        PUSH ECX
004E9C24  56                        PUSH ESI
004E9C25  8B F1                     MOV ESI,ECX
004E9C27  8B 86 6C 04 00 00         MOV EAX,dword ptr [ESI + 0x46c]
004E9C2D  85 C0                     TEST EAX,EAX
004E9C2F  74 6B                     JZ 0x004e9c9c
004E9C31  8B 86 8C 04 00 00         MOV EAX,dword ptr [ESI + 0x48c]
004E9C37  85 C0                     TEST EAX,EAX
004E9C39  74 2D                     JZ 0x004e9c68
004E9C3B  8B 8E 70 04 00 00         MOV ECX,dword ptr [ESI + 0x470]
004E9C41  8D 45 FC                  LEA EAX,[EBP + -0x4]
004E9C44  50                        PUSH EAX
004E9C45  51                        PUSH ECX
004E9C46  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E9C4C  E8 7F C6 1F 00            CALL 0x006e62d0
004E9C51  85 C0                     TEST EAX,EAX
004E9C53  75 13                     JNZ 0x004e9c68
004E9C55  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E9C58  56                        PUSH ESI
004E9C59  E8 13 AD F1 FF            CALL 0x00404971
004E9C5E  C7 86 8C 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x48c],0x0
LAB_004e9c68:
004E9C68  8B 86 94 04 00 00         MOV EAX,dword ptr [ESI + 0x494]
004E9C6E  85 C0                     TEST EAX,EAX
004E9C70  74 2A                     JZ 0x004e9c9c
004E9C72  8B 96 88 04 00 00         MOV EDX,dword ptr [ESI + 0x488]
004E9C78  8B 86 84 04 00 00         MOV EAX,dword ptr [ESI + 0x484]
004E9C7E  8B 8E 80 04 00 00         MOV ECX,dword ptr [ESI + 0x480]
004E9C84  52                        PUSH EDX
004E9C85  50                        PUSH EAX
004E9C86  51                        PUSH ECX
004E9C87  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004E9C8D  E8 42 81 F1 FF            CALL 0x00401dd4
004E9C92  C7 86 94 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x494],0x0
LAB_004e9c9c:
004E9C9C  33 C0                     XOR EAX,EAX
004E9C9E  5E                        POP ESI
004E9C9F  8B E5                     MOV ESP,EBP
004E9CA1  5D                        POP EBP
004E9CA2  C3                        RET
