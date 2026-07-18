FUN_005bfd30:
005BFD30  55                        PUSH EBP
005BFD31  8B EC                     MOV EBP,ESP
005BFD33  83 EC 50                  SUB ESP,0x50
005BFD36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BFD3B  53                        PUSH EBX
005BFD3C  56                        PUSH ESI
005BFD3D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005BFD40  57                        PUSH EDI
005BFD41  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005BFD44  8D 4D B0                  LEA ECX,[EBP + -0x50]
005BFD47  6A 00                     PUSH 0x0
005BFD49  52                        PUSH EDX
005BFD4A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005BFD4D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BFD53  E8 98 DA 16 00            CALL 0x0072d7f0
005BFD58  8B F0                     MOV ESI,EAX
005BFD5A  83 C4 08                  ADD ESP,0x8
005BFD5D  85 F6                     TEST ESI,ESI
005BFD5F  0F 85 ED 00 00 00         JNZ 0x005bfe52
005BFD65  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005BFD68  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005BFD6B  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005BFD6E  85 C9                     TEST ECX,ECX
005BFD70  74 49                     JZ 0x005bfdbb
005BFD72  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005BFD75  33 D2                     XOR EDX,EDX
005BFD77  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005BFD7A  C1 E0 03                  SHL EAX,0x3
005BFD7D  F7 F1                     DIV ECX
005BFD7F  85 C0                     TEST EAX,EAX
005BFD81  76 38                     JBE 0x005bfdbb
005BFD83  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
005BFD86  BB 77 01 00 00            MOV EBX,0x177
005BFD8B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005BFD8E  8D 0C 4F                  LEA ECX,[EDI + ECX*0x2]
005BFD91  8D 54 09 38               LEA EDX,[ECX + ECX*0x1 + 0x38]
005BFD95  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_005bfd98:
005BFD98  8B 46 6F                  MOV EAX,dword ptr [ESI + 0x6f]
005BFD9B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005BFD9E  8B 56 73                  MOV EDX,dword ptr [ESI + 0x73]
005BFDA1  50                        PUSH EAX
005BFDA2  6A 06                     PUSH 0x6
005BFDA4  51                        PUSH ECX
005BFDA5  53                        PUSH EBX
005BFDA6  52                        PUSH EDX
005BFDA7  E8 7D 34 E4 FF            CALL 0x00403229
005BFDAC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BFDAF  83 C4 14                  ADD ESP,0x14
005BFDB2  83 C3 06                  ADD EBX,0x6
005BFDB5  48                        DEC EAX
005BFDB6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005BFDB9  75 DD                     JNZ 0x005bfd98
LAB_005bfdbb:
005BFDBB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005BFDBE  50                        PUSH EAX
005BFDBF  68 04 D0 7C 00            PUSH 0x7cd004
005BFDC4  68 3A F3 80 00            PUSH 0x80f33a
005BFDC9  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005BFDCF  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
005BFDD2  8B 56 73                  MOV EDX,dword ptr [ESI + 0x73]
005BFDD5  83 C4 0C                  ADD ESP,0xc
005BFDD8  8D 3C 4F                  LEA EDI,[EDI + ECX*0x2]
005BFDDB  68 00 00 00 01            PUSH 0x1000000
005BFDE0  6A 1C                     PUSH 0x1c
005BFDE2  8D 7C 3F 30               LEA EDI,[EDI + EDI*0x1 + 0x30]
005BFDE6  6A 50                     PUSH 0x50
005BFDE8  57                        PUSH EDI
005BFDE9  68 80 02 00 00            PUSH 0x280
005BFDEE  6A 00                     PUSH 0x0
005BFDF0  52                        PUSH EDX
005BFDF1  E8 7A 43 0F 00            CALL 0x006b4170
005BFDF6  8B 46 73                  MOV EAX,dword ptr [ESI + 0x73]
005BFDF9  6A 0D                     PUSH 0xd
005BFDFB  6A 18                     PUSH 0x18
005BFDFD  6A 1C                     PUSH 0x1c
005BFDFF  6A 50                     PUSH 0x50
005BFE01  57                        PUSH EDI
005BFE02  68 80 02 00 00            PUSH 0x280
005BFE07  6A 00                     PUSH 0x0
005BFE09  50                        PUSH EAX
005BFE0A  E8 D1 60 0F 00            CALL 0x006b5ee0
005BFE0F  8B 4E 73                  MOV ECX,dword ptr [ESI + 0x73]
005BFE12  6A 1C                     PUSH 0x1c
005BFE14  6A 50                     PUSH 0x50
005BFE16  57                        PUSH EDI
005BFE17  68 80 02 00 00            PUSH 0x280
005BFE1C  6A 00                     PUSH 0x0
005BFE1E  51                        PUSH ECX
005BFE1F  8B 8E 8B 00 00 00         MOV ECX,dword ptr [ESI + 0x8b]
005BFE25  E8 66 0C 15 00            CALL 0x00710a90
005BFE2A  8B 8E 8B 00 00 00         MOV ECX,dword ptr [ESI + 0x8b]
005BFE30  6A 08                     PUSH 0x8
005BFE32  6A FF                     PUSH -0x1
005BFE34  6A FF                     PUSH -0x1
005BFE36  68 3A F3 80 00            PUSH 0x80f33a
005BFE3B  E8 80 1B 15 00            CALL 0x007119c0
005BFE40  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005BFE43  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BFE49  5F                        POP EDI
005BFE4A  5E                        POP ESI
005BFE4B  5B                        POP EBX
005BFE4C  8B E5                     MOV ESP,EBP
005BFE4E  5D                        POP EBP
005BFE4F  C2 0C 00                  RET 0xc
LAB_005bfe52:
005BFE52  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005BFE55  68 E4 CF 7C 00            PUSH 0x7ccfe4
005BFE5A  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BFE5F  56                        PUSH ESI
005BFE60  6A 00                     PUSH 0x0
005BFE62  68 08 02 00 00            PUSH 0x208
005BFE67  68 C8 CE 7C 00            PUSH 0x7ccec8
005BFE6C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005BFE71  E8 5A D6 0E 00            CALL 0x006ad4d0
005BFE76  83 C4 18                  ADD ESP,0x18
005BFE79  85 C0                     TEST EAX,EAX
005BFE7B  74 01                     JZ 0x005bfe7e
005BFE7D  CC                        INT3
LAB_005bfe7e:
005BFE7E  68 08 02 00 00            PUSH 0x208
005BFE83  68 C8 CE 7C 00            PUSH 0x7ccec8
005BFE88  6A 00                     PUSH 0x0
005BFE8A  56                        PUSH ESI
005BFE8B  E8 B0 5F 0E 00            CALL 0x006a5e40
005BFE90  5F                        POP EDI
005BFE91  5E                        POP ESI
005BFE92  5B                        POP EBX
005BFE93  8B E5                     MOV ESP,EBP
005BFE95  5D                        POP EBP
005BFE96  C2 0C 00                  RET 0xc
