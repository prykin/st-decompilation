MReportTy::PaintObjScore:
005BFF00  55                        PUSH EBP
005BFF01  8B EC                     MOV EBP,ESP
005BFF03  83 EC 4C                  SUB ESP,0x4c
005BFF06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BFF0B  53                        PUSH EBX
005BFF0C  56                        PUSH ESI
005BFF0D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005BFF10  57                        PUSH EDI
005BFF11  8D 55 B8                  LEA EDX,[EBP + -0x48]
005BFF14  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005BFF17  6A 00                     PUSH 0x0
005BFF19  52                        PUSH EDX
005BFF1A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005BFF1D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BFF23  E8 C8 D8 16 00            CALL 0x0072d7f0
005BFF28  8B F0                     MOV ESI,EAX
005BFF2A  83 C4 08                  ADD ESP,0x8
005BFF2D  85 F6                     TEST ESI,ESI
005BFF2F  0F 85 F4 00 00 00         JNZ 0x005c0029
005BFF35  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005BFF38  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005BFF3B  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
005BFF3E  83 F8 FF                  CMP EAX,-0x1
005BFF41  74 6B                     JZ 0x005bffae
005BFF43  33 C9                     XOR ECX,ECX
005BFF45  50                        PUSH EAX
005BFF46  8A 4E 69                  MOV CL,byte ptr [ESI + 0x69]
005BFF49  68 FC 28 7C 00            PUSH 0x7c28fc
005BFF4E  68 3A F3 80 00            PUSH 0x80f33a
005BFF53  8A 99 3D C8 80 00         MOV BL,byte ptr [ECX + 0x80c83d]
005BFF59  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005BFF5C  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005BFF62  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005BFF65  8B 4E 73                  MOV ECX,dword ptr [ESI + 0x73]
005BFF68  83 C4 0C                  ADD ESP,0xc
005BFF6B  8D 57 05                  LEA EDX,[EDI + 0x5]
005BFF6E  83 C0 08                  ADD EAX,0x8
005BFF71  6A 14                     PUSH 0x14
005BFF73  6A 36                     PUSH 0x36
005BFF75  52                        PUSH EDX
005BFF76  50                        PUSH EAX
005BFF77  6A 00                     PUSH 0x0
005BFF79  51                        PUSH ECX
005BFF7A  8B 8E 8B 00 00 00         MOV ECX,dword ptr [ESI + 0x8b]
005BFF80  E8 0B 0B 15 00            CALL 0x00710a90
005BFF85  80 FB FF                  CMP BL,0xff
005BFF88  75 07                     JNZ 0x005bff91
005BFF8A  B8 08 00 00 00            MOV EAX,0x8
005BFF8F  EB 08                     JMP 0x005bff99
LAB_005bff91:
005BFF91  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BFF94  25 FF 00 00 00            AND EAX,0xff
LAB_005bff99:
005BFF99  8B 8E 8B 00 00 00         MOV ECX,dword ptr [ESI + 0x8b]
005BFF9F  50                        PUSH EAX
005BFFA0  6A FF                     PUSH -0x1
005BFFA2  6A FF                     PUSH -0x1
005BFFA4  68 3A F3 80 00            PUSH 0x80f33a
005BFFA9  E8 12 1A 15 00            CALL 0x007119c0
LAB_005bffae:
005BFFAE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005BFFB1  8A 1D 46 C8 80 00         MOV BL,byte ptr [0x0080c846]
005BFFB7  52                        PUSH EDX
005BFFB8  68 FC 28 7C 00            PUSH 0x7c28fc
005BFFBD  68 3A F3 80 00            PUSH 0x80f33a
005BFFC2  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005BFFC5  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005BFFCB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005BFFCE  8B 4E 73                  MOV ECX,dword ptr [ESI + 0x73]
005BFFD1  83 C4 0C                  ADD ESP,0xc
005BFFD4  83 C7 05                  ADD EDI,0x5
005BFFD7  83 C0 4C                  ADD EAX,0x4c
005BFFDA  6A 14                     PUSH 0x14
005BFFDC  6A 36                     PUSH 0x36
005BFFDE  57                        PUSH EDI
005BFFDF  50                        PUSH EAX
005BFFE0  6A 00                     PUSH 0x0
005BFFE2  51                        PUSH ECX
005BFFE3  8B 8E 8B 00 00 00         MOV ECX,dword ptr [ESI + 0x8b]
005BFFE9  E8 A2 0A 15 00            CALL 0x00710a90
005BFFEE  80 FB FF                  CMP BL,0xff
005BFFF1  75 07                     JNZ 0x005bfffa
005BFFF3  B8 08 00 00 00            MOV EAX,0x8
005BFFF8  EB 08                     JMP 0x005c0002
LAB_005bfffa:
005BFFFA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BFFFD  25 FF 00 00 00            AND EAX,0xff
LAB_005c0002:
005C0002  8B 8E 8B 00 00 00         MOV ECX,dword ptr [ESI + 0x8b]
005C0008  50                        PUSH EAX
005C0009  6A FF                     PUSH -0x1
005C000B  6A FF                     PUSH -0x1
005C000D  68 3A F3 80 00            PUSH 0x80f33a
005C0012  E8 A9 19 15 00            CALL 0x007119c0
005C0017  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005C001A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C0020  5F                        POP EDI
005C0021  5E                        POP ESI
005C0022  5B                        POP EBX
005C0023  8B E5                     MOV ESP,EBP
005C0025  5D                        POP EBP
005C0026  C2 10 00                  RET 0x10
LAB_005c0029:
005C0029  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005C002C  68 08 D0 7C 00            PUSH 0x7cd008
005C0031  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C0036  56                        PUSH ESI
005C0037  6A 00                     PUSH 0x0
005C0039  68 1C 02 00 00            PUSH 0x21c
005C003E  68 C8 CE 7C 00            PUSH 0x7ccec8
005C0043  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C0048  E8 83 D4 0E 00            CALL 0x006ad4d0
005C004D  83 C4 18                  ADD ESP,0x18
005C0050  85 C0                     TEST EAX,EAX
005C0052  74 01                     JZ 0x005c0055
005C0054  CC                        INT3
LAB_005c0055:
005C0055  68 1C 02 00 00            PUSH 0x21c
005C005A  68 C8 CE 7C 00            PUSH 0x7ccec8
005C005F  6A 00                     PUSH 0x0
005C0061  56                        PUSH ESI
005C0062  E8 D9 5D 0E 00            CALL 0x006a5e40
005C0067  5F                        POP EDI
005C0068  5E                        POP ESI
005C0069  5B                        POP EBX
005C006A  8B E5                     MOV ESP,EBP
005C006C  5D                        POP EBP
005C006D  C2 10 00                  RET 0x10
