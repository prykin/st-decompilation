SettMapTy::CloseButtons:
005C5B60  55                        PUSH EBP
005C5B61  8B EC                     MOV EBP,ESP
005C5B63  83 EC 48                  SUB ESP,0x48
005C5B66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C5B6B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005C5B6E  56                        PUSH ESI
005C5B6F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005C5B72  8D 4D B8                  LEA ECX,[EBP + -0x48]
005C5B75  6A 00                     PUSH 0x0
005C5B77  52                        PUSH EDX
005C5B78  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005C5B7B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C5B81  E8 6A 7C 16 00            CALL 0x0072d7f0
005C5B86  8B F0                     MOV ESI,EAX
005C5B88  83 C4 08                  ADD ESP,0x8
005C5B8B  85 F6                     TEST ESI,ESI
005C5B8D  75 7E                     JNZ 0x005c5c0d
005C5B8F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005C5B92  8B CE                     MOV ECX,ESI
005C5B94  E8 C0 D8 E3 FF            CALL 0x00403459
005C5B99  8B 06                     MOV EAX,dword ptr [ESI]
005C5B9B  8B CE                     MOV ECX,ESI
005C5B9D  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
005C5BA0  8A 86 E4 21 00 00         MOV AL,byte ptr [ESI + 0x21e4]
005C5BA6  84 C0                     TEST AL,AL
005C5BA8  74 45                     JZ 0x005c5bef
005C5BAA  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C5BAF  8B 88 FC 02 00 00         MOV ECX,dword ptr [EAX + 0x2fc]
005C5BB5  83 F9 FF                  CMP ECX,-0x1
005C5BB8  74 22                     JZ 0x005c5bdc
005C5BBA  8B 90 18 03 00 00         MOV EDX,dword ptr [EAX + 0x318]
005C5BC0  52                        PUSH EDX
005C5BC1  8B 90 14 03 00 00         MOV EDX,dword ptr [EAX + 0x314]
005C5BC7  8B 80 40 03 00 00         MOV EAX,dword ptr [EAX + 0x340]
005C5BCD  52                        PUSH EDX
005C5BCE  6A FE                     PUSH -0x2
005C5BD0  51                        PUSH ECX
005C5BD1  50                        PUSH EAX
005C5BD2  E8 F9 D8 0E 00            CALL 0x006b34d0
005C5BD7  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c5bdc:
005C5BDC  8B 88 EC 02 00 00         MOV ECX,dword ptr [EAX + 0x2ec]
005C5BE2  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C5BE8  51                        PUSH ECX
005C5BE9  52                        PUSH EDX
005C5BEA  E8 01 DF 0E 00            CALL 0x006b3af0
LAB_005c5bef:
005C5BEF  6A FF                     PUSH -0x1
005C5BF1  6A 01                     PUSH 0x1
005C5BF3  6A 0C                     PUSH 0xc
005C5BF5  8B CE                     MOV ECX,ESI
005C5BF7  C6 46 65 04               MOV byte ptr [ESI + 0x65],0x4
005C5BFB  E8 F1 EF E3 FF            CALL 0x00404bf1
005C5C00  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005C5C03  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C5C08  5E                        POP ESI
005C5C09  8B E5                     MOV ESP,EBP
005C5C0B  5D                        POP EBP
005C5C0C  C3                        RET
LAB_005c5c0d:
005C5C0D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005C5C10  68 C4 D1 7C 00            PUSH 0x7cd1c4
005C5C15  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C5C1A  56                        PUSH ESI
005C5C1B  6A 00                     PUSH 0x0
005C5C1D  68 50 02 00 00            PUSH 0x250
005C5C22  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C5C27  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C5C2D  E8 9E 78 0E 00            CALL 0x006ad4d0
005C5C32  83 C4 18                  ADD ESP,0x18
005C5C35  85 C0                     TEST EAX,EAX
005C5C37  74 01                     JZ 0x005c5c3a
005C5C39  CC                        INT3
LAB_005c5c3a:
005C5C3A  68 50 02 00 00            PUSH 0x250
005C5C3F  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C5C44  6A 00                     PUSH 0x0
005C5C46  56                        PUSH ESI
005C5C47  E8 F4 01 0E 00            CALL 0x006a5e40
005C5C4C  5E                        POP ESI
005C5C4D  8B E5                     MOV ESP,EBP
005C5C4F  5D                        POP EBP
005C5C50  C3                        RET
