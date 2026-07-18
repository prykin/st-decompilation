FUN_004edf30:
004EDF30  55                        PUSH EBP
004EDF31  8B EC                     MOV EBP,ESP
004EDF33  83 EC 48                  SUB ESP,0x48
004EDF36  56                        PUSH ESI
004EDF37  8B F1                     MOV ESI,ECX
004EDF39  57                        PUSH EDI
004EDF3A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004EDF3D  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
004EDF40  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004EDF43  3B F8                     CMP EDI,EAX
004EDF45  0F 84 F4 00 00 00         JZ 0x004ee03f
004EDF4B  57                        PUSH EDI
004EDF4C  E8 E5 6D F1 FF            CALL 0x00404d36
004EDF51  8B 86 74 01 00 00         MOV EAX,dword ptr [ESI + 0x174]
004EDF57  C7 46 28 24 00 00 00      MOV dword ptr [ESI + 0x28],0x24
004EDF5E  85 FF                     TEST EDI,EDI
004EDF60  74 02                     JZ 0x004edf64
004EDF62  F7 D8                     NEG EAX
LAB_004edf64:
004EDF64  66 89 46 2E               MOV word ptr [ESI + 0x2e],AX
004EDF68  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004EDF6D  8D 55 BC                  LEA EDX,[EBP + -0x44]
004EDF70  8D 4D B8                  LEA ECX,[EBP + -0x48]
004EDF73  6A 00                     PUSH 0x0
004EDF75  52                        PUSH EDX
004EDF76  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004EDF79  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EDF7F  E8 6C F8 23 00            CALL 0x0072d7f0
004EDF84  8B F0                     MOV ESI,EAX
004EDF86  83 C4 08                  ADD ESP,0x8
004EDF89  85 F6                     TEST ESI,ESI
004EDF8B  75 73                     JNZ 0x004ee000
004EDF8D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004EDF90  8B 86 BE 01 00 00         MOV EAX,dword ptr [ESI + 0x1be]
004EDF96  85 C0                     TEST EAX,EAX
004EDF98  74 0E                     JZ 0x004edfa8
004EDF9A  8D 4E 18                  LEA ECX,[ESI + 0x18]
004EDF9D  51                        PUSH ECX
004EDF9E  50                        PUSH EAX
004EDF9F  6A 02                     PUSH 0x2
004EDFA1  8B CE                     MOV ECX,ESI
004EDFA3  E8 D8 80 1F 00            CALL 0x006e6080
LAB_004edfa8:
004EDFA8  8B 86 C2 01 00 00         MOV EAX,dword ptr [ESI + 0x1c2]
004EDFAE  85 C0                     TEST EAX,EAX
004EDFB0  74 0E                     JZ 0x004edfc0
004EDFB2  8D 56 18                  LEA EDX,[ESI + 0x18]
004EDFB5  8B CE                     MOV ECX,ESI
004EDFB7  52                        PUSH EDX
004EDFB8  50                        PUSH EAX
004EDFB9  6A 02                     PUSH 0x2
004EDFBB  E8 C0 80 1F 00            CALL 0x006e6080
LAB_004edfc0:
004EDFC0  8B 86 C6 01 00 00         MOV EAX,dword ptr [ESI + 0x1c6]
004EDFC6  85 C0                     TEST EAX,EAX
004EDFC8  74 0E                     JZ 0x004edfd8
004EDFCA  8D 4E 18                  LEA ECX,[ESI + 0x18]
004EDFCD  51                        PUSH ECX
004EDFCE  50                        PUSH EAX
004EDFCF  6A 02                     PUSH 0x2
004EDFD1  8B CE                     MOV ECX,ESI
004EDFD3  E8 A8 80 1F 00            CALL 0x006e6080
LAB_004edfd8:
004EDFD8  8B 86 CA 01 00 00         MOV EAX,dword ptr [ESI + 0x1ca]
004EDFDE  85 C0                     TEST EAX,EAX
004EDFE0  74 0E                     JZ 0x004edff0
004EDFE2  8D 56 18                  LEA EDX,[ESI + 0x18]
004EDFE5  8B CE                     MOV ECX,ESI
004EDFE7  52                        PUSH EDX
004EDFE8  50                        PUSH EAX
004EDFE9  6A 02                     PUSH 0x2
004EDFEB  E8 90 80 1F 00            CALL 0x006e6080
LAB_004edff0:
004EDFF0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004EDFF3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EDFF8  5F                        POP EDI
004EDFF9  5E                        POP ESI
004EDFFA  8B E5                     MOV ESP,EBP
004EDFFC  5D                        POP EBP
004EDFFD  C2 04 00                  RET 0x4
LAB_004ee000:
004EE000  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004EE003  68 38 17 7C 00            PUSH 0x7c1738
004EE008  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EE00D  56                        PUSH ESI
004EE00E  6A 00                     PUSH 0x0
004EE010  68 87 00 00 00            PUSH 0x87
004EE015  68 94 16 7C 00            PUSH 0x7c1694
004EE01A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EE020  E8 AB F4 1B 00            CALL 0x006ad4d0
004EE025  83 C4 18                  ADD ESP,0x18
004EE028  85 C0                     TEST EAX,EAX
004EE02A  74 01                     JZ 0x004ee02d
004EE02C  CC                        INT3
LAB_004ee02d:
004EE02D  68 87 00 00 00            PUSH 0x87
004EE032  68 94 16 7C 00            PUSH 0x7c1694
004EE037  6A 00                     PUSH 0x0
004EE039  56                        PUSH ESI
004EE03A  E8 01 7E 1B 00            CALL 0x006a5e40
LAB_004ee03f:
004EE03F  5F                        POP EDI
004EE040  5E                        POP ESI
004EE041  8B E5                     MOV ESP,EBP
004EE043  5D                        POP EBP
004EE044  C2 04 00                  RET 0x4
