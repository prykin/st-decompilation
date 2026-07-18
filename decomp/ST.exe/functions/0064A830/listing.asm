FUN_0064a830:
0064A830  55                        PUSH EBP
0064A831  8B EC                     MOV EBP,ESP
0064A833  83 EC 44                  SUB ESP,0x44
0064A836  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064A83B  56                        PUSH ESI
0064A83C  8D 55 C0                  LEA EDX,[EBP + -0x40]
0064A83F  8D 4D BC                  LEA ECX,[EBP + -0x44]
0064A842  6A 00                     PUSH 0x0
0064A844  52                        PUSH EDX
0064A845  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0064A848  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064A84E  E8 9D 2F 0E 00            CALL 0x0072d7f0
0064A853  8B F0                     MOV ESI,EAX
0064A855  83 C4 08                  ADD ESP,0x8
0064A858  85 F6                     TEST ESI,ESI
0064A85A  75 50                     JNZ 0x0064a8ac
0064A85C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064A85F  8B 06                     MOV EAX,dword ptr [ESI]
0064A861  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0064A864  3B C8                     CMP ECX,EAX
0064A866  7C 15                     JL 0x0064a87d
0064A868  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0064A86B  83 C0 0A                  ADD EAX,0xa
0064A86E  89 06                     MOV dword ptr [ESI],EAX
0064A870  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0064A873  50                        PUSH EAX
0064A874  51                        PUSH ECX
0064A875  E8 D6 26 06 00            CALL 0x006acf50
0064A87A  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
LAB_0064a87d:
0064A87D  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0064A880  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0064A883  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0064A886  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0064A889  03 C1                     ADD EAX,ECX
0064A88B  8B 0A                     MOV ECX,dword ptr [EDX]
0064A88D  89 08                     MOV dword ptr [EAX],ECX
0064A88F  8A 52 04                  MOV DL,byte ptr [EDX + 0x4]
0064A892  88 50 04                  MOV byte ptr [EAX + 0x4],DL
0064A895  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0064A898  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0064A89B  8D 48 01                  LEA ECX,[EAX + 0x1]
0064A89E  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
0064A8A1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064A8A7  5E                        POP ESI
0064A8A8  8B E5                     MOV ESP,EBP
0064A8AA  5D                        POP EBP
0064A8AB  C3                        RET
LAB_0064a8ac:
0064A8AC  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0064A8AF  6A 56                     PUSH 0x56
0064A8B1  68 04 2A 7D 00            PUSH 0x7d2a04
0064A8B6  6A 00                     PUSH 0x0
0064A8B8  56                        PUSH ESI
0064A8B9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064A8BE  E8 7D B5 05 00            CALL 0x006a5e40
0064A8C3  85 F6                     TEST ESI,ESI
0064A8C5  7D 07                     JGE 0x0064a8ce
0064A8C7  8B C6                     MOV EAX,ESI
0064A8C9  5E                        POP ESI
0064A8CA  8B E5                     MOV ESP,EBP
0064A8CC  5D                        POP EBP
0064A8CD  C3                        RET
LAB_0064a8ce:
0064A8CE  83 C8 FF                  OR EAX,0xffffffff
0064A8D1  5E                        POP ESI
0064A8D2  8B E5                     MOV ESP,EBP
0064A8D4  5D                        POP EBP
0064A8D5  C3                        RET
